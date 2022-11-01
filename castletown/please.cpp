#include "SA2ModLoader.h"
#include "Level Replacement (easy method).h"
#include "..\StartPos.cpp"
#include "pch.h"
void init_PastGarden_Level()
{
	WriteCall((void*)0x54C80F, Load_PastGarden);

	Init_NewStartPos();
}