class cfgpatches
{
	class 442_weapons_dc15s
	{
		author = "kripto202";
		units[] = {};
		weapons[] = 
		{
			"442_dc15s",
			"442_dc15s_desert",
			"442_dc15s_woodland",
			"442_dc15s_snow",
			"442_dc15s_training_blue",
			"442_dc15s_training_red",
			"442_dc15s_training_green",
			"442_dc15s_training_yellow",
			"442_dc15s_ab",
			"442_dc15s_ab_desert",
			"442_dc15s_ab_woodland",
			"442_dc15s_ab_snow",
		};
		requiredversion = 0.1;
		requiredAddons[] = {};
	};
};

class cfgmagazines
{
	class 442_mag_base;
	class 442_dc15s_mag: 442_mag_base
	{
		scope = 2;
		displayname = "DC15S plasma cell (30rnd)";
		initspeed = 909;
		ammo = "442_ammo_556_blue";
		count = 30;
		model = "SWLW_clones\smgs\DC15s\DC15s_mag.p3d";
		mass = 8;
		picture = "\SWLW_clones\smgs\dc15s\data\ui\dc15s_mag_ui.paa";
	};
	class 442_dc15s_ext_mag: 442_mag_base
	{
		scope = 2;
		displayname = "DC15S plasma cell (60rnd)";
		initspeed = 909;
		ammo = "442_ammo_556_blue";
		count = 60;
		model = "SWLW_clones\smgs\DC15s\DC15s_mag.p3d";
		mass = 16;
		picture = "\SWLW_clones\smgs\dc15s\data\ui\dc15s_mag_ui.paa";
	};
	
	class 442_dc15s_mag_blue: 442_dc15s_mag
	{
		displayname = "DC15S Training Cell (30rnd)";
		ammo = "442_ammo_556_blue";
	};
	class 442_dc15s_mag_red: 442_dc15s_mag_blue
	{
		ammo = "442_ammo_556_red";
	};
	class 442_dc15s_mag_green: 442_dc15s_mag_blue
	{
		ammo = "442_ammo_556_green";
	};
	class 442_dc15s_mag_yellow: 442_dc15s_mag_blue
	{
		ammo = "442_ammo_556_yellow";
	};
	
	class 442_dc15s_ab_mag: 442_mag_base
	{
		scope = 2;
		displayname = "DC15S AB plasma cell (45rnd)";
		initspeed = 254;
		ammo = "442_ammo_45_blue";
		count = 45;
		model = "SWLW_clones\smgs\DC15s\DC15s_mag.p3d";
		mass = 6;
		picture = "\SWLW_clones\smgs\dc15s\data\ui\dc15s_mag_ui.paa";
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;

class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class Rifle_Long_Base_F;
	class UGL_F;
	class Rifle_Base_F;
	class 442_rifle_base: Rifle_Long_Base_F
	{
		author="kripto202";
		scope=1;
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
		class GunParticles;
		class AnimationSources;
	};
	class 442_dc15s: 442_rifle_base
	{
		scope = 2;
		displayname = "DC-15S Carbine";
		scope=2;
		model="442_weapons\clones\dc15s\dc15s.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"sights"
		};
		hiddenselectionstextures[] = 
		{
			"\SWLW_clones\smgs\dc15s\data\dc15s_co.paa",
			"\442_weapons\clones\dc15a\data\optic\training_blue.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\SWLW_clones\smgs\dc15s\data\ui\DC15s_ui.paa";
		magazines[]=
		{
			"442_dc15s_mag",
			"442_dc15s_ext_mag"
		};
		displayname="DC-15s carbine";
		descriptionShort="Clone trooper carbine";
		selectionFireAnim="zasleh";
		class Library
		{
			libTextDesc="";
		};
		drySound[]=
		{
			"",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\SWLW_clones\pistols\dc17\sounds\DC17_reload.wss",
			0.56234133,
			1,
			30
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_2",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_3",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.1;
			dispersion=0.0008;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_2",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_3",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.1;
			dispersion=0.0008;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
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
		inertia=1;
		dexterity=1.7;
		initSpeed=-1;
		recoil="SWLW_recoil";
		maxRecoilSway=0.015;
		swayDecaySpeed=1.25;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
	};
	class 442_dc15s_training_blue: 442_dc15s
	{
		displayname = "DC-15S Training Carbine (Blue)";
		magazines[]=
		{
			"442_dc15s_mag_blue"
		};
		hiddenselectionstextures[] = 
		{
			"\442_weapons\clones\dc15s\data\kobra_dc15s_blue.paa",
			"\442_weapons\clones\dc15a\data\optic\training_blue.paa"
		};
	};
	class 442_dc15s_training_red: 442_dc15s
	{
		displayname = "DC-15S Training Carbine (Red)";
		magazines[]=
		{
			"442_dc15s_mag_red"
		};
		hiddenselectionstextures[] = 
		{
			"\442_weapons\clones\dc15s\data\kobra_dc15s_red.paa",
			"\442_weapons\clones\dc15a\data\optic\training_red.paa"
		};
	};
	class 442_dc15s_training_green: 442_dc15s
	{
		displayname = "DC-15S Training Carbine (Green)";
		magazines[]=
		{
			"442_dc15s_mag_green"
		};
		hiddenselectionstextures[] = 
		{
			"\442_weapons\clones\dc15s\data\kobra_dc15s_green.paa",
			"\442_weapons\clones\dc15a\data\optic\training_green.paa"
		};
	};
	class 442_dc15s_training_yellow: 442_dc15s
	{
		displayname = "DC-15S Training Carbine (Yellow)";
		magazines[]=
		{
			"442_dc15s_mag_yellow"
		};
		hiddenselectionstextures[] = 
		{
			"\442_weapons\clones\dc15s\data\kobra_dc15s_yellow.paa",
			"\442_weapons\clones\dc15a\data\optic\training_yellow.paa"
		};
	};
	
	class 442_dc15s_ab: 442_dc15s
	{
		displayname = "DC-15AB";
		inertia = 1.5;
		reloadTime=0.06;
		hiddenselections[] = 
		{
			"camo1",
			"sight"
		};
		hiddenselectionstextures[] = 
		{
			"\SWLW_clones\smgs\dc15s\data\dc15s_co.paa",
			"\442_weapons\clones\dc15a\data\optic\training_red.paa"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_2",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_3",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.06;
			dispersion=0.0008;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_2",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_3",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.06;
			dispersion=0.0008;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
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
		magazines[] = 
		{
			"442_dc15s_ab_mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=50;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
	};
};