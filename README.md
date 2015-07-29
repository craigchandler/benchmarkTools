# benchmarkTools
*Based on works by: David Robert Nadeau http://NadeauSoftware.com/
*Site:    https://github.com/craigchandler/benchmarkTools
*License: Creative Commons Attribution 3.0 Unported License
         http://creativecommons.org/licenses/by/3.0/deed.en_US

Provides 2 functions for cross platform calls for CPUtime and RealTime benchmarking.

Usage:
To benchmark an algorithm's CPU time, call getCPUTime( ) at the beginning and end, then report the difference.
```c++
double startTime, endTime;
startTime = getCPUTime( );
...
endTime = getCPUTime( );
fprintf( stderr, "CPU time used = %lf\n", (endTime - startTime) );
```

To benchmark an algorithm's real time use, call getRealTime( ) at the beginning and end, then report the difference.
```c++
double startTime, endTime;
startTime = getRealTime( );
...
endTime = getRealTime( );
fprintf( stderr, "Real time used = %lf\n", (endTime - startTime) );
```