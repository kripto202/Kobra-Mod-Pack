waitUntil {time > 0};


#include "\a3\editor_f\Data\Scripts\dikCodes.h"

//1
[
	"Legion Studios", 											// mod name (modify to whatevs)
	"operate_Impulse_key", 											// action ID
	["Activate Impulse", "Changes between 400 and 600 km/h Impulse levels. FUEL DRAIN INCREASED WITH IMPULSE"], 	// Action name
	{ false call kobra_Vehicle_fnc_ImpulseKey }, 									// For keypressdown
	""													// for keypressup
] call CBA_fnc_addKeybind;
//2
[
	"Legion Studios", 											// mod name (modify to whatevs)
	"operate_Repulse_key", 											// action ID
	["Activate Repulse", "Shifts down current impulse level to ""0"" or activates repulsor"], 		// Action name
	{ false call kobra_Vehicle_fnc_RepulseKey }, 								// For keypressdown
	""													// for keypressup
] call CBA_fnc_addKeybind;