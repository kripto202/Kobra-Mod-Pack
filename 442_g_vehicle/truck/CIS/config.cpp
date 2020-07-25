#define _ARMA_

class cfgPatches
{
	class  442nd_truck_cis
	{
		weapons[] = {};
		units[] = 
		{
			"442_argon_transport_cis",
			"442_argon_covered_cis",
			"442_argon_ammo_cis",
			"442_argon_device_cis",
			"442_argon_fuel_cis",
			"442_argon_repair_cis",
			"442_argon_medical_cis"
		};
		requiredaddons[] = {"kobra_core"};
	};
};
class cfgVehicles
{
	class O_Truck_03_transport_F;
	class 442_argon_transport_cis: O_Truck_03_transport_F
	{
		#include "equip-common.hpp"
		side = 0;
		author = "mjr121";
		faction = "442_CIS";
		editorSubcategory = "442_argon";
		crew = "442_b1_crew_base";
		displayName = "Argon Transport";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		textureList[] = {};
		hiddenSelectionsTextures[] = {"442_truck\cis\body_CO.paa","","442_truck\cis\c_cargo_CO.paa"};
		ace_cargo_space = 16;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	class O_Truck_03_covered_F;
	class 442_argon_covered_cis: O_Truck_03_covered_F
	{
		#include "equip-common.hpp"
		side = 0;
		author = "mjr121";
		faction = "442_CIS";
		editorSubcategory = "442_argon";
		crew = "442_b1_crew_base";
		displayName = "Argon Covered Transport";
		textureList[] = {};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"442_truck\cis\body_CO.paa","","442_truck\cis\c_cargo_CO.paa","442_truck\cis\c_cover_CO.paa"};
		ace_cargo_space = 16;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	class O_Truck_03_ammo_F;
	class 442_argon_ammo_cis: O_Truck_03_ammo_F
	{
		#include "equip-ammo.hpp"
		side = 0;
		author = "mjr121";
		faction = "442_CIS";
		editorSubcategory = "442_argon";
		crew = "442_b1_crew_base";
		displayName = "Argon Ammo Truck";
		textureList[] = {};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"442_truck\cis\body_CO.paa","","442_truck\cis\c_cargo_CO.paa","\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"};
		ace_cargo_space = 20;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	class O_Truck_03_device_F;
	class 442_argon_device_cis: O_Truck_03_device_F
	{
		#include "equip-common.hpp"
		side = 0;
		author = "mjr121";
		faction = "442_CIS";
		editorSubcategory = "442_argon";
		crew = "442_b1_crew_base";
		displayName = "Argon Device Carrier";
		textureList[] = {};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
		hiddenSelectionsTextures[] = {"442_truck\cis\body_CO.paa","","442_truck\cis\c_cargo_CO.paa","\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa","\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	class O_Truck_03_fuel_F;
	class 442_argon_fuel_cis: O_Truck_03_fuel_F
	{
		#include "equip-common.hpp"
		side = 0;
		author = "mjr121";
		faction = "442_CIS";
		editorSubcategory = "442_argon";
		crew = "442_b1_crew_base";
		displayName = "Argon Fuel Truck";
		textureList[] = {};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"442_truck\cis\body_CO.paa","","442_truck\cis\fuel_CO.paa"};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	class O_Truck_03_repair_F;
	class 442_argon_repair_cis: O_Truck_03_repair_F
	{
		#include "equip-engineer.hpp"
		side = 0;
		author = "mjr121";
		faction = "442_CIS";
		editorSubcategory = "442_argon";
		crew = "442_b1_crew_base";
		displayName = "Argon Repair Truck";
		textureList[] = {};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"442_truck\cis\body_CO.paa","","442_truck\cis\repair_CO.paa"};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
	class 442_argon_medical_cis: O_Truck_03_covered_F
	{
		#include "equip-medical.hpp"
		side = 0;
		author = "mjr121";
		faction = "442_CIS";
		editorSubcategory = "442_argon";
		crew = "442_b1_crew_base";
		displayName = "Argon Medical Truck";
		attendant = 1;
		textureList[] = {};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"442_truck\cis\body_CO.paa","","442_truck\cis\c_cargo_CO.paa","442_truck\cis\c_cover_CO.paa"};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
};

