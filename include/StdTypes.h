/* StdTypes.h  */

#include <stdint.h>

#ifndef _STDTYPES_H_
#define _STDTYPES_H_

typedef unsigned char uint8;
typedef signed char int8;
typedef unsigned int uint16;
typedef signed int int16;
typedef unsigned long int uint32;
typedef signed long int int32;
typedef unsigned long long int uint64;
typedef signed long long int int64;


enum check
{
	HIT = 0,
	MISS
};

enum eviction{
	CLEAN = 0,
	DIRTY,
	NONE,
};

enum cacheLevel
{
	LVL_L1I = 0,
	LVL_L1D,
	LVL_L2,
	NUMLEVELS
};


 #endif // _STDTYPES_H_
