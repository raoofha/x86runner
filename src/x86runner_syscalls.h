//WRAP64(GLuint64 , glGetImageHandleARB, GLuint, GLint, GLboolean, GLint, GLenum)
//WRAP64(GLuint64 , glGetImageHandleNV, GLuint, GLint, GLboolean, GLint, GLenum)
//WRAP64(GLuint64 , glGetTextureHandleARB, GLuint)
//WRAP64(GLuint64 , glGetTextureHandleNV, GLuint)
//WRAP64(GLuint64 , glGetTextureSamplerHandleARB, GLuint, GLuint)
//WRAP64(GLuint64 , glGetTextureSamplerHandleNV, GLuint, GLuint)
//WRAP64(Sint64 , SDL_RWseek, SDL_RWops *, Sint64, int)
//WRAP64(Sint64 , SDL_RWsize, SDL_RWops *)
//WRAP64(Sint64 , SDL_RWtell, SDL_RWops *)
//WRAP64(Sint64 , SDL_strtoll, char *, char **, int)
//WRAP64(Uint64 , SDL_ReadBE64, SDL_RWops *)
//WRAP64(Uint64 , SDL_ReadLE64, SDL_RWops *)
//WRAP64(Uint64 , SDL_strtoull, char *, char **, int)
//WRAP(char *, ctermid, char *)
////WRAP(char *, ecvt, double, int, int *, int *)
////WRAP(char *, fcvt, double, int, int *, int *)
//WRAP(char *, fgets, char *, int, FILE *)
////WRAP(char *, gcvt, double, int, char *)
//WRAP(char *, getenv, char *)
//WRAP(char *, index, char *, int)
//WRAP(char *, initstate, unsigned int, char *, size_t)
//WRAP(char *, l64a, long int)
//WRAP(char *, mkdtemp, char *)
////WRAP(char *, mktemp, char *)
////WRAP(char *, qecvt, long double, int, int *, int *)
////WRAP(char *, qfcvt, long double, int, int *, int *)
////WRAP(char *, qgcvt, long double, int, char *)
//WRAP(char *, realpath, char *, char *)
//WRAP(char *, rindex, char *, int)
////WRAP(char *, SDL_GameControllerGetSerial, SDL_GameController *)
////WRAP(char *, SDL_GameControllerGetStringForAxis, SDL_GameControllerAxis)
////WRAP(char *, SDL_GameControllerGetStringForButton, SDL_GameControllerButton)
////WRAP(char *, SDL_GameControllerMappingForDeviceIndex, int)
////WRAP(char *, SDL_GameControllerMappingForGUID, SDL_JoystickGUID)
////WRAP(char *, SDL_GameControllerMappingForIndex, int)
////WRAP(char *, SDL_GameControllerMapping, SDL_GameController *)
////WRAP(char *, SDL_GameControllerNameForIndex, int)
////WRAP(char *, SDL_GameControllerName, SDL_GameController *)
//WRAP(char *, SDL_GetAudioDeviceName, int, int)
//WRAP(char *, SDL_GetAudioDriver, int)
//WRAP(char *, SDL_GetBasePath)
//WRAP(char *, SDL_GetClipboardText)
//WRAP(char *, SDL_GetCurrentAudioDriver)
//WRAP(char *, SDL_GetCurrentVideoDriver)
//WRAP(char *, SDL_GetDisplayName, int)
//WRAP(char *, SDL_getenv, char *)
////WRAP(char *, SDL_GetErrorMsg, char *, int)
//WRAP(char *, SDL_GetHint, char *)
//WRAP(char *, SDL_GetKeyName, SDL_Keycode)
//WRAP(char *, SDL_GetPixelFormatName, Uint32)
//WRAP(char *, SDL_GetPlatform)
//WRAP(char *, SDL_GetPrefPath, char *, char *)
//WRAP(char *, SDL_GetRevision)
//WRAP(char *, SDL_GetScancodeName, SDL_Scancode)
//WRAP(char *, SDL_GetThreadName, SDL_Thread *)
//WRAP(char *, SDL_GetVideoDriver, int)
//WRAP(char *, SDL_GetWindowTitle, SDL_Window *)
//WRAP(char *, SDL_HapticName, int)
//WRAP(char *, SDL_iconv_string, char *, char *, char *, size_t)
//WRAP(char *, SDL_itoa, int, char *, int)
////WRAP(char *, SDL_JoystickGetSerial, SDL_Joystick *)
////WRAP(char *, SDL_JoystickNameForIndex, int)
////WRAP(char *, SDL_JoystickName, SDL_Joystick *)
//WRAP(char *, SDL_lltoa, Sint64, char *, int)
//WRAP(char *, SDL_ltoa, long int, char *, int)
//WRAP(char *, SDL_SensorGetDeviceName, int)
//WRAP(char *, SDL_SensorGetName, SDL_Sensor *)
//WRAP(char *, SDL_strchr, char *, int)
//WRAP(char *, SDL_strdup, char *)
//WRAP(char *, SDL_strlwr, char *)
//WRAP(char *, SDL_strrchr, char *, int)
//WRAP(char *, SDL_strrev, char *)
//WRAP(char *, SDL_strstr, char *, char *)
////WRAP(char *, SDL_strtokr, char *, char *, char **)
//WRAP(char *, SDL_strupr, char *)
//WRAP(char *, SDL_uitoa, unsigned int, char *, int)
//WRAP(char *, SDL_ulltoa, Uint64, char *, int)
//WRAP(char *, SDL_ultoa, long unsigned int, char *, int)
//WRAP(char *, setstate, char *)
//WRAPF(GLfloat , glGetPathLengthNV, GLuint, GLsizei, GLsizei)
//WRAP(FILE *, fdopen, int, char *)
//WRAP(FILE *, fmemopen, void *, size_t, char *)
//WRAP(FILE *, fopen, char *, char *)
//WRAP(FILE *, freopen, char *, char *, FILE *)
//WRAP(FILE *, open_memstream, char **, size_t *)
//WRAP(FILE *, popen, char *, char *)
//WRAP(FILE *, tmpfile)
//WRAPF(long double , acoshl, long double)
//WRAPF(long double , acosl, long double)
//WRAPF(long double , asinhl, long double)
//WRAPF(long double , asinl, long double)
//WRAPF(long double , atan2l, long double, long double)
//WRAPF(long double , atanhl, long double)
//WRAPF(long double , atanl, long double)
//WRAPF(long double , cbrtl, long double)
//WRAPF(long double , ceill, long double)
//WRAPF(long double , copysignl, long double, long double)
//WRAPF(long double , coshl, long double)
//WRAPF(long double , cosl, long double)
////WRAPF(long double , dreml, long double, long double)
//WRAPF(long double , erfcl, long double)
//WRAPF(long double , erfl, long double)
//WRAPF(long double , exp2l, long double)
//WRAPF(long double , expl, long double)
//WRAPF(long double , expm1l, long double)
//WRAPF(long double , fabsl, long double)
//WRAPF(long double , fdiml, long double, long double)
//WRAPF(long double , floorl, long double)
//WRAPF(long double , fmal, long double, long double, long double)
//WRAPF(long double , fmaxl, long double, long double)
//WRAPF(long double , fminl, long double, long double)
//WRAPF(long double , fmodl, long double, long double)
//WRAPF(long double , frexpl, long double, int *)
////WRAPF(long double , gammal, long double)
//WRAPF(long double , hypotl, long double, long double)
////WRAPF(long double , j0l, long double)
////WRAPF(long double , j1l, long double)
////WRAPF(long double , jnl, int, long double)
//WRAPF(long double , ldexpl, long double, int)
//WRAPF(long double , lgammal_r, long double, int *)
//WRAPF(long double , lgammal, long double)
//WRAPF(long double , log10l, long double)
//WRAPF(long double , log1pl, long double)
//WRAPF(long double , log2l, long double)
//WRAPF(long double , logbl, long double)
//WRAPF(long double , logl, long double)
//WRAPF(long double , modfl, long double, long double *)
//WRAPF(long double , nanl, char *)
//WRAPF(long double , nearbyintl, long double)
//WRAPF(long double , nextafterl, long double, long double)
//WRAPF(long double , nexttowardl, long double, long double)
//WRAPF(long double , powl, long double, long double)
//WRAPF(long double , remainderl, long double, long double)
//WRAPF(long double , remquol, long double, long double, int *)
//WRAPF(long double , rintl, long double)
//WRAPF(long double , roundl, long double)
//WRAPF(long double , scalblnl, long double, long int)
////WRAPF(long double , scalbl, long double, long double)
//WRAPF(long double , scalbnl, long double, int)
////WRAPF(long double , significandl, long double)
//WRAPF(long double , sinhl, long double)
//WRAPF(long double , sinl, long double)
//WRAPF(long double , sqrtl, long double)
//WRAPF(long double , strtold, char *, char **)
//WRAPF(long double , tanhl, long double)
//WRAPF(long double , tanl, long double)
//WRAPF(long double , tgammal, long double)
//WRAPF(long double , truncl, long double)
//WRAPF(long double , wcstold, wchar_t *, wchar_t **)
////WRAPF(long double , y0l, long double)
////WRAPF(long double , y1l, long double)
////WRAPF(long double , ynl, int, long double)
//WRAP(GLbitfield , glQueryMatrixxOES, GLfixed *, GLint *)
//WRAP(GLboolean , glAreProgramsResidentNV, GLsizei, GLuint *, GLboolean *)
//WRAP(GLboolean , glAreTexturesResidentEXT, GLsizei, GLuint *, GLboolean *)
//WRAP(GLboolean , glAreTexturesResident, GLsizei, GLuint *, GLboolean *)
//WRAP(GLboolean , glIsAsyncMarkerSGIX, GLuint)
//WRAP(GLboolean , glIsBufferARB, GLuint)
//WRAP(GLboolean , glIsBufferResidentNV, GLenum)
//WRAP(GLboolean , glIsBuffer, GLuint)
//WRAP(GLboolean , glIsEnabledIndexedEXT, GLenum, GLuint)
//WRAP(GLboolean , glIsEnabledi, GLenum, GLuint)
//WRAP(GLboolean , glIsEnabled, GLenum)
//WRAP(GLboolean , glIsFenceAPPLE, GLuint)
//WRAP(GLboolean , glIsFenceNV, GLuint)
//WRAP(GLboolean , glIsFramebufferEXT, GLuint)
//WRAP(GLboolean , glIsFramebuffer, GLuint)
//WRAP(GLboolean , glIsImageHandleResidentARB, GLuint64)
//WRAP(GLboolean , glIsImageHandleResidentNV, GLuint64)
//WRAP(GLboolean , glIsList, GLuint)
//WRAP(GLboolean , glIsNameAMD, GLenum, GLuint)
//WRAP(GLboolean , glIsNamedBufferResidentNV, GLuint)
//WRAP(GLboolean , glIsNamedStringARB, GLint, GLchar *)
//WRAP(GLboolean , glIsObjectBufferATI, GLuint)
//WRAP(GLboolean , glIsOcclusionQueryNV, GLuint)
//WRAP(GLboolean , glIsPathNV, GLuint)
//WRAP(GLboolean , glIsPointInFillPathNV, GLuint, GLuint, GLfloat, GLfloat)
//WRAP(GLboolean , glIsPointInStrokePathNV, GLuint, GLfloat, GLfloat)
//WRAP(GLboolean , glIsProgramARB, GLuint)
//WRAP(GLboolean , glIsProgramNV, GLuint)
//WRAP(GLboolean , glIsProgramPipeline, GLuint)
//WRAP(GLboolean , glIsProgram, GLuint)
//WRAP(GLboolean , glIsQueryARB, GLuint)
//WRAP(GLboolean , glIsQuery, GLuint)
//WRAP(GLboolean , glIsRenderbufferEXT, GLuint)
//WRAP(GLboolean , glIsRenderbuffer, GLuint)
//WRAP(GLboolean , glIsSampler, GLuint)
//WRAP(GLboolean , glIsShader, GLuint)
//WRAP(GLboolean , glIsSync, GLsync)
//WRAP(GLboolean , glIsTextureEXT, GLuint)
//WRAP(GLboolean , glIsTextureHandleResidentARB, GLuint64)
//WRAP(GLboolean , glIsTextureHandleResidentNV, GLuint64)
//WRAP(GLboolean , glIsTexture, GLuint)
//WRAP(GLboolean , glIsTransformFeedbackNV, GLuint)
//WRAP(GLboolean , glIsTransformFeedback, GLuint)
//WRAP(GLboolean , glIsVariantEnabledEXT, GLuint, GLenum)
//WRAP(GLboolean , glIsVertexArrayAPPLE, GLuint)
//WRAP(GLboolean , glIsVertexArray, GLuint)
//WRAP(GLboolean , glIsVertexAttribEnabledAPPLE, GLuint, GLenum)
//WRAP(GLboolean , glPointAlongPathNV, GLuint, GLsizei, GLsizei, GLfloat, GLfloat *, GLfloat *, GLfloat *, GLfloat *)
//WRAP(GLboolean , glTestFenceAPPLE, GLuint)
//WRAP(GLboolean , glTestFenceNV, GLuint)
//WRAP(GLboolean , glTestObjectAPPLE, GLenum, GLuint)
//WRAP(GLboolean , glUnmapBufferARB, GLenum)
//WRAP(GLboolean , glUnmapBuffer, GLenum)
//WRAP(GLboolean , glUnmapNamedBufferEXT, GLuint)
//WRAP(GLboolean , glVDPAUIsSurfaceNV, GLvdpauSurfaceNV)
//WRAP(GLenum , glCheckFramebufferStatusEXT, GLenum)
//WRAP(GLenum , glCheckFramebufferStatus, GLenum)
//WRAP(GLenum , glCheckNamedFramebufferStatusEXT, GLuint, GLenum)
//WRAP(GLenum , glClientWaitSync, GLsync, GLbitfield, GLuint64)
//WRAP(GLenum , glGetGraphicsResetStatusARB)
//WRAP(GLenum , glObjectPurgeableAPPLE, GLenum, GLuint, GLenum)
//WRAP(GLenum , glObjectUnpurgeableAPPLE, GLenum, GLuint, GLenum)
//WRAP(GLenum , glVideoCaptureNV, GLuint, GLuint *, GLuint64EXT *)
//WRAP(GLhandleARB , glCreateProgramObjectARB)
//WRAP(GLhandleARB , glCreateShaderObjectARB, GLenum)
//WRAP(GLhandleARB , glGetHandleARB, GLenum)
//WRAP(GLint , glFinishAsyncSGIX, GLuint *)
//WRAP(GLint , glGetAttribLocationARB, GLhandleARB, GLcharARB *)
//WRAP(GLint , glGetFragDataIndex, GLuint, GLchar *)
//WRAP(GLint , glGetFragDataLocationEXT, GLuint, GLchar *)
//WRAP(GLint , glGetFragDataLocation, GLuint, GLchar *)
//WRAP(GLint , glGetInstrumentsSGIX)
//WRAP(GLint , glGetProgramResourceLocationIndex, GLuint, GLenum, GLchar *)
//WRAP(GLint , glGetProgramResourceLocation, GLuint, GLenum, GLchar *)
//WRAP(GLint , glGetSubroutineUniformLocation, GLuint, GLenum, GLchar *)
//WRAP(GLint , glGetUniformBufferSizeEXT, GLuint, GLint)
//WRAP(GLint , glGetUniformLocationARB, GLhandleARB, GLcharARB *)
//WRAP(GLint , glGetVaryingLocationNV, GLuint, GLchar *)
//WRAP(GLint , glPollAsyncSGIX, GLuint *)
//WRAP(GLint , glPollInstrumentsSGIX, GLint *)
//WRAP(GLint , glRenderMode, GLenum)
//WRAP(GLintptr , glGetUniformOffsetEXT, GLuint, GLint)
//WRAP(GLsync , glCreateSyncFromCLeventARB, struct _cl_context *, struct _cl_event *, GLbitfield)
//WRAP(GLsync , glFenceSync, GLenum, GLbitfield)
//WRAP(GLsync , glImportSyncEXT, GLenum, GLintptr, GLbitfield)
//WRAP(GLubyte *, glGetStringi, GLenum, GLuint)
//WRAP(GLubyte *, glGetString, GLenum)
//WRAP(GLuint , glBindLightParameterEXT, GLenum, GLenum)
//WRAP(GLuint , glBindMaterialParameterEXT, GLenum, GLenum)
//WRAP(GLuint , glBindParameterEXT, GLenum)
//WRAP(GLuint , glBindTexGenParameterEXT, GLenum, GLenum, GLenum)
//WRAP(GLuint , glBindTextureUnitParameterEXT, GLenum, GLenum)
//WRAP(GLuint , glCreateShaderProgramEXT, GLenum, GLchar *)
//WRAP(GLuint , glCreateShaderProgramv, GLenum, GLsizei, GLchar **)
//WRAP(GLuint , glGenAsyncMarkersSGIX, GLsizei)
//WRAP(GLuint , glGenFragmentShadersATI, GLuint)
//WRAP(GLuint , glGenLists, GLsizei)
//WRAP(GLuint , glGenPathsNV, GLsizei)
//WRAP(GLuint , glGenSymbolsEXT, GLenum, GLenum, GLenum, GLuint)
//WRAP(GLuint , glGenVertexShadersEXT, GLuint)
//WRAP(GLuint , glGetDebugMessageLogAMD, GLuint, GLsizei, GLenum *, GLuint *, GLuint *, GLsizei *, GLchar *)
//WRAP(GLuint , glGetDebugMessageLogARB, GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar *)
//WRAP(GLuint , glGetDebugMessageLog, GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar *)
//WRAP(GLuint , glGetProgramResourceIndex, GLuint, GLenum, GLchar *)
//WRAP(GLuint , glGetSubroutineIndex, GLuint, GLenum, GLchar *)
//WRAP(GLuint , glGetUniformBlockIndex, GLuint, GLchar *)
//WRAP(GLuint , glNewObjectBufferATI, GLsizei, void *, GLenum)
//WRAP(GLvdpauSurfaceNV , glVDPAURegisterOutputSurfaceNV, void *, GLenum, GLsizei, GLuint *)
//WRAP(GLvdpauSurfaceNV , glVDPAURegisterVideoSurfaceNV, void *, GLenum, GLsizei, GLuint *)
////WRAP(imaxdiv_t , imaxdiv, intmax_t, intmax_t)
//WRAP(int , abs, int)
//WRAP(int , atoi, char *)
//WRAP(int , bcmp, void *, void *, size_t)
//WRAP(int , clearenv)
////WRAP(int , drand48_r, struct drand48_data *, double *)
////WRAP(int , ecvt_r, double, int, int *, int *, char *, size_t)
////WRAP(int , erand48_r, short unsigned int *, struct drand48_data *, double *)
//WRAP(int , fclose, FILE *)
////WRAP(int , fcvt_r, double, int, int *, int *, char *, size_t)
//WRAP(int , feof, FILE *)
//WRAP(int , feof_unlocked, FILE *)
//WRAP(int , ferror, FILE *)
//WRAP(int , ferror_unlocked, FILE *)
//WRAP(int , fflush, FILE *)
//WRAP(int , fflush_unlocked, FILE *)
//WRAP(int , ffsll, long long int)
//WRAP(int , ffsl, long int)
//WRAP(int , ffs, int)
//WRAP(int , fgetc, FILE *)
//WRAP(int , fgetc_unlocked, FILE *)
//WRAP(int , fgetpos, FILE *, fpos_t *)
//WRAP(int , fileno, FILE *)
//WRAP(int , fileno_unlocked, FILE *)
//WRAP(int , finitef, float)
////WRAP(int , finitel, long double)
//WRAP(int , finite, double)
//WRAP(int , fputc, int, FILE *)
//WRAP(int , fputc_unlocked, int, FILE *)
//WRAP(int , fputs, char *, FILE *)
//WRAP(int , fseek, FILE *, long int, int)
//WRAP(int , fsetpos, FILE *, fpos_t *)
//WRAP(int , ftrylockfile, FILE *)
//WRAP(int , getchar)
//WRAP(int , getchar_unlocked)
//WRAP(int , getc, FILE *)
//WRAP(int , getc_unlocked, FILE *)
//WRAP(int , getloadavg, double *, int)
//WRAP(int , getsubopt, char **, char **, char **)
//WRAP(int , getw, FILE *)
//WRAP(int , ilogbf, float)
//WRAP(int , ilogbl, long double)
//WRAP(int , ilogb, double)
////WRAP(int , initstate_r, unsigned int, char *, size_t, struct random_data *)
//WRAP(int , isalnum_l, int, locale_t)
//WRAP(int , isalnum, int)
//WRAP(int , isalpha_l, int, locale_t)
//WRAP(int , isalpha, int)
//WRAP(int , isascii, int)
//WRAP(int , isblank_l, int, locale_t)
//WRAP(int , isblank, int)
//WRAP(int , iscntrl_l, int, locale_t)
//WRAP(int , iscntrl, int)
//WRAP(int , isdigit_l, int, locale_t)
//WRAP(int , isdigit, int)
//WRAP(int , isgraph_l, int, locale_t)
//WRAP(int , isgraph, int)
//WRAP(int , isinff, float)
////WRAP(int , isinfl, long double)
//WRAP(int , isinf, double)
//WRAP(int , islower_l, int, locale_t)
//WRAP(int , islower, int)
//WRAP(int , isnanf, float)
////WRAP(int , isnanl, long double)
//WRAP(int , isnan, double)
//WRAP(int , isprint_l, int, locale_t)
//WRAP(int , isprint, int)
//WRAP(int , ispunct_l, int, locale_t)
//WRAP(int , ispunct, int)
//WRAP(int , isspace_l, int, locale_t)
//WRAP(int , isspace, int)
//WRAP(int , isupper_l, int, locale_t)
//WRAP(int , isupper, int)
//WRAP(int , isxdigit_l, int, locale_t)
//WRAP(int , isxdigit, int)
////WRAP(int , jrand48_r, short unsigned int *, struct drand48_data *, long int *)
////WRAP(int , lcong48_r, short unsigned int *, struct drand48_data *)
////WRAP(int , lrand48_r, struct drand48_data *, long int *)
//WRAP(intmax_t , imaxabs, intmax_t)
//WRAP(intmax_t , strtoimax, char *, char **, int)
//WRAP(int , mblen, char *, size_t)
//WRAP(int , mbsinit, mbstate_t *)
//WRAP(int , mbtowc, wchar_t *, char *, size_t)
//WRAP(int , memcmp, void *, void *, size_t)
//WRAP(int , mkstemps, char *, int)
//WRAP(int , mkstemp, char *)
////WRAP(int , mrand48_r, struct drand48_data *, long int *)
////WRAP(int , nrand48_r, short unsigned int *, struct drand48_data *, long int *)
//WRAP(int , pclose, FILE *)
//WRAP(int , posix_memalign, void **, size_t, size_t)
//WRAP(int , putchar, int)
//WRAP(int , putchar_unlocked, int)
//WRAP(int , putc, int, FILE *)
//WRAP(int , putc_unlocked, int, FILE *)
//WRAP(int , putenv, char *)
//WRAP(int , puts, char *)
//WRAP(int , putw, int, FILE *)
////WRAP(int , qecvt_r, long double, int, int *, int *, char *, size_t)
////WRAP(int , qfcvt_r, long double, int, int *, int *, char *, size_t)
////WRAP(int , random_r, struct random_data *, int32_t *)
//WRAP(int , rand_r, unsigned int *)
//WRAP(int , remove, char *)
//WRAP(int , renameat, int, char *, int, char *)
//WRAP(int , rename, char *, char *)
////WRAP(int , rpmatch, char *)
//WRAP(int , SDL_abs, int)
//WRAP(int , SDL_atoi, char *)
//WRAP(int , SDL_AtomicAdd, SDL_atomic_t *, int)
//WRAP(int , SDL_AtomicGet, SDL_atomic_t *)
//WRAP(int , SDL_AtomicSet, SDL_atomic_t *, int)
//WRAP(int , SDL_AudioInit, char *)
//WRAP(int , SDL_AudioStreamAvailable, SDL_AudioStream *)
//WRAP(int , SDL_AudioStreamFlush, SDL_AudioStream *)
//WRAP(int , SDL_AudioStreamGet, SDL_AudioStream *, void *, int)
//WRAP(int , SDL_AudioStreamPut, SDL_AudioStream *, void *, int)
//WRAP(int , SDL_BuildAudioCVT, SDL_AudioCVT *, SDL_AudioFormat, Uint8, int, SDL_AudioFormat, Uint8, int)
//WRAP(int , SDL_CaptureMouse, SDL_bool)
//WRAP(int , SDL_CondBroadcast, SDL_cond *)
//WRAP(int , SDL_CondSignal, SDL_cond *)
//WRAP(int , SDL_CondWait, SDL_cond *, SDL_mutex *)
//WRAP(int , SDL_CondWaitTimeout, SDL_cond *, SDL_mutex *, Uint32)
//WRAP(int , SDL_ConvertAudio, SDL_AudioCVT *)
//WRAP(int , SDL_ConvertPixels, int, int, Uint32, void *, int, Uint32, void *, int)
//WRAP(int , SDL_CreateWindowAndRenderer, int, int, Uint32, SDL_Window **, SDL_Renderer **)
//WRAP(int , SDL_Error, SDL_errorcode)
//WRAP(int , SDL_FillRects, SDL_Surface *, SDL_Rect *, int, Uint32)
//WRAP(int , SDL_FillRect, SDL_Surface *, SDL_Rect *, Uint32)
////WRAP(int , SDL_GameControllerAddMappingsFromRW, SDL_RWops *, int)
////WRAP(int , SDL_GameControllerAddMapping, char *)
////WRAP(int , SDL_GameControllerEventState, int)
////WRAP(int , SDL_GameControllerGetNumTouchpadFingers, SDL_GameController *, int)
////WRAP(int , SDL_GameControllerGetNumTouchpads, SDL_GameController *)
////WRAP(int , SDL_GameControllerGetPlayerIndex, SDL_GameController *)
////WRAP(int , SDL_GameControllerGetSensorData, SDL_GameController *, SDL_SensorType, float *, int)
////WRAP(int , SDL_GameControllerGetTouchpadFinger, SDL_GameController *, int, int, Uint8 *, float *, float *, float *)
////WRAP(int , SDL_GameControllerNumMappings)
////WRAP(int , SDL_GameControllerRumble, SDL_GameController *, Uint16, Uint16, Uint32)
////WRAP(int , SDL_GameControllerRumbleTriggers, SDL_GameController *, Uint16, Uint16, Uint32)
////WRAP(int , SDL_GameControllerSetLED, SDL_GameController *, Uint8, Uint8, Uint8)
////WRAP(int , SDL_GameControllerSetSensorEnabled, SDL_GameController *, SDL_SensorType, SDL_bool)
//WRAP(int , SDL_GetColorKey, SDL_Surface *, Uint32 *)
//WRAP(int , SDL_GetCPUCacheLineSize)
//WRAP(int , SDL_GetCPUCount)
//WRAP(int , SDL_GetCurrentDisplayMode, int, SDL_DisplayMode *)
//WRAP(int , SDL_GetDesktopDisplayMode, int, SDL_DisplayMode *)
//WRAP(int , SDL_GetDisplayBounds, int, SDL_Rect *)
//WRAP(int , SDL_GetDisplayDPI, int, float *, float *, float *)
//WRAP(int , SDL_GetDisplayMode, int, int, SDL_DisplayMode *)
//WRAP(int , SDL_GetDisplayUsableBounds, int, SDL_Rect *)
//WRAP(int , SDL_GetNumAllocations)
//WRAP(int , SDL_GetNumAudioDevices, int)
//WRAP(int , SDL_GetNumAudioDrivers)
//WRAP(int , SDL_GetNumDisplayModes, int)
//WRAP(int , SDL_GetNumRenderDrivers)
//WRAP(int , SDL_GetNumTouchDevices)
//WRAP(int , SDL_GetNumTouchFingers, SDL_TouchID)
//WRAP(int , SDL_GetNumVideoDisplays)
//WRAP(int , SDL_GetNumVideoDrivers)
//WRAP(int , SDL_GetRenderDrawBlendMode, SDL_Renderer *, SDL_BlendMode *)
//WRAP(int , SDL_GetRenderDrawColor, SDL_Renderer *, Uint8 *, Uint8 *, Uint8 *, Uint8 *)
//WRAP(int , SDL_GetRenderDriverInfo, int, SDL_RendererInfo *)
//WRAP(int , SDL_GetRendererInfo, SDL_Renderer *, SDL_RendererInfo *)
//WRAP(int , SDL_GetRendererOutputSize, SDL_Renderer *, int *, int *)
//WRAP(int , SDL_GetRevisionNumber)
//WRAP(int , SDL_GetShapedWindowMode, SDL_Window *, SDL_WindowShapeMode *)
//WRAP(int , SDL_GetSurfaceAlphaMod, SDL_Surface *, Uint8 *)
//WRAP(int , SDL_GetSurfaceBlendMode, SDL_Surface *, SDL_BlendMode *)
//WRAP(int , SDL_GetSurfaceColorMod, SDL_Surface *, Uint8 *, Uint8 *, Uint8 *)
//WRAP(int , SDL_GetSystemRAM)
//WRAP(int , SDL_GetTextureAlphaMod, SDL_Texture *, Uint8 *)
//WRAP(int , SDL_GetTextureBlendMode, SDL_Texture *, SDL_BlendMode *)
//WRAP(int , SDL_GetTextureColorMod, SDL_Texture *, Uint8 *, Uint8 *, Uint8 *)
////WRAP(int , SDL_GetTextureScaleMode, SDL_Texture *, SDL_ScaleMode *)
//WRAP(int , SDL_GetWindowBordersSize, SDL_Window *, int *, int *, int *, int *)
//WRAP(int , SDL_GetWindowDisplayIndex, SDL_Window *)
//WRAP(int , SDL_GetWindowDisplayMode, SDL_Window *, SDL_DisplayMode *)
//WRAP(int , SDL_GetWindowGammaRamp, SDL_Window *, Uint16 *, Uint16 *, Uint16 *)
//WRAP(int , SDL_GetWindowOpacity, SDL_Window *, float *)
//WRAP(int , SDL_GL_BindTexture, SDL_Texture *, float *, float *)
//WRAP(int , SDL_GL_GetAttribute, SDL_GLattr, int *)
//WRAP(int , SDL_GL_GetSwapInterval)
//WRAP(int , SDL_GL_LoadLibrary, char *)
//WRAP(int , SDL_GL_MakeCurrent, SDL_Window *, SDL_GLContext)
//WRAP(int , SDL_GL_SetAttribute, SDL_GLattr, int)
//WRAP(int , SDL_GL_SetSwapInterval, int)
//WRAP(int , SDL_GL_UnbindTexture, SDL_Texture *)
//WRAP(int , SDL_HapticEffectSupported, SDL_Haptic *, SDL_HapticEffect *)
//WRAP(int , SDL_HapticGetEffectStatus, SDL_Haptic *, int)
//WRAP(int , SDL_HapticIndex, SDL_Haptic *)
//WRAP(int , SDL_HapticNewEffect, SDL_Haptic *, SDL_HapticEffect *)
//WRAP(int , SDL_HapticNumAxes, SDL_Haptic *)
//WRAP(int , SDL_HapticNumEffectsPlaying, SDL_Haptic *)
//WRAP(int , SDL_HapticNumEffects, SDL_Haptic *)
//WRAP(int , SDL_HapticOpened, int)
//WRAP(int , SDL_HapticPause, SDL_Haptic *)
//WRAP(int , SDL_HapticRumbleInit, SDL_Haptic *)
//WRAP(int , SDL_HapticRumblePlay, SDL_Haptic *, float, Uint32)
//WRAP(int , SDL_HapticRumbleStop, SDL_Haptic *)
//WRAP(int , SDL_HapticRumbleSupported, SDL_Haptic *)
//WRAP(int , SDL_HapticRunEffect, SDL_Haptic *, int, Uint32)
//WRAP(int , SDL_HapticSetAutocenter, SDL_Haptic *, int)
//WRAP(int , SDL_HapticSetGain, SDL_Haptic *, int)
//WRAP(int , SDL_HapticStopAll, SDL_Haptic *)
//WRAP(int , SDL_HapticStopEffect, SDL_Haptic *, int)
//WRAP(int , SDL_HapticUnpause, SDL_Haptic *)
//WRAP(int , SDL_HapticUpdateEffect, SDL_Haptic *, int, SDL_HapticEffect *)
//WRAP(int , SDL_iconv_close, SDL_iconv_t)
//WRAP(int , SDL_InitSubSystem, Uint32)
//WRAP(int , SDL_isdigit, int)
////WRAP(int , SDL_islower, int)
//WRAP(int , SDL_isspace, int)
////WRAP(int , SDL_isupper, int)
////WRAP(int , SDL_JoystickAttachVirtual, SDL_JoystickType, int, int, int)
////WRAP(int , SDL_JoystickDetachVirtual, int)
////WRAP(int , SDL_JoystickEventState, int)
////WRAP(int , SDL_JoystickGetBall, SDL_Joystick *, int, int *, int *)
////WRAP(int , SDL_JoystickGetDevicePlayerIndex, int)
////WRAP(int , SDL_JoystickGetPlayerIndex, SDL_Joystick *)
////WRAP(int , SDL_JoystickIsHaptic, SDL_Joystick *)
////WRAP(int , SDL_JoystickNumAxes, SDL_Joystick *)
////WRAP(int , SDL_JoystickNumBalls, SDL_Joystick *)
////WRAP(int , SDL_JoystickNumButtons, SDL_Joystick *)
////WRAP(int , SDL_JoystickNumHats, SDL_Joystick *)
////WRAP(int , SDL_JoystickRumble, SDL_Joystick *, Uint16, Uint16, Uint32)
////WRAP(int , SDL_JoystickRumbleTriggers, SDL_Joystick *, Uint16, Uint16, Uint32)
////WRAP(int , SDL_JoystickSetLED, SDL_Joystick *, Uint8, Uint8, Uint8)
////WRAP(int , SDL_JoystickSetVirtualAxis, SDL_Joystick *, int, Sint16)
////WRAP(int , SDL_JoystickSetVirtualButton, SDL_Joystick *, int, Uint8)
////WRAP(int , SDL_JoystickSetVirtualHat, SDL_Joystick *, int, Uint8)
////WRAP(int , SDL_LinuxSetThreadPriority, Sint64, int)
//WRAP(int , SDL_LoadDollarTemplates, SDL_TouchID, SDL_RWops *)
//WRAP(int , SDL_LockMutex, SDL_mutex *)
//WRAP(int , SDL_LockSurface, SDL_Surface *)
//WRAP(int , SDL_LockTexture, SDL_Texture *, SDL_Rect *, void **, int *)
////WRAP(int , SDL_LockTextureToSurface, SDL_Texture *, SDL_Rect *, SDL_Surface **)
//WRAP(int , SDL_LowerBlitScaled, SDL_Surface *, SDL_Rect *, SDL_Surface *, SDL_Rect *)
//WRAP(int , SDL_LowerBlit, SDL_Surface *, SDL_Rect *, SDL_Surface *, SDL_Rect *)
////WRAP(int , SDL_main, int, char **)
//WRAP(int , SDL_memcmp, void *, void *, size_t)
//WRAP(int , SDL_MouseIsHaptic)
//WRAP(int , SDL_NumHaptics)
//WRAP(int , SDL_NumJoysticks)
//WRAP(int , SDL_NumSensors)
//WRAP(int , SDL_OpenAudio, SDL_AudioSpec *, SDL_AudioSpec *)
////WRAP(int , SDL_OpenURL, char *)
//WRAP(int , SDL_PeepEvents, SDL_Event *, int, SDL_eventaction, Uint32, Uint32)
//WRAP(int , SDL_PushEvent, SDL_Event *)
//WRAP(int , SDL_QueryTexture, SDL_Texture *, Uint32 *, int *, int *, int *)
//WRAP(int , SDL_QueueAudio, SDL_AudioDeviceID, void *, Uint32)
//WRAP(int , SDL_RecordGesture, SDL_TouchID)
//WRAP(int , SDL_RenderClear, SDL_Renderer *)
//WRAP(int , SDL_RenderCopyExF, SDL_Renderer *, SDL_Texture *, SDL_Rect *, SDL_FRect *, double , SDL_FPoint *, SDL_RendererFlip )
//WRAP(int , SDL_RenderCopyEx, SDL_Renderer *, SDL_Texture *, SDL_Rect *, SDL_Rect *, double , SDL_Point *, SDL_RendererFlip )
//WRAP(int , SDL_RenderCopyF, SDL_Renderer *, SDL_Texture *, SDL_Rect *, SDL_FRect *)
//WRAP(int , SDL_RenderCopy, SDL_Renderer *, SDL_Texture *, SDL_Rect *, SDL_Rect *)
//WRAP(int , SDL_RenderDrawLineF, SDL_Renderer *, float, float, float, float)
//WRAP(int , SDL_RenderDrawLinesF, SDL_Renderer *, SDL_FPoint *, int)
//WRAP(int , SDL_RenderDrawLines, SDL_Renderer *, SDL_Point *, int)
//WRAP(int , SDL_RenderDrawLine, SDL_Renderer *, int, int, int, int)
//WRAP(int , SDL_RenderDrawPointF, SDL_Renderer *, float, float)
//WRAP(int , SDL_RenderDrawPointsF, SDL_Renderer *, SDL_FPoint *, int)
//WRAP(int , SDL_RenderDrawPoints, SDL_Renderer *, SDL_Point *, int)
//WRAP(int , SDL_RenderDrawPoint, SDL_Renderer *, int, int)
//WRAP(int , SDL_RenderDrawRectF, SDL_Renderer *, SDL_FRect *)
//WRAP(int , SDL_RenderDrawRectsF, SDL_Renderer *, SDL_FRect *, int)
//WRAP(int , SDL_RenderDrawRects, SDL_Renderer *, SDL_Rect *, int)
//WRAP(int , SDL_RenderDrawRect, SDL_Renderer *, SDL_Rect *)
//WRAP(int , SDL_RenderFillRectF, SDL_Renderer *, SDL_FRect *)
//WRAP(int , SDL_RenderFillRectsF, SDL_Renderer *, SDL_FRect *, int)
//WRAP(int , SDL_RenderFillRects, SDL_Renderer *, SDL_Rect *, int)
//WRAP(int , SDL_RenderFillRect, SDL_Renderer *, SDL_Rect *)
//WRAP(int , SDL_RenderFlush, SDL_Renderer *)
//WRAP(int , SDL_RenderReadPixels, SDL_Renderer *, SDL_Rect *, Uint32, void *, int)
//WRAP(int , SDL_RenderSetClipRect, SDL_Renderer *, SDL_Rect *)
//WRAP(int , SDL_RenderSetIntegerScale, SDL_Renderer *, SDL_bool)
//WRAP(int , SDL_RenderSetLogicalSize, SDL_Renderer *, int, int)
//WRAP(int , SDL_RenderSetScale, SDL_Renderer *, float, float)
//WRAP(int , SDL_RenderSetViewport, SDL_Renderer *, SDL_Rect *)
//WRAP(int , SDL_RWclose, SDL_RWops *)
//WRAP(int , SDL_SaveAllDollarTemplates, SDL_RWops *)
//WRAP(int , SDL_SaveBMP_RW, SDL_Surface *, SDL_RWops *, int)
//WRAP(int , SDL_SaveDollarTemplate, SDL_GestureID, SDL_RWops *)
//WRAP(int , SDL_SemPost, SDL_sem *)
//WRAP(int , SDL_SemTryWait, SDL_sem *)
//WRAP(int , SDL_SemWait, SDL_sem *)
//WRAP(int , SDL_SemWaitTimeout, SDL_sem *, Uint32)
//WRAP(int , SDL_SensorGetData, SDL_Sensor *, float *, int)
//WRAP(int , SDL_SensorGetDeviceNonPortableType, int)
//WRAP(int , SDL_SensorGetNonPortableType, SDL_Sensor *)
//WRAP(int , SDL_SetClipboardText, char *)
//WRAP(int , SDL_SetColorKey, SDL_Surface *, int, Uint32)
//WRAP(int , SDL_setenv, char *, char *, int)
//WRAP(int , SDL_SetMemoryFunctions, SDL_malloc_func, SDL_calloc_func, SDL_realloc_func, SDL_free_func)
//WRAP(int , SDL_SetPaletteColors, SDL_Palette *, SDL_Color *, int, int)
//WRAP(int , SDL_SetPixelFormatPalette, SDL_PixelFormat *, SDL_Palette *)
//WRAP(int , SDL_SetRelativeMouseMode, SDL_bool)
//WRAP(int , SDL_SetRenderDrawBlendMode, SDL_Renderer *, SDL_BlendMode)
//WRAP(int , SDL_SetRenderDrawColor, SDL_Renderer *, Uint8, Uint8, Uint8, Uint8)
//WRAP(int , SDL_SetRenderTarget, SDL_Renderer *, SDL_Texture *)
//WRAP(int , SDL_SetSurfaceAlphaMod, SDL_Surface *, Uint8)
//WRAP(int , SDL_SetSurfaceBlendMode, SDL_Surface *, SDL_BlendMode)
//WRAP(int , SDL_SetSurfaceColorMod, SDL_Surface *, Uint8, Uint8, Uint8)
//WRAP(int , SDL_SetSurfacePalette, SDL_Surface *, SDL_Palette *)
//WRAP(int , SDL_SetSurfaceRLE, SDL_Surface *, int)
//WRAP(int , SDL_SetTextureAlphaMod, SDL_Texture *, Uint8)
//WRAP(int , SDL_SetTextureBlendMode, SDL_Texture *, SDL_BlendMode)
//WRAP(int , SDL_SetTextureColorMod, SDL_Texture *, Uint8, Uint8, Uint8)
////WRAP(int , SDL_SetTextureScaleMode, SDL_Texture *, SDL_ScaleMode)
//WRAP(int , SDL_SetThreadPriority, SDL_ThreadPriority)
//WRAP(int , SDL_SetWindowBrightness, SDL_Window *, float)
//WRAP(int , SDL_SetWindowDisplayMode, SDL_Window *, SDL_DisplayMode *)
//WRAP(int , SDL_SetWindowFullscreen, SDL_Window *, Uint32)
//WRAP(int , SDL_SetWindowGammaRamp, SDL_Window *, Uint16 *, Uint16 *, Uint16 *)
//WRAP(int , SDL_SetWindowHitTest, SDL_Window *, SDL_HitTest, void *)
//WRAP(int , SDL_SetWindowInputFocus, SDL_Window *)
//WRAP(int , SDL_SetWindowModalFor, SDL_Window *, SDL_Window *)
//WRAP(int , SDL_SetWindowOpacity, SDL_Window *, float)
//WRAP(int , SDL_SetWindowShape, SDL_Window *, SDL_Surface *, SDL_WindowShapeMode *)
//WRAP(int , SDL_ShowCursor, int)
//WRAP(int , SDL_ShowMessageBox, SDL_MessageBoxData *, int *)
//WRAP(int , SDL_ShowSimpleMessageBox, Uint32, char *, char *, SDL_Window *)
//WRAP(int , SDL_SoftStretch, SDL_Surface *, SDL_Rect *, SDL_Surface *, SDL_Rect *)
//WRAP(int , SDL_strcasecmp, char *, char *)
//WRAP(int , SDL_strcmp, char *, char *)
//WRAP(int , SDL_strncasecmp, char *, char *, size_t)
//WRAP(int , SDL_strncmp, char *, char *, size_t)
//WRAP(int , SDL_tolower, int)
//WRAP(int , SDL_toupper, int)
//WRAP(int , SDL_TryLockMutex, SDL_mutex *)
//WRAP(int , SDL_UnlockMutex, SDL_mutex *)
//WRAP(int , SDL_UpdateTexture, SDL_Texture *, SDL_Rect *, void *, int)
//WRAP(int , SDL_UpdateWindowSurfaceRects, SDL_Window *, SDL_Rect *, int)
//WRAP(int , SDL_UpdateWindowSurface, SDL_Window *)
//WRAP(int , SDL_UpdateYUVTexture, SDL_Texture *, SDL_Rect *, Uint8 *, int, Uint8 *, int, Uint8 *, int)
//WRAP(int , SDL_UpperBlitScaled, SDL_Surface *, SDL_Rect *, SDL_Surface *, SDL_Rect *)
//WRAP(int , SDL_UpperBlit, SDL_Surface *, SDL_Rect *, SDL_Surface *, SDL_Rect *)
//WRAP(int , SDL_VideoInit, char *)
//WRAP(int , SDL_WaitEvent, SDL_Event *)
//WRAP(int , SDL_WaitEventTimeout, SDL_Event *, int)
//WRAP(int , SDL_WarpMouseGlobal, int, int)
////WRAP(int , SDL_wcscasecmp, wchar_t *, wchar_t *)
//WRAP(int , SDL_wcscmp, wchar_t *, wchar_t *)
////WRAP(int , SDL_wcsncasecmp, wchar_t *, wchar_t *, size_t)
////WRAP(int , SDL_wcsncmp, wchar_t *, wchar_t *, size_t)
////WRAP(int , seed48_r, short unsigned int *, struct drand48_data *)
//WRAP(int , select, int, fd_set *, fd_set *, fd_set *, struct timeval *)
//WRAP(int , setenv, char *, char *, int)
////WRAP(int , setstate_r, char *, struct random_data *)
//WRAP(int , setvbuf, FILE *, char *, int, size_t)
////WRAP(int , srand48_r, long int, struct drand48_data *)
////WRAP(int , srandom_r, unsigned int, struct random_data *)
//WRAP(int , strcasecmp_l, char *, char *, locale_t)
//WRAP(int , strcasecmp, char *, char *)
//WRAP(int , strcmp, char *, char *)
//WRAP(int , strcoll_l, char *, char *, locale_t)
//WRAP(int , strcoll, char *, char *)
//WRAP(int , strerror_r, int, char *, size_t)
//WRAP(int , strncasecmp_l, char *, char *, size_t, locale_t)
//WRAP(int , strncasecmp, char *, char *, size_t)
//WRAP(int , strncmp, char *, char *, size_t)
//WRAP(int , system, char *)
//WRAP(int , toascii, int)
//WRAP(int , tolower_l, int, locale_t)
//WRAP(int , _tolower, int)
//WRAP(int , tolower, int)
//WRAP(int , toupper_l, int, locale_t)
//WRAP(int , _toupper, int)
//WRAP(int , toupper, int)
//WRAP(int , ungetc, int, FILE *)
//WRAP(int , unsetenv, char *)
//WRAP(int , wcscasecmp_l, wchar_t *, wchar_t *, locale_t)
//WRAP(int , wcscasecmp, wchar_t *, wchar_t *)
//WRAP(int , wcscmp, wchar_t *, wchar_t *)
//WRAP(int , wcscoll_l, wchar_t *, wchar_t *, locale_t)
//WRAP(int , wcscoll, wchar_t *, wchar_t *)
//WRAP(int , wcsncasecmp_l, wchar_t *, wchar_t *, size_t, locale_t)
//WRAP(int , wcsncasecmp, wchar_t *, wchar_t *, size_t)
//WRAP(int , wcsncmp, wchar_t *, wchar_t *, size_t)
//WRAP(int , wctob, wint_t)
//WRAP(int , wctomb, char *, wchar_t)
//WRAP(int , wmemcmp, wchar_t *, wchar_t *, size_t)
////WRAP(ldiv_t , ldiv, long int, long int)
////WRAP(lldiv_t , lldiv, long long int, long long int)
//WRAP(long int , a64l, char *)
//WRAP(long int , atol, char *)
//WRAP(long int , ftell, FILE *)
//WRAP(long int , jrand48, short unsigned int *)
//WRAP(long int , labs, long int)
//WRAP(long int , lrand48)
//WRAP(long int , lrintf, float)
//WRAP(long int , lrintl, long double)
//WRAP(long int , lrint, double)
//WRAP(long int , lroundf, float)
//WRAP(long int , lroundl, long double)
//WRAP(long int , lround, double)
//WRAP(long int , mrand48)
//WRAP(long int , nrand48, short unsigned int *)
//WRAP(long int , random)
//WRAP(long int , SDL_strtol, char *, char **, int)
//WRAP(long int , strtol, char *, char **, int)
//WRAP(long int , wcstol, wchar_t *, wchar_t **, int)
//WRAP(long long int , atoll, char *)
//WRAP(long long int , llabs, long long int)
//WRAP(long long int , llrintf, float)
//WRAP(long long int , llrintl, long double)
//WRAP(long long int , llrint, double)
//WRAP(long long int , llroundf, float)
//WRAP(long long int , llroundl, long double)
//WRAP(long long int , llround, double)
//WRAP(long long int , strtoll, char *, char **, int)
////WRAP(long long int , strtoq, char *, char **, int)
//WRAP(long long int , wcstoll, wchar_t *, wchar_t **, int)
//WRAP(long long unsigned int , strtoull, char *, char **, int)
////WRAP(long long unsigned int , strtouq, char *, char **, int)
//WRAP(long long unsigned int , wcstoull, wchar_t *, wchar_t **, int)
//WRAP(long unsigned int , SDL_strtoul, char *, char **, int)
//WRAP(long unsigned int , strtoul, char *, char **, int)
//WRAP(long unsigned int , wcstoul, wchar_t *, wchar_t **, int)
//WRAP(SDL_AssertData *, SDL_GetAssertionReport)
//WRAP(SDL_AssertionHandler , SDL_GetAssertionHandler, void **)
//WRAP(SDL_AssertionHandler , SDL_GetDefaultAssertionHandler)
//WRAP(SDL_AssertState , SDL_ReportAssertion, SDL_AssertData *, char *, char *, int)
//WRAP(SDL_AudioDeviceID , SDL_OpenAudioDevice, char *, int, SDL_AudioSpec *, SDL_AudioSpec *, int)
//WRAP(SDL_AudioSpec *, SDL_LoadWAV_RW, SDL_RWops *, int, SDL_AudioSpec *, Uint8 **, Uint32 *)
//WRAP(SDL_AudioStatus , SDL_GetAudioDeviceStatus, SDL_AudioDeviceID)
//WRAP(SDL_AudioStatus , SDL_GetAudioStatus)
//WRAP(SDL_AudioStream *, SDL_NewAudioStream, SDL_AudioFormat , Uint8 , int , SDL_AudioFormat , Uint8 , int )
//WRAP(SDL_BlendMode , SDL_ComposeCustomBlendMode, SDL_BlendFactor, SDL_BlendFactor, SDL_BlendOperation, SDL_BlendFactor, SDL_BlendFactor, SDL_BlendOperation)
//WRAP(SDL_bool , SDL_AtomicCASPtr, void **, void *, void *)
//WRAP(SDL_bool , SDL_AtomicCAS, SDL_atomic_t *, int, int)
//WRAP(SDL_bool , SDL_AtomicTryLock, SDL_SpinLock *)
//WRAP(SDL_bool , SDL_EnclosePoints, SDL_Point *, int, SDL_Rect *, SDL_Rect *)
////WRAP(SDL_bool , SDL_GameControllerGetAttached, SDL_GameController *)
////WRAP(SDL_bool , SDL_GameControllerHasAxis, SDL_GameController *, SDL_GameControllerAxis)
////WRAP(SDL_bool , SDL_GameControllerHasButton, SDL_GameController *, SDL_GameControllerButton)
////WRAP(SDL_bool , SDL_GameControllerHasLED, SDL_GameController *)
////WRAP(SDL_bool , SDL_GameControllerHasSensor, SDL_GameController *, SDL_SensorType)
////WRAP(SDL_bool , SDL_GameControllerIsSensorEnabled, SDL_GameController *, SDL_SensorType)
//WRAP(SDL_bool , SDL_GetEventFilter, SDL_EventFilter *, void **)
//WRAP(SDL_bool , SDL_GetHintBoolean, char *, SDL_bool)
//WRAP(SDL_bool , SDL_GetRelativeMouseMode)
//WRAP(SDL_bool , SDL_GetWindowGrab, SDL_Window *)
//WRAP(SDL_bool , SDL_GL_ExtensionSupported, char *)
//WRAP(SDL_bool , SDL_Has3DNow)
//WRAP(SDL_bool , SDL_HasAltiVec)
////WRAP(SDL_bool , SDL_HasARMSIMD)
//WRAP(SDL_bool , SDL_HasAVX)
//WRAP(SDL_bool , SDL_HasAVX2)
//WRAP(SDL_bool , SDL_HasAVX512F)
//WRAP(SDL_bool , SDL_HasClipboardText)
//WRAP(SDL_bool , SDL_HasColorKey, SDL_Surface *)
//WRAP(SDL_bool , SDL_HasEvents, Uint32, Uint32)
//WRAP(SDL_bool , SDL_HasEvent, Uint32)
//WRAP(SDL_bool , SDL_HasIntersection, SDL_Rect *, SDL_Rect *)
//WRAP(SDL_bool , SDL_HasMMX)
//WRAP(SDL_bool , SDL_HasNEON)
//WRAP(SDL_bool , SDL_HasRDTSC)
//WRAP(SDL_bool , SDL_HasScreenKeyboardSupport)
//WRAP(SDL_bool , SDL_HasSSE)
//WRAP(SDL_bool , SDL_HasSSE2)
//WRAP(SDL_bool , SDL_HasSSE3)
//WRAP(SDL_bool , SDL_HasSSE41)
//WRAP(SDL_bool , SDL_HasSSE42)
////WRAP(SDL_bool , SDL_HasSurfaceRLE, SDL_Surface *)
//WRAP(SDL_bool , SDL_IntersectRectAndLine, SDL_Rect *, int *, int *, int *, int *)
//WRAP(SDL_bool , SDL_IntersectRect, SDL_Rect *, SDL_Rect *, SDL_Rect *)
//WRAP(SDL_bool , SDL_IsGameController, int)
//WRAP(SDL_bool , SDL_IsScreenKeyboardShown, SDL_Window *)
//WRAP(SDL_bool , SDL_IsScreenSaverEnabled)
//WRAP(SDL_bool , SDL_IsShapedWindow, SDL_Window *)
//WRAP(SDL_bool , SDL_IsTablet)
//WRAP(SDL_bool , SDL_IsTextInputActive)
//WRAP(SDL_bool , SDL_JoystickGetAttached, SDL_Joystick *)
//WRAP(SDL_bool , SDL_JoystickGetAxisInitialState, SDL_Joystick *, int, Sint16 *)
////WRAP(SDL_bool , SDL_JoystickHasLED, SDL_Joystick *)
////WRAP(SDL_bool , SDL_JoystickIsVirtual, int)
//WRAP(SDL_bool , SDL_PixelFormatEnumToMasks, Uint32, int *, Uint32 *, Uint32 *, Uint32 *, Uint32 *)
//WRAP(SDL_bool , SDL_RemoveTimer, SDL_TimerID)
//WRAP(SDL_bool , SDL_RenderGetIntegerScale, SDL_Renderer *)
//WRAP(SDL_bool , SDL_RenderIsClipEnabled, SDL_Renderer *)
//WRAP(SDL_bool , SDL_RenderTargetSupported, SDL_Renderer *)
//WRAP(SDL_bool , SDL_SetClipRect, SDL_Surface *, SDL_Rect *)
//WRAP(SDL_bool , SDL_SetHint, char *, char *)
//WRAP(SDL_bool , SDL_SetHintWithPriority, char *, char *, SDL_HintPriority)
//WRAP(SDL_cond *, SDL_CreateCond)
//WRAP(SDL_Cursor *, SDL_CreateColorCursor, SDL_Surface *, int, int)
//WRAP(SDL_Cursor *, SDL_CreateCursor, Uint8 *, Uint8 *, int, int, int, int)
//WRAP(SDL_Cursor *, SDL_CreateSystemCursor, SDL_SystemCursor)
//WRAP(SDL_Cursor *, SDL_GetCursor)
//WRAP(SDL_Cursor *, SDL_GetDefaultCursor)
//WRAP(SDL_DisplayMode *, SDL_GetClosestDisplayMode, int, SDL_DisplayMode *, SDL_DisplayMode *)
//WRAP(SDL_DisplayOrientation , SDL_GetDisplayOrientation, int)
//WRAP(SDL_Finger *, SDL_GetTouchFinger, SDL_TouchID, int)
//WRAP(SDL_GameControllerAxis , SDL_GameControllerGetAxisFromString, char *)
////WRAP(SDL_GameControllerButtonBind , SDL_GameControllerGetBindForAxis, SDL_GameController *, SDL_GameControllerAxis)
////WRAP(SDL_GameControllerButtonBind , SDL_GameControllerGetBindForButton, SDL_GameController *, SDL_GameControllerButton)
//WRAP(SDL_GameControllerButton , SDL_GameControllerGetButtonFromString, char *)
//WRAP(SDL_GameController *, SDL_GameControllerFromInstanceID, SDL_JoystickID)
////WRAP(SDL_GameController *, SDL_GameControllerFromPlayerIndex, int)
//WRAP(SDL_GameController *, SDL_GameControllerOpen, int)
////WRAP(SDL_GameControllerType , SDL_GameControllerGetType, SDL_GameController *)
////WRAP(SDL_GameControllerType , SDL_GameControllerTypeForIndex, int)
//WRAP(SDL_GLContext , SDL_GL_GetCurrentContext)
//WRAP(SDL_Haptic *, SDL_HapticOpenFromJoystick, SDL_Joystick *)
//WRAP(SDL_Haptic *, SDL_HapticOpenFromMouse)
//WRAP(SDL_Haptic *, SDL_HapticOpen, int)
////WRAP(SDL_iconv_t , SDL_iconv_open, char *, char *)
////WRAP(SDL_JoystickGUID , SDL_JoystickGetDeviceGUID, int)
////WRAP(SDL_JoystickGUID , SDL_JoystickGetGUIDFromString, char *)
////WRAP(SDL_JoystickGUID , SDL_JoystickGetGUID, SDL_Joystick *)
////WRAP(SDL_JoystickID , SDL_JoystickGetDeviceInstanceID, int)
////WRAP(SDL_JoystickID , SDL_JoystickInstanceID, SDL_Joystick *)
////WRAP(SDL_JoystickPowerLevel , SDL_JoystickCurrentPowerLevel, SDL_Joystick *)
////WRAP(SDL_Joystick *, SDL_GameControllerGetJoystick, SDL_GameController *)
////WRAP(SDL_Joystick *, SDL_JoystickFromInstanceID, SDL_JoystickID)
////WRAP(SDL_Joystick *, SDL_JoystickFromPlayerIndex, int)
////WRAP(SDL_Joystick *, SDL_JoystickOpen, int)
////WRAP(SDL_JoystickType , SDL_JoystickGetDeviceType, int)
////WRAP(SDL_JoystickType , SDL_JoystickGetType, SDL_Joystick *)
//WRAP(SDL_Keycode , SDL_GetKeyFromName, char *)
//WRAP(SDL_Keycode , SDL_GetKeyFromScancode, SDL_Scancode)
//WRAP(SDL_Keymod , SDL_GetModState)
////WRAP(SDL_Locale *, SDL_GetPreferredLocales)
//WRAP(SDL_LogPriority , SDL_LogGetPriority, int)
////WRAP(SDL_MetalView , SDL_Metal_CreateView, SDL_Window *)
//WRAP(SDL_mutex *, SDL_CreateMutex)
//WRAP(SDL_Palette *, SDL_AllocPalette, int)
//WRAP(SDL_PixelFormat *, SDL_AllocFormat, Uint32)
//WRAP(SDL_PowerState , SDL_GetPowerInfo, int *, int *)
//WRAP(SDL_Renderer *, SDL_CreateRenderer, SDL_Window *, int, Uint32)
//WRAP(SDL_Renderer *, SDL_CreateSoftwareRenderer, SDL_Surface *)
//WRAP(SDL_Renderer *, SDL_GetRenderer, SDL_Window *)
//WRAP(SDL_RWops *, SDL_AllocRW)
//WRAP(SDL_RWops *, SDL_RWFromConstMem, void *, int)
//WRAP(SDL_RWops *, SDL_RWFromFile, char *, char *)
//WRAP(SDL_RWops *, SDL_RWFromFP, FILE *, SDL_bool)
//WRAP(SDL_RWops *, SDL_RWFromMem, void *, int)
//WRAP(SDL_Scancode , SDL_GetScancodeFromKey, SDL_Keycode)
//WRAP(SDL_Scancode , SDL_GetScancodeFromName, char *)
//WRAP(SDL_sem *, SDL_CreateSemaphore, Uint32)
//WRAP(SDL_SensorID , SDL_SensorGetDeviceInstanceID, int)
//WRAP(SDL_SensorID , SDL_SensorGetInstanceID, SDL_Sensor *)
//WRAP(SDL_Sensor *, SDL_SensorFromInstanceID, SDL_SensorID)
//WRAP(SDL_Sensor *, SDL_SensorOpen, int)
//WRAP(SDL_SensorType , SDL_SensorGetDeviceType, int)
//WRAP(SDL_SensorType , SDL_SensorGetType, SDL_Sensor *)
//WRAP(SDL_Surface *, SDL_ConvertSurfaceFormat, SDL_Surface *, Uint32, Uint32)
//WRAP(SDL_Surface *, SDL_ConvertSurface, SDL_Surface *, SDL_PixelFormat *, Uint32)
//WRAP(SDL_Surface *, SDL_CreateRGBSurfaceFrom, void *, int, int, int, int, Uint32, Uint32, Uint32, Uint32)
//WRAP(SDL_Surface *, SDL_CreateRGBSurface, Uint32, int, int, int, Uint32, Uint32, Uint32, Uint32)
//WRAP(SDL_Surface *, SDL_CreateRGBSurfaceWithFormatFrom, void *, int, int, int, int, Uint32)
//WRAP(SDL_Surface *, SDL_CreateRGBSurfaceWithFormat, Uint32, int, int, int, Uint32)
//WRAP(SDL_Surface *, SDL_DuplicateSurface, SDL_Surface *)
//WRAP(SDL_Surface *, SDL_GetWindowSurface, SDL_Window *)
//WRAP(SDL_Surface *, SDL_LoadBMP_RW, SDL_RWops *, int)
//WRAP(SDL_Texture *, SDL_CreateTextureFromSurface, SDL_Renderer *, SDL_Surface *)
//WRAP(SDL_Texture *, SDL_CreateTexture, SDL_Renderer *, Uint32, int, int, int)
//WRAP(SDL_Texture *, SDL_GetRenderTarget, SDL_Renderer *)
//WRAP(SDL_threadID , SDL_GetThreadID, SDL_Thread *)
//WRAP(SDL_threadID , SDL_ThreadID)
//WRAP(SDL_Thread *, SDL_CreateThread, SDL_ThreadFunction, char *, void *)
//WRAP(SDL_Thread *, SDL_CreateThreadWithStackSize, SDL_ThreadFunction, char *, size_t , void *)
//WRAP(SDL_TimerID , SDL_AddTimer, Uint32, SDL_TimerCallback, void *)
//WRAP(SDL_TLSID , SDL_TLSCreate)
//WRAP(SDL_TouchDeviceType , SDL_GetTouchDeviceType, SDL_TouchID)
//WRAP(SDL_TouchID , SDL_GetTouchDevice, int)
//WRAP(SDL_Window *, SDL_CreateShapedWindow, char *, unsigned int, unsigned int, unsigned int, unsigned int, Uint32)
//WRAP(SDL_Window *, SDL_CreateWindowFrom, void *)
//WRAP(SDL_Window *, SDL_GetGrabbedWindow)
//WRAP(SDL_Window *, SDL_GetKeyboardFocus)
//WRAP(SDL_Window *, SDL_GetMouseFocus)
//WRAP(SDL_Window *, SDL_GetWindowFromID, Uint32)
//WRAP(SDL_Window *, SDL_GL_GetCurrentWindow)
//WRAP(SDL_YUV_CONVERSION_MODE , SDL_GetYUVConversionMode)
//WRAP(SDL_YUV_CONVERSION_MODE , SDL_GetYUVConversionModeForResolution, int, int)
//WRAP(short unsigned int *, seed48, short unsigned int *)
//WRAP(Sint16 , SDL_GameControllerGetAxis, SDL_GameController *, SDL_GameControllerAxis)
//WRAP(Sint16 , SDL_JoystickGetAxis, SDL_Joystick *, int)
//WRAP(size_t , fread, void *, size_t, size_t, FILE *)
//WRAP(size_t , fread_unlocked, void *, size_t, size_t, FILE *)
//WRAP(size_t , fwrite, void *, size_t, size_t, FILE *)
//WRAP(size_t , fwrite_unlocked, void *, size_t, size_t, FILE *)
//WRAP(size_t , mbrlen, char *, size_t, mbstate_t *)
//WRAP(size_t , mbrtowc, wchar_t *, char *, size_t, mbstate_t *)
//WRAP(size_t , mbsnrtowcs, wchar_t *, char **, size_t, size_t, mbstate_t *)
//WRAP(size_t , mbsrtowcs, wchar_t *, char **, size_t, mbstate_t *)
//WRAP(size_t , mbstowcs, wchar_t *, char *, size_t)
//WRAP(size_t , SDL_iconv, SDL_iconv_t, char **, size_t *, char **, size_t *)
//WRAP(size_t , SDL_RWread, SDL_RWops *, void *, size_t, size_t)
//WRAP(size_t , SDL_RWwrite, SDL_RWops *, void *, size_t, size_t)
//WRAP(size_t , SDL_SIMDGetAlignment)
//WRAP(size_t , SDL_strlcat, char *, char *, size_t)
//WRAP(size_t , SDL_strlcpy, char *, char *, size_t)
//WRAP(size_t , SDL_strlen, char *)
//WRAP(size_t , SDL_utf8strlcpy, char *, char *, size_t)
//WRAP(size_t , SDL_utf8strlen, char *)
//WRAP(size_t , SDL_wcslcat, wchar_t *, wchar_t *, size_t)
//WRAP(size_t , SDL_wcslcpy, wchar_t *, wchar_t *, size_t)
//WRAP(size_t , SDL_wcslen, wchar_t *)
//WRAP(size_t , SDL_WriteBE16, SDL_RWops *, Uint16)
//WRAP(size_t , SDL_WriteBE32, SDL_RWops *, Uint32)
//WRAP(size_t , SDL_WriteBE64, SDL_RWops *, Uint64)
//WRAP(size_t , SDL_WriteLE16, SDL_RWops *, Uint16)
//WRAP(size_t , SDL_WriteLE32, SDL_RWops *, Uint32)
//WRAP(size_t , SDL_WriteLE64, SDL_RWops *, Uint64)
//WRAP(size_t , SDL_WriteU8, SDL_RWops *, Uint8)
//WRAP(size_t , strcspn, char *, char *)
//WRAP(size_t , strnlen, char *, size_t)
//WRAP(size_t , strspn, char *, char *)
//WRAP(size_t , strxfrm_l, char *, char *, size_t, locale_t)
//WRAP(size_t , strxfrm, char *, char *, size_t)
//WRAP(size_t , wcrtomb, char *, wchar_t, mbstate_t *)
//WRAP(size_t , wcscspn, wchar_t *, wchar_t *)
//WRAP(size_t , wcsftime, wchar_t *, size_t, wchar_t *, struct tm *)
//WRAP(size_t , wcslen, wchar_t *)
//WRAP(size_t , wcsnlen, wchar_t *, size_t)
//WRAP(size_t , wcsnrtombs, char *, wchar_t **, size_t, size_t, mbstate_t *)
//WRAP(size_t , wcsrtombs, char *, wchar_t **, size_t, mbstate_t *)
//WRAP(size_t , wcsspn, wchar_t *, wchar_t *)
//WRAP(size_t , wcstombs, char *, wchar_t *, size_t)
//WRAP(size_t , wcsxfrm_l, wchar_t *, wchar_t *, size_t, locale_t)
//WRAP(size_t , wcsxfrm, wchar_t *, wchar_t *, size_t)
//WRAP(Uint16 , SDL_GameControllerGetProduct, SDL_GameController *)
//WRAP(Uint16 , SDL_GameControllerGetProductVersion, SDL_GameController *)
//WRAP(Uint16 , SDL_GameControllerGetVendor, SDL_GameController *)
//WRAP(Uint16 , SDL_JoystickGetDeviceProduct, int)
//WRAP(Uint16 , SDL_JoystickGetDeviceProductVersion, int)
//WRAP(Uint16 , SDL_JoystickGetDeviceVendor, int)
//WRAP(Uint16 , SDL_JoystickGetProduct, SDL_Joystick *)
//WRAP(Uint16 , SDL_JoystickGetProductVersion, SDL_Joystick *)
//WRAP(Uint16 , SDL_JoystickGetVendor, SDL_Joystick *)
//WRAP(Uint16 , SDL_ReadBE16, SDL_RWops *)
//WRAP(Uint16 , SDL_ReadLE16, SDL_RWops *)
////WRAP(Uint32 , SDL_crc32, Uint32, void *, size_t)
//WRAP(Uint32 , SDL_DequeueAudio, SDL_AudioDeviceID, void *, Uint32)
//WRAP(Uint32 , SDL_GetGlobalMouseState, int *, int *)
//WRAP(Uint32 , SDL_GetMouseState, int *, int *)
//WRAP(Uint32 , SDL_GetQueuedAudioSize, SDL_AudioDeviceID)
//WRAP(Uint32 , SDL_GetRelativeMouseState, int *, int *)
//WRAP(Uint32 , SDL_GetTicks)
//WRAP(Uint32 , SDL_GetWindowFlags, SDL_Window *)
//WRAP(Uint32 , SDL_GetWindowID, SDL_Window *)
//WRAP(Uint32 , SDL_GetWindowPixelFormat, SDL_Window *)
//WRAP(Uint32 , SDL_MapRGBA, SDL_PixelFormat *, Uint8, Uint8, Uint8, Uint8)
//WRAP(Uint32 , SDL_MapRGB, SDL_PixelFormat *, Uint8, Uint8, Uint8)
//WRAP(Uint32 , SDL_MasksToPixelFormatEnum, int, Uint32, Uint32, Uint32, Uint32)
//WRAP(Uint32 , SDL_ReadBE32, SDL_RWops *)
//WRAP(Uint32 , SDL_ReadLE32, SDL_RWops *)
//WRAP(Uint32 , SDL_RegisterEvents, int)
//WRAP(Uint32 , SDL_SemValue, SDL_sem *)
//WRAP(Uint32 , SDL_WasInit, Uint32)
//WRAP(Uint8 , SDL_EventState, Uint32, int)
//WRAP(Uint8 , SDL_GameControllerGetButton, SDL_GameController *, SDL_GameControllerButton)
//WRAP(Uint8 *, SDL_GetKeyboardState, int *)
//WRAP(Uint8 , SDL_JoystickGetButton, SDL_Joystick *, int)
//WRAP(Uint8 , SDL_JoystickGetHat, SDL_Joystick *, int)
//WRAP(Uint8 , SDL_ReadU8, SDL_RWops *)
//WRAP(uintmax_t , strtoumax, char *, char **, int)
//WRAP(unsigned int , SDL_HapticQuery, SDL_Haptic *)
//WRAP(void *, aligned_alloc, size_t, size_t)
//WRAP(void *, glMapBufferARB, GLenum, GLenum)
//WRAP(void *, glMapBufferRange, GLenum, GLintptr, GLsizeiptr, GLbitfield)
//WRAP(void *, glMapBuffer, GLenum, GLenum)
//WRAP(void *, glMapNamedBufferEXT, GLuint, GLenum)
//WRAP(void *, glMapNamedBufferRangeEXT, GLuint, GLintptr, GLsizeiptr, GLbitfield)
//WRAP(void *, glMapObjectBufferATI, GLuint)
//WRAP(void *, glMapTexture2DINTEL, GLuint, GLint, GLbitfield, GLint *, GLenum *)
////WRAP(void *, reallocarray, void *, size_t, size_t)
//WRAP(void *, SDL_AtomicGetPtr, void **)
//WRAP(void *, SDL_AtomicSetPtr, void **, void *)
//WRAP(void *, SDL_GetWindowData, SDL_Window *, char *)
//WRAP(void *, SDL_GL_GetProcAddress, char *)
//WRAP(void *, SDL_LoadFile_RW, SDL_RWops *, size_t *, int)
//WRAP(void *, SDL_LoadFile, char *, size_t *)
//WRAP(void *, SDL_LoadFunction, void *, char *)
//WRAP(void *, SDL_LoadObject, char *)
////WRAP(void *, SDL_Metal_GetLayer, SDL_MetalView)
//WRAP(void *, SDL_RenderGetMetalCommandEncoder, SDL_Renderer *)
//WRAP(void *, SDL_RenderGetMetalLayer, SDL_Renderer *)
//WRAP(void *, SDL_SetWindowData, SDL_Window *, char *, void *)
//WRAP(void *, SDL_SIMDAlloc, size_t )
////WRAP(void *, SDL_SIMDRealloc, void *, size_t )
//WRAP(void *, SDL_TLSGet, SDL_TLSID)
//WRAP(void *, valloc, size_t)
//WRAPV(void , abort)
//WRAPV(void , bcopy, void *, void *, size_t)
//WRAPV(void , bzero, void *, size_t)
//WRAPV(void , clearerr, FILE *)
//WRAPV(void , clearerr_unlocked, FILE *)
//WRAPV(void , _Exit, int)
////WRAPV(void , explicit_bzero, void *, size_t)
//WRAPV(void , flockfile, FILE *)
//WRAPV(void , free, void *)
//WRAPV(void , funlockfile, FILE *)
//WRAPV(void , glAccum, GLenum, GLfloat)
//WRAPV(void , glAccumxOES, GLenum, GLfixed)
//WRAPV(void , glActiveProgramEXT, GLuint)
//WRAPV(void , glActiveShaderProgram, GLuint, GLuint)
//WRAPV(void , glActiveStencilFaceEXT, GLenum)
//WRAPV(void , glActiveTextureARB, GLenum)
//WRAPV(void , glActiveVaryingNV, GLuint, GLchar *)
//WRAPV(void , glAlphaFragmentOp1ATI, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glAlphaFragmentOp2ATI, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glAlphaFragmentOp3ATI, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glAlphaFunc, GLenum, GLclampf)
//WRAPV(void , glAlphaFuncxOES, GLenum, GLfixed)
//WRAPV(void , glApplyTextureEXT, GLenum)
//WRAPV(void , glArrayElementEXT, GLint)
//WRAPV(void , glArrayElement, GLint)
//WRAPV(void , glArrayObjectATI, GLenum, GLint, GLenum, GLsizei, GLuint, GLuint)
//WRAPV(void , glAsyncMarkerSGIX, GLuint)
//WRAPV(void , glAttachObjectARB, GLhandleARB, GLhandleARB)
//WRAPV(void , glBeginConditionalRenderNV, GLuint, GLenum)
//WRAPV(void , glBeginConditionalRenderNVX, GLuint)
//WRAPV(void , glBeginConditionalRender, GLuint, GLenum)
//WRAPV(void , glBeginFragmentShaderATI)
//WRAPV(void , glBeginOcclusionQueryNV, GLuint)
//WRAPV(void , glBeginPerfMonitorAMD, GLuint)
//WRAPV(void , glBeginPerfQueryINTEL, GLuint)
//WRAPV(void , glBeginQueryARB, GLenum, GLuint)
//WRAPV(void , glBeginQueryIndexed, GLenum, GLuint, GLuint)
//WRAPV(void , glBeginQuery, GLenum, GLuint)
//WRAPV(void , glBegin, GLenum)
//WRAPV(void , glBeginTransformFeedbackEXT, GLenum)
//WRAPV(void , glBeginTransformFeedbackNV, GLenum)
//WRAPV(void , glBeginTransformFeedback, GLenum)
//WRAPV(void , glBeginVertexShaderEXT)
//WRAPV(void , glBeginVideoCaptureNV, GLuint)
//WRAPV(void , glBindAttribLocationARB, GLhandleARB, GLuint, GLcharARB *)
//WRAPV(void , glBindAttribLocation, GLuint, GLuint, GLchar *)
//WRAPV(void , glBindBufferARB, GLenum, GLuint)
//WRAPV(void , glBindBufferBaseEXT, GLenum, GLuint, GLuint)
//WRAPV(void , glBindBufferBaseNV, GLenum, GLuint, GLuint)
//WRAPV(void , glBindBufferBase, GLenum, GLuint, GLuint)
//WRAPV(void , glBindBufferOffsetEXT, GLenum, GLuint, GLuint, GLintptr)
//WRAPV(void , glBindBufferOffsetNV, GLenum, GLuint, GLuint, GLintptr)
//WRAPV(void , glBindBufferRangeEXT, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr)
//WRAPV(void , glBindBufferRangeNV, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr)
//WRAPV(void , glBindBufferRange, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr)
//WRAPV(void , glBindBuffersBase, GLenum, GLuint, GLsizei, GLuint *)
//WRAPV(void , glBindBuffersRange, GLenum, GLuint, GLsizei, GLuint *, GLintptr *, GLsizeiptr *)
//WRAPV(void , glBindFragDataLocationEXT, GLuint, GLuint, GLchar *)
//WRAPV(void , glBindFragDataLocationIndexed, GLuint, GLuint, GLuint, GLchar *)
//WRAPV(void , glBindFragDataLocation, GLuint, GLuint, GLchar *)
//WRAPV(void , glBindFragmentShaderATI, GLuint)
//WRAPV(void , glBindFramebufferEXT, GLenum, GLuint)
//WRAPV(void , glBindFramebuffer, GLenum, GLuint)
//WRAPV(void , glBindImageTextureEXT, GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLint)
//WRAPV(void , glBindImageTextures, GLuint, GLsizei, GLuint *)
//WRAPV(void , glBindImageTexture, GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum)
//WRAPV(void , glBindMultiTextureEXT, GLenum, GLenum, GLuint)
//WRAPV(void , glBindProgramARB, GLenum, GLuint)
//WRAPV(void , glBindProgramNV, GLenum, GLuint)
//WRAPV(void , glBindProgramPipeline, GLuint)
//WRAPV(void , glBindRenderbufferEXT, GLenum, GLuint)
//WRAPV(void , glBindRenderbuffer, GLenum, GLuint)
//WRAPV(void , glBindSamplers, GLuint, GLsizei, GLuint *)
//WRAPV(void , glBindSampler, GLuint, GLuint)
//WRAPV(void , glBindTextureEXT, GLenum, GLuint)
//WRAPV(void , glBindTextures, GLuint, GLsizei, GLuint *)
//WRAPV(void , glBindTransformFeedbackNV, GLenum, GLuint)
//WRAPV(void , glBindTransformFeedback, GLenum, GLuint)
//WRAPV(void , glBindVertexArrayAPPLE, GLuint)
//WRAPV(void , glBindVertexBuffers, GLuint, GLsizei, GLuint *, GLintptr *, GLsizei *)
//WRAPV(void , glBindVertexBuffer, GLuint, GLuint, GLintptr, GLsizei)
//WRAPV(void , glBindVertexShaderEXT, GLuint)
//WRAPV(void , glBindVideoCaptureStreamBufferNV, GLuint, GLuint, GLenum, GLintptrARB)
//WRAPV(void , glBindVideoCaptureStreamTextureNV, GLuint, GLuint, GLenum, GLenum, GLuint)
//WRAPV(void , glBinormal3bEXT, GLbyte, GLbyte, GLbyte)
//WRAPV(void , glBinormal3bvEXT, GLbyte *)
//WRAPV(void , glBinormal3dEXT, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glBinormal3dvEXT, GLdouble *)
//WRAPV(void , glBinormal3fEXT, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glBinormal3fvEXT, GLfloat *)
//WRAPV(void , glBinormal3iEXT, GLint, GLint, GLint)
//WRAPV(void , glBinormal3ivEXT, GLint *)
//WRAPV(void , glBinormal3sEXT, GLshort, GLshort, GLshort)
//WRAPV(void , glBinormal3svEXT, GLshort *)
//WRAPV(void , glBinormalPointerEXT, GLenum, GLsizei, void *)
//WRAPV(void , glBitmap, GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, GLubyte *)
//WRAPV(void , glBitmapxOES, GLsizei, GLsizei, GLfixed, GLfixed, GLfixed, GLfixed, GLubyte *)
//WRAPV(void , glBlendBarrierNV)
//WRAPV(void , glBlendColorEXT, GLfloat, GLfloat, GLfloat, GLfloat)
////WRAPV(void , glBlendColor, GLclampf, GLclampf, GLclampf, GLclampf)
//WRAPV(void , glBlendColor, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glBlendColorxOES, GLfixed, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glBlendEquationEXT, GLenum)
//WRAPV(void , glBlendEquationiARB, GLuint, GLenum)
//WRAPV(void , glBlendEquationIndexedAMD, GLuint, GLenum)
//WRAPV(void , glBlendEquationi, GLuint, GLenum)
////WRAPV(void , glBlendEquationSeparateATI, GLenum, GLenum)
//WRAPV(void , glBlendEquationSeparateEXT, GLenum, GLenum)
//WRAPV(void , glBlendEquationSeparateiARB, GLuint, GLenum, GLenum)
//WRAPV(void , glBlendEquationSeparateIndexedAMD, GLuint, GLenum, GLenum)
//WRAPV(void , glBlendEquationSeparatei, GLuint, GLenum, GLenum)
//WRAPV(void , glBlendEquationSeparate, GLenum, GLenum)
//WRAPV(void , glBlendEquation, GLenum)
//WRAPV(void , glBlendFunciARB, GLuint, GLenum, GLenum)
//WRAPV(void , glBlendFuncIndexedAMD, GLuint, GLenum, GLenum)
//WRAPV(void , glBlendFunci, GLuint, GLenum, GLenum)
//WRAPV(void , glBlendFuncSeparateEXT, GLenum, GLenum, GLenum, GLenum)
//WRAPV(void , glBlendFuncSeparateiARB, GLuint, GLenum, GLenum, GLenum, GLenum)
//WRAPV(void , glBlendFuncSeparateIndexedAMD, GLuint, GLenum, GLenum, GLenum, GLenum)
//WRAPV(void , glBlendFuncSeparateINGR, GLenum, GLenum, GLenum, GLenum)
//WRAPV(void , glBlendFuncSeparatei, GLuint, GLenum, GLenum, GLenum, GLenum)
//WRAPV(void , glBlendFuncSeparate, GLenum, GLenum, GLenum, GLenum)
//WRAPV(void , glBlendParameteriNV, GLenum, GLint)
//WRAPV(void , glBlitFramebufferEXT, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum)
//WRAPV(void , glBlitFramebuffer, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum)
//WRAPV(void , glBufferAddressRangeNV, GLenum, GLuint, GLuint64EXT, GLsizeiptr)
//WRAPV(void , glBufferDataARB, GLenum, GLsizeiptrARB, void *, GLenum)
//WRAPV(void , glBufferParameteriAPPLE, GLenum, GLenum, GLint)
//WRAPV(void , glBufferStorage, GLenum, GLsizeiptr, void *, GLbitfield)
//WRAPV(void , glBufferSubDataARB, GLenum, GLintptrARB, GLsizeiptrARB, void *)
//WRAPV(void , glBufferSubData, GLenum, GLintptr, GLsizeiptr, void *)
//WRAPV(void , glCallLists, GLsizei, GLenum, GLvoid *)
//WRAPV(void , glCallList, GLuint)
//WRAPV(void , glClampColorARB, GLenum, GLenum)
//WRAPV(void , glClampColor, GLenum, GLenum)
//WRAPV(void , glClearAccum, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glClearAccumxOES, GLfixed, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glClearBufferData, GLenum, GLenum, GLenum, GLenum, void *)
//WRAPV(void , glClearBufferfi, GLenum, GLint, GLfloat, GLint)
//WRAPV(void , glClearBufferfv, GLenum, GLint, GLfloat *)
//WRAPV(void , glClearBufferiv, GLenum, GLint, GLint *)
//WRAPV(void , glClearBufferSubData, GLenum, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, void *)
//WRAPV(void , glClearBufferuiv, GLenum, GLint, GLuint *)
//WRAPV(void , glClearColorIiEXT, GLint, GLint, GLint, GLint)
//WRAPV(void , glClearColorIuiEXT, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glClearColorxOES, GLfixed, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glClearDepthdNV, GLdouble)
//WRAPV(void , glClearDepthfOES, GLclampf)
//WRAPV(void , glClearDepthf, GLfloat)
//WRAPV(void , glClearDepth, GLclampd)
//WRAPV(void , glClearDepthxOES, GLfixed)
//WRAPV(void , glClearIndex, GLfloat)
//WRAPV(void , glClearNamedBufferDataEXT, GLuint, GLenum, GLenum, GLenum, void *)
//WRAPV(void , glClearNamedBufferSubDataEXT, GLuint, GLenum, GLsizeiptr, GLsizeiptr, GLenum, GLenum, void *)
//WRAPV(void , glClearStencil, GLint)
//WRAPV(void , glClearTexImage, GLuint, GLint, GLenum, GLenum, void *)
//WRAPV(void , glClearTexSubImage, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, void *)
//WRAPV(void , glClientActiveTextureARB, GLenum)
//WRAPV(void , glClientActiveTexture, GLenum)
//WRAPV(void , glClientActiveVertexStreamATI, GLenum)
//WRAPV(void , glClientAttribDefaultEXT, GLbitfield)
//WRAPV(void , glClipPlanefOES, GLenum, GLfloat *)
//WRAPV(void , glClipPlane, GLenum, GLdouble *)
//WRAPV(void , glClipPlanexOES, GLenum, GLfixed *)
//WRAPV(void , glColor3b, GLbyte, GLbyte, GLbyte)
//WRAPV(void , glColor3bv, GLbyte *)
//WRAPV(void , glColor3d, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glColor3dv, GLdouble *)
//WRAPV(void , glColor3f, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glColor3fVertex3fSUN, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glColor3fVertex3fvSUN, GLfloat *, GLfloat *)
//WRAPV(void , glColor3fv, GLfloat *)
//WRAPV(void , glColor3hNV, GLhalfNV, GLhalfNV, GLhalfNV)
//WRAPV(void , glColor3hvNV, GLhalfNV *)
//WRAPV(void , glColor3i, GLint, GLint, GLint)
//WRAPV(void , glColor3iv, GLint *)
//WRAPV(void , glColor3s, GLshort, GLshort, GLshort)
//WRAPV(void , glColor3sv, GLshort *)
//WRAPV(void , glColor3ub, GLubyte, GLubyte, GLubyte)
//WRAPV(void , glColor3ubv, GLubyte *)
//WRAPV(void , glColor3ui, GLuint, GLuint, GLuint)
//WRAPV(void , glColor3uiv, GLuint *)
//WRAPV(void , glColor3us, GLushort, GLushort, GLushort)
//WRAPV(void , glColor3usv, GLushort *)
//WRAPV(void , glColor3xOES, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glColor3xvOES, GLfixed *)
//WRAPV(void , glColor4b, GLbyte, GLbyte, GLbyte, GLbyte)
//WRAPV(void , glColor4bv, GLbyte *)
//WRAPV(void , glColor4d, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glColor4dv, GLdouble *)
//WRAPV(void , glColor4fNormal3fVertex3fSUN, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glColor4fNormal3fVertex3fvSUN, GLfloat *, GLfloat *, GLfloat *)
//WRAPV(void , glColor4f, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glColor4fv, GLfloat *)
//WRAPV(void , glColor4hNV, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV)
//WRAPV(void , glColor4hvNV, GLhalfNV *)
//WRAPV(void , glColor4i, GLint, GLint, GLint, GLint)
//WRAPV(void , glColor4iv, GLint *)
//WRAPV(void , glColor4s, GLshort, GLshort, GLshort, GLshort)
//WRAPV(void , glColor4sv, GLshort *)
//WRAPV(void , glColor4ub, GLubyte, GLubyte, GLubyte, GLubyte)
//WRAPV(void , glColor4ubVertex2fSUN, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat)
//WRAPV(void , glColor4ubVertex2fvSUN, GLubyte *, GLfloat *)
//WRAPV(void , glColor4ubVertex3fSUN, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glColor4ubVertex3fvSUN, GLubyte *, GLfloat *)
//WRAPV(void , glColor4ubv, GLubyte *)
//WRAPV(void , glColor4ui, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glColor4uiv, GLuint *)
//WRAPV(void , glColor4us, GLushort, GLushort, GLushort, GLushort)
//WRAPV(void , glColor4usv, GLushort *)
//WRAPV(void , glColor4xOES, GLfixed, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glColor4xvOES, GLfixed *)
//WRAPV(void , glColorFormatNV, GLint, GLenum, GLsizei)
//WRAPV(void , glColorFragmentOp1ATI, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glColorFragmentOp2ATI, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glColorFragmentOp3ATI, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glColorMaskIndexedEXT, GLuint, GLboolean, GLboolean, GLboolean, GLboolean)
//WRAPV(void , glColorMaski, GLuint, GLboolean, GLboolean, GLboolean, GLboolean)
//WRAPV(void , glColorMask, GLboolean, GLboolean, GLboolean, GLboolean)
//WRAPV(void , glColorMaterial, GLenum, GLenum)
//WRAPV(void , glColorP3ui, GLenum, GLuint)
//WRAPV(void , glColorP3uiv, GLenum, GLuint *)
//WRAPV(void , glColorP4ui, GLenum, GLuint)
//WRAPV(void , glColorP4uiv, GLenum, GLuint *)
//WRAPV(void , glColorPointerEXT, GLint, GLenum, GLsizei, GLsizei, void *)
//WRAPV(void , glColorPointerListIBM, GLint, GLenum, GLint, void **, GLint)
//WRAPV(void , glColorPointer, GLint, GLenum, GLsizei, GLvoid *)
//WRAPV(void , glColorPointervINTEL, GLint, GLenum, void **)
//WRAPV(void , glColorSubTableEXT, GLenum, GLsizei, GLsizei, GLenum, GLenum, void *)
//WRAPV(void , glColorSubTable, GLenum, GLsizei, GLsizei, GLenum, GLenum, GLvoid *)
//WRAPV(void , glColorTableEXT, GLenum, GLenum, GLsizei, GLenum, GLenum, void *)
//WRAPV(void , glColorTableParameterfvSGI, GLenum, GLenum, GLfloat *)
//WRAPV(void , glColorTableParameterfv, GLenum, GLenum, GLfloat *)
//WRAPV(void , glColorTableParameterivSGI, GLenum, GLenum, GLint *)
//WRAPV(void , glColorTableParameteriv, GLenum, GLenum, GLint *)
//WRAPV(void , glColorTableSGI, GLenum, GLenum, GLsizei, GLenum, GLenum, void *)
//WRAPV(void , glColorTable, GLenum, GLenum, GLsizei, GLenum, GLenum, GLvoid *)
//WRAPV(void , glCombinerInputNV, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum)
//WRAPV(void , glCombinerOutputNV, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLboolean, GLboolean, GLboolean)
//WRAPV(void , glCombinerParameterfNV, GLenum, GLfloat)
//WRAPV(void , glCombinerParameterfvNV, GLenum, GLfloat *)
//WRAPV(void , glCombinerParameteriNV, GLenum, GLint)
//WRAPV(void , glCombinerParameterivNV, GLenum, GLint *)
//WRAPV(void , glCombinerStageParameterfvNV, GLenum, GLenum, GLfloat *)
//WRAPV(void , glCompileShaderARB, GLhandleARB)
//WRAPV(void , glCompileShaderIncludeARB, GLuint, GLsizei, GLchar **, GLint *)
//WRAPV(void , glCompressedMultiTexImage1DEXT, GLenum, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, void *)
//WRAPV(void , glCompressedMultiTexImage2DEXT, GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, void *)
//WRAPV(void , glCompressedMultiTexImage3DEXT, GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, void *)
//WRAPV(void , glCompressedMultiTexSubImage1DEXT, GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, void *)
//WRAPV(void , glCompressedMultiTexSubImage2DEXT, GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, void *)
//WRAPV(void , glCompressedMultiTexSubImage3DEXT, GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, void *)
//WRAPV(void , glCompressedTexImage1DARB, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, void *)
//WRAPV(void , glCompressedTexImage1D, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, GLvoid *)
//WRAPV(void , glCompressedTexImage2DARB, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, void *)
//WRAPV(void , glCompressedTexImage2D, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLvoid *)
//WRAPV(void , glCompressedTexImage3DARB, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, void *)
//WRAPV(void , glCompressedTexImage3D, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, GLvoid *)
//WRAPV(void , glCompressedTexSubImage1DARB, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, void *)
//WRAPV(void , glCompressedTexSubImage1D, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, GLvoid *)
//WRAPV(void , glCompressedTexSubImage2DARB, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, void *)
//WRAPV(void , glCompressedTexSubImage2D, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, GLvoid *)
//WRAPV(void , glCompressedTexSubImage3DARB, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, void *)
//WRAPV(void , glCompressedTexSubImage3D, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, GLvoid *)
//WRAPV(void , glCompressedTextureImage1DEXT, GLuint, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, void *)
//WRAPV(void , glCompressedTextureImage2DEXT, GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, void *)
//WRAPV(void , glCompressedTextureImage3DEXT, GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, void *)
//WRAPV(void , glCompressedTextureSubImage1DEXT, GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, void *)
//WRAPV(void , glCompressedTextureSubImage2DEXT, GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, void *)
//WRAPV(void , glCompressedTextureSubImage3DEXT, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, void *)
//WRAPV(void , glConvolutionFilter1DEXT, GLenum, GLenum, GLsizei, GLenum, GLenum, void *)
//WRAPV(void , glConvolutionFilter1D, GLenum, GLenum, GLsizei, GLenum, GLenum, GLvoid *)
//WRAPV(void , glConvolutionFilter2DEXT, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, void *)
//WRAPV(void , glConvolutionFilter2D, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, GLvoid *)
//WRAPV(void , glConvolutionParameterfEXT, GLenum, GLenum, GLfloat)
//WRAPV(void , glConvolutionParameterf, GLenum, GLenum, GLfloat)
//WRAPV(void , glConvolutionParameterfvEXT, GLenum, GLenum, GLfloat *)
//WRAPV(void , glConvolutionParameterfv, GLenum, GLenum, GLfloat *)
//WRAPV(void , glConvolutionParameteriEXT, GLenum, GLenum, GLint)
//WRAPV(void , glConvolutionParameteri, GLenum, GLenum, GLint)
//WRAPV(void , glConvolutionParameterivEXT, GLenum, GLenum, GLint *)
//WRAPV(void , glConvolutionParameteriv, GLenum, GLenum, GLint *)
//WRAPV(void , glConvolutionParameterxOES, GLenum, GLenum, GLfixed)
//WRAPV(void , glConvolutionParameterxvOES, GLenum, GLenum, GLfixed *)
//WRAPV(void , glCopyBufferSubData, GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr)
//WRAPV(void , glCopyColorSubTableEXT, GLenum, GLsizei, GLint, GLint, GLsizei)
//WRAPV(void , glCopyColorSubTable, GLenum, GLsizei, GLint, GLint, GLsizei)
//WRAPV(void , glCopyColorTableSGI, GLenum, GLenum, GLint, GLint, GLsizei)
//WRAPV(void , glCopyColorTable, GLenum, GLenum, GLint, GLint, GLsizei)
//WRAPV(void , glCopyConvolutionFilter1DEXT, GLenum, GLenum, GLint, GLint, GLsizei)
//WRAPV(void , glCopyConvolutionFilter1D, GLenum, GLenum, GLint, GLint, GLsizei)
//WRAPV(void , glCopyConvolutionFilter2DEXT, GLenum, GLenum, GLint, GLint, GLsizei, GLsizei)
//WRAPV(void , glCopyConvolutionFilter2D, GLenum, GLenum, GLint, GLint, GLsizei, GLsizei)
//WRAPV(void , glCopyImageSubDataNV, GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei)
//WRAPV(void , glCopyImageSubData, GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei)
//WRAPV(void , glCopyMultiTexImage1DEXT, GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint)
//WRAPV(void , glCopyMultiTexImage2DEXT, GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint)
//WRAPV(void , glCopyMultiTexSubImage1DEXT, GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei)
//WRAPV(void , glCopyMultiTexSubImage2DEXT, GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei)
//WRAPV(void , glCopyMultiTexSubImage3DEXT, GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei)
//WRAPV(void , glCopyPathNV, GLuint, GLuint)
//WRAPV(void , glCopyPixels, GLint, GLint, GLsizei, GLsizei, GLenum)
//WRAPV(void , glCopyTexImage1DEXT, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint)
//WRAPV(void , glCopyTexImage1D, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint)
//WRAPV(void , glCopyTexImage2DEXT, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint)
//WRAPV(void , glCopyTexImage2D, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint)
//WRAPV(void , glCopyTexSubImage1DEXT, GLenum, GLint, GLint, GLint, GLint, GLsizei)
//WRAPV(void , glCopyTexSubImage1D, GLenum, GLint, GLint, GLint, GLint, GLsizei)
//WRAPV(void , glCopyTexSubImage2DEXT, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei)
//WRAPV(void , glCopyTexSubImage2D, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei)
//WRAPV(void , glCopyTexSubImage3DEXT, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei)
//WRAPV(void , glCopyTexSubImage3D, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei)
//WRAPV(void , glCopyTextureImage1DEXT, GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint)
//WRAPV(void , glCopyTextureImage2DEXT, GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint)
//WRAPV(void , glCopyTextureSubImage1DEXT, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei)
//WRAPV(void , glCopyTextureSubImage2DEXT, GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei)
//WRAPV(void , glCopyTextureSubImage3DEXT, GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei)
//WRAPV(void , glCoverFillPathInstancedNV, GLsizei, GLenum, void *, GLuint, GLenum, GLenum, GLfloat *)
//WRAPV(void , glCoverFillPathNV, GLuint, GLenum)
//WRAPV(void , glCoverStrokePathInstancedNV, GLsizei, GLenum, void *, GLuint, GLenum, GLenum, GLfloat *)
//WRAPV(void , glCoverStrokePathNV, GLuint, GLenum)
//WRAPV(void , glCreatePerfQueryINTEL, GLuint, GLuint *)
//WRAPV(void , glCullFace, GLenum)
//WRAPV(void , glCullParameterdvEXT, GLenum, GLdouble *)
//WRAPV(void , glCullParameterfvEXT, GLenum, GLfloat *)
//WRAPV(void , glCurrentPaletteMatrixARB, GLint)
//WRAPV(void , glDebugMessageCallbackAMD, GLDEBUGPROCAMD, void *)
//WRAPV(void , glDebugMessageCallbackARB, GLDEBUGPROCARB, void *)
//WRAPV(void , glDebugMessageCallback, GLDEBUGPROC, void *)
//WRAPV(void , glDebugMessageControlARB, GLenum, GLenum, GLenum, GLsizei, GLuint *, GLboolean)
//WRAPV(void , glDebugMessageControl, GLenum, GLenum, GLenum, GLsizei, GLuint *, GLboolean)
//WRAPV(void , glDebugMessageEnableAMD, GLenum, GLenum, GLsizei, GLuint *, GLboolean)
//WRAPV(void , glDebugMessageInsertAMD, GLenum, GLenum, GLuint, GLsizei, GLchar *)
//WRAPV(void , glDebugMessageInsertARB, GLenum, GLenum, GLuint, GLenum, GLsizei, GLchar *)
//WRAPV(void , glDebugMessageInsert, GLenum, GLenum, GLuint, GLenum, GLsizei, GLchar *)
//WRAPV(void , glDeformationMap3dSGIX, GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, GLdouble *)
//WRAPV(void , glDeformationMap3fSGIX, GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, GLfloat *)
//WRAPV(void , glDeformSGIX, GLbitfield)
//WRAPV(void , glDeleteAsyncMarkersSGIX, GLuint, GLsizei)
//WRAPV(void , glDeleteBuffersARB, GLsizei, GLuint *)
//WRAPV(void , glDeleteBuffers, GLsizei, GLuint *)
//WRAPV(void , glDeleteFencesAPPLE, GLsizei, GLuint *)
//WRAPV(void , glDeleteFencesNV, GLsizei, GLuint *)
//WRAPV(void , glDeleteFragmentShaderATI, GLuint)
//WRAPV(void , glDeleteFramebuffersEXT, GLsizei, GLuint *)
//WRAPV(void , glDeleteFramebuffers, GLsizei, GLuint *)
//WRAPV(void , glDeleteLists, GLuint, GLsizei)
//WRAPV(void , glDeleteNamedStringARB, GLint, GLchar *)
//WRAPV(void , glDeleteNamesAMD, GLenum, GLuint, GLuint *)
//WRAPV(void , glDeleteObjectARB, GLhandleARB)
//WRAPV(void , glDeleteOcclusionQueriesNV, GLsizei, GLuint *)
//WRAPV(void , glDeletePathsNV, GLuint, GLsizei)
//WRAPV(void , glDeletePerfMonitorsAMD, GLsizei, GLuint *)
//WRAPV(void , glDeletePerfQueryINTEL, GLuint)
//WRAPV(void , glDeleteProgramPipelines, GLsizei, GLuint *)
//WRAPV(void , glDeleteProgramsARB, GLsizei, GLuint *)
//WRAPV(void , glDeleteProgramsNV, GLsizei, GLuint *)
//WRAPV(void , glDeleteProgram, GLuint)
//WRAPV(void , glDeleteQueriesARB, GLsizei, GLuint *)
//WRAPV(void , glDeleteQueries, GLsizei, GLuint *)
//WRAPV(void , glDeleteRenderbuffersEXT, GLsizei, GLuint *)
//WRAPV(void , glDeleteRenderbuffers, GLsizei, GLuint *)
//WRAPV(void , glDeleteSamplers, GLsizei, GLuint *)
//WRAPV(void , glDeleteSync, GLsync)
//WRAPV(void , glDeleteTexturesEXT, GLsizei, GLuint *)
//WRAPV(void , glDeleteTextures, GLsizei, GLuint *)
//WRAPV(void , glDeleteTransformFeedbacksNV, GLsizei, GLuint *)
//WRAPV(void , glDeleteTransformFeedbacks, GLsizei, GLuint *)
//WRAPV(void , glDeleteVertexArraysAPPLE, GLsizei, GLuint *)
//WRAPV(void , glDeleteVertexArrays, GLsizei, GLuint *)
//WRAPV(void , glDeleteVertexShaderEXT, GLuint)
//WRAPV(void , glDepthBoundsdNV, GLdouble, GLdouble)
//WRAPV(void , glDepthBoundsEXT, GLclampd, GLclampd)
//WRAPV(void , glDepthFunc, GLenum)
//WRAPV(void , glDepthMask, GLboolean)
//WRAPV(void , glDepthRangeArrayv, GLuint, GLsizei, GLdouble *)
//WRAPV(void , glDepthRangedNV, GLdouble, GLdouble)
//WRAPV(void , glDepthRangefOES, GLclampf, GLclampf)
//WRAPV(void , glDepthRangef, GLfloat, GLfloat)
//WRAPV(void , glDepthRangeIndexed, GLuint, GLdouble, GLdouble)
//WRAPV(void , glDepthRange, GLclampd, GLclampd)
//WRAPV(void , glDepthRangexOES, GLfixed, GLfixed)
//WRAPV(void , glDetachObjectARB, GLhandleARB, GLhandleARB)
//WRAPV(void , glDetachShader, GLuint, GLuint)
//WRAPV(void , glDetailTexFuncSGIS, GLenum, GLsizei, GLfloat *)
//WRAPV(void , glDisableClientStateiEXT, GLenum, GLuint)
//WRAPV(void , glDisableClientStateIndexedEXT, GLenum, GLuint)
//WRAPV(void , glDisableClientState, GLenum)
//WRAPV(void , glDisableIndexedEXT, GLenum, GLuint)
//WRAPV(void , glDisablei, GLenum, GLuint)
//WRAPV(void , glDisable, GLenum)
//WRAPV(void , glDisableVariantClientStateEXT, GLuint)
//WRAPV(void , glDisableVertexArrayAttribEXT, GLuint, GLuint)
//WRAPV(void , glDisableVertexArrayEXT, GLuint, GLenum)
//WRAPV(void , glDisableVertexAttribAPPLE, GLuint, GLenum)
//WRAPV(void , glDisableVertexAttribArrayARB, GLuint)
//WRAPV(void , glDisableVertexAttribArray, GLuint)
//WRAPV(void , glDispatchComputeGroupSizeARB, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glDispatchComputeIndirect, GLintptr)
//WRAPV(void , glDispatchCompute, GLuint, GLuint, GLuint)
//WRAPV(void , glDrawArraysEXT, GLenum, GLint, GLsizei)
//WRAPV(void , glDrawArraysIndirect, GLenum, void *)
//WRAPV(void , glDrawArraysInstancedARB, GLenum, GLint, GLsizei, GLsizei)
//WRAPV(void , glDrawArraysInstancedBaseInstance, GLenum, GLint, GLsizei, GLsizei, GLuint)
//WRAPV(void , glDrawArraysInstancedEXT, GLenum, GLint, GLsizei, GLsizei)
//WRAPV(void , glDrawArraysInstanced, GLenum, GLint, GLsizei, GLsizei)
//WRAPV(void , glDrawBuffersARB, GLsizei, GLenum *)
//WRAPV(void , glDrawBuffersATI, GLsizei, GLenum *)
//WRAPV(void , glDrawBuffers, GLsizei, GLenum *)
//WRAPV(void , glDrawBuffer, GLenum)
//WRAPV(void , glDrawElementArrayAPPLE, GLenum, GLint, GLsizei)
//WRAPV(void , glDrawElementArrayATI, GLenum, GLsizei)
//WRAPV(void , glDrawElementsBaseVertex, GLenum, GLsizei, GLenum, void *, GLint)
//WRAPV(void , glDrawElementsIndirect, GLenum, GLenum, void *)
//WRAPV(void , glDrawElementsInstancedARB, GLenum, GLsizei, GLenum, void *, GLsizei)
//WRAPV(void , glDrawElementsInstancedBaseInstance, GLenum, GLsizei, GLenum, void *, GLsizei, GLuint)
//WRAPV(void , glDrawElementsInstancedBaseVertexBaseInstance, GLenum, GLsizei, GLenum, void *, GLsizei, GLint, GLuint)
//WRAPV(void , glDrawElementsInstancedBaseVertex, GLenum, GLsizei, GLenum, void *, GLsizei, GLint)
//WRAPV(void , glDrawElementsInstancedEXT, GLenum, GLsizei, GLenum, void *, GLsizei)
//WRAPV(void , glDrawElementsInstanced, GLenum, GLsizei, GLenum, void *, GLsizei)
//WRAPV(void , glDrawElements, GLenum, GLsizei, GLenum, GLvoid *)
//WRAPV(void , glDrawMeshArraysSUN, GLenum, GLint, GLsizei, GLsizei)
//WRAPV(void , glDrawPixels, GLsizei, GLsizei, GLenum, GLenum, GLvoid *)
//WRAPV(void , glDrawRangeElementArrayAPPLE, GLenum, GLuint, GLuint, GLint, GLsizei)
//WRAPV(void , glDrawRangeElementArrayATI, GLenum, GLuint, GLuint, GLsizei)
//WRAPV(void , glDrawRangeElementsBaseVertex, GLenum, GLuint, GLuint, GLsizei, GLenum, void *, GLint)
//WRAPV(void , glDrawRangeElementsEXT, GLenum, GLuint, GLuint, GLsizei, GLenum, void *)
//WRAPV(void , glDrawRangeElements, GLenum, GLuint, GLuint, GLsizei, GLenum, GLvoid *)
//WRAPV(void , glDrawTextureNV, GLuint, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glDrawTransformFeedbackInstanced, GLenum, GLuint, GLsizei)
//WRAPV(void , glDrawTransformFeedbackNV, GLenum, GLuint)
//WRAPV(void , glDrawTransformFeedback, GLenum, GLuint)
//WRAPV(void , glDrawTransformFeedbackStreamInstanced, GLenum, GLuint, GLuint, GLsizei)
//WRAPV(void , glDrawTransformFeedbackStream, GLenum, GLuint, GLuint)
//WRAPV(void , glEdgeFlagFormatNV, GLsizei)
//WRAPV(void , glEdgeFlagPointerEXT, GLsizei, GLsizei, GLboolean *)
//WRAPV(void , glEdgeFlagPointerListIBM, GLint, GLboolean **, GLint)
//WRAPV(void , glEdgeFlagPointer, GLsizei, GLvoid *)
//WRAPV(void , glEdgeFlag, GLboolean)
//WRAPV(void , glEdgeFlagv, GLboolean *)
//WRAPV(void , glEGLImageTargetRenderbufferStorageOES, GLenum, GLeglImageOES)
//WRAPV(void , glEGLImageTargetTexture2DOES, GLenum, GLeglImageOES)
//WRAPV(void , glElementPointerAPPLE, GLenum, void *)
//WRAPV(void , glElementPointerATI, GLenum, void *)
//WRAPV(void , glEnableClientStateiEXT, GLenum, GLuint)
//WRAPV(void , glEnableClientStateIndexedEXT, GLenum, GLuint)
//WRAPV(void , glEnableClientState, GLenum)
//WRAPV(void , glEnableIndexedEXT, GLenum, GLuint)
//WRAPV(void , glEnablei, GLenum, GLuint)
//WRAPV(void , glEnableVariantClientStateEXT, GLuint)
//WRAPV(void , glEnableVertexArrayAttribEXT, GLuint, GLuint)
//WRAPV(void , glEnableVertexArrayEXT, GLuint, GLenum)
//WRAPV(void , glEnableVertexAttribAPPLE, GLuint, GLenum)
//WRAPV(void , glEnableVertexAttribArrayARB, GLuint)
//WRAPV(void , glEnd)
//WRAPV(void , glEndConditionalRender)
//WRAPV(void , glEndConditionalRenderNV)
//WRAPV(void , glEndConditionalRenderNVX)
//WRAPV(void , glEndFragmentShaderATI)
//WRAPV(void , glEndList)
//WRAPV(void , glEndOcclusionQueryNV)
//WRAPV(void , glEndPerfMonitorAMD, GLuint)
//WRAPV(void , glEndPerfQueryINTEL, GLuint)
//WRAPV(void , glEndQueryARB, GLenum)
//WRAPV(void , glEndQueryIndexed, GLenum, GLuint)
//WRAPV(void , glEndQuery, GLenum)
//WRAPV(void , glEndTransformFeedback)
//WRAPV(void , glEndTransformFeedbackEXT)
//WRAPV(void , glEndTransformFeedbackNV)
//WRAPV(void , glEndVertexShaderEXT)
//WRAPV(void , glEndVideoCaptureNV, GLuint)
//WRAPV(void , glEvalCoord1d, GLdouble)
//WRAPV(void , glEvalCoord1dv, GLdouble *)
//WRAPV(void , glEvalCoord1f, GLfloat)
//WRAPV(void , glEvalCoord1fv, GLfloat *)
//WRAPV(void , glEvalCoord1xOES, GLfixed)
//WRAPV(void , glEvalCoord1xvOES, GLfixed *)
//WRAPV(void , glEvalCoord2d, GLdouble, GLdouble)
//WRAPV(void , glEvalCoord2dv, GLdouble *)
//WRAPV(void , glEvalCoord2f, GLfloat, GLfloat)
//WRAPV(void , glEvalCoord2fv, GLfloat *)
//WRAPV(void , glEvalCoord2xOES, GLfixed, GLfixed)
//WRAPV(void , glEvalCoord2xvOES, GLfixed *)
//WRAPV(void , glEvalMapsNV, GLenum, GLenum)
//WRAPV(void , glEvalMesh1, GLenum, GLint, GLint)
//WRAPV(void , glEvalMesh2, GLenum, GLint, GLint, GLint, GLint)
//WRAPV(void , glEvalPoint1, GLint)
//WRAPV(void , glEvalPoint2, GLint, GLint)
//WRAPV(void , glExecuteProgramNV, GLenum, GLuint, GLfloat *)
//WRAPV(void , glExtractComponentEXT, GLuint, GLuint, GLuint)
//WRAPV(void , glFeedbackBuffer, GLsizei, GLenum, GLfloat *)
//WRAPV(void , glFeedbackBufferxOES, GLsizei, GLenum, GLfixed *)
//WRAPV(void , glFinalCombinerInputNV, GLenum, GLenum, GLenum, GLenum)
//WRAPV(void , glFinish)
//WRAPV(void , glFinishFenceAPPLE, GLuint)
//WRAPV(void , glFinishFenceNV, GLuint)
//WRAPV(void , glFinishObjectAPPLE, GLenum, GLint)
//WRAPV(void , glFinishTextureSUNX)
//WRAPV(void , glFlush)
//WRAPV(void , glFlushMappedBufferRangeAPPLE, GLenum, GLintptr, GLsizeiptr)
//WRAPV(void , glFlushMappedBufferRange, GLenum, GLintptr, GLsizeiptr)
//WRAPV(void , glFlushMappedNamedBufferRangeEXT, GLuint, GLintptr, GLsizeiptr)
//WRAPV(void , glFlushPixelDataRangeNV, GLenum)
//WRAPV(void , glFlushRasterSGIX)
//WRAPV(void , glFlushStaticDataIBM, GLenum)
//WRAPV(void , glFlushVertexArrayRangeAPPLE, GLsizei, void *)
//WRAPV(void , glFlushVertexArrayRangeNV)
//WRAPV(void , glFogCoorddEXT, GLdouble)
//WRAPV(void , glFogCoordd, GLdouble)
//WRAPV(void , glFogCoorddvEXT, GLdouble *)
//WRAPV(void , glFogCoorddv, GLdouble *)
//WRAPV(void , glFogCoordfEXT, GLfloat)
//WRAPV(void , glFogCoordFormatNV, GLenum, GLsizei)
//WRAPV(void , glFogCoordf, GLfloat)
//WRAPV(void , glFogCoordfvEXT, GLfloat *)
//WRAPV(void , glFogCoordfv, GLfloat *)
//WRAPV(void , glFogCoordhNV, GLhalfNV)
//WRAPV(void , glFogCoordhvNV, GLhalfNV *)
//WRAPV(void , glFogCoordPointerEXT, GLenum, GLsizei, void *)
//WRAPV(void , glFogCoordPointerListIBM, GLenum, GLint, void **, GLint)
//WRAPV(void , glFogCoordPointer, GLenum, GLsizei, void *)
//WRAPV(void , glFogf, GLenum, GLfloat)
//WRAPV(void , glFogFuncSGIS, GLsizei, GLfloat *)
//WRAPV(void , glFogfv, GLenum, GLfloat *)
//WRAPV(void , glFogi, GLenum, GLint)
//WRAPV(void , glFogiv, GLenum, GLint *)
//WRAPV(void , glFogxOES, GLenum, GLfixed)
//WRAPV(void , glFogxvOES, GLenum, GLfixed *)
//WRAPV(void , glFragmentColorMaterialSGIX, GLenum, GLenum)
//WRAPV(void , glFragmentLightfSGIX, GLenum, GLenum, GLfloat)
//WRAPV(void , glFragmentLightfvSGIX, GLenum, GLenum, GLfloat *)
//WRAPV(void , glFragmentLightiSGIX, GLenum, GLenum, GLint)
//WRAPV(void , glFragmentLightivSGIX, GLenum, GLenum, GLint *)
//WRAPV(void , glFragmentLightModelfSGIX, GLenum, GLfloat)
//WRAPV(void , glFragmentLightModelfvSGIX, GLenum, GLfloat *)
//WRAPV(void , glFragmentLightModeliSGIX, GLenum, GLint)
//WRAPV(void , glFragmentLightModelivSGIX, GLenum, GLint *)
//WRAPV(void , glFragmentMaterialfSGIX, GLenum, GLenum, GLfloat)
//WRAPV(void , glFragmentMaterialfvSGIX, GLenum, GLenum, GLfloat *)
//WRAPV(void , glFragmentMaterialiSGIX, GLenum, GLenum, GLint)
//WRAPV(void , glFragmentMaterialivSGIX, GLenum, GLenum, GLint *)
//WRAPV(void , glFramebufferDrawBufferEXT, GLuint, GLenum)
//WRAPV(void , glFramebufferDrawBuffersEXT, GLuint, GLsizei, GLenum *)
//WRAPV(void , glFramebufferParameteri, GLenum, GLenum, GLint)
//WRAPV(void , glFramebufferReadBufferEXT, GLuint, GLenum)
//WRAPV(void , glFramebufferRenderbufferEXT, GLenum, GLenum, GLenum, GLuint)
//WRAPV(void , glFramebufferRenderbuffer, GLenum, GLenum, GLenum, GLuint)
//WRAPV(void , glFramebufferTexture1DEXT, GLenum, GLenum, GLenum, GLuint, GLint)
//WRAPV(void , glFramebufferTexture1D, GLenum, GLenum, GLenum, GLuint, GLint)
//WRAPV(void , glFramebufferTexture2DEXT, GLenum, GLenum, GLenum, GLuint, GLint)
//WRAPV(void , glFramebufferTexture2D, GLenum, GLenum, GLenum, GLuint, GLint)
//WRAPV(void , glFramebufferTexture3DEXT, GLenum, GLenum, GLenum, GLuint, GLint, GLint)
//WRAPV(void , glFramebufferTexture3D, GLenum, GLenum, GLenum, GLuint, GLint, GLint)
//WRAPV(void , glFramebufferTextureARB, GLenum, GLenum, GLuint, GLint)
//WRAPV(void , glFramebufferTextureEXT, GLenum, GLenum, GLuint, GLint)
//WRAPV(void , glFramebufferTextureFaceARB, GLenum, GLenum, GLuint, GLint, GLenum)
//WRAPV(void , glFramebufferTextureFaceEXT, GLenum, GLenum, GLuint, GLint, GLenum)
//WRAPV(void , glFramebufferTextureLayerARB, GLenum, GLenum, GLuint, GLint, GLint)
//WRAPV(void , glFramebufferTextureLayerEXT, GLenum, GLenum, GLuint, GLint, GLint)
//WRAPV(void , glFramebufferTextureLayer, GLenum, GLenum, GLuint, GLint, GLint)
//WRAPV(void , glFramebufferTexture, GLenum, GLenum, GLuint, GLint)
//WRAPV(void , glFrameTerminatorGREMEDY)
//WRAPV(void , glFrameZoomSGIX, GLint)
//WRAPV(void , glFreeObjectBufferATI, GLuint)
//WRAPV(void , glFrontFace, GLenum)
//WRAPV(void , glFrustumfOES, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glFrustum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glFrustumxOES, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glGenBuffersARB, GLsizei, GLuint *)
//WRAPV(void , glGenerateMipmapEXT, GLenum)
//WRAPV(void , glGenerateMipmap, GLenum)
//WRAPV(void , glGenerateMultiTexMipmapEXT, GLenum, GLenum)
//WRAPV(void , glGenerateTextureMipmapEXT, GLuint, GLenum)
//WRAPV(void , glGenFencesAPPLE, GLsizei, GLuint *)
//WRAPV(void , glGenFencesNV, GLsizei, GLuint *)
//WRAPV(void , glGenFramebuffersEXT, GLsizei, GLuint *)
//WRAPV(void , glGenFramebuffers, GLsizei, GLuint *)
//WRAPV(void , glGenNamesAMD, GLenum, GLuint, GLuint *)
//WRAPV(void , glGenOcclusionQueriesNV, GLsizei, GLuint *)
//WRAPV(void , glGenPerfMonitorsAMD, GLsizei, GLuint *)
//WRAPV(void , glGenProgramPipelines, GLsizei, GLuint *)
//WRAPV(void , glGenProgramsARB, GLsizei, GLuint *)
//WRAPV(void , glGenProgramsNV, GLsizei, GLuint *)
//WRAPV(void , glGenQueriesARB, GLsizei, GLuint *)
//WRAPV(void , glGenQueries, GLsizei, GLuint *)
//WRAPV(void , glGenRenderbuffersEXT, GLsizei, GLuint *)
//WRAPV(void , glGenRenderbuffers, GLsizei, GLuint *)
//WRAPV(void , glGenSamplers, GLsizei, GLuint *)
//WRAPV(void , glGenTexturesEXT, GLsizei, GLuint *)
//WRAPV(void , glGenTransformFeedbacksNV, GLsizei, GLuint *)
//WRAPV(void , glGenTransformFeedbacks, GLsizei, GLuint *)
//WRAPV(void , glGenVertexArraysAPPLE, GLsizei, GLuint *)
//WRAPV(void , glGetActiveAtomicCounterBufferiv, GLuint, GLuint, GLenum, GLint *)
//WRAPV(void , glGetActiveAttribARB, GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB *)
//WRAPV(void , glGetActiveAttrib, GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *)
//WRAPV(void , glGetActiveSubroutineName, GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *)
//WRAPV(void , glGetActiveSubroutineUniformiv, GLuint, GLenum, GLuint, GLenum, GLint *)
//WRAPV(void , glGetActiveSubroutineUniformName, GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *)
//WRAPV(void , glGetActiveUniformARB, GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB *)
//WRAPV(void , glGetActiveUniformBlockiv, GLuint, GLuint, GLenum, GLint *)
//WRAPV(void , glGetActiveUniformBlockName, GLuint, GLuint, GLsizei, GLsizei *, GLchar *)
//WRAPV(void , glGetActiveUniformName, GLuint, GLuint, GLsizei, GLsizei *, GLchar *)
//WRAPV(void , glGetActiveUniformsiv, GLuint, GLsizei, GLuint *, GLenum, GLint *)
//WRAPV(void , glGetActiveUniform, GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *)
//WRAPV(void , glGetActiveVaryingNV, GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *)
//WRAPV(void , glGetArrayObjectfvATI, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetArrayObjectivATI, GLenum, GLenum, GLint *)
//WRAPV(void , glGetAttachedObjectsARB, GLhandleARB, GLsizei, GLsizei *, GLhandleARB *)
//WRAPV(void , glGetAttachedShaders, GLuint, GLsizei, GLsizei *, GLuint *)
//WRAPV(void , glGetBooleanIndexedvEXT, GLenum, GLuint, GLboolean *)
//WRAPV(void , glGetBooleani_v, GLenum, GLuint, GLboolean *)
//WRAPV(void , glGetBooleanv, GLenum, GLboolean *)
//WRAPV(void , glGetBufferParameteri64v, GLenum, GLenum, GLint64 *)
//WRAPV(void , glGetBufferParameterivARB, GLenum, GLenum, GLint *)
//WRAPV(void , glGetBufferParameteriv, GLenum, GLenum, GLint *)
//WRAPV(void , glGetBufferParameterui64vNV, GLenum, GLenum, GLuint64EXT *)
//WRAPV(void , glGetBufferPointervARB, GLenum, GLenum, void **)
//WRAPV(void , glGetBufferPointerv, GLenum, GLenum, void **)
//WRAPV(void , glGetBufferSubDataARB, GLenum, GLintptrARB, GLsizeiptrARB, void *)
//WRAPV(void , glGetBufferSubData, GLenum, GLintptr, GLsizeiptr, void *)
//WRAPV(void , glGetClipPlanefOES, GLenum, GLfloat *)
//WRAPV(void , glGetClipPlane, GLenum, GLdouble *)
//WRAPV(void , glGetClipPlanexOES, GLenum, GLfixed *)
//WRAPV(void , glGetColorTableEXT, GLenum, GLenum, GLenum, void *)
//WRAPV(void , glGetColorTableParameterfvEXT, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetColorTableParameterfvSGI, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetColorTableParameterfv, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetColorTableParameterivEXT, GLenum, GLenum, GLint *)
//WRAPV(void , glGetColorTableParameterivSGI, GLenum, GLenum, GLint *)
//WRAPV(void , glGetColorTableParameteriv, GLenum, GLenum, GLint *)
//WRAPV(void , glGetColorTableSGI, GLenum, GLenum, GLenum, void *)
//WRAPV(void , glGetColorTable, GLenum, GLenum, GLenum, GLvoid *)
//WRAPV(void , glGetCombinerInputParameterfvNV, GLenum, GLenum, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetCombinerInputParameterivNV, GLenum, GLenum, GLenum, GLenum, GLint *)
//WRAPV(void , glGetCombinerOutputParameterfvNV, GLenum, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetCombinerOutputParameterivNV, GLenum, GLenum, GLenum, GLint *)
//WRAPV(void , glGetCombinerStageParameterfvNV, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetCompressedMultiTexImageEXT, GLenum, GLenum, GLint, void *)
//WRAPV(void , glGetCompressedTexImageARB, GLenum, GLint, void *)
//WRAPV(void , glGetCompressedTexImage, GLenum, GLint, GLvoid *)
//WRAPV(void , glGetCompressedTextureImageEXT, GLuint, GLenum, GLint, void *)
//WRAPV(void , glGetConvolutionFilterEXT, GLenum, GLenum, GLenum, void *)
//WRAPV(void , glGetConvolutionFilter, GLenum, GLenum, GLenum, GLvoid *)
//WRAPV(void , glGetConvolutionParameterfvEXT, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetConvolutionParameterfv, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetConvolutionParameterivEXT, GLenum, GLenum, GLint *)
//WRAPV(void , glGetConvolutionParameteriv, GLenum, GLenum, GLint *)
//WRAPV(void , glGetConvolutionParameterxvOES, GLenum, GLenum, GLfixed *)
//WRAPV(void , glGetDetailTexFuncSGIS, GLenum, GLfloat *)
//WRAPV(void , glGetDoubleIndexedvEXT, GLenum, GLuint, GLdouble *)
//WRAPV(void , glGetDoublei_vEXT, GLenum, GLuint, GLdouble *)
//WRAPV(void , glGetDoublei_v, GLenum, GLuint, GLdouble *)
//WRAPV(void , glGetDoublev, GLenum, GLdouble *)
//WRAPV(void , glGetFenceivNV, GLuint, GLenum, GLint *)
//WRAPV(void , glGetFinalCombinerInputParameterfvNV, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetFinalCombinerInputParameterivNV, GLenum, GLenum, GLint *)
//WRAPV(void , glGetFirstPerfQueryIdINTEL, GLuint *)
//WRAPV(void , glGetFixedvOES, GLenum, GLfixed *)
//WRAPV(void , glGetFloatIndexedvEXT, GLenum, GLuint, GLfloat *)
//WRAPV(void , glGetFloati_vEXT, GLenum, GLuint, GLfloat *)
//WRAPV(void , glGetFloati_v, GLenum, GLuint, GLfloat *)
//WRAPV(void , glGetFloatv, GLenum, GLfloat *)
//WRAPV(void , glGetFogFuncSGIS, GLfloat *)
//WRAPV(void , glGetFragmentLightfvSGIX, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetFragmentLightivSGIX, GLenum, GLenum, GLint *)
//WRAPV(void , glGetFragmentMaterialfvSGIX, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetFragmentMaterialivSGIX, GLenum, GLenum, GLint *)
//WRAPV(void , glGetFramebufferAttachmentParameterivEXT, GLenum, GLenum, GLenum, GLint *)
//WRAPV(void , glGetFramebufferAttachmentParameteriv, GLenum, GLenum, GLenum, GLint *)
//WRAPV(void , glGetFramebufferParameterivEXT, GLuint, GLenum, GLint *)
//WRAPV(void , glGetFramebufferParameteriv, GLenum, GLenum, GLint *)
//WRAPV(void , glGetHistogramEXT, GLenum, GLboolean, GLenum, GLenum, void *)
//WRAPV(void , glGetHistogramParameterfvEXT, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetHistogramParameterfv, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetHistogramParameterivEXT, GLenum, GLenum, GLint *)
//WRAPV(void , glGetHistogramParameteriv, GLenum, GLenum, GLint *)
//WRAPV(void , glGetHistogramParameterxvOES, GLenum, GLenum, GLfixed *)
//WRAPV(void , glGetHistogram, GLenum, GLboolean, GLenum, GLenum, GLvoid *)
//WRAPV(void , glGetImageTransformParameterfvHP, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetImageTransformParameterivHP, GLenum, GLenum, GLint *)
//WRAPV(void , glGetInfoLogARB, GLhandleARB, GLsizei, GLsizei *, GLcharARB *)
//WRAPV(void , glGetInteger64i_v, GLenum, GLuint, GLint64 *)
//WRAPV(void , glGetInteger64v, GLenum, GLint64 *)
//WRAPV(void , glGetIntegerIndexedvEXT, GLenum, GLuint, GLint *)
//WRAPV(void , glGetIntegeri_v, GLenum, GLuint, GLint *)
//WRAPV(void , glGetIntegerui64i_vNV, GLenum, GLuint, GLuint64EXT *)
//WRAPV(void , glGetIntegerui64vNV, GLenum, GLuint64EXT *)
//WRAPV(void , glGetIntegerv, GLenum, GLint *)
//WRAPV(void , glGetInternalformati64v, GLenum, GLenum, GLenum, GLsizei, GLint64 *)
//WRAPV(void , glGetInternalformativ, GLenum, GLenum, GLenum, GLsizei, GLint *)
//WRAPV(void , glGetInvariantBooleanvEXT, GLuint, GLenum, GLboolean *)
//WRAPV(void , glGetInvariantFloatvEXT, GLuint, GLenum, GLfloat *)
//WRAPV(void , glGetInvariantIntegervEXT, GLuint, GLenum, GLint *)
//WRAPV(void , glGetLightfv, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetLightiv, GLenum, GLenum, GLint *)
//WRAPV(void , glGetLightxOES, GLenum, GLenum, GLfixed *)
//WRAPV(void , glGetListParameterfvSGIX, GLuint, GLenum, GLfloat *)
//WRAPV(void , glGetListParameterivSGIX, GLuint, GLenum, GLint *)
//WRAPV(void , glGetLocalConstantBooleanvEXT, GLuint, GLenum, GLboolean *)
//WRAPV(void , glGetLocalConstantFloatvEXT, GLuint, GLenum, GLfloat *)
//WRAPV(void , glGetLocalConstantIntegervEXT, GLuint, GLenum, GLint *)
//WRAPV(void , glGetMapAttribParameterfvNV, GLenum, GLuint, GLenum, GLfloat *)
//WRAPV(void , glGetMapAttribParameterivNV, GLenum, GLuint, GLenum, GLint *)
//WRAPV(void , glGetMapControlPointsNV, GLenum, GLuint, GLenum, GLsizei, GLsizei, GLboolean, void *)
//WRAPV(void , glGetMapdv, GLenum, GLenum, GLdouble *)
//WRAPV(void , glGetMapfv, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetMapiv, GLenum, GLenum, GLint *)
//WRAPV(void , glGetMapParameterfvNV, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetMapParameterivNV, GLenum, GLenum, GLint *)
//WRAPV(void , glGetMapxvOES, GLenum, GLenum, GLfixed *)
//WRAPV(void , glGetMaterialfv, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetMaterialiv, GLenum, GLenum, GLint *)
//WRAPV(void , glGetMaterialxOES, GLenum, GLenum, GLfixed)
//WRAPV(void , glGetMinmaxEXT, GLenum, GLboolean, GLenum, GLenum, void *)
//WRAPV(void , glGetMinmaxParameterfvEXT, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetMinmaxParameterfv, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetMinmaxParameterivEXT, GLenum, GLenum, GLint *)
//WRAPV(void , glGetMinmaxParameteriv, GLenum, GLenum, GLint *)
//WRAPV(void , glGetMinmax, GLenum, GLboolean, GLenum, GLenum, GLvoid *)
//WRAPV(void , glGetMultisamplefvNV, GLenum, GLuint, GLfloat *)
//WRAPV(void , glGetMultisamplefv, GLenum, GLuint, GLfloat *)
//WRAPV(void , glGetMultiTexEnvfvEXT, GLenum, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetMultiTexEnvivEXT, GLenum, GLenum, GLenum, GLint *)
//WRAPV(void , glGetMultiTexGendvEXT, GLenum, GLenum, GLenum, GLdouble *)
//WRAPV(void , glGetMultiTexGenfvEXT, GLenum, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetMultiTexGenivEXT, GLenum, GLenum, GLenum, GLint *)
//WRAPV(void , glGetMultiTexImageEXT, GLenum, GLenum, GLint, GLenum, GLenum, void *)
//WRAPV(void , glGetMultiTexLevelParameterfvEXT, GLenum, GLenum, GLint, GLenum, GLfloat *)
//WRAPV(void , glGetMultiTexLevelParameterivEXT, GLenum, GLenum, GLint, GLenum, GLint *)
//WRAPV(void , glGetMultiTexParameterfvEXT, GLenum, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetMultiTexParameterIivEXT, GLenum, GLenum, GLenum, GLint *)
//WRAPV(void , glGetMultiTexParameterIuivEXT, GLenum, GLenum, GLenum, GLuint *)
//WRAPV(void , glGetMultiTexParameterivEXT, GLenum, GLenum, GLenum, GLint *)
//WRAPV(void , glGetNamedBufferParameterivEXT, GLuint, GLenum, GLint *)
//WRAPV(void , glGetNamedBufferParameterui64vNV, GLuint, GLenum, GLuint64EXT *)
//WRAPV(void , glGetNamedBufferPointervEXT, GLuint, GLenum, void **)
//WRAPV(void , glGetNamedBufferSubDataEXT, GLuint, GLintptr, GLsizeiptr, void *)
//WRAPV(void , glGetNamedFramebufferAttachmentParameterivEXT, GLuint, GLenum, GLenum, GLint *)
//WRAPV(void , glGetNamedFramebufferParameterivEXT, GLuint, GLenum, GLint *)
//WRAPV(void , glGetNamedProgramivEXT, GLuint, GLenum, GLenum, GLint *)
//WRAPV(void , glGetNamedProgramLocalParameterdvEXT, GLuint, GLenum, GLuint, GLdouble *)
//WRAPV(void , glGetNamedProgramLocalParameterfvEXT, GLuint, GLenum, GLuint, GLfloat *)
//WRAPV(void , glGetNamedProgramLocalParameterIivEXT, GLuint, GLenum, GLuint, GLint *)
//WRAPV(void , glGetNamedProgramLocalParameterIuivEXT, GLuint, GLenum, GLuint, GLuint *)
//WRAPV(void , glGetNamedProgramStringEXT, GLuint, GLenum, GLenum, void *)
//WRAPV(void , glGetNamedRenderbufferParameterivEXT, GLuint, GLenum, GLint *)
//WRAPV(void , glGetNamedStringARB, GLint, GLchar *, GLsizei, GLint *, GLchar *)
//WRAPV(void , glGetNamedStringivARB, GLint, GLchar *, GLenum, GLint *)
//WRAPV(void , glGetnColorTableARB, GLenum, GLenum, GLenum, GLsizei, void *)
//WRAPV(void , glGetnCompressedTexImageARB, GLenum, GLint, GLsizei, void *)
//WRAPV(void , glGetnConvolutionFilterARB, GLenum, GLenum, GLenum, GLsizei, void *)
//WRAPV(void , glGetNextPerfQueryIdINTEL, GLuint, GLuint *)
//WRAPV(void , glGetnHistogramARB, GLenum, GLboolean, GLenum, GLenum, GLsizei, void *)
//WRAPV(void , glGetnMapdvARB, GLenum, GLenum, GLsizei, GLdouble *)
//WRAPV(void , glGetnMapfvARB, GLenum, GLenum, GLsizei, GLfloat *)
//WRAPV(void , glGetnMapivARB, GLenum, GLenum, GLsizei, GLint *)
//WRAPV(void , glGetnMinmaxARB, GLenum, GLboolean, GLenum, GLenum, GLsizei, void *)
//WRAPV(void , glGetnPixelMapfvARB, GLenum, GLsizei, GLfloat *)
//WRAPV(void , glGetnPixelMapuivARB, GLenum, GLsizei, GLuint *)
//WRAPV(void , glGetnPixelMapusvARB, GLenum, GLsizei, GLushort *)
//WRAPV(void , glGetnPolygonStippleARB, GLsizei, GLubyte *)
//WRAPV(void , glGetnSeparableFilterARB, GLenum, GLenum, GLenum, GLsizei, void *, GLsizei, void *, void *)
//WRAPV(void , glGetnTexImageARB, GLenum, GLint, GLenum, GLenum, GLsizei, void *)
//WRAPV(void , glGetnUniformdvARB, GLuint, GLint, GLsizei, GLdouble *)
//WRAPV(void , glGetnUniformfvARB, GLuint, GLint, GLsizei, GLfloat *)
//WRAPV(void , glGetnUniformivARB, GLuint, GLint, GLsizei, GLint *)
//WRAPV(void , glGetnUniformuivARB, GLuint, GLint, GLsizei, GLuint *)
//WRAPV(void , glGetObjectBufferfvATI, GLuint, GLenum, GLfloat *)
//WRAPV(void , glGetObjectBufferivATI, GLuint, GLenum, GLint *)
//WRAPV(void , glGetObjectLabelEXT, GLenum, GLuint, GLsizei, GLsizei *, GLchar *)
//WRAPV(void , glGetObjectLabel, GLenum, GLuint, GLsizei, GLsizei *, GLchar *)
//WRAPV(void , glGetObjectParameterfvARB, GLhandleARB, GLenum, GLfloat *)
//WRAPV(void , glGetObjectParameterivAPPLE, GLenum, GLuint, GLenum, GLint *)
//WRAPV(void , glGetObjectParameterivARB, GLhandleARB, GLenum, GLint *)
//WRAPV(void , glGetObjectPtrLabel, void *, GLsizei, GLsizei *, GLchar *)
//WRAPV(void , glGetOcclusionQueryivNV, GLuint, GLenum, GLint *)
//WRAPV(void , glGetOcclusionQueryuivNV, GLuint, GLenum, GLuint *)
//WRAPV(void , glGetPathColorGenfvNV, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetPathColorGenivNV, GLenum, GLenum, GLint *)
//WRAPV(void , glGetPathCommandsNV, GLuint, GLubyte *)
//WRAPV(void , glGetPathCoordsNV, GLuint, GLfloat *)
//WRAPV(void , glGetPathDashArrayNV, GLuint, GLfloat *)
//WRAPV(void , glGetPathMetricRangeNV, GLbitfield, GLuint, GLsizei, GLsizei, GLfloat *)
//WRAPV(void , glGetPathMetricsNV, GLbitfield, GLsizei, GLenum, void *, GLuint, GLsizei, GLfloat *)
//WRAPV(void , glGetPathParameterfvNV, GLuint, GLenum, GLfloat *)
//WRAPV(void , glGetPathParameterivNV, GLuint, GLenum, GLint *)
//WRAPV(void , glGetPathSpacingNV, GLenum, GLsizei, GLenum, void *, GLuint, GLfloat, GLfloat, GLenum, GLfloat *)
//WRAPV(void , glGetPathTexGenfvNV, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetPathTexGenivNV, GLenum, GLenum, GLint *)
//WRAPV(void , glGetPerfCounterInfoINTEL, GLuint, GLuint, GLuint, GLchar *, GLuint, GLchar *, GLuint *, GLuint *, GLuint *, GLuint *, GLuint64 *)
//WRAPV(void , glGetPerfMonitorCounterDataAMD, GLuint, GLenum, GLsizei, GLuint *, GLint *)
//WRAPV(void , glGetPerfMonitorCounterInfoAMD, GLuint, GLuint, GLenum, void *)
//WRAPV(void , glGetPerfMonitorCountersAMD, GLuint, GLint *, GLint *, GLsizei, GLuint *)
//WRAPV(void , glGetPerfMonitorCounterStringAMD, GLuint, GLuint, GLsizei, GLsizei *, GLchar *)
//WRAPV(void , glGetPerfMonitorGroupsAMD, GLint *, GLsizei, GLuint *)
//WRAPV(void , glGetPerfMonitorGroupStringAMD, GLuint, GLsizei, GLsizei *, GLchar *)
//WRAPV(void , glGetPerfQueryDataINTEL, GLuint, GLuint, GLsizei, GLvoid *, GLuint *)
//WRAPV(void , glGetPerfQueryIdByNameINTEL, GLchar *, GLuint *)
//WRAPV(void , glGetPerfQueryInfoINTEL, GLuint, GLuint, GLchar *, GLuint *, GLuint *, GLuint *, GLuint *)
//WRAPV(void , glGetPixelMapfv, GLenum, GLfloat *)
//WRAPV(void , glGetPixelMapuiv, GLenum, GLuint *)
//WRAPV(void , glGetPixelMapusv, GLenum, GLushort *)
//WRAPV(void , glGetPixelMapxv, GLenum, GLint, GLfixed *)
//WRAPV(void , glGetPixelTexGenParameterfvSGIS, GLenum, GLfloat *)
//WRAPV(void , glGetPixelTexGenParameterivSGIS, GLenum, GLint *)
//WRAPV(void , glGetPixelTransformParameterfvEXT, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetPixelTransformParameterivEXT, GLenum, GLenum, GLint *)
//WRAPV(void , glGetPointerIndexedvEXT, GLenum, GLuint, void **)
//WRAPV(void , glGetPointeri_vEXT, GLenum, GLuint, void **)
//WRAPV(void , glGetPointervEXT, GLenum, void **)
//WRAPV(void , glGetPointerv, GLenum, GLvoid **)
//WRAPV(void , glGetPolygonStipple, GLubyte *)
//WRAPV(void , glGetProgramBinary, GLuint, GLsizei, GLsizei *, GLenum *, void *)
//WRAPV(void , glGetProgramEnvParameterdvARB, GLenum, GLuint, GLdouble *)
//WRAPV(void , glGetProgramEnvParameterfvARB, GLenum, GLuint, GLfloat *)
//WRAPV(void , glGetProgramEnvParameterIivNV, GLenum, GLuint, GLint *)
//WRAPV(void , glGetProgramEnvParameterIuivNV, GLenum, GLuint, GLuint *)
//WRAPV(void , glGetProgramInterfaceiv, GLuint, GLenum, GLenum, GLint *)
//WRAPV(void , glGetProgramivARB, GLenum, GLenum, GLint *)
//WRAPV(void , glGetProgramivNV, GLuint, GLenum, GLint *)
//WRAPV(void , glGetProgramLocalParameterdvARB, GLenum, GLuint, GLdouble *)
//WRAPV(void , glGetProgramLocalParameterfvARB, GLenum, GLuint, GLfloat *)
//WRAPV(void , glGetProgramLocalParameterIivNV, GLenum, GLuint, GLint *)
//WRAPV(void , glGetProgramLocalParameterIuivNV, GLenum, GLuint, GLuint *)
//WRAPV(void , glGetProgramNamedParameterdvNV, GLuint, GLsizei, GLubyte *, GLdouble *)
//WRAPV(void , glGetProgramNamedParameterfvNV, GLuint, GLsizei, GLubyte *, GLfloat *)
//WRAPV(void , glGetProgramParameterdvNV, GLenum, GLuint, GLenum, GLdouble *)
//WRAPV(void , glGetProgramParameterfvNV, GLenum, GLuint, GLenum, GLfloat *)
//WRAPV(void , glGetProgramPipelineInfoLog, GLuint, GLsizei, GLsizei *, GLchar *)
//WRAPV(void , glGetProgramPipelineiv, GLuint, GLenum, GLint *)
//WRAPV(void , glGetProgramResourceiv, GLuint, GLenum, GLuint, GLsizei, GLenum *, GLsizei, GLsizei *, GLint *)
//WRAPV(void , glGetProgramResourceName, GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *)
//WRAPV(void , glGetProgramStageiv, GLuint, GLenum, GLenum, GLint *)
//WRAPV(void , glGetProgramStringARB, GLenum, GLenum, void *)
//WRAPV(void , glGetProgramStringNV, GLuint, GLenum, GLubyte *)
//WRAPV(void , glGetProgramSubroutineParameteruivNV, GLenum, GLuint, GLuint *)
//WRAPV(void , glGetQueryIndexediv, GLenum, GLuint, GLenum, GLint *)
//WRAPV(void , glGetQueryivARB, GLenum, GLenum, GLint *)
//WRAPV(void , glGetQueryiv, GLenum, GLenum, GLint *)
//WRAPV(void , glGetQueryObjecti64vEXT, GLuint, GLenum, GLint64 *)
//WRAPV(void , glGetQueryObjecti64v, GLuint, GLenum, GLint64 *)
//WRAPV(void , glGetQueryObjectivARB, GLuint, GLenum, GLint *)
//WRAPV(void , glGetQueryObjectiv, GLuint, GLenum, GLint *)
//WRAPV(void , glGetQueryObjectui64vEXT, GLuint, GLenum, GLuint64 *)
//WRAPV(void , glGetQueryObjectui64v, GLuint, GLenum, GLuint64 *)
//WRAPV(void , glGetQueryObjectuivARB, GLuint, GLenum, GLuint *)
//WRAPV(void , glGetQueryObjectuiv, GLuint, GLenum, GLuint *)
//WRAPV(void , glGetRenderbufferParameterivEXT, GLenum, GLenum, GLint *)
//WRAPV(void , glGetRenderbufferParameteriv, GLenum, GLenum, GLint *)
//WRAPV(void , glGetSamplerParameterfv, GLuint, GLenum, GLfloat *)
//WRAPV(void , glGetSamplerParameterIiv, GLuint, GLenum, GLint *)
//WRAPV(void , glGetSamplerParameterIuiv, GLuint, GLenum, GLuint *)
//WRAPV(void , glGetSamplerParameteriv, GLuint, GLenum, GLint *)
//WRAPV(void , glGetSeparableFilterEXT, GLenum, GLenum, GLenum, void *, void *, void *)
//WRAPV(void , glGetSeparableFilter, GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *)
//WRAPV(void , glGetShaderPrecisionFormat, GLenum, GLenum, GLint *, GLint *)
//WRAPV(void , glGetShaderSourceARB, GLhandleARB, GLsizei, GLsizei *, GLcharARB *)
//WRAPV(void , glGetShaderSource, GLuint, GLsizei, GLsizei *, GLchar *)
//WRAPV(void , glGetSharpenTexFuncSGIS, GLenum, GLfloat *)
//WRAPV(void , glGetSynciv, GLsync, GLenum, GLsizei, GLsizei *, GLint *)
//WRAPV(void , glGetTexBumpParameterfvATI, GLenum, GLfloat *)
//WRAPV(void , glGetTexBumpParameterivATI, GLenum, GLint *)
//WRAPV(void , glGetTexEnvfv, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetTexEnviv, GLenum, GLenum, GLint *)
//WRAPV(void , glGetTexEnvxvOES, GLenum, GLenum, GLfixed *)
//WRAPV(void , glGetTexFilterFuncSGIS, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetTexGendv, GLenum, GLenum, GLdouble *)
//WRAPV(void , glGetTexGenfv, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetTexGeniv, GLenum, GLenum, GLint *)
//WRAPV(void , glGetTexGenxvOES, GLenum, GLenum, GLfixed *)
//WRAPV(void , glGetTexImage, GLenum, GLint, GLenum, GLenum, GLvoid *)
//WRAPV(void , glGetTexLevelParameterfv, GLenum, GLint, GLenum, GLfloat *)
//WRAPV(void , glGetTexLevelParameteriv, GLenum, GLint, GLenum, GLint *)
//WRAPV(void , glGetTexLevelParameterxvOES, GLenum, GLint, GLenum, GLfixed *)
//WRAPV(void , glGetTexParameterfv, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetTexParameterIivEXT, GLenum, GLenum, GLint *)
//WRAPV(void , glGetTexParameterIiv, GLenum, GLenum, GLint *)
//WRAPV(void , glGetTexParameterIuivEXT, GLenum, GLenum, GLuint *)
//WRAPV(void , glGetTexParameterIuiv, GLenum, GLenum, GLuint *)
//WRAPV(void , glGetTexParameteriv, GLenum, GLenum, GLint *)
//WRAPV(void , glGetTexParameterPointervAPPLE, GLenum, GLenum, void **)
//WRAPV(void , glGetTexParameterxvOES, GLenum, GLenum, GLfixed *)
//WRAPV(void , glGetTextureImageEXT, GLuint, GLenum, GLint, GLenum, GLenum, void *)
//WRAPV(void , glGetTextureLevelParameterfvEXT, GLuint, GLenum, GLint, GLenum, GLfloat *)
//WRAPV(void , glGetTextureLevelParameterivEXT, GLuint, GLenum, GLint, GLenum, GLint *)
//WRAPV(void , glGetTextureParameterfvEXT, GLuint, GLenum, GLenum, GLfloat *)
//WRAPV(void , glGetTextureParameterIivEXT, GLuint, GLenum, GLenum, GLint *)
//WRAPV(void , glGetTextureParameterIuivEXT, GLuint, GLenum, GLenum, GLuint *)
//WRAPV(void , glGetTextureParameterivEXT, GLuint, GLenum, GLenum, GLint *)
//WRAPV(void , glGetTrackMatrixivNV, GLenum, GLuint, GLenum, GLint *)
//WRAPV(void , glGetTransformFeedbackVaryingEXT, GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *)
//WRAPV(void , glGetTransformFeedbackVaryingNV, GLuint, GLuint, GLint *)
//WRAPV(void , glGetTransformFeedbackVarying, GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *)
//WRAPV(void , glGetUniformdv, GLuint, GLint, GLdouble *)
//WRAPV(void , glGetUniformfvARB, GLhandleARB, GLint, GLfloat *)
//WRAPV(void , glGetUniformfv, GLuint, GLint, GLfloat *)
//WRAPV(void , glGetUniformi64vNV, GLuint, GLint, GLint64EXT *)
//WRAPV(void , glGetUniformIndices, GLuint, GLsizei, GLchar **, GLuint *)
//WRAPV(void , glGetUniformivARB, GLhandleARB, GLint, GLint *)
//WRAPV(void , glGetUniformiv, GLuint, GLint, GLint *)
//WRAPV(void , glGetUniformSubroutineuiv, GLenum, GLint, GLuint *)
//WRAPV(void , glGetUniformui64vNV, GLuint, GLint, GLuint64EXT *)
//WRAPV(void , glGetUniformuivEXT, GLuint, GLint, GLuint *)
//WRAPV(void , glGetUniformuiv, GLuint, GLint, GLuint *)
//WRAPV(void , glGetVariantArrayObjectfvATI, GLuint, GLenum, GLfloat *)
//WRAPV(void , glGetVariantArrayObjectivATI, GLuint, GLenum, GLint *)
//WRAPV(void , glGetVariantBooleanvEXT, GLuint, GLenum, GLboolean *)
//WRAPV(void , glGetVariantFloatvEXT, GLuint, GLenum, GLfloat *)
//WRAPV(void , glGetVariantIntegervEXT, GLuint, GLenum, GLint *)
//WRAPV(void , glGetVariantPointervEXT, GLuint, GLenum, void **)
//WRAPV(void , glGetVertexArrayIntegeri_vEXT, GLuint, GLuint, GLenum, GLint *)
//WRAPV(void , glGetVertexArrayIntegervEXT, GLuint, GLenum, GLint *)
//WRAPV(void , glGetVertexArrayPointeri_vEXT, GLuint, GLuint, GLenum, void **)
//WRAPV(void , glGetVertexArrayPointervEXT, GLuint, GLenum, void **)
//WRAPV(void , glGetVertexAttribArrayObjectfvATI, GLuint, GLenum, GLfloat *)
//WRAPV(void , glGetVertexAttribArrayObjectivATI, GLuint, GLenum, GLint *)
//WRAPV(void , glGetVertexAttribdvARB, GLuint, GLenum, GLdouble *)
//WRAPV(void , glGetVertexAttribdvNV, GLuint, GLenum, GLdouble *)
//WRAPV(void , glGetVertexAttribdv, GLuint, GLenum, GLdouble *)
//WRAPV(void , glGetVertexAttribfvARB, GLuint, GLenum, GLfloat *)
//WRAPV(void , glGetVertexAttribfvNV, GLuint, GLenum, GLfloat *)
//WRAPV(void , glGetVertexAttribfv, GLuint, GLenum, GLfloat *)
//WRAPV(void , glGetVertexAttribIivEXT, GLuint, GLenum, GLint *)
//WRAPV(void , glGetVertexAttribIiv, GLuint, GLenum, GLint *)
//WRAPV(void , glGetVertexAttribIuivEXT, GLuint, GLenum, GLuint *)
//WRAPV(void , glGetVertexAttribIuiv, GLuint, GLenum, GLuint *)
//WRAPV(void , glGetVertexAttribivARB, GLuint, GLenum, GLint *)
//WRAPV(void , glGetVertexAttribivNV, GLuint, GLenum, GLint *)
//WRAPV(void , glGetVertexAttribiv, GLuint, GLenum, GLint *)
//WRAPV(void , glGetVertexAttribLdvEXT, GLuint, GLenum, GLdouble *)
//WRAPV(void , glGetVertexAttribLdv, GLuint, GLenum, GLdouble *)
//WRAPV(void , glGetVertexAttribLi64vNV, GLuint, GLenum, GLint64EXT *)
//WRAPV(void , glGetVertexAttribLui64vARB, GLuint, GLenum, GLuint64EXT *)
//WRAPV(void , glGetVertexAttribLui64vNV, GLuint, GLenum, GLuint64EXT *)
//WRAPV(void , glGetVertexAttribPointervARB, GLuint, GLenum, void **)
//WRAPV(void , glGetVertexAttribPointervNV, GLuint, GLenum, void **)
//WRAPV(void , glGetVertexAttribPointerv, GLuint, GLenum, void **)
//WRAPV(void , glGetVideoCaptureivNV, GLuint, GLenum, GLint *)
//WRAPV(void , glGetVideoCaptureStreamdvNV, GLuint, GLuint, GLenum, GLdouble *)
//WRAPV(void , glGetVideoCaptureStreamfvNV, GLuint, GLuint, GLenum, GLfloat *)
//WRAPV(void , glGetVideoCaptureStreamivNV, GLuint, GLuint, GLenum, GLint *)
//WRAPV(void , glGetVideoi64vNV, GLuint, GLenum, GLint64EXT *)
//WRAPV(void , glGetVideoivNV, GLuint, GLenum, GLint *)
//WRAPV(void , glGetVideoui64vNV, GLuint, GLenum, GLuint64EXT *)
//WRAPV(void , glGetVideouivNV, GLuint, GLenum, GLuint *)
//WRAPV(void , glGlobalAlphaFactorbSUN, GLbyte)
//WRAPV(void , glGlobalAlphaFactordSUN, GLdouble)
//WRAPV(void , glGlobalAlphaFactorfSUN, GLfloat)
//WRAPV(void , glGlobalAlphaFactoriSUN, GLint)
//WRAPV(void , glGlobalAlphaFactorsSUN, GLshort)
//WRAPV(void , glGlobalAlphaFactorubSUN, GLubyte)
//WRAPV(void , glGlobalAlphaFactoruiSUN, GLuint)
//WRAPV(void , glGlobalAlphaFactorusSUN, GLushort)
//WRAPV(void , glHintPGI, GLenum, GLint)
//WRAPV(void , glHint, GLenum, GLenum)
//WRAPV(void , glHistogramEXT, GLenum, GLsizei, GLenum, GLboolean)
//WRAPV(void , glHistogram, GLenum, GLsizei, GLenum, GLboolean)
//WRAPV(void , glIglooInterfaceSGIX, GLenum, void *)
//WRAPV(void , glImageTransformParameterfHP, GLenum, GLenum, GLfloat)
//WRAPV(void , glImageTransformParameterfvHP, GLenum, GLenum, GLfloat *)
//WRAPV(void , glImageTransformParameteriHP, GLenum, GLenum, GLint)
//WRAPV(void , glImageTransformParameterivHP, GLenum, GLenum, GLint *)
//WRAPV(void , glIndexd, GLdouble)
//WRAPV(void , glIndexdv, GLdouble *)
//WRAPV(void , glIndexFormatNV, GLenum, GLsizei)
//WRAPV(void , glIndexf, GLfloat)
//WRAPV(void , glIndexFuncEXT, GLenum, GLclampf)
//WRAPV(void , glIndexfv, GLfloat *)
//WRAPV(void , glIndexi, GLint)
//WRAPV(void , glIndexiv, GLint *)
//WRAPV(void , glIndexMask, GLuint)
//WRAPV(void , glIndexMaterialEXT, GLenum, GLenum)
//WRAPV(void , glIndexPointerEXT, GLenum, GLsizei, GLsizei, void *)
//WRAPV(void , glIndexPointerListIBM, GLenum, GLint, void **, GLint)
//WRAPV(void , glIndexPointer, GLenum, GLsizei, GLvoid *)
//WRAPV(void , glIndexs, GLshort)
//WRAPV(void , glIndexsv, GLshort *)
//WRAPV(void , glIndexub, GLubyte)
//WRAPV(void , glIndexubv, GLubyte *)
//WRAPV(void , glIndexxOES, GLfixed)
//WRAPV(void , glIndexxvOES, GLfixed *)
//WRAPV(void , glInitNames)
//WRAPV(void , glInsertComponentEXT, GLuint, GLuint, GLuint)
//WRAPV(void , glInsertEventMarkerEXT, GLsizei, GLchar *)
//WRAPV(void , glInstrumentsBufferSGIX, GLsizei, GLint *)
//WRAPV(void , glInterleavedArrays, GLenum, GLsizei, GLvoid *)
//WRAPV(void , glInterpolatePathsNV, GLuint, GLuint, GLuint, GLfloat)
//WRAPV(void , glInvalidateBufferData, GLuint)
//WRAPV(void , glInvalidateBufferSubData, GLuint, GLintptr, GLsizeiptr)
//WRAPV(void , glInvalidateFramebuffer, GLenum, GLsizei, GLenum *)
//WRAPV(void , glInvalidateSubFramebuffer, GLenum, GLsizei, GLenum *, GLint, GLint, GLsizei, GLsizei)
//WRAPV(void , glInvalidateTexImage, GLuint, GLint)
//WRAPV(void , glInvalidateTexSubImage, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei)
//WRAPV(void , glLabelObjectEXT, GLenum, GLuint, GLsizei, GLchar *)
//WRAPV(void , glLightEnviSGIX, GLenum, GLint)
//WRAPV(void , glLightf, GLenum, GLenum, GLfloat)
//WRAPV(void , glLightfv, GLenum, GLenum, GLfloat *)
//WRAPV(void , glLighti, GLenum, GLenum, GLint)
//WRAPV(void , glLightiv, GLenum, GLenum, GLint *)
//WRAPV(void , glLightModelf, GLenum, GLfloat)
//WRAPV(void , glLightModelfv, GLenum, GLfloat *)
//WRAPV(void , glLightModeli, GLenum, GLint)
//WRAPV(void , glLightModeliv, GLenum, GLint *)
//WRAPV(void , glLightModelxOES, GLenum, GLfixed)
//WRAPV(void , glLightModelxvOES, GLenum, GLfixed *)
//WRAPV(void , glLightxOES, GLenum, GLenum, GLfixed)
//WRAPV(void , glLightxvOES, GLenum, GLenum, GLfixed *)
//WRAPV(void , glLineStipple, GLint, GLushort)
//WRAPV(void , glLineWidthxOES, GLfixed)
//WRAPV(void , glLinkProgramARB, GLhandleARB)
//WRAPV(void , glListBase, GLuint)
//WRAPV(void , glListParameterfSGIX, GLuint, GLenum, GLfloat)
//WRAPV(void , glListParameterfvSGIX, GLuint, GLenum, GLfloat *)
//WRAPV(void , glListParameteriSGIX, GLuint, GLenum, GLint)
//WRAPV(void , glListParameterivSGIX, GLuint, GLenum, GLint *)
//WRAPV(void , glLoadIdentity)
//WRAPV(void , glLoadIdentityDeformationMapSGIX, GLbitfield)
//WRAPV(void , glLoadMatrixd, GLdouble *)
//WRAPV(void , glLoadMatrixf, GLfloat *)
//WRAPV(void , glLoadMatrixxOES, GLfixed *)
//WRAPV(void , glLoadName, GLuint)
//WRAPV(void , glLoadProgramNV, GLenum, GLuint, GLsizei, GLubyte *)
//WRAPV(void , glLoadTransposeMatrixdARB, GLdouble *)
//WRAPV(void , glLoadTransposeMatrixd, GLdouble *)
//WRAPV(void , glLoadTransposeMatrixfARB, GLfloat *)
//WRAPV(void , glLoadTransposeMatrixf, GLfloat *)
//WRAPV(void , glLoadTransposeMatrixxOES, GLfixed *)
//WRAPV(void , glLockArraysEXT, GLint, GLsizei)
//WRAPV(void , glLogicOp, GLenum)
//WRAPV(void , glMakeBufferNonResidentNV, GLenum)
//WRAPV(void , glMakeBufferResidentNV, GLenum, GLenum)
//WRAPV(void , glMakeImageHandleNonResidentARB, GLuint64)
//WRAPV(void , glMakeImageHandleNonResidentNV, GLuint64)
//WRAPV(void , glMakeImageHandleResidentARB, GLuint64, GLenum)
//WRAPV(void , glMakeImageHandleResidentNV, GLuint64, GLenum)
//WRAPV(void , glMakeNamedBufferNonResidentNV, GLuint)
//WRAPV(void , glMakeNamedBufferResidentNV, GLuint, GLenum)
//WRAPV(void , glMakeTextureHandleNonResidentARB, GLuint64)
//WRAPV(void , glMakeTextureHandleNonResidentNV, GLuint64)
//WRAPV(void , glMakeTextureHandleResidentARB, GLuint64)
//WRAPV(void , glMakeTextureHandleResidentNV, GLuint64)
//WRAPV(void , glMap1d, GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble *)
//WRAPV(void , glMap1f, GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat *)
//WRAPV(void , glMap1xOES, GLenum, GLfixed, GLfixed, GLint, GLint, GLfixed)
//WRAPV(void , glMap2d, GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, GLdouble *)
//WRAPV(void , glMap2f, GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, GLfloat *)
//WRAPV(void , glMap2xOES, GLenum, GLfixed, GLfixed, GLint, GLint, GLfixed, GLfixed, GLint, GLint, GLfixed)
//WRAPV(void , glMapControlPointsNV, GLenum, GLuint, GLenum, GLsizei, GLsizei, GLint, GLint, GLboolean, void *)
//WRAPV(void , glMapGrid1d, GLint, GLdouble, GLdouble)
//WRAPV(void , glMapGrid1f, GLint, GLfloat, GLfloat)
//WRAPV(void , glMapGrid1xOES, GLint, GLfixed, GLfixed)
//WRAPV(void , glMapGrid2d, GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble)
//WRAPV(void , glMapGrid2f, GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat)
//WRAPV(void , glMapGrid2xOES, GLint, GLfixed, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glMapParameterfvNV, GLenum, GLenum, GLfloat *)
//WRAPV(void , glMapParameterivNV, GLenum, GLenum, GLint *)
//WRAPV(void , glMapVertexAttrib1dAPPLE, GLuint, GLuint, GLdouble, GLdouble, GLint, GLint, GLdouble *)
//WRAPV(void , glMapVertexAttrib1fAPPLE, GLuint, GLuint, GLfloat, GLfloat, GLint, GLint, GLfloat *)
//WRAPV(void , glMapVertexAttrib2dAPPLE, GLuint, GLuint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, GLdouble *)
//WRAPV(void , glMapVertexAttrib2fAPPLE, GLuint, GLuint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, GLfloat *)
//WRAPV(void , glMaterialf, GLenum, GLenum, GLfloat)
//WRAPV(void , glMaterialfv, GLenum, GLenum, GLfloat *)
//WRAPV(void , glMateriali, GLenum, GLenum, GLint)
//WRAPV(void , glMaterialiv, GLenum, GLenum, GLint *)
//WRAPV(void , glMaterialxOES, GLenum, GLenum, GLfixed)
//WRAPV(void , glMaterialxvOES, GLenum, GLenum, GLfixed *)
//WRAPV(void , glMatrixFrustumEXT, GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glMatrixIndexPointerARB, GLint, GLenum, GLsizei, void *)
//WRAPV(void , glMatrixIndexubvARB, GLint, GLubyte *)
//WRAPV(void , glMatrixIndexuivARB, GLint, GLuint *)
//WRAPV(void , glMatrixIndexusvARB, GLint, GLushort *)
//WRAPV(void , glMatrixLoaddEXT, GLenum, GLdouble *)
//WRAPV(void , glMatrixLoadfEXT, GLenum, GLfloat *)
//WRAPV(void , glMatrixLoadIdentityEXT, GLenum)
//WRAPV(void , glMatrixLoadTransposedEXT, GLenum, GLdouble *)
//WRAPV(void , glMatrixLoadTransposefEXT, GLenum, GLfloat *)
//WRAPV(void , glMatrixMode, GLenum)
//WRAPV(void , glMatrixMultdEXT, GLenum, GLdouble *)
//WRAPV(void , glMatrixMultfEXT, GLenum, GLfloat *)
//WRAPV(void , glMatrixMultTransposedEXT, GLenum, GLdouble *)
//WRAPV(void , glMatrixMultTransposefEXT, GLenum, GLfloat *)
//WRAPV(void , glMatrixOrthoEXT, GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glMatrixPopEXT, GLenum)
//WRAPV(void , glMatrixPushEXT, GLenum)
//WRAPV(void , glMatrixRotatedEXT, GLenum, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glMatrixRotatefEXT, GLenum, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glMatrixScaledEXT, GLenum, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glMatrixScalefEXT, GLenum, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glMatrixTranslatedEXT, GLenum, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glMatrixTranslatefEXT, GLenum, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glMemoryBarrierEXT, GLbitfield)
//WRAPV(void , glMemoryBarrier, GLbitfield)
//WRAPV(void , glMinmaxEXT, GLenum, GLenum, GLboolean)
//WRAPV(void , glMinmax, GLenum, GLenum, GLboolean)
//WRAPV(void , glMinSampleShadingARB, GLfloat)
//WRAPV(void , glMinSampleShading, GLfloat)
//WRAPV(void , glMultiDrawArraysEXT, GLenum, GLint *, GLsizei *, GLsizei)
//WRAPV(void , glMultiDrawArraysIndirectAMD, GLenum, void *, GLsizei, GLsizei)
//WRAPV(void , glMultiDrawArraysIndirectBindlessNV, GLenum, void *, GLsizei, GLsizei, GLint)
//WRAPV(void , glMultiDrawArraysIndirectCountARB, GLenum, GLintptr, GLintptr, GLsizei, GLsizei)
//WRAPV(void , glMultiDrawArraysIndirect, GLenum, void *, GLsizei, GLsizei)
//WRAPV(void , glMultiDrawArrays, GLenum, GLint *, GLsizei *, GLsizei)
//WRAPV(void , glMultiDrawElementArrayAPPLE, GLenum, GLint *, GLsizei *, GLsizei)
//WRAPV(void , glMultiDrawElementsBaseVertex, GLenum, GLsizei *, GLenum, void **, GLsizei, GLint *)
//WRAPV(void , glMultiDrawElementsEXT, GLenum, GLsizei *, GLenum, void **, GLsizei)
//WRAPV(void , glMultiDrawElementsIndirectAMD, GLenum, GLenum, void *, GLsizei, GLsizei)
//WRAPV(void , glMultiDrawElementsIndirectBindlessNV, GLenum, GLenum, void *, GLsizei, GLsizei, GLint)
//WRAPV(void , glMultiDrawElementsIndirectCountARB, GLenum, GLenum, GLintptr, GLintptr, GLsizei, GLsizei)
//WRAPV(void , glMultiDrawElementsIndirect, GLenum, GLenum, void *, GLsizei, GLsizei)
//WRAPV(void , glMultiDrawElements, GLenum, GLsizei *, GLenum, void **, GLsizei)
//WRAPV(void , glMultiDrawRangeElementArrayAPPLE, GLenum, GLuint, GLuint, GLint *, GLsizei *, GLsizei)
//WRAPV(void , glMultiModeDrawArraysIBM, GLenum *, GLint *, GLsizei *, GLsizei, GLint)
//WRAPV(void , glMultiModeDrawElementsIBM, GLenum *, GLsizei *, GLenum, void **, GLsizei, GLint)
//WRAPV(void , glMultiTexBufferEXT, GLenum, GLenum, GLenum, GLuint)
//WRAPV(void , glMultiTexCoord1bOES, GLenum, GLbyte)
//WRAPV(void , glMultiTexCoord1bvOES, GLenum, GLbyte *)
//WRAPV(void , glMultiTexCoord1dARB, GLenum, GLdouble)
//WRAPV(void , glMultiTexCoord1d, GLenum, GLdouble)
//WRAPV(void , glMultiTexCoord1dvARB, GLenum, GLdouble *)
//WRAPV(void , glMultiTexCoord1dv, GLenum, GLdouble *)
//WRAPV(void , glMultiTexCoord1fARB, GLenum, GLfloat)
//WRAPV(void , glMultiTexCoord1f, GLenum, GLfloat)
//WRAPV(void , glMultiTexCoord1fvARB, GLenum, GLfloat *)
//WRAPV(void , glMultiTexCoord1fv, GLenum, GLfloat *)
//WRAPV(void , glMultiTexCoord1hNV, GLenum, GLhalfNV)
//WRAPV(void , glMultiTexCoord1hvNV, GLenum, GLhalfNV *)
//WRAPV(void , glMultiTexCoord1iARB, GLenum, GLint)
//WRAPV(void , glMultiTexCoord1i, GLenum, GLint)
//WRAPV(void , glMultiTexCoord1ivARB, GLenum, GLint *)
//WRAPV(void , glMultiTexCoord1iv, GLenum, GLint *)
//WRAPV(void , glMultiTexCoord1sARB, GLenum, GLshort)
//WRAPV(void , glMultiTexCoord1s, GLenum, GLshort)
//WRAPV(void , glMultiTexCoord1svARB, GLenum, GLshort *)
//WRAPV(void , glMultiTexCoord1sv, GLenum, GLshort *)
//WRAPV(void , glMultiTexCoord1xOES, GLenum, GLfixed)
//WRAPV(void , glMultiTexCoord1xvOES, GLenum, GLfixed *)
//WRAPV(void , glMultiTexCoord2bOES, GLenum, GLbyte, GLbyte)
//WRAPV(void , glMultiTexCoord2bvOES, GLenum, GLbyte *)
//WRAPV(void , glMultiTexCoord2dARB, GLenum, GLdouble, GLdouble)
//WRAPV(void , glMultiTexCoord2d, GLenum, GLdouble, GLdouble)
//WRAPV(void , glMultiTexCoord2dvARB, GLenum, GLdouble *)
//WRAPV(void , glMultiTexCoord2dv, GLenum, GLdouble *)
//WRAPV(void , glMultiTexCoord2fARB, GLenum, GLfloat, GLfloat)
//WRAPV(void , glMultiTexCoord2f, GLenum, GLfloat, GLfloat)
//WRAPV(void , glMultiTexCoord2fvARB, GLenum, GLfloat *)
//WRAPV(void , glMultiTexCoord2fv, GLenum, GLfloat *)
//WRAPV(void , glMultiTexCoord2hNV, GLenum, GLhalfNV, GLhalfNV)
//WRAPV(void , glMultiTexCoord2hvNV, GLenum, GLhalfNV *)
//WRAPV(void , glMultiTexCoord2iARB, GLenum, GLint, GLint)
//WRAPV(void , glMultiTexCoord2i, GLenum, GLint, GLint)
//WRAPV(void , glMultiTexCoord2ivARB, GLenum, GLint *)
//WRAPV(void , glMultiTexCoord2iv, GLenum, GLint *)
//WRAPV(void , glMultiTexCoord2sARB, GLenum, GLshort, GLshort)
//WRAPV(void , glMultiTexCoord2s, GLenum, GLshort, GLshort)
//WRAPV(void , glMultiTexCoord2svARB, GLenum, GLshort *)
//WRAPV(void , glMultiTexCoord2sv, GLenum, GLshort *)
//WRAPV(void , glMultiTexCoord2xOES, GLenum, GLfixed, GLfixed)
//WRAPV(void , glMultiTexCoord2xvOES, GLenum, GLfixed *)
//WRAPV(void , glMultiTexCoord3bOES, GLenum, GLbyte, GLbyte, GLbyte)
//WRAPV(void , glMultiTexCoord3bvOES, GLenum, GLbyte *)
//WRAPV(void , glMultiTexCoord3dARB, GLenum, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glMultiTexCoord3d, GLenum, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glMultiTexCoord3dvARB, GLenum, GLdouble *)
//WRAPV(void , glMultiTexCoord3dv, GLenum, GLdouble *)
//WRAPV(void , glMultiTexCoord3fARB, GLenum, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glMultiTexCoord3f, GLenum, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glMultiTexCoord3fvARB, GLenum, GLfloat *)
//WRAPV(void , glMultiTexCoord3fv, GLenum, GLfloat *)
//WRAPV(void , glMultiTexCoord3hNV, GLenum, GLhalfNV, GLhalfNV, GLhalfNV)
//WRAPV(void , glMultiTexCoord3hvNV, GLenum, GLhalfNV *)
//WRAPV(void , glMultiTexCoord3iARB, GLenum, GLint, GLint, GLint)
//WRAPV(void , glMultiTexCoord3i, GLenum, GLint, GLint, GLint)
//WRAPV(void , glMultiTexCoord3ivARB, GLenum, GLint *)
//WRAPV(void , glMultiTexCoord3iv, GLenum, GLint *)
//WRAPV(void , glMultiTexCoord3sARB, GLenum, GLshort, GLshort, GLshort)
//WRAPV(void , glMultiTexCoord3s, GLenum, GLshort, GLshort, GLshort)
//WRAPV(void , glMultiTexCoord3svARB, GLenum, GLshort *)
//WRAPV(void , glMultiTexCoord3sv, GLenum, GLshort *)
//WRAPV(void , glMultiTexCoord3xOES, GLenum, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glMultiTexCoord3xvOES, GLenum, GLfixed *)
//WRAPV(void , glMultiTexCoord4bOES, GLenum, GLbyte, GLbyte, GLbyte, GLbyte)
//WRAPV(void , glMultiTexCoord4bvOES, GLenum, GLbyte *)
//WRAPV(void , glMultiTexCoord4dARB, GLenum, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glMultiTexCoord4d, GLenum, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glMultiTexCoord4dvARB, GLenum, GLdouble *)
//WRAPV(void , glMultiTexCoord4dv, GLenum, GLdouble *)
//WRAPV(void , glMultiTexCoord4fARB, GLenum, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glMultiTexCoord4f, GLenum, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glMultiTexCoord4fvARB, GLenum, GLfloat *)
//WRAPV(void , glMultiTexCoord4fv, GLenum, GLfloat *)
//WRAPV(void , glMultiTexCoord4hNV, GLenum, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV)
//WRAPV(void , glMultiTexCoord4hvNV, GLenum, GLhalfNV *)
//WRAPV(void , glMultiTexCoord4iARB, GLenum, GLint, GLint, GLint, GLint)
//WRAPV(void , glMultiTexCoord4i, GLenum, GLint, GLint, GLint, GLint)
//WRAPV(void , glMultiTexCoord4ivARB, GLenum, GLint *)
//WRAPV(void , glMultiTexCoord4iv, GLenum, GLint *)
//WRAPV(void , glMultiTexCoord4sARB, GLenum, GLshort, GLshort, GLshort, GLshort)
//WRAPV(void , glMultiTexCoord4s, GLenum, GLshort, GLshort, GLshort, GLshort)
//WRAPV(void , glMultiTexCoord4svARB, GLenum, GLshort *)
//WRAPV(void , glMultiTexCoord4sv, GLenum, GLshort *)
//WRAPV(void , glMultiTexCoord4xOES, GLenum, GLfixed, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glMultiTexCoord4xvOES, GLenum, GLfixed *)
//WRAPV(void , glMultiTexCoordP1ui, GLenum, GLenum, GLuint)
//WRAPV(void , glMultiTexCoordP1uiv, GLenum, GLenum, GLuint *)
//WRAPV(void , glMultiTexCoordP2ui, GLenum, GLenum, GLuint)
//WRAPV(void , glMultiTexCoordP2uiv, GLenum, GLenum, GLuint *)
//WRAPV(void , glMultiTexCoordP3ui, GLenum, GLenum, GLuint)
//WRAPV(void , glMultiTexCoordP3uiv, GLenum, GLenum, GLuint *)
//WRAPV(void , glMultiTexCoordP4ui, GLenum, GLenum, GLuint)
//WRAPV(void , glMultiTexCoordP4uiv, GLenum, GLenum, GLuint *)
//WRAPV(void , glMultiTexCoordPointerEXT, GLenum, GLint, GLenum, GLsizei, void *)
//WRAPV(void , glMultiTexEnvfEXT, GLenum, GLenum, GLenum, GLfloat)
//WRAPV(void , glMultiTexEnvfvEXT, GLenum, GLenum, GLenum, GLfloat *)
//WRAPV(void , glMultiTexEnviEXT, GLenum, GLenum, GLenum, GLint)
//WRAPV(void , glMultiTexEnvivEXT, GLenum, GLenum, GLenum, GLint *)
//WRAPV(void , glMultiTexGendEXT, GLenum, GLenum, GLenum, GLdouble)
//WRAPV(void , glMultiTexGendvEXT, GLenum, GLenum, GLenum, GLdouble *)
//WRAPV(void , glMultiTexGenfEXT, GLenum, GLenum, GLenum, GLfloat)
//WRAPV(void , glMultiTexGenfvEXT, GLenum, GLenum, GLenum, GLfloat *)
//WRAPV(void , glMultiTexGeniEXT, GLenum, GLenum, GLenum, GLint)
//WRAPV(void , glMultiTexGenivEXT, GLenum, GLenum, GLenum, GLint *)
//WRAPV(void , glMultiTexImage1DEXT, GLenum, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, void *)
//WRAPV(void , glMultiTexImage2DEXT, GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, void *)
//WRAPV(void , glMultiTexImage3DEXT, GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, void *)
//WRAPV(void , glMultiTexParameterfEXT, GLenum, GLenum, GLenum, GLfloat)
//WRAPV(void , glMultiTexParameterfvEXT, GLenum, GLenum, GLenum, GLfloat *)
//WRAPV(void , glMultiTexParameteriEXT, GLenum, GLenum, GLenum, GLint)
//WRAPV(void , glMultiTexParameterIivEXT, GLenum, GLenum, GLenum, GLint *)
//WRAPV(void , glMultiTexParameterIuivEXT, GLenum, GLenum, GLenum, GLuint *)
//WRAPV(void , glMultiTexParameterivEXT, GLenum, GLenum, GLenum, GLint *)
//WRAPV(void , glMultiTexRenderbufferEXT, GLenum, GLenum, GLuint)
//WRAPV(void , glMultiTexSubImage1DEXT, GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, void *)
//WRAPV(void , glMultiTexSubImage2DEXT, GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *)
//WRAPV(void , glMultiTexSubImage3DEXT, GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, void *)
//WRAPV(void , glMultMatrixd, GLdouble *)
//WRAPV(void , glMultMatrixf, GLfloat *)
//WRAPV(void , glMultMatrixxOES, GLfixed *)
//WRAPV(void , glMultTransposeMatrixdARB, GLdouble *)
//WRAPV(void , glMultTransposeMatrixd, GLdouble *)
//WRAPV(void , glMultTransposeMatrixfARB, GLfloat *)
//WRAPV(void , glMultTransposeMatrixf, GLfloat *)
//WRAPV(void , glMultTransposeMatrixxOES, GLfixed *)
//WRAPV(void , glNamedBufferDataEXT, GLuint, GLsizeiptr, void *, GLenum)
//WRAPV(void , glNamedBufferStorageEXT, GLuint, GLsizeiptr, void *, GLbitfield)
//WRAPV(void , glNamedBufferSubDataEXT, GLuint, GLintptr, GLsizeiptr, void *)
//WRAPV(void , glNamedCopyBufferSubDataEXT, GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr)
//WRAPV(void , glNamedFramebufferParameteriEXT, GLuint, GLenum, GLint)
//WRAPV(void , glNamedFramebufferRenderbufferEXT, GLuint, GLenum, GLenum, GLuint)
//WRAPV(void , glNamedFramebufferTexture1DEXT, GLuint, GLenum, GLenum, GLuint, GLint)
//WRAPV(void , glNamedFramebufferTexture2DEXT, GLuint, GLenum, GLenum, GLuint, GLint)
//WRAPV(void , glNamedFramebufferTexture3DEXT, GLuint, GLenum, GLenum, GLuint, GLint, GLint)
//WRAPV(void , glNamedFramebufferTextureEXT, GLuint, GLenum, GLuint, GLint)
//WRAPV(void , glNamedFramebufferTextureFaceEXT, GLuint, GLenum, GLuint, GLint, GLenum)
//WRAPV(void , glNamedFramebufferTextureLayerEXT, GLuint, GLenum, GLuint, GLint, GLint)
//WRAPV(void , glNamedProgramLocalParameter4dEXT, GLuint, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glNamedProgramLocalParameter4dvEXT, GLuint, GLenum, GLuint, GLdouble *)
//WRAPV(void , glNamedProgramLocalParameter4fEXT, GLuint, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glNamedProgramLocalParameter4fvEXT, GLuint, GLenum, GLuint, GLfloat *)
//WRAPV(void , glNamedProgramLocalParameterI4iEXT, GLuint, GLenum, GLuint, GLint, GLint, GLint, GLint)
//WRAPV(void , glNamedProgramLocalParameterI4ivEXT, GLuint, GLenum, GLuint, GLint *)
//WRAPV(void , glNamedProgramLocalParameterI4uiEXT, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glNamedProgramLocalParameterI4uivEXT, GLuint, GLenum, GLuint, GLuint *)
//WRAPV(void , glNamedProgramLocalParameters4fvEXT, GLuint, GLenum, GLuint, GLsizei, GLfloat *)
//WRAPV(void , glNamedProgramLocalParametersI4ivEXT, GLuint, GLenum, GLuint, GLsizei, GLint *)
//WRAPV(void , glNamedProgramLocalParametersI4uivEXT, GLuint, GLenum, GLuint, GLsizei, GLuint *)
//WRAPV(void , glNamedProgramStringEXT, GLuint, GLenum, GLenum, GLsizei, void *)
//WRAPV(void , glNamedRenderbufferStorageEXT, GLuint, GLenum, GLsizei, GLsizei)
//WRAPV(void , glNamedRenderbufferStorageMultisampleCoverageEXT, GLuint, GLsizei, GLsizei, GLenum, GLsizei, GLsizei)
//WRAPV(void , glNamedRenderbufferStorageMultisampleEXT, GLuint, GLsizei, GLenum, GLsizei, GLsizei)
//WRAPV(void , glNamedStringARB, GLenum, GLint, GLchar *, GLint, GLchar *)
//WRAPV(void , glNewList, GLuint, GLenum)
//WRAPV(void , glNormal3b, GLbyte, GLbyte, GLbyte)
//WRAPV(void , glNormal3bv, GLbyte *)
//WRAPV(void , glNormal3d, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glNormal3dv, GLdouble *)
//WRAPV(void , glNormal3f, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glNormal3fVertex3fSUN, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glNormal3fVertex3fvSUN, GLfloat *, GLfloat *)
//WRAPV(void , glNormal3fv, GLfloat *)
//WRAPV(void , glNormal3hNV, GLhalfNV, GLhalfNV, GLhalfNV)
//WRAPV(void , glNormal3hvNV, GLhalfNV *)
//WRAPV(void , glNormal3i, GLint, GLint, GLint)
//WRAPV(void , glNormal3iv, GLint *)
//WRAPV(void , glNormal3s, GLshort, GLshort, GLshort)
//WRAPV(void , glNormal3sv, GLshort *)
//WRAPV(void , glNormal3xOES, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glNormal3xvOES, GLfixed *)
//WRAPV(void , glNormalFormatNV, GLenum, GLsizei)
//WRAPV(void , glNormalP3ui, GLenum, GLuint)
//WRAPV(void , glNormalP3uiv, GLenum, GLuint *)
//WRAPV(void , glNormalPointerEXT, GLenum, GLsizei, GLsizei, void *)
//WRAPV(void , glNormalPointerListIBM, GLenum, GLint, void **, GLint)
//WRAPV(void , glNormalPointer, GLenum, GLsizei, GLvoid *)
//WRAPV(void , glNormalPointervINTEL, GLenum, void **)
//WRAPV(void , glNormalStream3bATI, GLenum, GLbyte, GLbyte, GLbyte)
//WRAPV(void , glNormalStream3bvATI, GLenum, GLbyte *)
//WRAPV(void , glNormalStream3dATI, GLenum, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glNormalStream3dvATI, GLenum, GLdouble *)
//WRAPV(void , glNormalStream3fATI, GLenum, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glNormalStream3fvATI, GLenum, GLfloat *)
//WRAPV(void , glNormalStream3iATI, GLenum, GLint, GLint, GLint)
//WRAPV(void , glNormalStream3ivATI, GLenum, GLint *)
//WRAPV(void , glNormalStream3sATI, GLenum, GLshort, GLshort, GLshort)
//WRAPV(void , glNormalStream3svATI, GLenum, GLshort *)
//WRAPV(void , glObjectLabel, GLenum, GLuint, GLsizei, GLchar *)
//WRAPV(void , glObjectPtrLabel, void *, GLsizei, GLchar *)
//WRAPV(void , glOrthofOES, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glOrtho, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glOrthoxOES, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glPassTexCoordATI, GLuint, GLuint, GLenum)
//WRAPV(void , glPassThrough, GLfloat)
//WRAPV(void , glPassThroughxOES, GLfixed)
//WRAPV(void , glPatchParameterfv, GLenum, GLfloat *)
//WRAPV(void , glPatchParameteri, GLenum, GLint)
//WRAPV(void , glPathColorGenNV, GLenum, GLenum, GLenum, GLfloat *)
//WRAPV(void , glPathCommandsNV, GLuint, GLsizei, GLubyte *, GLsizei, GLenum, void *)
//WRAPV(void , glPathCoordsNV, GLuint, GLsizei, GLenum, void *)
//WRAPV(void , glPathCoverDepthFuncNV, GLenum)
//WRAPV(void , glPathDashArrayNV, GLuint, GLsizei, GLfloat *)
//WRAPV(void , glPathFogGenNV, GLenum)
//WRAPV(void , glPathGlyphRangeNV, GLuint, GLenum, void *, GLbitfield, GLuint, GLsizei, GLenum, GLuint, GLfloat)
//WRAPV(void , glPathGlyphsNV, GLuint, GLenum, void *, GLbitfield, GLsizei, GLenum, void *, GLenum, GLuint, GLfloat)
//WRAPV(void , glPathParameterfNV, GLuint, GLenum, GLfloat)
//WRAPV(void , glPathParameterfvNV, GLuint, GLenum, GLfloat *)
//WRAPV(void , glPathParameteriNV, GLuint, GLenum, GLint)
//WRAPV(void , glPathParameterivNV, GLuint, GLenum, GLint *)
//WRAPV(void , glPathStencilDepthOffsetNV, GLfloat, GLfloat)
//WRAPV(void , glPathStencilFuncNV, GLenum, GLint, GLuint)
//WRAPV(void , glPathStringNV, GLuint, GLenum, GLsizei, void *)
//WRAPV(void , glPathSubCommandsNV, GLuint, GLsizei, GLsizei, GLsizei, GLubyte *, GLsizei, GLenum, void *)
//WRAPV(void , glPathSubCoordsNV, GLuint, GLsizei, GLsizei, GLenum, void *)
//WRAPV(void , glPathTexGenNV, GLenum, GLenum, GLint, GLfloat *)
//WRAPV(void , glPauseTransformFeedback)
//WRAPV(void , glPauseTransformFeedbackNV)
//WRAPV(void , glPixelDataRangeNV, GLenum, GLsizei, void *)
//WRAPV(void , glPixelMapfv, GLenum, GLsizei, GLfloat *)
//WRAPV(void , glPixelMapuiv, GLenum, GLsizei, GLuint *)
//WRAPV(void , glPixelMapusv, GLenum, GLsizei, GLushort *)
//WRAPV(void , glPixelMapx, GLenum, GLint, GLfixed *)
//WRAPV(void , glPixelStoref, GLenum, GLfloat)
//WRAPV(void , glPixelStorex, GLenum, GLfixed)
//WRAPV(void , glPixelTexGenParameterfSGIS, GLenum, GLfloat)
//WRAPV(void , glPixelTexGenParameterfvSGIS, GLenum, GLfloat *)
//WRAPV(void , glPixelTexGenParameteriSGIS, GLenum, GLint)
//WRAPV(void , glPixelTexGenParameterivSGIS, GLenum, GLint *)
//WRAPV(void , glPixelTexGenSGIX, GLenum)
//WRAPV(void , glPixelTransferf, GLenum, GLfloat)
//WRAPV(void , glPixelTransferi, GLenum, GLint)
//WRAPV(void , glPixelTransferxOES, GLenum, GLfixed)
//WRAPV(void , glPixelTransformParameterfEXT, GLenum, GLenum, GLfloat)
//WRAPV(void , glPixelTransformParameterfvEXT, GLenum, GLenum, GLfloat *)
//WRAPV(void , glPixelTransformParameteriEXT, GLenum, GLenum, GLint)
//WRAPV(void , glPixelTransformParameterivEXT, GLenum, GLenum, GLint *)
//WRAPV(void , glPixelZoom, GLfloat, GLfloat)
//WRAPV(void , glPixelZoomxOES, GLfixed, GLfixed)
//WRAPV(void , glPNTrianglesfATI, GLenum, GLfloat)
//WRAPV(void , glPNTrianglesiATI, GLenum, GLint)
//WRAPV(void , glPointParameterfARB, GLenum, GLfloat)
//WRAPV(void , glPointParameterfEXT, GLenum, GLfloat)
//WRAPV(void , glPointParameterfSGIS, GLenum, GLfloat)
//WRAPV(void , glPointParameterf, GLenum, GLfloat)
//WRAPV(void , glPointParameterfvARB, GLenum, GLfloat *)
//WRAPV(void , glPointParameterfvEXT, GLenum, GLfloat *)
//WRAPV(void , glPointParameterfvSGIS, GLenum, GLfloat *)
//WRAPV(void , glPointParameterfv, GLenum, GLfloat *)
//WRAPV(void , glPointParameteriNV, GLenum, GLint)
//WRAPV(void , glPointParameteri, GLenum, GLint)
//WRAPV(void , glPointParameterivNV, GLenum, GLint *)
//WRAPV(void , glPointParameteriv, GLenum, GLint *)
//WRAPV(void , glPointParameterxvOES, GLenum, GLfixed *)
//WRAPV(void , glPointSize, GLfloat)
//WRAPV(void , glPointSizexOES, GLfixed)
//WRAPV(void , glPolygonMode, GLenum, GLenum)
//WRAPV(void , glPolygonOffsetEXT, GLfloat, GLfloat)
//WRAPV(void , glPolygonOffset, GLfloat, GLfloat)
//WRAPV(void , glPolygonOffsetxOES, GLfixed, GLfixed)
//WRAPV(void , glPolygonStipple, GLubyte *)
//WRAPV(void , glPopAttrib)
//WRAPV(void , glPopClientAttrib)
//WRAPV(void , glPopDebugGroup)
//WRAPV(void , glPopGroupMarkerEXT)
//WRAPV(void , glPopMatrix)
//WRAPV(void , glPopName)
//WRAPV(void , glPresentFrameDualFillNV, GLuint, GLuint64EXT, GLuint, GLuint, GLenum, GLenum, GLuint, GLenum, GLuint, GLenum, GLuint, GLenum, GLuint)
//WRAPV(void , glPresentFrameKeyedNV, GLuint, GLuint64EXT, GLuint, GLuint, GLenum, GLenum, GLuint, GLuint, GLenum, GLuint, GLuint)
//WRAPV(void , glPrimitiveRestartIndexNV, GLuint)
//WRAPV(void , glPrimitiveRestartIndex, GLuint)
//WRAPV(void , glPrimitiveRestartNV)
//WRAPV(void , glPrioritizeTexturesEXT, GLsizei, GLuint *, GLclampf *)
//WRAPV(void , glPrioritizeTextures, GLsizei, GLuint *, GLclampf *)
//WRAPV(void , glPrioritizeTexturesxOES, GLsizei, GLuint *, GLfixed *)
//WRAPV(void , glProgramBinary, GLuint, GLenum, void *, GLsizei)
//WRAPV(void , glProgramBufferParametersfvNV, GLenum, GLuint, GLuint, GLsizei, GLfloat *)
//WRAPV(void , glProgramBufferParametersIivNV, GLenum, GLuint, GLuint, GLsizei, GLint *)
//WRAPV(void , glProgramBufferParametersIuivNV, GLenum, GLuint, GLuint, GLsizei, GLuint *)
//WRAPV(void , glProgramEnvParameter4dARB, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glProgramEnvParameter4dvARB, GLenum, GLuint, GLdouble *)
//WRAPV(void , glProgramEnvParameter4fARB, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glProgramEnvParameter4fvARB, GLenum, GLuint, GLfloat *)
//WRAPV(void , glProgramEnvParameterI4iNV, GLenum, GLuint, GLint, GLint, GLint, GLint)
//WRAPV(void , glProgramEnvParameterI4ivNV, GLenum, GLuint, GLint *)
//WRAPV(void , glProgramEnvParameterI4uiNV, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glProgramEnvParameterI4uivNV, GLenum, GLuint, GLuint *)
//WRAPV(void , glProgramEnvParameters4fvEXT, GLenum, GLuint, GLsizei, GLfloat *)
//WRAPV(void , glProgramEnvParametersI4ivNV, GLenum, GLuint, GLsizei, GLint *)
//WRAPV(void , glProgramEnvParametersI4uivNV, GLenum, GLuint, GLsizei, GLuint *)
//WRAPV(void , glProgramLocalParameter4dARB, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glProgramLocalParameter4dvARB, GLenum, GLuint, GLdouble *)
//WRAPV(void , glProgramLocalParameter4fARB, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glProgramLocalParameter4fvARB, GLenum, GLuint, GLfloat *)
//WRAPV(void , glProgramLocalParameterI4iNV, GLenum, GLuint, GLint, GLint, GLint, GLint)
//WRAPV(void , glProgramLocalParameterI4ivNV, GLenum, GLuint, GLint *)
//WRAPV(void , glProgramLocalParameterI4uiNV, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glProgramLocalParameterI4uivNV, GLenum, GLuint, GLuint *)
//WRAPV(void , glProgramLocalParameters4fvEXT, GLenum, GLuint, GLsizei, GLfloat *)
//WRAPV(void , glProgramLocalParametersI4ivNV, GLenum, GLuint, GLsizei, GLint *)
//WRAPV(void , glProgramLocalParametersI4uivNV, GLenum, GLuint, GLsizei, GLuint *)
//WRAPV(void , glProgramNamedParameter4dNV, GLuint, GLsizei, GLubyte *, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glProgramNamedParameter4dvNV, GLuint, GLsizei, GLubyte *, GLdouble *)
//WRAPV(void , glProgramNamedParameter4fNV, GLuint, GLsizei, GLubyte *, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glProgramNamedParameter4fvNV, GLuint, GLsizei, GLubyte *, GLfloat *)
//WRAPV(void , glProgramParameter4dNV, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glProgramParameter4dvNV, GLenum, GLuint, GLdouble *)
//WRAPV(void , glProgramParameter4fNV, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glProgramParameter4fvNV, GLenum, GLuint, GLfloat *)
//WRAPV(void , glProgramParameteriARB, GLuint, GLenum, GLint)
//WRAPV(void , glProgramParameteriEXT, GLuint, GLenum, GLint)
//WRAPV(void , glProgramParameteri, GLuint, GLenum, GLint)
//WRAPV(void , glProgramParameters4dvNV, GLenum, GLuint, GLsizei, GLdouble *)
//WRAPV(void , glProgramParameters4fvNV, GLenum, GLuint, GLsizei, GLfloat *)
//WRAPV(void , glProgramStringARB, GLenum, GLenum, GLsizei, void *)
//WRAPV(void , glProgramSubroutineParametersuivNV, GLenum, GLsizei, GLuint *)
//WRAPV(void , glProgramUniform1dEXT, GLuint, GLint, GLdouble)
//WRAPV(void , glProgramUniform1d, GLuint, GLint, GLdouble)
//WRAPV(void , glProgramUniform1dvEXT, GLuint, GLint, GLsizei, GLdouble *)
//WRAPV(void , glProgramUniform1dv, GLuint, GLint, GLsizei, GLdouble *)
//WRAPV(void , glProgramUniform1fEXT, GLuint, GLint, GLfloat)
//WRAPV(void , glProgramUniform1f, GLuint, GLint, GLfloat)
//WRAPV(void , glProgramUniform1fvEXT, GLuint, GLint, GLsizei, GLfloat *)
//WRAPV(void , glProgramUniform1fv, GLuint, GLint, GLsizei, GLfloat *)
//WRAPV(void , glProgramUniform1i64NV, GLuint, GLint, GLint64EXT)
//WRAPV(void , glProgramUniform1i64vNV, GLuint, GLint, GLsizei, GLint64EXT *)
//WRAPV(void , glProgramUniform1iEXT, GLuint, GLint, GLint)
//WRAPV(void , glProgramUniform1i, GLuint, GLint, GLint)
//WRAPV(void , glProgramUniform1ivEXT, GLuint, GLint, GLsizei, GLint *)
//WRAPV(void , glProgramUniform1iv, GLuint, GLint, GLsizei, GLint *)
//WRAPV(void , glProgramUniform1ui64NV, GLuint, GLint, GLuint64EXT)
//WRAPV(void , glProgramUniform1ui64vNV, GLuint, GLint, GLsizei, GLuint64EXT *)
//WRAPV(void , glProgramUniform1uiEXT, GLuint, GLint, GLuint)
//WRAPV(void , glProgramUniform1ui, GLuint, GLint, GLuint)
//WRAPV(void , glProgramUniform1uivEXT, GLuint, GLint, GLsizei, GLuint *)
//WRAPV(void , glProgramUniform1uiv, GLuint, GLint, GLsizei, GLuint *)
//WRAPV(void , glProgramUniform2dEXT, GLuint, GLint, GLdouble, GLdouble)
//WRAPV(void , glProgramUniform2d, GLuint, GLint, GLdouble, GLdouble)
//WRAPV(void , glProgramUniform2dvEXT, GLuint, GLint, GLsizei, GLdouble *)
//WRAPV(void , glProgramUniform2dv, GLuint, GLint, GLsizei, GLdouble *)
//WRAPV(void , glProgramUniform2fEXT, GLuint, GLint, GLfloat, GLfloat)
//WRAPV(void , glProgramUniform2f, GLuint, GLint, GLfloat, GLfloat)
//WRAPV(void , glProgramUniform2fvEXT, GLuint, GLint, GLsizei, GLfloat *)
//WRAPV(void , glProgramUniform2fv, GLuint, GLint, GLsizei, GLfloat *)
//WRAPV(void , glProgramUniform2i64NV, GLuint, GLint, GLint64EXT, GLint64EXT)
//WRAPV(void , glProgramUniform2i64vNV, GLuint, GLint, GLsizei, GLint64EXT *)
//WRAPV(void , glProgramUniform2iEXT, GLuint, GLint, GLint, GLint)
//WRAPV(void , glProgramUniform2i, GLuint, GLint, GLint, GLint)
//WRAPV(void , glProgramUniform2ivEXT, GLuint, GLint, GLsizei, GLint *)
//WRAPV(void , glProgramUniform2iv, GLuint, GLint, GLsizei, GLint *)
//WRAPV(void , glProgramUniform2ui64NV, GLuint, GLint, GLuint64EXT, GLuint64EXT)
//WRAPV(void , glProgramUniform2ui64vNV, GLuint, GLint, GLsizei, GLuint64EXT *)
//WRAPV(void , glProgramUniform2uiEXT, GLuint, GLint, GLuint, GLuint)
//WRAPV(void , glProgramUniform2ui, GLuint, GLint, GLuint, GLuint)
//WRAPV(void , glProgramUniform2uivEXT, GLuint, GLint, GLsizei, GLuint *)
//WRAPV(void , glProgramUniform2uiv, GLuint, GLint, GLsizei, GLuint *)
//WRAPV(void , glProgramUniform3dEXT, GLuint, GLint, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glProgramUniform3d, GLuint, GLint, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glProgramUniform3dvEXT, GLuint, GLint, GLsizei, GLdouble *)
//WRAPV(void , glProgramUniform3dv, GLuint, GLint, GLsizei, GLdouble *)
//WRAPV(void , glProgramUniform3fEXT, GLuint, GLint, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glProgramUniform3f, GLuint, GLint, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glProgramUniform3fvEXT, GLuint, GLint, GLsizei, GLfloat *)
//WRAPV(void , glProgramUniform3fv, GLuint, GLint, GLsizei, GLfloat *)
//WRAPV(void , glProgramUniform3i64NV, GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT)
//WRAPV(void , glProgramUniform3i64vNV, GLuint, GLint, GLsizei, GLint64EXT *)
//WRAPV(void , glProgramUniform3iEXT, GLuint, GLint, GLint, GLint, GLint)
//WRAPV(void , glProgramUniform3i, GLuint, GLint, GLint, GLint, GLint)
//WRAPV(void , glProgramUniform3ivEXT, GLuint, GLint, GLsizei, GLint *)
//WRAPV(void , glProgramUniform3iv, GLuint, GLint, GLsizei, GLint *)
//WRAPV(void , glProgramUniform3ui64NV, GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT)
//WRAPV(void , glProgramUniform3ui64vNV, GLuint, GLint, GLsizei, GLuint64EXT *)
//WRAPV(void , glProgramUniform3uiEXT, GLuint, GLint, GLuint, GLuint, GLuint)
//WRAPV(void , glProgramUniform3ui, GLuint, GLint, GLuint, GLuint, GLuint)
//WRAPV(void , glProgramUniform3uivEXT, GLuint, GLint, GLsizei, GLuint *)
//WRAPV(void , glProgramUniform3uiv, GLuint, GLint, GLsizei, GLuint *)
//WRAPV(void , glProgramUniform4dEXT, GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glProgramUniform4d, GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glProgramUniform4dvEXT, GLuint, GLint, GLsizei, GLdouble *)
//WRAPV(void , glProgramUniform4dv, GLuint, GLint, GLsizei, GLdouble *)
//WRAPV(void , glProgramUniform4fEXT, GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glProgramUniform4f, GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glProgramUniform4fvEXT, GLuint, GLint, GLsizei, GLfloat *)
//WRAPV(void , glProgramUniform4fv, GLuint, GLint, GLsizei, GLfloat *)
//WRAPV(void , glProgramUniform4i64NV, GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT)
//WRAPV(void , glProgramUniform4i64vNV, GLuint, GLint, GLsizei, GLint64EXT *)
//WRAPV(void , glProgramUniform4iEXT, GLuint, GLint, GLint, GLint, GLint, GLint)
//WRAPV(void , glProgramUniform4i, GLuint, GLint, GLint, GLint, GLint, GLint)
//WRAPV(void , glProgramUniform4ivEXT, GLuint, GLint, GLsizei, GLint *)
//WRAPV(void , glProgramUniform4iv, GLuint, GLint, GLsizei, GLint *)
//WRAPV(void , glProgramUniform4ui64NV, GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT)
//WRAPV(void , glProgramUniform4ui64vNV, GLuint, GLint, GLsizei, GLuint64EXT *)
//WRAPV(void , glProgramUniform4uiEXT, GLuint, GLint, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glProgramUniform4ui, GLuint, GLint, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glProgramUniform4uivEXT, GLuint, GLint, GLsizei, GLuint *)
//WRAPV(void , glProgramUniform4uiv, GLuint, GLint, GLsizei, GLuint *)
//WRAPV(void , glProgramUniformHandleui64ARB, GLuint, GLint, GLuint64)
//WRAPV(void , glProgramUniformHandleui64NV, GLuint, GLint, GLuint64)
//WRAPV(void , glProgramUniformHandleui64vARB, GLuint, GLint, GLsizei, GLuint64 *)
//WRAPV(void , glProgramUniformHandleui64vNV, GLuint, GLint, GLsizei, GLuint64 *)
//WRAPV(void , glProgramUniformMatrix2dvEXT, GLuint, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glProgramUniformMatrix2dv, GLuint, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glProgramUniformMatrix2fvEXT, GLuint, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glProgramUniformMatrix2fv, GLuint, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glProgramUniformMatrix2x3dvEXT, GLuint, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glProgramUniformMatrix2x3dv, GLuint, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glProgramUniformMatrix2x3fvEXT, GLuint, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glProgramUniformMatrix2x3fv, GLuint, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glProgramUniformMatrix2x4dvEXT, GLuint, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glProgramUniformMatrix2x4dv, GLuint, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glProgramUniformMatrix2x4fvEXT, GLuint, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glProgramUniformMatrix2x4fv, GLuint, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glProgramUniformMatrix3dvEXT, GLuint, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glProgramUniformMatrix3dv, GLuint, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glProgramUniformMatrix3fvEXT, GLuint, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glProgramUniformMatrix3fv, GLuint, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glProgramUniformMatrix3x2dvEXT, GLuint, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glProgramUniformMatrix3x2dv, GLuint, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glProgramUniformMatrix3x2fvEXT, GLuint, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glProgramUniformMatrix3x2fv, GLuint, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glProgramUniformMatrix3x4dvEXT, GLuint, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glProgramUniformMatrix3x4dv, GLuint, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glProgramUniformMatrix3x4fvEXT, GLuint, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glProgramUniformMatrix3x4fv, GLuint, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glProgramUniformMatrix4dvEXT, GLuint, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glProgramUniformMatrix4dv, GLuint, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glProgramUniformMatrix4fvEXT, GLuint, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glProgramUniformMatrix4fv, GLuint, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glProgramUniformMatrix4x2dvEXT, GLuint, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glProgramUniformMatrix4x2dv, GLuint, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glProgramUniformMatrix4x2fvEXT, GLuint, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glProgramUniformMatrix4x2fv, GLuint, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glProgramUniformMatrix4x3dvEXT, GLuint, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glProgramUniformMatrix4x3dv, GLuint, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glProgramUniformMatrix4x3fvEXT, GLuint, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glProgramUniformMatrix4x3fv, GLuint, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glProgramUniformui64NV, GLuint, GLint, GLuint64EXT)
//WRAPV(void , glProgramUniformui64vNV, GLuint, GLint, GLsizei, GLuint64EXT *)
//WRAPV(void , glProgramVertexLimitNV, GLenum, GLint)
//WRAPV(void , glProvokingVertexEXT, GLenum)
//WRAPV(void , glProvokingVertex, GLenum)
//WRAPV(void , glPushAttrib, GLbitfield)
//WRAPV(void , glPushClientAttribDefaultEXT, GLbitfield)
//WRAPV(void , glPushClientAttrib, GLbitfield)
//WRAPV(void , glPushDebugGroup, GLenum, GLuint, GLsizei, GLchar *)
//WRAPV(void , glPushGroupMarkerEXT, GLsizei, GLchar *)
//WRAPV(void , glPushMatrix)
//WRAPV(void , glPushName, GLuint)
//WRAPV(void , glQueryCounter, GLuint, GLenum)
//WRAPV(void , glQueryObjectParameteruiAMD, GLenum, GLuint, GLenum, GLuint)
//WRAPV(void , glRasterPos2d, GLdouble, GLdouble)
//WRAPV(void , glRasterPos2dv, GLdouble *)
//WRAPV(void , glRasterPos2f, GLfloat, GLfloat)
//WRAPV(void , glRasterPos2fv, GLfloat *)
//WRAPV(void , glRasterPos2i, GLint, GLint)
//WRAPV(void , glRasterPos2iv, GLint *)
//WRAPV(void , glRasterPos2s, GLshort, GLshort)
//WRAPV(void , glRasterPos2sv, GLshort *)
//WRAPV(void , glRasterPos2xOES, GLfixed, GLfixed)
//WRAPV(void , glRasterPos2xvOES, GLfixed *)
//WRAPV(void , glRasterPos3d, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glRasterPos3dv, GLdouble *)
//WRAPV(void , glRasterPos3f, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glRasterPos3fv, GLfloat *)
//WRAPV(void , glRasterPos3i, GLint, GLint, GLint)
//WRAPV(void , glRasterPos3iv, GLint *)
//WRAPV(void , glRasterPos3s, GLshort, GLshort, GLshort)
//WRAPV(void , glRasterPos3sv, GLshort *)
//WRAPV(void , glRasterPos3xOES, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glRasterPos3xvOES, GLfixed *)
//WRAPV(void , glRasterPos4d, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glRasterPos4dv, GLdouble *)
//WRAPV(void , glRasterPos4f, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glRasterPos4fv, GLfloat *)
//WRAPV(void , glRasterPos4i, GLint, GLint, GLint, GLint)
//WRAPV(void , glRasterPos4iv, GLint *)
//WRAPV(void , glRasterPos4s, GLshort, GLshort, GLshort, GLshort)
//WRAPV(void , glRasterPos4sv, GLshort *)
//WRAPV(void , glRasterPos4xOES, GLfixed, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glRasterPos4xvOES, GLfixed *)
//WRAPV(void , glReadBuffer, GLenum)
//WRAPV(void , glReadInstrumentsSGIX, GLint)
//WRAPV(void , glReadnPixelsARB, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *)
//WRAPV(void , glReadPixels, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *)
//WRAPV(void , glRectd, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glRectdv, GLdouble *, GLdouble *)
//WRAPV(void , glRectf, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glRectfv, GLfloat *, GLfloat *)
//WRAPV(void , glRecti, GLint, GLint, GLint, GLint)
//WRAPV(void , glRectiv, GLint *, GLint *)
//WRAPV(void , glRects, GLshort, GLshort, GLshort, GLshort)
//WRAPV(void , glRectsv, GLshort *, GLshort *)
//WRAPV(void , glRectxOES, GLfixed, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glRectxvOES, GLfixed *, GLfixed *)
//WRAPV(void , glReferencePlaneSGIX, GLdouble *)
//WRAPV(void , glReleaseShaderCompiler)
//WRAPV(void , glRenderbufferStorageEXT, GLenum, GLenum, GLsizei, GLsizei)
//WRAPV(void , glRenderbufferStorageMultisampleCoverageNV, GLenum, GLsizei, GLsizei, GLenum, GLsizei, GLsizei)
//WRAPV(void , glRenderbufferStorageMultisampleEXT, GLenum, GLsizei, GLenum, GLsizei, GLsizei)
//WRAPV(void , glRenderbufferStorageMultisample, GLenum, GLsizei, GLenum, GLsizei, GLsizei)
//WRAPV(void , glRenderbufferStorage, GLenum, GLenum, GLsizei, GLsizei)
//WRAPV(void , glReplacementCodePointerSUN, GLenum, GLsizei, void **)
//WRAPV(void , glReplacementCodeubSUN, GLubyte)
//WRAPV(void , glReplacementCodeubvSUN, GLubyte *)
//WRAPV(void , glReplacementCodeuiColor3fVertex3fSUN, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glReplacementCodeuiColor3fVertex3fvSUN, GLuint *, GLfloat *, GLfloat *)
//WRAPV(void , glReplacementCodeuiColor4fNormal3fVertex3fSUN, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glReplacementCodeuiColor4fNormal3fVertex3fvSUN, GLuint *, GLfloat *, GLfloat *, GLfloat *)
//WRAPV(void , glReplacementCodeuiColor4ubVertex3fSUN, GLuint, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glReplacementCodeuiColor4ubVertex3fvSUN, GLuint *, GLubyte *, GLfloat *)
//WRAPV(void , glReplacementCodeuiNormal3fVertex3fSUN, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glReplacementCodeuiNormal3fVertex3fvSUN, GLuint *, GLfloat *, GLfloat *)
//WRAPV(void , glReplacementCodeuiSUN, GLuint)
//WRAPV(void , glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN, GLuint *, GLfloat *, GLfloat *, GLfloat *, GLfloat *)
//WRAPV(void , glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN, GLuint *, GLfloat *, GLfloat *, GLfloat *)
//WRAPV(void , glReplacementCodeuiTexCoord2fVertex3fSUN, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glReplacementCodeuiTexCoord2fVertex3fvSUN, GLuint *, GLfloat *, GLfloat *)
//WRAPV(void , glReplacementCodeuiVertex3fSUN, GLuint, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glReplacementCodeuiVertex3fvSUN, GLuint *, GLfloat *)
//WRAPV(void , glReplacementCodeuivSUN, GLuint *)
//WRAPV(void , glReplacementCodeusSUN, GLushort)
//WRAPV(void , glReplacementCodeusvSUN, GLushort *)
//WRAPV(void , glRequestResidentProgramsNV, GLsizei, GLuint *)
//WRAPV(void , glResetHistogramEXT, GLenum)
//WRAPV(void , glResetHistogram, GLenum)
//WRAPV(void , glResetMinmaxEXT, GLenum)
//WRAPV(void , glResetMinmax, GLenum)
//WRAPV(void , glResizeBuffersMESA)
//WRAPV(void , glResumeTransformFeedback)
//WRAPV(void , glResumeTransformFeedbackNV)
//WRAPV(void , glRotated, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glRotatef, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glRotatexOES, GLfixed, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glSampleCoverageARB, GLfloat, GLboolean)
////WRAPV(void , glSampleCoverageOES, GLfixed, GLboolean)
//WRAPV(void , glSampleCoverage, GLclampf, GLboolean)
//WRAPV(void , glSampleMapATI, GLuint, GLuint, GLenum)
//WRAPV(void , glSampleMaskEXT, GLclampf, GLboolean)
//WRAPV(void , glSampleMaskIndexedNV, GLuint, GLbitfield)
//WRAPV(void , glSampleMaski, GLuint, GLbitfield)
//WRAPV(void , glSampleMaskSGIS, GLclampf, GLboolean)
//WRAPV(void , glSamplePatternEXT, GLenum)
//WRAPV(void , glSamplePatternSGIS, GLenum)
//WRAPV(void , glSamplerParameterf, GLuint, GLenum, GLfloat)
//WRAPV(void , glSamplerParameterfv, GLuint, GLenum, GLfloat *)
//WRAPV(void , glSamplerParameterIiv, GLuint, GLenum, GLint *)
//WRAPV(void , glSamplerParameteri, GLuint, GLenum, GLint)
//WRAPV(void , glSamplerParameterIuiv, GLuint, GLenum, GLuint *)
//WRAPV(void , glSamplerParameteriv, GLuint, GLenum, GLint *)
//WRAPV(void , glScaled, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glScalef, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glScalexOES, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glScissorArrayv, GLuint, GLsizei, GLint *)
//WRAPV(void , glScissorIndexed, GLuint, GLint, GLint, GLsizei, GLsizei)
//WRAPV(void , glScissorIndexedv, GLuint, GLint *)
//WRAPV(void , glScissor, GLint, GLint, GLsizei, GLsizei)
//WRAPV(void , glSecondaryColor3bEXT, GLbyte, GLbyte, GLbyte)
//WRAPV(void , glSecondaryColor3b, GLbyte, GLbyte, GLbyte)
//WRAPV(void , glSecondaryColor3bvEXT, GLbyte *)
//WRAPV(void , glSecondaryColor3bv, GLbyte *)
//WRAPV(void , glSecondaryColor3dEXT, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glSecondaryColor3d, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glSecondaryColor3dvEXT, GLdouble *)
//WRAPV(void , glSecondaryColor3dv, GLdouble *)
//WRAPV(void , glSecondaryColor3fEXT, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glSecondaryColor3f, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glSecondaryColor3fvEXT, GLfloat *)
//WRAPV(void , glSecondaryColor3fv, GLfloat *)
//WRAPV(void , glSecondaryColor3hNV, GLhalfNV, GLhalfNV, GLhalfNV)
//WRAPV(void , glSecondaryColor3hvNV, GLhalfNV *)
//WRAPV(void , glSecondaryColor3iEXT, GLint, GLint, GLint)
//WRAPV(void , glSecondaryColor3i, GLint, GLint, GLint)
//WRAPV(void , glSecondaryColor3ivEXT, GLint *)
//WRAPV(void , glSecondaryColor3iv, GLint *)
//WRAPV(void , glSecondaryColor3sEXT, GLshort, GLshort, GLshort)
//WRAPV(void , glSecondaryColor3s, GLshort, GLshort, GLshort)
//WRAPV(void , glSecondaryColor3svEXT, GLshort *)
//WRAPV(void , glSecondaryColor3sv, GLshort *)
//WRAPV(void , glSecondaryColor3ubEXT, GLubyte, GLubyte, GLubyte)
//WRAPV(void , glSecondaryColor3ub, GLubyte, GLubyte, GLubyte)
//WRAPV(void , glSecondaryColor3ubvEXT, GLubyte *)
//WRAPV(void , glSecondaryColor3ubv, GLubyte *)
//WRAPV(void , glSecondaryColor3uiEXT, GLuint, GLuint, GLuint)
//WRAPV(void , glSecondaryColor3ui, GLuint, GLuint, GLuint)
//WRAPV(void , glSecondaryColor3uivEXT, GLuint *)
//WRAPV(void , glSecondaryColor3uiv, GLuint *)
//WRAPV(void , glSecondaryColor3usEXT, GLushort, GLushort, GLushort)
//WRAPV(void , glSecondaryColor3us, GLushort, GLushort, GLushort)
//WRAPV(void , glSecondaryColor3usvEXT, GLushort *)
//WRAPV(void , glSecondaryColor3usv, GLushort *)
//WRAPV(void , glSecondaryColorFormatNV, GLint, GLenum, GLsizei)
//WRAPV(void , glSecondaryColorP3ui, GLenum, GLuint)
//WRAPV(void , glSecondaryColorP3uiv, GLenum, GLuint *)
//WRAPV(void , glSecondaryColorPointerEXT, GLint, GLenum, GLsizei, void *)
//WRAPV(void , glSecondaryColorPointerListIBM, GLint, GLenum, GLint, void **, GLint)
//WRAPV(void , glSecondaryColorPointer, GLint, GLenum, GLsizei, void *)
//WRAPV(void , glSelectBuffer, GLsizei, GLuint *)
//WRAPV(void , glSelectPerfMonitorCountersAMD, GLuint, GLboolean, GLuint, GLint, GLuint *)
//WRAPV(void , glSeparableFilter2DEXT, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, void *, void *)
//WRAPV(void , glSeparableFilter2D, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, GLvoid *, GLvoid *)
//WRAPV(void , glSetFenceAPPLE, GLuint)
//WRAPV(void , glSetFenceNV, GLuint, GLenum)
//WRAPV(void , glSetFragmentShaderConstantATI, GLuint, GLfloat *)
//WRAPV(void , glSetInvariantEXT, GLuint, GLenum, void *)
//WRAPV(void , glSetLocalConstantEXT, GLuint, GLenum, void *)
//WRAPV(void , glSetMultisamplefvAMD, GLenum, GLuint, GLfloat *)
//WRAPV(void , glShadeModel, GLenum)
//WRAPV(void , glShaderBinary, GLsizei, GLuint *, GLenum, void *, GLsizei)
//WRAPV(void , glShaderOp1EXT, GLenum, GLuint, GLuint)
//WRAPV(void , glShaderOp2EXT, GLenum, GLuint, GLuint, GLuint)
//WRAPV(void , glShaderOp3EXT, GLenum, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glShaderSourceARB, GLhandleARB, GLsizei, GLcharARB **, GLint *)
//WRAPV(void , glShaderStorageBlockBinding, GLuint, GLuint, GLuint)
//WRAPV(void , glSharpenTexFuncSGIS, GLenum, GLsizei, GLfloat *)
//WRAPV(void , glSpriteParameterfSGIX, GLenum, GLfloat)
//WRAPV(void , glSpriteParameterfvSGIX, GLenum, GLfloat *)
//WRAPV(void , glSpriteParameteriSGIX, GLenum, GLint)
//WRAPV(void , glSpriteParameterivSGIX, GLenum, GLint *)
//WRAPV(void , glStartInstrumentsSGIX)
//WRAPV(void , glStencilClearTagEXT, GLsizei, GLuint)
//WRAPV(void , glStencilFillPathInstancedNV, GLsizei, GLenum, void *, GLuint, GLenum, GLuint, GLenum, GLfloat *)
//WRAPV(void , glStencilFillPathNV, GLuint, GLenum, GLuint)
//WRAPV(void , glStencilFuncSeparateATI, GLenum, GLenum, GLint, GLuint)
//WRAPV(void , glStencilFuncSeparate, GLenum, GLenum, GLint, GLuint)
//WRAPV(void , glStencilFunc, GLenum, GLint, GLuint)
//WRAPV(void , glStencilMaskSeparate, GLenum, GLuint)
//WRAPV(void , glStencilMask, GLuint)
//WRAPV(void , glStencilOpSeparateATI, GLenum, GLenum, GLenum, GLenum)
//WRAPV(void , glStencilOpSeparate, GLenum, GLenum, GLenum, GLenum)
//WRAPV(void , glStencilOp, GLenum, GLenum, GLenum)
//WRAPV(void , glStencilOpValueAMD, GLenum, GLuint)
//WRAPV(void , glStencilStrokePathInstancedNV, GLsizei, GLenum, void *, GLuint, GLint, GLuint, GLenum, GLfloat *)
//WRAPV(void , glStencilStrokePathNV, GLuint, GLint, GLuint)
//WRAPV(void , glStopInstrumentsSGIX, GLint)
//WRAPV(void , glStringMarkerGREMEDY, GLsizei, void *)
//WRAPV(void , glSwizzleEXT, GLuint, GLuint, GLenum, GLenum, GLenum, GLenum)
//WRAPV(void , glSyncTextureINTEL, GLuint)
//WRAPV(void , glTagSampleBufferSGIX)
//WRAPV(void , glTangent3bEXT, GLbyte, GLbyte, GLbyte)
//WRAPV(void , glTangent3bvEXT, GLbyte *)
//WRAPV(void , glTangent3dEXT, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glTangent3dvEXT, GLdouble *)
//WRAPV(void , glTangent3fEXT, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glTangent3fvEXT, GLfloat *)
//WRAPV(void , glTangent3iEXT, GLint, GLint, GLint)
//WRAPV(void , glTangent3ivEXT, GLint *)
//WRAPV(void , glTangent3sEXT, GLshort, GLshort, GLshort)
//WRAPV(void , glTangent3svEXT, GLshort *)
//WRAPV(void , glTangentPointerEXT, GLenum, GLsizei, void *)
//WRAPV(void , glTbufferMask3DFX, GLuint)
//WRAPV(void , glTessellationFactorAMD, GLfloat)
//WRAPV(void , glTessellationModeAMD, GLenum)
//WRAPV(void , glTexBufferARB, GLenum, GLenum, GLuint)
//WRAPV(void , glTexBufferEXT, GLenum, GLenum, GLuint)
//WRAPV(void , glTexBufferRange, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr)
//WRAPV(void , glTexBuffer, GLenum, GLenum, GLuint)
//WRAPV(void , glTexBumpParameterfvATI, GLenum, GLfloat *)
//WRAPV(void , glTexBumpParameterivATI, GLenum, GLint *)
//WRAPV(void , glTexCoord1bOES, GLbyte)
//WRAPV(void , glTexCoord1bvOES, GLbyte *)
//WRAPV(void , glTexCoord1d, GLdouble)
//WRAPV(void , glTexCoord1dv, GLdouble *)
//WRAPV(void , glTexCoord1f, GLfloat)
//WRAPV(void , glTexCoord1fv, GLfloat *)
//WRAPV(void , glTexCoord1hNV, GLhalfNV)
//WRAPV(void , glTexCoord1hvNV, GLhalfNV *)
//WRAPV(void , glTexCoord1i, GLint)
//WRAPV(void , glTexCoord1iv, GLint *)
//WRAPV(void , glTexCoord1s, GLshort)
//WRAPV(void , glTexCoord1sv, GLshort *)
//WRAPV(void , glTexCoord1xOES, GLfixed)
//WRAPV(void , glTexCoord1xvOES, GLfixed *)
//WRAPV(void , glTexCoord2bOES, GLbyte, GLbyte)
//WRAPV(void , glTexCoord2bvOES, GLbyte *)
//WRAPV(void , glTexCoord2d, GLdouble, GLdouble)
//WRAPV(void , glTexCoord2dv, GLdouble *)
//WRAPV(void , glTexCoord2fColor3fVertex3fSUN, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glTexCoord2fColor3fVertex3fvSUN, GLfloat *, GLfloat *, GLfloat *)
//WRAPV(void , glTexCoord2fColor4fNormal3fVertex3fSUN, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glTexCoord2fColor4fNormal3fVertex3fvSUN, GLfloat *, GLfloat *, GLfloat *, GLfloat *)
//WRAPV(void , glTexCoord2fColor4ubVertex3fSUN, GLfloat, GLfloat, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glTexCoord2fColor4ubVertex3fvSUN, GLfloat *, GLubyte *, GLfloat *)
//WRAPV(void , glTexCoord2fNormal3fVertex3fSUN, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glTexCoord2fNormal3fVertex3fvSUN, GLfloat *, GLfloat *, GLfloat *)
//WRAPV(void , glTexCoord2f, GLfloat, GLfloat)
//WRAPV(void , glTexCoord2fVertex3fSUN, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glTexCoord2fVertex3fvSUN, GLfloat *, GLfloat *)
//WRAPV(void , glTexCoord2fv, GLfloat *)
//WRAPV(void , glTexCoord2hNV, GLhalfNV, GLhalfNV)
//WRAPV(void , glTexCoord2hvNV, GLhalfNV *)
//WRAPV(void , glTexCoord2i, GLint, GLint)
//WRAPV(void , glTexCoord2iv, GLint *)
//WRAPV(void , glTexCoord2s, GLshort, GLshort)
//WRAPV(void , glTexCoord2sv, GLshort *)
//WRAPV(void , glTexCoord2xOES, GLfixed, GLfixed)
//WRAPV(void , glTexCoord2xvOES, GLfixed *)
//WRAPV(void , glTexCoord3bOES, GLbyte, GLbyte, GLbyte)
//WRAPV(void , glTexCoord3bvOES, GLbyte *)
//WRAPV(void , glTexCoord3d, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glTexCoord3dv, GLdouble *)
//WRAPV(void , glTexCoord3f, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glTexCoord3fv, GLfloat *)
//WRAPV(void , glTexCoord3hNV, GLhalfNV, GLhalfNV, GLhalfNV)
//WRAPV(void , glTexCoord3hvNV, GLhalfNV *)
//WRAPV(void , glTexCoord3i, GLint, GLint, GLint)
//WRAPV(void , glTexCoord3iv, GLint *)
//WRAPV(void , glTexCoord3s, GLshort, GLshort, GLshort)
//WRAPV(void , glTexCoord3sv, GLshort *)
//WRAPV(void , glTexCoord3xOES, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glTexCoord3xvOES, GLfixed *)
//WRAPV(void , glTexCoord4bOES, GLbyte, GLbyte, GLbyte, GLbyte)
//WRAPV(void , glTexCoord4bvOES, GLbyte *)
//WRAPV(void , glTexCoord4d, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glTexCoord4dv, GLdouble *)
//WRAPV(void , glTexCoord4fColor4fNormal3fVertex4fSUN, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glTexCoord4fColor4fNormal3fVertex4fvSUN, GLfloat *, GLfloat *, GLfloat *, GLfloat *)
//WRAPV(void , glTexCoord4f, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glTexCoord4fVertex4fSUN, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glTexCoord4fVertex4fvSUN, GLfloat *, GLfloat *)
//WRAPV(void , glTexCoord4fv, GLfloat *)
//WRAPV(void , glTexCoord4hNV, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV)
//WRAPV(void , glTexCoord4hvNV, GLhalfNV *)
//WRAPV(void , glTexCoord4i, GLint, GLint, GLint, GLint)
//WRAPV(void , glTexCoord4iv, GLint *)
//WRAPV(void , glTexCoord4s, GLshort, GLshort, GLshort, GLshort)
//WRAPV(void , glTexCoord4sv, GLshort *)
//WRAPV(void , glTexCoord4xOES, GLfixed, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glTexCoord4xvOES, GLfixed *)
//WRAPV(void , glTexCoordFormatNV, GLint, GLenum, GLsizei)
//WRAPV(void , glTexCoordP1ui, GLenum, GLuint)
//WRAPV(void , glTexCoordP1uiv, GLenum, GLuint *)
//WRAPV(void , glTexCoordP2ui, GLenum, GLuint)
//WRAPV(void , glTexCoordP2uiv, GLenum, GLuint *)
//WRAPV(void , glTexCoordP3ui, GLenum, GLuint)
//WRAPV(void , glTexCoordP3uiv, GLenum, GLuint *)
//WRAPV(void , glTexCoordP4ui, GLenum, GLuint)
//WRAPV(void , glTexCoordP4uiv, GLenum, GLuint *)
//WRAPV(void , glTexCoordPointerEXT, GLint, GLenum, GLsizei, GLsizei, void *)
//WRAPV(void , glTexCoordPointerListIBM, GLint, GLenum, GLint, void **, GLint)
//WRAPV(void , glTexCoordPointer, GLint, GLenum, GLsizei, GLvoid *)
//WRAPV(void , glTexCoordPointervINTEL, GLint, GLenum, void **)
//WRAPV(void , glTexEnvf, GLenum, GLenum, GLfloat)
//WRAPV(void , glTexEnvfv, GLenum, GLenum, GLfloat *)
//WRAPV(void , glTexEnvi, GLenum, GLenum, GLint)
//WRAPV(void , glTexEnviv, GLenum, GLenum, GLint *)
//WRAPV(void , glTexEnvxOES, GLenum, GLenum, GLfixed)
//WRAPV(void , glTexEnvxvOES, GLenum, GLenum, GLfixed *)
//WRAPV(void , glTexFilterFuncSGIS, GLenum, GLenum, GLsizei, GLfloat *)
//WRAPV(void , glTexGend, GLenum, GLenum, GLdouble)
//WRAPV(void , glTexGendv, GLenum, GLenum, GLdouble *)
//WRAPV(void , glTexGenf, GLenum, GLenum, GLfloat)
//WRAPV(void , glTexGenfv, GLenum, GLenum, GLfloat *)
//WRAPV(void , glTexGeni, GLenum, GLenum, GLint)
//WRAPV(void , glTexGeniv, GLenum, GLenum, GLint *)
//WRAPV(void , glTexGenxOES, GLenum, GLenum, GLfixed)
//WRAPV(void , glTexGenxvOES, GLenum, GLenum, GLfixed *)
//WRAPV(void , glTexImage1D, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, GLvoid *)
//WRAPV(void , glTexImage2DMultisampleCoverageNV, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLboolean)
//WRAPV(void , glTexImage2DMultisample, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean)
//WRAPV(void , glTexImage3DEXT, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, void *)
//WRAPV(void , glTexImage3DMultisampleCoverageNV, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean)
//WRAPV(void , glTexImage3DMultisample, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean)
//WRAPV(void , glTexImage3D, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, GLvoid *)
//WRAPV(void , glTexImage4DSGIS, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, void *)
//WRAPV(void , glTexPageCommitmentARB, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean)
//WRAPV(void , glTexParameterf, GLenum, GLenum, GLfloat)
//WRAPV(void , glTexParameterfv, GLenum, GLenum, GLfloat *)
//WRAPV(void , glTexParameterIivEXT, GLenum, GLenum, GLint *)
//WRAPV(void , glTexParameterIiv, GLenum, GLenum, GLint *)
//WRAPV(void , glTexParameterIuivEXT, GLenum, GLenum, GLuint *)
//WRAPV(void , glTexParameterIuiv, GLenum, GLenum, GLuint *)
//WRAPV(void , glTexParameteriv, GLenum, GLenum, GLint *)
//WRAPV(void , glTexParameterxOES, GLenum, GLenum, GLfixed)
//WRAPV(void , glTexParameterxvOES, GLenum, GLenum, GLfixed *)
//WRAPV(void , glTexRenderbufferNV, GLenum, GLuint)
//WRAPV(void , glTexStorage1D, GLenum, GLsizei, GLenum, GLsizei)
//WRAPV(void , glTexStorage2DMultisample, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean)
//WRAPV(void , glTexStorage2D, GLenum, GLsizei, GLenum, GLsizei, GLsizei)
//WRAPV(void , glTexStorage3DMultisample, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean)
//WRAPV(void , glTexStorage3D, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei)
//WRAPV(void , glTexStorageSparseAMD, GLenum, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLbitfield)
//WRAPV(void , glTexSubImage1DEXT, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, void *)
//WRAPV(void , glTexSubImage1D, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, GLvoid *)
//WRAPV(void , glTexSubImage2DEXT, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *)
//WRAPV(void , glTexSubImage2D, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *)
//WRAPV(void , glTexSubImage3DEXT, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, void *)
//WRAPV(void , glTexSubImage3D, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLvoid *)
//WRAPV(void , glTexSubImage4DSGIS, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, GLenum, GLenum, void *)
//WRAPV(void , glTextureBarrierNV)
//WRAPV(void , glTextureBufferEXT, GLuint, GLenum, GLenum, GLuint)
//WRAPV(void , glTextureBufferRangeEXT, GLuint, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr)
//WRAPV(void , glTextureColorMaskSGIS, GLboolean, GLboolean, GLboolean, GLboolean)
//WRAPV(void , glTextureImage1DEXT, GLuint, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, void *)
//WRAPV(void , glTextureImage2DEXT, GLuint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, void *)
//WRAPV(void , glTextureImage2DMultisampleCoverageNV, GLuint, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLboolean)
//WRAPV(void , glTextureImage2DMultisampleNV, GLuint, GLenum, GLsizei, GLint, GLsizei, GLsizei, GLboolean)
//WRAPV(void , glTextureImage3DEXT, GLuint, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, void *)
//WRAPV(void , glTextureImage3DMultisampleCoverageNV, GLuint, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean)
//WRAPV(void , glTextureImage3DMultisampleNV, GLuint, GLenum, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean)
//WRAPV(void , glTextureLightEXT, GLenum)
//WRAPV(void , glTextureMaterialEXT, GLenum, GLenum)
//WRAPV(void , glTextureNormalEXT, GLenum)
//WRAPV(void , glTexturePageCommitmentEXT, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean)
//WRAPV(void , glTextureParameterfEXT, GLuint, GLenum, GLenum, GLfloat)
//WRAPV(void , glTextureParameterfvEXT, GLuint, GLenum, GLenum, GLfloat *)
//WRAPV(void , glTextureParameteriEXT, GLuint, GLenum, GLenum, GLint)
//WRAPV(void , glTextureParameterIivEXT, GLuint, GLenum, GLenum, GLint *)
//WRAPV(void , glTextureParameterIuivEXT, GLuint, GLenum, GLenum, GLuint *)
//WRAPV(void , glTextureParameterivEXT, GLuint, GLenum, GLenum, GLint *)
//WRAPV(void , glTextureRangeAPPLE, GLenum, GLsizei, void *)
//WRAPV(void , glTextureRenderbufferEXT, GLuint, GLenum, GLuint)
//WRAPV(void , glTextureStorage1DEXT, GLuint, GLenum, GLsizei, GLenum, GLsizei)
//WRAPV(void , glTextureStorage2DEXT, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei)
//WRAPV(void , glTextureStorage2DMultisampleEXT, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean)
//WRAPV(void , glTextureStorage3DEXT, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei)
//WRAPV(void , glTextureStorage3DMultisampleEXT, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean)
//WRAPV(void , glTextureStorageSparseAMD, GLuint, GLenum, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLbitfield)
//WRAPV(void , glTextureSubImage1DEXT, GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, void *)
//WRAPV(void , glTextureSubImage2DEXT, GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *)
//WRAPV(void , glTextureSubImage3DEXT, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, void *)
//WRAPV(void , glTextureView, GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glTrackMatrixNV, GLenum, GLuint, GLenum, GLenum)
//WRAPV(void , glTransformFeedbackAttribsNV, GLuint, GLint *, GLenum)
//WRAPV(void , glTransformFeedbackStreamAttribsNV, GLsizei, GLint *, GLsizei, GLint *, GLenum)
//WRAPV(void , glTransformFeedbackVaryingsEXT, GLuint, GLsizei, GLchar **, GLenum)
//WRAPV(void , glTransformFeedbackVaryingsNV, GLuint, GLsizei, GLint *, GLenum)
//WRAPV(void , glTransformFeedbackVaryings, GLuint, GLsizei, GLchar **, GLenum)
//WRAPV(void , glTransformPathNV, GLuint, GLuint, GLenum, GLfloat *)
//WRAPV(void , glTranslated, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glTranslatef, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glTranslatexOES, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glUniform1d, GLint, GLdouble)
//WRAPV(void , glUniform1dv, GLint, GLsizei, GLdouble *)
//WRAPV(void , glUniform1fARB, GLint, GLfloat)
//WRAPV(void , glUniform1f, GLint, GLfloat)
//WRAPV(void , glUniform1fvARB, GLint, GLsizei, GLfloat *)
//WRAPV(void , glUniform1fv, GLint, GLsizei, GLfloat *)
//WRAPV(void , glUniform1i64NV, GLint, GLint64EXT)
//WRAPV(void , glUniform1i64vNV, GLint, GLsizei, GLint64EXT *)
//WRAPV(void , glUniform1iARB, GLint, GLint)
//WRAPV(void , glUniform1ivARB, GLint, GLsizei, GLint *)
//WRAPV(void , glUniform1iv, GLint, GLsizei, GLint *)
//WRAPV(void , glUniform1ui64NV, GLint, GLuint64EXT)
//WRAPV(void , glUniform1ui64vNV, GLint, GLsizei, GLuint64EXT *)
//WRAPV(void , glUniform1uiEXT, GLint, GLuint)
//WRAPV(void , glUniform1ui, GLint, GLuint)
//WRAPV(void , glUniform1uivEXT, GLint, GLsizei, GLuint *)
//WRAPV(void , glUniform1uiv, GLint, GLsizei, GLuint *)
//WRAPV(void , glUniform2d, GLint, GLdouble, GLdouble)
//WRAPV(void , glUniform2dv, GLint, GLsizei, GLdouble *)
//WRAPV(void , glUniform2fARB, GLint, GLfloat, GLfloat)
//WRAPV(void , glUniform2f, GLint, GLfloat, GLfloat)
//WRAPV(void , glUniform2fvARB, GLint, GLsizei, GLfloat *)
//WRAPV(void , glUniform2fv, GLint, GLsizei, GLfloat *)
//WRAPV(void , glUniform2i64NV, GLint, GLint64EXT, GLint64EXT)
//WRAPV(void , glUniform2i64vNV, GLint, GLsizei, GLint64EXT *)
//WRAPV(void , glUniform2iARB, GLint, GLint, GLint)
//WRAPV(void , glUniform2i, GLint, GLint, GLint)
//WRAPV(void , glUniform2ivARB, GLint, GLsizei, GLint *)
//WRAPV(void , glUniform2iv, GLint, GLsizei, GLint *)
//WRAPV(void , glUniform2ui64NV, GLint, GLuint64EXT, GLuint64EXT)
//WRAPV(void , glUniform2ui64vNV, GLint, GLsizei, GLuint64EXT *)
//WRAPV(void , glUniform2uiEXT, GLint, GLuint, GLuint)
//WRAPV(void , glUniform2ui, GLint, GLuint, GLuint)
//WRAPV(void , glUniform2uivEXT, GLint, GLsizei, GLuint *)
//WRAPV(void , glUniform2uiv, GLint, GLsizei, GLuint *)
//WRAPV(void , glUniform3d, GLint, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glUniform3dv, GLint, GLsizei, GLdouble *)
//WRAPV(void , glUniform3fARB, GLint, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glUniform3f, GLint, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glUniform3fvARB, GLint, GLsizei, GLfloat *)
//WRAPV(void , glUniform3fv, GLint, GLsizei, GLfloat *)
//WRAPV(void , glUniform3i64NV, GLint, GLint64EXT, GLint64EXT, GLint64EXT)
//WRAPV(void , glUniform3i64vNV, GLint, GLsizei, GLint64EXT *)
//WRAPV(void , glUniform3iARB, GLint, GLint, GLint, GLint)
//WRAPV(void , glUniform3i, GLint, GLint, GLint, GLint)
//WRAPV(void , glUniform3ivARB, GLint, GLsizei, GLint *)
//WRAPV(void , glUniform3iv, GLint, GLsizei, GLint *)
//WRAPV(void , glUniform3ui64NV, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT)
//WRAPV(void , glUniform3ui64vNV, GLint, GLsizei, GLuint64EXT *)
//WRAPV(void , glUniform3uiEXT, GLint, GLuint, GLuint, GLuint)
//WRAPV(void , glUniform3ui, GLint, GLuint, GLuint, GLuint)
//WRAPV(void , glUniform3uivEXT, GLint, GLsizei, GLuint *)
//WRAPV(void , glUniform3uiv, GLint, GLsizei, GLuint *)
//WRAPV(void , glUniform4d, GLint, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glUniform4dv, GLint, GLsizei, GLdouble *)
//WRAPV(void , glUniform4fARB, GLint, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glUniform4f, GLint, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glUniform4fvARB, GLint, GLsizei, GLfloat *)
//WRAPV(void , glUniform4i64NV, GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT)
//WRAPV(void , glUniform4i64vNV, GLint, GLsizei, GLint64EXT *)
//WRAPV(void , glUniform4iARB, GLint, GLint, GLint, GLint, GLint)
//WRAPV(void , glUniform4i, GLint, GLint, GLint, GLint, GLint)
//WRAPV(void , glUniform4ivARB, GLint, GLsizei, GLint *)
//WRAPV(void , glUniform4iv, GLint, GLsizei, GLint *)
//WRAPV(void , glUniform4ui64NV, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT)
//WRAPV(void , glUniform4ui64vNV, GLint, GLsizei, GLuint64EXT *)
//WRAPV(void , glUniform4uiEXT, GLint, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glUniform4ui, GLint, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glUniform4uivEXT, GLint, GLsizei, GLuint *)
//WRAPV(void , glUniform4uiv, GLint, GLsizei, GLuint *)
//WRAPV(void , glUniformBlockBinding, GLuint, GLuint, GLuint)
//WRAPV(void , glUniformBufferEXT, GLuint, GLint, GLuint)
//WRAPV(void , glUniformHandleui64ARB, GLint, GLuint64)
//WRAPV(void , glUniformHandleui64NV, GLint, GLuint64)
//WRAPV(void , glUniformHandleui64vARB, GLint, GLsizei, GLuint64 *)
//WRAPV(void , glUniformHandleui64vNV, GLint, GLsizei, GLuint64 *)
//WRAPV(void , glUniformMatrix2dv, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glUniformMatrix2fvARB, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glUniformMatrix2fv, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glUniformMatrix2x3dv, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glUniformMatrix2x3fv, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glUniformMatrix2x4dv, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glUniformMatrix2x4fv, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glUniformMatrix3dv, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glUniformMatrix3fvARB, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glUniformMatrix3fv, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glUniformMatrix3x2dv, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glUniformMatrix3x2fv, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glUniformMatrix3x4dv, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glUniformMatrix3x4fv, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glUniformMatrix4dv, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glUniformMatrix4fvARB, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glUniformMatrix4x2dv, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glUniformMatrix4x2fv, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glUniformMatrix4x3dv, GLint, GLsizei, GLboolean, GLdouble *)
//WRAPV(void , glUniformMatrix4x3fv, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glUniformSubroutinesuiv, GLenum, GLsizei, GLuint *)
//WRAPV(void , glUniformui64NV, GLint, GLuint64EXT)
//WRAPV(void , glUniformui64vNV, GLint, GLsizei, GLuint64EXT *)
//WRAPV(void , glUnlockArraysEXT)
//WRAPV(void , glUnmapObjectBufferATI, GLuint)
//WRAPV(void , glUnmapTexture2DINTEL, GLuint, GLint)
//WRAPV(void , glUpdateObjectBufferATI, GLuint, GLuint, GLsizei, void *, GLenum)
//WRAPV(void , glUseProgramObjectARB, GLhandleARB)
//WRAPV(void , glUseProgramStages, GLuint, GLbitfield, GLuint)
//WRAPV(void , glUseShaderProgramEXT, GLenum, GLuint)
//WRAPV(void , glValidateProgramARB, GLhandleARB)
//WRAPV(void , glValidateProgramPipeline, GLuint)
//WRAPV(void , glVariantArrayObjectATI, GLuint, GLenum, GLsizei, GLuint, GLuint)
//WRAPV(void , glVariantbvEXT, GLuint, GLbyte *)
//WRAPV(void , glVariantdvEXT, GLuint, GLdouble *)
//WRAPV(void , glVariantfvEXT, GLuint, GLfloat *)
//WRAPV(void , glVariantivEXT, GLuint, GLint *)
//WRAPV(void , glVariantPointerEXT, GLuint, GLenum, GLuint, void *)
//WRAPV(void , glVariantsvEXT, GLuint, GLshort *)
//WRAPV(void , glVariantubvEXT, GLuint, GLubyte *)
//WRAPV(void , glVariantuivEXT, GLuint, GLuint *)
//WRAPV(void , glVariantusvEXT, GLuint, GLushort *)
//WRAPV(void , glVDPAUFiniNV)
//WRAPV(void , glVDPAUGetSurfaceivNV, GLvdpauSurfaceNV, GLenum, GLsizei, GLsizei *, GLint *)
//WRAPV(void , glVDPAUInitNV, void *, void *)
//WRAPV(void , glVDPAUMapSurfacesNV, GLsizei, GLvdpauSurfaceNV *)
//WRAPV(void , glVDPAUSurfaceAccessNV, GLvdpauSurfaceNV, GLenum)
//WRAPV(void , glVDPAUUnmapSurfacesNV, GLsizei, GLvdpauSurfaceNV *)
//WRAPV(void , glVDPAUUnregisterSurfaceNV, GLvdpauSurfaceNV)
//WRAPV(void , glVertex2bOES, GLbyte)
//WRAPV(void , glVertex2bvOES, GLbyte *)
//WRAPV(void , glVertex2d, GLdouble, GLdouble)
//WRAPV(void , glVertex2dv, GLdouble *)
//WRAPV(void , glVertex2f, GLfloat, GLfloat)
//WRAPV(void , glVertex2fv, GLfloat *)
//WRAPV(void , glVertex2hNV, GLhalfNV, GLhalfNV)
//WRAPV(void , glVertex2hvNV, GLhalfNV *)
//WRAPV(void , glVertex2i, GLint, GLint)
//WRAPV(void , glVertex2iv, GLint *)
//WRAPV(void , glVertex2s, GLshort, GLshort)
//WRAPV(void , glVertex2sv, GLshort *)
//WRAPV(void , glVertex2xOES, GLfixed)
//WRAPV(void , glVertex2xvOES, GLfixed *)
//WRAPV(void , glVertex3bOES, GLbyte, GLbyte)
//WRAPV(void , glVertex3bvOES, GLbyte *)
//WRAPV(void , glVertex3d, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glVertex3dv, GLdouble *)
//WRAPV(void , glVertex3f, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glVertex3fv, GLfloat *)
//WRAPV(void , glVertex3hNV, GLhalfNV, GLhalfNV, GLhalfNV)
//WRAPV(void , glVertex3hvNV, GLhalfNV *)
//WRAPV(void , glVertex3i, GLint, GLint, GLint)
//WRAPV(void , glVertex3iv, GLint *)
//WRAPV(void , glVertex3s, GLshort, GLshort, GLshort)
//WRAPV(void , glVertex3sv, GLshort *)
//WRAPV(void , glVertex3xOES, GLfixed, GLfixed)
//WRAPV(void , glVertex3xvOES, GLfixed *)
//WRAPV(void , glVertex4bOES, GLbyte, GLbyte, GLbyte)
//WRAPV(void , glVertex4bvOES, GLbyte *)
//WRAPV(void , glVertex4d, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glVertex4dv, GLdouble *)
//WRAPV(void , glVertex4f, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glVertex4fv, GLfloat *)
//WRAPV(void , glVertex4hNV, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV)
//WRAPV(void , glVertex4hvNV, GLhalfNV *)
//WRAPV(void , glVertex4i, GLint, GLint, GLint, GLint)
//WRAPV(void , glVertex4iv, GLint *)
//WRAPV(void , glVertex4s, GLshort, GLshort, GLshort, GLshort)
//WRAPV(void , glVertex4sv, GLshort *)
//WRAPV(void , glVertex4xOES, GLfixed, GLfixed, GLfixed)
//WRAPV(void , glVertex4xvOES, GLfixed *)
//WRAPV(void , glVertexArrayBindVertexBufferEXT, GLuint, GLuint, GLuint, GLintptr, GLsizei)
//WRAPV(void , glVertexArrayColorOffsetEXT, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr)
//WRAPV(void , glVertexArrayEdgeFlagOffsetEXT, GLuint, GLuint, GLsizei, GLintptr)
//WRAPV(void , glVertexArrayFogCoordOffsetEXT, GLuint, GLuint, GLenum, GLsizei, GLintptr)
//WRAPV(void , glVertexArrayIndexOffsetEXT, GLuint, GLuint, GLenum, GLsizei, GLintptr)
//WRAPV(void , glVertexArrayMultiTexCoordOffsetEXT, GLuint, GLuint, GLenum, GLint, GLenum, GLsizei, GLintptr)
//WRAPV(void , glVertexArrayNormalOffsetEXT, GLuint, GLuint, GLenum, GLsizei, GLintptr)
//WRAPV(void , glVertexArrayParameteriAPPLE, GLenum, GLint)
//WRAPV(void , glVertexArrayRangeAPPLE, GLsizei, void *)
//WRAPV(void , glVertexArrayRangeNV, GLsizei, void *)
//WRAPV(void , glVertexArraySecondaryColorOffsetEXT, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr)
//WRAPV(void , glVertexArrayTexCoordOffsetEXT, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr)
//WRAPV(void , glVertexArrayVertexAttribBindingEXT, GLuint, GLuint, GLuint)
//WRAPV(void , glVertexArrayVertexAttribDivisorEXT, GLuint, GLuint, GLuint)
//WRAPV(void , glVertexArrayVertexAttribFormatEXT, GLuint, GLuint, GLint, GLenum, GLboolean, GLuint)
//WRAPV(void , glVertexArrayVertexAttribIFormatEXT, GLuint, GLuint, GLint, GLenum, GLuint)
//WRAPV(void , glVertexArrayVertexAttribIOffsetEXT, GLuint, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr)
//WRAPV(void , glVertexArrayVertexAttribLFormatEXT, GLuint, GLuint, GLint, GLenum, GLuint)
//WRAPV(void , glVertexArrayVertexAttribLOffsetEXT, GLuint, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr)
//WRAPV(void , glVertexArrayVertexAttribOffsetEXT, GLuint, GLuint, GLuint, GLint, GLenum, GLboolean, GLsizei, GLintptr)
//WRAPV(void , glVertexArrayVertexBindingDivisorEXT, GLuint, GLuint, GLuint)
//WRAPV(void , glVertexArrayVertexOffsetEXT, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr)
//WRAPV(void , glVertexAttrib1dARB, GLuint, GLdouble)
//WRAPV(void , glVertexAttrib1dNV, GLuint, GLdouble)
//WRAPV(void , glVertexAttrib1d, GLuint, GLdouble)
//WRAPV(void , glVertexAttrib1dvARB, GLuint, GLdouble *)
//WRAPV(void , glVertexAttrib1dvNV, GLuint, GLdouble *)
//WRAPV(void , glVertexAttrib1dv, GLuint, GLdouble *)
//WRAPV(void , glVertexAttrib1fARB, GLuint, GLfloat)
//WRAPV(void , glVertexAttrib1fNV, GLuint, GLfloat)
//WRAPV(void , glVertexAttrib1f, GLuint, GLfloat)
//WRAPV(void , glVertexAttrib1fvARB, GLuint, GLfloat *)
//WRAPV(void , glVertexAttrib1fvNV, GLuint, GLfloat *)
//WRAPV(void , glVertexAttrib1fv, GLuint, GLfloat *)
//WRAPV(void , glVertexAttrib1hNV, GLuint, GLhalfNV)
//WRAPV(void , glVertexAttrib1hvNV, GLuint, GLhalfNV *)
//WRAPV(void , glVertexAttrib1sARB, GLuint, GLshort)
//WRAPV(void , glVertexAttrib1sNV, GLuint, GLshort)
//WRAPV(void , glVertexAttrib1s, GLuint, GLshort)
//WRAPV(void , glVertexAttrib1svARB, GLuint, GLshort *)
//WRAPV(void , glVertexAttrib1svNV, GLuint, GLshort *)
//WRAPV(void , glVertexAttrib1sv, GLuint, GLshort *)
//WRAPV(void , glVertexAttrib2dARB, GLuint, GLdouble, GLdouble)
//WRAPV(void , glVertexAttrib2dNV, GLuint, GLdouble, GLdouble)
//WRAPV(void , glVertexAttrib2d, GLuint, GLdouble, GLdouble)
//WRAPV(void , glVertexAttrib2dvARB, GLuint, GLdouble *)
//WRAPV(void , glVertexAttrib2dvNV, GLuint, GLdouble *)
//WRAPV(void , glVertexAttrib2dv, GLuint, GLdouble *)
//WRAPV(void , glVertexAttrib2fARB, GLuint, GLfloat, GLfloat)
//WRAPV(void , glVertexAttrib2fNV, GLuint, GLfloat, GLfloat)
//WRAPV(void , glVertexAttrib2f, GLuint, GLfloat, GLfloat)
//WRAPV(void , glVertexAttrib2fvARB, GLuint, GLfloat *)
//WRAPV(void , glVertexAttrib2fvNV, GLuint, GLfloat *)
//WRAPV(void , glVertexAttrib2fv, GLuint, GLfloat *)
//WRAPV(void , glVertexAttrib2hNV, GLuint, GLhalfNV, GLhalfNV)
//WRAPV(void , glVertexAttrib2hvNV, GLuint, GLhalfNV *)
//WRAPV(void , glVertexAttrib2sARB, GLuint, GLshort, GLshort)
//WRAPV(void , glVertexAttrib2sNV, GLuint, GLshort, GLshort)
//WRAPV(void , glVertexAttrib2s, GLuint, GLshort, GLshort)
//WRAPV(void , glVertexAttrib2svARB, GLuint, GLshort *)
//WRAPV(void , glVertexAttrib2svNV, GLuint, GLshort *)
//WRAPV(void , glVertexAttrib2sv, GLuint, GLshort *)
//WRAPV(void , glVertexAttrib3dARB, GLuint, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glVertexAttrib3dNV, GLuint, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glVertexAttrib3d, GLuint, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glVertexAttrib3dvARB, GLuint, GLdouble *)
//WRAPV(void , glVertexAttrib3dvNV, GLuint, GLdouble *)
//WRAPV(void , glVertexAttrib3dv, GLuint, GLdouble *)
//WRAPV(void , glVertexAttrib3fARB, GLuint, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glVertexAttrib3fNV, GLuint, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glVertexAttrib3f, GLuint, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glVertexAttrib3fvARB, GLuint, GLfloat *)
//WRAPV(void , glVertexAttrib3fvNV, GLuint, GLfloat *)
//WRAPV(void , glVertexAttrib3fv, GLuint, GLfloat *)
//WRAPV(void , glVertexAttrib3hNV, GLuint, GLhalfNV, GLhalfNV, GLhalfNV)
//WRAPV(void , glVertexAttrib3hvNV, GLuint, GLhalfNV *)
//WRAPV(void , glVertexAttrib3sARB, GLuint, GLshort, GLshort, GLshort)
//WRAPV(void , glVertexAttrib3sNV, GLuint, GLshort, GLshort, GLshort)
//WRAPV(void , glVertexAttrib3s, GLuint, GLshort, GLshort, GLshort)
//WRAPV(void , glVertexAttrib3svARB, GLuint, GLshort *)
//WRAPV(void , glVertexAttrib3svNV, GLuint, GLshort *)
//WRAPV(void , glVertexAttrib3sv, GLuint, GLshort *)
//WRAPV(void , glVertexAttrib4bvARB, GLuint, GLbyte *)
//WRAPV(void , glVertexAttrib4bv, GLuint, GLbyte *)
//WRAPV(void , glVertexAttrib4dARB, GLuint, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glVertexAttrib4dNV, GLuint, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glVertexAttrib4d, GLuint, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glVertexAttrib4dvARB, GLuint, GLdouble *)
//WRAPV(void , glVertexAttrib4dvNV, GLuint, GLdouble *)
//WRAPV(void , glVertexAttrib4dv, GLuint, GLdouble *)
//WRAPV(void , glVertexAttrib4fARB, GLuint, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glVertexAttrib4fNV, GLuint, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glVertexAttrib4f, GLuint, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glVertexAttrib4fvARB, GLuint, GLfloat *)
//WRAPV(void , glVertexAttrib4fvNV, GLuint, GLfloat *)
//WRAPV(void , glVertexAttrib4fv, GLuint, GLfloat *)
//WRAPV(void , glVertexAttrib4hNV, GLuint, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV)
//WRAPV(void , glVertexAttrib4hvNV, GLuint, GLhalfNV *)
//WRAPV(void , glVertexAttrib4ivARB, GLuint, GLint *)
//WRAPV(void , glVertexAttrib4iv, GLuint, GLint *)
//WRAPV(void , glVertexAttrib4NbvARB, GLuint, GLbyte *)
//WRAPV(void , glVertexAttrib4Nbv, GLuint, GLbyte *)
//WRAPV(void , glVertexAttrib4NivARB, GLuint, GLint *)
//WRAPV(void , glVertexAttrib4Niv, GLuint, GLint *)
//WRAPV(void , glVertexAttrib4NsvARB, GLuint, GLshort *)
//WRAPV(void , glVertexAttrib4Nsv, GLuint, GLshort *)
//WRAPV(void , glVertexAttrib4NubARB, GLuint, GLubyte, GLubyte, GLubyte, GLubyte)
//WRAPV(void , glVertexAttrib4Nub, GLuint, GLubyte, GLubyte, GLubyte, GLubyte)
//WRAPV(void , glVertexAttrib4NubvARB, GLuint, GLubyte *)
//WRAPV(void , glVertexAttrib4Nubv, GLuint, GLubyte *)
//WRAPV(void , glVertexAttrib4NuivARB, GLuint, GLuint *)
//WRAPV(void , glVertexAttrib4Nuiv, GLuint, GLuint *)
//WRAPV(void , glVertexAttrib4NusvARB, GLuint, GLushort *)
//WRAPV(void , glVertexAttrib4Nusv, GLuint, GLushort *)
//WRAPV(void , glVertexAttrib4sARB, GLuint, GLshort, GLshort, GLshort, GLshort)
//WRAPV(void , glVertexAttrib4sNV, GLuint, GLshort, GLshort, GLshort, GLshort)
//WRAPV(void , glVertexAttrib4s, GLuint, GLshort, GLshort, GLshort, GLshort)
//WRAPV(void , glVertexAttrib4svARB, GLuint, GLshort *)
//WRAPV(void , glVertexAttrib4svNV, GLuint, GLshort *)
//WRAPV(void , glVertexAttrib4sv, GLuint, GLshort *)
//WRAPV(void , glVertexAttrib4ubNV, GLuint, GLubyte, GLubyte, GLubyte, GLubyte)
//WRAPV(void , glVertexAttrib4ubvARB, GLuint, GLubyte *)
//WRAPV(void , glVertexAttrib4ubvNV, GLuint, GLubyte *)
//WRAPV(void , glVertexAttrib4ubv, GLuint, GLubyte *)
//WRAPV(void , glVertexAttrib4uivARB, GLuint, GLuint *)
//WRAPV(void , glVertexAttrib4uiv, GLuint, GLuint *)
//WRAPV(void , glVertexAttrib4usvARB, GLuint, GLushort *)
//WRAPV(void , glVertexAttrib4usv, GLuint, GLushort *)
//WRAPV(void , glVertexAttribArrayObjectATI, GLuint, GLint, GLenum, GLboolean, GLsizei, GLuint, GLuint)
//WRAPV(void , glVertexAttribBinding, GLuint, GLuint)
//WRAPV(void , glVertexAttribDivisorARB, GLuint, GLuint)
//WRAPV(void , glVertexAttribDivisor, GLuint, GLuint)
//WRAPV(void , glVertexAttribFormatNV, GLuint, GLint, GLenum, GLboolean, GLsizei)
//WRAPV(void , glVertexAttribFormat, GLuint, GLint, GLenum, GLboolean, GLuint)
//WRAPV(void , glVertexAttribI1iEXT, GLuint, GLint)
//WRAPV(void , glVertexAttribI1i, GLuint, GLint)
//WRAPV(void , glVertexAttribI1ivEXT, GLuint, GLint *)
//WRAPV(void , glVertexAttribI1iv, GLuint, GLint *)
//WRAPV(void , glVertexAttribI1uiEXT, GLuint, GLuint)
//WRAPV(void , glVertexAttribI1ui, GLuint, GLuint)
//WRAPV(void , glVertexAttribI1uivEXT, GLuint, GLuint *)
//WRAPV(void , glVertexAttribI1uiv, GLuint, GLuint *)
//WRAPV(void , glVertexAttribI2iEXT, GLuint, GLint, GLint)
//WRAPV(void , glVertexAttribI2i, GLuint, GLint, GLint)
//WRAPV(void , glVertexAttribI2ivEXT, GLuint, GLint *)
//WRAPV(void , glVertexAttribI2iv, GLuint, GLint *)
//WRAPV(void , glVertexAttribI2uiEXT, GLuint, GLuint, GLuint)
//WRAPV(void , glVertexAttribI2ui, GLuint, GLuint, GLuint)
//WRAPV(void , glVertexAttribI2uivEXT, GLuint, GLuint *)
//WRAPV(void , glVertexAttribI2uiv, GLuint, GLuint *)
//WRAPV(void , glVertexAttribI3iEXT, GLuint, GLint, GLint, GLint)
//WRAPV(void , glVertexAttribI3i, GLuint, GLint, GLint, GLint)
//WRAPV(void , glVertexAttribI3ivEXT, GLuint, GLint *)
//WRAPV(void , glVertexAttribI3iv, GLuint, GLint *)
//WRAPV(void , glVertexAttribI3uiEXT, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glVertexAttribI3ui, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glVertexAttribI3uivEXT, GLuint, GLuint *)
//WRAPV(void , glVertexAttribI3uiv, GLuint, GLuint *)
//WRAPV(void , glVertexAttribI4bvEXT, GLuint, GLbyte *)
//WRAPV(void , glVertexAttribI4bv, GLuint, GLbyte *)
//WRAPV(void , glVertexAttribI4iEXT, GLuint, GLint, GLint, GLint, GLint)
//WRAPV(void , glVertexAttribI4i, GLuint, GLint, GLint, GLint, GLint)
//WRAPV(void , glVertexAttribI4ivEXT, GLuint, GLint *)
//WRAPV(void , glVertexAttribI4iv, GLuint, GLint *)
//WRAPV(void , glVertexAttribI4svEXT, GLuint, GLshort *)
//WRAPV(void , glVertexAttribI4sv, GLuint, GLshort *)
//WRAPV(void , glVertexAttribI4ubvEXT, GLuint, GLubyte *)
//WRAPV(void , glVertexAttribI4ubv, GLuint, GLubyte *)
//WRAPV(void , glVertexAttribI4uiEXT, GLuint, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glVertexAttribI4ui, GLuint, GLuint, GLuint, GLuint, GLuint)
//WRAPV(void , glVertexAttribI4uivEXT, GLuint, GLuint *)
//WRAPV(void , glVertexAttribI4uiv, GLuint, GLuint *)
//WRAPV(void , glVertexAttribI4usvEXT, GLuint, GLushort *)
//WRAPV(void , glVertexAttribI4usv, GLuint, GLushort *)
//WRAPV(void , glVertexAttribIFormatNV, GLuint, GLint, GLenum, GLsizei)
//WRAPV(void , glVertexAttribIFormat, GLuint, GLint, GLenum, GLuint)
//WRAPV(void , glVertexAttribIPointerEXT, GLuint, GLint, GLenum, GLsizei, void *)
//WRAPV(void , glVertexAttribIPointer, GLuint, GLint, GLenum, GLsizei, void *)
//WRAPV(void , glVertexAttribL1dEXT, GLuint, GLdouble)
//WRAPV(void , glVertexAttribL1d, GLuint, GLdouble)
//WRAPV(void , glVertexAttribL1dvEXT, GLuint, GLdouble *)
//WRAPV(void , glVertexAttribL1dv, GLuint, GLdouble *)
//WRAPV(void , glVertexAttribL1i64NV, GLuint, GLint64EXT)
//WRAPV(void , glVertexAttribL1i64vNV, GLuint, GLint64EXT *)
//WRAPV(void , glVertexAttribL1ui64ARB, GLuint, GLuint64EXT)
//WRAPV(void , glVertexAttribL1ui64NV, GLuint, GLuint64EXT)
//WRAPV(void , glVertexAttribL1ui64vARB, GLuint, GLuint64EXT *)
//WRAPV(void , glVertexAttribL1ui64vNV, GLuint, GLuint64EXT *)
//WRAPV(void , glVertexAttribL2dEXT, GLuint, GLdouble, GLdouble)
//WRAPV(void , glVertexAttribL2d, GLuint, GLdouble, GLdouble)
//WRAPV(void , glVertexAttribL2dvEXT, GLuint, GLdouble *)
//WRAPV(void , glVertexAttribL2dv, GLuint, GLdouble *)
//WRAPV(void , glVertexAttribL2i64NV, GLuint, GLint64EXT, GLint64EXT)
//WRAPV(void , glVertexAttribL2i64vNV, GLuint, GLint64EXT *)
//WRAPV(void , glVertexAttribL2ui64NV, GLuint, GLuint64EXT, GLuint64EXT)
//WRAPV(void , glVertexAttribL2ui64vNV, GLuint, GLuint64EXT *)
//WRAPV(void , glVertexAttribL3dEXT, GLuint, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glVertexAttribL3d, GLuint, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glVertexAttribL3dvEXT, GLuint, GLdouble *)
//WRAPV(void , glVertexAttribL3dv, GLuint, GLdouble *)
//WRAPV(void , glVertexAttribL3i64NV, GLuint, GLint64EXT, GLint64EXT, GLint64EXT)
//WRAPV(void , glVertexAttribL3i64vNV, GLuint, GLint64EXT *)
//WRAPV(void , glVertexAttribL3ui64NV, GLuint, GLuint64EXT, GLuint64EXT, GLuint64EXT)
//WRAPV(void , glVertexAttribL3ui64vNV, GLuint, GLuint64EXT *)
//WRAPV(void , glVertexAttribL4dEXT, GLuint, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glVertexAttribL4d, GLuint, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glVertexAttribL4dvEXT, GLuint, GLdouble *)
//WRAPV(void , glVertexAttribL4dv, GLuint, GLdouble *)
//WRAPV(void , glVertexAttribL4i64NV, GLuint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT)
//WRAPV(void , glVertexAttribL4i64vNV, GLuint, GLint64EXT *)
//WRAPV(void , glVertexAttribL4ui64NV, GLuint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT)
//WRAPV(void , glVertexAttribL4ui64vNV, GLuint, GLuint64EXT *)
//WRAPV(void , glVertexAttribLFormatNV, GLuint, GLint, GLenum, GLsizei)
//WRAPV(void , glVertexAttribLFormat, GLuint, GLint, GLenum, GLuint)
//WRAPV(void , glVertexAttribLPointerEXT, GLuint, GLint, GLenum, GLsizei, void *)
//WRAPV(void , glVertexAttribLPointer, GLuint, GLint, GLenum, GLsizei, void *)
//WRAPV(void , glVertexAttribP1ui, GLuint, GLenum, GLboolean, GLuint)
//WRAPV(void , glVertexAttribP1uiv, GLuint, GLenum, GLboolean, GLuint *)
//WRAPV(void , glVertexAttribP2ui, GLuint, GLenum, GLboolean, GLuint)
//WRAPV(void , glVertexAttribP2uiv, GLuint, GLenum, GLboolean, GLuint *)
//WRAPV(void , glVertexAttribP3ui, GLuint, GLenum, GLboolean, GLuint)
//WRAPV(void , glVertexAttribP3uiv, GLuint, GLenum, GLboolean, GLuint *)
//WRAPV(void , glVertexAttribP4ui, GLuint, GLenum, GLboolean, GLuint)
//WRAPV(void , glVertexAttribP4uiv, GLuint, GLenum, GLboolean, GLuint *)
//WRAPV(void , glVertexAttribParameteriAMD, GLuint, GLenum, GLint)
//WRAPV(void , glVertexAttribPointerARB, GLuint, GLint, GLenum, GLboolean, GLsizei, void *)
//WRAPV(void , glVertexAttribPointerNV, GLuint, GLint, GLenum, GLsizei, void *)
//WRAPV(void , glVertexAttribs1dvNV, GLuint, GLsizei, GLdouble *)
//WRAPV(void , glVertexAttribs1fvNV, GLuint, GLsizei, GLfloat *)
//WRAPV(void , glVertexAttribs1hvNV, GLuint, GLsizei, GLhalfNV *)
//WRAPV(void , glVertexAttribs1svNV, GLuint, GLsizei, GLshort *)
//WRAPV(void , glVertexAttribs2dvNV, GLuint, GLsizei, GLdouble *)
//WRAPV(void , glVertexAttribs2fvNV, GLuint, GLsizei, GLfloat *)
//WRAPV(void , glVertexAttribs2hvNV, GLuint, GLsizei, GLhalfNV *)
//WRAPV(void , glVertexAttribs2svNV, GLuint, GLsizei, GLshort *)
//WRAPV(void , glVertexAttribs3dvNV, GLuint, GLsizei, GLdouble *)
//WRAPV(void , glVertexAttribs3fvNV, GLuint, GLsizei, GLfloat *)
//WRAPV(void , glVertexAttribs3hvNV, GLuint, GLsizei, GLhalfNV *)
//WRAPV(void , glVertexAttribs3svNV, GLuint, GLsizei, GLshort *)
//WRAPV(void , glVertexAttribs4dvNV, GLuint, GLsizei, GLdouble *)
//WRAPV(void , glVertexAttribs4fvNV, GLuint, GLsizei, GLfloat *)
//WRAPV(void , glVertexAttribs4hvNV, GLuint, GLsizei, GLhalfNV *)
//WRAPV(void , glVertexAttribs4svNV, GLuint, GLsizei, GLshort *)
//WRAPV(void , glVertexAttribs4ubvNV, GLuint, GLsizei, GLubyte *)
//WRAPV(void , glVertexBindingDivisor, GLuint, GLuint)
//WRAPV(void , glVertexBlendARB, GLint)
//WRAPV(void , glVertexBlendEnvfATI, GLenum, GLfloat)
//WRAPV(void , glVertexBlendEnviATI, GLenum, GLint)
//WRAPV(void , glVertexFormatNV, GLint, GLenum, GLsizei)
//WRAPV(void , glVertexP2ui, GLenum, GLuint)
//WRAPV(void , glVertexP2uiv, GLenum, GLuint *)
//WRAPV(void , glVertexP3ui, GLenum, GLuint)
//WRAPV(void , glVertexP3uiv, GLenum, GLuint *)
//WRAPV(void , glVertexP4ui, GLenum, GLuint)
//WRAPV(void , glVertexP4uiv, GLenum, GLuint *)
//WRAPV(void , glVertexPointerEXT, GLint, GLenum, GLsizei, GLsizei, void *)
//WRAPV(void , glVertexPointerListIBM, GLint, GLenum, GLint, void **, GLint)
//WRAPV(void , glVertexPointer, GLint, GLenum, GLsizei, GLvoid *)
//WRAPV(void , glVertexPointervINTEL, GLint, GLenum, void **)
//WRAPV(void , glVertexStream1dATI, GLenum, GLdouble)
//WRAPV(void , glVertexStream1dvATI, GLenum, GLdouble *)
//WRAPV(void , glVertexStream1fATI, GLenum, GLfloat)
//WRAPV(void , glVertexStream1fvATI, GLenum, GLfloat *)
//WRAPV(void , glVertexStream1iATI, GLenum, GLint)
//WRAPV(void , glVertexStream1ivATI, GLenum, GLint *)
//WRAPV(void , glVertexStream1sATI, GLenum, GLshort)
//WRAPV(void , glVertexStream1svATI, GLenum, GLshort *)
//WRAPV(void , glVertexStream2dATI, GLenum, GLdouble, GLdouble)
//WRAPV(void , glVertexStream2dvATI, GLenum, GLdouble *)
//WRAPV(void , glVertexStream2fATI, GLenum, GLfloat, GLfloat)
//WRAPV(void , glVertexStream2fvATI, GLenum, GLfloat *)
//WRAPV(void , glVertexStream2iATI, GLenum, GLint, GLint)
//WRAPV(void , glVertexStream2ivATI, GLenum, GLint *)
//WRAPV(void , glVertexStream2sATI, GLenum, GLshort, GLshort)
//WRAPV(void , glVertexStream2svATI, GLenum, GLshort *)
//WRAPV(void , glVertexStream3dATI, GLenum, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glVertexStream3dvATI, GLenum, GLdouble *)
//WRAPV(void , glVertexStream3fATI, GLenum, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glVertexStream3fvATI, GLenum, GLfloat *)
//WRAPV(void , glVertexStream3iATI, GLenum, GLint, GLint, GLint)
//WRAPV(void , glVertexStream3ivATI, GLenum, GLint *)
//WRAPV(void , glVertexStream3sATI, GLenum, GLshort, GLshort, GLshort)
//WRAPV(void , glVertexStream3svATI, GLenum, GLshort *)
//WRAPV(void , glVertexStream4dATI, GLenum, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glVertexStream4dvATI, GLenum, GLdouble *)
//WRAPV(void , glVertexStream4fATI, GLenum, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glVertexStream4fvATI, GLenum, GLfloat *)
//WRAPV(void , glVertexStream4iATI, GLenum, GLint, GLint, GLint, GLint)
//WRAPV(void , glVertexStream4ivATI, GLenum, GLint *)
//WRAPV(void , glVertexStream4sATI, GLenum, GLshort, GLshort, GLshort, GLshort)
//WRAPV(void , glVertexStream4svATI, GLenum, GLshort *)
//WRAPV(void , glVertexWeightfEXT, GLfloat)
//WRAPV(void , glVertexWeightfvEXT, GLfloat *)
//WRAPV(void , glVertexWeighthNV, GLhalfNV)
//WRAPV(void , glVertexWeighthvNV, GLhalfNV *)
//WRAPV(void , glVertexWeightPointerEXT, GLint, GLenum, GLsizei, void *)
//WRAPV(void , glVideoCaptureStreamParameterdvNV, GLuint, GLuint, GLenum, GLdouble *)
//WRAPV(void , glVideoCaptureStreamParameterfvNV, GLuint, GLuint, GLenum, GLfloat *)
//WRAPV(void , glVideoCaptureStreamParameterivNV, GLuint, GLuint, GLenum, GLint *)
//WRAPV(void , glViewportArrayv, GLuint, GLsizei, GLfloat *)
//WRAPV(void , glViewportIndexedf, GLuint, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glViewportIndexedfv, GLuint, GLfloat *)
//WRAPV(void , glWaitSync, GLsync, GLbitfield, GLuint64)
//WRAPV(void , glWeightbvARB, GLint, GLbyte *)
//WRAPV(void , glWeightdvARB, GLint, GLdouble *)
//WRAPV(void , glWeightfvARB, GLint, GLfloat *)
//WRAPV(void , glWeightivARB, GLint, GLint *)
//WRAPV(void , glWeightPathsNV, GLuint, GLsizei, GLuint *, GLfloat *)
//WRAPV(void , glWeightPointerARB, GLint, GLenum, GLsizei, void *)
//WRAPV(void , glWeightsvARB, GLint, GLshort *)
//WRAPV(void , glWeightubvARB, GLint, GLubyte *)
//WRAPV(void , glWeightuivARB, GLint, GLuint *)
//WRAPV(void , glWeightusvARB, GLint, GLushort *)
//WRAPV(void , glWindowPos2dARB, GLdouble, GLdouble)
//WRAPV(void , glWindowPos2dMESA, GLdouble, GLdouble)
//WRAPV(void , glWindowPos2d, GLdouble, GLdouble)
//WRAPV(void , glWindowPos2dvARB, GLdouble *)
//WRAPV(void , glWindowPos2dvMESA, GLdouble *)
//WRAPV(void , glWindowPos2dv, GLdouble *)
//WRAPV(void , glWindowPos2fARB, GLfloat, GLfloat)
//WRAPV(void , glWindowPos2fMESA, GLfloat, GLfloat)
//WRAPV(void , glWindowPos2f, GLfloat, GLfloat)
//WRAPV(void , glWindowPos2fvARB, GLfloat *)
//WRAPV(void , glWindowPos2fvMESA, GLfloat *)
//WRAPV(void , glWindowPos2fv, GLfloat *)
//WRAPV(void , glWindowPos2iARB, GLint, GLint)
//WRAPV(void , glWindowPos2iMESA, GLint, GLint)
//WRAPV(void , glWindowPos2i, GLint, GLint)
//WRAPV(void , glWindowPos2ivARB, GLint *)
//WRAPV(void , glWindowPos2ivMESA, GLint *)
//WRAPV(void , glWindowPos2iv, GLint *)
//WRAPV(void , glWindowPos2sARB, GLshort, GLshort)
//WRAPV(void , glWindowPos2sMESA, GLshort, GLshort)
//WRAPV(void , glWindowPos2s, GLshort, GLshort)
//WRAPV(void , glWindowPos2svARB, GLshort *)
//WRAPV(void , glWindowPos2svMESA, GLshort *)
//WRAPV(void , glWindowPos2sv, GLshort *)
//WRAPV(void , glWindowPos3dARB, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glWindowPos3dMESA, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glWindowPos3d, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glWindowPos3dvARB, GLdouble *)
//WRAPV(void , glWindowPos3dvMESA, GLdouble *)
//WRAPV(void , glWindowPos3dv, GLdouble *)
//WRAPV(void , glWindowPos3fARB, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glWindowPos3fMESA, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glWindowPos3f, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glWindowPos3fvARB, GLfloat *)
//WRAPV(void , glWindowPos3fvMESA, GLfloat *)
//WRAPV(void , glWindowPos3fv, GLfloat *)
//WRAPV(void , glWindowPos3iARB, GLint, GLint, GLint)
//WRAPV(void , glWindowPos3iMESA, GLint, GLint, GLint)
//WRAPV(void , glWindowPos3i, GLint, GLint, GLint)
//WRAPV(void , glWindowPos3ivARB, GLint *)
//WRAPV(void , glWindowPos3ivMESA, GLint *)
//WRAPV(void , glWindowPos3iv, GLint *)
//WRAPV(void , glWindowPos3sARB, GLshort, GLshort, GLshort)
//WRAPV(void , glWindowPos3sMESA, GLshort, GLshort, GLshort)
//WRAPV(void , glWindowPos3s, GLshort, GLshort, GLshort)
//WRAPV(void , glWindowPos3svARB, GLshort *)
//WRAPV(void , glWindowPos3svMESA, GLshort *)
//WRAPV(void , glWindowPos3sv, GLshort *)
//WRAPV(void , glWindowPos4dMESA, GLdouble, GLdouble, GLdouble, GLdouble)
//WRAPV(void , glWindowPos4dvMESA, GLdouble *)
//WRAPV(void , glWindowPos4fMESA, GLfloat, GLfloat, GLfloat, GLfloat)
//WRAPV(void , glWindowPos4fvMESA, GLfloat *)
//WRAPV(void , glWindowPos4iMESA, GLint, GLint, GLint, GLint)
//WRAPV(void , glWindowPos4ivMESA, GLint *)
//WRAPV(void , glWindowPos4sMESA, GLshort, GLshort, GLshort, GLshort)
//WRAPV(void , glWindowPos4svMESA, GLshort *)
//WRAPV(void , glWriteMaskEXT, GLuint, GLuint, GLenum, GLenum, GLenum, GLenum)
//WRAPV(void , lcong48, short unsigned int *)
//WRAPV(void , perror, char *)
//WRAPV(void , quick_exit, int)
//WRAPV(void , rewind, FILE *)
//WRAPV(void , SDL_AddEventWatch, SDL_EventFilter, void *)
//WRAPV(void , SDL_AddHintCallback, char *, SDL_HintCallback, void *)
//WRAPV(void , SDL_AtomicLock, SDL_SpinLock *)
//WRAPV(void , SDL_AtomicUnlock, SDL_SpinLock *)
//WRAPV(void , SDL_AudioQuit)
//WRAPV(void , SDL_AudioStreamClear, SDL_AudioStream *)
//WRAPV(void , SDL_CalculateGammaRamp, float, Uint16 *)
//WRAPV(void , SDL_ClearError)
//WRAPV(void , SDL_ClearHints)
//WRAPV(void , SDL_ClearQueuedAudio, SDL_AudioDeviceID)
//WRAPV(void , SDL_CloseAudio)
//WRAPV(void , SDL_CloseAudioDevice, SDL_AudioDeviceID)
//WRAPV(void , SDL_DelEventWatch, SDL_EventFilter, void *)
//WRAPV(void , SDL_DelHintCallback, char *, SDL_HintCallback, void *)
//WRAPV(void , SDL_DestroyCond, SDL_cond *)
//WRAPV(void , SDL_DestroyMutex, SDL_mutex *)
//WRAPV(void , SDL_DestroyRenderer, SDL_Renderer *)
//WRAPV(void , SDL_DestroySemaphore, SDL_sem *)
//WRAPV(void , SDL_DestroyTexture, SDL_Texture *)
//WRAPV(void , SDL_DestroyWindow, SDL_Window *)
//WRAPV(void , SDL_DetachThread, SDL_Thread *)
//WRAPV(void , SDL_DisableScreenSaver)
//WRAPV(void , SDL_EnableScreenSaver)
//WRAPV(void , SDL_FilterEvents, SDL_EventFilter, void *)
//WRAPV(void , SDL_FlushEvents, Uint32, Uint32)
//WRAPV(void , SDL_FlushEvent, Uint32)
//WRAPV(void , SDL_FreeAudioStream, SDL_AudioStream *)
//WRAPV(void , SDL_FreeCursor, SDL_Cursor *)
//WRAPV(void , SDL_FreeFormat, SDL_PixelFormat *)
//WRAPV(void , SDL_FreePalette, SDL_Palette *)
//WRAPV(void , SDL_FreeRW, SDL_RWops *)
//WRAPV(void , SDL_free, void *)
//WRAPV(void , SDL_FreeSurface, SDL_Surface *)
//WRAPV(void , SDL_FreeWAV, Uint8 *)
//WRAPV(void , SDL_GameControllerClose, SDL_GameController *)
////WRAPV(void , SDL_GameControllerSetPlayerIndex, SDL_GameController *, int)
//WRAPV(void , SDL_GameControllerUpdate)
//WRAPV(void , SDL_GetClipRect, SDL_Surface *, SDL_Rect *)
//WRAPV(void , SDL_GetMemoryFunctions, SDL_malloc_func *, SDL_calloc_func *, SDL_realloc_func *, SDL_free_func *)
//WRAPV(void , SDL_GetRGBA, Uint32, SDL_PixelFormat *, Uint8 *, Uint8 *, Uint8 *, Uint8 *)
//WRAPV(void , SDL_GetRGB, Uint32, SDL_PixelFormat *, Uint8 *, Uint8 *, Uint8 *)
//WRAPV(void , SDL_GetVersion, SDL_version *)
//WRAPV(void , SDL_GetWindowMaximumSize, SDL_Window *, int *, int *)
//WRAPV(void , SDL_GetWindowMinimumSize, SDL_Window *, int *, int *)
//WRAPV(void , SDL_GetWindowPosition, SDL_Window *, int *, int *)
//WRAPV(void , SDL_GetWindowSize, SDL_Window *, int *, int *)
//WRAPV(void , SDL_GL_DeleteContext, SDL_GLContext)
////WRAPV(void , SDL_GL_GetDrawableSize, SDL_Window *, int *, int *)
//WRAPV(void , SDL_GL_ResetAttributes)
//WRAPV(void , SDL_GL_UnloadLibrary)
//WRAPV(void , SDL_HapticClose, SDL_Haptic *)
//WRAPV(void , SDL_HapticDestroyEffect, SDL_Haptic *, int)
//WRAPV(void , SDL_HideWindow, SDL_Window *)
//WRAPV(void , SDL_JoystickClose, SDL_Joystick *)
//WRAPV(void , SDL_JoystickGetGUIDString, SDL_JoystickGUID, char *, int)
////WRAPV(void , SDL_JoystickSetPlayerIndex, SDL_Joystick *, int)
//WRAPV(void , SDL_JoystickUpdate)
//WRAPV(void , SDL_LockAudio)
//WRAPV(void , SDL_LockAudioDevice, SDL_AudioDeviceID)
//WRAPV(void , SDL_LockJoysticks)
////WRAPV(void , SDL_LockSensors)
//WRAPV(void , SDL_LogGetOutputFunction, SDL_LogOutputFunction *, void **)
//WRAPV(void , SDL_LogResetPriorities)
//WRAPV(void , SDL_LogSetAllPriority, SDL_LogPriority)
//WRAPV(void , SDL_LogSetOutputFunction, SDL_LogOutputFunction, void *)
//WRAPV(void , SDL_LogSetPriority, int, SDL_LogPriority)
//WRAPV(void , SDL_MaximizeWindow, SDL_Window *)
//WRAPV(void , SDL_MemoryBarrierAcquireFunction)
//WRAPV(void , SDL_MemoryBarrierReleaseFunction)
////WRAPV(void , SDL_Metal_DestroyView, SDL_MetalView)
////WRAPV(void , SDL_Metal_GetDrawableSize, SDL_Window *, int *, int *)
//WRAPV(void , SDL_MinimizeWindow, SDL_Window *)
//WRAPV(void , SDL_MixAudioFormat, Uint8 *, Uint8 *, SDL_AudioFormat, Uint32, int)
//WRAPV(void , SDL_MixAudio, Uint8 *, Uint8 *, Uint32, int)
////WRAPV(void , SDL_OnApplicationDidBecomeActive)
////WRAPV(void , SDL_OnApplicationDidEnterBackground)
////WRAPV(void , SDL_OnApplicationDidReceiveMemoryWarning)
////WRAPV(void , SDL_OnApplicationWillEnterForeground)
////WRAPV(void , SDL_OnApplicationWillResignActive)
////WRAPV(void , SDL_OnApplicationWillTerminate)
//WRAPV(void , SDL_PauseAudioDevice, SDL_AudioDeviceID, int)
//WRAPV(void , SDL_PauseAudio, int)
//WRAPV(void , SDL_PumpEvents)
//WRAPV(void , SDL_Quit)
//WRAPV(void , SDL_QuitSubSystem, Uint32)
//WRAPV(void , SDL_RaiseWindow, SDL_Window *)
//WRAPV(void , SDL_RenderGetClipRect, SDL_Renderer *, SDL_Rect *)
//WRAPV(void , SDL_RenderGetLogicalSize, SDL_Renderer *, int *, int *)
//WRAPV(void , SDL_RenderGetScale, SDL_Renderer *, float *, float *)
//WRAPV(void , SDL_RenderGetViewport, SDL_Renderer *, SDL_Rect *)
//WRAPV(void , SDL_RenderPresent, SDL_Renderer *)
//WRAPV(void , SDL_ResetAssertionReport)
//WRAPV(void , SDL_RestoreWindow, SDL_Window *)
//WRAPV(void , SDL_SensorClose, SDL_Sensor *)
//WRAPV(void , SDL_SensorUpdate)
//WRAPV(void , SDL_SetAssertionHandler, SDL_AssertionHandler, void *)
//WRAPV(void , SDL_SetCursor, SDL_Cursor *)
//WRAPV(void , SDL_SetEventFilter, SDL_EventFilter, void *)
//WRAPV(void , SDL_SetMainReady)
//WRAPV(void , SDL_SetModState, SDL_Keymod)
//WRAPV(void , SDL_SetTextInputRect, SDL_Rect *)
//WRAPV(void , SDL_SetWindowBordered, SDL_Window *, SDL_bool)
//WRAPV(void , SDL_SetWindowGrab, SDL_Window *, SDL_bool)
//WRAPV(void , SDL_SetWindowIcon, SDL_Window *, SDL_Surface *)
//WRAPV(void , SDL_SetWindowMaximumSize, SDL_Window *, int, int)
//WRAPV(void , SDL_SetWindowMinimumSize, SDL_Window *, int, int)
//WRAPV(void , SDL_SetWindowPosition, SDL_Window *, int, int)
//WRAPV(void , SDL_SetWindowResizable, SDL_Window *, SDL_bool)
//WRAPV(void , SDL_SetWindowSize, SDL_Window *, int, int)
//WRAPV(void , SDL_SetYUVConversionMode, SDL_YUV_CONVERSION_MODE)
//WRAPV(void , SDL_ShowWindow, SDL_Window *)
//WRAPV(void , SDL_SIMDFree, void *)
//WRAPV(void , SDL_StartTextInput)
//WRAPV(void , SDL_StopTextInput)
//WRAPV(void , SDL_UnionRect, SDL_Rect *, SDL_Rect *, SDL_Rect *)
//WRAPV(void , SDL_UnloadObject, void *)
//WRAPV(void , SDL_UnlockAudio)
//WRAPV(void , SDL_UnlockAudioDevice, SDL_AudioDeviceID)
//WRAPV(void , SDL_UnlockJoysticks)
////WRAPV(void , SDL_UnlockSensors)
//WRAPV(void , SDL_UnlockSurface, SDL_Surface *)
//WRAPV(void , SDL_UnlockTexture, SDL_Texture *)
//WRAPV(void , SDL_VideoQuit)
//WRAPV(void , SDL_WaitThread, SDL_Thread *, int *)
//WRAPV(void , SDL_WarpMouseInWindow, SDL_Window *, int, int)
//WRAPV(void , setbuffer, FILE *, char *, size_t)
//WRAPV(void , setbuf, FILE *, char *)
//WRAPV(void , setlinebuf, FILE *)
//WRAPV(void , srand48, long int)
//WRAPV(void , srandom, unsigned int)
//WRAPV(void , srand, unsigned int)
//WRAP(wchar_t *, SDL_wcsdup, wchar_t *)
////WRAP(wchar_t *, SDL_wcsstr, wchar_t *, wchar_t *)
//WRAP(wchar_t *, wcpcpy, wchar_t *, wchar_t *)
//WRAP(wchar_t *, wcpncpy, wchar_t *, wchar_t *, size_t)
//WRAP(wchar_t *, wcscat, wchar_t *, wchar_t *)
//WRAP(wchar_t *, wcschr, wchar_t *, wchar_t)
//WRAP(wchar_t *, wcscpy, wchar_t *, wchar_t *)
//WRAP(wchar_t *, wcsdup, wchar_t *)
//WRAP(wchar_t *, wcsncat, wchar_t *, wchar_t *, size_t)
//WRAP(wchar_t *, wcsncpy, wchar_t *, wchar_t *, size_t)
//WRAP(wchar_t *, wcspbrk, wchar_t *, wchar_t *)
//WRAP(wchar_t *, wcsrchr, wchar_t *, wchar_t)
//WRAP(wchar_t *, wcsstr, wchar_t *, wchar_t *)
//WRAP(wchar_t *, wcstok, wchar_t *, wchar_t *, wchar_t **)
//WRAP(wchar_t *, wmemchr, wchar_t *, wchar_t, size_t)
//WRAP(wchar_t *, wmemcpy, wchar_t *, wchar_t *, size_t)
//WRAP(wchar_t *, wmemmove, wchar_t *, wchar_t *, size_t)
//WRAP(wchar_t *, wmemset, wchar_t *, wchar_t, size_t)
//WRAP(wint_t , btowc, int)
//WRAP(wint_t , getwchar)
//WRAP(wint_t , putwchar, wchar_t)
//
////WRAP(int , printf, char*)
////WRAP(int , snprintf, char*, int, char*, int )


//WRAPV(void , exit, int)
//WRAP(void *, memmove, void *, void *, size_t)
//WRAPF(double , log2, double)
//WRAP(void *, memset, void *, int, size_t)
//WRAP(int , rand)
//WRAP(GLuint , glCreateShader, GLenum)
//WRAP(size_t , strlen, char *)
//WRAPV(void , glShaderSource, GLuint, GLsizei, GLchar **, GLint *)
//WRAPV(void , glCompileShader, GLuint)
//WRAPV(void , glGetShaderiv, GLuint, GLenum, GLint *)
//WRAPV(void , glGetShaderInfoLog, GLuint, GLsizei, GLsizei *, GLchar *)
//WRAPV(void , glGetProgramInfoLog, GLuint, GLsizei, GLsizei *, GLchar *)
//WRAP(GLuint , glCreateProgram)
//WRAPV(void , glAttachShader, GLuint, GLuint)
//WRAPV(void , glLinkProgram, GLuint)
//WRAPV(void , glGetProgramiv, GLuint, GLenum, GLint *)
//WRAPV(void , glDeleteShader, GLuint)
//WRAP(GLint , glGetAttribLocation, GLuint, GLchar *)
//WRAP(GLint , glGetUniformLocation, GLuint, GLchar *)
//WRAP(GLenum , glGetError)
//WRAPV(void , glValidateProgram, GLuint)
//WRAPF(float , sqrtf, float)
//WRAPF(double , acosh, double)
//WRAPF(double , acos, double)
//WRAPF(double , asinh, double)
//WRAPF(double , asin, double)
//WRAPF(double , atan2, double, double)
//WRAPF(double , atanh, double)
//WRAPF(double , atan, double)
//WRAPF(double , atof, char *)
//WRAPF(double , cbrt, double)
//WRAPF(double , ceil, double)
//WRAPF(double , copysign, double, double)
//WRAPF(double , cosh, double)
//WRAPF(double , cos, double)
//WRAPF(double , drand48)
//WRAPF(double , drem, double, double)
//WRAPF(double , erand48, short unsigned int *)
//WRAPF(double , erfc, double)
//WRAPF(double , erf, double)
//WRAPF(double , exp2, double)
//WRAPF(double , expm1, double)
//WRAPF(double , exp, double)
//WRAPF(double , fabs, double)
//WRAPF(double , fdim, double, double)
//WRAPF(double , floor, double)
//WRAPF(double , fma, double, double, double)
//WRAPF(double , fmax, double, double)
//WRAPF(double , fmin, double, double)
//WRAPF(double , fmod, double, double)
//WRAPF(double , frexp, double, int *)
//WRAPF(double , hypot, double, double)
//WRAPF(double , j0, double)
//WRAPF(double , j1, double)
//WRAPF(double , jn, int, double)
//WRAPF(double , ldexp, double, int)
//WRAPF(double , lgamma_r, double, int *)
//WRAPF(double , lgamma, double)
//WRAPF(double , log10, double)
//WRAPF(double , log1p, double)
//WRAPF(double , logb, double)
//WRAPF(double , log, double)
//WRAPF(double , modf, double, double *)
//WRAPF(double , nan, char *)
//WRAPF(double , nearbyint, double)
//WRAPF(double , nextafter, double, double)
//WRAPF(double , nexttoward, double, long double)
//WRAPF(double , pow, double, double)
//WRAPF(double , remainder, double, double)
//WRAPF(double , remquo, double, double, int *)
//WRAPF(double , rint, double)
//WRAPF(double , round, double)
//WRAPF(double , scalbln, double, long int)
//WRAPF(double , scalbn, double, int)
//WRAPF(double , scalb, double, double)
//WRAPV(void , glGenVertexArrays, GLsizei, GLuint *)
//WRAPV(void , glBindVertexArray, GLuint)
//WRAPV(void , glGenBuffers, GLsizei, GLuint *)
//WRAPV(void , glBindBuffer, GLenum, GLuint)
//WRAPV(void , glBufferData, GLenum, GLsizeiptr, void *, GLenum)
//WRAPV(void , glVertexAttribPointer, GLuint, GLint, GLenum, GLboolean, GLsizei, void *)
//WRAPV(void , glEnableVertexAttribArray, GLuint)
//WRAPV(void , glUseProgram, GLuint)
//WRAPV(void , glUniformMatrix4fv, GLint, GLsizei, GLboolean, GLfloat *)
//WRAPV(void , glUniform4fv, GLint, GLsizei, GLfloat *)
//WRAPV(void , glLineWidth, GLfloat)
//WRAPV(void , glDrawArrays, GLenum, GLint, GLsizei)
//WRAPV(void , glActiveTexture, GLenum)
//WRAPV(void , glBindTexture, GLenum, GLuint)
//WRAPV(void , glTexParameteri, GLenum, GLenum, GLint)
//WRAPV(void , glPixelStorei, GLenum, GLint)
//WRAPV(void , glTexImage2D, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, GLvoid *)
//WRAPV(void , glUniform1i, GLint, GLint)
//WRAPV(void , glGenTextures, GLsizei, GLuint *)
//WRAP(void *, memcpy, void *, void *, size_t)
//WRAPV(void , glViewport, GLint, GLint, GLsizei, GLsizei)
//WRAPV(void , glClearColor, GLclampf, GLclampf, GLclampf, GLclampf)
//WRAPV(void , glClear, GLbitfield)
//WRAP64(Uint64 , SDL_GetPerformanceCounter)
//WRAP64(Uint64 , SDL_GetPerformanceFrequency)
//WRAPV(void , SDL_SetWindowTitle, SDL_Window *, char *)
////WRAPV(void , SDL_Delay, Uint32)
//WRAP(int , SDL_PollEvent, SDL_Event *)
//WRAPV(void , SDL_GL_SwapWindow, SDL_Window *)
//WRAP(int , SDL_Init, Uint32)
//WRAP(char *, SDL_GetError)
//WRAP(SDL_Window *, SDL_CreateWindow, char *, int, int, int, int, Uint32)
//WRAP(SDL_GLContext , SDL_GL_CreateContext, SDL_Window *)
//WRAPV(void , glEnable, GLenum)
//WRAPV(void , glBlendFunc, GLenum, GLenum)
//
//WRAPF(float , acosf, float)
//WRAPF(float , acoshf, float)
//WRAPF(float , asinf, float)
//WRAPF(float , asinhf, float)
//WRAPF(float , atan2f, float, float)
//WRAPF(float , atanf, float)
//WRAPF(float , atanhf, float)
//WRAPF(float , cbrtf, float)
//WRAPF(float , ceilf, float)
//WRAPF(float , copysignf, float, float)
//WRAPF(float , cosf, float)
//WRAPF(float , coshf, float)
//WRAPF(float , dremf, float, float)
//WRAPF(float , erfcf, float)
//WRAPF(float , erff, float)
//WRAPF(float , exp2f, float)
//WRAPF(float , expf, float)
//WRAPF(float , expm1f, float)
//WRAPF(float , fabsf, float)
//WRAPF(float , fdimf, float, float)
//WRAPF(float , floorf, float)
//WRAPF(float , fmaf, float, float, float)
//WRAPF(float , fmaxf, float, float)
//WRAPF(float , fminf, float, float)
//WRAPF(float , fmodf, float, float)
//WRAPF(float , frexpf, float, int *)
//WRAPF(float , hypotf, float, float)
//WRAPF(float , j0f, float)
//WRAPF(float , j1f, float)
//WRAPF(float , jnf, int, float)
//WRAPF(float , ldexpf, float, int)
//WRAPF(float , lgammaf_r, float, int *)
//WRAPF(float , lgammaf, float)
//WRAPF(float , log10f, float)
//WRAPF(float , log1pf, float)
//WRAPF(float , log2f, float)
//WRAPF(float , logbf, float)
//WRAPF(float , logf, float)
//WRAPF(float , modff, float, float *)
//WRAPF(float , nanf, char *)
//WRAPF(float , nearbyintf, float)
//WRAPF(float , nextafterf, float, float)
//WRAPF(float , nexttowardf, float, long double)
//WRAPF(float , powf, float, float)
//WRAPF(float , remainderf, float, float)
//WRAPF(float , remquof, float, float, int *)
//WRAPF(float , rintf, float)
//WRAPF(float , roundf, float)
//WRAPF(float , scalbf, float, float)
//WRAPF(float , scalblnf, float, long int)
//WRAPF(float , scalbnf, float, int)
//WRAPF(float , SDL_acosf, float)
//WRAPF(float , SDL_asinf, float)
//WRAPF(float , SDL_atan2f, float, float)
//WRAPF(float , SDL_atanf, float)
//WRAPF(float , SDL_ceilf, float)
//WRAPF(float , SDL_copysignf, float, float)
//WRAPF(float , SDL_cosf, float)
//WRAPF(float , SDL_expf, float)
//WRAPF(float , SDL_fabsf, float)
//WRAPF(float , SDL_floorf, float)
//WRAPF(float , SDL_fmodf, float, float)
//WRAPF(float , SDL_GetWindowBrightness, SDL_Window *)
//WRAPF(float , SDL_log10f, float)
//WRAPF(float , SDL_logf, float)
//WRAPF(float , SDL_powf, float, float)
//WRAPF(float , SDL_scalbnf, float, int)
//WRAPF(float , SDL_sinf, float)
//WRAPF(float , SDL_sqrtf, float)
//WRAPF(float , SDL_tanf, float)
//
//
//WRAP(char *, stpcpy, char *, char *)
//WRAP(char *, stpncpy, char *, char *, size_t)
//WRAP(char *, strcat, char *, char *)
//WRAP(char *, strchr, char *, int)
//WRAP(char *, strcpy, char *, char *)
//WRAP(char *, strdup, char *)
//WRAP(char *, strerror_l, int, locale_t)
//WRAP(char *, strerror, int)
//WRAP(char *, strncat, char *, char *, size_t)
//WRAP(char *, strncpy, char *, char *, size_t)
//WRAP(char *, strndup, char *, size_t)
//WRAP(char *, strpbrk, char *, char *)
//WRAP(char *, strrchr, char *, int)
//WRAP(char *, strsep, char **, char *)
//WRAP(char *, strsignal, int)
//WRAP(char *, strstr, char *, char *)
//WRAP(char *, strtok_r, char *, char *, char **)
//WRAP(char *, strtok, char *, char *)
//WRAPF(double , SDL_acos, double)
//WRAPF(double , SDL_asin, double)
//WRAPF(double , SDL_atan2, double, double)
//WRAPF(double , SDL_atan, double)
//WRAPF(double , SDL_atof, char *)
//WRAPF(double , SDL_ceil, double)
//WRAPF(double , SDL_copysign, double, double)
//WRAPF(double , SDL_cos, double)
//WRAPF(double , SDL_exp, double)
//WRAPF(double , SDL_fabs, double)
//WRAPF(double , SDL_floor, double)
//WRAPF(double , SDL_fmod, double, double)
//WRAPF(double , SDL_log10, double)
//WRAPF(double , SDL_log, double)
//WRAPF(double , SDL_pow, double, double)
//WRAPF(double , SDL_scalbn, double, int)
//WRAPF(double , SDL_sin, double)
//WRAPF(double , SDL_sqrt, double)
//WRAPF(double , SDL_strtod, char *, char **)
//WRAPF(double , SDL_tan, double)
//WRAPF(double , significand, double)
//WRAPF(double , sinh, double)
//WRAPF(double , sin, double)
//WRAPF(double , sqrt, double)
//WRAPF(double , strtod, char *, char **)
//WRAPF(double , tanh, double)
//WRAPF(double , tan, double)
//WRAPF(double , tgamma, double)
//WRAPF(double , trunc, double)
//WRAPF(double , wcstod, wchar_t *, wchar_t **)
//WRAPF(double , y0, double)
//WRAPF(double , y1, double)
//WRAPF(double , yn, int, double)
//WRAPF(float , significandf, float)
//WRAPF(float , sinf, float)
//WRAPF(float , sinhf, float)
//WRAPF(float , strtof, char *, char **)
//WRAPF(float , tanf, float)
//WRAPF(float , tanhf, float)
//WRAPF(float , tgammaf, float)
//WRAPF(float , truncf, float)
//WRAPF(float , wcstof, wchar_t *, wchar_t **)
//WRAPF(float , y0f, float)
//WRAPF(float , y1f, float)
//WRAPF(float , ynf, int, float)
//
//WRAP(void *, SDL_calloc, size_t, size_t)
//WRAP(void *, SDL_realloc, void *, size_t)
//WRAP(void *, SDL_malloc, size_t)
//WRAP(void *, SDL_memcpy, void *, void *, size_t)
//WRAP(void *, SDL_memmove, void *, void *, size_t)
//WRAP(void *, SDL_memset, void *, int, size_t)
//WRAP(void *, realloc, void *, size_t)
//WRAP(void *, alloca, size_t)
//WRAP(void *, calloc, size_t, size_t)
//WRAP(void *, malloc, size_t)
//WRAP(void *, memccpy, void *, void *, int, size_t)
//WRAP(void *, memchr, void *, int, size_t)
//
//WRAP(time_t, time, time_t*)
//WRAP(struct tm* , gmtime, time_t*)
//WRAP(size_t, strftime, char*, size_t, char*, struct tm*);
//WRAP(time_t, mktime, struct tm*)


//void X86RUNNERSYSCALLS_SDL_GetPlatform() {  R_EAX = (u32) SDL_GetPlatform();}
//void X86RUNNERSYSCALLS_select() {  R_EAX = (u32) select(*(int *) (R_ESP + sizeof(u32)),*( fd_set * *) (R_ESP + sizeof(u32) + sizeof(int)),*( fd_set * *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( fd_set *)),*( fd_set * *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( fd_set *) + sizeof( fd_set *)),*( struct timeval * *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( fd_set *) + sizeof( fd_set *) + sizeof( fd_set *)));}
//void X86RUNNERSYSCALLS_remove() {  R_EAX = (u32) remove(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_rename() {  R_EAX = (u32) rename(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_renameat() {  R_EAX = (u32) renameat(*(int *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(int)),*( int *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( char *)),*( char * *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( char *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_tmpfile() {  R_EAX = (u32) tmpfile();}
//void X86RUNNERSYSCALLS_tmpnam() {  R_EAX = (u32) tmpnam(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_tmpnam_r() {  R_EAX = (u32) tmpnam_r(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_tempnam() {  R_EAX = (u32) tempnam(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_fclose() {  R_EAX = (u32) fclose(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_fflush() {  R_EAX = (u32) fflush(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_fflush_unlocked() {  R_EAX = (u32) fflush_unlocked(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_fopen() {  R_EAX = (u32) fopen(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_freopen() {  R_EAX = (u32) freopen(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( FILE * *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_fdopen() {  R_EAX = (u32) fdopen(*(int *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_fmemopen() {  R_EAX = (u32) fmemopen(*(void * *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *)),*( char * *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_open_memstream() {  R_EAX = (u32) open_memstream(*(char ** *) (R_ESP + sizeof(u32)),*( size_t * *) (R_ESP + sizeof(u32) + sizeof(char **)));}
//void X86RUNNERSYSCALLS_setbuf() {  R_EAX = (u32) setbuf(*(FILE * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(FILE *)));}
//void X86RUNNERSYSCALLS_setvbuf() {  R_EAX = (u32) setvbuf(*(FILE * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(FILE *)),*( int *) (R_ESP + sizeof(u32) + sizeof(FILE *) + sizeof( char *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(FILE *) + sizeof( char *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_setbuffer() {  R_EAX = (u32) setbuffer(*(FILE * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(FILE *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(FILE *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_setlinebuf() {  R_EAX = (u32) setlinebuf(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_fprintf() {  R_EAX = (u32) fprintf(*(FILE * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(FILE *)),(char*) (R_ESP + sizeof(u32) + sizeof(FILE *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_printf() {  R_EAX = (u32) printf(*(char * *) (R_ESP + sizeof(u32)),(char*) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_sprintf() {  R_EAX = (u32) sprintf(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),(char*) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_snprintf() {  R_EAX = (u32) snprintf(*(char * *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( size_t)),(char*) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( size_t) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_dprintf() {  R_EAX = (u32) dprintf(*(int *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(int)),(char*) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_fscanf() {  R_EAX = (u32) fscanf(*(FILE * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(FILE *)),(char*) (R_ESP + sizeof(u32) + sizeof(FILE *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_scanf() {  R_EAX = (u32) scanf(*(char * *) (R_ESP + sizeof(u32)),(char*) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_sscanf() {  R_EAX = (u32) sscanf(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),(char*) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_fgetc() {  R_EAX = (u32) fgetc(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_getc() {  R_EAX = (u32) getc(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_getchar() {  R_EAX = (u32) getchar();}
//void X86RUNNERSYSCALLS_getc_unlocked() {  R_EAX = (u32) getc_unlocked(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_getchar_unlocked() {  R_EAX = (u32) getchar_unlocked();}
//void X86RUNNERSYSCALLS_fgetc_unlocked() {  R_EAX = (u32) fgetc_unlocked(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_fputc() {  R_EAX = (u32) fputc(*(int *) (R_ESP + sizeof(u32)),*( FILE * *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_putc() {  R_EAX = (u32) putc(*(int *) (R_ESP + sizeof(u32)),*( FILE * *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_putchar() {  R_EAX = (u32) putchar(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_fputc_unlocked() {  R_EAX = (u32) fputc_unlocked(*(int *) (R_ESP + sizeof(u32)),*( FILE * *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_putc_unlocked() {  R_EAX = (u32) putc_unlocked(*(int *) (R_ESP + sizeof(u32)),*( FILE * *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_putchar_unlocked() {  R_EAX = (u32) putchar_unlocked(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_getw() {  R_EAX = (u32) getw(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_putw() {  R_EAX = (u32) putw(*(int *) (R_ESP + sizeof(u32)),*( FILE * *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_fgets() {  R_EAX = (u32) fgets(*(char * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *)),*( FILE * *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_fputs() {  R_EAX = (u32) fputs(*(char * *) (R_ESP + sizeof(u32)),*( FILE * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_puts() {  R_EAX = (u32) puts(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_ungetc() {  R_EAX = (u32) ungetc(*(int *) (R_ESP + sizeof(u32)),*( FILE * *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_fread() {  R_EAX = (u32) fread(*(void * *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( size_t)),*( FILE * *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( size_t) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_fwrite() {  R_EAX = (u32) fwrite(*(void * *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( size_t)),*( FILE * *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( size_t) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_fread_unlocked() {  R_EAX = (u32) fread_unlocked(*(void * *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( size_t)),*( FILE * *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( size_t) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_fwrite_unlocked() {  R_EAX = (u32) fwrite_unlocked(*(void * *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( size_t)),*( FILE * *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( size_t) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_fseek() {  R_EAX = (u32) fseek(*(FILE * *) (R_ESP + sizeof(u32)),*( long int *) (R_ESP + sizeof(u32) + sizeof(FILE *)),*( int *) (R_ESP + sizeof(u32) + sizeof(FILE *) + sizeof( long int)));}
//void X86RUNNERSYSCALLS_ftell() {  R_EAX = (u32) ftell(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_rewind() {  R_EAX = (u32) rewind(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_fgetpos() {  R_EAX = (u32) fgetpos(*(FILE * *) (R_ESP + sizeof(u32)),*( fpos_t * *) (R_ESP + sizeof(u32) + sizeof(FILE *)));}
//void X86RUNNERSYSCALLS_fsetpos() {  R_EAX = (u32) fsetpos(*(FILE * *) (R_ESP + sizeof(u32)),*( fpos_t * *) (R_ESP + sizeof(u32) + sizeof(FILE *)));}
//void X86RUNNERSYSCALLS_clearerr() {  R_EAX = (u32) clearerr(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_feof() {  R_EAX = (u32) feof(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_ferror() {  R_EAX = (u32) ferror(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_clearerr_unlocked() {  R_EAX = (u32) clearerr_unlocked(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_feof_unlocked() {  R_EAX = (u32) feof_unlocked(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_ferror_unlocked() {  R_EAX = (u32) ferror_unlocked(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_perror() {  R_EAX = (u32) perror(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_fileno() {  R_EAX = (u32) fileno(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_fileno_unlocked() {  R_EAX = (u32) fileno_unlocked(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_popen() {  R_EAX = (u32) popen(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_pclose() {  R_EAX = (u32) pclose(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_ctermid() {  R_EAX = (u32) ctermid(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_flockfile() {  R_EAX = (u32) flockfile(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_ftrylockfile() {  R_EAX = (u32) ftrylockfile(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_funlockfile() {  R_EAX = (u32) funlockfile(*(FILE * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_atof() {  R_EAX = (u32) atof(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_atoi() {  R_EAX = (u32) atoi(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_atol() {  R_EAX = (u32) atol(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_atoll() {  R_EAX = (u32) atoll(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_strtod() {  R_EAX = (u32) strtod(*(char * *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_strtof() {  float  ret = strtof(*(char * *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char *)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_strtold() {  R_EAX = (u32) strtold(*(char * *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_strtol() {  R_EAX = (u32) strtol(*(char * *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char *)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char **)));}
//void X86RUNNERSYSCALLS_strtoul() {  R_EAX = (u32) strtoul(*(char * *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char *)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char **)));}
//void X86RUNNERSYSCALLS_strtoq() {  R_EAX = (u32) strtoq(*(char * *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char *)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char **)));}
//void X86RUNNERSYSCALLS_strtouq() {  R_EAX = (u32) strtouq(*(char * *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char *)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char **)));}
//void X86RUNNERSYSCALLS_strtoll() {  R_EAX = (u32) strtoll(*(char * *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char *)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char **)));}
//void X86RUNNERSYSCALLS_strtoull() {  R_EAX = (u32) strtoull(*(char * *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char *)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char **)));}
//void X86RUNNERSYSCALLS_l64a() {  R_EAX = (u32) l64a(*(long int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_a64l() {  R_EAX = (u32) a64l(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_random() {  R_EAX = (u32) random();}
//void X86RUNNERSYSCALLS_srandom() {  R_EAX = (u32) srandom(*(unsigned int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_initstate() {  R_EAX = (u32) initstate(*(unsigned int *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(unsigned int)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(unsigned int) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_setstate() {  R_EAX = (u32) setstate(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_random_r() {  R_EAX = (u32) random_r(*(struct random_data * *) (R_ESP + sizeof(u32)),*( int32_t * *) (R_ESP + sizeof(u32) + sizeof(struct random_data *)));}
//void X86RUNNERSYSCALLS_srandom_r() {  R_EAX = (u32) srandom_r(*(unsigned int *) (R_ESP + sizeof(u32)),*( struct random_data * *) (R_ESP + sizeof(u32) + sizeof(unsigned int)));}
//void X86RUNNERSYSCALLS_initstate_r() {  R_EAX = (u32) initstate_r(*(unsigned int *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(unsigned int)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(unsigned int) + sizeof( char *)),*( struct random_data * *) (R_ESP + sizeof(u32) + sizeof(unsigned int) + sizeof( char *) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_setstate_r() {  R_EAX = (u32) setstate_r(*(char * *) (R_ESP + sizeof(u32)),*( struct random_data * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_rand() {  R_EAX = (u32) rand();}
//void X86RUNNERSYSCALLS_srand() {  R_EAX = (u32) srand(*(unsigned int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_rand_r() {  R_EAX = (u32) rand_r(*(unsigned int * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_drand48() {  R_EAX = (u32) drand48();}
//void X86RUNNERSYSCALLS_erand48() {  R_EAX = (u32) erand48(*(short unsigned int * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_lrand48() {  R_EAX = (u32) lrand48();}
//void X86RUNNERSYSCALLS_nrand48() {  R_EAX = (u32) nrand48(*(short unsigned int * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_mrand48() {  R_EAX = (u32) mrand48();}
//void X86RUNNERSYSCALLS_jrand48() {  R_EAX = (u32) jrand48(*(short unsigned int * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_srand48() {  R_EAX = (u32) srand48(*(long int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_seed48() {  R_EAX = (u32) seed48(*(short unsigned int * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_lcong48() {  R_EAX = (u32) lcong48(*(short unsigned int * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_drand48_r() {  R_EAX = (u32) drand48_r(*(struct drand48_data * *) (R_ESP + sizeof(u32)),*( double * *) (R_ESP + sizeof(u32) + sizeof(struct drand48_data *)));}
//void X86RUNNERSYSCALLS_erand48_r() {  R_EAX = (u32) erand48_r(*(short unsigned int * *) (R_ESP + sizeof(u32)),*( struct drand48_data * *) (R_ESP + sizeof(u32) + sizeof(short unsigned int *)),*( double * *) (R_ESP + sizeof(u32) + sizeof(short unsigned int *) + sizeof( struct drand48_data *)));}
//void X86RUNNERSYSCALLS_lrand48_r() {  R_EAX = (u32) lrand48_r(*(struct drand48_data * *) (R_ESP + sizeof(u32)),*( long int * *) (R_ESP + sizeof(u32) + sizeof(struct drand48_data *)));}
//void X86RUNNERSYSCALLS_nrand48_r() {  R_EAX = (u32) nrand48_r(*(short unsigned int * *) (R_ESP + sizeof(u32)),*( struct drand48_data * *) (R_ESP + sizeof(u32) + sizeof(short unsigned int *)),*( long int * *) (R_ESP + sizeof(u32) + sizeof(short unsigned int *) + sizeof( struct drand48_data *)));}
//void X86RUNNERSYSCALLS_mrand48_r() {  R_EAX = (u32) mrand48_r(*(struct drand48_data * *) (R_ESP + sizeof(u32)),*( long int * *) (R_ESP + sizeof(u32) + sizeof(struct drand48_data *)));}
//void X86RUNNERSYSCALLS_jrand48_r() {  R_EAX = (u32) jrand48_r(*(short unsigned int * *) (R_ESP + sizeof(u32)),*( struct drand48_data * *) (R_ESP + sizeof(u32) + sizeof(short unsigned int *)),*( long int * *) (R_ESP + sizeof(u32) + sizeof(short unsigned int *) + sizeof( struct drand48_data *)));}
//void X86RUNNERSYSCALLS_srand48_r() {  R_EAX = (u32) srand48_r(*(long int *) (R_ESP + sizeof(u32)),*( struct drand48_data * *) (R_ESP + sizeof(u32) + sizeof(long int)));}
//void X86RUNNERSYSCALLS_seed48_r() {  R_EAX = (u32) seed48_r(*(short unsigned int * *) (R_ESP + sizeof(u32)),*( struct drand48_data * *) (R_ESP + sizeof(u32) + sizeof(short unsigned int *)));}
//void X86RUNNERSYSCALLS_lcong48_r() {  R_EAX = (u32) lcong48_r(*(short unsigned int * *) (R_ESP + sizeof(u32)),*( struct drand48_data * *) (R_ESP + sizeof(u32) + sizeof(short unsigned int *)));}
//void X86RUNNERSYSCALLS_malloc() {  R_EAX = (u32) malloc(*(size_t *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_calloc() {  R_EAX = (u32) calloc(*(size_t *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(size_t)));}
//void X86RUNNERSYSCALLS_realloc() {  R_EAX = (u32) realloc(*(void * *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *)));}
//void X86RUNNERSYSCALLS_reallocarray() {  R_EAX = (u32) reallocarray(*(void * *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_free() {  R_EAX = (u32) free(*(void * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_alloca() {  R_EAX = (u32) alloca(*(size_t *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_valloc() {  R_EAX = (u32) valloc(*(size_t *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_posix_memalign() {  R_EAX = (u32) posix_memalign(*(void ** *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void **)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void **) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_aligned_alloc() {  R_EAX = (u32) aligned_alloc(*(size_t *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(size_t)));}
//void X86RUNNERSYSCALLS_abort() {  R_EAX = (u32) abort();}
//void X86RUNNERSYSCALLS_exit() {  R_EAX = (u32) exit(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_quick_exit() {  R_EAX = (u32) quick_exit(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS__Exit() {  R_EAX = (u32) _Exit(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_getenv() {  R_EAX = (u32) getenv(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_putenv() {  R_EAX = (u32) putenv(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_setenv() {  R_EAX = (u32) setenv(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_unsetenv() {  R_EAX = (u32) unsetenv(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_clearenv() {  R_EAX = (u32) clearenv();}
//void X86RUNNERSYSCALLS_mktemp() {  R_EAX = (u32) mktemp(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_mkstemp() {  R_EAX = (u32) mkstemp(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_mkstemps() {  R_EAX = (u32) mkstemps(*(char * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_mkdtemp() {  R_EAX = (u32) mkdtemp(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_system() {  R_EAX = (u32) system(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_realpath() {  R_EAX = (u32) realpath(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_abs() {  R_EAX = (u32) abs(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_labs() {  R_EAX = (u32) labs(*(long int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_llabs() {  R_EAX = (u32) llabs(*(long long int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_div() {  R_EAX = (u32) div(*(int *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_ldiv() {  R_EAX = (u32) ldiv(*(long int *) (R_ESP + sizeof(u32)),*( long int *) (R_ESP + sizeof(u32) + sizeof(long int)));}
//void X86RUNNERSYSCALLS_lldiv() {  R_EAX = (u32) lldiv(*(long long int *) (R_ESP + sizeof(u32)),*( long long int *) (R_ESP + sizeof(u32) + sizeof(long long int)));}
//void X86RUNNERSYSCALLS_ecvt() {  R_EAX = (u32) ecvt(*(double *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(double)),*( int * *) (R_ESP + sizeof(u32) + sizeof(double) + sizeof( int)),*( int * *) (R_ESP + sizeof(u32) + sizeof(double) + sizeof( int) + sizeof( int *)));}
//void X86RUNNERSYSCALLS_fcvt() {  R_EAX = (u32) fcvt(*(double *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(double)),*( int * *) (R_ESP + sizeof(u32) + sizeof(double) + sizeof( int)),*( int * *) (R_ESP + sizeof(u32) + sizeof(double) + sizeof( int) + sizeof( int *)));}
//void X86RUNNERSYSCALLS_gcvt() {  R_EAX = (u32) gcvt(*(double *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(double)),*( char * *) (R_ESP + sizeof(u32) + sizeof(double) + sizeof( int)));}
//void X86RUNNERSYSCALLS_qecvt() {  R_EAX = (u32) qecvt(*(long double *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(long double)),*( int * *) (R_ESP + sizeof(u32) + sizeof(long double) + sizeof( int)),*( int * *) (R_ESP + sizeof(u32) + sizeof(long double) + sizeof( int) + sizeof( int *)));}
//void X86RUNNERSYSCALLS_qfcvt() {  R_EAX = (u32) qfcvt(*(long double *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(long double)),*( int * *) (R_ESP + sizeof(u32) + sizeof(long double) + sizeof( int)),*( int * *) (R_ESP + sizeof(u32) + sizeof(long double) + sizeof( int) + sizeof( int *)));}
//void X86RUNNERSYSCALLS_qgcvt() {  R_EAX = (u32) qgcvt(*(long double *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(long double)),*( char * *) (R_ESP + sizeof(u32) + sizeof(long double) + sizeof( int)));}
//void X86RUNNERSYSCALLS_ecvt_r() {  R_EAX = (u32) ecvt_r(*(double *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(double)),*( int * *) (R_ESP + sizeof(u32) + sizeof(double) + sizeof( int)),*( int * *) (R_ESP + sizeof(u32) + sizeof(double) + sizeof( int) + sizeof( int *)),*( char * *) (R_ESP + sizeof(u32) + sizeof(double) + sizeof( int) + sizeof( int *) + sizeof( int *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(double) + sizeof( int) + sizeof( int *) + sizeof( int *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_fcvt_r() {  R_EAX = (u32) fcvt_r(*(double *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(double)),*( int * *) (R_ESP + sizeof(u32) + sizeof(double) + sizeof( int)),*( int * *) (R_ESP + sizeof(u32) + sizeof(double) + sizeof( int) + sizeof( int *)),*( char * *) (R_ESP + sizeof(u32) + sizeof(double) + sizeof( int) + sizeof( int *) + sizeof( int *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(double) + sizeof( int) + sizeof( int *) + sizeof( int *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_qecvt_r() {  R_EAX = (u32) qecvt_r(*(long double *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(long double)),*( int * *) (R_ESP + sizeof(u32) + sizeof(long double) + sizeof( int)),*( int * *) (R_ESP + sizeof(u32) + sizeof(long double) + sizeof( int) + sizeof( int *)),*( char * *) (R_ESP + sizeof(u32) + sizeof(long double) + sizeof( int) + sizeof( int *) + sizeof( int *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(long double) + sizeof( int) + sizeof( int *) + sizeof( int *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_qfcvt_r() {  R_EAX = (u32) qfcvt_r(*(long double *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(long double)),*( int * *) (R_ESP + sizeof(u32) + sizeof(long double) + sizeof( int)),*( int * *) (R_ESP + sizeof(u32) + sizeof(long double) + sizeof( int) + sizeof( int *)),*( char * *) (R_ESP + sizeof(u32) + sizeof(long double) + sizeof( int) + sizeof( int *) + sizeof( int *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(long double) + sizeof( int) + sizeof( int *) + sizeof( int *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_mblen() {  R_EAX = (u32) mblen(*(char * *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_mbtowc() {  R_EAX = (u32) mbtowc(*(wchar_t * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_wctomb() {  R_EAX = (u32) wctomb(*(char * *) (R_ESP + sizeof(u32)),*( wchar_t *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_mbstowcs() {  R_EAX = (u32) mbstowcs(*(wchar_t * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_wcstombs() {  R_EAX = (u32) wcstombs(*(char * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_rpmatch() {  R_EAX = (u32) rpmatch(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_getsubopt() {  R_EAX = (u32) getsubopt(*(char ** *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char **)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char **) + sizeof( char **)));}
//void X86RUNNERSYSCALLS_getloadavg() {  R_EAX = (u32) getloadavg(*(double * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(double *)));}
//void X86RUNNERSYSCALLS_memcpy() {  R_EAX = (u32) memcpy(*(void * *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(void *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( void *)));}
//void X86RUNNERSYSCALLS_memmove() {  R_EAX = (u32) memmove(*(void * *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(void *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( void *)));}
//void X86RUNNERSYSCALLS_memccpy() {  R_EAX = (u32) memccpy(*(void * *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(void *)),*( int *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( void *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( void *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_memset() {  R_EAX = (u32) memset(*(void * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(void *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_memcmp() {  R_EAX = (u32) memcmp(*(void * *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(void *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( void *)));}
//void X86RUNNERSYSCALLS_memchr() {  R_EAX = (u32) memchr(*(void * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(void *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_strcpy() {  R_EAX = (u32) strcpy(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_strncpy() {  R_EAX = (u32) strncpy(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_strcat() {  R_EAX = (u32) strcat(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_strncat() {  R_EAX = (u32) strncat(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_strcmp() {  R_EAX = (u32) strcmp(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_strncmp() {  R_EAX = (u32) strncmp(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_strcoll() {  R_EAX = (u32) strcoll(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_strxfrm() {  R_EAX = (u32) strxfrm(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_strcoll_l() {  R_EAX = (u32) strcoll_l(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_strxfrm_l() {  R_EAX = (u32) strxfrm_l(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_strdup() {  R_EAX = (u32) strdup(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_strndup() {  R_EAX = (u32) strndup(*(char * *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_strchr() {  R_EAX = (u32) strchr(*(char * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_strrchr() {  R_EAX = (u32) strrchr(*(char * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_strcspn() {  R_EAX = (u32) strcspn(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_strspn() {  R_EAX = (u32) strspn(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_strpbrk() {  R_EAX = (u32) strpbrk(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_strstr() {  R_EAX = (u32) strstr(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_strtok() {  R_EAX = (u32) strtok(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_strtok_r() {  R_EAX = (u32) strtok_r(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_strlen() {  R_EAX = (u32) strlen(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_strnlen() {  R_EAX = (u32) strnlen(*(char * *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_strerror() {  R_EAX = (u32) strerror(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_strerror_r() {  R_EAX = (u32) strerror_r(*(int *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(int)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_strerror_l() {  R_EAX = (u32) strerror_l(*(int *) (R_ESP + sizeof(u32)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_bcmp() {  R_EAX = (u32) bcmp(*(void * *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(void *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( void *)));}
//void X86RUNNERSYSCALLS_bcopy() {  R_EAX = (u32) bcopy(*(void * *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(void *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( void *)));}
//void X86RUNNERSYSCALLS_bzero() {  R_EAX = (u32) bzero(*(void * *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *)));}
//void X86RUNNERSYSCALLS_index() {  R_EAX = (u32) index(*(char * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_rindex() {  R_EAX = (u32) rindex(*(char * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_ffs() {  R_EAX = (u32) ffs(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_ffsl() {  R_EAX = (u32) ffsl(*(long int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_ffsll() {  R_EAX = (u32) ffsll(*(long long int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_strcasecmp() {  R_EAX = (u32) strcasecmp(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_strncasecmp() {  R_EAX = (u32) strncasecmp(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_strcasecmp_l() {  R_EAX = (u32) strcasecmp_l(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_strncasecmp_l() {  R_EAX = (u32) strncasecmp_l(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_explicit_bzero() {  R_EAX = (u32) explicit_bzero(*(void * *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *)));}
//void X86RUNNERSYSCALLS_strsep() {  R_EAX = (u32) strsep(*(char ** *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char **)));}
//void X86RUNNERSYSCALLS_strsignal() {  R_EAX = (u32) strsignal(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_stpcpy() {  R_EAX = (u32) stpcpy(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_stpncpy() {  R_EAX = (u32) stpncpy(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_wcscpy() {  R_EAX = (u32) wcscpy(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_wcsncpy() {  R_EAX = (u32) wcsncpy(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_wcscat() {  R_EAX = (u32) wcscat(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_wcsncat() {  R_EAX = (u32) wcsncat(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_wcscmp() {  R_EAX = (u32) wcscmp(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_wcsncmp() {  R_EAX = (u32) wcsncmp(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_wcscasecmp() {  R_EAX = (u32) wcscasecmp(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_wcsncasecmp() {  R_EAX = (u32) wcsncasecmp(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_wcscasecmp_l() {  R_EAX = (u32) wcscasecmp_l(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_wcsncasecmp_l() {  R_EAX = (u32) wcsncasecmp_l(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_wcscoll() {  R_EAX = (u32) wcscoll(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_wcsxfrm() {  R_EAX = (u32) wcsxfrm(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_wcscoll_l() {  R_EAX = (u32) wcscoll_l(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_wcsxfrm_l() {  R_EAX = (u32) wcsxfrm_l(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_wcsdup() {  R_EAX = (u32) wcsdup(*(wchar_t * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_wcschr() {  R_EAX = (u32) wcschr(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_wcsrchr() {  R_EAX = (u32) wcsrchr(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_wcscspn() {  R_EAX = (u32) wcscspn(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_wcsspn() {  R_EAX = (u32) wcsspn(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_wcspbrk() {  R_EAX = (u32) wcspbrk(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_wcsstr() {  R_EAX = (u32) wcsstr(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_wcstok() {  R_EAX = (u32) wcstok(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( wchar_t ** *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_wcslen() {  R_EAX = (u32) wcslen(*(wchar_t * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_wcsnlen() {  R_EAX = (u32) wcsnlen(*(wchar_t * *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_wmemchr() {  R_EAX = (u32) wmemchr(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t)));}
//void X86RUNNERSYSCALLS_wmemcmp() {  R_EAX = (u32) wmemcmp(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_wmemcpy() {  R_EAX = (u32) wmemcpy(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_wmemmove() {  R_EAX = (u32) wmemmove(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_wmemset() {  R_EAX = (u32) wmemset(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t)));}
//void X86RUNNERSYSCALLS_btowc() {  R_EAX = (u32) btowc(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_wctob() {  R_EAX = (u32) wctob(*(wint_t *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_mbsinit() {  R_EAX = (u32) mbsinit(*(mbstate_t * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_mbrtowc() {  R_EAX = (u32) mbrtowc(*(wchar_t * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( char *)),*( mbstate_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( char *) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_wcrtomb() {  R_EAX = (u32) wcrtomb(*(char * *) (R_ESP + sizeof(u32)),*( wchar_t *) (R_ESP + sizeof(u32) + sizeof(char *)),*( mbstate_t * *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( wchar_t)));}
//void X86RUNNERSYSCALLS_mbrlen() {  R_EAX = (u32) mbrlen(*(char * *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *)),*( mbstate_t * *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_mbsrtowcs() {  R_EAX = (u32) mbsrtowcs(*(wchar_t * *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( char **)),*( mbstate_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( char **) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_wcsrtombs() {  R_EAX = (u32) wcsrtombs(*(char * *) (R_ESP + sizeof(u32)),*( wchar_t ** *) (R_ESP + sizeof(u32) + sizeof(char *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( wchar_t **)),*( mbstate_t * *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( wchar_t **) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_mbsnrtowcs() {  R_EAX = (u32) mbsnrtowcs(*(wchar_t * *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( char **)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( char **) + sizeof( size_t)),*( mbstate_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( char **) + sizeof( size_t) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_wcsnrtombs() {  R_EAX = (u32) wcsnrtombs(*(char * *) (R_ESP + sizeof(u32)),*( wchar_t ** *) (R_ESP + sizeof(u32) + sizeof(char *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( wchar_t **)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( wchar_t **) + sizeof( size_t)),*( mbstate_t * *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( wchar_t **) + sizeof( size_t) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_wcstod() {  R_EAX = (u32) wcstod(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t ** *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_wcstof() {  float  ret = wcstof(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t ** *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_wcstold() {  R_EAX = (u32) wcstold(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t ** *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_wcstol() {  R_EAX = (u32) wcstol(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t ** *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( int *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t **)));}
//void X86RUNNERSYSCALLS_wcstoul() {  R_EAX = (u32) wcstoul(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t ** *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( int *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t **)));}
//void X86RUNNERSYSCALLS_wcstoll() {  R_EAX = (u32) wcstoll(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t ** *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( int *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t **)));}
//void X86RUNNERSYSCALLS_wcstoull() {  R_EAX = (u32) wcstoull(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t ** *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( int *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t **)));}
//void X86RUNNERSYSCALLS_wcpcpy() {  R_EAX = (u32) wcpcpy(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_wcpncpy() {  R_EAX = (u32) wcpncpy(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_wprintf() {  R_EAX = (u32) wprintf(*(wchar_t * *) (R_ESP + sizeof(u32)),(char*) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_swprintf() {  R_EAX = (u32) swprintf(*(wchar_t * *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( size_t)),(char*) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( size_t) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_wscanf() {  R_EAX = (u32) wscanf(*(wchar_t * *) (R_ESP + sizeof(u32)),(char*) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_swscanf() {  R_EAX = (u32) swscanf(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),(char*) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_getwchar() {  R_EAX = (u32) getwchar();}
//void X86RUNNERSYSCALLS_putwchar() {  R_EAX = (u32) putwchar(*(wchar_t *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_wcsftime() {  R_EAX = (u32) wcsftime(*(wchar_t * *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( size_t)),*( struct tm * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( size_t) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_imaxabs() {  R_EAX = (u32) imaxabs(*(intmax_t *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_imaxdiv() {  R_EAX = (u32) imaxdiv(*(intmax_t *) (R_ESP + sizeof(u32)),*( intmax_t *) (R_ESP + sizeof(u32) + sizeof(intmax_t)));}
//void X86RUNNERSYSCALLS_strtoimax() {  R_EAX = (u32) strtoimax(*(char * *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char *)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char **)));}
//void X86RUNNERSYSCALLS_strtoumax() {  R_EAX = (u32) strtoumax(*(char * *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char *)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char **)));}
//void X86RUNNERSYSCALLS_isalnum() {  R_EAX = (u32) isalnum(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_isalpha() {  R_EAX = (u32) isalpha(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_iscntrl() {  R_EAX = (u32) iscntrl(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_isdigit() {  R_EAX = (u32) isdigit(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_islower() {  R_EAX = (u32) islower(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_isgraph() {  R_EAX = (u32) isgraph(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_isprint() {  R_EAX = (u32) isprint(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_ispunct() {  R_EAX = (u32) ispunct(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_isspace() {  R_EAX = (u32) isspace(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_isupper() {  R_EAX = (u32) isupper(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_isxdigit() {  R_EAX = (u32) isxdigit(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_tolower() {  R_EAX = (u32) tolower(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_toupper() {  R_EAX = (u32) toupper(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_isblank() {  R_EAX = (u32) isblank(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_isascii() {  R_EAX = (u32) isascii(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_toascii() {  R_EAX = (u32) toascii(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS__toupper() {  R_EAX = (u32) _toupper(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS__tolower() {  R_EAX = (u32) _tolower(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_isalnum_l() {  R_EAX = (u32) isalnum_l(*(int *) (R_ESP + sizeof(u32)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_isalpha_l() {  R_EAX = (u32) isalpha_l(*(int *) (R_ESP + sizeof(u32)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_iscntrl_l() {  R_EAX = (u32) iscntrl_l(*(int *) (R_ESP + sizeof(u32)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_isdigit_l() {  R_EAX = (u32) isdigit_l(*(int *) (R_ESP + sizeof(u32)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_islower_l() {  R_EAX = (u32) islower_l(*(int *) (R_ESP + sizeof(u32)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_isgraph_l() {  R_EAX = (u32) isgraph_l(*(int *) (R_ESP + sizeof(u32)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_isprint_l() {  R_EAX = (u32) isprint_l(*(int *) (R_ESP + sizeof(u32)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_ispunct_l() {  R_EAX = (u32) ispunct_l(*(int *) (R_ESP + sizeof(u32)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_isspace_l() {  R_EAX = (u32) isspace_l(*(int *) (R_ESP + sizeof(u32)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_isupper_l() {  R_EAX = (u32) isupper_l(*(int *) (R_ESP + sizeof(u32)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_isxdigit_l() {  R_EAX = (u32) isxdigit_l(*(int *) (R_ESP + sizeof(u32)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_isblank_l() {  R_EAX = (u32) isblank_l(*(int *) (R_ESP + sizeof(u32)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_tolower_l() {  R_EAX = (u32) tolower_l(*(int *) (R_ESP + sizeof(u32)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_toupper_l() {  R_EAX = (u32) toupper_l(*(int *) (R_ESP + sizeof(u32)),*( locale_t *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_acos() {  R_EAX = (u32) acos(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_asin() {  R_EAX = (u32) asin(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_atan() {  R_EAX = (u32) atan(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_atan2() {  R_EAX = (u32) atan2(*(double *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_cos() {  R_EAX = (u32) cos(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_sin() {  R_EAX = (u32) sin(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_tan() {  R_EAX = (u32) tan(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_cosh() {  R_EAX = (u32) cosh(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_sinh() {  R_EAX = (u32) sinh(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_tanh() {  R_EAX = (u32) tanh(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_acosh() {  R_EAX = (u32) acosh(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_asinh() {  R_EAX = (u32) asinh(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_atanh() {  R_EAX = (u32) atanh(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_exp() {  R_EAX = (u32) exp(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_frexp() {  R_EAX = (u32) frexp(*(double *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_ldexp() {  R_EAX = (u32) ldexp(*(double *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_log() {  R_EAX = (u32) log(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_log10() {  R_EAX = (u32) log10(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_modf() {  R_EAX = (u32) modf(*(double *) (R_ESP + sizeof(u32)),*( double * *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_expm1() {  R_EAX = (u32) expm1(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_log1p() {  R_EAX = (u32) log1p(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_logb() {  R_EAX = (u32) logb(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_exp2() {  R_EAX = (u32) exp2(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_log2() {  R_EAX = (u32) log2(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_pow() {  R_EAX = (u32) pow(*(double *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_sqrt() {  R_EAX = (u32) sqrt(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_hypot() {  R_EAX = (u32) hypot(*(double *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_cbrt() {  R_EAX = (u32) cbrt(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_ceil() {  R_EAX = (u32) ceil(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_fabs() {  R_EAX = (u32) fabs(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_floor() {  R_EAX = (u32) floor(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_fmod() {  R_EAX = (u32) fmod(*(double *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_isinf() {  R_EAX = (u32) isinf(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_finite() {  R_EAX = (u32) finite(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_drem() {  R_EAX = (u32) drem(*(double *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_significand() {  R_EAX = (u32) significand(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_copysign() {  R_EAX = (u32) copysign(*(double *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_nan() {  R_EAX = (u32) nan(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_isnan() {  R_EAX = (u32) isnan(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_j0() {  R_EAX = (u32) j0(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_j1() {  R_EAX = (u32) j1(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_jn() {  R_EAX = (u32) jn(*(int *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_y0() {  R_EAX = (u32) y0(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_y1() {  R_EAX = (u32) y1(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_yn() {  R_EAX = (u32) yn(*(int *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_erf() {  R_EAX = (u32) erf(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_erfc() {  R_EAX = (u32) erfc(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_lgamma() {  R_EAX = (u32) lgamma(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_tgamma() {  R_EAX = (u32) tgamma(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_gamma() {  R_EAX = (u32) gamma(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_lgamma_r() {  R_EAX = (u32) lgamma_r(*(double *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_rint() {  R_EAX = (u32) rint(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_nextafter() {  R_EAX = (u32) nextafter(*(double *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_nexttoward() {  R_EAX = (u32) nexttoward(*(double *) (R_ESP + sizeof(u32)),*( long double *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_remainder() {  R_EAX = (u32) remainder(*(double *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_scalbn() {  R_EAX = (u32) scalbn(*(double *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_ilogb() {  R_EAX = (u32) ilogb(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_scalbln() {  R_EAX = (u32) scalbln(*(double *) (R_ESP + sizeof(u32)),*( long int *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_nearbyint() {  R_EAX = (u32) nearbyint(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_round() {  R_EAX = (u32) round(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_trunc() {  R_EAX = (u32) trunc(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_remquo() {  R_EAX = (u32) remquo(*(double *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(double)),*( int * *) (R_ESP + sizeof(u32) + sizeof(double) + sizeof( double)));}
//void X86RUNNERSYSCALLS_lrint() {  R_EAX = (u32) lrint(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_llrint() {  R_EAX = (u32) llrint(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_lround() {  R_EAX = (u32) lround(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_llround() {  R_EAX = (u32) llround(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_fdim() {  R_EAX = (u32) fdim(*(double *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_fmax() {  R_EAX = (u32) fmax(*(double *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_fmin() {  R_EAX = (u32) fmin(*(double *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_fma() {  R_EAX = (u32) fma(*(double *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(double)),*( double *) (R_ESP + sizeof(u32) + sizeof(double) + sizeof( double)));}
//void X86RUNNERSYSCALLS_scalb() {  R_EAX = (u32) scalb(*(double *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_acosf() {  float  ret = acosf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_asinf() {  float  ret = asinf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_atanf() {  float  ret = atanf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_atan2f() {  float  ret = atan2f(*(float *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_cosf() {  float  ret = cosf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_sinf() {  float  ret = sinf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_tanf() {  float  ret = tanf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_coshf() {  float  ret = coshf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_sinhf() {  float  ret = sinhf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_tanhf() {  float  ret = tanhf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_acoshf() {  float  ret = acoshf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_asinhf() {  float  ret = asinhf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_atanhf() {  float  ret = atanhf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_expf() {  float  ret = expf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_frexpf() {  float  ret = frexpf(*(float *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_ldexpf() {  float  ret = ldexpf(*(float *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_logf() {  float  ret = logf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_log10f() {  float  ret = log10f(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_modff() {  float  ret = modff(*(float *) (R_ESP + sizeof(u32)),*( float * *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_expm1f() {  float  ret = expm1f(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_log1pf() {  float  ret = log1pf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_logbf() {  float  ret = logbf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_exp2f() {  float  ret = exp2f(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_log2f() {  float  ret = log2f(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_powf() {  float  ret = powf(*(float *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_sqrtf() {  float  ret = sqrtf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_hypotf() {  float  ret = hypotf(*(float *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_cbrtf() {  float  ret = cbrtf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_ceilf() {  float  ret = ceilf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_fabsf() {  float  ret = fabsf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_floorf() {  float  ret = floorf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_fmodf() {  float  ret = fmodf(*(float *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_isinff() {  R_EAX = (u32) isinff(*(float *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_finitef() {  R_EAX = (u32) finitef(*(float *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_dremf() {  float  ret = dremf(*(float *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_significandf() {  float  ret = significandf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_copysignf() {  float  ret = copysignf(*(float *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_nanf() {  float  ret = nanf(*(char * *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_isnanf() {  R_EAX = (u32) isnanf(*(float *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_j0f() {  float  ret = j0f(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_j1f() {  float  ret = j1f(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_jnf() {  float  ret = jnf(*(int *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(int)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_y0f() {  float  ret = y0f(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_y1f() {  float  ret = y1f(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_ynf() {  float  ret = ynf(*(int *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(int)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_erff() {  float  ret = erff(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_erfcf() {  float  ret = erfcf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_lgammaf() {  float  ret = lgammaf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_tgammaf() {  float  ret = tgammaf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_gammaf() {  float  ret = gammaf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_lgammaf_r() {  float  ret = lgammaf_r(*(float *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_rintf() {  float  ret = rintf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_nextafterf() {  float  ret = nextafterf(*(float *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_nexttowardf() {  float  ret = nexttowardf(*(float *) (R_ESP + sizeof(u32)),*( long double *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_remainderf() {  float  ret = remainderf(*(float *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_scalbnf() {  float  ret = scalbnf(*(float *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_ilogbf() {  R_EAX = (u32) ilogbf(*(float *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_scalblnf() {  float  ret = scalblnf(*(float *) (R_ESP + sizeof(u32)),*( long int *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_nearbyintf() {  float  ret = nearbyintf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_roundf() {  float  ret = roundf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_truncf() {  float  ret = truncf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_remquof() {  float  ret = remquof(*(float *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(float)),*( int * *) (R_ESP + sizeof(u32) + sizeof(float) + sizeof( float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_lrintf() {  R_EAX = (u32) lrintf(*(float *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_llrintf() {  R_EAX = (u32) llrintf(*(float *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_lroundf() {  R_EAX = (u32) lroundf(*(float *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_llroundf() {  R_EAX = (u32) llroundf(*(float *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_fdimf() {  float  ret = fdimf(*(float *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_fmaxf() {  float  ret = fmaxf(*(float *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_fminf() {  float  ret = fminf(*(float *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_fmaf() {  float  ret = fmaf(*(float *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(float)),*( float *) (R_ESP + sizeof(u32) + sizeof(float) + sizeof( float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_scalbf() {  float  ret = scalbf(*(float *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_acosl() {  R_EAX = (u32) acosl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_asinl() {  R_EAX = (u32) asinl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_atanl() {  R_EAX = (u32) atanl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_atan2l() {  R_EAX = (u32) atan2l(*(long double *) (R_ESP + sizeof(u32)),*( long double *) (R_ESP + sizeof(u32) + sizeof(long double)));}
//void X86RUNNERSYSCALLS_cosl() {  R_EAX = (u32) cosl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_sinl() {  R_EAX = (u32) sinl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_tanl() {  R_EAX = (u32) tanl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_coshl() {  R_EAX = (u32) coshl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_sinhl() {  R_EAX = (u32) sinhl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_tanhl() {  R_EAX = (u32) tanhl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_acoshl() {  R_EAX = (u32) acoshl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_asinhl() {  R_EAX = (u32) asinhl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_atanhl() {  R_EAX = (u32) atanhl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_expl() {  R_EAX = (u32) expl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_frexpl() {  R_EAX = (u32) frexpl(*(long double *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(long double)));}
//void X86RUNNERSYSCALLS_ldexpl() {  R_EAX = (u32) ldexpl(*(long double *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(long double)));}
//void X86RUNNERSYSCALLS_logl() {  R_EAX = (u32) logl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_log10l() {  R_EAX = (u32) log10l(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_modfl() {  R_EAX = (u32) modfl(*(long double *) (R_ESP + sizeof(u32)),*( long double * *) (R_ESP + sizeof(u32) + sizeof(long double)));}
//void X86RUNNERSYSCALLS_expm1l() {  R_EAX = (u32) expm1l(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_log1pl() {  R_EAX = (u32) log1pl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_logbl() {  R_EAX = (u32) logbl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_exp2l() {  R_EAX = (u32) exp2l(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_log2l() {  R_EAX = (u32) log2l(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_powl() {  R_EAX = (u32) powl(*(long double *) (R_ESP + sizeof(u32)),*( long double *) (R_ESP + sizeof(u32) + sizeof(long double)));}
//void X86RUNNERSYSCALLS_sqrtl() {  R_EAX = (u32) sqrtl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_hypotl() {  R_EAX = (u32) hypotl(*(long double *) (R_ESP + sizeof(u32)),*( long double *) (R_ESP + sizeof(u32) + sizeof(long double)));}
//void X86RUNNERSYSCALLS_cbrtl() {  R_EAX = (u32) cbrtl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_ceill() {  R_EAX = (u32) ceill(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_fabsl() {  R_EAX = (u32) fabsl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_floorl() {  R_EAX = (u32) floorl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_fmodl() {  R_EAX = (u32) fmodl(*(long double *) (R_ESP + sizeof(u32)),*( long double *) (R_ESP + sizeof(u32) + sizeof(long double)));}
//void X86RUNNERSYSCALLS_isinfl() {  R_EAX = (u32) isinfl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_finitel() {  R_EAX = (u32) finitel(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_dreml() {  R_EAX = (u32) dreml(*(long double *) (R_ESP + sizeof(u32)),*( long double *) (R_ESP + sizeof(u32) + sizeof(long double)));}
//void X86RUNNERSYSCALLS_significandl() {  R_EAX = (u32) significandl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_copysignl() {  R_EAX = (u32) copysignl(*(long double *) (R_ESP + sizeof(u32)),*( long double *) (R_ESP + sizeof(u32) + sizeof(long double)));}
//void X86RUNNERSYSCALLS_nanl() {  R_EAX = (u32) nanl(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_isnanl() {  R_EAX = (u32) isnanl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_j0l() {  R_EAX = (u32) j0l(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_j1l() {  R_EAX = (u32) j1l(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_jnl() {  R_EAX = (u32) jnl(*(int *) (R_ESP + sizeof(u32)),*( long double *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_y0l() {  R_EAX = (u32) y0l(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_y1l() {  R_EAX = (u32) y1l(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_ynl() {  R_EAX = (u32) ynl(*(int *) (R_ESP + sizeof(u32)),*( long double *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_erfl() {  R_EAX = (u32) erfl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_erfcl() {  R_EAX = (u32) erfcl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_lgammal() {  R_EAX = (u32) lgammal(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_tgammal() {  R_EAX = (u32) tgammal(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_gammal() {  R_EAX = (u32) gammal(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_lgammal_r() {  R_EAX = (u32) lgammal_r(*(long double *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(long double)));}
//void X86RUNNERSYSCALLS_rintl() {  R_EAX = (u32) rintl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_nextafterl() {  R_EAX = (u32) nextafterl(*(long double *) (R_ESP + sizeof(u32)),*( long double *) (R_ESP + sizeof(u32) + sizeof(long double)));}
//void X86RUNNERSYSCALLS_nexttowardl() {  R_EAX = (u32) nexttowardl(*(long double *) (R_ESP + sizeof(u32)),*( long double *) (R_ESP + sizeof(u32) + sizeof(long double)));}
//void X86RUNNERSYSCALLS_remainderl() {  R_EAX = (u32) remainderl(*(long double *) (R_ESP + sizeof(u32)),*( long double *) (R_ESP + sizeof(u32) + sizeof(long double)));}
//void X86RUNNERSYSCALLS_scalbnl() {  R_EAX = (u32) scalbnl(*(long double *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(long double)));}
//void X86RUNNERSYSCALLS_ilogbl() {  R_EAX = (u32) ilogbl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_scalblnl() {  R_EAX = (u32) scalblnl(*(long double *) (R_ESP + sizeof(u32)),*( long int *) (R_ESP + sizeof(u32) + sizeof(long double)));}
//void X86RUNNERSYSCALLS_nearbyintl() {  R_EAX = (u32) nearbyintl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_roundl() {  R_EAX = (u32) roundl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_truncl() {  R_EAX = (u32) truncl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_remquol() {  R_EAX = (u32) remquol(*(long double *) (R_ESP + sizeof(u32)),*( long double *) (R_ESP + sizeof(u32) + sizeof(long double)),*( int * *) (R_ESP + sizeof(u32) + sizeof(long double) + sizeof( long double)));}
//void X86RUNNERSYSCALLS_lrintl() {  R_EAX = (u32) lrintl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_llrintl() {  R_EAX = (u32) llrintl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_lroundl() {  R_EAX = (u32) lroundl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_llroundl() {  R_EAX = (u32) llroundl(*(long double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_fdiml() {  R_EAX = (u32) fdiml(*(long double *) (R_ESP + sizeof(u32)),*( long double *) (R_ESP + sizeof(u32) + sizeof(long double)));}
//void X86RUNNERSYSCALLS_fmaxl() {  R_EAX = (u32) fmaxl(*(long double *) (R_ESP + sizeof(u32)),*( long double *) (R_ESP + sizeof(u32) + sizeof(long double)));}
//void X86RUNNERSYSCALLS_fminl() {  R_EAX = (u32) fminl(*(long double *) (R_ESP + sizeof(u32)),*( long double *) (R_ESP + sizeof(u32) + sizeof(long double)));}
//void X86RUNNERSYSCALLS_fmal() {  R_EAX = (u32) fmal(*(long double *) (R_ESP + sizeof(u32)),*( long double *) (R_ESP + sizeof(u32) + sizeof(long double)),*( long double *) (R_ESP + sizeof(u32) + sizeof(long double) + sizeof( long double)));}
//void X86RUNNERSYSCALLS_scalbl() {  R_EAX = (u32) scalbl(*(long double *) (R_ESP + sizeof(u32)),*( long double *) (R_ESP + sizeof(u32) + sizeof(long double)));}
//void X86RUNNERSYSCALLS_SDL_malloc() {  R_EAX = (u32) SDL_malloc(*(size_t *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_calloc() {  R_EAX = (u32) SDL_calloc(*(size_t *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(size_t)));}
//void X86RUNNERSYSCALLS_SDL_realloc() {  R_EAX = (u32) SDL_realloc(*(void * *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *)));}
//void X86RUNNERSYSCALLS_SDL_free() {  R_EAX = (u32) SDL_free(*(void * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetMemoryFunctions() {  R_EAX = (u32) SDL_GetMemoryFunctions(*(SDL_malloc_func * *) (R_ESP + sizeof(u32)),*( SDL_calloc_func * *) (R_ESP + sizeof(u32) + sizeof(SDL_malloc_func *)),*( SDL_realloc_func * *) (R_ESP + sizeof(u32) + sizeof(SDL_malloc_func *) + sizeof( SDL_calloc_func *)),*( SDL_free_func * *) (R_ESP + sizeof(u32) + sizeof(SDL_malloc_func *) + sizeof( SDL_calloc_func *) + sizeof( SDL_realloc_func *)));}
//void X86RUNNERSYSCALLS_SDL_SetMemoryFunctions() {  R_EAX = (u32) SDL_SetMemoryFunctions(*(SDL_malloc_func *) (R_ESP + sizeof(u32)),*( SDL_calloc_func *) (R_ESP + sizeof(u32) + sizeof(SDL_malloc_func)),*( SDL_realloc_func *) (R_ESP + sizeof(u32) + sizeof(SDL_malloc_func) + sizeof( SDL_calloc_func)),*( SDL_free_func *) (R_ESP + sizeof(u32) + sizeof(SDL_malloc_func) + sizeof( SDL_calloc_func) + sizeof( SDL_realloc_func)));}
//void X86RUNNERSYSCALLS_SDL_GetNumAllocations() {  R_EAX = (u32) SDL_GetNumAllocations();}
//void X86RUNNERSYSCALLS_SDL_getenv() {  R_EAX = (u32) SDL_getenv(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_setenv() {  R_EAX = (u32) SDL_setenv(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_abs() {  R_EAX = (u32) SDL_abs(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_isdigit() {  R_EAX = (u32) SDL_isdigit(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_isspace() {  R_EAX = (u32) SDL_isspace(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_isupper() {  R_EAX = (u32) SDL_isupper(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_islower() {  R_EAX = (u32) SDL_islower(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_toupper() {  R_EAX = (u32) SDL_toupper(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_tolower() {  R_EAX = (u32) SDL_tolower(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_crc32() {  R_EAX = (u32) SDL_crc32(*(Uint32 *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(Uint32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( void *)));}
//void X86RUNNERSYSCALLS_SDL_memset() {  R_EAX = (u32) SDL_memset(*(void * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(void *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_memcpy() {  R_EAX = (u32) SDL_memcpy(*(void * *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(void *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( void *)));}
//void X86RUNNERSYSCALLS_SDL_memmove() {  R_EAX = (u32) SDL_memmove(*(void * *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(void *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( void *)));}
//void X86RUNNERSYSCALLS_SDL_memcmp() {  R_EAX = (u32) SDL_memcmp(*(void * *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(void *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( void *)));}
//void X86RUNNERSYSCALLS_SDL_wcslen() {  R_EAX = (u32) SDL_wcslen(*(wchar_t * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_wcslcpy() {  R_EAX = (u32) SDL_wcslcpy(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_SDL_wcslcat() {  R_EAX = (u32) SDL_wcslcat(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_SDL_wcsdup() {  R_EAX = (u32) SDL_wcsdup(*(wchar_t * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_wcsstr() {  R_EAX = (u32) SDL_wcsstr(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_SDL_wcscmp() {  R_EAX = (u32) SDL_wcscmp(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_SDL_wcsncmp() {  R_EAX = (u32) SDL_wcsncmp(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_SDL_wcscasecmp() {  R_EAX = (u32) SDL_wcscasecmp(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)));}
//void X86RUNNERSYSCALLS_SDL_wcsncasecmp() {  R_EAX = (u32) SDL_wcsncasecmp(*(wchar_t * *) (R_ESP + sizeof(u32)),*( wchar_t * *) (R_ESP + sizeof(u32) + sizeof(wchar_t *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(wchar_t *) + sizeof( wchar_t *)));}
//void X86RUNNERSYSCALLS_SDL_strlen() {  R_EAX = (u32) SDL_strlen(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_strlcpy() {  R_EAX = (u32) SDL_strlcpy(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_utf8strlcpy() {  R_EAX = (u32) SDL_utf8strlcpy(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_strlcat() {  R_EAX = (u32) SDL_strlcat(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_strdup() {  R_EAX = (u32) SDL_strdup(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_strrev() {  R_EAX = (u32) SDL_strrev(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_strupr() {  R_EAX = (u32) SDL_strupr(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_strlwr() {  R_EAX = (u32) SDL_strlwr(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_strchr() {  R_EAX = (u32) SDL_strchr(*(char * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_SDL_strrchr() {  R_EAX = (u32) SDL_strrchr(*(char * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_SDL_strstr() {  R_EAX = (u32) SDL_strstr(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_SDL_strtokr() {  R_EAX = (u32) SDL_strtokr(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_utf8strlen() {  R_EAX = (u32) SDL_utf8strlen(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_itoa() {  R_EAX = (u32) SDL_itoa(*(int *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(int)),*( int *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_uitoa() {  R_EAX = (u32) SDL_uitoa(*(unsigned int *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(unsigned int)),*( int *) (R_ESP + sizeof(u32) + sizeof(unsigned int) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_ltoa() {  R_EAX = (u32) SDL_ltoa(*(long int *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(long int)),*( int *) (R_ESP + sizeof(u32) + sizeof(long int) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_ultoa() {  R_EAX = (u32) SDL_ultoa(*(long unsigned int *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(long unsigned int)),*( int *) (R_ESP + sizeof(u32) + sizeof(long unsigned int) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_lltoa() {  R_EAX = (u32) SDL_lltoa(*(Sint64 *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(Sint64)),*( int *) (R_ESP + sizeof(u32) + sizeof(Sint64) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_ulltoa() {  R_EAX = (u32) SDL_ulltoa(*(Uint64 *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(Uint64)),*( int *) (R_ESP + sizeof(u32) + sizeof(Uint64) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_atoi() {  R_EAX = (u32) SDL_atoi(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_atof() {  R_EAX = (u32) SDL_atof(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_strtol() {  R_EAX = (u32) SDL_strtol(*(char * *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char *)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char **)));}
//void X86RUNNERSYSCALLS_SDL_strtoul() {  R_EAX = (u32) SDL_strtoul(*(char * *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char *)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char **)));}
//void X86RUNNERSYSCALLS_SDL_strtoll() {  Sint64  ret = SDL_strtoll(*(char * *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char *)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char **)));  R_EAX = ((u32*) &ret)[0];  R_EDX = ((u32*) &ret)[1];}
//void X86RUNNERSYSCALLS_SDL_strtoull() {  Uint64  ret = SDL_strtoull(*(char * *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char *)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char **)));  R_EAX = ((u32*) &ret)[0];  R_EDX = ((u32*) &ret)[1];}
//void X86RUNNERSYSCALLS_SDL_strtod() {  R_EAX = (u32) SDL_strtod(*(char * *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_SDL_strcmp() {  R_EAX = (u32) SDL_strcmp(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_SDL_strncmp() {  R_EAX = (u32) SDL_strncmp(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_strcasecmp() {  R_EAX = (u32) SDL_strcasecmp(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_SDL_strncasecmp() {  R_EAX = (u32) SDL_strncasecmp(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_sscanf() {  R_EAX = (u32) SDL_sscanf(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),(char*) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_snprintf() {  R_EAX = (u32) SDL_snprintf(*(char * *) (R_ESP + sizeof(u32)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( size_t)),(char*) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( size_t) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_acos() {  R_EAX = (u32) SDL_acos(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_acosf() {  float  ret = SDL_acosf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_asin() {  R_EAX = (u32) SDL_asin(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_asinf() {  float  ret = SDL_asinf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_atan() {  R_EAX = (u32) SDL_atan(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_atanf() {  float  ret = SDL_atanf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_atan2() {  R_EAX = (u32) SDL_atan2(*(double *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_SDL_atan2f() {  float  ret = SDL_atan2f(*(float *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_ceil() {  R_EAX = (u32) SDL_ceil(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_ceilf() {  float  ret = SDL_ceilf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_copysign() {  R_EAX = (u32) SDL_copysign(*(double *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_SDL_copysignf() {  float  ret = SDL_copysignf(*(float *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_cos() {  R_EAX = (u32) SDL_cos(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_cosf() {  float  ret = SDL_cosf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_exp() {  R_EAX = (u32) SDL_exp(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_expf() {  float  ret = SDL_expf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_fabs() {  R_EAX = (u32) SDL_fabs(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_fabsf() {  float  ret = SDL_fabsf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_floor() {  R_EAX = (u32) SDL_floor(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_floorf() {  float  ret = SDL_floorf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_trunc() {  R_EAX = (u32) SDL_trunc(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_truncf() {  float  ret = SDL_truncf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_fmod() {  R_EAX = (u32) SDL_fmod(*(double *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_SDL_fmodf() {  float  ret = SDL_fmodf(*(float *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_log() {  R_EAX = (u32) SDL_log(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_logf() {  float  ret = SDL_logf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_log10() {  R_EAX = (u32) SDL_log10(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_log10f() {  float  ret = SDL_log10f(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_pow() {  R_EAX = (u32) SDL_pow(*(double *) (R_ESP + sizeof(u32)),*( double *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_SDL_powf() {  float  ret = SDL_powf(*(float *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_scalbn() {  R_EAX = (u32) SDL_scalbn(*(double *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(double)));}
//void X86RUNNERSYSCALLS_SDL_scalbnf() {  float  ret = SDL_scalbnf(*(float *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(float)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_sin() {  R_EAX = (u32) SDL_sin(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_sinf() {  float  ret = SDL_sinf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_sqrt() {  R_EAX = (u32) SDL_sqrt(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_sqrtf() {  float  ret = SDL_sqrtf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_tan() {  R_EAX = (u32) SDL_tan(*(double *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_tanf() {  float  ret = SDL_tanf(*(float *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_iconv_open() {  R_EAX = (u32) SDL_iconv_open(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_SDL_iconv_close() {  R_EAX = (u32) SDL_iconv_close(*(SDL_iconv_t *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_iconv() {  R_EAX = (u32) SDL_iconv(*(SDL_iconv_t *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(SDL_iconv_t)),*( size_t * *) (R_ESP + sizeof(u32) + sizeof(SDL_iconv_t) + sizeof( char **)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(SDL_iconv_t) + sizeof( char **) + sizeof( size_t *)),*( size_t * *) (R_ESP + sizeof(u32) + sizeof(SDL_iconv_t) + sizeof( char **) + sizeof( size_t *) + sizeof( char **)));}
//void X86RUNNERSYSCALLS_SDL_iconv_string() {  R_EAX = (u32) SDL_iconv_string(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_main() {  R_EAX = (u32) SDL_main(*(int *) (R_ESP + sizeof(u32)),*( char ** *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_SDL_SetMainReady() {  R_EAX = (u32) SDL_SetMainReady();}
//void X86RUNNERSYSCALLS_SDL_ReportAssertion() {  R_EAX = (u32) SDL_ReportAssertion(*(SDL_AssertData * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(SDL_AssertData *)),*( char * *) (R_ESP + sizeof(u32) + sizeof(SDL_AssertData *) + sizeof( char *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_AssertData *) + sizeof( char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_SetAssertionHandler() {  R_EAX = (u32) SDL_SetAssertionHandler(*(SDL_AssertionHandler *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(SDL_AssertionHandler)));}
//void X86RUNNERSYSCALLS_SDL_GetDefaultAssertionHandler() {  R_EAX = (u32) SDL_GetDefaultAssertionHandler();}
//void X86RUNNERSYSCALLS_SDL_GetAssertionHandler() {  R_EAX = (u32) SDL_GetAssertionHandler(*(void ** *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetAssertionReport() {  R_EAX = (u32) SDL_GetAssertionReport();}
//void X86RUNNERSYSCALLS_SDL_ResetAssertionReport() {  R_EAX = (u32) SDL_ResetAssertionReport();}
//void X86RUNNERSYSCALLS_SDL_AtomicTryLock() {  R_EAX = (u32) SDL_AtomicTryLock(*(SDL_SpinLock * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_AtomicLock() {  R_EAX = (u32) SDL_AtomicLock(*(SDL_SpinLock * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_AtomicUnlock() {  R_EAX = (u32) SDL_AtomicUnlock(*(SDL_SpinLock * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_MemoryBarrierReleaseFunction() {  R_EAX = (u32) SDL_MemoryBarrierReleaseFunction();}
//void X86RUNNERSYSCALLS_SDL_MemoryBarrierAcquireFunction() {  R_EAX = (u32) SDL_MemoryBarrierAcquireFunction();}
//void X86RUNNERSYSCALLS_SDL_AtomicCAS() {  R_EAX = (u32) SDL_AtomicCAS(*(SDL_atomic_t * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_atomic_t *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_atomic_t *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_AtomicSet() {  R_EAX = (u32) SDL_AtomicSet(*(SDL_atomic_t * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_atomic_t *)));}
//void X86RUNNERSYSCALLS_SDL_AtomicGet() {  R_EAX = (u32) SDL_AtomicGet(*(SDL_atomic_t * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_AtomicAdd() {  R_EAX = (u32) SDL_AtomicAdd(*(SDL_atomic_t * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_atomic_t *)));}
//void X86RUNNERSYSCALLS_SDL_AtomicCASPtr() {  R_EAX = (u32) SDL_AtomicCASPtr(*(void ** *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(void **)),*( void * *) (R_ESP + sizeof(u32) + sizeof(void **) + sizeof( void *)));}
//void X86RUNNERSYSCALLS_SDL_AtomicSetPtr() {  R_EAX = (u32) SDL_AtomicSetPtr(*(void ** *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(void **)));}
//void X86RUNNERSYSCALLS_SDL_AtomicGetPtr() {  R_EAX = (u32) SDL_AtomicGetPtr(*(void ** *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SetError() {  R_EAX = (u32) SDL_SetError(*(char * *) (R_ESP + sizeof(u32)),(char*) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_SDL_GetError() {  R_EAX = (u32) SDL_GetError();}
//void X86RUNNERSYSCALLS_SDL_GetErrorMsg() {  R_EAX = (u32) SDL_GetErrorMsg(*(char * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_SDL_ClearError() {  R_EAX = (u32) SDL_ClearError();}
//void X86RUNNERSYSCALLS_SDL_Error() {  R_EAX = (u32) SDL_Error(*(SDL_errorcode *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_CreateMutex() {  R_EAX = (u32) SDL_CreateMutex();}
//void X86RUNNERSYSCALLS_SDL_LockMutex() {  R_EAX = (u32) SDL_LockMutex(*(SDL_mutex * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_TryLockMutex() {  R_EAX = (u32) SDL_TryLockMutex(*(SDL_mutex * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_UnlockMutex() {  R_EAX = (u32) SDL_UnlockMutex(*(SDL_mutex * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_DestroyMutex() {  R_EAX = (u32) SDL_DestroyMutex(*(SDL_mutex * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_CreateSemaphore() {  R_EAX = (u32) SDL_CreateSemaphore(*(Uint32 *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_DestroySemaphore() {  R_EAX = (u32) SDL_DestroySemaphore(*(SDL_sem * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SemWait() {  R_EAX = (u32) SDL_SemWait(*(SDL_sem * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SemTryWait() {  R_EAX = (u32) SDL_SemTryWait(*(SDL_sem * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SemWaitTimeout() {  R_EAX = (u32) SDL_SemWaitTimeout(*(SDL_sem * *) (R_ESP + sizeof(u32)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_sem *)));}
//void X86RUNNERSYSCALLS_SDL_SemPost() {  R_EAX = (u32) SDL_SemPost(*(SDL_sem * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SemValue() {  R_EAX = (u32) SDL_SemValue(*(SDL_sem * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_CreateCond() {  R_EAX = (u32) SDL_CreateCond();}
//void X86RUNNERSYSCALLS_SDL_DestroyCond() {  R_EAX = (u32) SDL_DestroyCond(*(SDL_cond * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_CondSignal() {  R_EAX = (u32) SDL_CondSignal(*(SDL_cond * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_CondBroadcast() {  R_EAX = (u32) SDL_CondBroadcast(*(SDL_cond * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_CondWait() {  R_EAX = (u32) SDL_CondWait(*(SDL_cond * *) (R_ESP + sizeof(u32)),*( SDL_mutex * *) (R_ESP + sizeof(u32) + sizeof(SDL_cond *)));}
//void X86RUNNERSYSCALLS_SDL_CondWaitTimeout() {  R_EAX = (u32) SDL_CondWaitTimeout(*(SDL_cond * *) (R_ESP + sizeof(u32)),*( SDL_mutex * *) (R_ESP + sizeof(u32) + sizeof(SDL_cond *)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_cond *) + sizeof( SDL_mutex *)));}
//void X86RUNNERSYSCALLS_SDL_CreateThread() {  R_EAX = (u32) SDL_CreateThread(*(SDL_ThreadFunction *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(SDL_ThreadFunction)),*( void * *) (R_ESP + sizeof(u32) + sizeof(SDL_ThreadFunction) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_CreateThreadWithStackSize() {  R_EAX = (u32) SDL_CreateThreadWithStackSize(*(SDL_ThreadFunction *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(SDL_ThreadFunction)),*( size_t  *) (R_ESP + sizeof(u32) + sizeof(SDL_ThreadFunction) + sizeof( char *)),*( void * *) (R_ESP + sizeof(u32) + sizeof(SDL_ThreadFunction) + sizeof( char *) + sizeof( size_t )));}
//void X86RUNNERSYSCALLS_SDL_GetThreadName() {  R_EAX = (u32) SDL_GetThreadName(*(SDL_Thread * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_ThreadID() {  R_EAX = (u32) SDL_ThreadID();}
//void X86RUNNERSYSCALLS_SDL_GetThreadID() {  R_EAX = (u32) SDL_GetThreadID(*(SDL_Thread * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SetThreadPriority() {  R_EAX = (u32) SDL_SetThreadPriority(*(SDL_ThreadPriority *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_WaitThread() {  R_EAX = (u32) SDL_WaitThread(*(SDL_Thread * *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Thread *)));}
//void X86RUNNERSYSCALLS_SDL_DetachThread() {  R_EAX = (u32) SDL_DetachThread(*(SDL_Thread * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_TLSCreate() {  R_EAX = (u32) SDL_TLSCreate();}
//void X86RUNNERSYSCALLS_SDL_TLSGet() {  R_EAX = (u32) SDL_TLSGet(*(SDL_TLSID *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_RWFromFile() {  R_EAX = (u32) SDL_RWFromFile(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_SDL_RWFromFP() {  R_EAX = (u32) SDL_RWFromFP(*(FILE * *) (R_ESP + sizeof(u32)),*( SDL_bool *) (R_ESP + sizeof(u32) + sizeof(FILE *)));}
//void X86RUNNERSYSCALLS_SDL_RWFromMem() {  R_EAX = (u32) SDL_RWFromMem(*(void * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(void *)));}
//void X86RUNNERSYSCALLS_SDL_RWFromConstMem() {  R_EAX = (u32) SDL_RWFromConstMem(*(void * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(void *)));}
//void X86RUNNERSYSCALLS_SDL_AllocRW() {  R_EAX = (u32) SDL_AllocRW();}
//void X86RUNNERSYSCALLS_SDL_FreeRW() {  R_EAX = (u32) SDL_FreeRW(*(SDL_RWops * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_RWsize() {  Sint64  ret = SDL_RWsize(*(SDL_RWops * *) (R_ESP + sizeof(u32)));  R_EAX = ((u32*) &ret)[0];  R_EDX = ((u32*) &ret)[1];}
//void X86RUNNERSYSCALLS_SDL_RWseek() {  Sint64  ret = SDL_RWseek(*(SDL_RWops * *) (R_ESP + sizeof(u32)),*( Sint64 *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *) + sizeof( Sint64)));  R_EAX = ((u32*) &ret)[0];  R_EDX = ((u32*) &ret)[1];}
//void X86RUNNERSYSCALLS_SDL_RWtell() {  Sint64  ret = SDL_RWtell(*(SDL_RWops * *) (R_ESP + sizeof(u32)));  R_EAX = ((u32*) &ret)[0];  R_EDX = ((u32*) &ret)[1];}
//void X86RUNNERSYSCALLS_SDL_RWread() {  R_EAX = (u32) SDL_RWread(*(SDL_RWops * *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *) + sizeof( void *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *) + sizeof( void *) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_SDL_RWwrite() {  R_EAX = (u32) SDL_RWwrite(*(SDL_RWops * *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *) + sizeof( void *)),*( size_t *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *) + sizeof( void *) + sizeof( size_t)));}
//void X86RUNNERSYSCALLS_SDL_RWclose() {  R_EAX = (u32) SDL_RWclose(*(SDL_RWops * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_LoadFile_RW() {  R_EAX = (u32) SDL_LoadFile_RW(*(SDL_RWops * *) (R_ESP + sizeof(u32)),*( size_t * *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *) + sizeof( size_t *)));}
//void X86RUNNERSYSCALLS_SDL_LoadFile() {  R_EAX = (u32) SDL_LoadFile(*(char * *) (R_ESP + sizeof(u32)),*( size_t * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_SDL_ReadU8() {  R_EAX = (u32) SDL_ReadU8(*(SDL_RWops * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_ReadLE16() {  R_EAX = (u32) SDL_ReadLE16(*(SDL_RWops * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_ReadBE16() {  R_EAX = (u32) SDL_ReadBE16(*(SDL_RWops * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_ReadLE32() {  R_EAX = (u32) SDL_ReadLE32(*(SDL_RWops * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_ReadBE32() {  R_EAX = (u32) SDL_ReadBE32(*(SDL_RWops * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_ReadLE64() {  Uint64  ret = SDL_ReadLE64(*(SDL_RWops * *) (R_ESP + sizeof(u32)));  R_EAX = ((u32*) &ret)[0];  R_EDX = ((u32*) &ret)[1];}
//void X86RUNNERSYSCALLS_SDL_ReadBE64() {  Uint64  ret = SDL_ReadBE64(*(SDL_RWops * *) (R_ESP + sizeof(u32)));  R_EAX = ((u32*) &ret)[0];  R_EDX = ((u32*) &ret)[1];}
//void X86RUNNERSYSCALLS_SDL_WriteU8() {  R_EAX = (u32) SDL_WriteU8(*(SDL_RWops * *) (R_ESP + sizeof(u32)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *)));}
//void X86RUNNERSYSCALLS_SDL_WriteLE16() {  R_EAX = (u32) SDL_WriteLE16(*(SDL_RWops * *) (R_ESP + sizeof(u32)),*( Uint16 *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *)));}
//void X86RUNNERSYSCALLS_SDL_WriteBE16() {  R_EAX = (u32) SDL_WriteBE16(*(SDL_RWops * *) (R_ESP + sizeof(u32)),*( Uint16 *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *)));}
//void X86RUNNERSYSCALLS_SDL_WriteLE32() {  R_EAX = (u32) SDL_WriteLE32(*(SDL_RWops * *) (R_ESP + sizeof(u32)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *)));}
//void X86RUNNERSYSCALLS_SDL_WriteBE32() {  R_EAX = (u32) SDL_WriteBE32(*(SDL_RWops * *) (R_ESP + sizeof(u32)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *)));}
//void X86RUNNERSYSCALLS_SDL_WriteLE64() {  R_EAX = (u32) SDL_WriteLE64(*(SDL_RWops * *) (R_ESP + sizeof(u32)),*( Uint64 *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *)));}
//void X86RUNNERSYSCALLS_SDL_WriteBE64() {  R_EAX = (u32) SDL_WriteBE64(*(SDL_RWops * *) (R_ESP + sizeof(u32)),*( Uint64 *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *)));}
//void X86RUNNERSYSCALLS_SDL_GetNumAudioDrivers() {  R_EAX = (u32) SDL_GetNumAudioDrivers();}
//void X86RUNNERSYSCALLS_SDL_GetAudioDriver() {  R_EAX = (u32) SDL_GetAudioDriver(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_AudioInit() {  R_EAX = (u32) SDL_AudioInit(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_AudioQuit() {  R_EAX = (u32) SDL_AudioQuit();}
//void X86RUNNERSYSCALLS_SDL_GetCurrentAudioDriver() {  R_EAX = (u32) SDL_GetCurrentAudioDriver();}
//void X86RUNNERSYSCALLS_SDL_OpenAudio() {  R_EAX = (u32) SDL_OpenAudio(*(SDL_AudioSpec * *) (R_ESP + sizeof(u32)),*( SDL_AudioSpec * *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioSpec *)));}
//void X86RUNNERSYSCALLS_SDL_GetNumAudioDevices() {  R_EAX = (u32) SDL_GetNumAudioDevices(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetAudioDeviceName() {  R_EAX = (u32) SDL_GetAudioDeviceName(*(int *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_SDL_OpenAudioDevice() {  R_EAX = (u32) SDL_OpenAudioDevice(*(char * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *)),*( SDL_AudioSpec * *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( int)),*( SDL_AudioSpec * *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( int) + sizeof( SDL_AudioSpec *)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( int) + sizeof( SDL_AudioSpec *) + sizeof( SDL_AudioSpec *)));}
//void X86RUNNERSYSCALLS_SDL_GetAudioStatus() {  R_EAX = (u32) SDL_GetAudioStatus();}
//void X86RUNNERSYSCALLS_SDL_GetAudioDeviceStatus() {  R_EAX = (u32) SDL_GetAudioDeviceStatus(*(SDL_AudioDeviceID *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_PauseAudio() {  R_EAX = (u32) SDL_PauseAudio(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_PauseAudioDevice() {  R_EAX = (u32) SDL_PauseAudioDevice(*(SDL_AudioDeviceID *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioDeviceID)));}
//void X86RUNNERSYSCALLS_SDL_LoadWAV_RW() {  R_EAX = (u32) SDL_LoadWAV_RW(*(SDL_RWops * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *)),*( SDL_AudioSpec * *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *) + sizeof( int)),*( Uint8 ** *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *) + sizeof( int) + sizeof( SDL_AudioSpec *)),*( Uint32 * *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *) + sizeof( int) + sizeof( SDL_AudioSpec *) + sizeof( Uint8 **)));}
//void X86RUNNERSYSCALLS_SDL_FreeWAV() {  R_EAX = (u32) SDL_FreeWAV(*(Uint8 * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_BuildAudioCVT() {  R_EAX = (u32) SDL_BuildAudioCVT(*(SDL_AudioCVT * *) (R_ESP + sizeof(u32)),*( SDL_AudioFormat *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioCVT *)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioCVT *) + sizeof( SDL_AudioFormat)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioCVT *) + sizeof( SDL_AudioFormat) + sizeof( Uint8)),*( SDL_AudioFormat *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioCVT *) + sizeof( SDL_AudioFormat) + sizeof( Uint8) + sizeof( int)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioCVT *) + sizeof( SDL_AudioFormat) + sizeof( Uint8) + sizeof( int) + sizeof( SDL_AudioFormat)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioCVT *) + sizeof( SDL_AudioFormat) + sizeof( Uint8) + sizeof( int) + sizeof( SDL_AudioFormat) + sizeof( Uint8)));}
//void X86RUNNERSYSCALLS_SDL_ConvertAudio() {  R_EAX = (u32) SDL_ConvertAudio(*(SDL_AudioCVT * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_NewAudioStream() {  R_EAX = (u32) SDL_NewAudioStream(*(SDL_AudioFormat  *) (R_ESP + sizeof(u32)),*( Uint8  *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioFormat )),*( int  *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioFormat ) + sizeof( Uint8 )),*( SDL_AudioFormat  *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioFormat ) + sizeof( Uint8 ) + sizeof( int )),*( Uint8  *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioFormat ) + sizeof( Uint8 ) + sizeof( int ) + sizeof( SDL_AudioFormat )),*( int  *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioFormat ) + sizeof( Uint8 ) + sizeof( int ) + sizeof( SDL_AudioFormat ) + sizeof( Uint8 )));}
//void X86RUNNERSYSCALLS_SDL_AudioStreamPut() {  R_EAX = (u32) SDL_AudioStreamPut(*(SDL_AudioStream * *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioStream *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioStream *) + sizeof( void *)));}
//void X86RUNNERSYSCALLS_SDL_AudioStreamGet() {  R_EAX = (u32) SDL_AudioStreamGet(*(SDL_AudioStream * *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioStream *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioStream *) + sizeof( void *)));}
//void X86RUNNERSYSCALLS_SDL_AudioStreamAvailable() {  R_EAX = (u32) SDL_AudioStreamAvailable(*(SDL_AudioStream * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_AudioStreamFlush() {  R_EAX = (u32) SDL_AudioStreamFlush(*(SDL_AudioStream * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_AudioStreamClear() {  R_EAX = (u32) SDL_AudioStreamClear(*(SDL_AudioStream * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_FreeAudioStream() {  R_EAX = (u32) SDL_FreeAudioStream(*(SDL_AudioStream * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_MixAudio() {  R_EAX = (u32) SDL_MixAudio(*(Uint8 * *) (R_ESP + sizeof(u32)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(Uint8 *)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(Uint8 *) + sizeof( Uint8 *)),*( int *) (R_ESP + sizeof(u32) + sizeof(Uint8 *) + sizeof( Uint8 *) + sizeof( Uint32)));}
//void X86RUNNERSYSCALLS_SDL_MixAudioFormat() {  R_EAX = (u32) SDL_MixAudioFormat(*(Uint8 * *) (R_ESP + sizeof(u32)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(Uint8 *)),*( SDL_AudioFormat *) (R_ESP + sizeof(u32) + sizeof(Uint8 *) + sizeof( Uint8 *)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(Uint8 *) + sizeof( Uint8 *) + sizeof( SDL_AudioFormat)),*( int *) (R_ESP + sizeof(u32) + sizeof(Uint8 *) + sizeof( Uint8 *) + sizeof( SDL_AudioFormat) + sizeof( Uint32)));}
//void X86RUNNERSYSCALLS_SDL_QueueAudio() {  R_EAX = (u32) SDL_QueueAudio(*(SDL_AudioDeviceID *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioDeviceID)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioDeviceID) + sizeof( void *)));}
//void X86RUNNERSYSCALLS_SDL_DequeueAudio() {  R_EAX = (u32) SDL_DequeueAudio(*(SDL_AudioDeviceID *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioDeviceID)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_AudioDeviceID) + sizeof( void *)));}
//void X86RUNNERSYSCALLS_SDL_GetQueuedAudioSize() {  R_EAX = (u32) SDL_GetQueuedAudioSize(*(SDL_AudioDeviceID *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_ClearQueuedAudio() {  R_EAX = (u32) SDL_ClearQueuedAudio(*(SDL_AudioDeviceID *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_LockAudio() {  R_EAX = (u32) SDL_LockAudio();}
//void X86RUNNERSYSCALLS_SDL_LockAudioDevice() {  R_EAX = (u32) SDL_LockAudioDevice(*(SDL_AudioDeviceID *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_UnlockAudio() {  R_EAX = (u32) SDL_UnlockAudio();}
//void X86RUNNERSYSCALLS_SDL_UnlockAudioDevice() {  R_EAX = (u32) SDL_UnlockAudioDevice(*(SDL_AudioDeviceID *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_CloseAudio() {  R_EAX = (u32) SDL_CloseAudio();}
//void X86RUNNERSYSCALLS_SDL_CloseAudioDevice() {  R_EAX = (u32) SDL_CloseAudioDevice(*(SDL_AudioDeviceID *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SetClipboardText() {  R_EAX = (u32) SDL_SetClipboardText(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetClipboardText() {  R_EAX = (u32) SDL_GetClipboardText();}
//void X86RUNNERSYSCALLS_SDL_HasClipboardText() {  R_EAX = (u32) SDL_HasClipboardText();}
//void X86RUNNERSYSCALLS_SDL_GetCPUCount() {  R_EAX = (u32) SDL_GetCPUCount();}
//void X86RUNNERSYSCALLS_SDL_GetCPUCacheLineSize() {  R_EAX = (u32) SDL_GetCPUCacheLineSize();}
//void X86RUNNERSYSCALLS_SDL_HasRDTSC() {  R_EAX = (u32) SDL_HasRDTSC();}
//void X86RUNNERSYSCALLS_SDL_HasAltiVec() {  R_EAX = (u32) SDL_HasAltiVec();}
//void X86RUNNERSYSCALLS_SDL_HasMMX() {  R_EAX = (u32) SDL_HasMMX();}
//void X86RUNNERSYSCALLS_SDL_Has3DNow() {  R_EAX = (u32) SDL_Has3DNow();}
//void X86RUNNERSYSCALLS_SDL_HasSSE() {  R_EAX = (u32) SDL_HasSSE();}
//void X86RUNNERSYSCALLS_SDL_HasSSE2() {  R_EAX = (u32) SDL_HasSSE2();}
//void X86RUNNERSYSCALLS_SDL_HasSSE3() {  R_EAX = (u32) SDL_HasSSE3();}
//void X86RUNNERSYSCALLS_SDL_HasSSE41() {  R_EAX = (u32) SDL_HasSSE41();}
//void X86RUNNERSYSCALLS_SDL_HasSSE42() {  R_EAX = (u32) SDL_HasSSE42();}
//void X86RUNNERSYSCALLS_SDL_HasAVX() {  R_EAX = (u32) SDL_HasAVX();}
//void X86RUNNERSYSCALLS_SDL_HasAVX2() {  R_EAX = (u32) SDL_HasAVX2();}
//void X86RUNNERSYSCALLS_SDL_HasAVX512F() {  R_EAX = (u32) SDL_HasAVX512F();}
//void X86RUNNERSYSCALLS_SDL_HasARMSIMD() {  R_EAX = (u32) SDL_HasARMSIMD();}
//void X86RUNNERSYSCALLS_SDL_HasNEON() {  R_EAX = (u32) SDL_HasNEON();}
//void X86RUNNERSYSCALLS_SDL_GetSystemRAM() {  R_EAX = (u32) SDL_GetSystemRAM();}
//void X86RUNNERSYSCALLS_SDL_SIMDGetAlignment() {  R_EAX = (u32) SDL_SIMDGetAlignment();}
//void X86RUNNERSYSCALLS_SDL_SIMDAlloc() {  R_EAX = (u32) SDL_SIMDAlloc(*(size_t  *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SIMDRealloc() {  R_EAX = (u32) SDL_SIMDRealloc(*(void * *) (R_ESP + sizeof(u32)),*( size_t  *) (R_ESP + sizeof(u32) + sizeof(void *)));}
//void X86RUNNERSYSCALLS_SDL_SIMDFree() {  R_EAX = (u32) SDL_SIMDFree(*(void * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetPixelFormatName() {  R_EAX = (u32) SDL_GetPixelFormatName(*(Uint32 *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_PixelFormatEnumToMasks() {  R_EAX = (u32) SDL_PixelFormatEnumToMasks(*(Uint32 *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(Uint32)),*( Uint32 * *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( int *)),*( Uint32 * *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( int *) + sizeof( Uint32 *)),*( Uint32 * *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( int *) + sizeof( Uint32 *) + sizeof( Uint32 *)),*( Uint32 * *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( int *) + sizeof( Uint32 *) + sizeof( Uint32 *) + sizeof( Uint32 *)));}
//void X86RUNNERSYSCALLS_SDL_MasksToPixelFormatEnum() {  R_EAX = (u32) SDL_MasksToPixelFormatEnum(*(int *) (R_ESP + sizeof(u32)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(int)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( Uint32)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( Uint32) + sizeof( Uint32)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( Uint32) + sizeof( Uint32) + sizeof( Uint32)));}
//void X86RUNNERSYSCALLS_SDL_AllocFormat() {  R_EAX = (u32) SDL_AllocFormat(*(Uint32 *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_FreeFormat() {  R_EAX = (u32) SDL_FreeFormat(*(SDL_PixelFormat * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_AllocPalette() {  R_EAX = (u32) SDL_AllocPalette(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SetPixelFormatPalette() {  R_EAX = (u32) SDL_SetPixelFormatPalette(*(SDL_PixelFormat * *) (R_ESP + sizeof(u32)),*( SDL_Palette * *) (R_ESP + sizeof(u32) + sizeof(SDL_PixelFormat *)));}
//void X86RUNNERSYSCALLS_SDL_SetPaletteColors() {  R_EAX = (u32) SDL_SetPaletteColors(*(SDL_Palette * *) (R_ESP + sizeof(u32)),*( SDL_Color * *) (R_ESP + sizeof(u32) + sizeof(SDL_Palette *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Palette *) + sizeof( SDL_Color *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Palette *) + sizeof( SDL_Color *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_FreePalette() {  R_EAX = (u32) SDL_FreePalette(*(SDL_Palette * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_MapRGB() {  R_EAX = (u32) SDL_MapRGB(*(SDL_PixelFormat * *) (R_ESP + sizeof(u32)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_PixelFormat *)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_PixelFormat *) + sizeof( Uint8)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_PixelFormat *) + sizeof( Uint8) + sizeof( Uint8)));}
//void X86RUNNERSYSCALLS_SDL_MapRGBA() {  R_EAX = (u32) SDL_MapRGBA(*(SDL_PixelFormat * *) (R_ESP + sizeof(u32)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_PixelFormat *)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_PixelFormat *) + sizeof( Uint8)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_PixelFormat *) + sizeof( Uint8) + sizeof( Uint8)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_PixelFormat *) + sizeof( Uint8) + sizeof( Uint8) + sizeof( Uint8)));}
//void X86RUNNERSYSCALLS_SDL_GetRGB() {  R_EAX = (u32) SDL_GetRGB(*(Uint32 *) (R_ESP + sizeof(u32)),*( SDL_PixelFormat * *) (R_ESP + sizeof(u32) + sizeof(Uint32)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( SDL_PixelFormat *)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( SDL_PixelFormat *) + sizeof( Uint8 *)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( SDL_PixelFormat *) + sizeof( Uint8 *) + sizeof( Uint8 *)));}
//void X86RUNNERSYSCALLS_SDL_GetRGBA() {  R_EAX = (u32) SDL_GetRGBA(*(Uint32 *) (R_ESP + sizeof(u32)),*( SDL_PixelFormat * *) (R_ESP + sizeof(u32) + sizeof(Uint32)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( SDL_PixelFormat *)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( SDL_PixelFormat *) + sizeof( Uint8 *)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( SDL_PixelFormat *) + sizeof( Uint8 *) + sizeof( Uint8 *)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( SDL_PixelFormat *) + sizeof( Uint8 *) + sizeof( Uint8 *) + sizeof( Uint8 *)));}
//void X86RUNNERSYSCALLS_SDL_CalculateGammaRamp() {  R_EAX = (u32) SDL_CalculateGammaRamp(*(float *) (R_ESP + sizeof(u32)),*( Uint16 * *) (R_ESP + sizeof(u32) + sizeof(float)));}
//void X86RUNNERSYSCALLS_SDL_HasIntersection() {  R_EAX = (u32) SDL_HasIntersection(*(SDL_Rect * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Rect *)));}
//void X86RUNNERSYSCALLS_SDL_IntersectRect() {  R_EAX = (u32) SDL_IntersectRect(*(SDL_Rect * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Rect *)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Rect *) + sizeof( SDL_Rect *)));}
//void X86RUNNERSYSCALLS_SDL_UnionRect() {  R_EAX = (u32) SDL_UnionRect(*(SDL_Rect * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Rect *)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Rect *) + sizeof( SDL_Rect *)));}
//void X86RUNNERSYSCALLS_SDL_EnclosePoints() {  R_EAX = (u32) SDL_EnclosePoints(*(SDL_Point * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Point *)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Point *) + sizeof( int)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Point *) + sizeof( int) + sizeof( SDL_Rect *)));}
//void X86RUNNERSYSCALLS_SDL_IntersectRectAndLine() {  R_EAX = (u32) SDL_IntersectRectAndLine(*(SDL_Rect * *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Rect *)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Rect *) + sizeof( int *)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Rect *) + sizeof( int *) + sizeof( int *)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Rect *) + sizeof( int *) + sizeof( int *) + sizeof( int *)));}
//void X86RUNNERSYSCALLS_SDL_ComposeCustomBlendMode() {  R_EAX = (u32) SDL_ComposeCustomBlendMode(*(SDL_BlendFactor *) (R_ESP + sizeof(u32)),*( SDL_BlendFactor *) (R_ESP + sizeof(u32) + sizeof(SDL_BlendFactor)),*( SDL_BlendOperation *) (R_ESP + sizeof(u32) + sizeof(SDL_BlendFactor) + sizeof( SDL_BlendFactor)),*( SDL_BlendFactor *) (R_ESP + sizeof(u32) + sizeof(SDL_BlendFactor) + sizeof( SDL_BlendFactor) + sizeof( SDL_BlendOperation)),*( SDL_BlendFactor *) (R_ESP + sizeof(u32) + sizeof(SDL_BlendFactor) + sizeof( SDL_BlendFactor) + sizeof( SDL_BlendOperation) + sizeof( SDL_BlendFactor)),*( SDL_BlendOperation *) (R_ESP + sizeof(u32) + sizeof(SDL_BlendFactor) + sizeof( SDL_BlendFactor) + sizeof( SDL_BlendOperation) + sizeof( SDL_BlendFactor) + sizeof( SDL_BlendFactor)));}
//void X86RUNNERSYSCALLS_SDL_CreateRGBSurface() {  R_EAX = (u32) SDL_CreateRGBSurface(*(Uint32 *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(Uint32)),*( int *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( int)),*( int *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( int) + sizeof( int)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( int) + sizeof( int) + sizeof( int)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( int) + sizeof( int) + sizeof( int) + sizeof( Uint32)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( int) + sizeof( int) + sizeof( int) + sizeof( Uint32) + sizeof( Uint32)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( int) + sizeof( int) + sizeof( int) + sizeof( Uint32) + sizeof( Uint32) + sizeof( Uint32)));}
//void X86RUNNERSYSCALLS_SDL_CreateRGBSurfaceWithFormat() {  R_EAX = (u32) SDL_CreateRGBSurfaceWithFormat(*(Uint32 *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(Uint32)),*( int *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( int)),*( int *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( int) + sizeof( int)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( int) + sizeof( int) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_CreateRGBSurfaceFrom() {  R_EAX = (u32) SDL_CreateRGBSurfaceFrom(*(void * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(void *)),*( int *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( int)),*( int *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( int) + sizeof( int)),*( int *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( int) + sizeof( int) + sizeof( int)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( int) + sizeof( int) + sizeof( int) + sizeof( int)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( int) + sizeof( int) + sizeof( int) + sizeof( int) + sizeof( Uint32)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( int) + sizeof( int) + sizeof( int) + sizeof( int) + sizeof( Uint32) + sizeof( Uint32)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( int) + sizeof( int) + sizeof( int) + sizeof( int) + sizeof( Uint32) + sizeof( Uint32) + sizeof( Uint32)));}
//void X86RUNNERSYSCALLS_SDL_CreateRGBSurfaceWithFormatFrom() {  R_EAX = (u32) SDL_CreateRGBSurfaceWithFormatFrom(*(void * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(void *)),*( int *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( int)),*( int *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( int) + sizeof( int)),*( int *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( int) + sizeof( int) + sizeof( int)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(void *) + sizeof( int) + sizeof( int) + sizeof( int) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_FreeSurface() {  R_EAX = (u32) SDL_FreeSurface(*(SDL_Surface * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SetSurfacePalette() {  R_EAX = (u32) SDL_SetSurfacePalette(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( SDL_Palette * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)));}
//void X86RUNNERSYSCALLS_SDL_LockSurface() {  R_EAX = (u32) SDL_LockSurface(*(SDL_Surface * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_UnlockSurface() {  R_EAX = (u32) SDL_UnlockSurface(*(SDL_Surface * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_LoadBMP_RW() {  R_EAX = (u32) SDL_LoadBMP_RW(*(SDL_RWops * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *)));}
//void X86RUNNERSYSCALLS_SDL_SaveBMP_RW() {  R_EAX = (u32) SDL_SaveBMP_RW(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( SDL_RWops * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( SDL_RWops *)));}
//void X86RUNNERSYSCALLS_SDL_SetSurfaceRLE() {  R_EAX = (u32) SDL_SetSurfaceRLE(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)));}
//void X86RUNNERSYSCALLS_SDL_HasSurfaceRLE() {  R_EAX = (u32) SDL_HasSurfaceRLE(*(SDL_Surface * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SetColorKey() {  R_EAX = (u32) SDL_SetColorKey(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_HasColorKey() {  R_EAX = (u32) SDL_HasColorKey(*(SDL_Surface * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetColorKey() {  R_EAX = (u32) SDL_GetColorKey(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( Uint32 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)));}
//void X86RUNNERSYSCALLS_SDL_SetSurfaceColorMod() {  R_EAX = (u32) SDL_SetSurfaceColorMod(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( Uint8)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( Uint8) + sizeof( Uint8)));}
//void X86RUNNERSYSCALLS_SDL_GetSurfaceColorMod() {  R_EAX = (u32) SDL_GetSurfaceColorMod(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( Uint8 *)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( Uint8 *) + sizeof( Uint8 *)));}
//void X86RUNNERSYSCALLS_SDL_SetSurfaceAlphaMod() {  R_EAX = (u32) SDL_SetSurfaceAlphaMod(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)));}
//void X86RUNNERSYSCALLS_SDL_GetSurfaceAlphaMod() {  R_EAX = (u32) SDL_GetSurfaceAlphaMod(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)));}
//void X86RUNNERSYSCALLS_SDL_SetSurfaceBlendMode() {  R_EAX = (u32) SDL_SetSurfaceBlendMode(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( SDL_BlendMode *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)));}
//void X86RUNNERSYSCALLS_SDL_GetSurfaceBlendMode() {  R_EAX = (u32) SDL_GetSurfaceBlendMode(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( SDL_BlendMode * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)));}
//void X86RUNNERSYSCALLS_SDL_SetClipRect() {  R_EAX = (u32) SDL_SetClipRect(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)));}
//void X86RUNNERSYSCALLS_SDL_GetClipRect() {  R_EAX = (u32) SDL_GetClipRect(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)));}
//void X86RUNNERSYSCALLS_SDL_DuplicateSurface() {  R_EAX = (u32) SDL_DuplicateSurface(*(SDL_Surface * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_ConvertSurface() {  R_EAX = (u32) SDL_ConvertSurface(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( SDL_PixelFormat * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( SDL_PixelFormat *)));}
//void X86RUNNERSYSCALLS_SDL_ConvertSurfaceFormat() {  R_EAX = (u32) SDL_ConvertSurfaceFormat(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( Uint32)));}
//void X86RUNNERSYSCALLS_SDL_ConvertPixels() {  R_EAX = (u32) SDL_ConvertPixels(*(int *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(int)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( int)),*( void * *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( int) + sizeof( Uint32)),*( int *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( int) + sizeof( Uint32) + sizeof( void *)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( int) + sizeof( Uint32) + sizeof( void *) + sizeof( int)),*( void * *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( int) + sizeof( Uint32) + sizeof( void *) + sizeof( int) + sizeof( Uint32)),*( int *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( int) + sizeof( Uint32) + sizeof( void *) + sizeof( int) + sizeof( Uint32) + sizeof( void *)));}
//void X86RUNNERSYSCALLS_SDL_FillRect() {  R_EAX = (u32) SDL_FillRect(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( SDL_Rect *)));}
//void X86RUNNERSYSCALLS_SDL_FillRects() {  R_EAX = (u32) SDL_FillRects(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( SDL_Rect *)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( SDL_Rect *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_UpperBlit() {  R_EAX = (u32) SDL_UpperBlit(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)),*( SDL_Surface * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( SDL_Rect *)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( SDL_Rect *) + sizeof( SDL_Surface *)));}
//void X86RUNNERSYSCALLS_SDL_LowerBlit() {  R_EAX = (u32) SDL_LowerBlit(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)),*( SDL_Surface * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( SDL_Rect *)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( SDL_Rect *) + sizeof( SDL_Surface *)));}
//void X86RUNNERSYSCALLS_SDL_SoftStretch() {  R_EAX = (u32) SDL_SoftStretch(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)),*( SDL_Surface * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( SDL_Rect *)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( SDL_Rect *) + sizeof( SDL_Surface *)));}
//void X86RUNNERSYSCALLS_SDL_UpperBlitScaled() {  R_EAX = (u32) SDL_UpperBlitScaled(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)),*( SDL_Surface * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( SDL_Rect *)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( SDL_Rect *) + sizeof( SDL_Surface *)));}
//void X86RUNNERSYSCALLS_SDL_LowerBlitScaled() {  R_EAX = (u32) SDL_LowerBlitScaled(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)),*( SDL_Surface * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( SDL_Rect *)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( SDL_Rect *) + sizeof( SDL_Surface *)));}
//void X86RUNNERSYSCALLS_SDL_SetYUVConversionMode() {  R_EAX = (u32) SDL_SetYUVConversionMode(*(SDL_YUV_CONVERSION_MODE *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetYUVConversionMode() {  R_EAX = (u32) SDL_GetYUVConversionMode();}
//void X86RUNNERSYSCALLS_SDL_GetYUVConversionModeForResolution() {  R_EAX = (u32) SDL_GetYUVConversionModeForResolution(*(int *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_SDL_GetNumVideoDrivers() {  R_EAX = (u32) SDL_GetNumVideoDrivers();}
//void X86RUNNERSYSCALLS_SDL_GetVideoDriver() {  R_EAX = (u32) SDL_GetVideoDriver(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_VideoInit() {  R_EAX = (u32) SDL_VideoInit(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_VideoQuit() {  R_EAX = (u32) SDL_VideoQuit();}
//void X86RUNNERSYSCALLS_SDL_GetCurrentVideoDriver() {  R_EAX = (u32) SDL_GetCurrentVideoDriver();}
//void X86RUNNERSYSCALLS_SDL_GetNumVideoDisplays() {  R_EAX = (u32) SDL_GetNumVideoDisplays();}
//void X86RUNNERSYSCALLS_SDL_GetDisplayName() {  R_EAX = (u32) SDL_GetDisplayName(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetDisplayBounds() {  R_EAX = (u32) SDL_GetDisplayBounds(*(int *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_SDL_GetDisplayUsableBounds() {  R_EAX = (u32) SDL_GetDisplayUsableBounds(*(int *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_SDL_GetDisplayDPI() {  R_EAX = (u32) SDL_GetDisplayDPI(*(int *) (R_ESP + sizeof(u32)),*( float * *) (R_ESP + sizeof(u32) + sizeof(int)),*( float * *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( float *)),*( float * *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( float *) + sizeof( float *)));}
//void X86RUNNERSYSCALLS_SDL_GetDisplayOrientation() {  R_EAX = (u32) SDL_GetDisplayOrientation(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetNumDisplayModes() {  R_EAX = (u32) SDL_GetNumDisplayModes(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetDisplayMode() {  R_EAX = (u32) SDL_GetDisplayMode(*(int *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(int)),*( SDL_DisplayMode * *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_GetDesktopDisplayMode() {  R_EAX = (u32) SDL_GetDesktopDisplayMode(*(int *) (R_ESP + sizeof(u32)),*( SDL_DisplayMode * *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_SDL_GetCurrentDisplayMode() {  R_EAX = (u32) SDL_GetCurrentDisplayMode(*(int *) (R_ESP + sizeof(u32)),*( SDL_DisplayMode * *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_SDL_GetClosestDisplayMode() {  R_EAX = (u32) SDL_GetClosestDisplayMode(*(int *) (R_ESP + sizeof(u32)),*( SDL_DisplayMode * *) (R_ESP + sizeof(u32) + sizeof(int)),*( SDL_DisplayMode * *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( SDL_DisplayMode *)));}
//void X86RUNNERSYSCALLS_SDL_GetWindowDisplayIndex() {  R_EAX = (u32) SDL_GetWindowDisplayIndex(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SetWindowDisplayMode() {  R_EAX = (u32) SDL_SetWindowDisplayMode(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( SDL_DisplayMode * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)));}
//void X86RUNNERSYSCALLS_SDL_GetWindowDisplayMode() {  R_EAX = (u32) SDL_GetWindowDisplayMode(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( SDL_DisplayMode * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)));}
//void X86RUNNERSYSCALLS_SDL_GetWindowPixelFormat() {  R_EAX = (u32) SDL_GetWindowPixelFormat(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_CreateWindow() {  R_EAX = (u32) SDL_CreateWindow(*(char * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( int)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( int) + sizeof( int)),*( int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( int) + sizeof( int) + sizeof( int)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( int) + sizeof( int) + sizeof( int) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_CreateWindowFrom() {  R_EAX = (u32) SDL_CreateWindowFrom(*(void * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetWindowID() {  R_EAX = (u32) SDL_GetWindowID(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetWindowFromID() {  R_EAX = (u32) SDL_GetWindowFromID(*(Uint32 *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetWindowFlags() {  R_EAX = (u32) SDL_GetWindowFlags(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SetWindowTitle() {  R_EAX = (u32) SDL_SetWindowTitle(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)));}
//void X86RUNNERSYSCALLS_SDL_GetWindowTitle() {  R_EAX = (u32) SDL_GetWindowTitle(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SetWindowIcon() {  R_EAX = (u32) SDL_SetWindowIcon(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( SDL_Surface * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)));}
//void X86RUNNERSYSCALLS_SDL_SetWindowData() {  R_EAX = (u32) SDL_SetWindowData(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)),*( void * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_GetWindowData() {  R_EAX = (u32) SDL_GetWindowData(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)));}
//void X86RUNNERSYSCALLS_SDL_SetWindowPosition() {  R_EAX = (u32) SDL_SetWindowPosition(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_GetWindowPosition() {  R_EAX = (u32) SDL_GetWindowPosition(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( int *)));}
//void X86RUNNERSYSCALLS_SDL_SetWindowSize() {  R_EAX = (u32) SDL_SetWindowSize(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_GetWindowSize() {  R_EAX = (u32) SDL_GetWindowSize(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( int *)));}
//void X86RUNNERSYSCALLS_SDL_GetWindowBordersSize() {  R_EAX = (u32) SDL_GetWindowBordersSize(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( int *)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( int *) + sizeof( int *)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( int *) + sizeof( int *) + sizeof( int *)));}
//void X86RUNNERSYSCALLS_SDL_SetWindowMinimumSize() {  R_EAX = (u32) SDL_SetWindowMinimumSize(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_GetWindowMinimumSize() {  R_EAX = (u32) SDL_GetWindowMinimumSize(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( int *)));}
//void X86RUNNERSYSCALLS_SDL_SetWindowMaximumSize() {  R_EAX = (u32) SDL_SetWindowMaximumSize(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_GetWindowMaximumSize() {  R_EAX = (u32) SDL_GetWindowMaximumSize(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( int *)));}
//void X86RUNNERSYSCALLS_SDL_SetWindowBordered() {  R_EAX = (u32) SDL_SetWindowBordered(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( SDL_bool *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)));}
//void X86RUNNERSYSCALLS_SDL_SetWindowResizable() {  R_EAX = (u32) SDL_SetWindowResizable(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( SDL_bool *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)));}
//void X86RUNNERSYSCALLS_SDL_ShowWindow() {  R_EAX = (u32) SDL_ShowWindow(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_HideWindow() {  R_EAX = (u32) SDL_HideWindow(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_RaiseWindow() {  R_EAX = (u32) SDL_RaiseWindow(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_MaximizeWindow() {  R_EAX = (u32) SDL_MaximizeWindow(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_MinimizeWindow() {  R_EAX = (u32) SDL_MinimizeWindow(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_RestoreWindow() {  R_EAX = (u32) SDL_RestoreWindow(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SetWindowFullscreen() {  R_EAX = (u32) SDL_SetWindowFullscreen(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)));}
//void X86RUNNERSYSCALLS_SDL_GetWindowSurface() {  R_EAX = (u32) SDL_GetWindowSurface(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_UpdateWindowSurface() {  R_EAX = (u32) SDL_UpdateWindowSurface(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_UpdateWindowSurfaceRects() {  R_EAX = (u32) SDL_UpdateWindowSurfaceRects(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( SDL_Rect *)));}
//void X86RUNNERSYSCALLS_SDL_SetWindowGrab() {  R_EAX = (u32) SDL_SetWindowGrab(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( SDL_bool *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)));}
//void X86RUNNERSYSCALLS_SDL_GetWindowGrab() {  R_EAX = (u32) SDL_GetWindowGrab(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetGrabbedWindow() {  R_EAX = (u32) SDL_GetGrabbedWindow();}
//void X86RUNNERSYSCALLS_SDL_SetWindowBrightness() {  R_EAX = (u32) SDL_SetWindowBrightness(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)));}
//void X86RUNNERSYSCALLS_SDL_GetWindowBrightness() {  float  ret = SDL_GetWindowBrightness(*(SDL_Window * *) (R_ESP + sizeof(u32)));  fpu_do_push(emu); ST0.d = ret; }
//void X86RUNNERSYSCALLS_SDL_SetWindowOpacity() {  R_EAX = (u32) SDL_SetWindowOpacity(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)));}
//void X86RUNNERSYSCALLS_SDL_GetWindowOpacity() {  R_EAX = (u32) SDL_GetWindowOpacity(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( float * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)));}
//void X86RUNNERSYSCALLS_SDL_SetWindowModalFor() {  R_EAX = (u32) SDL_SetWindowModalFor(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( SDL_Window * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)));}
//void X86RUNNERSYSCALLS_SDL_SetWindowInputFocus() {  R_EAX = (u32) SDL_SetWindowInputFocus(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SetWindowGammaRamp() {  R_EAX = (u32) SDL_SetWindowGammaRamp(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( Uint16 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)),*( Uint16 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( Uint16 *)),*( Uint16 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( Uint16 *) + sizeof( Uint16 *)));}
//void X86RUNNERSYSCALLS_SDL_GetWindowGammaRamp() {  R_EAX = (u32) SDL_GetWindowGammaRamp(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( Uint16 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)),*( Uint16 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( Uint16 *)),*( Uint16 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( Uint16 *) + sizeof( Uint16 *)));}
//void X86RUNNERSYSCALLS_SDL_SetWindowHitTest() {  R_EAX = (u32) SDL_SetWindowHitTest(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( SDL_HitTest *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)),*( void * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( SDL_HitTest)));}
//void X86RUNNERSYSCALLS_SDL_DestroyWindow() {  R_EAX = (u32) SDL_DestroyWindow(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_IsScreenSaverEnabled() {  R_EAX = (u32) SDL_IsScreenSaverEnabled();}
//void X86RUNNERSYSCALLS_SDL_EnableScreenSaver() {  R_EAX = (u32) SDL_EnableScreenSaver();}
//void X86RUNNERSYSCALLS_SDL_DisableScreenSaver() {  R_EAX = (u32) SDL_DisableScreenSaver();}
//void X86RUNNERSYSCALLS_SDL_GL_LoadLibrary() {  R_EAX = (u32) SDL_GL_LoadLibrary(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GL_GetProcAddress() {  R_EAX = (u32) SDL_GL_GetProcAddress(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GL_UnloadLibrary() {  R_EAX = (u32) SDL_GL_UnloadLibrary();}
//void X86RUNNERSYSCALLS_SDL_GL_ExtensionSupported() {  R_EAX = (u32) SDL_GL_ExtensionSupported(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GL_ResetAttributes() {  R_EAX = (u32) SDL_GL_ResetAttributes();}
//void X86RUNNERSYSCALLS_SDL_GL_SetAttribute() {  R_EAX = (u32) SDL_GL_SetAttribute(*(SDL_GLattr *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_GLattr)));}
//void X86RUNNERSYSCALLS_SDL_GL_GetAttribute() {  R_EAX = (u32) SDL_GL_GetAttribute(*(SDL_GLattr *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_GLattr)));}
//void X86RUNNERSYSCALLS_SDL_GL_CreateContext() {  R_EAX = (u32) SDL_GL_CreateContext(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GL_MakeCurrent() {  R_EAX = (u32) SDL_GL_MakeCurrent(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( SDL_GLContext *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)));}
//void X86RUNNERSYSCALLS_SDL_GL_GetCurrentWindow() {  R_EAX = (u32) SDL_GL_GetCurrentWindow();}
//void X86RUNNERSYSCALLS_SDL_GL_GetCurrentContext() {  R_EAX = (u32) SDL_GL_GetCurrentContext();}
//void X86RUNNERSYSCALLS_SDL_GL_GetDrawableSize() {  R_EAX = (u32) SDL_GL_GetDrawableSize(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( int *)));}
//void X86RUNNERSYSCALLS_SDL_GL_SetSwapInterval() {  R_EAX = (u32) SDL_GL_SetSwapInterval(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GL_GetSwapInterval() {  R_EAX = (u32) SDL_GL_GetSwapInterval();}
//void X86RUNNERSYSCALLS_SDL_GL_SwapWindow() {  R_EAX = (u32) SDL_GL_SwapWindow(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GL_DeleteContext() {  R_EAX = (u32) SDL_GL_DeleteContext(*(SDL_GLContext *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetKeyboardFocus() {  R_EAX = (u32) SDL_GetKeyboardFocus();}
//void X86RUNNERSYSCALLS_SDL_GetKeyboardState() {  R_EAX = (u32) SDL_GetKeyboardState(*(int * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetModState() {  R_EAX = (u32) SDL_GetModState();}
//void X86RUNNERSYSCALLS_SDL_SetModState() {  R_EAX = (u32) SDL_SetModState(*(SDL_Keymod *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetKeyFromScancode() {  R_EAX = (u32) SDL_GetKeyFromScancode(*(SDL_Scancode *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetScancodeFromKey() {  R_EAX = (u32) SDL_GetScancodeFromKey(*(SDL_Keycode *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetScancodeName() {  R_EAX = (u32) SDL_GetScancodeName(*(SDL_Scancode *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetScancodeFromName() {  R_EAX = (u32) SDL_GetScancodeFromName(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetKeyName() {  R_EAX = (u32) SDL_GetKeyName(*(SDL_Keycode *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetKeyFromName() {  R_EAX = (u32) SDL_GetKeyFromName(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_StartTextInput() {  R_EAX = (u32) SDL_StartTextInput();}
//void X86RUNNERSYSCALLS_SDL_IsTextInputActive() {  R_EAX = (u32) SDL_IsTextInputActive();}
//void X86RUNNERSYSCALLS_SDL_StopTextInput() {  R_EAX = (u32) SDL_StopTextInput();}
//void X86RUNNERSYSCALLS_SDL_SetTextInputRect() {  R_EAX = (u32) SDL_SetTextInputRect(*(SDL_Rect * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_HasScreenKeyboardSupport() {  R_EAX = (u32) SDL_HasScreenKeyboardSupport();}
//void X86RUNNERSYSCALLS_SDL_IsScreenKeyboardShown() {  R_EAX = (u32) SDL_IsScreenKeyboardShown(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetMouseFocus() {  R_EAX = (u32) SDL_GetMouseFocus();}
//void X86RUNNERSYSCALLS_SDL_GetMouseState() {  R_EAX = (u32) SDL_GetMouseState(*(int * *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(int *)));}
//void X86RUNNERSYSCALLS_SDL_GetGlobalMouseState() {  R_EAX = (u32) SDL_GetGlobalMouseState(*(int * *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(int *)));}
//void X86RUNNERSYSCALLS_SDL_GetRelativeMouseState() {  R_EAX = (u32) SDL_GetRelativeMouseState(*(int * *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(int *)));}
//void X86RUNNERSYSCALLS_SDL_WarpMouseInWindow() {  R_EAX = (u32) SDL_WarpMouseInWindow(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_WarpMouseGlobal() {  R_EAX = (u32) SDL_WarpMouseGlobal(*(int *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_SDL_SetRelativeMouseMode() {  R_EAX = (u32) SDL_SetRelativeMouseMode(*(SDL_bool *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_CaptureMouse() {  R_EAX = (u32) SDL_CaptureMouse(*(SDL_bool *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetRelativeMouseMode() {  R_EAX = (u32) SDL_GetRelativeMouseMode();}
//void X86RUNNERSYSCALLS_SDL_CreateCursor() {  R_EAX = (u32) SDL_CreateCursor(*(Uint8 * *) (R_ESP + sizeof(u32)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(Uint8 *)),*( int *) (R_ESP + sizeof(u32) + sizeof(Uint8 *) + sizeof( Uint8 *)),*( int *) (R_ESP + sizeof(u32) + sizeof(Uint8 *) + sizeof( Uint8 *) + sizeof( int)),*( int *) (R_ESP + sizeof(u32) + sizeof(Uint8 *) + sizeof( Uint8 *) + sizeof( int) + sizeof( int)),*( int *) (R_ESP + sizeof(u32) + sizeof(Uint8 *) + sizeof( Uint8 *) + sizeof( int) + sizeof( int) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_CreateColorCursor() {  R_EAX = (u32) SDL_CreateColorCursor(*(SDL_Surface * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Surface *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_CreateSystemCursor() {  R_EAX = (u32) SDL_CreateSystemCursor(*(SDL_SystemCursor *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SetCursor() {  R_EAX = (u32) SDL_SetCursor(*(SDL_Cursor * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetCursor() {  R_EAX = (u32) SDL_GetCursor();}
//void X86RUNNERSYSCALLS_SDL_GetDefaultCursor() {  R_EAX = (u32) SDL_GetDefaultCursor();}
//void X86RUNNERSYSCALLS_SDL_FreeCursor() {  R_EAX = (u32) SDL_FreeCursor(*(SDL_Cursor * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_ShowCursor() {  R_EAX = (u32) SDL_ShowCursor(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_LockJoysticks() {  R_EAX = (u32) SDL_LockJoysticks();}
//void X86RUNNERSYSCALLS_SDL_UnlockJoysticks() {  R_EAX = (u32) SDL_UnlockJoysticks();}
//void X86RUNNERSYSCALLS_SDL_NumJoysticks() {  R_EAX = (u32) SDL_NumJoysticks();}
//void X86RUNNERSYSCALLS_SDL_JoystickNameForIndex() {  R_EAX = (u32) SDL_JoystickNameForIndex(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetDevicePlayerIndex() {  R_EAX = (u32) SDL_JoystickGetDevicePlayerIndex(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetDeviceGUID() {  R_EAX = (u32) SDL_JoystickGetDeviceGUID(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetDeviceVendor() {  R_EAX = (u32) SDL_JoystickGetDeviceVendor(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetDeviceProduct() {  R_EAX = (u32) SDL_JoystickGetDeviceProduct(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetDeviceProductVersion() {  R_EAX = (u32) SDL_JoystickGetDeviceProductVersion(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetDeviceType() {  R_EAX = (u32) SDL_JoystickGetDeviceType(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetDeviceInstanceID() {  R_EAX = (u32) SDL_JoystickGetDeviceInstanceID(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickOpen() {  R_EAX = (u32) SDL_JoystickOpen(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickFromInstanceID() {  R_EAX = (u32) SDL_JoystickFromInstanceID(*(SDL_JoystickID *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickFromPlayerIndex() {  R_EAX = (u32) SDL_JoystickFromPlayerIndex(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickAttachVirtual() {  R_EAX = (u32) SDL_JoystickAttachVirtual(*(SDL_JoystickType *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_JoystickType)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_JoystickType) + sizeof( int)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_JoystickType) + sizeof( int) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_JoystickDetachVirtual() {  R_EAX = (u32) SDL_JoystickDetachVirtual(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickIsVirtual() {  R_EAX = (u32) SDL_JoystickIsVirtual(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickSetVirtualAxis() {  R_EAX = (u32) SDL_JoystickSetVirtualAxis(*(SDL_Joystick * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *)),*( Sint16 *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_JoystickSetVirtualButton() {  R_EAX = (u32) SDL_JoystickSetVirtualButton(*(SDL_Joystick * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_JoystickSetVirtualHat() {  R_EAX = (u32) SDL_JoystickSetVirtualHat(*(SDL_Joystick * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_JoystickName() {  R_EAX = (u32) SDL_JoystickName(*(SDL_Joystick * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetPlayerIndex() {  R_EAX = (u32) SDL_JoystickGetPlayerIndex(*(SDL_Joystick * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickSetPlayerIndex() {  R_EAX = (u32) SDL_JoystickSetPlayerIndex(*(SDL_Joystick * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetGUID() {  R_EAX = (u32) SDL_JoystickGetGUID(*(SDL_Joystick * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetVendor() {  R_EAX = (u32) SDL_JoystickGetVendor(*(SDL_Joystick * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetProduct() {  R_EAX = (u32) SDL_JoystickGetProduct(*(SDL_Joystick * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetProductVersion() {  R_EAX = (u32) SDL_JoystickGetProductVersion(*(SDL_Joystick * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetSerial() {  R_EAX = (u32) SDL_JoystickGetSerial(*(SDL_Joystick * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetType() {  R_EAX = (u32) SDL_JoystickGetType(*(SDL_Joystick * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetGUIDString() {  R_EAX = (u32) SDL_JoystickGetGUIDString(*(SDL_JoystickGUID *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(SDL_JoystickGUID)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_JoystickGUID) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetGUIDFromString() {  R_EAX = (u32) SDL_JoystickGetGUIDFromString(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetAttached() {  R_EAX = (u32) SDL_JoystickGetAttached(*(SDL_Joystick * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickInstanceID() {  R_EAX = (u32) SDL_JoystickInstanceID(*(SDL_Joystick * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickNumAxes() {  R_EAX = (u32) SDL_JoystickNumAxes(*(SDL_Joystick * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickNumBalls() {  R_EAX = (u32) SDL_JoystickNumBalls(*(SDL_Joystick * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickNumHats() {  R_EAX = (u32) SDL_JoystickNumHats(*(SDL_Joystick * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickNumButtons() {  R_EAX = (u32) SDL_JoystickNumButtons(*(SDL_Joystick * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickUpdate() {  R_EAX = (u32) SDL_JoystickUpdate();}
//void X86RUNNERSYSCALLS_SDL_JoystickEventState() {  R_EAX = (u32) SDL_JoystickEventState(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetAxis() {  R_EAX = (u32) SDL_JoystickGetAxis(*(SDL_Joystick * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetAxisInitialState() {  R_EAX = (u32) SDL_JoystickGetAxisInitialState(*(SDL_Joystick * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *)),*( Sint16 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetHat() {  R_EAX = (u32) SDL_JoystickGetHat(*(SDL_Joystick * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetBall() {  R_EAX = (u32) SDL_JoystickGetBall(*(SDL_Joystick * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *) + sizeof( int)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *) + sizeof( int) + sizeof( int *)));}
//void X86RUNNERSYSCALLS_SDL_JoystickGetButton() {  R_EAX = (u32) SDL_JoystickGetButton(*(SDL_Joystick * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *)));}
//void X86RUNNERSYSCALLS_SDL_JoystickRumble() {  R_EAX = (u32) SDL_JoystickRumble(*(SDL_Joystick * *) (R_ESP + sizeof(u32)),*( Uint16 *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *)),*( Uint16 *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *) + sizeof( Uint16)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *) + sizeof( Uint16) + sizeof( Uint16)));}
//void X86RUNNERSYSCALLS_SDL_JoystickRumbleTriggers() {  R_EAX = (u32) SDL_JoystickRumbleTriggers(*(SDL_Joystick * *) (R_ESP + sizeof(u32)),*( Uint16 *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *)),*( Uint16 *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *) + sizeof( Uint16)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *) + sizeof( Uint16) + sizeof( Uint16)));}
//void X86RUNNERSYSCALLS_SDL_JoystickHasLED() {  R_EAX = (u32) SDL_JoystickHasLED(*(SDL_Joystick * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickSetLED() {  R_EAX = (u32) SDL_JoystickSetLED(*(SDL_Joystick * *) (R_ESP + sizeof(u32)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *) + sizeof( Uint8)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_Joystick *) + sizeof( Uint8) + sizeof( Uint8)));}
//void X86RUNNERSYSCALLS_SDL_JoystickClose() {  R_EAX = (u32) SDL_JoystickClose(*(SDL_Joystick * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_JoystickCurrentPowerLevel() {  R_EAX = (u32) SDL_JoystickCurrentPowerLevel(*(SDL_Joystick * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_LockSensors() {  R_EAX = (u32) SDL_LockSensors();}
//void X86RUNNERSYSCALLS_SDL_UnlockSensors() {  R_EAX = (u32) SDL_UnlockSensors();}
//void X86RUNNERSYSCALLS_SDL_NumSensors() {  R_EAX = (u32) SDL_NumSensors();}
//void X86RUNNERSYSCALLS_SDL_SensorGetDeviceName() {  R_EAX = (u32) SDL_SensorGetDeviceName(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SensorGetDeviceType() {  R_EAX = (u32) SDL_SensorGetDeviceType(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SensorGetDeviceNonPortableType() {  R_EAX = (u32) SDL_SensorGetDeviceNonPortableType(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SensorGetDeviceInstanceID() {  R_EAX = (u32) SDL_SensorGetDeviceInstanceID(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SensorOpen() {  R_EAX = (u32) SDL_SensorOpen(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SensorFromInstanceID() {  R_EAX = (u32) SDL_SensorFromInstanceID(*(SDL_SensorID *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SensorGetName() {  R_EAX = (u32) SDL_SensorGetName(*(SDL_Sensor * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SensorGetType() {  R_EAX = (u32) SDL_SensorGetType(*(SDL_Sensor * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SensorGetNonPortableType() {  R_EAX = (u32) SDL_SensorGetNonPortableType(*(SDL_Sensor * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SensorGetInstanceID() {  R_EAX = (u32) SDL_SensorGetInstanceID(*(SDL_Sensor * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SensorGetData() {  R_EAX = (u32) SDL_SensorGetData(*(SDL_Sensor * *) (R_ESP + sizeof(u32)),*( float * *) (R_ESP + sizeof(u32) + sizeof(SDL_Sensor *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Sensor *) + sizeof( float *)));}
//void X86RUNNERSYSCALLS_SDL_SensorClose() {  R_EAX = (u32) SDL_SensorClose(*(SDL_Sensor * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SensorUpdate() {  R_EAX = (u32) SDL_SensorUpdate();}
//void X86RUNNERSYSCALLS_SDL_GameControllerAddMappingsFromRW() {  R_EAX = (u32) SDL_GameControllerAddMappingsFromRW(*(SDL_RWops * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_RWops *)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerAddMapping() {  R_EAX = (u32) SDL_GameControllerAddMapping(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerNumMappings() {  R_EAX = (u32) SDL_GameControllerNumMappings();}
//void X86RUNNERSYSCALLS_SDL_GameControllerMappingForIndex() {  R_EAX = (u32) SDL_GameControllerMappingForIndex(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerMappingForGUID() {  R_EAX = (u32) SDL_GameControllerMappingForGUID(*(SDL_JoystickGUID *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerMapping() {  R_EAX = (u32) SDL_GameControllerMapping(*(SDL_GameController * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_IsGameController() {  R_EAX = (u32) SDL_IsGameController(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerNameForIndex() {  R_EAX = (u32) SDL_GameControllerNameForIndex(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerTypeForIndex() {  R_EAX = (u32) SDL_GameControllerTypeForIndex(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerMappingForDeviceIndex() {  R_EAX = (u32) SDL_GameControllerMappingForDeviceIndex(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerOpen() {  R_EAX = (u32) SDL_GameControllerOpen(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerFromInstanceID() {  R_EAX = (u32) SDL_GameControllerFromInstanceID(*(SDL_JoystickID *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerFromPlayerIndex() {  R_EAX = (u32) SDL_GameControllerFromPlayerIndex(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerName() {  R_EAX = (u32) SDL_GameControllerName(*(SDL_GameController * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetType() {  R_EAX = (u32) SDL_GameControllerGetType(*(SDL_GameController * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetPlayerIndex() {  R_EAX = (u32) SDL_GameControllerGetPlayerIndex(*(SDL_GameController * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerSetPlayerIndex() {  R_EAX = (u32) SDL_GameControllerSetPlayerIndex(*(SDL_GameController * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetVendor() {  R_EAX = (u32) SDL_GameControllerGetVendor(*(SDL_GameController * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetProduct() {  R_EAX = (u32) SDL_GameControllerGetProduct(*(SDL_GameController * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetProductVersion() {  R_EAX = (u32) SDL_GameControllerGetProductVersion(*(SDL_GameController * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetSerial() {  R_EAX = (u32) SDL_GameControllerGetSerial(*(SDL_GameController * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetAttached() {  R_EAX = (u32) SDL_GameControllerGetAttached(*(SDL_GameController * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetJoystick() {  R_EAX = (u32) SDL_GameControllerGetJoystick(*(SDL_GameController * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerEventState() {  R_EAX = (u32) SDL_GameControllerEventState(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerUpdate() {  R_EAX = (u32) SDL_GameControllerUpdate();}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetAxisFromString() {  R_EAX = (u32) SDL_GameControllerGetAxisFromString(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetStringForAxis() {  R_EAX = (u32) SDL_GameControllerGetStringForAxis(*(SDL_GameControllerAxis *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetBindForAxis() {  R_EAX = (u32) SDL_GameControllerGetBindForAxis(*(SDL_GameController * *) (R_ESP + sizeof(u32)),*( SDL_GameControllerAxis *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerHasAxis() {  R_EAX = (u32) SDL_GameControllerHasAxis(*(SDL_GameController * *) (R_ESP + sizeof(u32)),*( SDL_GameControllerAxis *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetAxis() {  R_EAX = (u32) SDL_GameControllerGetAxis(*(SDL_GameController * *) (R_ESP + sizeof(u32)),*( SDL_GameControllerAxis *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetButtonFromString() {  R_EAX = (u32) SDL_GameControllerGetButtonFromString(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetStringForButton() {  R_EAX = (u32) SDL_GameControllerGetStringForButton(*(SDL_GameControllerButton *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetBindForButton() {  R_EAX = (u32) SDL_GameControllerGetBindForButton(*(SDL_GameController * *) (R_ESP + sizeof(u32)),*( SDL_GameControllerButton *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerHasButton() {  R_EAX = (u32) SDL_GameControllerHasButton(*(SDL_GameController * *) (R_ESP + sizeof(u32)),*( SDL_GameControllerButton *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetButton() {  R_EAX = (u32) SDL_GameControllerGetButton(*(SDL_GameController * *) (R_ESP + sizeof(u32)),*( SDL_GameControllerButton *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetNumTouchpads() {  R_EAX = (u32) SDL_GameControllerGetNumTouchpads(*(SDL_GameController * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetNumTouchpadFingers() {  R_EAX = (u32) SDL_GameControllerGetNumTouchpadFingers(*(SDL_GameController * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetTouchpadFinger() {  R_EAX = (u32) SDL_GameControllerGetTouchpadFinger(*(SDL_GameController * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *) + sizeof( int)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *) + sizeof( int) + sizeof( int)),*( float * *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *) + sizeof( int) + sizeof( int) + sizeof( Uint8 *)),*( float * *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *) + sizeof( int) + sizeof( int) + sizeof( Uint8 *) + sizeof( float *)),*( float * *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *) + sizeof( int) + sizeof( int) + sizeof( Uint8 *) + sizeof( float *) + sizeof( float *)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerHasSensor() {  R_EAX = (u32) SDL_GameControllerHasSensor(*(SDL_GameController * *) (R_ESP + sizeof(u32)),*( SDL_SensorType *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerSetSensorEnabled() {  R_EAX = (u32) SDL_GameControllerSetSensorEnabled(*(SDL_GameController * *) (R_ESP + sizeof(u32)),*( SDL_SensorType *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *)),*( SDL_bool *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *) + sizeof( SDL_SensorType)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerIsSensorEnabled() {  R_EAX = (u32) SDL_GameControllerIsSensorEnabled(*(SDL_GameController * *) (R_ESP + sizeof(u32)),*( SDL_SensorType *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerGetSensorData() {  R_EAX = (u32) SDL_GameControllerGetSensorData(*(SDL_GameController * *) (R_ESP + sizeof(u32)),*( SDL_SensorType *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *)),*( float * *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *) + sizeof( SDL_SensorType)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *) + sizeof( SDL_SensorType) + sizeof( float *)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerRumble() {  R_EAX = (u32) SDL_GameControllerRumble(*(SDL_GameController * *) (R_ESP + sizeof(u32)),*( Uint16 *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *)),*( Uint16 *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *) + sizeof( Uint16)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *) + sizeof( Uint16) + sizeof( Uint16)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerRumbleTriggers() {  R_EAX = (u32) SDL_GameControllerRumbleTriggers(*(SDL_GameController * *) (R_ESP + sizeof(u32)),*( Uint16 *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *)),*( Uint16 *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *) + sizeof( Uint16)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *) + sizeof( Uint16) + sizeof( Uint16)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerHasLED() {  R_EAX = (u32) SDL_GameControllerHasLED(*(SDL_GameController * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerSetLED() {  R_EAX = (u32) SDL_GameControllerSetLED(*(SDL_GameController * *) (R_ESP + sizeof(u32)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *) + sizeof( Uint8)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_GameController *) + sizeof( Uint8) + sizeof( Uint8)));}
//void X86RUNNERSYSCALLS_SDL_GameControllerClose() {  R_EAX = (u32) SDL_GameControllerClose(*(SDL_GameController * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetNumTouchDevices() {  R_EAX = (u32) SDL_GetNumTouchDevices();}
//void X86RUNNERSYSCALLS_SDL_GetTouchDevice() {  R_EAX = (u32) SDL_GetTouchDevice(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetTouchDeviceType() {  R_EAX = (u32) SDL_GetTouchDeviceType(*(SDL_TouchID *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetNumTouchFingers() {  R_EAX = (u32) SDL_GetNumTouchFingers(*(SDL_TouchID *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetTouchFinger() {  R_EAX = (u32) SDL_GetTouchFinger(*(SDL_TouchID *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_TouchID)));}
//void X86RUNNERSYSCALLS_SDL_RecordGesture() {  R_EAX = (u32) SDL_RecordGesture(*(SDL_TouchID *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SaveAllDollarTemplates() {  R_EAX = (u32) SDL_SaveAllDollarTemplates(*(SDL_RWops * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SaveDollarTemplate() {  R_EAX = (u32) SDL_SaveDollarTemplate(*(SDL_GestureID *) (R_ESP + sizeof(u32)),*( SDL_RWops * *) (R_ESP + sizeof(u32) + sizeof(SDL_GestureID)));}
//void X86RUNNERSYSCALLS_SDL_LoadDollarTemplates() {  R_EAX = (u32) SDL_LoadDollarTemplates(*(SDL_TouchID *) (R_ESP + sizeof(u32)),*( SDL_RWops * *) (R_ESP + sizeof(u32) + sizeof(SDL_TouchID)));}
//void X86RUNNERSYSCALLS_SDL_PumpEvents() {  R_EAX = (u32) SDL_PumpEvents();}
//void X86RUNNERSYSCALLS_SDL_PeepEvents() {  R_EAX = (u32) SDL_PeepEvents(*(SDL_Event * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Event *)),*( SDL_eventaction *) (R_ESP + sizeof(u32) + sizeof(SDL_Event *) + sizeof( int)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_Event *) + sizeof( int) + sizeof( SDL_eventaction)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_Event *) + sizeof( int) + sizeof( SDL_eventaction) + sizeof( Uint32)));}
//void X86RUNNERSYSCALLS_SDL_HasEvent() {  R_EAX = (u32) SDL_HasEvent(*(Uint32 *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_HasEvents() {  R_EAX = (u32) SDL_HasEvents(*(Uint32 *) (R_ESP + sizeof(u32)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(Uint32)));}
//void X86RUNNERSYSCALLS_SDL_FlushEvent() {  R_EAX = (u32) SDL_FlushEvent(*(Uint32 *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_FlushEvents() {  R_EAX = (u32) SDL_FlushEvents(*(Uint32 *) (R_ESP + sizeof(u32)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(Uint32)));}
//void X86RUNNERSYSCALLS_SDL_PollEvent() {  R_EAX = (u32) SDL_PollEvent(*(SDL_Event * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_WaitEvent() {  R_EAX = (u32) SDL_WaitEvent(*(SDL_Event * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_WaitEventTimeout() {  R_EAX = (u32) SDL_WaitEventTimeout(*(SDL_Event * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Event *)));}
//void X86RUNNERSYSCALLS_SDL_PushEvent() {  R_EAX = (u32) SDL_PushEvent(*(SDL_Event * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SetEventFilter() {  R_EAX = (u32) SDL_SetEventFilter(*(SDL_EventFilter *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(SDL_EventFilter)));}
//void X86RUNNERSYSCALLS_SDL_GetEventFilter() {  R_EAX = (u32) SDL_GetEventFilter(*(SDL_EventFilter * *) (R_ESP + sizeof(u32)),*( void ** *) (R_ESP + sizeof(u32) + sizeof(SDL_EventFilter *)));}
//void X86RUNNERSYSCALLS_SDL_AddEventWatch() {  R_EAX = (u32) SDL_AddEventWatch(*(SDL_EventFilter *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(SDL_EventFilter)));}
//void X86RUNNERSYSCALLS_SDL_DelEventWatch() {  R_EAX = (u32) SDL_DelEventWatch(*(SDL_EventFilter *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(SDL_EventFilter)));}
//void X86RUNNERSYSCALLS_SDL_FilterEvents() {  R_EAX = (u32) SDL_FilterEvents(*(SDL_EventFilter *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(SDL_EventFilter)));}
//void X86RUNNERSYSCALLS_SDL_EventState() {  R_EAX = (u32) SDL_EventState(*(Uint32 *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(Uint32)));}
//void X86RUNNERSYSCALLS_SDL_RegisterEvents() {  R_EAX = (u32) SDL_RegisterEvents(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetBasePath() {  R_EAX = (u32) SDL_GetBasePath();}
//void X86RUNNERSYSCALLS_SDL_GetPrefPath() {  R_EAX = (u32) SDL_GetPrefPath(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_SDL_NumHaptics() {  R_EAX = (u32) SDL_NumHaptics();}
//void X86RUNNERSYSCALLS_SDL_HapticName() {  R_EAX = (u32) SDL_HapticName(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_HapticOpen() {  R_EAX = (u32) SDL_HapticOpen(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_HapticOpened() {  R_EAX = (u32) SDL_HapticOpened(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_HapticIndex() {  R_EAX = (u32) SDL_HapticIndex(*(SDL_Haptic * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_MouseIsHaptic() {  R_EAX = (u32) SDL_MouseIsHaptic();}
//void X86RUNNERSYSCALLS_SDL_HapticOpenFromMouse() {  R_EAX = (u32) SDL_HapticOpenFromMouse();}
//void X86RUNNERSYSCALLS_SDL_JoystickIsHaptic() {  R_EAX = (u32) SDL_JoystickIsHaptic(*(SDL_Joystick * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_HapticOpenFromJoystick() {  R_EAX = (u32) SDL_HapticOpenFromJoystick(*(SDL_Joystick * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_HapticClose() {  R_EAX = (u32) SDL_HapticClose(*(SDL_Haptic * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_HapticNumEffects() {  R_EAX = (u32) SDL_HapticNumEffects(*(SDL_Haptic * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_HapticNumEffectsPlaying() {  R_EAX = (u32) SDL_HapticNumEffectsPlaying(*(SDL_Haptic * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_HapticQuery() {  R_EAX = (u32) SDL_HapticQuery(*(SDL_Haptic * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_HapticNumAxes() {  R_EAX = (u32) SDL_HapticNumAxes(*(SDL_Haptic * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_HapticEffectSupported() {  R_EAX = (u32) SDL_HapticEffectSupported(*(SDL_Haptic * *) (R_ESP + sizeof(u32)),*( SDL_HapticEffect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Haptic *)));}
//void X86RUNNERSYSCALLS_SDL_HapticNewEffect() {  R_EAX = (u32) SDL_HapticNewEffect(*(SDL_Haptic * *) (R_ESP + sizeof(u32)),*( SDL_HapticEffect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Haptic *)));}
//void X86RUNNERSYSCALLS_SDL_HapticUpdateEffect() {  R_EAX = (u32) SDL_HapticUpdateEffect(*(SDL_Haptic * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Haptic *)),*( SDL_HapticEffect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Haptic *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_HapticRunEffect() {  R_EAX = (u32) SDL_HapticRunEffect(*(SDL_Haptic * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Haptic *)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_Haptic *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_HapticStopEffect() {  R_EAX = (u32) SDL_HapticStopEffect(*(SDL_Haptic * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Haptic *)));}
//void X86RUNNERSYSCALLS_SDL_HapticDestroyEffect() {  R_EAX = (u32) SDL_HapticDestroyEffect(*(SDL_Haptic * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Haptic *)));}
//void X86RUNNERSYSCALLS_SDL_HapticGetEffectStatus() {  R_EAX = (u32) SDL_HapticGetEffectStatus(*(SDL_Haptic * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Haptic *)));}
//void X86RUNNERSYSCALLS_SDL_HapticSetGain() {  R_EAX = (u32) SDL_HapticSetGain(*(SDL_Haptic * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Haptic *)));}
//void X86RUNNERSYSCALLS_SDL_HapticSetAutocenter() {  R_EAX = (u32) SDL_HapticSetAutocenter(*(SDL_Haptic * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Haptic *)));}
//void X86RUNNERSYSCALLS_SDL_HapticPause() {  R_EAX = (u32) SDL_HapticPause(*(SDL_Haptic * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_HapticUnpause() {  R_EAX = (u32) SDL_HapticUnpause(*(SDL_Haptic * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_HapticStopAll() {  R_EAX = (u32) SDL_HapticStopAll(*(SDL_Haptic * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_HapticRumbleSupported() {  R_EAX = (u32) SDL_HapticRumbleSupported(*(SDL_Haptic * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_HapticRumbleInit() {  R_EAX = (u32) SDL_HapticRumbleInit(*(SDL_Haptic * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_HapticRumblePlay() {  R_EAX = (u32) SDL_HapticRumblePlay(*(SDL_Haptic * *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(SDL_Haptic *)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_Haptic *) + sizeof( float)));}
//void X86RUNNERSYSCALLS_SDL_HapticRumbleStop() {  R_EAX = (u32) SDL_HapticRumbleStop(*(SDL_Haptic * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SetHintWithPriority() {  R_EAX = (u32) SDL_SetHintWithPriority(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)),*( SDL_HintPriority *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_SetHint() {  R_EAX = (u32) SDL_SetHint(*(char * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_SDL_GetHint() {  R_EAX = (u32) SDL_GetHint(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetHintBoolean() {  R_EAX = (u32) SDL_GetHintBoolean(*(char * *) (R_ESP + sizeof(u32)),*( SDL_bool *) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_SDL_AddHintCallback() {  R_EAX = (u32) SDL_AddHintCallback(*(char * *) (R_ESP + sizeof(u32)),*( SDL_HintCallback *) (R_ESP + sizeof(u32) + sizeof(char *)),*( void * *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( SDL_HintCallback)));}
//void X86RUNNERSYSCALLS_SDL_DelHintCallback() {  R_EAX = (u32) SDL_DelHintCallback(*(char * *) (R_ESP + sizeof(u32)),*( SDL_HintCallback *) (R_ESP + sizeof(u32) + sizeof(char *)),*( void * *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( SDL_HintCallback)));}
//void X86RUNNERSYSCALLS_SDL_ClearHints() {  R_EAX = (u32) SDL_ClearHints();}
//void X86RUNNERSYSCALLS_SDL_LoadObject() {  R_EAX = (u32) SDL_LoadObject(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_LoadFunction() {  R_EAX = (u32) SDL_LoadFunction(*(void * *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(void *)));}
//void X86RUNNERSYSCALLS_SDL_UnloadObject() {  R_EAX = (u32) SDL_UnloadObject(*(void * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_LogSetAllPriority() {  R_EAX = (u32) SDL_LogSetAllPriority(*(SDL_LogPriority *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_LogSetPriority() {  R_EAX = (u32) SDL_LogSetPriority(*(int *) (R_ESP + sizeof(u32)),*( SDL_LogPriority *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_SDL_LogGetPriority() {  R_EAX = (u32) SDL_LogGetPriority(*(int *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_LogResetPriorities() {  R_EAX = (u32) SDL_LogResetPriorities();}
//void X86RUNNERSYSCALLS_SDL_Log() {  R_EAX = (u32) SDL_Log(*(char * *) (R_ESP + sizeof(u32)),(char*) (R_ESP + sizeof(u32) + sizeof(char *)));}
//void X86RUNNERSYSCALLS_SDL_LogVerbose() {  R_EAX = (u32) SDL_LogVerbose(*(int *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(int)),(char*) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_LogDebug() {  R_EAX = (u32) SDL_LogDebug(*(int *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(int)),(char*) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_LogInfo() {  R_EAX = (u32) SDL_LogInfo(*(int *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(int)),(char*) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_LogWarn() {  R_EAX = (u32) SDL_LogWarn(*(int *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(int)),(char*) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_LogError() {  R_EAX = (u32) SDL_LogError(*(int *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(int)),(char*) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_LogCritical() {  R_EAX = (u32) SDL_LogCritical(*(int *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(int)),(char*) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_LogMessage() {  R_EAX = (u32) SDL_LogMessage(*(int *) (R_ESP + sizeof(u32)),*( SDL_LogPriority *) (R_ESP + sizeof(u32) + sizeof(int)),*( char * *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( SDL_LogPriority)),(char*) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( SDL_LogPriority) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_LogGetOutputFunction() {  R_EAX = (u32) SDL_LogGetOutputFunction(*(SDL_LogOutputFunction * *) (R_ESP + sizeof(u32)),*( void ** *) (R_ESP + sizeof(u32) + sizeof(SDL_LogOutputFunction *)));}
//void X86RUNNERSYSCALLS_SDL_LogSetOutputFunction() {  R_EAX = (u32) SDL_LogSetOutputFunction(*(SDL_LogOutputFunction *) (R_ESP + sizeof(u32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(SDL_LogOutputFunction)));}
//void X86RUNNERSYSCALLS_SDL_ShowMessageBox() {  R_EAX = (u32) SDL_ShowMessageBox(*(SDL_MessageBoxData * *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_MessageBoxData *)));}
//void X86RUNNERSYSCALLS_SDL_ShowSimpleMessageBox() {  R_EAX = (u32) SDL_ShowSimpleMessageBox(*(Uint32 *) (R_ESP + sizeof(u32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(Uint32)),*( char * *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( char *)),*( SDL_Window * *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( char *) + sizeof( char *)));}
//void X86RUNNERSYSCALLS_SDL_Metal_CreateView() {  R_EAX = (u32) SDL_Metal_CreateView(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_Metal_DestroyView() {  R_EAX = (u32) SDL_Metal_DestroyView(*(SDL_MetalView *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_Metal_GetLayer() {  R_EAX = (u32) SDL_Metal_GetLayer(*(SDL_MetalView *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_Metal_GetDrawableSize() {  R_EAX = (u32) SDL_Metal_GetDrawableSize(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( int *)));}
//void X86RUNNERSYSCALLS_SDL_GetPowerInfo() {  R_EAX = (u32) SDL_GetPowerInfo(*(int * *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(int *)));}
//void X86RUNNERSYSCALLS_SDL_GetNumRenderDrivers() {  R_EAX = (u32) SDL_GetNumRenderDrivers();}
//void X86RUNNERSYSCALLS_SDL_GetRenderDriverInfo() {  R_EAX = (u32) SDL_GetRenderDriverInfo(*(int *) (R_ESP + sizeof(u32)),*( SDL_RendererInfo * *) (R_ESP + sizeof(u32) + sizeof(int)));}
//void X86RUNNERSYSCALLS_SDL_CreateWindowAndRenderer() {  R_EAX = (u32) SDL_CreateWindowAndRenderer(*(int *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(int)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( int)),*( SDL_Window ** *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( int) + sizeof( Uint32)),*( SDL_Renderer ** *) (R_ESP + sizeof(u32) + sizeof(int) + sizeof( int) + sizeof( Uint32) + sizeof( SDL_Window **)));}
//void X86RUNNERSYSCALLS_SDL_CreateRenderer() {  R_EAX = (u32) SDL_CreateRenderer(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_CreateSoftwareRenderer() {  R_EAX = (u32) SDL_CreateSoftwareRenderer(*(SDL_Surface * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetRenderer() {  R_EAX = (u32) SDL_GetRenderer(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetRendererInfo() {  R_EAX = (u32) SDL_GetRendererInfo(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_RendererInfo * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)));}
//void X86RUNNERSYSCALLS_SDL_GetRendererOutputSize() {  R_EAX = (u32) SDL_GetRendererOutputSize(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( int *)));}
//void X86RUNNERSYSCALLS_SDL_CreateTexture() {  R_EAX = (u32) SDL_CreateTexture(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( Uint32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( Uint32) + sizeof( int)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( Uint32) + sizeof( int) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_CreateTextureFromSurface() {  R_EAX = (u32) SDL_CreateTextureFromSurface(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_Surface * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)));}
//void X86RUNNERSYSCALLS_SDL_QueryTexture() {  R_EAX = (u32) SDL_QueryTexture(*(SDL_Texture * *) (R_ESP + sizeof(u32)),*( Uint32 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *) + sizeof( Uint32 *)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *) + sizeof( Uint32 *) + sizeof( int *)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *) + sizeof( Uint32 *) + sizeof( int *) + sizeof( int *)));}
//void X86RUNNERSYSCALLS_SDL_SetTextureColorMod() {  R_EAX = (u32) SDL_SetTextureColorMod(*(SDL_Texture * *) (R_ESP + sizeof(u32)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *) + sizeof( Uint8)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *) + sizeof( Uint8) + sizeof( Uint8)));}
//void X86RUNNERSYSCALLS_SDL_GetTextureColorMod() {  R_EAX = (u32) SDL_GetTextureColorMod(*(SDL_Texture * *) (R_ESP + sizeof(u32)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *) + sizeof( Uint8 *)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *) + sizeof( Uint8 *) + sizeof( Uint8 *)));}
//void X86RUNNERSYSCALLS_SDL_SetTextureAlphaMod() {  R_EAX = (u32) SDL_SetTextureAlphaMod(*(SDL_Texture * *) (R_ESP + sizeof(u32)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *)));}
//void X86RUNNERSYSCALLS_SDL_GetTextureAlphaMod() {  R_EAX = (u32) SDL_GetTextureAlphaMod(*(SDL_Texture * *) (R_ESP + sizeof(u32)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *)));}
//void X86RUNNERSYSCALLS_SDL_SetTextureBlendMode() {  R_EAX = (u32) SDL_SetTextureBlendMode(*(SDL_Texture * *) (R_ESP + sizeof(u32)),*( SDL_BlendMode *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *)));}
//void X86RUNNERSYSCALLS_SDL_GetTextureBlendMode() {  R_EAX = (u32) SDL_GetTextureBlendMode(*(SDL_Texture * *) (R_ESP + sizeof(u32)),*( SDL_BlendMode * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *)));}
//void X86RUNNERSYSCALLS_SDL_SetTextureScaleMode() {  R_EAX = (u32) SDL_SetTextureScaleMode(*(SDL_Texture * *) (R_ESP + sizeof(u32)),*( SDL_ScaleMode *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *)));}
//void X86RUNNERSYSCALLS_SDL_GetTextureScaleMode() {  R_EAX = (u32) SDL_GetTextureScaleMode(*(SDL_Texture * *) (R_ESP + sizeof(u32)),*( SDL_ScaleMode * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *)));}
//void X86RUNNERSYSCALLS_SDL_UpdateTexture() {  R_EAX = (u32) SDL_UpdateTexture(*(SDL_Texture * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *)),*( void * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *) + sizeof( SDL_Rect *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *) + sizeof( SDL_Rect *) + sizeof( void *)));}
//void X86RUNNERSYSCALLS_SDL_UpdateYUVTexture() {  R_EAX = (u32) SDL_UpdateYUVTexture(*(SDL_Texture * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *) + sizeof( SDL_Rect *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *) + sizeof( SDL_Rect *) + sizeof( Uint8 *)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *) + sizeof( SDL_Rect *) + sizeof( Uint8 *) + sizeof( int)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *) + sizeof( SDL_Rect *) + sizeof( Uint8 *) + sizeof( int) + sizeof( Uint8 *)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *) + sizeof( SDL_Rect *) + sizeof( Uint8 *) + sizeof( int) + sizeof( Uint8 *) + sizeof( int)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *) + sizeof( SDL_Rect *) + sizeof( Uint8 *) + sizeof( int) + sizeof( Uint8 *) + sizeof( int) + sizeof( Uint8 *)));}
//void X86RUNNERSYSCALLS_SDL_LockTexture() {  R_EAX = (u32) SDL_LockTexture(*(SDL_Texture * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *)),*( void ** *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *) + sizeof( SDL_Rect *)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *) + sizeof( SDL_Rect *) + sizeof( void **)));}
//void X86RUNNERSYSCALLS_SDL_LockTextureToSurface() {  R_EAX = (u32) SDL_LockTextureToSurface(*(SDL_Texture * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *)),*( SDL_Surface ** *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *) + sizeof( SDL_Rect *)));}
//void X86RUNNERSYSCALLS_SDL_UnlockTexture() {  R_EAX = (u32) SDL_UnlockTexture(*(SDL_Texture * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_RenderTargetSupported() {  R_EAX = (u32) SDL_RenderTargetSupported(*(SDL_Renderer * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SetRenderTarget() {  R_EAX = (u32) SDL_SetRenderTarget(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_Texture * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)));}
//void X86RUNNERSYSCALLS_SDL_GetRenderTarget() {  R_EAX = (u32) SDL_GetRenderTarget(*(SDL_Renderer * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_RenderSetLogicalSize() {  R_EAX = (u32) SDL_RenderSetLogicalSize(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_RenderGetLogicalSize() {  R_EAX = (u32) SDL_RenderGetLogicalSize(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( int * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( int *)));}
//void X86RUNNERSYSCALLS_SDL_RenderSetIntegerScale() {  R_EAX = (u32) SDL_RenderSetIntegerScale(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_bool *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)));}
//void X86RUNNERSYSCALLS_SDL_RenderGetIntegerScale() {  R_EAX = (u32) SDL_RenderGetIntegerScale(*(SDL_Renderer * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_RenderSetViewport() {  R_EAX = (u32) SDL_RenderSetViewport(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)));}
//void X86RUNNERSYSCALLS_SDL_RenderGetViewport() {  R_EAX = (u32) SDL_RenderGetViewport(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)));}
//void X86RUNNERSYSCALLS_SDL_RenderSetClipRect() {  R_EAX = (u32) SDL_RenderSetClipRect(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)));}
//void X86RUNNERSYSCALLS_SDL_RenderGetClipRect() {  R_EAX = (u32) SDL_RenderGetClipRect(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)));}
//void X86RUNNERSYSCALLS_SDL_RenderIsClipEnabled() {  R_EAX = (u32) SDL_RenderIsClipEnabled(*(SDL_Renderer * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_RenderSetScale() {  R_EAX = (u32) SDL_RenderSetScale(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( float *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( float)));}
//void X86RUNNERSYSCALLS_SDL_RenderGetScale() {  R_EAX = (u32) SDL_RenderGetScale(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( float * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( float * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( float *)));}
//void X86RUNNERSYSCALLS_SDL_SetRenderDrawColor() {  R_EAX = (u32) SDL_SetRenderDrawColor(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( Uint8)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( Uint8) + sizeof( Uint8)),*( Uint8 *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( Uint8) + sizeof( Uint8) + sizeof( Uint8)));}
//void X86RUNNERSYSCALLS_SDL_GetRenderDrawColor() {  R_EAX = (u32) SDL_GetRenderDrawColor(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( Uint8 *)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( Uint8 *) + sizeof( Uint8 *)),*( Uint8 * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( Uint8 *) + sizeof( Uint8 *) + sizeof( Uint8 *)));}
//void X86RUNNERSYSCALLS_SDL_SetRenderDrawBlendMode() {  R_EAX = (u32) SDL_SetRenderDrawBlendMode(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_BlendMode *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)));}
//void X86RUNNERSYSCALLS_SDL_GetRenderDrawBlendMode() {  R_EAX = (u32) SDL_GetRenderDrawBlendMode(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_BlendMode * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)));}
//void X86RUNNERSYSCALLS_SDL_RenderClear() {  R_EAX = (u32) SDL_RenderClear(*(SDL_Renderer * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_RenderDrawPoint() {  R_EAX = (u32) SDL_RenderDrawPoint(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_RenderDrawPoints() {  R_EAX = (u32) SDL_RenderDrawPoints(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_Point * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Point *)));}
//void X86RUNNERSYSCALLS_SDL_RenderDrawLine() {  R_EAX = (u32) SDL_RenderDrawLine(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( int)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( int) + sizeof( int)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( int) + sizeof( int) + sizeof( int)));}
//void X86RUNNERSYSCALLS_SDL_RenderDrawLines() {  R_EAX = (u32) SDL_RenderDrawLines(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_Point * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Point *)));}
//void X86RUNNERSYSCALLS_SDL_RenderDrawRect() {  R_EAX = (u32) SDL_RenderDrawRect(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)));}
//void X86RUNNERSYSCALLS_SDL_RenderDrawRects() {  R_EAX = (u32) SDL_RenderDrawRects(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Rect *)));}
//void X86RUNNERSYSCALLS_SDL_RenderFillRect() {  R_EAX = (u32) SDL_RenderFillRect(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)));}
//void X86RUNNERSYSCALLS_SDL_RenderFillRects() {  R_EAX = (u32) SDL_RenderFillRects(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Rect *)));}
//void X86RUNNERSYSCALLS_SDL_RenderCopy() {  R_EAX = (u32) SDL_RenderCopy(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_Texture * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Texture *)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Texture *) + sizeof( SDL_Rect *)));}
//void X86RUNNERSYSCALLS_SDL_RenderCopyEx() {  R_EAX = (u32) SDL_RenderCopyEx(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_Texture * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Texture *)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Texture *) + sizeof( SDL_Rect *)),*( double  *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Texture *) + sizeof( SDL_Rect *) + sizeof( SDL_Rect *)),*( SDL_Point * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Texture *) + sizeof( SDL_Rect *) + sizeof( SDL_Rect *) + sizeof( double )),*( SDL_RendererFlip  *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Texture *) + sizeof( SDL_Rect *) + sizeof( SDL_Rect *) + sizeof( double ) + sizeof( SDL_Point *)));}
//void X86RUNNERSYSCALLS_SDL_RenderDrawPointF() {  R_EAX = (u32) SDL_RenderDrawPointF(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( float *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( float)));}
//void X86RUNNERSYSCALLS_SDL_RenderDrawPointsF() {  R_EAX = (u32) SDL_RenderDrawPointsF(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_FPoint * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_FPoint *)));}
//void X86RUNNERSYSCALLS_SDL_RenderDrawLineF() {  R_EAX = (u32) SDL_RenderDrawLineF(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( float *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( float *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( float)),*( float *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( float) + sizeof( float)),*( float *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( float) + sizeof( float) + sizeof( float)));}
//void X86RUNNERSYSCALLS_SDL_RenderDrawLinesF() {  R_EAX = (u32) SDL_RenderDrawLinesF(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_FPoint * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_FPoint *)));}
//void X86RUNNERSYSCALLS_SDL_RenderDrawRectF() {  R_EAX = (u32) SDL_RenderDrawRectF(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_FRect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)));}
//void X86RUNNERSYSCALLS_SDL_RenderDrawRectsF() {  R_EAX = (u32) SDL_RenderDrawRectsF(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_FRect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_FRect *)));}
//void X86RUNNERSYSCALLS_SDL_RenderFillRectF() {  R_EAX = (u32) SDL_RenderFillRectF(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_FRect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)));}
//void X86RUNNERSYSCALLS_SDL_RenderFillRectsF() {  R_EAX = (u32) SDL_RenderFillRectsF(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_FRect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_FRect *)));}
//void X86RUNNERSYSCALLS_SDL_RenderCopyF() {  R_EAX = (u32) SDL_RenderCopyF(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_Texture * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Texture *)),*( SDL_FRect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Texture *) + sizeof( SDL_Rect *)));}
//void X86RUNNERSYSCALLS_SDL_RenderCopyExF() {  R_EAX = (u32) SDL_RenderCopyExF(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_Texture * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Texture *)),*( SDL_FRect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Texture *) + sizeof( SDL_Rect *)),*( double  *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Texture *) + sizeof( SDL_Rect *) + sizeof( SDL_FRect *)),*( SDL_FPoint * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Texture *) + sizeof( SDL_Rect *) + sizeof( SDL_FRect *) + sizeof( double )),*( SDL_RendererFlip  *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Texture *) + sizeof( SDL_Rect *) + sizeof( SDL_FRect *) + sizeof( double ) + sizeof( SDL_FPoint *)));}
//void X86RUNNERSYSCALLS_SDL_RenderReadPixels() {  R_EAX = (u32) SDL_RenderReadPixels(*(SDL_Renderer * *) (R_ESP + sizeof(u32)),*( SDL_Rect * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Rect *)),*( void * *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Rect *) + sizeof( Uint32)),*( int *) (R_ESP + sizeof(u32) + sizeof(SDL_Renderer *) + sizeof( SDL_Rect *) + sizeof( Uint32) + sizeof( void *)));}
//void X86RUNNERSYSCALLS_SDL_RenderPresent() {  R_EAX = (u32) SDL_RenderPresent(*(SDL_Renderer * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_DestroyTexture() {  R_EAX = (u32) SDL_DestroyTexture(*(SDL_Texture * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_DestroyRenderer() {  R_EAX = (u32) SDL_DestroyRenderer(*(SDL_Renderer * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_RenderFlush() {  R_EAX = (u32) SDL_RenderFlush(*(SDL_Renderer * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GL_BindTexture() {  R_EAX = (u32) SDL_GL_BindTexture(*(SDL_Texture * *) (R_ESP + sizeof(u32)),*( float * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *)),*( float * *) (R_ESP + sizeof(u32) + sizeof(SDL_Texture *) + sizeof( float *)));}
//void X86RUNNERSYSCALLS_SDL_GL_UnbindTexture() {  R_EAX = (u32) SDL_GL_UnbindTexture(*(SDL_Texture * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_RenderGetMetalLayer() {  R_EAX = (u32) SDL_RenderGetMetalLayer(*(SDL_Renderer * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_RenderGetMetalCommandEncoder() {  R_EAX = (u32) SDL_RenderGetMetalCommandEncoder(*(SDL_Renderer * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_CreateShapedWindow() {  R_EAX = (u32) SDL_CreateShapedWindow(*(char * *) (R_ESP + sizeof(u32)),*( unsigned int *) (R_ESP + sizeof(u32) + sizeof(char *)),*( unsigned int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( unsigned int)),*( unsigned int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( unsigned int) + sizeof( unsigned int)),*( unsigned int *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( unsigned int) + sizeof( unsigned int) + sizeof( unsigned int)),*( Uint32 *) (R_ESP + sizeof(u32) + sizeof(char *) + sizeof( unsigned int) + sizeof( unsigned int) + sizeof( unsigned int) + sizeof( unsigned int)));}
//void X86RUNNERSYSCALLS_SDL_IsShapedWindow() {  R_EAX = (u32) SDL_IsShapedWindow(*(SDL_Window * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_SetWindowShape() {  R_EAX = (u32) SDL_SetWindowShape(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( SDL_Surface * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)),*( SDL_WindowShapeMode * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *) + sizeof( SDL_Surface *)));}
//void X86RUNNERSYSCALLS_SDL_GetShapedWindowMode() {  R_EAX = (u32) SDL_GetShapedWindowMode(*(SDL_Window * *) (R_ESP + sizeof(u32)),*( SDL_WindowShapeMode * *) (R_ESP + sizeof(u32) + sizeof(SDL_Window *)));}
//void X86RUNNERSYSCALLS_SDL_LinuxSetThreadPriority() {  R_EAX = (u32) SDL_LinuxSetThreadPriority(*(Sint64 *) (R_ESP + sizeof(u32)),*( int *) (R_ESP + sizeof(u32) + sizeof(Sint64)));}
//void X86RUNNERSYSCALLS_SDL_IsTablet() {  R_EAX = (u32) SDL_IsTablet();}
//void X86RUNNERSYSCALLS_SDL_OnApplicationWillTerminate() {  R_EAX = (u32) SDL_OnApplicationWillTerminate();}
//void X86RUNNERSYSCALLS_SDL_OnApplicationDidReceiveMemoryWarning() {  R_EAX = (u32) SDL_OnApplicationDidReceiveMemoryWarning();}
//void X86RUNNERSYSCALLS_SDL_OnApplicationWillResignActive() {  R_EAX = (u32) SDL_OnApplicationWillResignActive();}
//void X86RUNNERSYSCALLS_SDL_OnApplicationDidEnterBackground() {  R_EAX = (u32) SDL_OnApplicationDidEnterBackground();}
//void X86RUNNERSYSCALLS_SDL_OnApplicationWillEnterForeground() {  R_EAX = (u32) SDL_OnApplicationWillEnterForeground();}
//void X86RUNNERSYSCALLS_SDL_OnApplicationDidBecomeActive() {  R_EAX = (u32) SDL_OnApplicationDidBecomeActive();}
//void X86RUNNERSYSCALLS_SDL_GetTicks() {  R_EAX = (u32) SDL_GetTicks();}
//void X86RUNNERSYSCALLS_SDL_GetPerformanceCounter() {  Uint64  ret = SDL_GetPerformanceCounter();  R_EAX = ((u32*) &ret)[0];  R_EDX = ((u32*) &ret)[1];}
//void X86RUNNERSYSCALLS_SDL_GetPerformanceFrequency() {  Uint64  ret = SDL_GetPerformanceFrequency();  R_EAX = ((u32*) &ret)[0];  R_EDX = ((u32*) &ret)[1];}
//void X86RUNNERSYSCALLS_SDL_Delay() {  R_EAX = (u32) SDL_Delay(*(Uint32 *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_AddTimer() {  R_EAX = (u32) SDL_AddTimer(*(Uint32 *) (R_ESP + sizeof(u32)),*( SDL_TimerCallback *) (R_ESP + sizeof(u32) + sizeof(Uint32)),*( void * *) (R_ESP + sizeof(u32) + sizeof(Uint32) + sizeof( SDL_TimerCallback)));}
//void X86RUNNERSYSCALLS_SDL_RemoveTimer() {  R_EAX = (u32) SDL_RemoveTimer(*(SDL_TimerID *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetVersion() {  R_EAX = (u32) SDL_GetVersion(*(SDL_version * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_GetRevision() {  R_EAX = (u32) SDL_GetRevision();}
//void X86RUNNERSYSCALLS_SDL_GetRevisionNumber() {  R_EAX = (u32) SDL_GetRevisionNumber();}
//void X86RUNNERSYSCALLS_SDL_GetPreferredLocales() {  R_EAX = (u32) SDL_GetPreferredLocales();}
//void X86RUNNERSYSCALLS_SDL_OpenURL() {  R_EAX = (u32) SDL_OpenURL(*(char * *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_Init() {  R_EAX = (u32) SDL_Init(*(Uint32 *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_InitSubSystem() {  R_EAX = (u32) SDL_InitSubSystem(*(Uint32 *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_QuitSubSystem() {  R_EAX = (u32) SDL_QuitSubSystem(*(Uint32 *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_WasInit() {  R_EAX = (u32) SDL_WasInit(*(Uint32 *) (R_ESP + sizeof(u32)));}
//void X86RUNNERSYSCALLS_SDL_Quit() {  R_EAX = (u32) SDL_Quit();}
//void* X86Runner_getFnAddress(const char* sym)
//{
//  if ( !strcmp("__gmon_start__", sym) ) return 0;
//  if ( !strcmp("__libc_start_main", sym) ) return &X86RunnerSyscalls___libc_start_main;
//  if ( !strcmp("printf", sym) ) return &X86RunnerSyscalls_printf;
//  if ( !strcmp("snprintf", sym) ) return &X86RunnerSyscalls_snprintf;
//  if ( !strcmp("SDL_Delay", sym) ) return &X86RunnerSyscalls_SDL_Delay;
//
//  if ( !strcmp("SDL_GetPlatform", sym) ) return &SDL_GetPlatform;
//  if ( !strcmp("select", sym) ) return &select;
//  if ( !strcmp("remove", sym) ) return &remove;
//  if ( !strcmp("rename", sym) ) return &rename;
//  if ( !strcmp("renameat", sym) ) return &renameat;
//  if ( !strcmp("tmpfile", sym) ) return &tmpfile;
//  if ( !strcmp("tmpnam", sym) ) return &tmpnam;
//  if ( !strcmp("tmpnam_r", sym) ) return &tmpnam_r;
//  if ( !strcmp("tempnam", sym) ) return &tempnam;
//  if ( !strcmp("fclose", sym) ) return &fclose;
//  if ( !strcmp("fflush", sym) ) return &fflush;
//  if ( !strcmp("fflush_unlocked", sym) ) return &fflush_unlocked;
//  if ( !strcmp("fopen", sym) ) return &fopen;
//  if ( !strcmp("freopen", sym) ) return &freopen;
//  if ( !strcmp("fdopen", sym) ) return &fdopen;
//  if ( !strcmp("fmemopen", sym) ) return &fmemopen;
//  if ( !strcmp("open_memstream", sym) ) return &open_memstream;
//  if ( !strcmp("setbuf", sym) ) return &setbuf;
//  if ( !strcmp("setvbuf", sym) ) return &setvbuf;
//  if ( !strcmp("setbuffer", sym) ) return &setbuffer;
//  if ( !strcmp("setlinebuf", sym) ) return &setlinebuf;
//  if ( !strcmp("fprintf", sym) ) return &fprintf;
//  if ( !strcmp("printf", sym) ) return &printf;
//  if ( !strcmp("sprintf", sym) ) return &sprintf;
//  if ( !strcmp("snprintf", sym) ) return &snprintf;
//  if ( !strcmp("dprintf", sym) ) return &dprintf;
//  if ( !strcmp("fscanf", sym) ) return &fscanf;
//  if ( !strcmp("scanf", sym) ) return &scanf;
//  if ( !strcmp("sscanf", sym) ) return &sscanf;
//  if ( !strcmp("fgetc", sym) ) return &fgetc;
//  if ( !strcmp("getc", sym) ) return &getc;
//  if ( !strcmp("getchar", sym) ) return &getchar;
//  if ( !strcmp("getc_unlocked", sym) ) return &getc_unlocked;
//  if ( !strcmp("getchar_unlocked", sym) ) return &getchar_unlocked;
//  if ( !strcmp("fgetc_unlocked", sym) ) return &fgetc_unlocked;
//  if ( !strcmp("fputc", sym) ) return &fputc;
//  if ( !strcmp("putc", sym) ) return &putc;
//  if ( !strcmp("putchar", sym) ) return &putchar;
//  if ( !strcmp("fputc_unlocked", sym) ) return &fputc_unlocked;
//  if ( !strcmp("putc_unlocked", sym) ) return &putc_unlocked;
//  if ( !strcmp("putchar_unlocked", sym) ) return &putchar_unlocked;
//  if ( !strcmp("getw", sym) ) return &getw;
//  if ( !strcmp("putw", sym) ) return &putw;
//  if ( !strcmp("fgets", sym) ) return &fgets;
//  if ( !strcmp("fputs", sym) ) return &fputs;
//  if ( !strcmp("puts", sym) ) return &puts;
//  if ( !strcmp("ungetc", sym) ) return &ungetc;
//  if ( !strcmp("fread", sym) ) return &fread;
//  if ( !strcmp("fwrite", sym) ) return &fwrite;
//  if ( !strcmp("fread_unlocked", sym) ) return &fread_unlocked;
//  if ( !strcmp("fwrite_unlocked", sym) ) return &fwrite_unlocked;
//  if ( !strcmp("fseek", sym) ) return &fseek;
//  if ( !strcmp("ftell", sym) ) return &ftell;
//  if ( !strcmp("rewind", sym) ) return &rewind;
//  if ( !strcmp("fgetpos", sym) ) return &fgetpos;
//  if ( !strcmp("fsetpos", sym) ) return &fsetpos;
//  if ( !strcmp("clearerr", sym) ) return &clearerr;
//  if ( !strcmp("feof", sym) ) return &feof;
//  if ( !strcmp("ferror", sym) ) return &ferror;
//  if ( !strcmp("clearerr_unlocked", sym) ) return &clearerr_unlocked;
//  if ( !strcmp("feof_unlocked", sym) ) return &feof_unlocked;
//  if ( !strcmp("ferror_unlocked", sym) ) return &ferror_unlocked;
//  if ( !strcmp("perror", sym) ) return &perror;
//  if ( !strcmp("fileno", sym) ) return &fileno;
//  if ( !strcmp("fileno_unlocked", sym) ) return &fileno_unlocked;
//  if ( !strcmp("popen", sym) ) return &popen;
//  if ( !strcmp("pclose", sym) ) return &pclose;
//  if ( !strcmp("ctermid", sym) ) return &ctermid;
//  if ( !strcmp("flockfile", sym) ) return &flockfile;
//  if ( !strcmp("ftrylockfile", sym) ) return &ftrylockfile;
//  if ( !strcmp("funlockfile", sym) ) return &funlockfile;
//  if ( !strcmp("atof", sym) ) return &atof;
//  if ( !strcmp("atoi", sym) ) return &atoi;
//  if ( !strcmp("atol", sym) ) return &atol;
//  if ( !strcmp("atoll", sym) ) return &atoll;
//  if ( !strcmp("strtod", sym) ) return &strtod;
//  if ( !strcmp("strtof", sym) ) return &strtof;
//  if ( !strcmp("strtold", sym) ) return &strtold;
//  if ( !strcmp("strtol", sym) ) return &strtol;
//  if ( !strcmp("strtoul", sym) ) return &strtoul;
//  if ( !strcmp("strtoq", sym) ) return &strtoq;
//  if ( !strcmp("strtouq", sym) ) return &strtouq;
//  if ( !strcmp("strtoll", sym) ) return &strtoll;
//  if ( !strcmp("strtoull", sym) ) return &strtoull;
//  if ( !strcmp("l64a", sym) ) return &l64a;
//  if ( !strcmp("a64l", sym) ) return &a64l;
//  if ( !strcmp("random", sym) ) return &random;
//  if ( !strcmp("srandom", sym) ) return &srandom;
//  if ( !strcmp("initstate", sym) ) return &initstate;
//  if ( !strcmp("setstate", sym) ) return &setstate;
//  if ( !strcmp("random_r", sym) ) return &random_r;
//  if ( !strcmp("srandom_r", sym) ) return &srandom_r;
//  if ( !strcmp("initstate_r", sym) ) return &initstate_r;
//  if ( !strcmp("setstate_r", sym) ) return &setstate_r;
//  if ( !strcmp("rand", sym) ) return &rand;
//  if ( !strcmp("srand", sym) ) return &srand;
//  if ( !strcmp("rand_r", sym) ) return &rand_r;
//  if ( !strcmp("drand48", sym) ) return &drand48;
//  if ( !strcmp("erand48", sym) ) return &erand48;
//  if ( !strcmp("lrand48", sym) ) return &lrand48;
//  if ( !strcmp("nrand48", sym) ) return &nrand48;
//  if ( !strcmp("mrand48", sym) ) return &mrand48;
//  if ( !strcmp("jrand48", sym) ) return &jrand48;
//  if ( !strcmp("srand48", sym) ) return &srand48;
//  if ( !strcmp("seed48", sym) ) return &seed48;
//  if ( !strcmp("lcong48", sym) ) return &lcong48;
//  if ( !strcmp("drand48_r", sym) ) return &drand48_r;
//  if ( !strcmp("erand48_r", sym) ) return &erand48_r;
//  if ( !strcmp("lrand48_r", sym) ) return &lrand48_r;
//  if ( !strcmp("nrand48_r", sym) ) return &nrand48_r;
//  if ( !strcmp("mrand48_r", sym) ) return &mrand48_r;
//  if ( !strcmp("jrand48_r", sym) ) return &jrand48_r;
//  if ( !strcmp("srand48_r", sym) ) return &srand48_r;
//  if ( !strcmp("seed48_r", sym) ) return &seed48_r;
//  if ( !strcmp("lcong48_r", sym) ) return &lcong48_r;
//  if ( !strcmp("malloc", sym) ) return &malloc;
//  if ( !strcmp("calloc", sym) ) return &calloc;
//  if ( !strcmp("realloc", sym) ) return &realloc;
//  if ( !strcmp("reallocarray", sym) ) return &reallocarray;
//  if ( !strcmp("free", sym) ) return &free;
//  if ( !strcmp("alloca", sym) ) return &alloca;
//  if ( !strcmp("valloc", sym) ) return &valloc;
//  if ( !strcmp("posix_memalign", sym) ) return &posix_memalign;
//  if ( !strcmp("aligned_alloc", sym) ) return &aligned_alloc;
//  if ( !strcmp("abort", sym) ) return &abort;
//  if ( !strcmp("exit", sym) ) return &exit;
//  if ( !strcmp("quick_exit", sym) ) return &quick_exit;
//  if ( !strcmp("_Exit", sym) ) return &_Exit;
//  if ( !strcmp("getenv", sym) ) return &getenv;
//  if ( !strcmp("putenv", sym) ) return &putenv;
//  if ( !strcmp("setenv", sym) ) return &setenv;
//  if ( !strcmp("unsetenv", sym) ) return &unsetenv;
//  if ( !strcmp("clearenv", sym) ) return &clearenv;
//  if ( !strcmp("mktemp", sym) ) return &mktemp;
//  if ( !strcmp("mkstemp", sym) ) return &mkstemp;
//  if ( !strcmp("mkstemps", sym) ) return &mkstemps;
//  if ( !strcmp("mkdtemp", sym) ) return &mkdtemp;
//  if ( !strcmp("system", sym) ) return &system;
//  if ( !strcmp("realpath", sym) ) return &realpath;
//  if ( !strcmp("abs", sym) ) return &abs;
//  if ( !strcmp("labs", sym) ) return &labs;
//  if ( !strcmp("llabs", sym) ) return &llabs;
//  if ( !strcmp("div", sym) ) return &div;
//  if ( !strcmp("ldiv", sym) ) return &ldiv;
//  if ( !strcmp("lldiv", sym) ) return &lldiv;
//  if ( !strcmp("ecvt", sym) ) return &ecvt;
//  if ( !strcmp("fcvt", sym) ) return &fcvt;
//  if ( !strcmp("gcvt", sym) ) return &gcvt;
//  if ( !strcmp("qecvt", sym) ) return &qecvt;
//  if ( !strcmp("qfcvt", sym) ) return &qfcvt;
//  if ( !strcmp("qgcvt", sym) ) return &qgcvt;
//  if ( !strcmp("ecvt_r", sym) ) return &ecvt_r;
//  if ( !strcmp("fcvt_r", sym) ) return &fcvt_r;
//  if ( !strcmp("qecvt_r", sym) ) return &qecvt_r;
//  if ( !strcmp("qfcvt_r", sym) ) return &qfcvt_r;
//  if ( !strcmp("mblen", sym) ) return &mblen;
//  if ( !strcmp("mbtowc", sym) ) return &mbtowc;
//  if ( !strcmp("wctomb", sym) ) return &wctomb;
//  if ( !strcmp("mbstowcs", sym) ) return &mbstowcs;
//  if ( !strcmp("wcstombs", sym) ) return &wcstombs;
//  if ( !strcmp("rpmatch", sym) ) return &rpmatch;
//  if ( !strcmp("getsubopt", sym) ) return &getsubopt;
//  if ( !strcmp("getloadavg", sym) ) return &getloadavg;
//  if ( !strcmp("memcpy", sym) ) return &memcpy;
//  if ( !strcmp("memmove", sym) ) return &memmove;
//  if ( !strcmp("memccpy", sym) ) return &memccpy;
//  if ( !strcmp("memset", sym) ) return &memset;
//  if ( !strcmp("memcmp", sym) ) return &memcmp;
//  if ( !strcmp("memchr", sym) ) return &memchr;
//  if ( !strcmp("strcpy", sym) ) return &strcpy;
//  if ( !strcmp("strncpy", sym) ) return &strncpy;
//  if ( !strcmp("strcat", sym) ) return &strcat;
//  if ( !strcmp("strncat", sym) ) return &strncat;
//  if ( !strcmp("strcmp", sym) ) return &strcmp;
//  if ( !strcmp("strncmp", sym) ) return &strncmp;
//  if ( !strcmp("strcoll", sym) ) return &strcoll;
//  if ( !strcmp("strxfrm", sym) ) return &strxfrm;
//  if ( !strcmp("strcoll_l", sym) ) return &strcoll_l;
//  if ( !strcmp("strxfrm_l", sym) ) return &strxfrm_l;
//  if ( !strcmp("strdup", sym) ) return &strdup;
//  if ( !strcmp("strndup", sym) ) return &strndup;
//  if ( !strcmp("strchr", sym) ) return &strchr;
//  if ( !strcmp("strrchr", sym) ) return &strrchr;
//  if ( !strcmp("strcspn", sym) ) return &strcspn;
//  if ( !strcmp("strspn", sym) ) return &strspn;
//  if ( !strcmp("strpbrk", sym) ) return &strpbrk;
//  if ( !strcmp("strstr", sym) ) return &strstr;
//  if ( !strcmp("strtok", sym) ) return &strtok;
//  if ( !strcmp("strtok_r", sym) ) return &strtok_r;
//  if ( !strcmp("strlen", sym) ) return &strlen;
//  if ( !strcmp("strnlen", sym) ) return &strnlen;
//  if ( !strcmp("strerror", sym) ) return &strerror;
//  if ( !strcmp("strerror_r", sym) ) return &strerror_r;
//  if ( !strcmp("strerror_l", sym) ) return &strerror_l;
//  if ( !strcmp("bcmp", sym) ) return &bcmp;
//  if ( !strcmp("bcopy", sym) ) return &bcopy;
//  if ( !strcmp("bzero", sym) ) return &bzero;
//  if ( !strcmp("index", sym) ) return &index;
//  if ( !strcmp("rindex", sym) ) return &rindex;
//  if ( !strcmp("ffs", sym) ) return &ffs;
//  if ( !strcmp("ffsl", sym) ) return &ffsl;
//  if ( !strcmp("ffsll", sym) ) return &ffsll;
//  if ( !strcmp("strcasecmp", sym) ) return &strcasecmp;
//  if ( !strcmp("strncasecmp", sym) ) return &strncasecmp;
//  if ( !strcmp("strcasecmp_l", sym) ) return &strcasecmp_l;
//  if ( !strcmp("strncasecmp_l", sym) ) return &strncasecmp_l;
//  if ( !strcmp("explicit_bzero", sym) ) return &explicit_bzero;
//  if ( !strcmp("strsep", sym) ) return &strsep;
//  if ( !strcmp("strsignal", sym) ) return &strsignal;
//  if ( !strcmp("stpcpy", sym) ) return &stpcpy;
//  if ( !strcmp("stpncpy", sym) ) return &stpncpy;
//  if ( !strcmp("wcscpy", sym) ) return &wcscpy;
//  if ( !strcmp("wcsncpy", sym) ) return &wcsncpy;
//  if ( !strcmp("wcscat", sym) ) return &wcscat;
//  if ( !strcmp("wcsncat", sym) ) return &wcsncat;
//  if ( !strcmp("wcscmp", sym) ) return &wcscmp;
//  if ( !strcmp("wcsncmp", sym) ) return &wcsncmp;
//  if ( !strcmp("wcscasecmp", sym) ) return &wcscasecmp;
//  if ( !strcmp("wcsncasecmp", sym) ) return &wcsncasecmp;
//  if ( !strcmp("wcscasecmp_l", sym) ) return &wcscasecmp_l;
//  if ( !strcmp("wcsncasecmp_l", sym) ) return &wcsncasecmp_l;
//  if ( !strcmp("wcscoll", sym) ) return &wcscoll;
//  if ( !strcmp("wcsxfrm", sym) ) return &wcsxfrm;
//  if ( !strcmp("wcscoll_l", sym) ) return &wcscoll_l;
//  if ( !strcmp("wcsxfrm_l", sym) ) return &wcsxfrm_l;
//  if ( !strcmp("wcsdup", sym) ) return &wcsdup;
//  if ( !strcmp("wcschr", sym) ) return &wcschr;
//  if ( !strcmp("wcsrchr", sym) ) return &wcsrchr;
//  if ( !strcmp("wcscspn", sym) ) return &wcscspn;
//  if ( !strcmp("wcsspn", sym) ) return &wcsspn;
//  if ( !strcmp("wcspbrk", sym) ) return &wcspbrk;
//  if ( !strcmp("wcsstr", sym) ) return &wcsstr;
//  if ( !strcmp("wcstok", sym) ) return &wcstok;
//  if ( !strcmp("wcslen", sym) ) return &wcslen;
//  if ( !strcmp("wcsnlen", sym) ) return &wcsnlen;
//  if ( !strcmp("wmemchr", sym) ) return &wmemchr;
//  if ( !strcmp("wmemcmp", sym) ) return &wmemcmp;
//  if ( !strcmp("wmemcpy", sym) ) return &wmemcpy;
//  if ( !strcmp("wmemmove", sym) ) return &wmemmove;
//  if ( !strcmp("wmemset", sym) ) return &wmemset;
//  if ( !strcmp("btowc", sym) ) return &btowc;
//  if ( !strcmp("wctob", sym) ) return &wctob;
//  if ( !strcmp("mbsinit", sym) ) return &mbsinit;
//  if ( !strcmp("mbrtowc", sym) ) return &mbrtowc;
//  if ( !strcmp("wcrtomb", sym) ) return &wcrtomb;
//  if ( !strcmp("mbrlen", sym) ) return &mbrlen;
//  if ( !strcmp("mbsrtowcs", sym) ) return &mbsrtowcs;
//  if ( !strcmp("wcsrtombs", sym) ) return &wcsrtombs;
//  if ( !strcmp("mbsnrtowcs", sym) ) return &mbsnrtowcs;
//  if ( !strcmp("wcsnrtombs", sym) ) return &wcsnrtombs;
//  if ( !strcmp("wcstod", sym) ) return &wcstod;
//  if ( !strcmp("wcstof", sym) ) return &wcstof;
//  if ( !strcmp("wcstold", sym) ) return &wcstold;
//  if ( !strcmp("wcstol", sym) ) return &wcstol;
//  if ( !strcmp("wcstoul", sym) ) return &wcstoul;
//  if ( !strcmp("wcstoll", sym) ) return &wcstoll;
//  if ( !strcmp("wcstoull", sym) ) return &wcstoull;
//  if ( !strcmp("wcpcpy", sym) ) return &wcpcpy;
//  if ( !strcmp("wcpncpy", sym) ) return &wcpncpy;
//  if ( !strcmp("wprintf", sym) ) return &wprintf;
//  if ( !strcmp("swprintf", sym) ) return &swprintf;
//  if ( !strcmp("wscanf", sym) ) return &wscanf;
//  if ( !strcmp("swscanf", sym) ) return &swscanf;
//  if ( !strcmp("getwchar", sym) ) return &getwchar;
//  if ( !strcmp("putwchar", sym) ) return &putwchar;
//  if ( !strcmp("wcsftime", sym) ) return &wcsftime;
//  if ( !strcmp("imaxabs", sym) ) return &imaxabs;
//  if ( !strcmp("imaxdiv", sym) ) return &imaxdiv;
//  if ( !strcmp("strtoimax", sym) ) return &strtoimax;
//  if ( !strcmp("strtoumax", sym) ) return &strtoumax;
//  if ( !strcmp("isalnum", sym) ) return &isalnum;
//  if ( !strcmp("isalpha", sym) ) return &isalpha;
//  if ( !strcmp("iscntrl", sym) ) return &iscntrl;
//  if ( !strcmp("isdigit", sym) ) return &isdigit;
//  if ( !strcmp("islower", sym) ) return &islower;
//  if ( !strcmp("isgraph", sym) ) return &isgraph;
//  if ( !strcmp("isprint", sym) ) return &isprint;
//  if ( !strcmp("ispunct", sym) ) return &ispunct;
//  if ( !strcmp("isspace", sym) ) return &isspace;
//  if ( !strcmp("isupper", sym) ) return &isupper;
//  if ( !strcmp("isxdigit", sym) ) return &isxdigit;
//  if ( !strcmp("tolower", sym) ) return &tolower;
//  if ( !strcmp("toupper", sym) ) return &toupper;
//  if ( !strcmp("isblank", sym) ) return &isblank;
//  if ( !strcmp("isascii", sym) ) return &isascii;
//  if ( !strcmp("toascii", sym) ) return &toascii;
//  if ( !strcmp("_toupper", sym) ) return &_toupper;
//  if ( !strcmp("_tolower", sym) ) return &_tolower;
//  if ( !strcmp("isalnum_l", sym) ) return &isalnum_l;
//  if ( !strcmp("isalpha_l", sym) ) return &isalpha_l;
//  if ( !strcmp("iscntrl_l", sym) ) return &iscntrl_l;
//  if ( !strcmp("isdigit_l", sym) ) return &isdigit_l;
//  if ( !strcmp("islower_l", sym) ) return &islower_l;
//  if ( !strcmp("isgraph_l", sym) ) return &isgraph_l;
//  if ( !strcmp("isprint_l", sym) ) return &isprint_l;
//  if ( !strcmp("ispunct_l", sym) ) return &ispunct_l;
//  if ( !strcmp("isspace_l", sym) ) return &isspace_l;
//  if ( !strcmp("isupper_l", sym) ) return &isupper_l;
//  if ( !strcmp("isxdigit_l", sym) ) return &isxdigit_l;
//  if ( !strcmp("isblank_l", sym) ) return &isblank_l;
//  if ( !strcmp("tolower_l", sym) ) return &tolower_l;
//  if ( !strcmp("toupper_l", sym) ) return &toupper_l;
//  if ( !strcmp("acos", sym) ) return &acos;
//  if ( !strcmp("asin", sym) ) return &asin;
//  if ( !strcmp("atan", sym) ) return &atan;
//  if ( !strcmp("atan2", sym) ) return &atan2;
//  if ( !strcmp("cos", sym) ) return &cos;
//  if ( !strcmp("sin", sym) ) return &sin;
//  if ( !strcmp("tan", sym) ) return &tan;
//  if ( !strcmp("cosh", sym) ) return &cosh;
//  if ( !strcmp("sinh", sym) ) return &sinh;
//  if ( !strcmp("tanh", sym) ) return &tanh;
//  if ( !strcmp("acosh", sym) ) return &acosh;
//  if ( !strcmp("asinh", sym) ) return &asinh;
//  if ( !strcmp("atanh", sym) ) return &atanh;
//  if ( !strcmp("exp", sym) ) return &exp;
//  if ( !strcmp("frexp", sym) ) return &frexp;
//  if ( !strcmp("ldexp", sym) ) return &ldexp;
//  if ( !strcmp("log", sym) ) return &log;
//  if ( !strcmp("log10", sym) ) return &log10;
//  if ( !strcmp("modf", sym) ) return &modf;
//  if ( !strcmp("expm1", sym) ) return &expm1;
//  if ( !strcmp("log1p", sym) ) return &log1p;
//  if ( !strcmp("logb", sym) ) return &logb;
//  if ( !strcmp("exp2", sym) ) return &exp2;
//  if ( !strcmp("log2", sym) ) return &log2;
//  if ( !strcmp("pow", sym) ) return &pow;
//  if ( !strcmp("sqrt", sym) ) return &sqrt;
//  if ( !strcmp("hypot", sym) ) return &hypot;
//  if ( !strcmp("cbrt", sym) ) return &cbrt;
//  if ( !strcmp("ceil", sym) ) return &ceil;
//  if ( !strcmp("fabs", sym) ) return &fabs;
//  if ( !strcmp("floor", sym) ) return &floor;
//  if ( !strcmp("fmod", sym) ) return &fmod;
//  if ( !strcmp("isinf", sym) ) return &isinf;
//  if ( !strcmp("finite", sym) ) return &finite;
//  if ( !strcmp("drem", sym) ) return &drem;
//  if ( !strcmp("significand", sym) ) return &significand;
//  if ( !strcmp("copysign", sym) ) return &copysign;
//  if ( !strcmp("nan", sym) ) return &nan;
//  if ( !strcmp("isnan", sym) ) return &isnan;
//  if ( !strcmp("j0", sym) ) return &j0;
//  if ( !strcmp("j1", sym) ) return &j1;
//  if ( !strcmp("jn", sym) ) return &jn;
//  if ( !strcmp("y0", sym) ) return &y0;
//  if ( !strcmp("y1", sym) ) return &y1;
//  if ( !strcmp("yn", sym) ) return &yn;
//  if ( !strcmp("erf", sym) ) return &erf;
//  if ( !strcmp("erfc", sym) ) return &erfc;
//  if ( !strcmp("lgamma", sym) ) return &lgamma;
//  if ( !strcmp("tgamma", sym) ) return &tgamma;
//  if ( !strcmp("gamma", sym) ) return &gamma;
//  if ( !strcmp("lgamma_r", sym) ) return &lgamma_r;
//  if ( !strcmp("rint", sym) ) return &rint;
//  if ( !strcmp("nextafter", sym) ) return &nextafter;
//  if ( !strcmp("nexttoward", sym) ) return &nexttoward;
//  if ( !strcmp("remainder", sym) ) return &remainder;
//  if ( !strcmp("scalbn", sym) ) return &scalbn;
//  if ( !strcmp("ilogb", sym) ) return &ilogb;
//  if ( !strcmp("scalbln", sym) ) return &scalbln;
//  if ( !strcmp("nearbyint", sym) ) return &nearbyint;
//  if ( !strcmp("round", sym) ) return &round;
//  if ( !strcmp("trunc", sym) ) return &trunc;
//  if ( !strcmp("remquo", sym) ) return &remquo;
//  if ( !strcmp("lrint", sym) ) return &lrint;
//  if ( !strcmp("llrint", sym) ) return &llrint;
//  if ( !strcmp("lround", sym) ) return &lround;
//  if ( !strcmp("llround", sym) ) return &llround;
//  if ( !strcmp("fdim", sym) ) return &fdim;
//  if ( !strcmp("fmax", sym) ) return &fmax;
//  if ( !strcmp("fmin", sym) ) return &fmin;
//  if ( !strcmp("fma", sym) ) return &fma;
//  if ( !strcmp("scalb", sym) ) return &scalb;
//  if ( !strcmp("acosf", sym) ) return &acosf;
//  if ( !strcmp("asinf", sym) ) return &asinf;
//  if ( !strcmp("atanf", sym) ) return &atanf;
//  if ( !strcmp("atan2f", sym) ) return &atan2f;
//  if ( !strcmp("cosf", sym) ) return &cosf;
//  if ( !strcmp("sinf", sym) ) return &sinf;
//  if ( !strcmp("tanf", sym) ) return &tanf;
//  if ( !strcmp("coshf", sym) ) return &coshf;
//  if ( !strcmp("sinhf", sym) ) return &sinhf;
//  if ( !strcmp("tanhf", sym) ) return &tanhf;
//  if ( !strcmp("acoshf", sym) ) return &acoshf;
//  if ( !strcmp("asinhf", sym) ) return &asinhf;
//  if ( !strcmp("atanhf", sym) ) return &atanhf;
//  if ( !strcmp("expf", sym) ) return &expf;
//  if ( !strcmp("frexpf", sym) ) return &frexpf;
//  if ( !strcmp("ldexpf", sym) ) return &ldexpf;
//  if ( !strcmp("logf", sym) ) return &logf;
//  if ( !strcmp("log10f", sym) ) return &log10f;
//  if ( !strcmp("modff", sym) ) return &modff;
//  if ( !strcmp("expm1f", sym) ) return &expm1f;
//  if ( !strcmp("log1pf", sym) ) return &log1pf;
//  if ( !strcmp("logbf", sym) ) return &logbf;
//  if ( !strcmp("exp2f", sym) ) return &exp2f;
//  if ( !strcmp("log2f", sym) ) return &log2f;
//  if ( !strcmp("powf", sym) ) return &powf;
//  if ( !strcmp("sqrtf", sym) ) return &sqrtf;
//  if ( !strcmp("hypotf", sym) ) return &hypotf;
//  if ( !strcmp("cbrtf", sym) ) return &cbrtf;
//  if ( !strcmp("ceilf", sym) ) return &ceilf;
//  if ( !strcmp("fabsf", sym) ) return &fabsf;
//  if ( !strcmp("floorf", sym) ) return &floorf;
//  if ( !strcmp("fmodf", sym) ) return &fmodf;
//  if ( !strcmp("isinff", sym) ) return &isinff;
//  if ( !strcmp("finitef", sym) ) return &finitef;
//  if ( !strcmp("dremf", sym) ) return &dremf;
//  if ( !strcmp("significandf", sym) ) return &significandf;
//  if ( !strcmp("copysignf", sym) ) return &copysignf;
//  if ( !strcmp("nanf", sym) ) return &nanf;
//  if ( !strcmp("isnanf", sym) ) return &isnanf;
//  if ( !strcmp("j0f", sym) ) return &j0f;
//  if ( !strcmp("j1f", sym) ) return &j1f;
//  if ( !strcmp("jnf", sym) ) return &jnf;
//  if ( !strcmp("y0f", sym) ) return &y0f;
//  if ( !strcmp("y1f", sym) ) return &y1f;
//  if ( !strcmp("ynf", sym) ) return &ynf;
//  if ( !strcmp("erff", sym) ) return &erff;
//  if ( !strcmp("erfcf", sym) ) return &erfcf;
//  if ( !strcmp("lgammaf", sym) ) return &lgammaf;
//  if ( !strcmp("tgammaf", sym) ) return &tgammaf;
//  if ( !strcmp("gammaf", sym) ) return &gammaf;
//  if ( !strcmp("lgammaf_r", sym) ) return &lgammaf_r;
//  if ( !strcmp("rintf", sym) ) return &rintf;
//  if ( !strcmp("nextafterf", sym) ) return &nextafterf;
//  if ( !strcmp("nexttowardf", sym) ) return &nexttowardf;
//  if ( !strcmp("remainderf", sym) ) return &remainderf;
//  if ( !strcmp("scalbnf", sym) ) return &scalbnf;
//  if ( !strcmp("ilogbf", sym) ) return &ilogbf;
//  if ( !strcmp("scalblnf", sym) ) return &scalblnf;
//  if ( !strcmp("nearbyintf", sym) ) return &nearbyintf;
//  if ( !strcmp("roundf", sym) ) return &roundf;
//  if ( !strcmp("truncf", sym) ) return &truncf;
//  if ( !strcmp("remquof", sym) ) return &remquof;
//  if ( !strcmp("lrintf", sym) ) return &lrintf;
//  if ( !strcmp("llrintf", sym) ) return &llrintf;
//  if ( !strcmp("lroundf", sym) ) return &lroundf;
//  if ( !strcmp("llroundf", sym) ) return &llroundf;
//  if ( !strcmp("fdimf", sym) ) return &fdimf;
//  if ( !strcmp("fmaxf", sym) ) return &fmaxf;
//  if ( !strcmp("fminf", sym) ) return &fminf;
//  if ( !strcmp("fmaf", sym) ) return &fmaf;
//  if ( !strcmp("scalbf", sym) ) return &scalbf;
//  if ( !strcmp("acosl", sym) ) return &acosl;
//  if ( !strcmp("asinl", sym) ) return &asinl;
//  if ( !strcmp("atanl", sym) ) return &atanl;
//  if ( !strcmp("atan2l", sym) ) return &atan2l;
//  if ( !strcmp("cosl", sym) ) return &cosl;
//  if ( !strcmp("sinl", sym) ) return &sinl;
//  if ( !strcmp("tanl", sym) ) return &tanl;
//  if ( !strcmp("coshl", sym) ) return &coshl;
//  if ( !strcmp("sinhl", sym) ) return &sinhl;
//  if ( !strcmp("tanhl", sym) ) return &tanhl;
//  if ( !strcmp("acoshl", sym) ) return &acoshl;
//  if ( !strcmp("asinhl", sym) ) return &asinhl;
//  if ( !strcmp("atanhl", sym) ) return &atanhl;
//  if ( !strcmp("expl", sym) ) return &expl;
//  if ( !strcmp("frexpl", sym) ) return &frexpl;
//  if ( !strcmp("ldexpl", sym) ) return &ldexpl;
//  if ( !strcmp("logl", sym) ) return &logl;
//  if ( !strcmp("log10l", sym) ) return &log10l;
//  if ( !strcmp("modfl", sym) ) return &modfl;
//  if ( !strcmp("expm1l", sym) ) return &expm1l;
//  if ( !strcmp("log1pl", sym) ) return &log1pl;
//  if ( !strcmp("logbl", sym) ) return &logbl;
//  if ( !strcmp("exp2l", sym) ) return &exp2l;
//  if ( !strcmp("log2l", sym) ) return &log2l;
//  if ( !strcmp("powl", sym) ) return &powl;
//  if ( !strcmp("sqrtl", sym) ) return &sqrtl;
//  if ( !strcmp("hypotl", sym) ) return &hypotl;
//  if ( !strcmp("cbrtl", sym) ) return &cbrtl;
//  if ( !strcmp("ceill", sym) ) return &ceill;
//  if ( !strcmp("fabsl", sym) ) return &fabsl;
//  if ( !strcmp("floorl", sym) ) return &floorl;
//  if ( !strcmp("fmodl", sym) ) return &fmodl;
//  if ( !strcmp("isinfl", sym) ) return &isinfl;
//  if ( !strcmp("finitel", sym) ) return &finitel;
//  if ( !strcmp("dreml", sym) ) return &dreml;
//  if ( !strcmp("significandl", sym) ) return &significandl;
//  if ( !strcmp("copysignl", sym) ) return &copysignl;
//  if ( !strcmp("nanl", sym) ) return &nanl;
//  if ( !strcmp("isnanl", sym) ) return &isnanl;
//  if ( !strcmp("j0l", sym) ) return &j0l;
//  if ( !strcmp("j1l", sym) ) return &j1l;
//  if ( !strcmp("jnl", sym) ) return &jnl;
//  if ( !strcmp("y0l", sym) ) return &y0l;
//  if ( !strcmp("y1l", sym) ) return &y1l;
//  if ( !strcmp("ynl", sym) ) return &ynl;
//  if ( !strcmp("erfl", sym) ) return &erfl;
//  if ( !strcmp("erfcl", sym) ) return &erfcl;
//  if ( !strcmp("lgammal", sym) ) return &lgammal;
//  if ( !strcmp("tgammal", sym) ) return &tgammal;
//  if ( !strcmp("gammal", sym) ) return &gammal;
//  if ( !strcmp("lgammal_r", sym) ) return &lgammal_r;
//  if ( !strcmp("rintl", sym) ) return &rintl;
//  if ( !strcmp("nextafterl", sym) ) return &nextafterl;
//  if ( !strcmp("nexttowardl", sym) ) return &nexttowardl;
//  if ( !strcmp("remainderl", sym) ) return &remainderl;
//  if ( !strcmp("scalbnl", sym) ) return &scalbnl;
//  if ( !strcmp("ilogbl", sym) ) return &ilogbl;
//  if ( !strcmp("scalblnl", sym) ) return &scalblnl;
//  if ( !strcmp("nearbyintl", sym) ) return &nearbyintl;
//  if ( !strcmp("roundl", sym) ) return &roundl;
//  if ( !strcmp("truncl", sym) ) return &truncl;
//  if ( !strcmp("remquol", sym) ) return &remquol;
//  if ( !strcmp("lrintl", sym) ) return &lrintl;
//  if ( !strcmp("llrintl", sym) ) return &llrintl;
//  if ( !strcmp("lroundl", sym) ) return &lroundl;
//  if ( !strcmp("llroundl", sym) ) return &llroundl;
//  if ( !strcmp("fdiml", sym) ) return &fdiml;
//  if ( !strcmp("fmaxl", sym) ) return &fmaxl;
//  if ( !strcmp("fminl", sym) ) return &fminl;
//  if ( !strcmp("fmal", sym) ) return &fmal;
//  if ( !strcmp("scalbl", sym) ) return &scalbl;
//  if ( !strcmp("SDL_malloc", sym) ) return &SDL_malloc;
//  if ( !strcmp("SDL_calloc", sym) ) return &SDL_calloc;
//  if ( !strcmp("SDL_realloc", sym) ) return &SDL_realloc;
//  if ( !strcmp("SDL_free", sym) ) return &SDL_free;
//  if ( !strcmp("SDL_GetMemoryFunctions", sym) ) return &SDL_GetMemoryFunctions;
//  if ( !strcmp("SDL_SetMemoryFunctions", sym) ) return &SDL_SetMemoryFunctions;
//  if ( !strcmp("SDL_GetNumAllocations", sym) ) return &SDL_GetNumAllocations;
//  if ( !strcmp("SDL_getenv", sym) ) return &SDL_getenv;
//  if ( !strcmp("SDL_setenv", sym) ) return &SDL_setenv;
//  if ( !strcmp("SDL_abs", sym) ) return &SDL_abs;
//  if ( !strcmp("SDL_isdigit", sym) ) return &SDL_isdigit;
//  if ( !strcmp("SDL_isspace", sym) ) return &SDL_isspace;
//  if ( !strcmp("SDL_isupper", sym) ) return &SDL_isupper;
//  if ( !strcmp("SDL_islower", sym) ) return &SDL_islower;
//  if ( !strcmp("SDL_toupper", sym) ) return &SDL_toupper;
//  if ( !strcmp("SDL_tolower", sym) ) return &SDL_tolower;
//  if ( !strcmp("SDL_crc32", sym) ) return &SDL_crc32;
//  if ( !strcmp("SDL_memset", sym) ) return &SDL_memset;
//  if ( !strcmp("SDL_memcpy", sym) ) return &SDL_memcpy;
//  if ( !strcmp("SDL_memmove", sym) ) return &SDL_memmove;
//  if ( !strcmp("SDL_memcmp", sym) ) return &SDL_memcmp;
//  if ( !strcmp("SDL_wcslen", sym) ) return &SDL_wcslen;
//  if ( !strcmp("SDL_wcslcpy", sym) ) return &SDL_wcslcpy;
//  if ( !strcmp("SDL_wcslcat", sym) ) return &SDL_wcslcat;
//  if ( !strcmp("SDL_wcsdup", sym) ) return &SDL_wcsdup;
//  if ( !strcmp("SDL_wcsstr", sym) ) return &SDL_wcsstr;
//  if ( !strcmp("SDL_wcscmp", sym) ) return &SDL_wcscmp;
//  if ( !strcmp("SDL_wcsncmp", sym) ) return &SDL_wcsncmp;
//  if ( !strcmp("SDL_wcscasecmp", sym) ) return &SDL_wcscasecmp;
//  if ( !strcmp("SDL_wcsncasecmp", sym) ) return &SDL_wcsncasecmp;
//  if ( !strcmp("SDL_strlen", sym) ) return &SDL_strlen;
//  if ( !strcmp("SDL_strlcpy", sym) ) return &SDL_strlcpy;
//  if ( !strcmp("SDL_utf8strlcpy", sym) ) return &SDL_utf8strlcpy;
//  if ( !strcmp("SDL_strlcat", sym) ) return &SDL_strlcat;
//  if ( !strcmp("SDL_strdup", sym) ) return &SDL_strdup;
//  if ( !strcmp("SDL_strrev", sym) ) return &SDL_strrev;
//  if ( !strcmp("SDL_strupr", sym) ) return &SDL_strupr;
//  if ( !strcmp("SDL_strlwr", sym) ) return &SDL_strlwr;
//  if ( !strcmp("SDL_strchr", sym) ) return &SDL_strchr;
//  if ( !strcmp("SDL_strrchr", sym) ) return &SDL_strrchr;
//  if ( !strcmp("SDL_strstr", sym) ) return &SDL_strstr;
//  if ( !strcmp("SDL_strtokr", sym) ) return &SDL_strtokr;
//  if ( !strcmp("SDL_utf8strlen", sym) ) return &SDL_utf8strlen;
//  if ( !strcmp("SDL_itoa", sym) ) return &SDL_itoa;
//  if ( !strcmp("SDL_uitoa", sym) ) return &SDL_uitoa;
//  if ( !strcmp("SDL_ltoa", sym) ) return &SDL_ltoa;
//  if ( !strcmp("SDL_ultoa", sym) ) return &SDL_ultoa;
//  if ( !strcmp("SDL_lltoa", sym) ) return &SDL_lltoa;
//  if ( !strcmp("SDL_ulltoa", sym) ) return &SDL_ulltoa;
//  if ( !strcmp("SDL_atoi", sym) ) return &SDL_atoi;
//  if ( !strcmp("SDL_atof", sym) ) return &SDL_atof;
//  if ( !strcmp("SDL_strtol", sym) ) return &SDL_strtol;
//  if ( !strcmp("SDL_strtoul", sym) ) return &SDL_strtoul;
//  if ( !strcmp("SDL_strtoll", sym) ) return &SDL_strtoll;
//  if ( !strcmp("SDL_strtoull", sym) ) return &SDL_strtoull;
//  if ( !strcmp("SDL_strtod", sym) ) return &SDL_strtod;
//  if ( !strcmp("SDL_strcmp", sym) ) return &SDL_strcmp;
//  if ( !strcmp("SDL_strncmp", sym) ) return &SDL_strncmp;
//  if ( !strcmp("SDL_strcasecmp", sym) ) return &SDL_strcasecmp;
//  if ( !strcmp("SDL_strncasecmp", sym) ) return &SDL_strncasecmp;
//  if ( !strcmp("SDL_sscanf", sym) ) return &SDL_sscanf;
//  if ( !strcmp("SDL_snprintf", sym) ) return &SDL_snprintf;
//  if ( !strcmp("SDL_acos", sym) ) return &SDL_acos;
//  if ( !strcmp("SDL_acosf", sym) ) return &SDL_acosf;
//  if ( !strcmp("SDL_asin", sym) ) return &SDL_asin;
//  if ( !strcmp("SDL_asinf", sym) ) return &SDL_asinf;
//  if ( !strcmp("SDL_atan", sym) ) return &SDL_atan;
//  if ( !strcmp("SDL_atanf", sym) ) return &SDL_atanf;
//  if ( !strcmp("SDL_atan2", sym) ) return &SDL_atan2;
//  if ( !strcmp("SDL_atan2f", sym) ) return &SDL_atan2f;
//  if ( !strcmp("SDL_ceil", sym) ) return &SDL_ceil;
//  if ( !strcmp("SDL_ceilf", sym) ) return &SDL_ceilf;
//  if ( !strcmp("SDL_copysign", sym) ) return &SDL_copysign;
//  if ( !strcmp("SDL_copysignf", sym) ) return &SDL_copysignf;
//  if ( !strcmp("SDL_cos", sym) ) return &SDL_cos;
//  if ( !strcmp("SDL_cosf", sym) ) return &SDL_cosf;
//  if ( !strcmp("SDL_exp", sym) ) return &SDL_exp;
//  if ( !strcmp("SDL_expf", sym) ) return &SDL_expf;
//  if ( !strcmp("SDL_fabs", sym) ) return &SDL_fabs;
//  if ( !strcmp("SDL_fabsf", sym) ) return &SDL_fabsf;
//  if ( !strcmp("SDL_floor", sym) ) return &SDL_floor;
//  if ( !strcmp("SDL_floorf", sym) ) return &SDL_floorf;
//  if ( !strcmp("SDL_trunc", sym) ) return &SDL_trunc;
//  if ( !strcmp("SDL_truncf", sym) ) return &SDL_truncf;
//  if ( !strcmp("SDL_fmod", sym) ) return &SDL_fmod;
//  if ( !strcmp("SDL_fmodf", sym) ) return &SDL_fmodf;
//  if ( !strcmp("SDL_log", sym) ) return &SDL_log;
//  if ( !strcmp("SDL_logf", sym) ) return &SDL_logf;
//  if ( !strcmp("SDL_log10", sym) ) return &SDL_log10;
//  if ( !strcmp("SDL_log10f", sym) ) return &SDL_log10f;
//  if ( !strcmp("SDL_pow", sym) ) return &SDL_pow;
//  if ( !strcmp("SDL_powf", sym) ) return &SDL_powf;
//  if ( !strcmp("SDL_scalbn", sym) ) return &SDL_scalbn;
//  if ( !strcmp("SDL_scalbnf", sym) ) return &SDL_scalbnf;
//  if ( !strcmp("SDL_sin", sym) ) return &SDL_sin;
//  if ( !strcmp("SDL_sinf", sym) ) return &SDL_sinf;
//  if ( !strcmp("SDL_sqrt", sym) ) return &SDL_sqrt;
//  if ( !strcmp("SDL_sqrtf", sym) ) return &SDL_sqrtf;
//  if ( !strcmp("SDL_tan", sym) ) return &SDL_tan;
//  if ( !strcmp("SDL_tanf", sym) ) return &SDL_tanf;
//  if ( !strcmp("SDL_iconv_open", sym) ) return &SDL_iconv_open;
//  if ( !strcmp("SDL_iconv_close", sym) ) return &SDL_iconv_close;
//  if ( !strcmp("SDL_iconv", sym) ) return &SDL_iconv;
//  if ( !strcmp("SDL_iconv_string", sym) ) return &SDL_iconv_string;
//  if ( !strcmp("SDL_main", sym) ) return &SDL_main;
//  if ( !strcmp("SDL_SetMainReady", sym) ) return &SDL_SetMainReady;
//  if ( !strcmp("SDL_ReportAssertion", sym) ) return &SDL_ReportAssertion;
//  if ( !strcmp("SDL_SetAssertionHandler", sym) ) return &SDL_SetAssertionHandler;
//  if ( !strcmp("SDL_GetDefaultAssertionHandler", sym) ) return &SDL_GetDefaultAssertionHandler;
//  if ( !strcmp("SDL_GetAssertionHandler", sym) ) return &SDL_GetAssertionHandler;
//  if ( !strcmp("SDL_GetAssertionReport", sym) ) return &SDL_GetAssertionReport;
//  if ( !strcmp("SDL_ResetAssertionReport", sym) ) return &SDL_ResetAssertionReport;
//  if ( !strcmp("SDL_AtomicTryLock", sym) ) return &SDL_AtomicTryLock;
//  if ( !strcmp("SDL_AtomicLock", sym) ) return &SDL_AtomicLock;
//  if ( !strcmp("SDL_AtomicUnlock", sym) ) return &SDL_AtomicUnlock;
//  if ( !strcmp("SDL_MemoryBarrierReleaseFunction", sym) ) return &SDL_MemoryBarrierReleaseFunction;
//  if ( !strcmp("SDL_MemoryBarrierAcquireFunction", sym) ) return &SDL_MemoryBarrierAcquireFunction;
//  if ( !strcmp("SDL_AtomicCAS", sym) ) return &SDL_AtomicCAS;
//  if ( !strcmp("SDL_AtomicSet", sym) ) return &SDL_AtomicSet;
//  if ( !strcmp("SDL_AtomicGet", sym) ) return &SDL_AtomicGet;
//  if ( !strcmp("SDL_AtomicAdd", sym) ) return &SDL_AtomicAdd;
//  if ( !strcmp("SDL_AtomicCASPtr", sym) ) return &SDL_AtomicCASPtr;
//  if ( !strcmp("SDL_AtomicSetPtr", sym) ) return &SDL_AtomicSetPtr;
//  if ( !strcmp("SDL_AtomicGetPtr", sym) ) return &SDL_AtomicGetPtr;
//  if ( !strcmp("SDL_SetError", sym) ) return &SDL_SetError;
//  if ( !strcmp("SDL_GetError", sym) ) return &SDL_GetError;
//  if ( !strcmp("SDL_GetErrorMsg", sym) ) return &SDL_GetErrorMsg;
//  if ( !strcmp("SDL_ClearError", sym) ) return &SDL_ClearError;
//  if ( !strcmp("SDL_Error", sym) ) return &SDL_Error;
//  if ( !strcmp("SDL_CreateMutex", sym) ) return &SDL_CreateMutex;
//  if ( !strcmp("SDL_LockMutex", sym) ) return &SDL_LockMutex;
//  if ( !strcmp("SDL_TryLockMutex", sym) ) return &SDL_TryLockMutex;
//  if ( !strcmp("SDL_UnlockMutex", sym) ) return &SDL_UnlockMutex;
//  if ( !strcmp("SDL_DestroyMutex", sym) ) return &SDL_DestroyMutex;
//  if ( !strcmp("SDL_CreateSemaphore", sym) ) return &SDL_CreateSemaphore;
//  if ( !strcmp("SDL_DestroySemaphore", sym) ) return &SDL_DestroySemaphore;
//  if ( !strcmp("SDL_SemWait", sym) ) return &SDL_SemWait;
//  if ( !strcmp("SDL_SemTryWait", sym) ) return &SDL_SemTryWait;
//  if ( !strcmp("SDL_SemWaitTimeout", sym) ) return &SDL_SemWaitTimeout;
//  if ( !strcmp("SDL_SemPost", sym) ) return &SDL_SemPost;
//  if ( !strcmp("SDL_SemValue", sym) ) return &SDL_SemValue;
//  if ( !strcmp("SDL_CreateCond", sym) ) return &SDL_CreateCond;
//  if ( !strcmp("SDL_DestroyCond", sym) ) return &SDL_DestroyCond;
//  if ( !strcmp("SDL_CondSignal", sym) ) return &SDL_CondSignal;
//  if ( !strcmp("SDL_CondBroadcast", sym) ) return &SDL_CondBroadcast;
//  if ( !strcmp("SDL_CondWait", sym) ) return &SDL_CondWait;
//  if ( !strcmp("SDL_CondWaitTimeout", sym) ) return &SDL_CondWaitTimeout;
//  if ( !strcmp("SDL_CreateThread", sym) ) return &SDL_CreateThread;
//  if ( !strcmp("SDL_CreateThreadWithStackSize", sym) ) return &SDL_CreateThreadWithStackSize;
//  if ( !strcmp("SDL_GetThreadName", sym) ) return &SDL_GetThreadName;
//  if ( !strcmp("SDL_ThreadID", sym) ) return &SDL_ThreadID;
//  if ( !strcmp("SDL_GetThreadID", sym) ) return &SDL_GetThreadID;
//  if ( !strcmp("SDL_SetThreadPriority", sym) ) return &SDL_SetThreadPriority;
//  if ( !strcmp("SDL_WaitThread", sym) ) return &SDL_WaitThread;
//  if ( !strcmp("SDL_DetachThread", sym) ) return &SDL_DetachThread;
//  if ( !strcmp("SDL_TLSCreate", sym) ) return &SDL_TLSCreate;
//  if ( !strcmp("SDL_TLSGet", sym) ) return &SDL_TLSGet;
//  if ( !strcmp("SDL_RWFromFile", sym) ) return &SDL_RWFromFile;
//  if ( !strcmp("SDL_RWFromFP", sym) ) return &SDL_RWFromFP;
//  if ( !strcmp("SDL_RWFromMem", sym) ) return &SDL_RWFromMem;
//  if ( !strcmp("SDL_RWFromConstMem", sym) ) return &SDL_RWFromConstMem;
//  if ( !strcmp("SDL_AllocRW", sym) ) return &SDL_AllocRW;
//  if ( !strcmp("SDL_FreeRW", sym) ) return &SDL_FreeRW;
//  if ( !strcmp("SDL_RWsize", sym) ) return &SDL_RWsize;
//  if ( !strcmp("SDL_RWseek", sym) ) return &SDL_RWseek;
//  if ( !strcmp("SDL_RWtell", sym) ) return &SDL_RWtell;
//  if ( !strcmp("SDL_RWread", sym) ) return &SDL_RWread;
//  if ( !strcmp("SDL_RWwrite", sym) ) return &SDL_RWwrite;
//  if ( !strcmp("SDL_RWclose", sym) ) return &SDL_RWclose;
//  if ( !strcmp("SDL_LoadFile_RW", sym) ) return &SDL_LoadFile_RW;
//  if ( !strcmp("SDL_LoadFile", sym) ) return &SDL_LoadFile;
//  if ( !strcmp("SDL_ReadU8", sym) ) return &SDL_ReadU8;
//  if ( !strcmp("SDL_ReadLE16", sym) ) return &SDL_ReadLE16;
//  if ( !strcmp("SDL_ReadBE16", sym) ) return &SDL_ReadBE16;
//  if ( !strcmp("SDL_ReadLE32", sym) ) return &SDL_ReadLE32;
//  if ( !strcmp("SDL_ReadBE32", sym) ) return &SDL_ReadBE32;
//  if ( !strcmp("SDL_ReadLE64", sym) ) return &SDL_ReadLE64;
//  if ( !strcmp("SDL_ReadBE64", sym) ) return &SDL_ReadBE64;
//  if ( !strcmp("SDL_WriteU8", sym) ) return &SDL_WriteU8;
//  if ( !strcmp("SDL_WriteLE16", sym) ) return &SDL_WriteLE16;
//  if ( !strcmp("SDL_WriteBE16", sym) ) return &SDL_WriteBE16;
//  if ( !strcmp("SDL_WriteLE32", sym) ) return &SDL_WriteLE32;
//  if ( !strcmp("SDL_WriteBE32", sym) ) return &SDL_WriteBE32;
//  if ( !strcmp("SDL_WriteLE64", sym) ) return &SDL_WriteLE64;
//  if ( !strcmp("SDL_WriteBE64", sym) ) return &SDL_WriteBE64;
//  if ( !strcmp("SDL_GetNumAudioDrivers", sym) ) return &SDL_GetNumAudioDrivers;
//  if ( !strcmp("SDL_GetAudioDriver", sym) ) return &SDL_GetAudioDriver;
//  if ( !strcmp("SDL_AudioInit", sym) ) return &SDL_AudioInit;
//  if ( !strcmp("SDL_AudioQuit", sym) ) return &SDL_AudioQuit;
//  if ( !strcmp("SDL_GetCurrentAudioDriver", sym) ) return &SDL_GetCurrentAudioDriver;
//  if ( !strcmp("SDL_OpenAudio", sym) ) return &SDL_OpenAudio;
//  if ( !strcmp("SDL_GetNumAudioDevices", sym) ) return &SDL_GetNumAudioDevices;
//  if ( !strcmp("SDL_GetAudioDeviceName", sym) ) return &SDL_GetAudioDeviceName;
//  if ( !strcmp("SDL_OpenAudioDevice", sym) ) return &SDL_OpenAudioDevice;
//  if ( !strcmp("SDL_GetAudioStatus", sym) ) return &SDL_GetAudioStatus;
//  if ( !strcmp("SDL_GetAudioDeviceStatus", sym) ) return &SDL_GetAudioDeviceStatus;
//  if ( !strcmp("SDL_PauseAudio", sym) ) return &SDL_PauseAudio;
//  if ( !strcmp("SDL_PauseAudioDevice", sym) ) return &SDL_PauseAudioDevice;
//  if ( !strcmp("SDL_LoadWAV_RW", sym) ) return &SDL_LoadWAV_RW;
//  if ( !strcmp("SDL_FreeWAV", sym) ) return &SDL_FreeWAV;
//  if ( !strcmp("SDL_BuildAudioCVT", sym) ) return &SDL_BuildAudioCVT;
//  if ( !strcmp("SDL_ConvertAudio", sym) ) return &SDL_ConvertAudio;
//  if ( !strcmp("SDL_NewAudioStream", sym) ) return &SDL_NewAudioStream;
//  if ( !strcmp("SDL_AudioStreamPut", sym) ) return &SDL_AudioStreamPut;
//  if ( !strcmp("SDL_AudioStreamGet", sym) ) return &SDL_AudioStreamGet;
//  if ( !strcmp("SDL_AudioStreamAvailable", sym) ) return &SDL_AudioStreamAvailable;
//  if ( !strcmp("SDL_AudioStreamFlush", sym) ) return &SDL_AudioStreamFlush;
//  if ( !strcmp("SDL_AudioStreamClear", sym) ) return &SDL_AudioStreamClear;
//  if ( !strcmp("SDL_FreeAudioStream", sym) ) return &SDL_FreeAudioStream;
//  if ( !strcmp("SDL_MixAudio", sym) ) return &SDL_MixAudio;
//  if ( !strcmp("SDL_MixAudioFormat", sym) ) return &SDL_MixAudioFormat;
//  if ( !strcmp("SDL_QueueAudio", sym) ) return &SDL_QueueAudio;
//  if ( !strcmp("SDL_DequeueAudio", sym) ) return &SDL_DequeueAudio;
//  if ( !strcmp("SDL_GetQueuedAudioSize", sym) ) return &SDL_GetQueuedAudioSize;
//  if ( !strcmp("SDL_ClearQueuedAudio", sym) ) return &SDL_ClearQueuedAudio;
//  if ( !strcmp("SDL_LockAudio", sym) ) return &SDL_LockAudio;
//  if ( !strcmp("SDL_LockAudioDevice", sym) ) return &SDL_LockAudioDevice;
//  if ( !strcmp("SDL_UnlockAudio", sym) ) return &SDL_UnlockAudio;
//  if ( !strcmp("SDL_UnlockAudioDevice", sym) ) return &SDL_UnlockAudioDevice;
//  if ( !strcmp("SDL_CloseAudio", sym) ) return &SDL_CloseAudio;
//  if ( !strcmp("SDL_CloseAudioDevice", sym) ) return &SDL_CloseAudioDevice;
//  if ( !strcmp("SDL_SetClipboardText", sym) ) return &SDL_SetClipboardText;
//  if ( !strcmp("SDL_GetClipboardText", sym) ) return &SDL_GetClipboardText;
//  if ( !strcmp("SDL_HasClipboardText", sym) ) return &SDL_HasClipboardText;
//  if ( !strcmp("SDL_GetCPUCount", sym) ) return &SDL_GetCPUCount;
//  if ( !strcmp("SDL_GetCPUCacheLineSize", sym) ) return &SDL_GetCPUCacheLineSize;
//  if ( !strcmp("SDL_HasRDTSC", sym) ) return &SDL_HasRDTSC;
//  if ( !strcmp("SDL_HasAltiVec", sym) ) return &SDL_HasAltiVec;
//  if ( !strcmp("SDL_HasMMX", sym) ) return &SDL_HasMMX;
//  if ( !strcmp("SDL_Has3DNow", sym) ) return &SDL_Has3DNow;
//  if ( !strcmp("SDL_HasSSE", sym) ) return &SDL_HasSSE;
//  if ( !strcmp("SDL_HasSSE2", sym) ) return &SDL_HasSSE2;
//  if ( !strcmp("SDL_HasSSE3", sym) ) return &SDL_HasSSE3;
//  if ( !strcmp("SDL_HasSSE41", sym) ) return &SDL_HasSSE41;
//  if ( !strcmp("SDL_HasSSE42", sym) ) return &SDL_HasSSE42;
//  if ( !strcmp("SDL_HasAVX", sym) ) return &SDL_HasAVX;
//  if ( !strcmp("SDL_HasAVX2", sym) ) return &SDL_HasAVX2;
//  if ( !strcmp("SDL_HasAVX512F", sym) ) return &SDL_HasAVX512F;
//  if ( !strcmp("SDL_HasARMSIMD", sym) ) return &SDL_HasARMSIMD;
//  if ( !strcmp("SDL_HasNEON", sym) ) return &SDL_HasNEON;
//  if ( !strcmp("SDL_GetSystemRAM", sym) ) return &SDL_GetSystemRAM;
//  if ( !strcmp("SDL_SIMDGetAlignment", sym) ) return &SDL_SIMDGetAlignment;
//  if ( !strcmp("SDL_SIMDAlloc", sym) ) return &SDL_SIMDAlloc;
//  if ( !strcmp("SDL_SIMDRealloc", sym) ) return &SDL_SIMDRealloc;
//  if ( !strcmp("SDL_SIMDFree", sym) ) return &SDL_SIMDFree;
//  if ( !strcmp("SDL_GetPixelFormatName", sym) ) return &SDL_GetPixelFormatName;
//  if ( !strcmp("SDL_PixelFormatEnumToMasks", sym) ) return &SDL_PixelFormatEnumToMasks;
//  if ( !strcmp("SDL_MasksToPixelFormatEnum", sym) ) return &SDL_MasksToPixelFormatEnum;
//  if ( !strcmp("SDL_AllocFormat", sym) ) return &SDL_AllocFormat;
//  if ( !strcmp("SDL_FreeFormat", sym) ) return &SDL_FreeFormat;
//  if ( !strcmp("SDL_AllocPalette", sym) ) return &SDL_AllocPalette;
//  if ( !strcmp("SDL_SetPixelFormatPalette", sym) ) return &SDL_SetPixelFormatPalette;
//  if ( !strcmp("SDL_SetPaletteColors", sym) ) return &SDL_SetPaletteColors;
//  if ( !strcmp("SDL_FreePalette", sym) ) return &SDL_FreePalette;
//  if ( !strcmp("SDL_MapRGB", sym) ) return &SDL_MapRGB;
//  if ( !strcmp("SDL_MapRGBA", sym) ) return &SDL_MapRGBA;
//  if ( !strcmp("SDL_GetRGB", sym) ) return &SDL_GetRGB;
//  if ( !strcmp("SDL_GetRGBA", sym) ) return &SDL_GetRGBA;
//  if ( !strcmp("SDL_CalculateGammaRamp", sym) ) return &SDL_CalculateGammaRamp;
//  if ( !strcmp("SDL_HasIntersection", sym) ) return &SDL_HasIntersection;
//  if ( !strcmp("SDL_IntersectRect", sym) ) return &SDL_IntersectRect;
//  if ( !strcmp("SDL_UnionRect", sym) ) return &SDL_UnionRect;
//  if ( !strcmp("SDL_EnclosePoints", sym) ) return &SDL_EnclosePoints;
//  if ( !strcmp("SDL_IntersectRectAndLine", sym) ) return &SDL_IntersectRectAndLine;
//  if ( !strcmp("SDL_ComposeCustomBlendMode", sym) ) return &SDL_ComposeCustomBlendMode;
//  if ( !strcmp("SDL_CreateRGBSurface", sym) ) return &SDL_CreateRGBSurface;
//  if ( !strcmp("SDL_CreateRGBSurfaceWithFormat", sym) ) return &SDL_CreateRGBSurfaceWithFormat;
//  if ( !strcmp("SDL_CreateRGBSurfaceFrom", sym) ) return &SDL_CreateRGBSurfaceFrom;
//  if ( !strcmp("SDL_CreateRGBSurfaceWithFormatFrom", sym) ) return &SDL_CreateRGBSurfaceWithFormatFrom;
//  if ( !strcmp("SDL_FreeSurface", sym) ) return &SDL_FreeSurface;
//  if ( !strcmp("SDL_SetSurfacePalette", sym) ) return &SDL_SetSurfacePalette;
//  if ( !strcmp("SDL_LockSurface", sym) ) return &SDL_LockSurface;
//  if ( !strcmp("SDL_UnlockSurface", sym) ) return &SDL_UnlockSurface;
//  if ( !strcmp("SDL_LoadBMP_RW", sym) ) return &SDL_LoadBMP_RW;
//  if ( !strcmp("SDL_SaveBMP_RW", sym) ) return &SDL_SaveBMP_RW;
//  if ( !strcmp("SDL_SetSurfaceRLE", sym) ) return &SDL_SetSurfaceRLE;
//  if ( !strcmp("SDL_HasSurfaceRLE", sym) ) return &SDL_HasSurfaceRLE;
//  if ( !strcmp("SDL_SetColorKey", sym) ) return &SDL_SetColorKey;
//  if ( !strcmp("SDL_HasColorKey", sym) ) return &SDL_HasColorKey;
//  if ( !strcmp("SDL_GetColorKey", sym) ) return &SDL_GetColorKey;
//  if ( !strcmp("SDL_SetSurfaceColorMod", sym) ) return &SDL_SetSurfaceColorMod;
//  if ( !strcmp("SDL_GetSurfaceColorMod", sym) ) return &SDL_GetSurfaceColorMod;
//  if ( !strcmp("SDL_SetSurfaceAlphaMod", sym) ) return &SDL_SetSurfaceAlphaMod;
//  if ( !strcmp("SDL_GetSurfaceAlphaMod", sym) ) return &SDL_GetSurfaceAlphaMod;
//  if ( !strcmp("SDL_SetSurfaceBlendMode", sym) ) return &SDL_SetSurfaceBlendMode;
//  if ( !strcmp("SDL_GetSurfaceBlendMode", sym) ) return &SDL_GetSurfaceBlendMode;
//  if ( !strcmp("SDL_SetClipRect", sym) ) return &SDL_SetClipRect;
//  if ( !strcmp("SDL_GetClipRect", sym) ) return &SDL_GetClipRect;
//  if ( !strcmp("SDL_DuplicateSurface", sym) ) return &SDL_DuplicateSurface;
//  if ( !strcmp("SDL_ConvertSurface", sym) ) return &SDL_ConvertSurface;
//  if ( !strcmp("SDL_ConvertSurfaceFormat", sym) ) return &SDL_ConvertSurfaceFormat;
//  if ( !strcmp("SDL_ConvertPixels", sym) ) return &SDL_ConvertPixels;
//  if ( !strcmp("SDL_FillRect", sym) ) return &SDL_FillRect;
//  if ( !strcmp("SDL_FillRects", sym) ) return &SDL_FillRects;
//  if ( !strcmp("SDL_UpperBlit", sym) ) return &SDL_UpperBlit;
//  if ( !strcmp("SDL_LowerBlit", sym) ) return &SDL_LowerBlit;
//  if ( !strcmp("SDL_SoftStretch", sym) ) return &SDL_SoftStretch;
//  if ( !strcmp("SDL_UpperBlitScaled", sym) ) return &SDL_UpperBlitScaled;
//  if ( !strcmp("SDL_LowerBlitScaled", sym) ) return &SDL_LowerBlitScaled;
//  if ( !strcmp("SDL_SetYUVConversionMode", sym) ) return &SDL_SetYUVConversionMode;
//  if ( !strcmp("SDL_GetYUVConversionMode", sym) ) return &SDL_GetYUVConversionMode;
//  if ( !strcmp("SDL_GetYUVConversionModeForResolution", sym) ) return &SDL_GetYUVConversionModeForResolution;
//  if ( !strcmp("SDL_GetNumVideoDrivers", sym) ) return &SDL_GetNumVideoDrivers;
//  if ( !strcmp("SDL_GetVideoDriver", sym) ) return &SDL_GetVideoDriver;
//  if ( !strcmp("SDL_VideoInit", sym) ) return &SDL_VideoInit;
//  if ( !strcmp("SDL_VideoQuit", sym) ) return &SDL_VideoQuit;
//  if ( !strcmp("SDL_GetCurrentVideoDriver", sym) ) return &SDL_GetCurrentVideoDriver;
//  if ( !strcmp("SDL_GetNumVideoDisplays", sym) ) return &SDL_GetNumVideoDisplays;
//  if ( !strcmp("SDL_GetDisplayName", sym) ) return &SDL_GetDisplayName;
//  if ( !strcmp("SDL_GetDisplayBounds", sym) ) return &SDL_GetDisplayBounds;
//  if ( !strcmp("SDL_GetDisplayUsableBounds", sym) ) return &SDL_GetDisplayUsableBounds;
//  if ( !strcmp("SDL_GetDisplayDPI", sym) ) return &SDL_GetDisplayDPI;
//  if ( !strcmp("SDL_GetDisplayOrientation", sym) ) return &SDL_GetDisplayOrientation;
//  if ( !strcmp("SDL_GetNumDisplayModes", sym) ) return &SDL_GetNumDisplayModes;
//  if ( !strcmp("SDL_GetDisplayMode", sym) ) return &SDL_GetDisplayMode;
//  if ( !strcmp("SDL_GetDesktopDisplayMode", sym) ) return &SDL_GetDesktopDisplayMode;
//  if ( !strcmp("SDL_GetCurrentDisplayMode", sym) ) return &SDL_GetCurrentDisplayMode;
//  if ( !strcmp("SDL_GetClosestDisplayMode", sym) ) return &SDL_GetClosestDisplayMode;
//  if ( !strcmp("SDL_GetWindowDisplayIndex", sym) ) return &SDL_GetWindowDisplayIndex;
//  if ( !strcmp("SDL_SetWindowDisplayMode", sym) ) return &SDL_SetWindowDisplayMode;
//  if ( !strcmp("SDL_GetWindowDisplayMode", sym) ) return &SDL_GetWindowDisplayMode;
//  if ( !strcmp("SDL_GetWindowPixelFormat", sym) ) return &SDL_GetWindowPixelFormat;
//  if ( !strcmp("SDL_CreateWindow", sym) ) return &SDL_CreateWindow;
//  if ( !strcmp("SDL_CreateWindowFrom", sym) ) return &SDL_CreateWindowFrom;
//  if ( !strcmp("SDL_GetWindowID", sym) ) return &SDL_GetWindowID;
//  if ( !strcmp("SDL_GetWindowFromID", sym) ) return &SDL_GetWindowFromID;
//  if ( !strcmp("SDL_GetWindowFlags", sym) ) return &SDL_GetWindowFlags;
//  if ( !strcmp("SDL_SetWindowTitle", sym) ) return &SDL_SetWindowTitle;
//  if ( !strcmp("SDL_GetWindowTitle", sym) ) return &SDL_GetWindowTitle;
//  if ( !strcmp("SDL_SetWindowIcon", sym) ) return &SDL_SetWindowIcon;
//  if ( !strcmp("SDL_SetWindowData", sym) ) return &SDL_SetWindowData;
//  if ( !strcmp("SDL_GetWindowData", sym) ) return &SDL_GetWindowData;
//  if ( !strcmp("SDL_SetWindowPosition", sym) ) return &SDL_SetWindowPosition;
//  if ( !strcmp("SDL_GetWindowPosition", sym) ) return &SDL_GetWindowPosition;
//  if ( !strcmp("SDL_SetWindowSize", sym) ) return &SDL_SetWindowSize;
//  if ( !strcmp("SDL_GetWindowSize", sym) ) return &SDL_GetWindowSize;
//  if ( !strcmp("SDL_GetWindowBordersSize", sym) ) return &SDL_GetWindowBordersSize;
//  if ( !strcmp("SDL_SetWindowMinimumSize", sym) ) return &SDL_SetWindowMinimumSize;
//  if ( !strcmp("SDL_GetWindowMinimumSize", sym) ) return &SDL_GetWindowMinimumSize;
//  if ( !strcmp("SDL_SetWindowMaximumSize", sym) ) return &SDL_SetWindowMaximumSize;
//  if ( !strcmp("SDL_GetWindowMaximumSize", sym) ) return &SDL_GetWindowMaximumSize;
//  if ( !strcmp("SDL_SetWindowBordered", sym) ) return &SDL_SetWindowBordered;
//  if ( !strcmp("SDL_SetWindowResizable", sym) ) return &SDL_SetWindowResizable;
//  if ( !strcmp("SDL_ShowWindow", sym) ) return &SDL_ShowWindow;
//  if ( !strcmp("SDL_HideWindow", sym) ) return &SDL_HideWindow;
//  if ( !strcmp("SDL_RaiseWindow", sym) ) return &SDL_RaiseWindow;
//  if ( !strcmp("SDL_MaximizeWindow", sym) ) return &SDL_MaximizeWindow;
//  if ( !strcmp("SDL_MinimizeWindow", sym) ) return &SDL_MinimizeWindow;
//  if ( !strcmp("SDL_RestoreWindow", sym) ) return &SDL_RestoreWindow;
//  if ( !strcmp("SDL_SetWindowFullscreen", sym) ) return &SDL_SetWindowFullscreen;
//  if ( !strcmp("SDL_GetWindowSurface", sym) ) return &SDL_GetWindowSurface;
//  if ( !strcmp("SDL_UpdateWindowSurface", sym) ) return &SDL_UpdateWindowSurface;
//  if ( !strcmp("SDL_UpdateWindowSurfaceRects", sym) ) return &SDL_UpdateWindowSurfaceRects;
//  if ( !strcmp("SDL_SetWindowGrab", sym) ) return &SDL_SetWindowGrab;
//  if ( !strcmp("SDL_GetWindowGrab", sym) ) return &SDL_GetWindowGrab;
//  if ( !strcmp("SDL_GetGrabbedWindow", sym) ) return &SDL_GetGrabbedWindow;
//  if ( !strcmp("SDL_SetWindowBrightness", sym) ) return &SDL_SetWindowBrightness;
//  if ( !strcmp("SDL_GetWindowBrightness", sym) ) return &SDL_GetWindowBrightness;
//  if ( !strcmp("SDL_SetWindowOpacity", sym) ) return &SDL_SetWindowOpacity;
//  if ( !strcmp("SDL_GetWindowOpacity", sym) ) return &SDL_GetWindowOpacity;
//  if ( !strcmp("SDL_SetWindowModalFor", sym) ) return &SDL_SetWindowModalFor;
//  if ( !strcmp("SDL_SetWindowInputFocus", sym) ) return &SDL_SetWindowInputFocus;
//  if ( !strcmp("SDL_SetWindowGammaRamp", sym) ) return &SDL_SetWindowGammaRamp;
//  if ( !strcmp("SDL_GetWindowGammaRamp", sym) ) return &SDL_GetWindowGammaRamp;
//  if ( !strcmp("SDL_SetWindowHitTest", sym) ) return &SDL_SetWindowHitTest;
//  if ( !strcmp("SDL_DestroyWindow", sym) ) return &SDL_DestroyWindow;
//  if ( !strcmp("SDL_IsScreenSaverEnabled", sym) ) return &SDL_IsScreenSaverEnabled;
//  if ( !strcmp("SDL_EnableScreenSaver", sym) ) return &SDL_EnableScreenSaver;
//  if ( !strcmp("SDL_DisableScreenSaver", sym) ) return &SDL_DisableScreenSaver;
//  if ( !strcmp("SDL_GL_LoadLibrary", sym) ) return &SDL_GL_LoadLibrary;
//  if ( !strcmp("SDL_GL_GetProcAddress", sym) ) return &SDL_GL_GetProcAddress;
//  if ( !strcmp("SDL_GL_UnloadLibrary", sym) ) return &SDL_GL_UnloadLibrary;
//  if ( !strcmp("SDL_GL_ExtensionSupported", sym) ) return &SDL_GL_ExtensionSupported;
//  if ( !strcmp("SDL_GL_ResetAttributes", sym) ) return &SDL_GL_ResetAttributes;
//  if ( !strcmp("SDL_GL_SetAttribute", sym) ) return &SDL_GL_SetAttribute;
//  if ( !strcmp("SDL_GL_GetAttribute", sym) ) return &SDL_GL_GetAttribute;
//  if ( !strcmp("SDL_GL_CreateContext", sym) ) return &SDL_GL_CreateContext;
//  if ( !strcmp("SDL_GL_MakeCurrent", sym) ) return &SDL_GL_MakeCurrent;
//  if ( !strcmp("SDL_GL_GetCurrentWindow", sym) ) return &SDL_GL_GetCurrentWindow;
//  if ( !strcmp("SDL_GL_GetCurrentContext", sym) ) return &SDL_GL_GetCurrentContext;
//  if ( !strcmp("SDL_GL_GetDrawableSize", sym) ) return &SDL_GL_GetDrawableSize;
//  if ( !strcmp("SDL_GL_SetSwapInterval", sym) ) return &SDL_GL_SetSwapInterval;
//  if ( !strcmp("SDL_GL_GetSwapInterval", sym) ) return &SDL_GL_GetSwapInterval;
//  if ( !strcmp("SDL_GL_SwapWindow", sym) ) return &SDL_GL_SwapWindow;
//  if ( !strcmp("SDL_GL_DeleteContext", sym) ) return &SDL_GL_DeleteContext;
//  if ( !strcmp("SDL_GetKeyboardFocus", sym) ) return &SDL_GetKeyboardFocus;
//  if ( !strcmp("SDL_GetKeyboardState", sym) ) return &SDL_GetKeyboardState;
//  if ( !strcmp("SDL_GetModState", sym) ) return &SDL_GetModState;
//  if ( !strcmp("SDL_SetModState", sym) ) return &SDL_SetModState;
//  if ( !strcmp("SDL_GetKeyFromScancode", sym) ) return &SDL_GetKeyFromScancode;
//  if ( !strcmp("SDL_GetScancodeFromKey", sym) ) return &SDL_GetScancodeFromKey;
//  if ( !strcmp("SDL_GetScancodeName", sym) ) return &SDL_GetScancodeName;
//  if ( !strcmp("SDL_GetScancodeFromName", sym) ) return &SDL_GetScancodeFromName;
//  if ( !strcmp("SDL_GetKeyName", sym) ) return &SDL_GetKeyName;
//  if ( !strcmp("SDL_GetKeyFromName", sym) ) return &SDL_GetKeyFromName;
//  if ( !strcmp("SDL_StartTextInput", sym) ) return &SDL_StartTextInput;
//  if ( !strcmp("SDL_IsTextInputActive", sym) ) return &SDL_IsTextInputActive;
//  if ( !strcmp("SDL_StopTextInput", sym) ) return &SDL_StopTextInput;
//  if ( !strcmp("SDL_SetTextInputRect", sym) ) return &SDL_SetTextInputRect;
//  if ( !strcmp("SDL_HasScreenKeyboardSupport", sym) ) return &SDL_HasScreenKeyboardSupport;
//  if ( !strcmp("SDL_IsScreenKeyboardShown", sym) ) return &SDL_IsScreenKeyboardShown;
//  if ( !strcmp("SDL_GetMouseFocus", sym) ) return &SDL_GetMouseFocus;
//  if ( !strcmp("SDL_GetMouseState", sym) ) return &SDL_GetMouseState;
//  if ( !strcmp("SDL_GetGlobalMouseState", sym) ) return &SDL_GetGlobalMouseState;
//  if ( !strcmp("SDL_GetRelativeMouseState", sym) ) return &SDL_GetRelativeMouseState;
//  if ( !strcmp("SDL_WarpMouseInWindow", sym) ) return &SDL_WarpMouseInWindow;
//  if ( !strcmp("SDL_WarpMouseGlobal", sym) ) return &SDL_WarpMouseGlobal;
//  if ( !strcmp("SDL_SetRelativeMouseMode", sym) ) return &SDL_SetRelativeMouseMode;
//  if ( !strcmp("SDL_CaptureMouse", sym) ) return &SDL_CaptureMouse;
//  if ( !strcmp("SDL_GetRelativeMouseMode", sym) ) return &SDL_GetRelativeMouseMode;
//  if ( !strcmp("SDL_CreateCursor", sym) ) return &SDL_CreateCursor;
//  if ( !strcmp("SDL_CreateColorCursor", sym) ) return &SDL_CreateColorCursor;
//  if ( !strcmp("SDL_CreateSystemCursor", sym) ) return &SDL_CreateSystemCursor;
//  if ( !strcmp("SDL_SetCursor", sym) ) return &SDL_SetCursor;
//  if ( !strcmp("SDL_GetCursor", sym) ) return &SDL_GetCursor;
//  if ( !strcmp("SDL_GetDefaultCursor", sym) ) return &SDL_GetDefaultCursor;
//  if ( !strcmp("SDL_FreeCursor", sym) ) return &SDL_FreeCursor;
//  if ( !strcmp("SDL_ShowCursor", sym) ) return &SDL_ShowCursor;
//  if ( !strcmp("SDL_LockJoysticks", sym) ) return &SDL_LockJoysticks;
//  if ( !strcmp("SDL_UnlockJoysticks", sym) ) return &SDL_UnlockJoysticks;
//  if ( !strcmp("SDL_NumJoysticks", sym) ) return &SDL_NumJoysticks;
//  if ( !strcmp("SDL_JoystickNameForIndex", sym) ) return &SDL_JoystickNameForIndex;
//  if ( !strcmp("SDL_JoystickGetDevicePlayerIndex", sym) ) return &SDL_JoystickGetDevicePlayerIndex;
//  if ( !strcmp("SDL_JoystickGetDeviceGUID", sym) ) return &SDL_JoystickGetDeviceGUID;
//  if ( !strcmp("SDL_JoystickGetDeviceVendor", sym) ) return &SDL_JoystickGetDeviceVendor;
//  if ( !strcmp("SDL_JoystickGetDeviceProduct", sym) ) return &SDL_JoystickGetDeviceProduct;
//  if ( !strcmp("SDL_JoystickGetDeviceProductVersion", sym) ) return &SDL_JoystickGetDeviceProductVersion;
//  if ( !strcmp("SDL_JoystickGetDeviceType", sym) ) return &SDL_JoystickGetDeviceType;
//  if ( !strcmp("SDL_JoystickGetDeviceInstanceID", sym) ) return &SDL_JoystickGetDeviceInstanceID;
//  if ( !strcmp("SDL_JoystickOpen", sym) ) return &SDL_JoystickOpen;
//  if ( !strcmp("SDL_JoystickFromInstanceID", sym) ) return &SDL_JoystickFromInstanceID;
//  if ( !strcmp("SDL_JoystickFromPlayerIndex", sym) ) return &SDL_JoystickFromPlayerIndex;
//  if ( !strcmp("SDL_JoystickAttachVirtual", sym) ) return &SDL_JoystickAttachVirtual;
//  if ( !strcmp("SDL_JoystickDetachVirtual", sym) ) return &SDL_JoystickDetachVirtual;
//  if ( !strcmp("SDL_JoystickIsVirtual", sym) ) return &SDL_JoystickIsVirtual;
//  if ( !strcmp("SDL_JoystickSetVirtualAxis", sym) ) return &SDL_JoystickSetVirtualAxis;
//  if ( !strcmp("SDL_JoystickSetVirtualButton", sym) ) return &SDL_JoystickSetVirtualButton;
//  if ( !strcmp("SDL_JoystickSetVirtualHat", sym) ) return &SDL_JoystickSetVirtualHat;
//  if ( !strcmp("SDL_JoystickName", sym) ) return &SDL_JoystickName;
//  if ( !strcmp("SDL_JoystickGetPlayerIndex", sym) ) return &SDL_JoystickGetPlayerIndex;
//  if ( !strcmp("SDL_JoystickSetPlayerIndex", sym) ) return &SDL_JoystickSetPlayerIndex;
//  if ( !strcmp("SDL_JoystickGetGUID", sym) ) return &SDL_JoystickGetGUID;
//  if ( !strcmp("SDL_JoystickGetVendor", sym) ) return &SDL_JoystickGetVendor;
//  if ( !strcmp("SDL_JoystickGetProduct", sym) ) return &SDL_JoystickGetProduct;
//  if ( !strcmp("SDL_JoystickGetProductVersion", sym) ) return &SDL_JoystickGetProductVersion;
//  if ( !strcmp("SDL_JoystickGetSerial", sym) ) return &SDL_JoystickGetSerial;
//  if ( !strcmp("SDL_JoystickGetType", sym) ) return &SDL_JoystickGetType;
//  if ( !strcmp("SDL_JoystickGetGUIDString", sym) ) return &SDL_JoystickGetGUIDString;
//  if ( !strcmp("SDL_JoystickGetGUIDFromString", sym) ) return &SDL_JoystickGetGUIDFromString;
//  if ( !strcmp("SDL_JoystickGetAttached", sym) ) return &SDL_JoystickGetAttached;
//  if ( !strcmp("SDL_JoystickInstanceID", sym) ) return &SDL_JoystickInstanceID;
//  if ( !strcmp("SDL_JoystickNumAxes", sym) ) return &SDL_JoystickNumAxes;
//  if ( !strcmp("SDL_JoystickNumBalls", sym) ) return &SDL_JoystickNumBalls;
//  if ( !strcmp("SDL_JoystickNumHats", sym) ) return &SDL_JoystickNumHats;
//  if ( !strcmp("SDL_JoystickNumButtons", sym) ) return &SDL_JoystickNumButtons;
//  if ( !strcmp("SDL_JoystickUpdate", sym) ) return &SDL_JoystickUpdate;
//  if ( !strcmp("SDL_JoystickEventState", sym) ) return &SDL_JoystickEventState;
//  if ( !strcmp("SDL_JoystickGetAxis", sym) ) return &SDL_JoystickGetAxis;
//  if ( !strcmp("SDL_JoystickGetAxisInitialState", sym) ) return &SDL_JoystickGetAxisInitialState;
//  if ( !strcmp("SDL_JoystickGetHat", sym) ) return &SDL_JoystickGetHat;
//  if ( !strcmp("SDL_JoystickGetBall", sym) ) return &SDL_JoystickGetBall;
//  if ( !strcmp("SDL_JoystickGetButton", sym) ) return &SDL_JoystickGetButton;
//  if ( !strcmp("SDL_JoystickRumble", sym) ) return &SDL_JoystickRumble;
//  if ( !strcmp("SDL_JoystickRumbleTriggers", sym) ) return &SDL_JoystickRumbleTriggers;
//  if ( !strcmp("SDL_JoystickHasLED", sym) ) return &SDL_JoystickHasLED;
//  if ( !strcmp("SDL_JoystickSetLED", sym) ) return &SDL_JoystickSetLED;
//  if ( !strcmp("SDL_JoystickClose", sym) ) return &SDL_JoystickClose;
//  if ( !strcmp("SDL_JoystickCurrentPowerLevel", sym) ) return &SDL_JoystickCurrentPowerLevel;
//  if ( !strcmp("SDL_LockSensors", sym) ) return &SDL_LockSensors;
//  if ( !strcmp("SDL_UnlockSensors", sym) ) return &SDL_UnlockSensors;
//  if ( !strcmp("SDL_NumSensors", sym) ) return &SDL_NumSensors;
//  if ( !strcmp("SDL_SensorGetDeviceName", sym) ) return &SDL_SensorGetDeviceName;
//  if ( !strcmp("SDL_SensorGetDeviceType", sym) ) return &SDL_SensorGetDeviceType;
//  if ( !strcmp("SDL_SensorGetDeviceNonPortableType", sym) ) return &SDL_SensorGetDeviceNonPortableType;
//  if ( !strcmp("SDL_SensorGetDeviceInstanceID", sym) ) return &SDL_SensorGetDeviceInstanceID;
//  if ( !strcmp("SDL_SensorOpen", sym) ) return &SDL_SensorOpen;
//  if ( !strcmp("SDL_SensorFromInstanceID", sym) ) return &SDL_SensorFromInstanceID;
//  if ( !strcmp("SDL_SensorGetName", sym) ) return &SDL_SensorGetName;
//  if ( !strcmp("SDL_SensorGetType", sym) ) return &SDL_SensorGetType;
//  if ( !strcmp("SDL_SensorGetNonPortableType", sym) ) return &SDL_SensorGetNonPortableType;
//  if ( !strcmp("SDL_SensorGetInstanceID", sym) ) return &SDL_SensorGetInstanceID;
//  if ( !strcmp("SDL_SensorGetData", sym) ) return &SDL_SensorGetData;
//  if ( !strcmp("SDL_SensorClose", sym) ) return &SDL_SensorClose;
//  if ( !strcmp("SDL_SensorUpdate", sym) ) return &SDL_SensorUpdate;
//  if ( !strcmp("SDL_GameControllerAddMappingsFromRW", sym) ) return &SDL_GameControllerAddMappingsFromRW;
//  if ( !strcmp("SDL_GameControllerAddMapping", sym) ) return &SDL_GameControllerAddMapping;
//  if ( !strcmp("SDL_GameControllerNumMappings", sym) ) return &SDL_GameControllerNumMappings;
//  if ( !strcmp("SDL_GameControllerMappingForIndex", sym) ) return &SDL_GameControllerMappingForIndex;
//  if ( !strcmp("SDL_GameControllerMappingForGUID", sym) ) return &SDL_GameControllerMappingForGUID;
//  if ( !strcmp("SDL_GameControllerMapping", sym) ) return &SDL_GameControllerMapping;
//  if ( !strcmp("SDL_IsGameController", sym) ) return &SDL_IsGameController;
//  if ( !strcmp("SDL_GameControllerNameForIndex", sym) ) return &SDL_GameControllerNameForIndex;
//  if ( !strcmp("SDL_GameControllerTypeForIndex", sym) ) return &SDL_GameControllerTypeForIndex;
//  if ( !strcmp("SDL_GameControllerMappingForDeviceIndex", sym) ) return &SDL_GameControllerMappingForDeviceIndex;
//  if ( !strcmp("SDL_GameControllerOpen", sym) ) return &SDL_GameControllerOpen;
//  if ( !strcmp("SDL_GameControllerFromInstanceID", sym) ) return &SDL_GameControllerFromInstanceID;
//  if ( !strcmp("SDL_GameControllerFromPlayerIndex", sym) ) return &SDL_GameControllerFromPlayerIndex;
//  if ( !strcmp("SDL_GameControllerName", sym) ) return &SDL_GameControllerName;
//  if ( !strcmp("SDL_GameControllerGetType", sym) ) return &SDL_GameControllerGetType;
//  if ( !strcmp("SDL_GameControllerGetPlayerIndex", sym) ) return &SDL_GameControllerGetPlayerIndex;
//  if ( !strcmp("SDL_GameControllerSetPlayerIndex", sym) ) return &SDL_GameControllerSetPlayerIndex;
//  if ( !strcmp("SDL_GameControllerGetVendor", sym) ) return &SDL_GameControllerGetVendor;
//  if ( !strcmp("SDL_GameControllerGetProduct", sym) ) return &SDL_GameControllerGetProduct;
//  if ( !strcmp("SDL_GameControllerGetProductVersion", sym) ) return &SDL_GameControllerGetProductVersion;
//  if ( !strcmp("SDL_GameControllerGetSerial", sym) ) return &SDL_GameControllerGetSerial;
//  if ( !strcmp("SDL_GameControllerGetAttached", sym) ) return &SDL_GameControllerGetAttached;
//  if ( !strcmp("SDL_GameControllerGetJoystick", sym) ) return &SDL_GameControllerGetJoystick;
//  if ( !strcmp("SDL_GameControllerEventState", sym) ) return &SDL_GameControllerEventState;
//  if ( !strcmp("SDL_GameControllerUpdate", sym) ) return &SDL_GameControllerUpdate;
//  if ( !strcmp("SDL_GameControllerGetAxisFromString", sym) ) return &SDL_GameControllerGetAxisFromString;
//  if ( !strcmp("SDL_GameControllerGetStringForAxis", sym) ) return &SDL_GameControllerGetStringForAxis;
//  if ( !strcmp("SDL_GameControllerGetBindForAxis", sym) ) return &SDL_GameControllerGetBindForAxis;
//  if ( !strcmp("SDL_GameControllerHasAxis", sym) ) return &SDL_GameControllerHasAxis;
//  if ( !strcmp("SDL_GameControllerGetAxis", sym) ) return &SDL_GameControllerGetAxis;
//  if ( !strcmp("SDL_GameControllerGetButtonFromString", sym) ) return &SDL_GameControllerGetButtonFromString;
//  if ( !strcmp("SDL_GameControllerGetStringForButton", sym) ) return &SDL_GameControllerGetStringForButton;
//  if ( !strcmp("SDL_GameControllerGetBindForButton", sym) ) return &SDL_GameControllerGetBindForButton;
//  if ( !strcmp("SDL_GameControllerHasButton", sym) ) return &SDL_GameControllerHasButton;
//  if ( !strcmp("SDL_GameControllerGetButton", sym) ) return &SDL_GameControllerGetButton;
//  if ( !strcmp("SDL_GameControllerGetNumTouchpads", sym) ) return &SDL_GameControllerGetNumTouchpads;
//  if ( !strcmp("SDL_GameControllerGetNumTouchpadFingers", sym) ) return &SDL_GameControllerGetNumTouchpadFingers;
//  if ( !strcmp("SDL_GameControllerGetTouchpadFinger", sym) ) return &SDL_GameControllerGetTouchpadFinger;
//  if ( !strcmp("SDL_GameControllerHasSensor", sym) ) return &SDL_GameControllerHasSensor;
//  if ( !strcmp("SDL_GameControllerSetSensorEnabled", sym) ) return &SDL_GameControllerSetSensorEnabled;
//  if ( !strcmp("SDL_GameControllerIsSensorEnabled", sym) ) return &SDL_GameControllerIsSensorEnabled;
//  if ( !strcmp("SDL_GameControllerGetSensorData", sym) ) return &SDL_GameControllerGetSensorData;
//  if ( !strcmp("SDL_GameControllerRumble", sym) ) return &SDL_GameControllerRumble;
//  if ( !strcmp("SDL_GameControllerRumbleTriggers", sym) ) return &SDL_GameControllerRumbleTriggers;
//  if ( !strcmp("SDL_GameControllerHasLED", sym) ) return &SDL_GameControllerHasLED;
//  if ( !strcmp("SDL_GameControllerSetLED", sym) ) return &SDL_GameControllerSetLED;
//  if ( !strcmp("SDL_GameControllerClose", sym) ) return &SDL_GameControllerClose;
//  if ( !strcmp("SDL_GetNumTouchDevices", sym) ) return &SDL_GetNumTouchDevices;
//  if ( !strcmp("SDL_GetTouchDevice", sym) ) return &SDL_GetTouchDevice;
//  if ( !strcmp("SDL_GetTouchDeviceType", sym) ) return &SDL_GetTouchDeviceType;
//  if ( !strcmp("SDL_GetNumTouchFingers", sym) ) return &SDL_GetNumTouchFingers;
//  if ( !strcmp("SDL_GetTouchFinger", sym) ) return &SDL_GetTouchFinger;
//  if ( !strcmp("SDL_RecordGesture", sym) ) return &SDL_RecordGesture;
//  if ( !strcmp("SDL_SaveAllDollarTemplates", sym) ) return &SDL_SaveAllDollarTemplates;
//  if ( !strcmp("SDL_SaveDollarTemplate", sym) ) return &SDL_SaveDollarTemplate;
//  if ( !strcmp("SDL_LoadDollarTemplates", sym) ) return &SDL_LoadDollarTemplates;
//  if ( !strcmp("SDL_PumpEvents", sym) ) return &SDL_PumpEvents;
//  if ( !strcmp("SDL_PeepEvents", sym) ) return &SDL_PeepEvents;
//  if ( !strcmp("SDL_HasEvent", sym) ) return &SDL_HasEvent;
//  if ( !strcmp("SDL_HasEvents", sym) ) return &SDL_HasEvents;
//  if ( !strcmp("SDL_FlushEvent", sym) ) return &SDL_FlushEvent;
//  if ( !strcmp("SDL_FlushEvents", sym) ) return &SDL_FlushEvents;
//  if ( !strcmp("SDL_PollEvent", sym) ) return &SDL_PollEvent;
//  if ( !strcmp("SDL_WaitEvent", sym) ) return &SDL_WaitEvent;
//  if ( !strcmp("SDL_WaitEventTimeout", sym) ) return &SDL_WaitEventTimeout;
//  if ( !strcmp("SDL_PushEvent", sym) ) return &SDL_PushEvent;
//  if ( !strcmp("SDL_SetEventFilter", sym) ) return &SDL_SetEventFilter;
//  if ( !strcmp("SDL_GetEventFilter", sym) ) return &SDL_GetEventFilter;
//  if ( !strcmp("SDL_AddEventWatch", sym) ) return &SDL_AddEventWatch;
//  if ( !strcmp("SDL_DelEventWatch", sym) ) return &SDL_DelEventWatch;
//  if ( !strcmp("SDL_FilterEvents", sym) ) return &SDL_FilterEvents;
//  if ( !strcmp("SDL_EventState", sym) ) return &SDL_EventState;
//  if ( !strcmp("SDL_RegisterEvents", sym) ) return &SDL_RegisterEvents;
//  if ( !strcmp("SDL_GetBasePath", sym) ) return &SDL_GetBasePath;
//  if ( !strcmp("SDL_GetPrefPath", sym) ) return &SDL_GetPrefPath;
//  if ( !strcmp("SDL_NumHaptics", sym) ) return &SDL_NumHaptics;
//  if ( !strcmp("SDL_HapticName", sym) ) return &SDL_HapticName;
//  if ( !strcmp("SDL_HapticOpen", sym) ) return &SDL_HapticOpen;
//  if ( !strcmp("SDL_HapticOpened", sym) ) return &SDL_HapticOpened;
//  if ( !strcmp("SDL_HapticIndex", sym) ) return &SDL_HapticIndex;
//  if ( !strcmp("SDL_MouseIsHaptic", sym) ) return &SDL_MouseIsHaptic;
//  if ( !strcmp("SDL_HapticOpenFromMouse", sym) ) return &SDL_HapticOpenFromMouse;
//  if ( !strcmp("SDL_JoystickIsHaptic", sym) ) return &SDL_JoystickIsHaptic;
//  if ( !strcmp("SDL_HapticOpenFromJoystick", sym) ) return &SDL_HapticOpenFromJoystick;
//  if ( !strcmp("SDL_HapticClose", sym) ) return &SDL_HapticClose;
//  if ( !strcmp("SDL_HapticNumEffects", sym) ) return &SDL_HapticNumEffects;
//  if ( !strcmp("SDL_HapticNumEffectsPlaying", sym) ) return &SDL_HapticNumEffectsPlaying;
//  if ( !strcmp("SDL_HapticQuery", sym) ) return &SDL_HapticQuery;
//  if ( !strcmp("SDL_HapticNumAxes", sym) ) return &SDL_HapticNumAxes;
//  if ( !strcmp("SDL_HapticEffectSupported", sym) ) return &SDL_HapticEffectSupported;
//  if ( !strcmp("SDL_HapticNewEffect", sym) ) return &SDL_HapticNewEffect;
//  if ( !strcmp("SDL_HapticUpdateEffect", sym) ) return &SDL_HapticUpdateEffect;
//  if ( !strcmp("SDL_HapticRunEffect", sym) ) return &SDL_HapticRunEffect;
//  if ( !strcmp("SDL_HapticStopEffect", sym) ) return &SDL_HapticStopEffect;
//  if ( !strcmp("SDL_HapticDestroyEffect", sym) ) return &SDL_HapticDestroyEffect;
//  if ( !strcmp("SDL_HapticGetEffectStatus", sym) ) return &SDL_HapticGetEffectStatus;
//  if ( !strcmp("SDL_HapticSetGain", sym) ) return &SDL_HapticSetGain;
//  if ( !strcmp("SDL_HapticSetAutocenter", sym) ) return &SDL_HapticSetAutocenter;
//  if ( !strcmp("SDL_HapticPause", sym) ) return &SDL_HapticPause;
//  if ( !strcmp("SDL_HapticUnpause", sym) ) return &SDL_HapticUnpause;
//  if ( !strcmp("SDL_HapticStopAll", sym) ) return &SDL_HapticStopAll;
//  if ( !strcmp("SDL_HapticRumbleSupported", sym) ) return &SDL_HapticRumbleSupported;
//  if ( !strcmp("SDL_HapticRumbleInit", sym) ) return &SDL_HapticRumbleInit;
//  if ( !strcmp("SDL_HapticRumblePlay", sym) ) return &SDL_HapticRumblePlay;
//  if ( !strcmp("SDL_HapticRumbleStop", sym) ) return &SDL_HapticRumbleStop;
//  if ( !strcmp("SDL_SetHintWithPriority", sym) ) return &SDL_SetHintWithPriority;
//  if ( !strcmp("SDL_SetHint", sym) ) return &SDL_SetHint;
//  if ( !strcmp("SDL_GetHint", sym) ) return &SDL_GetHint;
//  if ( !strcmp("SDL_GetHintBoolean", sym) ) return &SDL_GetHintBoolean;
//  if ( !strcmp("SDL_AddHintCallback", sym) ) return &SDL_AddHintCallback;
//  if ( !strcmp("SDL_DelHintCallback", sym) ) return &SDL_DelHintCallback;
//  if ( !strcmp("SDL_ClearHints", sym) ) return &SDL_ClearHints;
//  if ( !strcmp("SDL_LoadObject", sym) ) return &SDL_LoadObject;
//  if ( !strcmp("SDL_LoadFunction", sym) ) return &SDL_LoadFunction;
//  if ( !strcmp("SDL_UnloadObject", sym) ) return &SDL_UnloadObject;
//  if ( !strcmp("SDL_LogSetAllPriority", sym) ) return &SDL_LogSetAllPriority;
//  if ( !strcmp("SDL_LogSetPriority", sym) ) return &SDL_LogSetPriority;
//  if ( !strcmp("SDL_LogGetPriority", sym) ) return &SDL_LogGetPriority;
//  if ( !strcmp("SDL_LogResetPriorities", sym) ) return &SDL_LogResetPriorities;
//  if ( !strcmp("SDL_Log", sym) ) return &SDL_Log;
//  if ( !strcmp("SDL_LogVerbose", sym) ) return &SDL_LogVerbose;
//  if ( !strcmp("SDL_LogDebug", sym) ) return &SDL_LogDebug;
//  if ( !strcmp("SDL_LogInfo", sym) ) return &SDL_LogInfo;
//  if ( !strcmp("SDL_LogWarn", sym) ) return &SDL_LogWarn;
//  if ( !strcmp("SDL_LogError", sym) ) return &SDL_LogError;
//  if ( !strcmp("SDL_LogCritical", sym) ) return &SDL_LogCritical;
//  if ( !strcmp("SDL_LogMessage", sym) ) return &SDL_LogMessage;
//  if ( !strcmp("SDL_LogGetOutputFunction", sym) ) return &SDL_LogGetOutputFunction;
//  if ( !strcmp("SDL_LogSetOutputFunction", sym) ) return &SDL_LogSetOutputFunction;
//  if ( !strcmp("SDL_ShowMessageBox", sym) ) return &SDL_ShowMessageBox;
//  if ( !strcmp("SDL_ShowSimpleMessageBox", sym) ) return &SDL_ShowSimpleMessageBox;
//  if ( !strcmp("SDL_Metal_CreateView", sym) ) return &SDL_Metal_CreateView;
//  if ( !strcmp("SDL_Metal_DestroyView", sym) ) return &SDL_Metal_DestroyView;
//  if ( !strcmp("SDL_Metal_GetLayer", sym) ) return &SDL_Metal_GetLayer;
//  if ( !strcmp("SDL_Metal_GetDrawableSize", sym) ) return &SDL_Metal_GetDrawableSize;
//  if ( !strcmp("SDL_GetPowerInfo", sym) ) return &SDL_GetPowerInfo;
//  if ( !strcmp("SDL_GetNumRenderDrivers", sym) ) return &SDL_GetNumRenderDrivers;
//  if ( !strcmp("SDL_GetRenderDriverInfo", sym) ) return &SDL_GetRenderDriverInfo;
//  if ( !strcmp("SDL_CreateWindowAndRenderer", sym) ) return &SDL_CreateWindowAndRenderer;
//  if ( !strcmp("SDL_CreateRenderer", sym) ) return &SDL_CreateRenderer;
//  if ( !strcmp("SDL_CreateSoftwareRenderer", sym) ) return &SDL_CreateSoftwareRenderer;
//  if ( !strcmp("SDL_GetRenderer", sym) ) return &SDL_GetRenderer;
//  if ( !strcmp("SDL_GetRendererInfo", sym) ) return &SDL_GetRendererInfo;
//  if ( !strcmp("SDL_GetRendererOutputSize", sym) ) return &SDL_GetRendererOutputSize;
//  if ( !strcmp("SDL_CreateTexture", sym) ) return &SDL_CreateTexture;
//  if ( !strcmp("SDL_CreateTextureFromSurface", sym) ) return &SDL_CreateTextureFromSurface;
//  if ( !strcmp("SDL_QueryTexture", sym) ) return &SDL_QueryTexture;
//  if ( !strcmp("SDL_SetTextureColorMod", sym) ) return &SDL_SetTextureColorMod;
//  if ( !strcmp("SDL_GetTextureColorMod", sym) ) return &SDL_GetTextureColorMod;
//  if ( !strcmp("SDL_SetTextureAlphaMod", sym) ) return &SDL_SetTextureAlphaMod;
//  if ( !strcmp("SDL_GetTextureAlphaMod", sym) ) return &SDL_GetTextureAlphaMod;
//  if ( !strcmp("SDL_SetTextureBlendMode", sym) ) return &SDL_SetTextureBlendMode;
//  if ( !strcmp("SDL_GetTextureBlendMode", sym) ) return &SDL_GetTextureBlendMode;
//  if ( !strcmp("SDL_SetTextureScaleMode", sym) ) return &SDL_SetTextureScaleMode;
//  if ( !strcmp("SDL_GetTextureScaleMode", sym) ) return &SDL_GetTextureScaleMode;
//  if ( !strcmp("SDL_UpdateTexture", sym) ) return &SDL_UpdateTexture;
//  if ( !strcmp("SDL_UpdateYUVTexture", sym) ) return &SDL_UpdateYUVTexture;
//  if ( !strcmp("SDL_LockTexture", sym) ) return &SDL_LockTexture;
//  if ( !strcmp("SDL_LockTextureToSurface", sym) ) return &SDL_LockTextureToSurface;
//  if ( !strcmp("SDL_UnlockTexture", sym) ) return &SDL_UnlockTexture;
//  if ( !strcmp("SDL_RenderTargetSupported", sym) ) return &SDL_RenderTargetSupported;
//  if ( !strcmp("SDL_SetRenderTarget", sym) ) return &SDL_SetRenderTarget;
//  if ( !strcmp("SDL_GetRenderTarget", sym) ) return &SDL_GetRenderTarget;
//  if ( !strcmp("SDL_RenderSetLogicalSize", sym) ) return &SDL_RenderSetLogicalSize;
//  if ( !strcmp("SDL_RenderGetLogicalSize", sym) ) return &SDL_RenderGetLogicalSize;
//  if ( !strcmp("SDL_RenderSetIntegerScale", sym) ) return &SDL_RenderSetIntegerScale;
//  if ( !strcmp("SDL_RenderGetIntegerScale", sym) ) return &SDL_RenderGetIntegerScale;
//  if ( !strcmp("SDL_RenderSetViewport", sym) ) return &SDL_RenderSetViewport;
//  if ( !strcmp("SDL_RenderGetViewport", sym) ) return &SDL_RenderGetViewport;
//  if ( !strcmp("SDL_RenderSetClipRect", sym) ) return &SDL_RenderSetClipRect;
//  if ( !strcmp("SDL_RenderGetClipRect", sym) ) return &SDL_RenderGetClipRect;
//  if ( !strcmp("SDL_RenderIsClipEnabled", sym) ) return &SDL_RenderIsClipEnabled;
//  if ( !strcmp("SDL_RenderSetScale", sym) ) return &SDL_RenderSetScale;
//  if ( !strcmp("SDL_RenderGetScale", sym) ) return &SDL_RenderGetScale;
//  if ( !strcmp("SDL_SetRenderDrawColor", sym) ) return &SDL_SetRenderDrawColor;
//  if ( !strcmp("SDL_GetRenderDrawColor", sym) ) return &SDL_GetRenderDrawColor;
//  if ( !strcmp("SDL_SetRenderDrawBlendMode", sym) ) return &SDL_SetRenderDrawBlendMode;
//  if ( !strcmp("SDL_GetRenderDrawBlendMode", sym) ) return &SDL_GetRenderDrawBlendMode;
//  if ( !strcmp("SDL_RenderClear", sym) ) return &SDL_RenderClear;
//  if ( !strcmp("SDL_RenderDrawPoint", sym) ) return &SDL_RenderDrawPoint;
//  if ( !strcmp("SDL_RenderDrawPoints", sym) ) return &SDL_RenderDrawPoints;
//  if ( !strcmp("SDL_RenderDrawLine", sym) ) return &SDL_RenderDrawLine;
//  if ( !strcmp("SDL_RenderDrawLines", sym) ) return &SDL_RenderDrawLines;
//  if ( !strcmp("SDL_RenderDrawRect", sym) ) return &SDL_RenderDrawRect;
//  if ( !strcmp("SDL_RenderDrawRects", sym) ) return &SDL_RenderDrawRects;
//  if ( !strcmp("SDL_RenderFillRect", sym) ) return &SDL_RenderFillRect;
//  if ( !strcmp("SDL_RenderFillRects", sym) ) return &SDL_RenderFillRects;
//  if ( !strcmp("SDL_RenderCopy", sym) ) return &SDL_RenderCopy;
//  if ( !strcmp("SDL_RenderCopyEx", sym) ) return &SDL_RenderCopyEx;
//  if ( !strcmp("SDL_RenderDrawPointF", sym) ) return &SDL_RenderDrawPointF;
//  if ( !strcmp("SDL_RenderDrawPointsF", sym) ) return &SDL_RenderDrawPointsF;
//  if ( !strcmp("SDL_RenderDrawLineF", sym) ) return &SDL_RenderDrawLineF;
//  if ( !strcmp("SDL_RenderDrawLinesF", sym) ) return &SDL_RenderDrawLinesF;
//  if ( !strcmp("SDL_RenderDrawRectF", sym) ) return &SDL_RenderDrawRectF;
//  if ( !strcmp("SDL_RenderDrawRectsF", sym) ) return &SDL_RenderDrawRectsF;
//  if ( !strcmp("SDL_RenderFillRectF", sym) ) return &SDL_RenderFillRectF;
//  if ( !strcmp("SDL_RenderFillRectsF", sym) ) return &SDL_RenderFillRectsF;
//  if ( !strcmp("SDL_RenderCopyF", sym) ) return &SDL_RenderCopyF;
//  if ( !strcmp("SDL_RenderCopyExF", sym) ) return &SDL_RenderCopyExF;
//  if ( !strcmp("SDL_RenderReadPixels", sym) ) return &SDL_RenderReadPixels;
//  if ( !strcmp("SDL_RenderPresent", sym) ) return &SDL_RenderPresent;
//  if ( !strcmp("SDL_DestroyTexture", sym) ) return &SDL_DestroyTexture;
//  if ( !strcmp("SDL_DestroyRenderer", sym) ) return &SDL_DestroyRenderer;
//  if ( !strcmp("SDL_RenderFlush", sym) ) return &SDL_RenderFlush;
//  if ( !strcmp("SDL_GL_BindTexture", sym) ) return &SDL_GL_BindTexture;
//  if ( !strcmp("SDL_GL_UnbindTexture", sym) ) return &SDL_GL_UnbindTexture;
//  if ( !strcmp("SDL_RenderGetMetalLayer", sym) ) return &SDL_RenderGetMetalLayer;
//  if ( !strcmp("SDL_RenderGetMetalCommandEncoder", sym) ) return &SDL_RenderGetMetalCommandEncoder;
//  if ( !strcmp("SDL_CreateShapedWindow", sym) ) return &SDL_CreateShapedWindow;
//  if ( !strcmp("SDL_IsShapedWindow", sym) ) return &SDL_IsShapedWindow;
//  if ( !strcmp("SDL_SetWindowShape", sym) ) return &SDL_SetWindowShape;
//  if ( !strcmp("SDL_GetShapedWindowMode", sym) ) return &SDL_GetShapedWindowMode;
//  if ( !strcmp("SDL_LinuxSetThreadPriority", sym) ) return &SDL_LinuxSetThreadPriority;
//  if ( !strcmp("SDL_IsTablet", sym) ) return &SDL_IsTablet;
//  if ( !strcmp("SDL_OnApplicationWillTerminate", sym) ) return &SDL_OnApplicationWillTerminate;
//  if ( !strcmp("SDL_OnApplicationDidReceiveMemoryWarning", sym) ) return &SDL_OnApplicationDidReceiveMemoryWarning;
//  if ( !strcmp("SDL_OnApplicationWillResignActive", sym) ) return &SDL_OnApplicationWillResignActive;
//  if ( !strcmp("SDL_OnApplicationDidEnterBackground", sym) ) return &SDL_OnApplicationDidEnterBackground;
//  if ( !strcmp("SDL_OnApplicationWillEnterForeground", sym) ) return &SDL_OnApplicationWillEnterForeground;
//  if ( !strcmp("SDL_OnApplicationDidBecomeActive", sym) ) return &SDL_OnApplicationDidBecomeActive;
//  if ( !strcmp("SDL_GetTicks", sym) ) return &SDL_GetTicks;
//  if ( !strcmp("SDL_GetPerformanceCounter", sym) ) return &SDL_GetPerformanceCounter;
//  if ( !strcmp("SDL_GetPerformanceFrequency", sym) ) return &SDL_GetPerformanceFrequency;
//  if ( !strcmp("SDL_Delay", sym) ) return &SDL_Delay;
//  if ( !strcmp("SDL_AddTimer", sym) ) return &SDL_AddTimer;
//  if ( !strcmp("SDL_RemoveTimer", sym) ) return &SDL_RemoveTimer;
//  if ( !strcmp("SDL_GetVersion", sym) ) return &SDL_GetVersion;
//  if ( !strcmp("SDL_GetRevision", sym) ) return &SDL_GetRevision;
//  if ( !strcmp("SDL_GetRevisionNumber", sym) ) return &SDL_GetRevisionNumber;
//  if ( !strcmp("SDL_GetPreferredLocales", sym) ) return &SDL_GetPreferredLocales;
//  if ( !strcmp("SDL_OpenURL", sym) ) return &SDL_OpenURL;
//  if ( !strcmp("SDL_Init", sym) ) return &SDL_Init;
//  if ( !strcmp("SDL_InitSubSystem", sym) ) return &SDL_InitSubSystem;
//  if ( !strcmp("SDL_QuitSubSystem", sym) ) return &SDL_QuitSubSystem;
//  if ( !strcmp("SDL_WasInit", sym) ) return &SDL_WasInit;
//  if ( !strcmp("SDL_Quit", sym) ) return &SDL_Quit;
//
//  printf("%s is not implemented.\n", sym);
//  exit(-1);
//}





void X86RUNNERSYSCALLS_rand() {  R_EAX = (u32) rand();}
void X86RUNNERSYSCALLS_calloc() {  R_EAX = (u32) calloc((*(size_t *) (R_ESP + sizeof(u32*))),(*( size_t *) (R_ESP + sizeof(u32*) + (((sizeof(size_t)) % (sizeof(u32*))) ? ( (sizeof(size_t)) + ( sizeof(u32*) - ((sizeof(size_t)) % (sizeof(u32*))))) : (sizeof(size_t)) ))));}
void X86RUNNERSYSCALLS_exit() {  exit((*(int *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_memcpy() {  R_EAX = (u32) memcpy((*(void * *) (R_ESP + sizeof(u32*))),(*( const void * *) (R_ESP + sizeof(u32*) + (((sizeof(void *)) % (sizeof(u32*))) ? ( (sizeof(void *)) + ( sizeof(u32*) - ((sizeof(void *)) % (sizeof(u32*))))) : (sizeof(void *)) ))),(*( size_t *) (R_ESP + sizeof(u32*) + (((sizeof(void *)) % (sizeof(u32*))) ? ( (sizeof(void *)) + ( sizeof(u32*) - ((sizeof(void *)) % (sizeof(u32*))))) : (sizeof(void *)) ) + (((sizeof( const void *)) % (sizeof(u32*))) ? ( (sizeof( const void *)) + ( sizeof(u32*) - ((sizeof( const void *)) % (sizeof(u32*))))) : (sizeof( const void *)) ))));}
void X86RUNNERSYSCALLS_memmove() {  R_EAX = (u32) memmove((*(void * *) (R_ESP + sizeof(u32*))),(*( const void * *) (R_ESP + sizeof(u32*) + (((sizeof(void *)) % (sizeof(u32*))) ? ( (sizeof(void *)) + ( sizeof(u32*) - ((sizeof(void *)) % (sizeof(u32*))))) : (sizeof(void *)) ))),(*( size_t *) (R_ESP + sizeof(u32*) + (((sizeof(void *)) % (sizeof(u32*))) ? ( (sizeof(void *)) + ( sizeof(u32*) - ((sizeof(void *)) % (sizeof(u32*))))) : (sizeof(void *)) ) + (((sizeof( const void *)) % (sizeof(u32*))) ? ( (sizeof( const void *)) + ( sizeof(u32*) - ((sizeof( const void *)) % (sizeof(u32*))))) : (sizeof( const void *)) ))));}
void X86RUNNERSYSCALLS_memset() {  R_EAX = (u32) memset((*(void * *) (R_ESP + sizeof(u32*))),(*( int *) (R_ESP + sizeof(u32*) + (((sizeof(void *)) % (sizeof(u32*))) ? ( (sizeof(void *)) + ( sizeof(u32*) - ((sizeof(void *)) % (sizeof(u32*))))) : (sizeof(void *)) ))),(*( size_t *) (R_ESP + sizeof(u32*) + (((sizeof(void *)) % (sizeof(u32*))) ? ( (sizeof(void *)) + ( sizeof(u32*) - ((sizeof(void *)) % (sizeof(u32*))))) : (sizeof(void *)) ) + (((sizeof( int)) % (sizeof(u32*))) ? ( (sizeof( int)) + ( sizeof(u32*) - ((sizeof( int)) % (sizeof(u32*))))) : (sizeof( int)) ))));}
void X86RUNNERSYSCALLS_strlen() {  R_EAX = (u32) strlen((*(const char * *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_cos() {  double  ret = cos((*(double *) (R_ESP + sizeof(u32*))));  fpu_do_push(emu); ST0.d = ret; }
void X86RUNNERSYSCALLS_sin() {  double  ret = sin((*(double *) (R_ESP + sizeof(u32*))));  fpu_do_push(emu); ST0.d = ret; }
void X86RUNNERSYSCALLS_log2() {  double  ret = log2((*(double *) (R_ESP + sizeof(u32*))));  fpu_do_push(emu); ST0.d = ret; }
void X86RUNNERSYSCALLS_floor() {  double  ret = floor((*(double *) (R_ESP + sizeof(u32*))));  fpu_do_push(emu); ST0.d = ret; }
void X86RUNNERSYSCALLS_fmin() {  double  ret = fmin((*(double *) (R_ESP + sizeof(u32*))),(*( double *) (R_ESP + sizeof(u32*) + (((sizeof(double)) % (sizeof(u32*))) ? ( (sizeof(double)) + ( sizeof(u32*) - ((sizeof(double)) % (sizeof(u32*))))) : (sizeof(double)) ))));  fpu_do_push(emu); ST0.d = ret; }
void X86RUNNERSYSCALLS_sqrtf() {  float  ret = sqrtf((*(float *) (R_ESP + sizeof(u32*))));  fpu_do_push(emu); ST0.d = ret; }
void X86RUNNERSYSCALLS_SDL_GetError() {  R_EAX = (u32) SDL_GetError();}
void X86RUNNERSYSCALLS_SDL_CreateWindow() {  R_EAX = (u32) SDL_CreateWindow((*(const char * *) (R_ESP + sizeof(u32*))),(*( int *) (R_ESP + sizeof(u32*) + (((sizeof(const char *)) % (sizeof(u32*))) ? ( (sizeof(const char *)) + ( sizeof(u32*) - ((sizeof(const char *)) % (sizeof(u32*))))) : (sizeof(const char *)) ))),(*( int *) (R_ESP + sizeof(u32*) + (((sizeof(const char *)) % (sizeof(u32*))) ? ( (sizeof(const char *)) + ( sizeof(u32*) - ((sizeof(const char *)) % (sizeof(u32*))))) : (sizeof(const char *)) ) + (((sizeof( int)) % (sizeof(u32*))) ? ( (sizeof( int)) + ( sizeof(u32*) - ((sizeof( int)) % (sizeof(u32*))))) : (sizeof( int)) ))),(*( int *) (R_ESP + sizeof(u32*) + (((sizeof(const char *)) % (sizeof(u32*))) ? ( (sizeof(const char *)) + ( sizeof(u32*) - ((sizeof(const char *)) % (sizeof(u32*))))) : (sizeof(const char *)) ) + (((sizeof( int)) % (sizeof(u32*))) ? ( (sizeof( int)) + ( sizeof(u32*) - ((sizeof( int)) % (sizeof(u32*))))) : (sizeof( int)) ) + (((sizeof( int)) % (sizeof(u32*))) ? ( (sizeof( int)) + ( sizeof(u32*) - ((sizeof( int)) % (sizeof(u32*))))) : (sizeof( int)) ))),(*( int *) (R_ESP + sizeof(u32*) + (((sizeof(const char *)) % (sizeof(u32*))) ? ( (sizeof(const char *)) + ( sizeof(u32*) - ((sizeof(const char *)) % (sizeof(u32*))))) : (sizeof(const char *)) ) + (((sizeof( int)) % (sizeof(u32*))) ? ( (sizeof( int)) + ( sizeof(u32*) - ((sizeof( int)) % (sizeof(u32*))))) : (sizeof( int)) ) + (((sizeof( int)) % (sizeof(u32*))) ? ( (sizeof( int)) + ( sizeof(u32*) - ((sizeof( int)) % (sizeof(u32*))))) : (sizeof( int)) ) + (((sizeof( int)) % (sizeof(u32*))) ? ( (sizeof( int)) + ( sizeof(u32*) - ((sizeof( int)) % (sizeof(u32*))))) : (sizeof( int)) ))),(*( Uint32 *) (R_ESP + sizeof(u32*) + (((sizeof(const char *)) % (sizeof(u32*))) ? ( (sizeof(const char *)) + ( sizeof(u32*) - ((sizeof(const char *)) % (sizeof(u32*))))) : (sizeof(const char *)) ) + (((sizeof( int)) % (sizeof(u32*))) ? ( (sizeof( int)) + ( sizeof(u32*) - ((sizeof( int)) % (sizeof(u32*))))) : (sizeof( int)) ) + (((sizeof( int)) % (sizeof(u32*))) ? ( (sizeof( int)) + ( sizeof(u32*) - ((sizeof( int)) % (sizeof(u32*))))) : (sizeof( int)) ) + (((sizeof( int)) % (sizeof(u32*))) ? ( (sizeof( int)) + ( sizeof(u32*) - ((sizeof( int)) % (sizeof(u32*))))) : (sizeof( int)) ) + (((sizeof( int)) % (sizeof(u32*))) ? ( (sizeof( int)) + ( sizeof(u32*) - ((sizeof( int)) % (sizeof(u32*))))) : (sizeof( int)) ))));}
void X86RUNNERSYSCALLS_SDL_SetWindowTitle() {  SDL_SetWindowTitle((*(SDL_Window * *) (R_ESP + sizeof(u32*))),(*( const char * *) (R_ESP + sizeof(u32*) + (((sizeof(SDL_Window *)) % (sizeof(u32*))) ? ( (sizeof(SDL_Window *)) + ( sizeof(u32*) - ((sizeof(SDL_Window *)) % (sizeof(u32*))))) : (sizeof(SDL_Window *)) ))));}
void X86RUNNERSYSCALLS_SDL_GL_CreateContext() {  R_EAX = (u32) SDL_GL_CreateContext((*(SDL_Window * *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_SDL_GL_SwapWindow() {  SDL_GL_SwapWindow((*(SDL_Window * *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_SDL_PollEvent() {  R_EAX = (u32) SDL_PollEvent((*(SDL_Event * *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_SDL_GetPerformanceCounter() {  Uint64  ret = SDL_GetPerformanceCounter();  R_EAX = ((u32*) &ret)[0];  R_EDX = ((u32*) &ret)[1];}
void X86RUNNERSYSCALLS_SDL_GetPerformanceFrequency() {  Uint64  ret = SDL_GetPerformanceFrequency();  R_EAX = ((u32*) &ret)[0];  R_EDX = ((u32*) &ret)[1];}
void X86RUNNERSYSCALLS_SDL_Delay() {  SDL_Delay((*(Uint32 *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_SDL_Init() {  R_EAX = (u32) SDL_Init((*(Uint32 *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_glClearColor() {  glClearColor((*(GLclampf *) (R_ESP + sizeof(u32*))),(*( GLclampf *) (R_ESP + sizeof(u32*) + (((sizeof(GLclampf)) % (sizeof(u32*))) ? ( (sizeof(GLclampf)) + ( sizeof(u32*) - ((sizeof(GLclampf)) % (sizeof(u32*))))) : (sizeof(GLclampf)) ))),(*( GLclampf *) (R_ESP + sizeof(u32*) + (((sizeof(GLclampf)) % (sizeof(u32*))) ? ( (sizeof(GLclampf)) + ( sizeof(u32*) - ((sizeof(GLclampf)) % (sizeof(u32*))))) : (sizeof(GLclampf)) ) + (((sizeof( GLclampf)) % (sizeof(u32*))) ? ( (sizeof( GLclampf)) + ( sizeof(u32*) - ((sizeof( GLclampf)) % (sizeof(u32*))))) : (sizeof( GLclampf)) ))),(*( GLclampf *) (R_ESP + sizeof(u32*) + (((sizeof(GLclampf)) % (sizeof(u32*))) ? ( (sizeof(GLclampf)) + ( sizeof(u32*) - ((sizeof(GLclampf)) % (sizeof(u32*))))) : (sizeof(GLclampf)) ) + (((sizeof( GLclampf)) % (sizeof(u32*))) ? ( (sizeof( GLclampf)) + ( sizeof(u32*) - ((sizeof( GLclampf)) % (sizeof(u32*))))) : (sizeof( GLclampf)) ) + (((sizeof( GLclampf)) % (sizeof(u32*))) ? ( (sizeof( GLclampf)) + ( sizeof(u32*) - ((sizeof( GLclampf)) % (sizeof(u32*))))) : (sizeof( GLclampf)) ))));}
void X86RUNNERSYSCALLS_glClear() {  glClear((*(GLbitfield *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_glBlendFunc() {  glBlendFunc((*(GLenum *) (R_ESP + sizeof(u32*))),(*( GLenum *) (R_ESP + sizeof(u32*) + (((sizeof(GLenum)) % (sizeof(u32*))) ? ( (sizeof(GLenum)) + ( sizeof(u32*) - ((sizeof(GLenum)) % (sizeof(u32*))))) : (sizeof(GLenum)) ))));}
void X86RUNNERSYSCALLS_glLineWidth() {  glLineWidth((*(GLfloat *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_glEnable() {  glEnable((*(GLenum *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_glGetError() {  R_EAX = (u32) glGetError();}
void X86RUNNERSYSCALLS_glViewport() {  glViewport((*(GLint *) (R_ESP + sizeof(u32*))),(*( GLint *) (R_ESP + sizeof(u32*) + (((sizeof(GLint)) % (sizeof(u32*))) ? ( (sizeof(GLint)) + ( sizeof(u32*) - ((sizeof(GLint)) % (sizeof(u32*))))) : (sizeof(GLint)) ))),(*( GLsizei *) (R_ESP + sizeof(u32*) + (((sizeof(GLint)) % (sizeof(u32*))) ? ( (sizeof(GLint)) + ( sizeof(u32*) - ((sizeof(GLint)) % (sizeof(u32*))))) : (sizeof(GLint)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ))),(*( GLsizei *) (R_ESP + sizeof(u32*) + (((sizeof(GLint)) % (sizeof(u32*))) ? ( (sizeof(GLint)) + ( sizeof(u32*) - ((sizeof(GLint)) % (sizeof(u32*))))) : (sizeof(GLint)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ))));}
void X86RUNNERSYSCALLS_glDrawArrays() {  glDrawArrays((*(GLenum *) (R_ESP + sizeof(u32*))),(*( GLint *) (R_ESP + sizeof(u32*) + (((sizeof(GLenum)) % (sizeof(u32*))) ? ( (sizeof(GLenum)) + ( sizeof(u32*) - ((sizeof(GLenum)) % (sizeof(u32*))))) : (sizeof(GLenum)) ))),(*( GLsizei *) (R_ESP + sizeof(u32*) + (((sizeof(GLenum)) % (sizeof(u32*))) ? ( (sizeof(GLenum)) + ( sizeof(u32*) - ((sizeof(GLenum)) % (sizeof(u32*))))) : (sizeof(GLenum)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ))));}
void X86RUNNERSYSCALLS_glPixelStorei() {  glPixelStorei((*(GLenum *) (R_ESP + sizeof(u32*))),(*( GLint *) (R_ESP + sizeof(u32*) + (((sizeof(GLenum)) % (sizeof(u32*))) ? ( (sizeof(GLenum)) + ( sizeof(u32*) - ((sizeof(GLenum)) % (sizeof(u32*))))) : (sizeof(GLenum)) ))));}
void X86RUNNERSYSCALLS_glTexParameteri() {  glTexParameteri((*(GLenum *) (R_ESP + sizeof(u32*))),(*( GLenum *) (R_ESP + sizeof(u32*) + (((sizeof(GLenum)) % (sizeof(u32*))) ? ( (sizeof(GLenum)) + ( sizeof(u32*) - ((sizeof(GLenum)) % (sizeof(u32*))))) : (sizeof(GLenum)) ))),(*( GLint *) (R_ESP + sizeof(u32*) + (((sizeof(GLenum)) % (sizeof(u32*))) ? ( (sizeof(GLenum)) + ( sizeof(u32*) - ((sizeof(GLenum)) % (sizeof(u32*))))) : (sizeof(GLenum)) ) + (((sizeof( GLenum)) % (sizeof(u32*))) ? ( (sizeof( GLenum)) + ( sizeof(u32*) - ((sizeof( GLenum)) % (sizeof(u32*))))) : (sizeof( GLenum)) ))));}
void X86RUNNERSYSCALLS_glTexImage2D() {  glTexImage2D((*(GLenum *) (R_ESP + sizeof(u32*))),(*( GLint *) (R_ESP + sizeof(u32*) + (((sizeof(GLenum)) % (sizeof(u32*))) ? ( (sizeof(GLenum)) + ( sizeof(u32*) - ((sizeof(GLenum)) % (sizeof(u32*))))) : (sizeof(GLenum)) ))),(*( GLint *) (R_ESP + sizeof(u32*) + (((sizeof(GLenum)) % (sizeof(u32*))) ? ( (sizeof(GLenum)) + ( sizeof(u32*) - ((sizeof(GLenum)) % (sizeof(u32*))))) : (sizeof(GLenum)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ))),(*( GLsizei *) (R_ESP + sizeof(u32*) + (((sizeof(GLenum)) % (sizeof(u32*))) ? ( (sizeof(GLenum)) + ( sizeof(u32*) - ((sizeof(GLenum)) % (sizeof(u32*))))) : (sizeof(GLenum)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ))),(*( GLsizei *) (R_ESP + sizeof(u32*) + (((sizeof(GLenum)) % (sizeof(u32*))) ? ( (sizeof(GLenum)) + ( sizeof(u32*) - ((sizeof(GLenum)) % (sizeof(u32*))))) : (sizeof(GLenum)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ))),(*( GLint *) (R_ESP + sizeof(u32*) + (((sizeof(GLenum)) % (sizeof(u32*))) ? ( (sizeof(GLenum)) + ( sizeof(u32*) - ((sizeof(GLenum)) % (sizeof(u32*))))) : (sizeof(GLenum)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ))),(*( GLenum *) (R_ESP + sizeof(u32*) + (((sizeof(GLenum)) % (sizeof(u32*))) ? ( (sizeof(GLenum)) + ( sizeof(u32*) - ((sizeof(GLenum)) % (sizeof(u32*))))) : (sizeof(GLenum)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ))),(*( GLenum *) (R_ESP + sizeof(u32*) + (((sizeof(GLenum)) % (sizeof(u32*))) ? ( (sizeof(GLenum)) + ( sizeof(u32*) - ((sizeof(GLenum)) % (sizeof(u32*))))) : (sizeof(GLenum)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ) + (((sizeof( GLenum)) % (sizeof(u32*))) ? ( (sizeof( GLenum)) + ( sizeof(u32*) - ((sizeof( GLenum)) % (sizeof(u32*))))) : (sizeof( GLenum)) ))),(*( const GLvoid * *) (R_ESP + sizeof(u32*) + (((sizeof(GLenum)) % (sizeof(u32*))) ? ( (sizeof(GLenum)) + ( sizeof(u32*) - ((sizeof(GLenum)) % (sizeof(u32*))))) : (sizeof(GLenum)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ) + (((sizeof( GLenum)) % (sizeof(u32*))) ? ( (sizeof( GLenum)) + ( sizeof(u32*) - ((sizeof( GLenum)) % (sizeof(u32*))))) : (sizeof( GLenum)) ) + (((sizeof( GLenum)) % (sizeof(u32*))) ? ( (sizeof( GLenum)) + ( sizeof(u32*) - ((sizeof( GLenum)) % (sizeof(u32*))))) : (sizeof( GLenum)) ))));}
void X86RUNNERSYSCALLS_glGenTextures() {  glGenTextures((*(GLsizei *) (R_ESP + sizeof(u32*))),(*( GLuint * *) (R_ESP + sizeof(u32*) + (((sizeof(GLsizei)) % (sizeof(u32*))) ? ( (sizeof(GLsizei)) + ( sizeof(u32*) - ((sizeof(GLsizei)) % (sizeof(u32*))))) : (sizeof(GLsizei)) ))));}
void X86RUNNERSYSCALLS_glBindTexture() {  glBindTexture((*(GLenum *) (R_ESP + sizeof(u32*))),(*( GLuint *) (R_ESP + sizeof(u32*) + (((sizeof(GLenum)) % (sizeof(u32*))) ? ( (sizeof(GLenum)) + ( sizeof(u32*) - ((sizeof(GLenum)) % (sizeof(u32*))))) : (sizeof(GLenum)) ))));}
void X86RUNNERSYSCALLS_glActiveTexture() {  glActiveTexture((*(GLenum *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_glBindBuffer() {  glBindBuffer((*(GLenum *) (R_ESP + sizeof(u32*))),(*( GLuint *) (R_ESP + sizeof(u32*) + (((sizeof(GLenum)) % (sizeof(u32*))) ? ( (sizeof(GLenum)) + ( sizeof(u32*) - ((sizeof(GLenum)) % (sizeof(u32*))))) : (sizeof(GLenum)) ))));}
void X86RUNNERSYSCALLS_glGenBuffers() {  glGenBuffers((*(GLsizei *) (R_ESP + sizeof(u32*))),(*( GLuint * *) (R_ESP + sizeof(u32*) + (((sizeof(GLsizei)) % (sizeof(u32*))) ? ( (sizeof(GLsizei)) + ( sizeof(u32*) - ((sizeof(GLsizei)) % (sizeof(u32*))))) : (sizeof(GLsizei)) ))));}
void X86RUNNERSYSCALLS_glBufferData() {  glBufferData((*(GLenum *) (R_ESP + sizeof(u32*))),(*( GLsizeiptr *) (R_ESP + sizeof(u32*) + (((sizeof(GLenum)) % (sizeof(u32*))) ? ( (sizeof(GLenum)) + ( sizeof(u32*) - ((sizeof(GLenum)) % (sizeof(u32*))))) : (sizeof(GLenum)) ))),(*( const void * *) (R_ESP + sizeof(u32*) + (((sizeof(GLenum)) % (sizeof(u32*))) ? ( (sizeof(GLenum)) + ( sizeof(u32*) - ((sizeof(GLenum)) % (sizeof(u32*))))) : (sizeof(GLenum)) ) + (((sizeof( GLsizeiptr)) % (sizeof(u32*))) ? ( (sizeof( GLsizeiptr)) + ( sizeof(u32*) - ((sizeof( GLsizeiptr)) % (sizeof(u32*))))) : (sizeof( GLsizeiptr)) ))),(*( GLenum *) (R_ESP + sizeof(u32*) + (((sizeof(GLenum)) % (sizeof(u32*))) ? ( (sizeof(GLenum)) + ( sizeof(u32*) - ((sizeof(GLenum)) % (sizeof(u32*))))) : (sizeof(GLenum)) ) + (((sizeof( GLsizeiptr)) % (sizeof(u32*))) ? ( (sizeof( GLsizeiptr)) + ( sizeof(u32*) - ((sizeof( GLsizeiptr)) % (sizeof(u32*))))) : (sizeof( GLsizeiptr)) ) + (((sizeof( const void *)) % (sizeof(u32*))) ? ( (sizeof( const void *)) + ( sizeof(u32*) - ((sizeof( const void *)) % (sizeof(u32*))))) : (sizeof( const void *)) ))));}
void X86RUNNERSYSCALLS_glAttachShader() {  glAttachShader((*(GLuint *) (R_ESP + sizeof(u32*))),(*( GLuint *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ))));}
void X86RUNNERSYSCALLS_glCompileShader() {  glCompileShader((*(GLuint *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_glCreateProgram() {  R_EAX = (u32) glCreateProgram();}
void X86RUNNERSYSCALLS_glCreateShader() {  R_EAX = (u32) glCreateShader((*(GLenum *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_glDeleteShader() {  glDeleteShader((*(GLuint *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_glEnableVertexAttribArray() {  glEnableVertexAttribArray((*(GLuint *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_glGetAttribLocation() {  R_EAX = (u32) glGetAttribLocation((*(GLuint *) (R_ESP + sizeof(u32*))),(*( const GLchar * *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ))));}
void X86RUNNERSYSCALLS_glGetProgramiv() {  glGetProgramiv((*(GLuint *) (R_ESP + sizeof(u32*))),(*( GLenum *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ))),(*( GLint * *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ) + (((sizeof( GLenum)) % (sizeof(u32*))) ? ( (sizeof( GLenum)) + ( sizeof(u32*) - ((sizeof( GLenum)) % (sizeof(u32*))))) : (sizeof( GLenum)) ))));}
void X86RUNNERSYSCALLS_glGetProgramInfoLog() {  glGetProgramInfoLog((*(GLuint *) (R_ESP + sizeof(u32*))),(*( GLsizei *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ))),(*( GLsizei * *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ))),(*( GLchar * *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ) + (((sizeof( GLsizei *)) % (sizeof(u32*))) ? ( (sizeof( GLsizei *)) + ( sizeof(u32*) - ((sizeof( GLsizei *)) % (sizeof(u32*))))) : (sizeof( GLsizei *)) ))));}
void X86RUNNERSYSCALLS_glGetShaderiv() {  glGetShaderiv((*(GLuint *) (R_ESP + sizeof(u32*))),(*( GLenum *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ))),(*( GLint * *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ) + (((sizeof( GLenum)) % (sizeof(u32*))) ? ( (sizeof( GLenum)) + ( sizeof(u32*) - ((sizeof( GLenum)) % (sizeof(u32*))))) : (sizeof( GLenum)) ))));}
void X86RUNNERSYSCALLS_glGetShaderInfoLog() {  glGetShaderInfoLog((*(GLuint *) (R_ESP + sizeof(u32*))),(*( GLsizei *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ))),(*( GLsizei * *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ))),(*( GLchar * *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ) + (((sizeof( GLsizei *)) % (sizeof(u32*))) ? ( (sizeof( GLsizei *)) + ( sizeof(u32*) - ((sizeof( GLsizei *)) % (sizeof(u32*))))) : (sizeof( GLsizei *)) ))));}
void X86RUNNERSYSCALLS_glGetUniformLocation() {  R_EAX = (u32) glGetUniformLocation((*(GLuint *) (R_ESP + sizeof(u32*))),(*( const GLchar * *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ))));}
void X86RUNNERSYSCALLS_glLinkProgram() {  glLinkProgram((*(GLuint *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_glShaderSource() {  glShaderSource((*(GLuint *) (R_ESP + sizeof(u32*))),(*( GLsizei *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ))),(*( const GLchar *const * *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ))),(*( const GLint * *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ) + (((sizeof( const GLchar *const *)) % (sizeof(u32*))) ? ( (sizeof( const GLchar *const *)) + ( sizeof(u32*) - ((sizeof( const GLchar *const *)) % (sizeof(u32*))))) : (sizeof( const GLchar *const *)) ))));}
void X86RUNNERSYSCALLS_glUseProgram() {  glUseProgram((*(GLuint *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_glUniform1i() {  glUniform1i((*(GLint *) (R_ESP + sizeof(u32*))),(*( GLint *) (R_ESP + sizeof(u32*) + (((sizeof(GLint)) % (sizeof(u32*))) ? ( (sizeof(GLint)) + ( sizeof(u32*) - ((sizeof(GLint)) % (sizeof(u32*))))) : (sizeof(GLint)) ))));}
void X86RUNNERSYSCALLS_glUniform4fv() {  glUniform4fv((*(GLint *) (R_ESP + sizeof(u32*))),(*( GLsizei *) (R_ESP + sizeof(u32*) + (((sizeof(GLint)) % (sizeof(u32*))) ? ( (sizeof(GLint)) + ( sizeof(u32*) - ((sizeof(GLint)) % (sizeof(u32*))))) : (sizeof(GLint)) ))),(*( const GLfloat * *) (R_ESP + sizeof(u32*) + (((sizeof(GLint)) % (sizeof(u32*))) ? ( (sizeof(GLint)) + ( sizeof(u32*) - ((sizeof(GLint)) % (sizeof(u32*))))) : (sizeof(GLint)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ))));}
void X86RUNNERSYSCALLS_glUniformMatrix4fv() {  glUniformMatrix4fv((*(GLint *) (R_ESP + sizeof(u32*))),(*( GLsizei *) (R_ESP + sizeof(u32*) + (((sizeof(GLint)) % (sizeof(u32*))) ? ( (sizeof(GLint)) + ( sizeof(u32*) - ((sizeof(GLint)) % (sizeof(u32*))))) : (sizeof(GLint)) ))),(*( GLboolean *) (R_ESP + sizeof(u32*) + (((sizeof(GLint)) % (sizeof(u32*))) ? ( (sizeof(GLint)) + ( sizeof(u32*) - ((sizeof(GLint)) % (sizeof(u32*))))) : (sizeof(GLint)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ))),(*( const GLfloat * *) (R_ESP + sizeof(u32*) + (((sizeof(GLint)) % (sizeof(u32*))) ? ( (sizeof(GLint)) + ( sizeof(u32*) - ((sizeof(GLint)) % (sizeof(u32*))))) : (sizeof(GLint)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ) + (((sizeof( GLboolean)) % (sizeof(u32*))) ? ( (sizeof( GLboolean)) + ( sizeof(u32*) - ((sizeof( GLboolean)) % (sizeof(u32*))))) : (sizeof( GLboolean)) ))));}
void X86RUNNERSYSCALLS_glValidateProgram() {  glValidateProgram((*(GLuint *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_glVertexAttribPointer() {  glVertexAttribPointer((*(GLuint *) (R_ESP + sizeof(u32*))),(*( GLint *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ))),(*( GLenum *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ))),(*( GLboolean *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ) + (((sizeof( GLenum)) % (sizeof(u32*))) ? ( (sizeof( GLenum)) + ( sizeof(u32*) - ((sizeof( GLenum)) % (sizeof(u32*))))) : (sizeof( GLenum)) ))),(*( GLsizei *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ) + (((sizeof( GLenum)) % (sizeof(u32*))) ? ( (sizeof( GLenum)) + ( sizeof(u32*) - ((sizeof( GLenum)) % (sizeof(u32*))))) : (sizeof( GLenum)) ) + (((sizeof( GLboolean)) % (sizeof(u32*))) ? ( (sizeof( GLboolean)) + ( sizeof(u32*) - ((sizeof( GLboolean)) % (sizeof(u32*))))) : (sizeof( GLboolean)) ))),(*( const void * *) (R_ESP + sizeof(u32*) + (((sizeof(GLuint)) % (sizeof(u32*))) ? ( (sizeof(GLuint)) + ( sizeof(u32*) - ((sizeof(GLuint)) % (sizeof(u32*))))) : (sizeof(GLuint)) ) + (((sizeof( GLint)) % (sizeof(u32*))) ? ( (sizeof( GLint)) + ( sizeof(u32*) - ((sizeof( GLint)) % (sizeof(u32*))))) : (sizeof( GLint)) ) + (((sizeof( GLenum)) % (sizeof(u32*))) ? ( (sizeof( GLenum)) + ( sizeof(u32*) - ((sizeof( GLenum)) % (sizeof(u32*))))) : (sizeof( GLenum)) ) + (((sizeof( GLboolean)) % (sizeof(u32*))) ? ( (sizeof( GLboolean)) + ( sizeof(u32*) - ((sizeof( GLboolean)) % (sizeof(u32*))))) : (sizeof( GLboolean)) ) + (((sizeof( GLsizei)) % (sizeof(u32*))) ? ( (sizeof( GLsizei)) + ( sizeof(u32*) - ((sizeof( GLsizei)) % (sizeof(u32*))))) : (sizeof( GLsizei)) ))));}
void X86RUNNERSYSCALLS_glBindVertexArray() {  glBindVertexArray((*(GLuint *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_glGenVertexArrays() {  glGenVertexArrays((*(GLsizei *) (R_ESP + sizeof(u32*))),(*( GLuint * *) (R_ESP + sizeof(u32*) + (((sizeof(GLsizei)) % (sizeof(u32*))) ? ( (sizeof(GLsizei)) + ( sizeof(u32*) - ((sizeof(GLsizei)) % (sizeof(u32*))))) : (sizeof(GLsizei)) ))));}
void X86RUNNERSYSCALLS_time() {  R_EAX = (u32) time((*(time_t * *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_mktime() {  R_EAX = (u32) mktime((*(struct tm * *) (R_ESP + sizeof(u32*))));}
void X86RUNNERSYSCALLS_strftime() {  R_EAX = (u32) strftime((*(char * *) (R_ESP + sizeof(u32*))),(*( size_t *) (R_ESP + sizeof(u32*) + (((sizeof(char *)) % (sizeof(u32*))) ? ( (sizeof(char *)) + ( sizeof(u32*) - ((sizeof(char *)) % (sizeof(u32*))))) : (sizeof(char *)) ))),(*( const char * *) (R_ESP + sizeof(u32*) + (((sizeof(char *)) % (sizeof(u32*))) ? ( (sizeof(char *)) + ( sizeof(u32*) - ((sizeof(char *)) % (sizeof(u32*))))) : (sizeof(char *)) ) + (((sizeof( size_t)) % (sizeof(u32*))) ? ( (sizeof( size_t)) + ( sizeof(u32*) - ((sizeof( size_t)) % (sizeof(u32*))))) : (sizeof( size_t)) ))),(*( const struct tm * *) (R_ESP + sizeof(u32*) + (((sizeof(char *)) % (sizeof(u32*))) ? ( (sizeof(char *)) + ( sizeof(u32*) - ((sizeof(char *)) % (sizeof(u32*))))) : (sizeof(char *)) ) + (((sizeof( size_t)) % (sizeof(u32*))) ? ( (sizeof( size_t)) + ( sizeof(u32*) - ((sizeof( size_t)) % (sizeof(u32*))))) : (sizeof( size_t)) ) + (((sizeof( const char *)) % (sizeof(u32*))) ? ( (sizeof( const char *)) + ( sizeof(u32*) - ((sizeof( const char *)) % (sizeof(u32*))))) : (sizeof( const char *)) ))));}
void X86RUNNERSYSCALLS_gmtime() {  R_EAX = (u32) gmtime((*(const time_t * *) (R_ESP + sizeof(u32*))));}
void* X86Runner_getFnAddress(const char* sym)
{
  if ( !strcmp("__gmon_start__", sym) ) return 0;
  if ( !strcmp("__libc_start_main", sym) ) return &X86RunnerSyscalls___libc_start_main;
  if ( !strcmp("printf", sym) ) return &X86RunnerSyscalls_printf;
  if ( !strcmp("snprintf", sym) ) return &X86RunnerSyscalls_snprintf;
  if ( !strcmp("SDL_Delay", sym) ) return &X86RunnerSyscalls_SDL_Delay;

  if ( !strcmp("rand", sym) ) return &X86RUNNERSYSCALLS_rand;
  if ( !strcmp("calloc", sym) ) return &X86RUNNERSYSCALLS_calloc;
  if ( !strcmp("exit", sym) ) return &X86RUNNERSYSCALLS_exit;
  if ( !strcmp("memcpy", sym) ) return &X86RUNNERSYSCALLS_memcpy;
  if ( !strcmp("memmove", sym) ) return &X86RUNNERSYSCALLS_memmove;
  if ( !strcmp("memset", sym) ) return &X86RUNNERSYSCALLS_memset;
  if ( !strcmp("strlen", sym) ) return &X86RUNNERSYSCALLS_strlen;
  if ( !strcmp("cos", sym) ) return &X86RUNNERSYSCALLS_cos;
  if ( !strcmp("sin", sym) ) return &X86RUNNERSYSCALLS_sin;
  if ( !strcmp("log2", sym) ) return &X86RUNNERSYSCALLS_log2;
  if ( !strcmp("floor", sym) ) return &X86RUNNERSYSCALLS_floor;
  if ( !strcmp("fmin", sym) ) return &X86RUNNERSYSCALLS_fmin;
  if ( !strcmp("sqrtf", sym) ) return &X86RUNNERSYSCALLS_sqrtf;
  if ( !strcmp("SDL_GetError", sym) ) return &X86RUNNERSYSCALLS_SDL_GetError;
  if ( !strcmp("SDL_CreateWindow", sym) ) return &X86RUNNERSYSCALLS_SDL_CreateWindow;
  if ( !strcmp("SDL_SetWindowTitle", sym) ) return &X86RUNNERSYSCALLS_SDL_SetWindowTitle;
  if ( !strcmp("SDL_GL_CreateContext", sym) ) return &X86RUNNERSYSCALLS_SDL_GL_CreateContext;
  if ( !strcmp("SDL_GL_SwapWindow", sym) ) return &X86RUNNERSYSCALLS_SDL_GL_SwapWindow;
  if ( !strcmp("SDL_PollEvent", sym) ) return &X86RUNNERSYSCALLS_SDL_PollEvent;
  if ( !strcmp("SDL_GetPerformanceCounter", sym) ) return &X86RUNNERSYSCALLS_SDL_GetPerformanceCounter;
  if ( !strcmp("SDL_GetPerformanceFrequency", sym) ) return &X86RUNNERSYSCALLS_SDL_GetPerformanceFrequency;
  if ( !strcmp("SDL_Delay", sym) ) return &X86RUNNERSYSCALLS_SDL_Delay;
  if ( !strcmp("SDL_Init", sym) ) return &X86RUNNERSYSCALLS_SDL_Init;
  if ( !strcmp("glClearColor", sym) ) return &X86RUNNERSYSCALLS_glClearColor;
  if ( !strcmp("glClear", sym) ) return &X86RUNNERSYSCALLS_glClear;
  if ( !strcmp("glBlendFunc", sym) ) return &X86RUNNERSYSCALLS_glBlendFunc;
  if ( !strcmp("glLineWidth", sym) ) return &X86RUNNERSYSCALLS_glLineWidth;
  if ( !strcmp("glEnable", sym) ) return &X86RUNNERSYSCALLS_glEnable;
  if ( !strcmp("glGetError", sym) ) return &X86RUNNERSYSCALLS_glGetError;
  if ( !strcmp("glViewport", sym) ) return &X86RUNNERSYSCALLS_glViewport;
  if ( !strcmp("glDrawArrays", sym) ) return &X86RUNNERSYSCALLS_glDrawArrays;
  if ( !strcmp("glPixelStorei", sym) ) return &X86RUNNERSYSCALLS_glPixelStorei;
  if ( !strcmp("glTexParameteri", sym) ) return &X86RUNNERSYSCALLS_glTexParameteri;
  if ( !strcmp("glTexImage2D", sym) ) return &X86RUNNERSYSCALLS_glTexImage2D;
  if ( !strcmp("glGenTextures", sym) ) return &X86RUNNERSYSCALLS_glGenTextures;
  if ( !strcmp("glBindTexture", sym) ) return &X86RUNNERSYSCALLS_glBindTexture;
  if ( !strcmp("glActiveTexture", sym) ) return &X86RUNNERSYSCALLS_glActiveTexture;
  if ( !strcmp("glBindBuffer", sym) ) return &X86RUNNERSYSCALLS_glBindBuffer;
  if ( !strcmp("glGenBuffers", sym) ) return &X86RUNNERSYSCALLS_glGenBuffers;
  if ( !strcmp("glBufferData", sym) ) return &X86RUNNERSYSCALLS_glBufferData;
  if ( !strcmp("glAttachShader", sym) ) return &X86RUNNERSYSCALLS_glAttachShader;
  if ( !strcmp("glCompileShader", sym) ) return &X86RUNNERSYSCALLS_glCompileShader;
  if ( !strcmp("glCreateProgram", sym) ) return &X86RUNNERSYSCALLS_glCreateProgram;
  if ( !strcmp("glCreateShader", sym) ) return &X86RUNNERSYSCALLS_glCreateShader;
  if ( !strcmp("glDeleteShader", sym) ) return &X86RUNNERSYSCALLS_glDeleteShader;
  if ( !strcmp("glEnableVertexAttribArray", sym) ) return &X86RUNNERSYSCALLS_glEnableVertexAttribArray;
  if ( !strcmp("glGetAttribLocation", sym) ) return &X86RUNNERSYSCALLS_glGetAttribLocation;
  if ( !strcmp("glGetProgramiv", sym) ) return &X86RUNNERSYSCALLS_glGetProgramiv;
  if ( !strcmp("glGetProgramInfoLog", sym) ) return &X86RUNNERSYSCALLS_glGetProgramInfoLog;
  if ( !strcmp("glGetShaderiv", sym) ) return &X86RUNNERSYSCALLS_glGetShaderiv;
  if ( !strcmp("glGetShaderInfoLog", sym) ) return &X86RUNNERSYSCALLS_glGetShaderInfoLog;
  if ( !strcmp("glGetUniformLocation", sym) ) return &X86RUNNERSYSCALLS_glGetUniformLocation;
  if ( !strcmp("glLinkProgram", sym) ) return &X86RUNNERSYSCALLS_glLinkProgram;
  if ( !strcmp("glShaderSource", sym) ) return &X86RUNNERSYSCALLS_glShaderSource;
  if ( !strcmp("glUseProgram", sym) ) return &X86RUNNERSYSCALLS_glUseProgram;
  if ( !strcmp("glUniform1i", sym) ) return &X86RUNNERSYSCALLS_glUniform1i;
  if ( !strcmp("glUniform4fv", sym) ) return &X86RUNNERSYSCALLS_glUniform4fv;
  if ( !strcmp("glUniformMatrix4fv", sym) ) return &X86RUNNERSYSCALLS_glUniformMatrix4fv;
  if ( !strcmp("glValidateProgram", sym) ) return &X86RUNNERSYSCALLS_glValidateProgram;
  if ( !strcmp("glVertexAttribPointer", sym) ) return &X86RUNNERSYSCALLS_glVertexAttribPointer;
  if ( !strcmp("glBindVertexArray", sym) ) return &X86RUNNERSYSCALLS_glBindVertexArray;
  if ( !strcmp("glGenVertexArrays", sym) ) return &X86RUNNERSYSCALLS_glGenVertexArrays;
  if ( !strcmp("time", sym) ) return &X86RUNNERSYSCALLS_time;
  if ( !strcmp("mktime", sym) ) return &X86RUNNERSYSCALLS_mktime;
  if ( !strcmp("strftime", sym) ) return &X86RUNNERSYSCALLS_strftime;
  if ( !strcmp("gmtime", sym) ) return &X86RUNNERSYSCALLS_gmtime;

  printf("%s is not implemented.\n", sym);
  exit(-1);
}
