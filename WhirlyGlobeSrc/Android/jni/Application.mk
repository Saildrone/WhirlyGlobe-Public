# NDK_TOOLCHAIN_VERSION := clang3.6

APP_CPPFLAGS += -Wno-deprecated 
APP_CPPFLAGS += -std=c++11
APP_CPPFLAGS += -frtti
APP_CPPFLAGS += -fexceptions
APP_CFLAGS += -D__USE_SDL_GLES__
APP_STL := gnustl_static
APP_CPPFLAGS += -g -O0
NDK_DEBUG := 1
