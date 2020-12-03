waitUntil {time > 0};


#include "\a3\editor_f\Data\Scripts\dikCodes.h"
// 1
[
	"Kobra", 												// mod name (modify to whatevs)
	"k_LAAT_Doors", 										// action ID
	["Operate Laat Doors", "Opens/closes all LAAT Doors"], 	// Action name
	{false call kobra_LAAT_fnc_ToggleAllDoors }, 			// For keypressdown
	"",														// for keypressup
	[DIK_Z, [false, true, false]]							// default keybind (I've set it up to be "ctrl Z")
] call CBA_fnc_addKeybind;

//2

[
	"Kobra", 											// mod name (modify to whatevs)
	"operate_ramp_key", 								// action ID
	["Toggle Ramp", "Opens/closes LAAT ramp"], 			// Action name
	{ false call kobra_LAAT_fnc_ToggleRamp }, 			// For keypressdown
	"",													// for keypressup
	[DIK_C, [false, true, false]]						// default keybind (I've set it up to be "ctrl C")
] call CBA_fnc_addKeybind;

//3

[
	"Kobra", 													// mod name (modify to whatevs)
	"operate_Left_Doors_key", 									// action ID
	["Toggle Left Doors", "Open/closes LAAT left doors"], 		// Action name
	{ false call kobra_LAAT_fnc_ToggleLeftDoors }, 				// For keypressdown
	""															// for keypressup
] call CBA_fnc_addKeybind;

//4

[
	"Kobra", 													// mod name (modify to whatevs)
	"operate_Right_Doors_key", 									// action ID
	["Toggle Right Doors", "Opens/closes LAAT right doors"], 	// Action name
	{ false call kobra_LAAT_fnc_ToggleRightDoors }, 			// For keypressdown
	""															// for keypressup
] call CBA_fnc_addKeybind;
