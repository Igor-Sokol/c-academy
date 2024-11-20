#include <iostream>
#include "SystemInfo.h"
#include <windows.h>
#include <sysinfoapi.h>

void GetSystemInfo()
{
	SYSTEM_INFO siSysInfo;
	GetSystemInfo(&siSysInfo);

	std::cout << "Number Of Processors " << siSysInfo.dwNumberOfProcessors << std::endl;
	std::cout << "Page Size " << siSysInfo.dwPageSize << std::endl;
	std::cout << "Allocation Granularity " << siSysInfo.dwAllocationGranularity << std::endl;
	std::cout << "Oem Id " << siSysInfo.dwOemId << std::endl;
	std::cout << "Processor Type " << siSysInfo.dwProcessorType << std::endl;
	std::cout << "Processor Architecture " << siSysInfo.wProcessorArchitecture << std::endl;
}