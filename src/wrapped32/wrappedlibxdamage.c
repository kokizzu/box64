#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "wrapper32.h"
#include "bridge.h"
#include "librarian/library_private.h"
#include "x64emu.h"
#include "debug.h"

static const char* libxdamageName = "libXdamage.so.1";
#define ALTNAME "libXdamage.so"

#define LIBNAME libxdamage

#include "wrappedlib_init32.h"

