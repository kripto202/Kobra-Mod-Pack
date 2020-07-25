class CfgPatches
{
	class 442_dc15x
	{
		author="SW Legion Studios";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
		};
		requiredVersion=0.1;
		units[]=
		{
			"SWLW_GH_DC15X"
		};
		weapons[]=
		{
			"SWLW_DC15X",
			"SWLW_DC15X_wooden"
		};
	};
};
class CfgAmmo
{
	class SWLW_ammo_40mm_at;
	class 442_dc15y_oc_ammo: SWLW_ammo_40mm_at
	{
		hit = 200;
	};
};
class CfgMagazines
{
	class SWLW_mag_base;
	class 442_DC15X_Mag: SWLW_mag_base
	{
		scope=2;
		displayname="DC-15X plasma cell (15rnd)";
		initspeed=910;
		picture="\SWLW_clones\rifles\DC15a\data\ui\DC15a_mag_ui.paa";
		ammo="SWLW_ammo_sniper_blue";
		count=15;
		model="SWLW_clones\rifles\DC15a\DC15a_mag.p3d";
	};
	class 442_DC15Y_Mag: SWLW_mag_base
	{
		scope=2;
		displayname="DC-15Y plasma cell (5rnd)";
		initspeed=880;
		picture="\SWLW_clones\rifles\DC15a\data\ui\DC15a_mag_ui.paa";
		ammo="SWLW_ammo_heavy_sniper_blue";
		count=5;
		model="SWLW_clones\rifles\DC15a\DC15a_mag.p3d";
	};
	class 442_dc15y_oc_mag: SWLW_mag_base
	{
		scope = 2;
		displayname = "DC-15Y Over Charged Plasma Cell";
		ammo = "442_dc15y_oc_ammo";
		typicalSpeed=1550;
		count = 1;
		model="SWLW_clones\rifles\DC15a\DC15a_mag.p3d";
		mass = 15;
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
	class 442_rifle_base: Rifle_Long_Base_F
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
	class 442_DC15X: 442_rifle_base
	{
		scope=2;
		model="SWLW_clones\rifles\dc15x\DC15X.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\SWLW_clones\rifles\dc15x\anims\dc15x_handanim.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\SWLW_clones\rifles\dc15x\data\ui\DC15X_ui.paa";
		magazines[]=
		{
			"442_DC15X_Mag"
		};
		displayname="DC-15X";
		descriptionShort="";
		selectionFireAnim="zasleh";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLW_clones\rifles\dc15x\data\DC15X_co.paa"
		};
		maxZeroing=1200;
		opticsZoomMin=0.0099999998;
		opticsZoomMax=0.041999999;
		opticsZoomInit=0.041999999;
		discretefov[]={0.041999999,0.0099999998};
		discreteInitIndex=0;
		distanceZoomMin=100;
		distanceZoomMax=1200;
		discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
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
			"SWLW_clones\pistols\dc17\sounds\DC17_reload.wss",
			0.56234133,
			1,
			30
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
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
					"SWLW_clones\smgs\dc15s\sounds\DC15S_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_2",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_3",
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
			dispersion=0.00057999999;
			initSpeed=910;
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
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
		maxRecoilSway=0.0125;
		recoil="SWLW_recoil";
		swayDecaySpeed=1.25;
		dexterity=1.7;
		initSpeed = -1;
		inertia=1.4;
		modelOptics="\SWLW_clones\rifles\dc15x\DC15X_optic.p3d";
		class OpticModes
		{
			class Scope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.0099999998;
				opticsZoomMax=0.041999999;
				opticsZoomInit=0.041999999;
				discretefov[]={0.041999999,0.0099999998};
				discreteInitIndex=0;
				distanceZoomMin=100;
				distanceZoomMax=1200;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex=0;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				opticsFlare="true";
				cameraDir="";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=130;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
	};
	class 442_DC15X_wooden: 442_DC15X
	{
		displayName="DC-15X (wooden)";
		hiddenSelectionsTextures[]=
		{
			"\SWLW_clones\rifles\dc15x\data\DC15X_wooden_co.paa"
		};
	};
	class 442_DC15Y: 442_DC15X
	{
		displayname="DC-15Y";
		initSpeed = -1;
		distanceZoomMin=100;
		distanceZoomMax=2200;
		magazines[]=
		{
			"442_DC15Y_Mag",
			"442_dc15y_oc_mag"
		};
		maxZeroing = 2200;
		discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200};
		class OpticModes: OpticModes
		{
			class Scope: Scope
			{
				distanceZoomMin=100;
				distanceZoomMax=2200;
				maxZeroing = 2200;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200};
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class 442_GH_DC15X: Weapon_Base_F
	{
		author="kripto202";
		displayName="DC-15X sniper rifle";
		scope=2;
		class TransportWeapons
		{
			class 442_DC15X
			{
				count=1;
				weapon="442_DC15X";
			};
		};
		class TransportMagazines
		{
			class 442_DC15X_Mag
			{
				count=1;
				magazine="442_DC15X_Mag";
			};
		};
	};
	class 442_GH_DC15Y: Weapon_Base_F
	{
		author="kripto202";
		displayName="DC-15Y sniper rifle";
		scope=2;
		class TransportWeapons
		{
			class SWLW_DC15X
			{
				count=1;
				weapon="442_DC15Y";
			};
		};
		class TransportMagazines
		{
			class SWLW_DC15X_Mag
			{
				count=1;
				magazine="442_DC15Y_Mag";
			};
		};
	};
};
