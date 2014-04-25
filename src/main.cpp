/* main.cpp */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "StdTypes.h"
#include "FileHandler.h"
#include "CacheController.h"


/* Configuration File Selection Defines */
#define DEFAULT  0
#define L12WAY   1
#define ALL2WAY  2
#define	L24WAY   3
#define ALL4WAY  4
#define L2BIG    5
#define L1ISMALL 6
#define L1DSMALL 7
#define L1SMALL  8
#define ALLFA    9


using namespace std;

int main(int argc, char ** argv)
{
	int inputConf=0;
	inputConf=atoi(argv[1]);
	FileHandler c;
	switch(inputConf)
	{
		case DEFAULT:
			printf("Loading Default Config\n");
			c.ReadInputFile("../configs/Default.conf");
			break;
		case L12WAY:
			printf("Loading L1 2-Way Config\n");
			c.ReadInputFile("../configs/L12Way");
			break;
		case ALL2WAY:
			printf("Loading All 2-Way Config\n");
			c.ReadInputFile("../configs/All2Way");
			break;
		case L24WAY:
			printf("Loading L2 4-Way Config\n");
			c.ReadInputFile("../configs/L24Way");
			break;
		case ALL4WAY:
			printf("Loading All 4-Way Config\n");
			c.ReadInputFile("../configs/All4Way");
			break;
		case L2BIG:
			printf("Loading L2 Big Config\n");
			c.ReadInputFile("../configs/L2Big");
			break;
		case L1ISMALL:
			printf("Loading L1i Small Config\n");
			c.ReadInputFile("../configs/L1iSmall");
			break;
		case L1DSMALL:
			printf("Loading L1d Small Config\n");
			c.ReadInputFile("../configs/L1dSmall");
			break;
		case L1SMALL:
			printf("Loading L1 Small Config\n");
			c.ReadInputFile("../configs/L1Small");
			break;
		case ALLFA:
			printf("Loading ALL FA Config\n");
			c.ReadInputFile("../configs/AllFA");
			break;

		default:
			printf("No Configuration File Found");
			break;
	}

	c.PrintConfig();

	CacheController* L1I = new CacheController(LVL_L1I);
	CacheController* L1D = new CacheController(LVL_L1D);
	CacheController* L2 = new CacheController(LVL_L2);

	L1I->CacheInit(LVL_L1I, c.L1_cache_size, c.L1_block_size, c.L1_assoc);
	L1D->CacheInit(LVL_L1D, c.L1_cache_size, c.L1_block_size, c.L1_assoc);
	L2->CacheInit(LVL_L2, c.L2_cache_size, c.L2_block_size, c.L2_assoc);


	return 0;
}


