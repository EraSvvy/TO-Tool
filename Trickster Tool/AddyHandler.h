#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include <iostream>

uintptr_t GetModuleBaseAddress(DWORD procId, const wchar_t* modName);

DWORD FindaddressAddy(int PointerLevel, HANDLE hProcHandle, DWORD Offsets[], DWORD BaseAddress);

