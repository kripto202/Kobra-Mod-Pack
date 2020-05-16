class CfgPatches
{
	class kobra_core
	{
		author = "kripto202";
		requiredAddons[]=
		{
			"A3_Anims_F",
			"A3_Characters_F",
			"A3_UI_F"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[]={};
	};
};

class CfgSounds 
{
	class kobra_Vic_ImpulseOn 
	{
		titles[] = {"kobra_Vic_ImpulseOn"};
		sound[] = {"kobra_core\sounds\Impulsor_On.wss", 15, 1, 1500};
		name = "kobra_Vic_ImpulseOn";
		duration = 3;
	};

	class kobra_Vic_ImpulseOff 
	{
		titles[] = {"kobra_Vic_ImpulseOff"};
		sound[] = {"kobra_core\sounds\Impulsor_Off.wss", 15, 1, 1500};
		name = "kobra_Vic_ImpulseOff";
		duration = 3;
	};

};

class CfgFunctions 
{
	class kobra_Vehicle
	{
		class Operation 
		{
			file = "kobra_core\Scripts";
			
			class Init
			{
				postInit = 1;
			};

            class ImpulsorMonitor {};

            class ImpulseKey {};
			
			class RepulseKey {};
			
			class ImpulseJoystick {};
			
			class RepulseJoystick {};


		};
	};
};

class cfgFactionClasses
{
	class 442_siege_bat
	{
		displayName = "[K] 442nd Siege Battalion";
		priority = 1;
		side = 1;
		icon = "";
	};
	class 442_siege_bat_w
	{
		displayName = "[K] 442nd Siege Battalion (Woodland)";
		priority = 1;
		side = 1;
		icon = "";
	};
	class 442_siege_bat_d
	{
		displayName = "[K] 442nd Siege Battalion (Desert)";
		priority = 1;
		side = 1;
		icon = "";
	};
	class 442_siege_bat_j
	{
		displayName = "[K] 442nd Siege Battalion (Jungle)";
		priority = 1;
		side = 1;
		icon = "";
	};
	class swla_442_deserters_f
	{
		displayname = "[K] Deserters";
		priority = 1;
		side = 2;
	};
	class 442_CIS
	{
		displayname = "[K] CIS";
		priority = 1;
		side = 0;
	};
	class black_legion
	{
		displayname = "[K] Black Legion";
		priority = 1;
		side = 1;
	};
	class 44_sod
	{
		displayname = "[K] 44th Special Operations Division";
		priority = 1;
		side = 1;
	};
	class kobra
	{
		displayname = "[K] Kobra";
		priority = 1;
		side = 1;
	};
	class kobra_o
	{
		displayname = "[K] Kobra";
		priority = 1;
		side = 0;
	};
	class kobra_i
	{
		displayname = "[K] Kobra";
		priority = 1;
		side = 2;
	};
	class kobra_c
	{
		displayname = "[K] Kobra";
		priority = 1;
		side = 3;
	};
};
class cfgeditorcategories
{
	class 442_siege_bat
	{
		displayname = "[K] 442nd Siege Battalion";
	};
	class 442_siege_bat_w
	{
		displayname = "[K] 442nd Siege Battalion (Woodland)";
	};
	class 442_siege_bat_d
	{
		displayname = "[K] 442nd Siege Battalion (Desert)";
	};
	class 442_siege_bat_j
	{
		displayname = "[K] 442nd Siege Battalion (Jungle)";
	};
	class 31_nexu
	{
		displayname = "[K] 31st Nexu Battalion";
	};
	class deserters_442_f
	{
		displayname = "[K] Deserters";
	};
	class 442_cis
	{
		displayname = "[K] CIS";
	};
	class black_legion
	{
		displayname = "[K] Black Legion";
	};
	class 44_sod
	{
		displayname = "[K] 44th Special Operations Division";
	};
	class kobra
	{
		displayname = "[K] Kobra";
	};
};
class CfgEditorSubcategories
{
	class swla_442_trooper
	{
		displayname = "P2 Trooper";
		side = 1;
	};
	class swla_442_commando
	{
		displayname = "Commando";
		side = 1;
	};
	class swla_442_trooper_custom
	{
		displayname = "Trooper (Custom)";
		side = 1;
	};
	class swla_442_p1_trooper
	{
		displayname = "P1 Trooper";
		side = 1;
	};
	class swla_442_p1_trooper_custom
	{
		displayname = "P1 Trooper (Custom)";
		side = 1;
	};
	class swla_442_helmets
	{
		displayname = "Helmets";
		side = 1;
	};
	class swla_442_uniforms
	{
		displayname = "Uniforms";
		side = 1;
	};
	class 442_ls_saber_tank
	{
		displayname = "Saber Tank";
		side = 1;
	};
	class 442_LAATS
	{
		displayname = "LAATS";
		side = 1;
	};
	class 442_optre_vehicles
	{
		displayname = "442nd OPTRE Vehicles";
		side = 1;
	};
	class 442_planes
	{
		displayname = "Aircraft";
		side = 1;
	};
	class 442_RTT
	{
		displayname = "RTT";
		side = 1;
	};
	class 442_boat
	{
		displayname = "Boat";
		side = 1;
	};
    class 442_argon
    {
        displayname = "Argon-class trucks";
		side = 1;
    };
	class 442_item
	{
		displayname = "Items";
		side = 1;
	};
	class 442_hallway
	{
		displayname = "Hallway";
		side = 1;
	};
	class 442_item_small
	{
		displayname = "Items (Small)";
		side = 1;
	};
	class 442_holograms
	{
		displayname = "Holograms";
		side = 1;
	};
	
	class swla_44_trooper
	{
		displayname = "P2 Trooper";
		side = 1;
	};
	
	class bl_optre_vehicles
	{
		displayname = "Black Legion OPTRE Vehicles";
		side = 1;
	};
	class swla_bl_trooper
	{
		displayname = "P2 Trooper";
		side = 1;
	};
	class swla_bl_trooper_custom
	{
		displayname = "Trooper (Custom)";
		side = 1;
	};
	class swla_bl_p1_trooper
	{
		displayname = "P1 Trooper";
		side = 1;
	};
	class swla_bl_p1_trooper_custom
	{
		displayname = "P1 Trooper (Custom)";
		side = 1;
	};
	class swla_bl_helmets
	{
		displayname = "Helmets";
		side = 1;
	};
	class bl_ls_saber_tank
	{
		displayname = "Saber Tank";
		side = 1;
	};
	class bl_LAATS
	{
		displayname = "LAATS";
		side = 1;
	};
	class bl_planes
	{
		displayname = "Aircraft";
		side = 1;
	};
	class bl_RTT
	{
		displayname = "RTT";
		side = 1;
	};
	class bl_boat
	{
		displayname = "Boat";
		side = 1;
	};
	class bl_argon
    {
        displayname = "Argon-class trucks";
		side = 1;
    };
	
	class swla_442_deserters_trooper_black
	{
		displayname = "Trooper (Black)";
		side = 2;
	};
	class swla_442_deserters_trooper_tan
	{
		displayname = "Trooper (Tan)";
		side = 2;
	};
	class swla_442_deserters_trooper_woodland
	{
		displayname = "Trooper (Woodland)";
		side = 2;
	};
	class swla_442_deserters_helmets
	{
		displayname = "[LS] Helmets";
		side = 2;
	};
	class 442_deserters_laats
	{
		displayname = "LAAT";
		side = 2;
	};
	class 442_deserters_ground_veh_woodland
	{
		displayname = "Ground Vehicles (Woodland)";
		side = 2;
	};
	class 442_deserters_ground_veh_tan
	{
		displayname = "Ground Vehicles (Tan)";
		side = 2;
	};
	class 442_deserters_ground_veh_black
	{
		displayname = "Ground Vehicles (Black)";
		side = 2;
	};
	class 442_deserters_ground_veh_jungle
	{
		displayname = "Ground Vehicles (Jungle)";
		side = 2;
	};
	class 442_deserters_air_veh_woodland
	{
		displayname = "Air Vehicles (Woodland)";
		side = 2;
	};
	class 442_deserters_air_veh_desert
	{
		displayname = "Air Vehicles (Desert)";
		side = 2;
	};
	class 442_deserters_air_veh_black
	{
		displayname = "Air Vehicles (Black)";
		side = 2;
	};
	class 442_deserters_air_veh_jungle
	{
		displayname = "Air Vehicles (Jungle)";
		side = 2;
	};
	
	class 442_rep_warthog
	{
		displayname = "Warthog";
		side = 1;
	};
	
	class 442_ships
	{
		displayname = "Static Ship";
	};
	class 442_ships_parts
	{
		displayname = "Static Ship Parts";
	};
	
	class 442_battledroid_inf_w
	{
		displayname = "Battledroid (Woodland)";
		side = 0;
	};
	class 442_battledroid_inf_d
	{
		displayname = "Battledroid (Desert)";
		side = 0;
	};
	class 442_cis_armor
	{
		displayname = "Armor";
		side = 0;
	};
};


class CfgMovesFatigueARC
{
	aimPrecisionSpeedCoef = 2;
	staminaCooldown = 5;
	staminaDuration = 250;
	staminaRestoration = 15;
	terrainDrainRun = -0.3;
	TerrainDrainSprint = -0.3;
	TerrainSpeedCoef = 1.2;
};
class CfgMovesFatigueARF
{
	aimPrecisionSpeedCoef = 3;
	staminaCooldown = 5;
	staminaDuration = 200;
	staminaRestoration = 10;
	terrainDrainRun = -0.1;
	TerrainDrainSprint = -0.1;
	TerrainSpeedCoef = 1.5;
};
class CfgMovesFatigueTrooper
{
	aimPrecisionSpeedCoef = 5;
	staminaCooldown = 8;
	staminaDuration = 120;
	staminaRestoration = 20;
	terrainDrainRun = -0.5;
	TerrainDrainSprint = -0.5;
	TerrainSpeedCoef = 0.9;
};
