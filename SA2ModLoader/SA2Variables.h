#pragma once

#include "../ModLoader/MemAccess.h"
#include "SA2Structs.h"

DataArray(AnimationInfo, TailsAnimList, 0xA0D608, 118);
DataArray(AnimationInfo, MechEggmanAnimList, 0xA0E1F0, 139);
DataArray(AnimationInfo, MechTailsAnimList, 0xA0EAA0, 190);
DataArray(AnimationInfo, ChaoWalkerAnimList, 0xA0F680, 198);
DataArray(AnimationInfo, DarkChaoWalkerAnimList, 0xA102E0, 202);
DataArray(AnimationInfo, EggmanAnimList, 0xA12750, 164);
DataArray(AnimationInfo, KnucklesAnimList, 0xA13320, 217);
DataArray(AnimationInfo, TikalAnimList, 0xA140B0, 260);
DataArray(AnimationInfo, RougeAnimList, 0xA150F0, 217);
DataArray(AnimationInfo, ChaosAnimList, 0xA15E80, 272);
DataArray(AnimationInfo, SonicAnimList, 0xA17C18, 203);
DataArray(AnimationInfo, ShadowAnimList, 0xA188C8, 249);
DataArray(AnimationInfo, AmyAnimList, 0xA19858, 249);
DataArray(AnimationInfo, MetalSonicAnimList, 0xA1A7E8, 249);
DataArray(AnimationInfo, SuperSonicAnimList, 0x170D228, 110);
DataArray(AnimationInfo, SuperShadowAnimList, 0x170D908, 117);
DataArray(AnimationIndex, HiddenBaseCharAnims, 0xA93F28, 3);
DataArray(AnimationIndex, CannonsCoreKCharAnims, 0xCCDEB8, 7);
DataArray(AnimationIndex, SandOceanCharAnims, 0xCF9980, 3);
DataArray(AnimationIndex, DryLagoonCharAnims, 0xDEA388, 11);
DataArray(AnimationIndex, SandOcean2PCharAnims, 0x1413218, 3);
DataArray(AnimationIndex, DryLagoon2PPoolQuestCharAnims, 0x15623B8, 13);
DataArray(AnimationIndex, CannonsCoreRCharAnims, 0x15AFBC8, 7);
DataArray(AnimationIndex, AquaticMineCharAnims, 0x16383A0, 8);
DataArray(AnimationIndex, EggGolemECharAnims, 0x16D1E30, 2);
DataArray(char *, MusicList, 0x171A2B0, 156);
DataPointer(char, TimerMinutes, 0x174AFDB);
DataPointer(char, TimerSeconds, 0x174AFDC);
DataPointer(char, TwoPlayerMode, 0x174AFDE);
DataPointer(char, MissionNum, 0x174AFE3);
DataArray(char, P1SpecialAttacks, 0x174AFED, 3);
DataPointer(char, P1FirstSpecialAttack, &P1SpecialAttacks[0]);
DataPointer(char, P1SecondSpecialAttack, &P1SpecialAttacks[1]);
DataPointer(char, P1ThirdSpecialAttack, &P1SpecialAttacks[2]);
DataArray(char, P2SpecialAttacks, 0x174AFF0, 3);
DataPointer(char, P2FirstSpecialAttack, &P2SpecialAttacks[0]);
DataPointer(char, P2SecondSpecialAttack, &P2SpecialAttacks[1]);
DataPointer(char, P2ThirdSpecialAttack, &P2SpecialAttacks[2]);
DataPointer(char, HaveChaoKey, 0x174B004);
DataArray(char, AltCostume, 0x174B013, 2);
DataArray(char, AltCharacter, 0x174B015, 2);
DataArray(short, RingCount, 0x174B028, 2);
DataPointer(short, PerfectRings, 0x174B02E);
DataPointer(short, CurrentLevel, 0x1934B70);
DataPointer(int, CurrentCharacter, 0x1934B80);
DataPointer(int, CurrentCharacter2P, 0x1934BE4);
DataArray(ControllerData, ControllersRaw, 0x1A52918, 4);
DataPointer(ControllerData, Controller1Raw, &ControllersRaw[0]);
DataPointer(ControllerData, Controller2Raw, &ControllersRaw[1]);
DataPointer(ControllerData, Controller3Raw, &ControllersRaw[2]);
DataPointer(ControllerData, Controller4Raw, &ControllersRaw[3]);
DataArray(CharObj2 *, MainCharObj2, 0x1DE9600, 2);
DataArray(ModelIndex, CharacterModels, 0x1DE9620, 532);
DataArray(CharObj1 *, MainCharObj1, 0x1DEA6C0, 2);
DataArray(ObjectMaster *, MainCharacter, 0x1DEA6E0, 2);
DataArray(AnimationIndex, CharacterAnimations, 0x1DEA700, 300);
DataArray(uint32_t, MenuPressedButtons, 0x1DEFB10, 4);
DataArray(ControllerData, Controllers, 0x1DEFC00, 4);
DataPointer(ControllerData, Controller1, &Controllers[0]);
DataPointer(ControllerData, Controller2, &Controllers[1]);
DataPointer(ControllerData, Controller3, &Controllers[2]);
DataPointer(ControllerData, Controller4, &Controllers[3]);
DataPointer(UserConfigData*, MainUserConfig, 0x01AF19EC);
DataPointer(HWND, MainWindowHandle, 0x01933EA8);
DataPointer(float, HorizontalResolution, 0x0174BA64);
DataPointer(float, VerticalResolution, 0x0174BA68);
DataPointer(short, GameState, 0x01934BE0);
DataArray(char, Action_Pressed, 0x01DEFB00, 2);
DataArray(char, Action_Held, 0x01DEFBF0, 4);
DataArray(char, Action_Off, 0x01DEFB20, 2);
DataArray(char, Action_Released, 0x01DEFB42, 2);
DataArray(char, A_Pressed, 0x01DEFB80, 2);
DataArray(char, A_Held, 0x01DEFAA4, 2);
DataArray(char, A_Off, 0x01DEFAA6, 2);
DataArray(char, A_Released, 0x01DEFB40, 2);
