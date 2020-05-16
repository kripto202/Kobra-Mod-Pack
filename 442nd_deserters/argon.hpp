	class O_Truck_03_transport_F;
	class deserter_argon_transport_woodland: O_Truck_03_transport_F
	{
		#include "equip-common.hpp"
		side = 2;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "swla_442_deserters_f";
		editorSubcategory = "442_deserters_ground_veh_woodland";
		crew = "442_swla_deserters_unit_crewman_woodland";
		displayName = "Argon Transport";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		textureList[] = {};
		hiddenSelectionsTextures[]=
		{
			"442nd_deserters\data\argon\deserter_truck_body_woodland.paa",
			"",
			"442nd_deserters\data\argon\deserter_truck_cargo_woodland.paa"
		};
		ace_cargo_space = 16;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	class deserter_argon_transport_tan: deserter_argon_transport_woodland
	{
		editorSubcategory = "442_deserters_ground_veh_tan";
		crew = "442_swla_deserters_unit_crewman_tan";
		hiddenSelectionsTextures[]=
		{
			"442nd_deserters\data\argon\deserter_truck_body_tan.paa",
			"",
			"442nd_deserters\data\argon\deserter_truck_cargo_tan.paa"
		};
	};

	class O_Truck_03_covered_F;
	class deserter_argon_covered_woodland: O_Truck_03_covered_F
	{
		#include "equip-common.hpp"
		side = 2;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "swla_442_deserters_f";
		editorSubcategory = "442_deserters_ground_veh_woodland";
		crew = "442_swla_deserters_unit_crewman_woodland";
		displayName = "Argon Covered Transport";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] =
		{
			"442nd_deserters\data\argon\deserter_truck_body_woodland.paa",
			"",
			"442nd_deserters\data\argon\deserter_truck_cargo_woodland.paa",
			"442nd_deserters\data\argon\deserter_truck_cover_woodland.paa"
		};
		ace_cargo_space = 16;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	class deserter_argon_covered_tan: deserter_argon_covered_woodland
	{
		editorSubcategory = "442_deserters_ground_veh_tan";
		crew = "442_swla_deserters_unit_crewman_tan";
		hiddenSelectionsTextures[] =
		{
			"442nd_deserters\data\argon\deserter_truck_body_tan.paa",
			"",
			"442nd_deserters\data\argon\deserter_truck_cargo_tan.paa",
			"442nd_deserters\data\argon\deserter_truck_cover_tan.paa"
		};
	};

	class O_Truck_03_ammo_F;
	class deserter_argon_ammo_woodland: O_Truck_03_ammo_F
	{
		#include "equip-ammo.hpp"
		side = 2;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "swla_442_deserters_f";
		editorSubcategory = "442_deserters_ground_veh_woodland";
		crew = "442_swla_deserters_unit_crewman_woodland";
		displayName = "Argon Ammo Truck";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] =
		{
			"442nd_deserters\data\argon\deserter_truck_body_woodland.paa",
			"",
			"442nd_deserters\data\argon\deserter_truck_cargo_woodland.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
		};
		ace_cargo_space = 20;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	class deserter_argon_ammo_tan: deserter_argon_ammo_woodland
	{
		editorSubcategory = "442_deserters_ground_veh_tan";
		crew = "442_swla_deserters_unit_crewman_tan";
		hiddenSelectionsTextures[] =
		{
			"442nd_deserters\data\argon\deserter_truck_body_tan.paa",
			"",
			"442nd_deserters\data\argon\deserter_truck_cargo_tan.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
		};
	};
	
	class O_Truck_03_device_F;
	class deserter_argon_device_woodland: O_Truck_03_device_F
	{
		#include "equip-common.hpp"
		side = 2;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "swla_442_deserters_f";
		editorSubcategory = "442_deserters_ground_veh_woodland";
		crew = "442_swla_deserters_unit_crewman_woodland";
		displayName = "Argon Device Carrier";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Camo5"};
		hiddenSelectionsTextures[] =
		{
			"442nd_deserters\data\argon\deserter_truck_body_woodland.paa",
			"",
			"442nd_deserters\data\argon\deserter_truck_cargo_woodland.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
		};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	class deserter_argon_device_tan: deserter_argon_device_woodland
	{
		editorSubcategory = "442_deserters_ground_veh_tan";
		crew = "442_swla_deserters_unit_crewman_tan";
		hiddenSelectionsTextures[] =
		{
			"442nd_deserters\data\argon\deserter_truck_body_tan.paa",
			"",
			"442nd_deserters\data\argon\deserter_truck_cargo_tan.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
		};
	};
	
	class O_Truck_03_fuel_F;
	class deserter_argon_fuel_woodland: O_Truck_03_fuel_F
	{
		#include "equip-common.hpp"
		side = 2;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "swla_442_deserters_f";
		editorSubcategory = "442_deserters_ground_veh_woodland";
		crew = "442_swla_deserters_unit_crewman_woodland";
		displayName = "Argon Fuel Truck";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] =
		{
			"442nd_deserters\data\argon\deserter_truck_body_woodland.paa",
			"",
			"442nd_deserters\data\argon\deserter_truck_fuel_woodland.paa"
		};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	class deserter_argon_fuel_tan: deserter_argon_fuel_woodland
	{
		editorSubcategory = "442_deserters_ground_veh_tan";
		crew = "442_swla_deserters_unit_crewman_tan";
		hiddenSelectionsTextures[] =
		{
			"442nd_deserters\data\argon\deserter_truck_body_tan.paa",
			"",
			"442nd_deserters\data\argon\deserter_truck_fuel_tan.paa"
		};
	};
	
	class O_Truck_03_repair_F;
	class deserter_argon_repair_woodland: O_Truck_03_repair_F
	{
		#include "equip-engineer.hpp"
		side = 2;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "swla_442_deserters_f";
		editorSubcategory = "442_deserters_ground_veh_woodland";
		crew = "442_swla_deserters_unit_crewman_woodland";
		displayName = "Argon Repair Truck";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] =
		{
			"442nd_deserters\data\argon\deserter_truck_body_woodland.paa",
			"",
			"442nd_deserters\data\argon\deserter_truck_repair_woodland.paa"
		};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	class deserter_argon_repair_tan: deserter_argon_repair_woodland
	{
		editorSubcategory = "442_deserters_ground_veh_tan";
		crew = "442_swla_deserters_unit_crewman_tan";
		hiddenSelectionsTextures[] =
		{
			"442nd_deserters\data\argon\deserter_truck_body_tan.paa",
			"",
			"442nd_deserters\data\argon\deserter_truck_repair_tan.paa"
		};
	};
	
	class deserter_argon_medical_woodland: O_Truck_03_covered_F
	{
		#include "equip-medical.hpp"
		side = 2;
		author = "kripto202 + 'Airstrike' Ivanov";
		faction = "swla_442_deserters_f";
		editorSubcategory = "442_deserters_ground_veh_woodland";
		crew = "442_swla_deserters_unit_crewman_woodland";
		displayName = "Argon Medical Truck";
		textureList[] = {};
		attendant = 1;
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] =
		{
			"442nd_deserters\data\argon\deserter_truck_body_woodland.paa",
			"",
			"442nd_deserters\data\argon\deserter_truck_cargo_woodland.paa",
			"442nd_deserters\data\argon\deserter_truck_cover_woodland.paa"
		};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	class deserter_argon_medical_tan: deserter_argon_medical_woodland
	{
		editorSubcategory = "442_deserters_ground_veh_tan";
		crew = "442_swla_deserters_unit_crewman_tan";
		hiddenSelectionsTextures[] =
		{
			"442nd_deserters\data\argon\deserter_truck_body_tan.paa",
			"",
			"442nd_deserters\data\argon\deserter_truck_cargo_tan.paa",
			"442nd_deserters\data\argon\deserter_truck_cover_tan.paa"
		};
	};