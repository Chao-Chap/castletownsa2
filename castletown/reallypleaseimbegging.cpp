#include"SA2ModLoader.h"
#include"pch.h"
#include"Level Replacement (easy method).cpp"
#include "..\Chao-Fixes.cpp"
#include"..\StartPos.cpp"
void init_PastGarden_Level()
{
	WriteCall((void*)0x54C80F, Init_NewStartPos);



	Init_NewStartPos();



}