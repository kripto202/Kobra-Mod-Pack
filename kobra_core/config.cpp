class CfgPatches
{
	class kobra_core
	{
		author = "KOBRA Mod Team";
		requiredAddons[]=
		{
			"A3_Anims_F",
			"A3_Characters_F",
			"A3_UI_F",
			"A3_Armor_F_Beta",
			"A3_Armor_F_EPB_MBT_03",
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = 
		{
			"k_nvg",
			"k_nvg_ti",
			"k_ti"
		};
	};
};
/*class CfgFunctions 
{
	class kobra_Vehicle
	{
		class Operation 
		{
			file = "kobra\kobra_core\Scripts";
			
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
};*/

class cfgFactionClasses
{
	class 442_CIS
	{
		displayname = "[K] CIS";
		priority = 1;
		side = 0;
	};
	class 442_CIS_woodland: 442_CIS
	{
		displayname = "[K] CIS (Woodland)";
	};
	class 442_CIS_desert: 442_CIS
	{
		displayname = "[K] CIS (Desert)";
	};
	class 442_CIS_secruity: 442_CIS
	{
		displayname = "[K] CIS (Secruity)";
	};
	class 442_CIS_winter: 442_CIS
	{
		displayname = "[K] CIS (Winter)";
	};
	class black_legion
	{
		displayname = "[K] Black Legion";
		priority = 1;
		side = 1;
	};
	class 44_ab
	{
		displayname = "[K] 44th Attack Battalion";
		priority = 1;
		side = 1;
	};
	class 9_ac
	{
		displayname = "[K] 9th Assault Corps";
		priority = 1;
		side = 1;
	};
	class 212_fc
	{
		displayname = "[K] 212th Falcon Company";
		priority = 1;
		side = 1;
	};
	class 125_ac
	{
		displayname = "[K] 125th Assault Corps";
		priority = 1;
		side = 1;
	};
	class 198_ab
	{
		displayname = "[K] 198th Attack Battalion";
		priority = 1;
		side = 1;
	};
	class kobra_b
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
class CfgEditorCategories
{
	class kobra
	{
		displayname = "Kobra Props";
	};
};
class CfgEditorSubcategories
{
////////units////////
	class 442_trooper
	{
		displayname = "Trooper";
	};
	class 442_trooper_custom
	{
		displayname = "Trooper (Custom)";
	};
	class 442_battledroid_inf
	{
		displayname = "Battledroid";
	};
	class 442_battledroid_inf_woodland
	{
		displayname = "Battledroid (Woodland)";
	};
	class 442_battledroid_inf_desert
	{
		displayname = "Battledroid (Desert)";
	};
	class 442_battledroid_inf_winter
	{
		displayname = "Battledroid (Winter)";
	};
	class 442_battledroid_inf_geonosis
	{
		displayname = "Battledroid (Geonosis)";
	};
////////placeable helmets///////////
	class 442_helmets
	{
		displayname = "Helmets";
	};
	class 442_droid_head
	{
		displayname = "Droid Head";
	};
/////////weapons///////////
	class 442_weapon
	{
		displayname = "Weapons";
	};
////////vehicles///////////
	class 442_planes
	{
		displayname = "Aircraft";
	};
	class 442_boat
	{
		displayname = "Boat";
	};
    class 442_argon
    {
        displayname = "Argon-class trucks";
    };
	class 442_armor
	{
		displayname = "Armor";
	};
	class 442_g_vehicle
	{
		displayname = "Vehicle";
	};
//////////misc/////////
	class 442_item
	{
		displayname = "Items";
	};
	class 442_hallway
	{
		displayname = "Hallway";
	};
	class 442_item_small
	{
		displayname = "Items (Small)";
	};
	class 442_holograms
	{
		displayname = "Holograms";
	};
	class 442_supplies
	{
		displayname = "Supplies";
	};
	class 442_wrecks
	{
		displayname = "Wrecks";
	};
	class 442_props
	{
		displayname = "Photo props";
	};
	class 442_data_pad
	{
		displayname = "Data Pad";
	};
	class 442_barricade
	{
		displayname = "Barricade";
	};
	class 442_energy_shield
	{
		displayname = "Energy Sields";
	};
	class 442_ray_shield
	{
		displayname = "Ray Sields";
	};
	class 442_locker
	{
		Displayname = "Personal Lockers";
	};
	class 442_platform
	{
		displayname = "Platforms";
	};
	class 442_terminal
	{
		displayname = "Terminals";
	};
	class 442_platforms
	{
		displayname = "Platforms";
	};
	class 442_ray_fence
	{
		displayname = "Ray Fence";
	};
	class 442_fob
	{
		displayname = "Fob Parts";
	};
/////////star ships///////////
	class 442_ships
	{
		displayname = "Static Ship";
	};
	class 442_ships_parts
	{
		displayname = "Static Ship Parts";
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

class CfgVehicleIcons
{
	442_iconMan="kobra\kobra_core\icons\data\icon_rifleman.paa";
    442_iconManMedic="kobra\kobra_core\icons\data\icon_medic.paa";
    442_iconManEngineer="kobra\kobra_core\icons\data\icon_engineer.paa";
    442_iconManExplosive="kobra\kobra_core\icons\data\icon_engineer.paa";
    442_iconManRecon="kobra\kobra_core\icons\data\icon_marksman.paa";
	442_iconManAT="kobra\kobra_core\icons\data\icon_at.paa";
    442_iconManLeader="kobra\kobra_core\icons\data\icon_leader.paa";
    442_iconManMG="kobra\kobra_core\icons\data\icon_mg.paa";
    442_iconManOfficer="kobra\kobra_core\icons\data\icon_leader.paa";
	pictureHeal="\A3\ui_f\data\map\vehicleicons\pictureHeal_ca.paa";
	pictureRepair="\A3\ui_f\data\map\vehicleicons\pictureRepair_ca.paa";
};

class CfgRecoils
{
	class recoil_default;
	class 442_recoil: recoil_default
	{
		kickBack[]={0.02,0.039999999};
		muzzleinner[] = {0,0,0.1,0.1};
		muzzleOuter[]={0.30000001,0.6,0.30000001,0.2};
		permanent=0.1;
		temporary=0.0099999998;
	};
	class 442_scatter_recoil
	{
		muzzleOuter[]={0.30000001,1,0.30000001,0.2};
		muzzleInner[]={0,0,0.1,0.1};
		kickBack[]={0.029999999,0.059999999};
		permanent=0.2;
		temporary=0.30000001;
	};
};

class cfgweapons
{
	class Integrated_NVG_F;
	class k_nvg: Integrated_NVG_F
	{
		scope=1;
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		modelOptics="";
		ace_nightvision_border = "kobra\442_equipment\attachments\data\nvg_mask_sw_4096.paa";
	};
	class k_nvg_ti: Integrated_NVG_F
	{
		scope=1;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0};
		modelOptics="";
		ace_nightvision_border = "kobra\442_equipment\attachments\data\nvg_mask_sw_4096.paa";
	};
	class k_ti: Integrated_NVG_F
	{
		scope=1;
		visionMode[] = 
		{
			"Normal",
			"TI"
		};
		thermalMode[]={0};
		modelOptics="";
		ace_nightvision_border = "kobra\442_equipment\attachments\data\nvg_mask_sw_4096.paa";
	};
};