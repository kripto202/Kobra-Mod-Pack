class CfgPatches
{
	class 442_weapons_e5
	{
		author="kripto202";
		requiredAddons[]={};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgMagazines
{
	class SWLW_mag_base;
	class SWLW_E5_Mag: SWLW_mag_base
	{
		author="SW Legion Studios";
		scope=2;
		displayName="E-5 energy cell (60rnd)";
		count=60;
		model="SWLW_droids\smgs\e5\e5_mag.p3d";
		picture="\SWLW_droids\smgs\e5\data\ui\e5_mag_ui.paa";
		ammo="442_ammo_45_red";
		initSpeed=920;
		maxLeadSpeed=27.7778;
		type=256;
		mass=8;
		descriptionShort="60rnd energy cell for E-5 carbine";
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class Rifle_Long_Base_F;
	class SWLW_rifle_base: Rifle_Long_Base_F
	{
		author="SW Legion Studios";
		scope=1;
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
		class GunParticles;
		class AnimationSources;
	};
	class 442_E5: SWLW_rifle_base
	{
		scope=2;
		model="\442_weapons\droids\e5\e5.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\SWLW_droids\smgs\e5\data\ui\e5_ui.paa";
		hiddenselections[] = 
		{
			"camo1",
			"sight"
		};
		hiddenselectionstextures[] = 
		{
			"\SWLW_droids\smgs\e5\data\e5_co.paa",
			"\442_weapons\droids\e5\data\training_red.paa"
		};
		magazines[]=
		{
			"SWLW_E5_Mag"
		};
		displayname="E-5 carbine";
		descriptionShort="";
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
			"\SWLW_droids\smgs\e5\sounds\e5_reload.wss",
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
					"\SWLW_droids\smgs\e5\sounds\e5",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\SWLW_droids\smgs\e5\sounds\e5",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"\SWLW_droids\smgs\e5\sounds\e5",
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
			reloadTime=0.2;
			dispersion=0.0049999999;
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
					"\SWLW_droids\smgs\e5\sounds\e5",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\SWLW_droids\smgs\e5\sounds\e5",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"\SWLW_droids\smgs\e5\sounds\e5",
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
			reloadTime=0.19;
			dispersion=0.0049999999;
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
		initspeed=820;
		inertia=2;
		dexterity=5;
		maxRecoilSway=0.015;
		swayDecaySpeed=5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class SWLW_GH_E5: Weapon_Base_F
	{
		author="SW Legion Studios";
		displayName="E-5 carbine";
		scope=2;
		class TransportWeapons
		{
			class SWLW_DC15s
			{
				count=1;
				weapon="SWLW_E5";
			};
		};
		class TransportMagazines
		{
			class SWLW_E5_Mag
			{
				count=1;
				magazine="SWLW_E5_Mag";
			};
		};
	};
};
