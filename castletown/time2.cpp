#include"pch.h"
#include"SA2ModLoader.h"


uint8_t TimeOfDay = Day;

static NJS_TEXNAME dayText[3] = { { (char*)"mra_008s_hirusorab", 0, 0 }, { (char*)"mrasc_016s_hiruumi", 0, 0 }, { (char*)"mrasc_256s_hirusoraa", 0, 0 } };
static NJS_TEXNAME eveningText[3] = { { (char*)"mrasc_008s_yusorab", 0, 0 }, { (char*)"mrasc_016s_yuuumi", 0, 0 }, { (char*)"mrasc_256s_yuusoraa", 0, 0 } };
static NJS_TEXNAME nightTex[3] = { { (char*)"mrasc_016s_yoruumi", 0, 0 }, { (char*)"mrasc_064s_yorusorab", 0, 0 }, { (char*)"mrasc_256s_yorusoraa", 0, 0 } };

static NJS_TEXLIST timeOfDayTexList[3] = {
    dayText, 2,
    eveningText, 2,
    nightTex, 2,
};