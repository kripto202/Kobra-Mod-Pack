class cfgPatches
{
	class 442nd_truck
	{
		weapons[]={};
		units[]=
		{
			"442_argon_transport",
			"442_argon_covered",
            "442_argon_ammo",
            "442_argon_device",
            "442_argon_fuel",
            "442_argon_repair",
			"442_argon_medical",
			
			"rep_argon_transport",
			"rep_argon_covered",
            "rep_argon_ammo",
            "rep_argon_device",
            "rep_argon_fuel",
            "rep_argon_repair",
			"rep_argon_medical"
		};
		requiredaddons[]={};
	};
};
	
class cfgVehicles
{
	class O_Truck_03_transport_F;
	class 442_argon_transport: O_Truck_03_transport_F
	{
		#include "equip-common.hpp"
		side = 1;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "442_siege_bat";
		editorSubcategory = "442_argon";
		crew = "442_swla_unit_crewman";
		displayName = "Argon Transport";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		textureList[] = {};
		hiddenSelectionsTextures[]=
		{
			"442_truck\data\442_truck_body.paa",
			"",
			"442_truck\data\442_truck_cargo.paa"
		};
		ace_cargo_space = 16;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};

	class O_Truck_03_covered_F;
	class 442_argon_covered: O_Truck_03_covered_F
	{
		#include "equip-common.hpp"
		side = 1;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "442_siege_bat";
		editorSubcategory = "442_argon";
		crew = "442_swla_unit_crewman";
		displayName = "Argon Covered Transport";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] =
		{
			"442_truck\data\442_truck_body.paa",
			"",
			"442_truck\data\442_truck_cargo.paa",
			"442_truck\data\442_truck_cover.paa"
		};
		ace_cargo_space = 16;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};

	class O_Truck_03_ammo_F;
	class 442_argon_ammo: O_Truck_03_ammo_F
	{
		#include "equip-ammo.hpp"
		side = 1;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "442_siege_bat";
		editorSubcategory = "442_argon";
		crew = "442_swla_unit_crewman";
		displayName = "Argon Ammo Truck";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] =
		{
			"442_truck\data\442_truck_body.paa",
			"",
			"442_truck\data\442_truck_cargo.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
		};
		ace_cargo_space = 20;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	
	class O_Truck_03_device_F;
	class 442_argon_device: O_Truck_03_device_F
	{
		#include "equip-common.hpp"
		side = 1;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "442_siege_bat";
		editorSubcategory = "442_argon";
		crew = "442_swla_unit_crewman";
		displayName = "Argon Device Carrier";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Camo5"};
		hiddenSelectionsTextures[] =
		{
			"442_truck\data\442_truck_body.paa",
			"",
			"442_truck\data\442_truck_cargo.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
		};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	
	class O_Truck_03_fuel_F;
	class 442_argon_fuel: O_Truck_03_fuel_F
	{
		#include "equip-common.hpp"
		side = 1;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "442_siege_bat";
		editorSubcategory = "442_argon";
		crew = "442_swla_unit_crewman";
		displayName = "Argon Fuel Truck";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] =
		{
			"442_truck\data\442_truck_body.paa",
			"",
			"442_truck\data\442_truck_fuel.paa"
		};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	
	class O_Truck_03_repair_F;
	class 442_argon_repair: O_Truck_03_repair_F
	{
		#include "equip-engineer.hpp"
		side = 1;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "442_siege_bat";
		editorSubcategory = "442_argon";
		crew = "442_swla_unit_crewman";
		displayName = "Argon Repair Truck";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] =
		{
			"442_truck\data\442_truck_body.paa",
			"",
			"442_truck\data\442_truck_repair.paa"
		};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	
	
	class 442_argon_medical: O_Truck_03_covered_F
	{
		#include "equip-medical.hpp"
		side = 1;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "442_siege_bat";
		editorSubcategory = "442_argon";
		crew = "442_swla_unit_crewman";
		displayName = "Argon Medical Truck";
		attendant = 1;
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] =
		{
			"442_truck\data\442_truck_body.paa",
			"",
			"442_truck\data\442_truck_cargo.paa",
			"442_truck\data\442_truck_cover_m.paa"
		};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	
	class rep_argon_transport: 442_argon_transport
	{
		faction = "kobra";
		crew = "SWLB_clone_base_P2";
		hiddenSelectionsTextures[]=
		{
			"442_truck\data\republic_truck_body.paa",
			"",
			"442_truck\data\republic_truck_cargo.paa"
		};
	};
	class rep_argon_covered: 442_argon_covered
	{
		faction = "kobra";
		crew = "SWLB_clone_base_P2";
		hiddenSelectionsTextures[] =
		{
			"442_truck\data\republic_truck_body.paa",
			"",
			"442_truck\data\republic_truck_cargo.paa",
			"442_truck\data\republic_truck_cover.paa"
		};
	};
	class rep_argon_ammo: 442_argon_ammo
	{
		faction = "kobra";
		crew = "SWLB_clone_base_P2";
		hiddenSelectionsTextures[] =
		{
			"442_truck\data\republic_truck_body.paa",
			"",
			"442_truck\data\republic_truck_cargo.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
		};
	};
	class rep_argon_device: 442_argon_device
	{
		faction = "kobra";
		crew = "SWLB_clone_base_P2";
		hiddenSelectionsTextures[] =
		{
			"442_truck\data\republic_truck_body.paa",
			"",
			"442_truck\data\republic_truck_cargo.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
		};
	};
	class rep_argon_fuel: 442_argon_fuel
	{
		faction = "kobra";
		crew = "SWLB_clone_base_P2";
		hiddenSelectionsTextures[] =
		{
			"442_truck\data\republic_truck_body.paa",
			"",
			"442_truck\data\republic_truck_fuel.paa"
		};
	};
	class rep_argon_repair: 442_argon_repair
	{
		faction = "kobra";
		crew = "SWLB_clone_base_P2";
		hiddenSelectionsTextures[] =
		{
			"442_truck\data\republic_truck_body.paa",
			"",
			"442_truck\data\republic_truck_repair.paa"
		};
	};
};