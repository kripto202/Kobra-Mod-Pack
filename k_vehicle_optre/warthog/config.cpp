class cfgpatches
{
    class k_vehicle_optre_warthog
    {
        author = "KOBRA Mod Team";
        requiredAddons[]={};
		requiredVersion = 0.1;
		units[] = 
        {
            "442_warthog_unarmed",
            "442_warthog_mg",
            "442_warthog_tt",
            "442_warthog_at",
            "442_cis_warthog_mg"
        };
        weapons[] = {};
    };
};

class cfgvehicles 
{
    class OPTRE_M12_FAV;
    class OPTRE_M12_LRV;
    class OPTRE_M813_TT;
    class OPTRE_M12A1_LRV;
//Unarmed
	class 442_warthog_unarmed: OPTRE_M12_FAV
	{
		displayname = "Warthog (Unarmed)";
		scope = 2;
		side = 1;
		crew = "k_swla_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_swla_unit_p2_dc15a"
		};
		faction = "kobra_b";
		editorsubcategory = "442_g_vehicle";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"clan",
			"clan_text",
			"insignia",
			"attach_apc",
			"attach_mg",
			"attach_troop"
		};
		hiddenSelectionsTextures[] = 
		{
			"442_g_vehicle\warthog\data\rep_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
		};
		class texturesources
		{
			class default
			{
				displayname = "Republic";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"442_g_vehicle\warthog\data\rep_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 442
			{
				displayname = "442nd Siege Battalion";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"442_g_vehicle\warthog\data\442_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class black_legion
			{
				displayname = "Black Legion";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"442_g_vehicle\warthog\data\bl_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 9_ac
			{
				displayname = "9th Assault Corps";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"442_g_vehicle\warthog\data\9_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
		};
		texturelist[] = 
		{
			"default", 1,
			"442", 0,
			"black_legion", 0,
			"9_ac", 0
		};
	};
//MG
	class 442_warthog_mg: OPTRE_M12_LRV
	{
		displayname = "Warthog (MG)";
		scope = 2;
		side = 1;
		crew = "k_swla_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_swla_unit_p2_dc15a"
		};
		faction = "kobra_b";
		editorsubcategory = "442_g_vehicle";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] = 
		{
			"442_g_vehicle\warthog\data\rep_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
		};
		class texturesources
		{
			class default
			{
				displayname = "Republic";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"442_g_vehicle\warthog\data\rep_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 442
			{
				displayname = "442nd Siege Battalion";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"442_g_vehicle\warthog\data\442_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class black_legion
			{
				displayname = "Black Legion";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"442_g_vehicle\warthog\data\bl_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 9_ac
			{
				displayname = "9th Assault Corps";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"442_g_vehicle\warthog\data\9_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
		};
		texturelist[] = 
		{
			"default", 1,
			"442", 1,
			"black_legion", 1
		};
	};
//TT
	class 442_warthog_tt: OPTRE_M813_TT
	{
		displayname = "Warthog (Transport)";
		scope = 2;
		side = 1;
		crew = "k_swla_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_swla_unit_p2_dc15a"
		};
		faction = "kobra_b";
		editorsubcategory = "442_g_vehicle";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_antenna"};
		hiddenSelectionsTextures[] = 
		{
			"442_g_vehicle\warthog\data\rep_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
		};
		class texturesources
		{
			class default
			{
				displayname = "Republic";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"442_g_vehicle\warthog\data\rep_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 442
			{
				displayname = "442nd Siege Battalion";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"442_g_vehicle\warthog\data\442_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class black_legion
			{
				displayname = "Black Legion";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"442_g_vehicle\warthog\data\bl_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 9_ac
			{
				displayname = "9th Assault Corps";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"442_g_vehicle\warthog\data\9_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
		};
		texturelist[] = 
		{
			"default", 1,
			"442", 1,
			"black_legion", 1,
			"9_ac", 1
		};
	};
//AT
	class 442_warthog_at: OPTRE_M12A1_LRV
	{
		displayname = "Warthog (Rocket)";
		scope = 2;
		side = 1;
		crew = "k_swla_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_swla_unit_p2_dc15a"
		};
		faction = "kobra_b";
		editorsubcategory = "442_g_vehicle";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia"};
		hiddenSelectionsTextures[] = 
		{
			"442_g_vehicle\warthog\data\rep_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
		};
		class texturesources
		{
			class default
			{
				displayname = "Republic";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"442_g_vehicle\warthog\data\rep_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 442
			{
				displayname = "442nd Siege Battalion";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"442_g_vehicle\warthog\data\442_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class black_legion
			{
				displayname = "Black Legion";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"442_g_vehicle\warthog\data\bl_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 9_ac
			{
				displayname = "9th Assault Corps";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"442_g_vehicle\warthog\data\9_warthog.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
		};
		texturelist[] = 
		{
			"default", 1,
			"442", 1,
			"black_legion", 1,
			"9_ac", 1
		};
	};
/*Deserter hogs
	class 442_deserter_warthog_unarmed_black: OPTRE_M12_FAV
	{
		displayname = "Warthog (Unarmed - Black)";
		scope = 2;
		side = 2;
		crew = "442_swla_deserters_unit_rifleman_dc15s_black";
		faction = "swla_442_deserters_f";
		editorsubcategory = "442_deserters_ground_veh_black";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"clan",
			"clan_text",
			"insignia",
			"attach_apc",
			"attach_mg",
			"attach_troop"
		};
		hiddenSelectionsTextures[] = 
		{
			"442_g_vehicle\warthog\data\442_warthog_body_black.paa",
			"442_g_vehicle\warthog\data\442_warthog_addons_black.paa"
		};
	};
	class 442_deserter_warthog_mg_black: 442_warthog_mg
	{
		displayname = "Warthog (MG - Black)";
		scope = 2;
		side = 2;
		crew = "442_swla_deserters_unit_rifleman_dc15s_black";
		faction = "swla_442_deserters_f";
		editorsubcategory = "442_deserters_ground_veh_black";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] = 
		{
			"442_g_vehicle\warthog\data\442_warthog_body_black.paa",
			"442_g_vehicle\warthog\data\442_warthog_addons_black.paa"
		};
	};
	class 442_deserter_warthog_at_black: OPTRE_M12A1_LRV
	{
		displayname = "Warthog (Rocket - Black)";
		scope = 2;
		side = 2;
		crew = "442_swla_deserters_unit_rifleman_dc15s_black";
		faction = "swla_442_deserters_f";
		editorsubcategory = "442_deserters_ground_veh_black";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] = 
		{
			"442_g_vehicle\warthog\data\442_warthog_body_black.paa",
			"442_g_vehicle\warthog\data\442_warthog_addons_black.paa"
		};
	};
	class 442_deserter_warthog_tt_black: OPTRE_M813_TT
	{
		displayname = "Warthog (Transport - Black)";
		scope = 2;
		side = 2;
		crew = "442_swla_deserters_unit_rifleman_dc15s_black";
		faction = "swla_442_deserters_f";
		editorsubcategory = "442_deserters_ground_veh_black";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] = 
		{
			"442_g_vehicle\warthog\data\442_warthog_body_black.paa",
			"442_g_vehicle\warthog\data\442_warthog_addons_black.paa"
		};
	};
	class 442_deserter_warthog_unarmed_tan: 442_deserter_warthog_unarmed_black
	{
		displayname = "Warthog (Unarmed - Tan)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_tan";
		editorsubcategory = "442_deserters_ground_veh_tan";
		hiddenSelectionsTextures[] = 
		{
			"442_g_vehicle\warthog\data\442_warthog_body_tan.paa",
			"442_g_vehicle\warthog\data\442_warthog_addons_tan.paa"
		};
	};
	class 442_deserter_warthog_mg_tan: 442_deserter_warthog_mg_black
	{
		displayname = "Warthog (MG - Tan)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_tan";
		editorsubcategory = "442_deserters_ground_veh_tan";
		hiddenSelectionsTextures[] = 
		{
			"442_g_vehicle\warthog\data\442_warthog_body_tan.paa",
			"442_g_vehicle\warthog\data\442_warthog_addons_tan.paa"
		};
	};
	class 442_deserter_warthog_at_tan: 442_deserter_warthog_at_black
	{
		displayname = "Warthog (Rocket - Tan)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_tan";
		editorsubcategory = "442_deserters_ground_veh_tan";
		hiddenSelectionsTextures[] = 
		{
			"442_g_vehicle\warthog\data\442_warthog_body_tan.paa",
			"442_g_vehicle\warthog\data\442_warthog_addons_tan.paa"
		};
	};
	class 442_deserter_warthog_tt_tan: 442_deserter_warthog_tt_black
	{
		displayname = "Warthog (Transport - Tan)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_tan";
		editorsubcategory = "442_deserters_ground_veh_tan";
		hiddenSelectionsTextures[] = 
		{
			"442_g_vehicle\warthog\data\442_warthog_body_tan.paa",
			"442_g_vehicle\warthog\data\442_warthog_addons_tan.paa"
		};
	};
	class 442_deserter_warthog_unarmed_woodland: 442_deserter_warthog_unarmed_black
	{
		displayname = "Warthog (Unarmed - Woodland)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_woodland";
		editorsubcategory = "442_deserters_ground_veh_woodland";
		hiddenSelectionsTextures[] = 
		{
			"442_g_vehicle\warthog\data\442_warthog_body_woodland.paa",
			"442_g_vehicle\warthog\data\442_warthog_addons_woodland.paa"
		};
	};
	class 442_deserter_warthog_mg_woodland: 442_deserter_warthog_mg_black
	{
		displayname = "Warthog (MG - Woodland)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_woodland";
		editorsubcategory = "442_deserters_ground_veh_woodland";
		hiddenSelectionsTextures[] = 
		{
			"442_g_vehicle\warthog\data\442_warthog_body_woodland.paa",
			"442_g_vehicle\warthog\data\442_warthog_addons_woodland.paa"
		};
	};
	class 442_deserter_warthog_at_woodland: 442_deserter_warthog_at_black
	{
		displayname = "Warthog (Rocket - Woodland)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_woodland";
		editorsubcategory = "442_deserters_ground_veh_woodland";
		hiddenSelectionsTextures[] = 
		{
			"442_g_vehicle\warthog\data\442_warthog_body_woodland.paa",
			"442_g_vehicle\warthog\data\442_warthog_addons_woodland.paa"
		};
	};
	class 442_deserter_warthog_tt_woodland: 442_deserter_warthog_tt_black
	{
		displayname = "Warthog (Transport - Woodland)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_woodland";
		editorsubcategory = "442_deserters_ground_veh_woodland";
		hiddenSelectionsTextures[] = 
		{
			"442_g_vehicle\warthog\data\442_warthog_body_woodland.paa",
			"442_g_vehicle\warthog\data\442_warthog_addons_woodland.paa"
		};
	};*/
//CIS
	class 442_cis_warthog_mg : 442_warthog_mg
	{
		displayname = "Warthog (MG)";
		scope = 2;
		side = 0;
		crew = "k_swla_unit_b1_e5";
		typicalCargo[]=
		{
			"k_swla_unit_b1_e5"
		};
		faction = "442_CIS";
		editorsubcategory = "442_g_vehicle";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_Vehicles\Warthog\data\warthog_black_co.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
		};
		/*class Turrets: Turrets
		{
			class CargoGunner_1: CargoGunner_1{};
			class MainTurret: MainTurret
			{
				weapons[] = {"cis_Mounted_repeater"};
				magazines[] = 
				{
					"442_127x99_1000rnd_blue_mag",
					"442_127x99_1000rnd_blue_mag",
					"442_127x99_1000rnd_blue_mag"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Gatling
			{
				source = "revolving";
				weapon = "cis_Mounted_repeater";
			};
		};*/			
	};
};