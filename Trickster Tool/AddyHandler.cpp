#include "AddyHandler.h"
#include <Windows.h>
#include <TlHelp32.h>
#include <iostream>

uintptr_t GetModuleBaseAddress(DWORD procId, const wchar_t* modName)
{
	uintptr_t modBaseAddr = 0;
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, procId);
	if (hSnap != INVALID_HANDLE_VALUE)
	{
		MODULEENTRY32 modEntry;
		modEntry.dwSize = sizeof(modEntry);
		if (Module32First(hSnap, &modEntry))
		{
			do
			{
				if (!_wcsicmp(modEntry.szModule, modName))
				{
					modBaseAddr = (uintptr_t)modEntry.modBaseAddr;
					break;
				}
			} while (Module32Next(hSnap, &modEntry));
		}
	}

	CloseHandle(hSnap);
	return modBaseAddr;
}

DWORD FindaddressAddy(int PointerLevel, HANDLE hProcHandle, DWORD Offsets[], DWORD BaseAddress)
{
	//DECLARE BASE ADDRESS
	DWORD pointer = BaseAddress;             // Declare a pointer of DWORD
											 //USED TO output the contents in the pointer
	DWORD pTemp;

	DWORD pointerAddr{};

	for (int i = 0; i < PointerLevel; i++)
	{
		if (i == 0)
		{
			ReadProcessMemory(hProcHandle, (LPCVOID)pointer, &pTemp, 4, NULL);
		}
		//add first offset to that address
		pointerAddr = pTemp + Offsets[i];   // Set p1 to content of p + offset

											//Read memory one more time and exit the loop
		ReadProcessMemory(hProcHandle, (LPCVOID)pointerAddr, &pTemp, 4, NULL);
	}

	return pointerAddr;
}