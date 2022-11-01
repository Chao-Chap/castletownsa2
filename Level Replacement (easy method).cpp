#include "pch.h" //or #include "stdafx.h" for older versions of visual studio
#include "SA2ModLoader.h"
#include <string>
#include "LandTableInfo.h"
#include "StartPos.h"
#include "Level Replacement (easy method).h"
#include "Water.h"
#include "sa2-util.h"




// SA2B Easy Level Import Script
// Description:
//    A simple script that allows a user to import their level
//    into Sonic Adventure 2. When creating your mod, make sure
//    to include the level file in your mod folder following
//    this structure:
//
//    MyMod/gd_PC/level.sa2blvl
//
//    Visit the x-hax discord for any questions.
//    https://discord.gg/gqJCF47
//

// Code that creates a custom texturepack, with a limit of 1000 textures.
// If you would like to use City Escape's textures, delete these two lines
// and follow the debug instructions below.

extern "C"
{

	__declspec(dllexport) void Init(const char* path, const HelperFunctions& helperFunctions)
	{

		HMODULE v0 = **datadllhandle;

		// Grab LandTable from City Escape.
		LandTable* Land = (LandTable*)GetProcAddress(v0, "objLandTableHero");


		// Replace City Escape's LandTable with our own.
		*Land = *(new LandTableInfo(std::string(path) + "\\gd_PC\\level.sa2blvl"))->getlandtable();

		//DEBUG: Uncomment these lines to use City Escape's Original texture pack.
		NJS_TEXLIST* texlist_al_stg_hero_tex = (NJS_TEXLIST*)GetProcAddress(v0, "texlist_al_stg_hero_tex");
		Land->TextureList = texlist_al_stg_hero_tex;
		Land->TextureName = (char*)"al_stg_hero_tex";
		ResizeTextureList(texlist_al_stg_hero_tex, 1000);



		// (Safety feature) disables level chunk system. (whole level will be rendered)
		WriteData<5>((void*)0x5DCE2D, 0x90);
		Init_NewStartPos();
		init_WaterHack();
		LandTable_ColRadiusFixes();
	    InitLandColMemory_r();




	}

	__declspec(dllexport) ModInfo SA2ModInfo = { ModLoaderVer };

}
