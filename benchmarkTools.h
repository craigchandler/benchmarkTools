/*
* Author:  Craig Chandler
* Based on works by: David Robert Nadeau http://NadeauSoftware.com/
* Site:    https://github.com/craigchandler/benchmarkTools
* License: Creative Commons Attribution 3.0 Unported License
*          http://creativecommons.org/licenses/by/3.0/deed.en_US
*
* Provides 2 function crossplatform calls for CPUtime and RealTime benchmarking.
*
* Usage:
* To benchmark an algorithm's CPU time, call getCPUTime( ) at the beginning and end, then report the difference.
*
* double startTime, endTime;
* startTime = getCPUTime( );
* ...
* endTime = getCPUTime( );
* fprintf( stderr, "CPU time used = %lf\n", (endTime - startTime) );
*
*
* To benchmark an algorithm's real time use, call getRealTime( ) at the beginning and end, then report the difference.
* double startTime, endTime;
* startTime = getRealTime( );
* ...
* endTime = getRealTime( );
* fprintf( stderr, "Real time used = %lf\n", (endTime - startTime) );
*
*/

#ifndef BENCHMARKTOOLS
#define BENCHMARKTOOLS

/**
* Returns the amount of CPU time used by the current process,
* in seconds, or -1.0 if an error occurred.
*/
double getCPUTime();

/**
* Returns the real time, in seconds, or -1.0 if an error occurred.
*
* Time is measured since an arbitrary and OS-dependent start time.
* The returned real time is only useful for computing an elapsed time
* between two calls to this function.
*/
double getRealTime();

#endif