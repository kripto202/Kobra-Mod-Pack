class cfgPatches
{
	class blnd_truck
	{
		weapons[]={};
		units[]=
		{
			"bl_argon_transport",
			"bl_argon_covered",
            "bl_argon_ammo",
            "bl_argon_device",
            "bl_argon_fuel",
            "bl_argon_repair",
			"bl_argon_medical"
		};
		requiredaddons[]={};
	};
};
	
class cfgVehicles
{
	class O_Truck_03_transport_F;
	class bl_argon_transport: O_Truck_03_transport_F
	{
		#include "equip-common.hpp"
		side = 1;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "black_legion";
		editorSubcategory = "bl_argon";
		crew = "SWLA_BL_Trooper";
		displayName = "Argon Transport";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		textureList[] = {};
		hiddenSelectionsTextures[]=
		{
			"bl_truck\data\bl_truck_body.paa",
			"",
			"bl_truck\data\bl_truck_cargo.paa"
		};
		ace_cargo_space = 16;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};

	class O_Truck_03_covered_F;
	class bl_argon_covered: O_Truck_03_covered_F
	{
		#include "equip-common.hpp"
		side = 1;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "black_legion";
		editorSubcategory = "bl_argon";
		crew = "SWLA_BL_Trooper";
		displayName = "Argon Covered Transport";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] =
		{
			"bl_truck\data\bl_truck_body.paa",
			"",
			"bl_truck\data\bl_truck_cargo.paa",
			"bl_truck\data\bl_truck_cover.paa"
		};
		ace_cargo_space = 16;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};

	class O_Truck_03_ammo_F;
	class bl_argon_ammo: O_Truck_03_ammo_F
	{
		#include "equip-ammo.hpp"
		side = 1;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "black_legion";
		editorSubcategory = "bl_argon";
		crew = "SWLA_BL_Trooper";
		displayName = "Argon Ammo Truck";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] =
		{
			"bl_truck\data\bl_truck_body.paa",
			"",
			"bl_truck\data\bl_truck_cargo.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"};
		ace_cargo_space = 20;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	
	class O_Truck_03_device_F;
	class bl_argon_device: O_Truck_03_device_F
	{
		#include "equip-common.hpp"
		side = 1;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "black_legion";
		editorSubcategory = "bl_argon";
		crew = "SWLA_BL_Trooper";
		displayName = "Argon Device Carrier";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Camo5"};
		hiddenSelectionsTextures[] =
		{
			"bl_truck\data\bl_truck_body.paa",
			"",
			"bl_truck\data\bl_truck_cargo.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
		};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	
	class O_Truck_03_fuel_F;
	class bl_argon_fuel: O_Truck_03_fuel_F
	{
		#include "equip-common.hpp"
		side = 1;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "black_legion";
		editorSubcategory = "bl_argon";
		crew = "SWLA_BL_Trooper";
		displayName = "Argon Fuel Truck";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] =
		{
			"bl_truck\data\bl_truck_body.paa",
			"",
			"bl_truck\data\bl_truck_fuel.paa"
		};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	
	class O_Truck_03_repair_F;
	class bl_argon_repair: O_Truck_03_repair_F
	{
		#include "equip-engineer.hpp"
		side = 1;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "black_legion";
		editorSubcategory = "bl_argon";
		crew = "SWLA_BL_Trooper";
		displayName = "Argon Repair Truck";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
			hiddenSelectionsTextures[] =
			{
				"bl_truck\data\bl_truck_body.paa",
				"",
				"bl_truck\data\bl_truck_repair.paa"
			};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	
	
	class bl_argon_medical: O_Truck_03_covered_F
	{
		#include "equip-medical.hpp"
		side = 1;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "black_legion";
		editorSubcategory = "bl_argon";
		crew = "SWLA_BL_Trooper";
		displayName = "Argon Medical Truck";
		attendant = 1;
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] =
		{
			"bl_truck\data\bl_truck_body.paa",
			"",
			"bl_truck\data\bl_truck_cargo.paa",
			"bl_truck\data\bl_truck_cover_m.paa"
		};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
};