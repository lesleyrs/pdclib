/* timespec_get( struct timespec *, int )

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#include <time.h>

#ifndef REGTEST

#include <js/glue.h>

int timespec_get( struct timespec * ts, int base )
{
    if ( base == TIME_UTC )
    {
        /* We can make do with a really thin wrapper here. */
        double now = JS_DateNow();
        ts->tv_sec = now / 1000;
        long remainder_ms = now - (double)ts->tv_sec * 1000;
        ts->tv_nsec = remainder_ms * 1e6;
        return base;
    }

    /* Not supporting any other time base than TIME_UTC for now. */
    return 0;
}

#endif

#ifdef TEST

#include "_PDCLIB_test.h"

int main( void )
{
    TESTCASE( NO_TESTDRIVER );
    return TEST_RESULTS;
}

#endif
