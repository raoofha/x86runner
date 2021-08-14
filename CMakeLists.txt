cmake_minimum_required(VERSION 3.0)

option(LD80BITS "Set to ON if host device have 80bits long double (i.e. i386)" ${LD80BITS})
option(NOALIGN "Set to ON if host device doesn't need re-align (i.e. i386)" ${NOALIGN})

project(x86runner C ASM)

set(default_build_type "RelwithDebInfo")
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  message(STATUS "Setting build type to '${default_build_type}' as none was specified.")
  set(CMAKE_BUILD_TYPE "${default_build_type}" CACHE STRING "Choose the type of build." FORCE)
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()

set(x86runner x86runner)

if(LD80BITS)
    add_definitions(-DHAVE_LD80BITS)
endif()

if(NOALIGN)
    add_definitions(-DNOALIGN)
endif()

set(x86runner_ROOT ${CMAKE_SOURCE_DIR})
add_definitions(-D__EMSCRIPTEN__)
add_definitions(-std=gnu11 -funwind-tables -fvisibility=hidden)

include_directories(
    "${x86runner_ROOT}/src/include"
    "${x86runner_ROOT}/src"
)

set(ELFLOADER_SRC
    "${x86runner_ROOT}/src/emu/x86emu.c"
    "${x86runner_ROOT}/src/emu/x86run.c"
    "${x86runner_ROOT}/src/emu/x86run66.c"
    "${x86runner_ROOT}/src/emu/x86run660f.c"
    #"${x86runner_ROOT}/src/emu/x86run_private.c"
    #"${x86runner_ROOT}/src/emu/x86syscall.c"
    "${x86runner_ROOT}/src/emu/x86primop.c"
    #"${x86runner_ROOT}/src/emu/x86trace.c"
    #"${x86runner_ROOT}/src/emu/x86int3.c"
    #"${x86runner_ROOT}/src/emu/x86tls.c"
    "${x86runner_ROOT}/src/emu/x87emu_private.c"
    "${x86runner_ROOT}/src/emu/x87run.c"

    "${x86runner_ROOT}/src/x86runner.c"
)

add_executable(${x86runner} ${ELFLOADER_SRC} "${x86runner_ROOT}/src/x86runner.html")
#target_link_libraries(${x86runner} m SDL2 GL pthread)
#target_link_libraries(${x86runner} m SDL2 GL pthread -fsanitize=undefined)
#target_link_libraries(${x86runner} m SDL2 GL pthread -g)

#SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -include ${x86runner_ROOT}/src/override.h")
 SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -include ${x86runner_ROOT}/src/override.h -Wcast-align -Wover-aligned")
#SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -include ${x86runner_ROOT}/src/override.h -Wcast-align -Wover-aligned -fsanitize=undefined")


#SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D'__builtin_bswap32(arg)=((((uint16_t*) &arg)[0] << 16) + ((uint16_t*) &arg)[1])'")
#SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D'__builtin_prefetch(a, b, c)='")
#SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D'__builtin_bswap16(arg)=((((uint8_t*) &arg)[0] << 8) + ((uint8_t*) &arg)[1])'")
##SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D'sched_yield()=(goto fini)'")
#SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D__sighandler_t=sighandler_t")
#SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DSYS_gettid=224")
##SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D'syscall(number, ...)=syscall(number, __VA_ARGS__)'")


if(TOWASM)
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-format -g  -gsource-map --source-map-base http://localhost:8000/")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-format -s WASM=0 --use-preload-plugins")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-format -s WASM=0 --memory-init-file 0")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-format")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-format -isystem ${x86runner_ROOT}/src/goverride")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-format ")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-format -gsource-map --source-map-base http://localhost:8000/")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-format -isystem ${x86runner_ROOT}/src/goverride -std=c++11")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-format -g ")
   SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-format")

  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m32 -include ${x86runner_ROOT}/src/override.h -s USE_SDL=2 --preload-file dir@/ --pre-js pre.js -s ALLOW_MEMORY_GROWTH=1 -s ASYNCIFY")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m32 -include ${x86runner_ROOT}/src/override.h -s USE_SDL=2 --pre-js ${x86runner_ROOT}/src/pre.js -s ALLOW_MEMORY_GROWTH=1 -s ASYNCIFY")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m32 -include ${x86runner_ROOT}/src/override.h -s USE_SDL=2 -s ALLOW_MEMORY_GROWTH=1 -s ASYNCIFY -Oz")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m32 -include ${x86runner_ROOT}/src/override.h -s USE_SDL=2 -s ALLOW_MEMORY_GROWTH=1 -s ASYNCIFY -Oz -s TOTAL_MEMORY=2000MB")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m32 -include ${x86runner_ROOT}/src/override.h -s USE_SDL=2 -s ALLOW_MEMORY_GROWTH=1 -s ASYNCIFY -Oz -s ERROR_ON_UNDEFINED_SYMBOLS=0")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}      -include ${x86runner_ROOT}/src/override.h -s USE_SDL=2 -s ALLOW_MEMORY_GROWTH=1 -s ASYNCIFY -Oz -s ERROR_ON_UNDEFINED_SYMBOLS=0")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}                                                    -s USE_SDL=2 -s ALLOW_MEMORY_GROWTH=1 -s ASYNCIFY -Oz -s ERROR_ON_UNDEFINED_SYMBOLS=0")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}                                                    -s USE_SDL=2 -s ALLOW_MEMORY_GROWTH=1 -s ASYNCIFY     -s ERROR_ON_UNDEFINED_SYMBOLS=0")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}                                                    -s USE_SDL=2 -s ALLOW_MEMORY_GROWTH=1 -s ASYNCIFY     -s ERROR_ON_UNDEFINED_SYMBOLS=0 -s SAFE_HEAP=1")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}                                                    -s USE_SDL=2 -s ALLOW_MEMORY_GROWTH=1 -s ASYNCIFY     -s ERROR_ON_UNDEFINED_SYMBOLS=0 -s SAFE_HEAP=1 -s ASSERTIONS=1 -s WARN_UNALIGNED=1")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}                                                    -s USE_SDL=2 -s ALLOW_MEMORY_GROWTH=1 -s ASYNCIFY     -s ERROR_ON_UNDEFINED_SYMBOLS=0 -s SAFE_HEAP=1 -s ASSERTIONS=2 -s WARN_UNALIGNED=1")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}                                                    -s USE_SDL=2 -s ALLOW_MEMORY_GROWTH=1 -s ASYNCIFY     -s ERROR_ON_UNDEFINED_SYMBOLS=0 -s SAFE_HEAP=1 -s ASSERTIONS=2 -s WARN_UNALIGNED=1 -s STACK_OVERFLOW_CHECK=2")
  #SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}                                                    -s USE_SDL=2 -s ALLOW_MEMORY_GROWTH=1 -s ASYNCIFY     -s ERROR_ON_UNDEFINED_SYMBOLS=0 -s SAFE_HEAP=1 -s ASSERTIONS=2 -s WARN_UNALIGNED=1 -s STACK_OVERFLOW_CHECK=2 -g4")

   SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -s USE_SDL=2 -s ALLOW_MEMORY_GROWTH=1 -s ASYNCIFY     -s ERROR_ON_UNDEFINED_SYMBOLS=0 -s SAFE_HEAP=1 -s ASSERTIONS=2 -s WARN_UNALIGNED=1 -s STACK_OVERFLOW_CHECK=2 -gsource-map --source-map-base http://localhost:8000/")
  #SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -s USE_SDL=2 -s ALLOW_MEMORY_GROWTH=1 -s ASYNCIFY     -s ERROR_ON_UNDEFINED_SYMBOLS=0 -s SAFE_HEAP=1 -s ASSERTIONS=2 -s WARN_UNALIGNED=1 -s STACK_OVERFLOW_CHECK=2 -g")

  add_custom_command(
      OUTPUT "x86runner.html"
      COMMAND bash "${x86runner_ROOT}/bundle_x86runner_html.sh" ${x86runner_ROOT}
      MAIN_DEPENDENCY "${x86runner_ROOT}/src/x86runner.html"
  )

  add_custom_target(HTML DEPENDS "x86runner.html")
  add_dependencies(${x86runner} HTML)


  #set(CMAKE_EXECUTABLE_SUFFIX ".html")
   set(CMAKE_EXECUTABLE_SUFFIX ".js")

   target_link_libraries(${x86runner} m SDL2 GL pthread -gsource-map --source-map-base http://localhost:8000/)
else(TOWASM)
   target_link_libraries(${x86runner} m SDL2 GL pthread)
endif()
