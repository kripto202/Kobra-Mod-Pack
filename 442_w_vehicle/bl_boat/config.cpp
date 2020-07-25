class cfgPatches
{
	class bl_boat
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = 
		{
			"bl_boat_armed",
		};
		weapons[] = {};
	};
};
class cfgMagazines
{
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
	class 100rnd_boat_he_mag: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		author = "kripto202";
		displayname = "50mm HE";
		ammo = "SWLW_ammo_40mm_he";
		displayNameShort = "HE";
		count = 100;
	};
	class SWLW_mag_base;
	class 442_boat_Z6_mag: SWLW_mag_base
	{
		displayname="Z-6 Energy Cell (1000rnd)";
		initspeed=800;
		ammo="442_LAAT_Z6_ammo_green";
		displayNameShort = "";
		count=2000;
	};
};
class cfgWeapons
{
	class LMG_Minigun;
	class Mgun;
	class GMG_40mm;
	class 442_minigun: LMG_Minigun
	{
		displayname = "Plasma Minigun";
		scope = 1;
		magazines[] = {"442_boat_Z6_mag"};
		modes[]=
		{
			"FullAuto",
			"close",
			"short",
			"medium",
			"manual",
			"far_optic1",
			"far_optic2"
		};
		class FullAuto: MGun
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"SWLW_clones\machineguns\z6\sounds\Z6_1.wss",
					1,
					1,
					500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.0135;
			dispersion=0.0099999998;
			minRange=0;
			burst = 50;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
		};
		class close: FullAuto
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		class manual: FullAuto
		{
			dispersion=0.00073000003;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class far_optic1: close
		{
			burst=3;
			requiredOpticType=1;
			aiRateOfFire=5;
			aiRateOfFireDistance=650;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
		};
		recoil="empty";
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		drySound[]=
		{
			"SWLW_clones\machineguns\z6\sounds\Z6_empty.wss",
			2,
			1,
			20
		};
	};
	class 442_gmg: GMG_40mm
	{
		displayname = "Explosive Plasma Launcher";
		scope = 1;
		magazines[] = {"100rnd_boat_he_mag"};
	};
};
class cfgVehicles
{
	class Boat_F;
	class Boat_Armed_01_base_F: Boat_F
	{
		class Hitpoints;
		class Turrets;
	};
	class Boat_Armed_01_minigun_base_F: Boat_Armed_01_base_F
	{
		class Hitpoints: Hitpoints {};
		class Turrets: Turrets
		{
			class FrontTurret;
			class RearTurret;
		};
	};
	class bl_boat_armed: Boat_Armed_01_minigun_base_F
	{
		author = "kripto202";
		scope = 2;
		accuracy = 1.5;
		displayname = "Assault Boat";
		crew = "SWLA_BL_Trooper";
		faction = "black_legion";
		editorsubcategory = "bl_boat";
		side = 1;
		typicalCargo[] = {"SWLA_BL_Trooper"};
		hiddenselectionstextures[] = 
		{
			"\bl_boat\data\boat_hull.paa",
			"\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_co.paa",
			"\bl_boat\data\boat_crow.paa",
		};
		class Turrets: Turrets
		{
			class FrontTurret: FrontTurret
			{
				weapons[] = {"442_gmg"};
				Magazines[] = {"100rnd_boat_he_mag"};
			};
			class RearTurret: RearTurret
			{
				weapons[] = {"442_minigun"};
				Magazines[] = 
				{
					"442_boat_Z6_mag",
				};
			};
		};
	};
};