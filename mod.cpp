#include "pch.h"
#include"StartPos.cpp"

HelperFunctions HelperFunctionsGlobal;
const char* error = "[Past Garden]: WARNING: Your version of the Mod Loader is old, the mod won't work properly.\nPlease update your Mod Loader for the best experience.";

extern "C" {

	__declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions& helperFunctions)
	{
		Init_NewChaoStartPos();
		}

	

	__declspec(dllexport) void __cdecl OnFrame() {

		
	}



	__declspec(dllexport) ModInfo SA2ModInfo = { ModLoaderVer };
}