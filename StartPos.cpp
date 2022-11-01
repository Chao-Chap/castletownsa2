#include "pch.h"
#include "SA2ModLoader.h"
NJS_VECTOR startPos = { 24.0f, -41.00f, 1475.0f };

NJS_VECTOR startPosAltar = { 0.31f, 90.0, 75.39f };

NJS_VECTOR transporterPos = { -365, 0, 236 };
NJS_VECTOR TVPos = { 251, 0, 301 };
NJS_VECTOR BoxPos = { 207, 0, 308 };

//NJS_VECTOR startPos = { -63, 0, 387 };

NJS_VECTOR ChaoSpawnPoint_Past[16]
{
    { -801.28, 35, -1143  },
    { -1600, 35, -1350},
    { -1514.3, 35, 152}, //warn
    { -1416, 35, 137},
    { -656, 40, -454},
    { 378, 35, -605},
    { -634, 35, -616},
    { 395, 35, -1124},
    { -99.3, 30, -1584},
    { -1067, 30, -167.44},
    { -1882, 37, -816},
    { -1965, 35, -882},
    { -2008, 35, -720},
    { -652,35, 366},
    { 193, 35, -47},
    { -184, 35, 86},
};


void Init_NewChaoStartPos()
{
    memcpy(ProbablyChaoSpawnPoints + 16, ChaoSpawnPoint_Past, 16 * sizeof(NJS_VECTOR));
}

void Init_NewStartPos()
{
    //init new start pos 
    WriteData((float**)0x52b8ce, &startPos.x);
    WriteData((float**)0x52b8d6, &startPos.y);
    WriteData((float**)0x52b8df, &startPos.z);

    //start pos after leaving race cave
    WriteData((float**)0x52b882, &startPosAltar.x);
    WriteData((float**)0x52b88A, &startPosAltar.y);
    WriteData((float**)0x52b893, &startPosAltar.z);

    //OBJECT HARDCODED POS:

    //Tansporter new pos
    WriteData((float**)0x54ca00, &transporterPos.x);
    WriteData((float**)0x54ca10, &transporterPos.y);
    WriteData((float**)0x54ca1A, &transporterPos.z);
    WriteData<1>((int*)0x54ca31, 0x0); //rotation

    //ball doesn't want to spawn for some reason.

    //tv new pos
    WriteData((float**)0x54caba, &TVPos.x);
    WriteData((float**)0x54cac9, &TVPos.y);
    WriteData((float**)0x54cad3, &TVPos.z);

    //box new pos
    WriteData((float**)0x54cb00, &BoxPos.x);
    WriteData((float**)0x54cb0f, &BoxPos.y);
    WriteData((float**)0x54cb19, &BoxPos.z);

    Init_NewChaoStartPos();
}