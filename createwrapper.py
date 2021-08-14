#!/usr/bin/python3
''''
if [ "$1" == "xterm-send" ]; then xterm-send bash $0 $2 ; exit 1 ; fi
echo -ne "\033c"

echo -e "#include <SDL2/SDL.h>\n#define GL_GLEXT_PROTOTYPES\n#include <SDL2/SDL_opengl.h>\n#include <SDL2/SDL_opengl_glext.h>\n#include <time.h>\n" | gcc -x c - -aux-info /dev/stdout 2>/dev/null | python3 $0
exit 1
'''

import sys
import re

def printf(fmt, *args):
  sys.stdout.write(fmt % args)

supported = ["floor", "mktime", "gmtime", "strftime", "time", "calloc", "exit", "SDL_CreateWindow", "SDL_Delay", "SDL_GL_CreateContext", "SDL_GL_SwapWindow", "SDL_GetError", "SDL_GetPerformanceCounter", "SDL_GetPerformanceFrequency", "SDL_Init", "SDL_PollEvent", "SDL_SetWindowTitle", "cos", "fmin", "glActiveTexture", "glAttachShader", "glBindBuffer", "glBindTexture", "glBindVertexArray", "glBlendFunc", "glBufferData", "glClear", "glClearColor", "glCompileShader", "glCreateProgram", "glCreateShader", "glDeleteShader", "glDrawArrays", "glEnable", "glEnableVertexAttribArray", "glGenBuffers", "glGenTextures", "glGenVertexArrays", "glGetAttribLocation", "glGetError", "glGetProgramInfoLog", "glGetProgramiv", "glGetShaderInfoLog", "glGetShaderiv", "glGetUniformLocation", "glLineWidth", "glLinkProgram", "glPixelStorei", "glShaderSource", "glTexImage2D", "glTexParameteri", "glUniform1i", "glUniform4fv", "glUniformMatrix4fv", "glUseProgram", "glValidateProgram", "glVertexAttribPointer", "glViewport", "log2", "memcpy", "memmove", "memset", "printf", "rand", "sin", "snprintf", "sqrtf", "strlen"]

lines  = []
protos = []
for line in sys.stdin:
  if ":NF" not in line and "(*)" not in line and "__" not in line and "..." not in line:
    line = re.sub(r"\/\*[^/]*\*\/" , "", line)
    line = re.sub(r"\/\*.* extern ", "", line)
    line = re.sub(r"\/\*.* static ", "", line)
    #line = re.sub(r"const ", "", line)
    line = re.sub(r"^(.* \**)(.*) \((.*)\);\n", r"\1,\2,\3", line)
    proto = line.split(",")
    if len(proto) > 1 and proto[1] in supported:
      lines.append(line)

lines = list(dict.fromkeys(lines))

for line in lines:
    proto = line.split(",")
    proto = list(filter(None, proto))
    proto = list(filter(lambda x: x != "void", proto))

    for i, v in enumerate(proto):
      if i == 2:
        proto[i] = [proto[i], f"R_ESP + sizeof(u32*)"]
      elif i > 2:
        #proto[i] = [proto[i], proto[i - 1][1] + f" + sizeof({proto[i - 1][0]})"]
        #proto[i] = [proto[i], proto[i - 1][1] + f" + (((sizeof({proto[i - 1][0]})) % sizeof(u32)) ? ( (sizeof({proto[i - 1][0]})) + ( sizeof(u32) - ((sizeof({proto[i - 1][0]})) % sizeof(u32)))) : (sizeof({proto[i - 1][0]})) )"]
        #proto[i] = [proto[i], proto[i - 1][1] + f" + (((sizeof({proto[i - 1][0]})) % 4) ? ( (sizeof({proto[i - 1][0]})) + ( 4 - ((sizeof({proto[i - 1][0]})) % 4))) : (sizeof({proto[i - 1][0]})) )"]
        s = f"(sizeof({proto[i - 1][0]}))"
        sr = f"({s} % (sizeof(u32*)))"
        proto[i] = [proto[i], proto[i - 1][1] + f" + ({sr} ? ( {s} + ( sizeof(u32*) - {sr})) : {s} )"]
        #proto[i] = [proto[i], proto[2][1] + "*" + str(i - 1)]
    printf("void X86RUNNERSYSCALLS_%s() {", proto[1])
    #args = ",".join(list(map(lambda x: f"*({x[0]} *) ({x[1]})" if x[0] != " ..." else f"(char*) ({x[1]})" , proto[2:])))
    args = ",".join(list(map(lambda x: f"(*({x[0]} *) ({x[1]}))", proto[2:])))
    if "64" in proto[0]:
      printf("  %s ret = %s(%s);", proto[0], proto[1], args);
      printf("  R_EAX = ((u32*) &ret)[0];");
      printf("  R_EDX = ((u32*) &ret)[1];");
    elif "float" in proto[0] or "double" in proto[0]:
      printf("  %s ret = %s(%s);", proto[0], proto[1], args);
      printf("  fpu_do_push(emu); ST0.d = ret; ")
    elif "void " == proto[0]:
      printf("  %s(%s);", proto[1], args);
    else:
      printf("  R_EAX = (u32) %s(%s);", proto[1], args);
    printf("}\n")
    protos.append(proto)


printf("void* X86Runner_getFnAddress(const char* sym)\n")
printf("{\n")
printf("  if ( !strcmp(\"__gmon_start__\", sym) ) return 0;\n")
printf("  if ( !strcmp(\"__libc_start_main\", sym) ) return &X86RunnerSyscalls___libc_start_main;\n")
printf("  if ( !strcmp(\"printf\", sym) ) return &X86RunnerSyscalls_printf;\n")
printf("  if ( !strcmp(\"snprintf\", sym) ) return &X86RunnerSyscalls_snprintf;\n")
printf("  if ( !strcmp(\"SDL_Delay\", sym) ) return &X86RunnerSyscalls_SDL_Delay;\n")
printf("\n")
for p in protos:
  printf("  if ( !strcmp(\"%s\", sym) ) return &X86RUNNERSYSCALLS_%s;\n", p[1], p[1]) 
printf("\n")
printf("  printf(\"%%s is not implemented.\\n\", sym);\n");
printf("  exit(-1);\n");
printf("}\n")
