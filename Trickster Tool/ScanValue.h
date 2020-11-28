 #pragma once
#include <Windows.h>
#include <TlHelp32.h>

struct GameStructure {
	
	struct AddressBase
	{
//APPLICATION BASE ADDRESSES (.exe)
	//Player Bases
		//Player Stat Base Address
		DWORD PlayerStatusBase;
		//Player X and Y Postion Base Addresses
		DWORD PlayerXPosBase;
		DWORD PlayerYPosBase;
		//Player Name Base Address
		DWORD PlayerNameBase;
		//Player Level Base Address
		DWORD PlayerLevelBase;
		//Player Health Base Addresses
		DWORD PlayerHealthBase;
		DWORD PlayerMaxHealthBase;
		//Player Mana Base Addresses
		DWORD PlayerManaBase;
		DWORD PlayerMaxManaBase;

	//Monster Bases
		//Monster List Base Address
		DWORD MonsterBaseAddress;
		//Monster ID Addresses found in List represented in Array
		DWORD MonsterID[512] = { 0 };
		//Monster X and Y Addresses found in List represented in Array
		DWORD MonsterXPosArray[512] = { 0 };
		DWORD MonsterYPosArray[512] = { 0 };
		//Monster Health Addresses found in List represented in Array
		DWORD MonsterHPBase[512] = { 0 };
		//Monster Dead or Alive Addresses found in List represented in Array
		DWORD MonsterCheckIsReal[512] = { 0 };
		//Monster Name Addresses found in List represented in Array
		DWORD MonsterNameaddress[512];

	//Screen/Map/Mouse Bases
		//Mouse Actor Address
		WORD MouseStatusBase;
		//Mouse Position on Client Addresses
		DWORD MouseXPosBase;
		DWORD MouseYPosBase;
		//Map Edge Detection Addresses
		DWORD MapScreenBase;
		DWORD MapScreenXPos;
		DWORD MapScreenYPos;

		//Screen Resolution Addresses
		DWORD ScreenResXBase;
		DWORD ScreenResYBase;

//DLL BASE ADDRESSES (.dll)
	//Player Bases
		//Player Base Address
		DWORD PlayerBaseLib;
		//Player Stat Base Address
		DWORD PlayerStatusBaseLib;
		//Player Regular Reload Function Base Address
		DWORD PlayerReloadBase;
		//Player Regular Gun Shot Critical Function Base Address
		DWORD PlayerGunCritBase;
		//Player Item Detection Function Base Addresses
		DWORD PlayerItemDetectBase;
		DWORD PlayerItemDetect2Base;
	
	} base;

	struct AddressOffsets
	{
//APPLICATION ADDRESS OFFSETS (.exe)
	//Player Offsets
		//Player X and Y Offsets
		DWORD PlayerXOffset[2] = { 0x0, 0x6C };
		DWORD PlayerYOffset[2] = { 0x0, 0x6E };
		//Player Name Offsets
		DWORD PlayerNameOffset[2] = { 0x0, 0x3C };
		//Player Level Offsets
		DWORD PlayerLevelOffset[2] = { 0x0, 0x398 };
		//Player Health Offsets
		DWORD PlayerHealthOffset[2] = { 0x0, 0x1C4 };
		DWORD PlayerMaxHealthOffset[2] = { 0x0, 0x1F0 };
		//Player Mana Offsets
		DWORD PlayerManaOffset[2] = { 0x0, 0x1C8 };
		DWORD PlayerMaxManaOffset[2] = { 0x0, 0x1D8 };

	//Monster Offsets
		//Monster ID position in List Offsets
		DWORD MonsterIDOffset[2] = { 0x0,0x0 };
		//Monster X and Y position in List Offsets
		DWORD MonsterXPosOffset[2] = { 0x0,0x6C };
		DWORD MonsterYPosOffset[2] = { 0x0,0x6E };
		//Monster Health value in List Offsets
		DWORD MonsterHPBaseOffset[2] = { 0x0,0x1C4 };
		//Monster Deal or Alive value in List Offsets
		DWORD MonsterCheckIsRealOffset[2] = { 0x0,0x60 }; //65527 Dead, 512 Alive-real
		//Monster Name in List Offsets
		DWORD MonsterNameArrayOneoffset[2] = { 0x0,0x3c };
		//Monster List Positions in Memory
		DWORD PIM[8] = { 0x6C,	//Monster X Pos in List
							0x6E,	//Monster Y Pos in List
							0x0,	//Monster ID Val in List & Last List Pos
							0x60,	//Monster isReal Val in List
							0x3c,	//Monster Name Val in List
							0x1C4,	//Monster HP Val in List
							0x610,	//First List Pos
							0x4		//Second List Pos	
		};

	//Screen/Map/Mouse Offsets
		//Mouse Actor Status Offsets

		//Map Edge Detection Offsets
		DWORD MapScreenXPosOffset[1] = { 0x560 };
		DWORD MapScreenYPosOffset[1] = { 0x562 };

//DLL ADDRESS OFFSETS (.dll)
	//Player Offsets
		//Player Stat Offsets
		DWORD PlayerStatusBaseLibOffset[2] = { 0x0,0x8 };
		//Player Regular Shot Critical Function Offset
		DWORD PlayerGunCritOffset[2] = { 0x30,0x1AD };
		//Player Regular Shot Reload Function Offset
		DWORD PlayerReloadOffset[2] = { 0x30,0xB };
		//Player Item Detection Function Offsets
		DWORD PlayerItemDetectOffset[2] = { 0x20,0x85 };
		DWORD PlayerItemDetect2Offset[2] = { 0x28,0x85 };
	} offs;

	struct Hvcks
	{
		//Byte Structure for DLL Hacks
		BYTE PlayerReloadByte[2] = { 0x85,0x83 }; // Off/On
		BYTE PlayerGunCritByte[2] = { 0x38,0x01 }; // Off/On
		BYTE PlayerItemDetectByte[2] = { 0x74,0x7C }; // Off/On
		
	} hvcbt;

	struct ClientPerspective
	{
		//Draw Rectangle size of client screen
		RECT Screen;

		int NextXPos, NextYPos;

		//Value of the X and Y Postion of mouse on screen
		WORD MouseXPos;
		WORD MouseYPos;

		//Mouse Valuse for doing things.
		//0 = MOVEABLE, 2 = ON GUI, 3 = ON WALL, 6 = ATTACK ON TARGET, 10 = ON PORTAL,  11 = ON NPC, 15 = CAST SPELL, 26 = CAST SPELL ON TARGET, 
		WORD MouseActor1;
		WORD MouseActor2;

		//Map Edge Values
		WORD MapScreenXPos;
		WORD MapScreenYPos;

		//Checks for MapScreen Values
		WORD CheckMapScreenXPos;
		short CheckMapScreenYPos;

		//Screen Resolution Values
		WORD ScreenResX;
		WORD ScreenResY;
		WORD ScreenResXHalf;
		WORD ScreenResYHalf;
		
		//Keyboard and Mouse Inputs
		INPUT InputM[2];
		INPUT InputK[14];
	} cp;

	struct MonsterVals
	{
		//Monster ID's represented in HEX via Array To-Do: Figure this out and do something more efficient
		int MonsterIDHEX[512][512];
		//Monster List X and Y positions represented in Array
		WORD MonsterXPos[512] = { 0 };
		WORD MonsterYPos[512] = { 0 };
		//Value from List of Monster's Health represented in Array
		DWORD MonsterHP[512];
		//Value from List determining if Monster is Dead or Alive represented in Array
		WORD CheckIsReal[512][512];
		////Value from List of Monster Names represented in Array of 64 Char
		WCHAR MonsterNameArray[512][64];
		//Temp Values used to check between targets (??????) To-Do: Figure this out and do something more efficient
		char MonsterNamestempOne[64];
		char MonsterNamestempTne[64];
		//Value giving authority to be auto-attacked
		int CheckAutoAttackvalue = 0;
		//Array for distance averages
		int NearCanAttackArray[512] = { 0 };
		//To-Do: Wat
		char* MonLoc;
		//Go Attack Value To-Do: Wat
		int GoAttackValUse = -1;
		//Value used to determine the closest monster To-Do: Wat
		double SqrtArray[512] = { 0 };
	} mon;

	struct PlayerVals
	{
		//Player X and Y Position Values
		WORD PlayerXPos;
		WORD PlayerYPos;
		//Player Name reipresented in Char array from a Unicode Char Array
		char PlayerName[64];
		WCHAR PlayerNameArray[64];
		//Player Level Value
		WORD PlayerLevel;
		//Player Health Value
		WORD PlayerHealth;
		//Player Max Health Value
		WORD PlayerMaxHealth;
		//Player Mana Value
		WORD PlayerMana;
		//Player Max Mana Value
		WORD PlayerMaxMana;

		int skillTimes[5][6];
		int currentSkillTimes[5][6];
	} plr;

	struct InitializationVals
	{
		HWND Hwnd;
		HANDLE Handlev;
		DWORD PiD;
		uintptr_t GameBase;
		uintptr_t GameBaseLib;
	} ini;

	/* To-Do: All of It
	struct ItemVals
	{
		DWORD ItemBaseAddress;
		DWORD ItemIDOffset[1] = { 0x0 };
		DWORD ItemID[512] = { 0 };
		int ItemIDHEX[512][512];

		DWORD ItemXposOffset[2] = { 0x6C };
		DWORD ItemYposOffset[2] = { 0x6E };
		DWORD ItemXposArray[512] = { 0 };
		DWORD ItemYposArray[512] = { 0 };

		DWORD ItemCheckIsRealOffset[2] = { 0x60 }; //65527 Spawn, 512 Not-Spawn
		DWORD ItemCheckIsReal[512] = { 0 };
		WORD CheckItemIsReal[512][512];

		DWORD ItemNameaddress[512];
		DWORD ItemNameArrayOneoffset[2] = { 0x3B };
		WCHAR ItemNameArray[512][64];

		char ItemNamestempOne[64];
		char ItemNamestempTne[64];

		int CheckautoLootvalue = 0;
		int nearCanLootArray[512] = { 0 };
		int golootvaluse = -1;
		double SqrtArray[512] = { 0 };
	};
	*/

};