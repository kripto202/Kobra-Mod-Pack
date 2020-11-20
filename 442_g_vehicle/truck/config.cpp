class cfgpatches
{
    class 442_g_vehicle_argon_truck
    {
        author = "KOBRA Mod Team";
        requiredAddons[]={};
		requiredVersion = 0.1;
		units[] = 
        {
            "442_argon_transport",
            "442_argon_covered",
            "442_argon_ammo",
            "442_argon_device",
            "442_argon_fuel",
            "442_argon_repair",
            "442_argon_medical",
            "442_argon_transport_cis",
            "442_argon_covered_cis",
            "442_argon_ammo_cis",
            "442_argon_device_cis",
            "442_argon_fuel_cis",
            "442_argon_repair_cis",
            "442_argon_medical_cis"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class O_Truck_03_transport_F;
    class O_Truck_03_covered_F;
    class O_Truck_03_ammo_F;
    class O_Truck_03_device_F;
    class O_Truck_03_fuel_F;
    class O_Truck_03_repair_F;

    class 442_argon_transport: O_Truck_03_transport_F
	{
		#include "equip-common.hpp"
		side = 1;
		author = "Kobra Mod Team";
		faction = "kobra_b";
		editorSubcategory = "442_argon";
		crew = "k_swla_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_swla_unit_p2_dc15a"
		};
		displayName = "Argon Transport";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		textureList[] = {};
		hiddenSelectionsTextures[]=
		{
			"442_g_vehicle\truck\data\republic_truck_body.paa",
			"",
			"442_g_vehicle\truck\data\republic_truck_cargo.paa"
		};
		ace_cargo_space = 16;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
		class texturesources
		{
			class base
			{
				displayname = "Republic";
				author = "Kobra Mod Team Team";
				textures[] = 
				{
					"442_g_vehicle\truck\data\republic_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\republic_truck_cargo.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 442: base
			{
				displayname = "442nd Siege Battalion";
				author = "Kobra Mod TeamMod Team";
				textures[] = 
				{
					"442_g_vehicle\truck\data\442_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\442_truck_cargo.paa"
				};
			};
			class bl: base
			{
				displayname = "Black Legion";
				textures[] = 
				{
					"442_g_vehicle\truck\data\bl_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\bl_truck_cargo.paa"
				};
			};
		};
	};
    class 442_argon_covered: O_Truck_03_covered_F
	{
		#include "equip-common.hpp"
		side = 1;
		author = "Kobra Mod Team202 + 'Airstrike' Ivanov";
		faction = "kobra_b";
		editorSubcategory = "442_argon";
		crew = "k_swla_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_swla_unit_p2_dc15a"
		};
		displayName = "Argon Covered Transport";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] =
		{
			"442_g_vehicle\truck\data\republic_truck_body.paa",
			"",
			"442_g_vehicle\truck\data\republic_truck_cargo.paa",
			"442_g_vehicle\truck\data\republic_truck_cover.paa"
		};
		ace_cargo_space = 16;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
		class texturesources
		{
			class base
			{
				displayname = "Republic";
				author = "Kobra Mod TeamMod Team";
				textures[] = 
				{
					"442_g_vehicle\truck\data\republic_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\republic_truck_cargo.paa",
					"442_g_vehicle\truck\data\republic_truck_cover.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 442: base
			{
				displayname = "442nd Siege Battalion";
				author = "Kobra Mod TeamMod Team";
				textures[] = 
				{
					"442_g_vehicle\truck\data\442_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\442_truck_cargo.paa",
					"442_g_vehicle\truck\data\442_truck_cover.paa"
				};
			};
			class bl: base
			{
				displayname = "Black Legion";
				textures[] = 
				{
					"442_g_vehicle\truck\data\bl_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\bl_truck_cargo.paa",
					"442_g_vehicle\truck\data\bl_truck_cover.paa"
				};
			};
		};
	};
    class 442_argon_ammo: O_Truck_03_ammo_F
	{
		#include "equip-ammo.hpp"
		side = 1;
		author = "Kobra Mod Team202 + 'Airstrike' Ivanov";
		faction = "kobra_b";
		editorSubcategory = "442_argon";
		crew = "k_swla_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_swla_unit_p2_dc15a"
		};
		displayName = "Argon Ammo Truck";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] =
		{
			"442_g_vehicle\truck\data\republic_truck_body.paa",
			"",
			"442_g_vehicle\truck\data\republic_truck_cargo.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
		};
		ace_cargo_space = 20;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
		class texturesources
		{
			class base
			{
				displayname = "Republic";
				author = "Kobra Mod TeamMod Team";
				textures[] = 
				{
					"442_g_vehicle\truck\data\republic_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\republic_truck_cargo.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 442: base
			{
				displayname = "442nd Siege Battalion";
				author = "Kobra Mod TeamMod Team";
				textures[] = 
				{
					"442_g_vehicle\truck\data\442_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\442_truck_cargo.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
				};
			};
			class bl: base
			{
				displayname = "Black Legion";
				textures[] = 
				{
					"442_g_vehicle\truck\data\bl_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\bl_truck_cargo.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
				};
			};
		};
	};
    class 442_argon_device: O_Truck_03_device_F
	{
		#include "equip-common.hpp"
		side = 1;
		author = "Kobra Mod Team202 + 'Airstrike' Ivanov";
		faction = "kobra_b";
		editorSubcategory = "442_argon";
		crew = "k_swla_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_swla_unit_p2_dc15a"
		};
		displayName = "Argon Device Carrier";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Camo5"};
		hiddenSelectionsTextures[] =
		{
			"442_g_vehicle\truck\data\republic_truck_body.paa",
			"",
			"442_g_vehicle\truck\data\republic_truck_cargo.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
		};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
		class texturesources
		{
			class base
			{
				displayname = "Republic";
				author = "Kobra Mod TeamMod Team";
				textures[] = 
				{
					"442_g_vehicle\truck\data\republic_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\republic_truck_cargo.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 442: base
			{
				displayname = "442nd Siege Battalion";
				author = "Kobra Mod TeamMod Team";
				textures[] = 
				{
					"442_g_vehicle\truck\data\442_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\442_truck_cargo.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
			};
			class bl: base
			{
				displayname = "Black Legion";
				textures[] = 
				{
					"442_g_vehicle\truck\data\bl_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\bl_truck_cargo.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
			};
		};
	};
    class 442_argon_fuel: O_Truck_03_fuel_F
	{
		#include "equip-common.hpp"
		side = 1;
		author = "Kobra Mod Team202 + 'Airstrike' Ivanov";
		faction = "kobra_b";
		editorSubcategory = "442_argon";
		crew = "k_swla_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_swla_unit_p2_dc15a"
		};
		displayName = "Argon Fuel Truck";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] =
		{
			"442_g_vehicle\truck\data\republic_truck_body.paa",
			"",
			"442_g_vehicle\truck\data\republic_truck_fuel.paa"
		};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
		class texturesources
		{
			class base
			{
				displayname = "Republic";
				author = "Kobra Mod TeamMod Team";
				textures[] = 
				{
					"442_g_vehicle\truck\data\republic_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\republic_truck_fuel.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 442: base
			{
				displayname = "442nd Siege Battalion";
				author = "Kobra Mod TeamMod Team";
				textures[] = 
				{
					"442_g_vehicle\truck\data\442_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\442_truck_fuel.paa"
				};
			};
			class bl: base
			{
				displayname = "Black Legion";
				textures[] = 
				{
					"442_g_vehicle\truck\data\bl_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\bl_truck_fuel.paa"
				};
			};
		};
	};
    class 442_argon_repair: O_Truck_03_repair_F
	{
		#include "equip-engineer.hpp"
		side = 1;
		author = "Kobra Mod Team202 + 'Airstrike' Ivanov";
		faction = "kobra_b";
		editorSubcategory = "442_argon";
		crew = "k_swla_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_swla_unit_p2_dc15a"
		};
		displayName = "Argon Repair Truck";
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] =
		{
			"442_g_vehicle\truck\data\republic_truck_body.paa",
			"",
			"442_g_vehicle\truck\data\republic_truck_repair.paa"
		};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
		class texturesources
		{
			class base
			{
				displayname = "Republic";
				author = "Kobra Mod TeamMod Team";
				textures[] = 
				{
					"442_g_vehicle\truck\data\republic_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\republic_truck_repair.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 442: base
			{
				displayname = "442nd Siege Battalion";
				author = "Kobra Mod TeamMod Team";
				textures[] = 
				{
					"442_g_vehicle\truck\data\442_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\442_truck_repair.paa"
				};
			};
			class bl: base
			{
				displayname = "Black Legion";
				textures[] = 
				{
					"442_g_vehicle\truck\data\bl_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\bl_truck_repair.paa"
				};
			};
		};
	};
    class 442_argon_medical: O_Truck_03_covered_F
	{
		#include "equip-medical.hpp"
		side = 1;
		author = "Kobra Mod Team202 + 'Airstrike' Ivanov";
		faction = "kobra_b";
		editorSubcategory = "442_argon";
		crew = "k_swla_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_swla_unit_p2_dc15a"
		};
		displayName = "Argon Medical Truck";
		attendant = 1;
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] =
		{
			"442_g_vehicle\truck\data\republic_truck_body.paa",
			"",
			"442_g_vehicle\truck\data\republic_truck_cargo.paa",
			"442_g_vehicle\truck\data\republic_truck_cover_m.paa"
		};
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
		class texturesources
		{
			class base
			{
				displayname = "Republic";
				author = "Kobra Mod TeamMod Team";
				textures[] = 
				{
					"442_g_vehicle\truck\data\republic_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\republic_truck_cargo.paa",
					"442_g_vehicle\truck\data\republic_truck_cover_m.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 442: base
			{
				displayname = "442nd Siege Battalion";
				author = "Kobra Mod TeamMod Team";
				textures[] = 
				{
					"442_g_vehicle\truck\data\442_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\442_truck_cargo.paa",
					"442_g_vehicle\truck\data\442_truck_cover_m.paa"
				};
			};
			class bl: base
			{
				displayname = "Black Legion";
				textures[] = 
				{
					"442_g_vehicle\truck\data\bl_truck_body.paa",
					"",
					"442_g_vehicle\truck\data\bl_truck_cargo.paa",
					"442_g_vehicle\truck\data\bl_truck_cover_m.paa"
				};
			};
		};
	};

    class 442_argon_transport_cis: O_Truck_03_transport_F
	{
		#include "equip-common.hpp"
		side = 0;
		author = "mjr121";
		faction = "442_CIS";
		editorSubcategory = "442_argon";
		crew = "k_swla_unit_b1_e5";
		typicalCargo[]=
		{
			"k_swla_unit_b1_e5"
		};
		displayName = "Argon Transport";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		textureList[] = {};
		hiddenSelectionsTextures[] = 
        {
            "442_g_vehicle\truck\cis\body_CO.paa",
            "",
            "442_g_vehicle\truck\cis\c_cargo_CO.paa"
        };
		ace_cargo_space = 16;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
    class 442_argon_covered_cis: O_Truck_03_covered_F
	{
		#include "equip-common.hpp"
		side = 0;
		author = "mjr121";
		faction = "442_CIS";
		editorSubcategory = "442_argon";
		crew = "k_swla_unit_b1_e5";
		typicalCargo[]=
		{
			"k_swla_unit_b1_e5"
		};
		displayName = "Argon Covered Transport";
		textureList[] = {};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = 
        {
            "442_g_vehicle\truck\cis\body_CO.paa",
            "",
            "442_g_vehicle\truck\cis\c_cargo_CO.paa",
            "442_g_vehicle\truck\cis\c_cover_CO.paa"
        };
		ace_cargo_space = 16;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
    class 442_argon_ammo_cis: O_Truck_03_ammo_F
	{
		#include "equip-ammo.hpp"
		side = 0;
		author = "mjr121";
		faction = "442_CIS";
		editorSubcategory = "442_argon";
		crew = "k_swla_unit_b1_e5";
		typicalCargo[]=
		{
			"k_swla_unit_b1_e5"
		};
		displayName = "Argon Ammo Truck";
		textureList[] = {};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = 
        {
            "442_g_vehicle\truck\cis\body_CO.paa",
            "",
            "442_g_vehicle\truck\cis\c_cargo_CO.paa",
            "\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
        };
		ace_cargo_space = 20;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
    class 442_argon_device_cis: O_Truck_03_device_F
	{
		#include "equip-common.hpp"
		side = 0;
		author = "mjr121";
		faction = "442_CIS";
		editorSubcategory = "442_argon";
		crew = "k_swla_unit_b1_e5";
		typicalCargo[]=
		{
			"k_swla_unit_b1_e5"
		};
		displayName = "Argon Device Carrier";
		textureList[] = {};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
		hiddenSelectionsTextures[] = 
        {
            "442_g_vehicle\truck\cis\body_CO.paa",
            "",
            "442_g_vehicle\truck\cis\c_cargo_CO.paa",
            "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
            "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
        };
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
    class 442_argon_fuel_cis: O_Truck_03_fuel_F
	{
		#include "equip-common.hpp"
		side = 0;
		author = "mjr121";
		faction = "442_CIS";
		editorSubcategory = "442_argon";
		crew = "k_swla_unit_b1_e5";
		typicalCargo[]=
		{
			"k_swla_unit_b1_e5"
		};
		displayName = "Argon Fuel Truck";
		textureList[] = {};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = 
        {
            "442_g_vehicle\truck\cis\body_CO.paa",
            "",
            "442_g_vehicle\truck\cis\fuel_CO.paa"
        };
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
    class 442_argon_repair_cis: O_Truck_03_repair_F
	{
		#include "equip-engineer.hpp"
		side = 0;
		author = "mjr121";
		faction = "442_CIS";
		editorSubcategory = "442_argon";
		crew = "k_swla_unit_b1_e5";
		typicalCargo[]=
		{
			"k_swla_unit_b1_e5"
		};
		displayName = "Argon Repair Truck";
		textureList[] = {};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = 
        {
            "442_g_vehicle\truck\cis\body_CO.paa",
            "",
            "442_g_vehicle\truck\cis\repair_CO.paa"
        };
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
		crew = "k_swla_unit_b1_e5";
		typicalCargo[]=
		{
			"k_swla_unit_b1_e5"
		};
		displayName = "Argon Medical Truck";
		attendant = 1;
		textureList[] = {};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = 
        {
            "442_g_vehicle\truck\cis\body_CO.paa",
            "",
            "442_g_vehicle\truck\cis\c_cargo_CO.paa",
            "442_g_vehicle\truck\cis\c_cover_CO.paa"
        };
		ace_cargo_space = 8;
		ace_interaction_bodyWidth = 3;
		getInRadius = 5;
	};
};