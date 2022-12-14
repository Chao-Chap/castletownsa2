#include "pch.h" // or #include "stdafx.h"

// Code Snippet:
//      How to import a spline into a level. (Used for rails, loops, etc)
//
// Notes:
// 	    Intended for use in its own mod or as a part of a mod's dll.
//	    Follow the x-hax modding tutorial for help on importing
//          dependencies.

// Step 1: Import 'spline controllers' to specify whether you want a Rail or Loop.
ObjectFunc(RailController, 0x4980C0);
ObjectFunc(LoopController, 0x497B50);

// Step 2: Define the points along your spline.
LoopPoint spline_points[] = {
	{ 0, 0, 10.0f, { 0, 0, 0 } },
	{ 0, 0, 10.0f, { 10.0f, 0, 0 } },
	{ 0, 0, 10.0f, { 20.0f, 0, 0 } },
	{ 0, 0, 10.0f, { 30.0f, 0, 0 } },
};
// Overview for a single point:
// {xRotation, zRotation, distance, position of point}

// Step 3: Define a spline.
LoopHead spline = { 1, LengthOfArray<int16_t>(spline_points), 40.0f, spline_points, RailController };
// Overview for above: { unknown, # of points, total distance, list of your points, controller }

// Step 4: Define a list of splines ending with "NULL" or nullptr.
LoopHead* level_splines[] = {
	&spline,
	NULL
};

// Step 5: Load in your splines with the LoadStagePaths function.
// To do this, I use a 'Function Hook.' It allows us to add logic
// to built in functions, and in this case, we add logic to the
// 'load level' internal function.
void InitCurrentLevelAndScreenCount_r();
FunctionHook<void> InitCurrentLevelAndScreenCount_h(InitCurrentLevelAndScreenCount, InitCurrentLevelAndScreenCount_r);
void InitCurrentLevelAndScreenCount_r() {
	InitCurrentLevelAndScreenCount_h.Original();
	if (CurrentLevel == LevelIDs_CityEscape) {
		LoadStagePaths((LoopHead**)level_splines);
	}
}

// FunctionHook code supplied by MainMemory on x-hax. Thanks main.
// Other solutions may also work, just make sure that LoadStagePaths runs on level load.

// --------------------------------------------------------------------------
// NOTES:
//    If you're coding a mod yourself, a portion of this spline code can be
//    autogenerated by SATools. Simply create and export a spline from the
//    BlenderSASupport addon, open an SATools project folder, and replace
//    a level's existing /paths spline file with your own (name it the same). Then,
//    in the SATools build options, select the level you used, and choose 'Manual.'
//    Once there, click your stage paths and hit 'generate c++ code.' This will
//    give you a majority of the code.
