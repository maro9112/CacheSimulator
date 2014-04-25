/* FileHandler.cpp */

#include <iostream>
#include "FileHandler.h"
#include "INIReader.h"


using namespace std;

bool FileHandler::ReadInputFile(string filename)
{
	INIReader reader(filename);

	if (reader.ParseError() < 0)
	{
		cout << filename << " could not be opened"<< endl;
		return false;
	}

	// Read L1 config variables
	L1_block_size = reader.GetInteger("L1Cache", "L1_block_size", 0);
	L1_cache_size = reader.GetInteger("L1Cache", "L1_cache_size", 0);
	L1_assoc = reader.GetInteger("L1Cache", "L1_assoc", 0);
	L1_hit_time = reader.GetInteger("L1Cache", "L1_hit_time", 0);
	L1_miss_time = reader.GetInteger("L1Cache", "L1_miss_time", 0);

	// Read L2 config variables
	L2_block_size = reader.GetInteger("L2Cache", "L2_block_size", 0);
	L2_cache_size = reader.GetInteger("L2Cache", "L2_cache_size", 0);
	L2_assoc = reader.GetInteger("L2Cache", "L2_assoc", 0);
	L2_hit_time = reader.GetInteger("L2Cache", "L2_hit_time", 0);
	L2_miss_time = reader.GetInteger("L2Cache", "L2_miss_time", 0);
	L2_transfer_time = reader.GetInteger("L2Cache", "L2_transfer_time", 0);
	L2_bus_width = reader.GetInteger("L2Cache", "L2_bus_width", 0);

	// Read main mem config variables
	mem_sendaddr = reader.GetInteger("MainMem", "mem_sendaddr", 0);
	mem_ready = reader.GetInteger("MainMem", "mem_ready", 0);
	mem_chunktime = reader.GetInteger("MainMem", "mem_chunktime", 0);
	mem_chunksize = reader.GetInteger("MainMem", "mem_chunksize", 0);

	return true;
}


void FileHandler::PrintConfig()
{
	// L1 cache configuration variables
	cout << "L1 block size: " << L1_block_size << endl;
	cout << "L1 cache size: " << L1_cache_size << endl;
	cout << "L1 assoc: " << L1_assoc << endl;
	cout << "L1 hit time: " << L1_hit_time << endl;
	cout << "L1 miss time: " << L1_miss_time << endl;

	// L2 cache configuration variables
	cout << "L2 block size: " << L2_block_size << endl;
	cout << "L2 cache size: " << L2_cache_size << endl;
	cout << "L2 assoc: " << L2_assoc << endl;
	cout << "L2 hit time: " << L2_hit_time << endl;
	cout << "L2 miss time: " << L2_miss_time << endl;
	cout << "L2 trans time: " << L2_transfer_time << endl;
	cout << "L2 bus width: " << L2_bus_width << endl;

	// Main memory configuration values
	cout << "mem send addr: " << mem_sendaddr << endl;
	cout << "mem ready: " << mem_ready << endl;
	cout << "mem chunk time: " << mem_chunktime << endl;
	cout << "mem chunk size: " << mem_chunksize << endl;

}


bool FileHandler::ReadTraceFile()
{
	return 0;
}


bool FileHandler::PrintResults()
{
	return 0;
}


