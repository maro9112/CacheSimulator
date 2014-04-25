/* FileHandler.h */

#ifndef FILE_HANDLER_H_
#define FILE_HANDLER_H_

#include "StdTypes.h"
#include <string>

using namespace std;

class FileHandler
{
public:
	bool ReadInputFile(string filename);
	void PrintConfig();

	bool ReadTraceFile();
	bool PrintResults();

	// L1 cache variables
	uint32 L1_block_size;
	uint32 L1_cache_size;
	uint32 L1_assoc;
	uint32 L1_hit_time;
	uint32 L1_miss_time;

	// L2 cache variables
	uint32 L2_block_size;
	uint32 L2_cache_size;
	uint32 L2_assoc;
	uint32 L2_hit_time;
	uint32 L2_miss_time;
	uint32 L2_transfer_time;
	uint32 L2_bus_width;

	// Main memory variables
	uint32 mem_sendaddr;
	uint32 mem_ready;
	uint32 mem_chunktime;
	uint32 mem_chunksize;
};


#endif /* FILE_HANDLER_H_ */
