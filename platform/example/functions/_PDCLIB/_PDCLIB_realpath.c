/* _PDCLIB_realpath( const char * path )

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#ifndef REGTEST

#include "pdclib/_PDCLIB_glue.h"

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

static char *strdup(const char *s)
{
	size_t l = strlen(s);
	char *d = malloc(l+1);
	if (!d) return NULL;
	return memcpy(d, s, l+1);
}

#ifdef __cplusplus
}
#endif

char * _PDCLIB_realpath( const char * path )
{
    if (!path) return NULL;
    return strdup(path);
}

#endif

#ifdef TEST

#include "_PDCLIB_test.h"

int main( void )
{
    /* No test drivers. */
    return TEST_RESULTS;
}

#endif
