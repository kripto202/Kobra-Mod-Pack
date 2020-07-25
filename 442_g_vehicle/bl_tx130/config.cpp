class CfgPatches
{
	class SWLG_clones_tanks_tx130
	{
		autor="SW Legion Studios";
		requiredAddons[]=
		{
			"A3_Armor_F_EPB_MBT_03"
		};
		requiredVersion=1;
		weapons[]={};
		units[]=
		{
			"bl_tanks_tx130"
		};
	};
};
class CfgVehicleClasses
{
	class SWLG_clones_tanks
	{
		displayName="Armored vehicles";
	};
};
class CfgEditorSubcategories
{
	class SWLG_GAR_tanks
	{
		displayName="Tanks";
		side=1;
	};
};
class CfgAmmo
{
	class Cannon_30mm_HE_Plane_CAS_02_F;
	class 442_50mm_he: Cannon_30mm_HE_Plane_CAS_02_F
	{
		model="SWLW_main\Effects\laser_blue.p3d";
		effectfly="SWLW_plasma_blue";
		flaresize=3;
		tracerscale=3;
		hit = 150;
		indirectHit = 10;
		indirectHitRange = 4;
		caliber = 6;
		explosive = 0.65;
		tracerStartTime = 0;
		tracerEndTime = 10;
		allowAgainstInfantry = 1;
	};
	class 442_50mm_apfsds: Cannon_30mm_HE_Plane_CAS_02_F
	{
		model="SWLW_main\Effects\laser_blue.p3d";
		effectfly="SWLW_plasma_blue";
		flaresize=3;
		tracerscale=3;
		hit = 240;
		indirectHit = 5;
		indirectHitRange = 0.2;
		caliber = 10;
		explosive = 0;
		tracerStartTime = 0;
		tracerEndTime = 10;
		allowAgainstInfantry = 1;
	};
};
class CfgMagazines
{
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
	class 2Rnd_GAT_missiles_O;
	class 200rnd_saber_he_mag: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		author = "kripto202";
		displayname = "50mm HE";
		displaynameMagazine = "50mm Cannons HE";
		shortNameMagazine = "50mm Cannons HE";
		ammo = "442_50mm_he";
		count = 200;
	};
	class 200rnd_saber_apfsds_mag: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		author = "kripto202";
		displayname = "50mm APFSDS";
		displaynameMagazine = "50mm Cannons APFSDS";
		shortNameMagazine = "50mm Cannons APFSDS";
		ammo = "442_50mm_apfsds";
		count = 200;
	};
	class 4rnd_saber_tow_mag: 2Rnd_GAT_missiles_O
	{
		author = "kripto202";
		displayname = "TOW";
		count = 4;
	};
};
class CfgWeapons
{
	class MGun;
	class gatling_20mm;
	class missiles_titan;
	class 442_saber_gun: gatling_20mm
	{
		displayname = "50mm Cannons";
		displaynameMagazine = "50mm Cannons";
		shortNameMagazine = "50mm Cannons";
		scope = 1;
		displayNameShort = "50mm";
		magazines[] = 
		{
			"200rnd_saber_he_mag",
			"200rnd_saber_apfsds_mag",
			"200rnd_saber_he_mag_green",
			"200rnd_saber_apfsds_mag_green"
		};
		modes[] = 
		{
			"FullAuto",
			"close",
			"short",
			"medium",
		};
		reloadtime = 0.1375;
		magazinereloadtime = 10;
		magazineReloadSwitchPhase = 5;
		class FullAuto: MGun
		{
			reloadTime = 0.1375;
			dispersion = 0;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.05;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = .1375;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = .1375;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 10;
			aiRateOfFire = .1375;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
	};
	class 442_saber_tow: missiles_titan
	{
		scope = 1;
		displayname = "TOW Launchers";
		displaynameshort = "TOW";
		magazines[] = 
		{
			"4rnd_saber_tow_mag"
		};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_AAA_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class rep_tx130;
	class bl_tanks_tx130: rep_tx130
	{
		scope = 2;
		scopecurator = 2;
		scopearsneal = 2;
		displayName="TX-130 Hover Tank";
		faction="black_legion";
		editorSubcategory="bl_ls_saber_tank";
		crew = "SWLA_BL_Trooper";
		typicalCargo[]=
		{
			"SWLA_BL_Trooper"
		};
		hiddenSelections[]=
		{
			"_hull",
			"_rockets",
			"_tracks",
			"_turrets"
		};
		hiddenSelectionsTextures[]=
		{
			"bl_tx130\data\bl_body.paa",
			"SWLG_clones_tanks\tx130\data\tx130_rocket_co.paa",
			"bl_tx130\data\bl_track.paa",
			"bl_tx130\data\bl_turret.paa"
		};
	};
};
