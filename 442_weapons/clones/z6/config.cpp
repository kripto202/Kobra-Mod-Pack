class CfgPatches
{
	class 442_weapons_z6
	{
		author="SW Legion Studios";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"SWLW_main",
			"SWLW_clones",
			"SWLW_clones_mg"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"442_Z6",
			"442_Z6_desert",
			"442_Z6_woodland",
			"442_Z6_snow",
			"442_e6z",
			
		};
	};
};
class CfgMagazines
{
	class 442_mag_base;
	class 442_z6_mag: 442_mag_base
	{
		scope=2;
		displayname="Z-6 energy cell (500rnd)";
		initspeed=909;
		picture="\SWLW_clones\machineguns\Z6\data\ui\Z6_mag_ui.paa";
		ammo="442_ammo_556_blue";
		count=500;
		model="SWLW_clones\machineguns\Z6\Z6_mag.p3d";
	};
	class 442_e6z_mag: 442_z6_mag
	{
		displayname="E-6Z energy cell (500rnd)";
		initspeed=909;
		picture="\SWLW_clones\machineguns\Z6\data\ui\Z6_mag_ui.paa";
		ammo="442_ammo_556_red";
		count=500;
		model="SWLW_clones\machineguns\Z6\Z6_mag.p3d";
	};
	class 442_mag_base;
	class 442_mag_40mm_3rnd: 442_mag_base
	{
		count = 3;
		scope = 2;
		initspeed = 80;
		model="SWLW_clones\machineguns\Z6\Z6_mag.p3d";
		displayname = "Explosive Plasma Cell (3rnd)";
		ammo = "442_ammo_40mm_blue";
	};
	class 442_mag_40mm_3rnd_red: 442_mag_40mm_3rnd
	{
		ammo = "442_ammo_40mm_red";
	};
};
class Mode_FullAuto;
class Mode_SemiAuto;
class Mode_Burst;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class UGL_F;
class CfgRecoils
{
	class recoil_default;
	class 442_Z6_recoil: recoil_default
	{
		kickBack[]={0.02,0.03,0.01,0.015,0.025};
		muzzleOuter[]={0.30000001,1,0.30000001,0.2};
		permanent=0.029999999;
		temporary=0.02;
	};
};
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
		scope=1;
	};
	class 442_Z6_base: Rifle_Base_F
	{
		ace_overheating_mrbs=100000;
		ace_overheating_slowdownFactor=1e-006;
		ace_overheating_allowSwapBarrel=1;
		ace_overheating_dispersion=0;
		scope=1;
		author="SW Legion Studios";
		displayName="Z6 Rotary Blaster";
		model="SWLW_clones\machineguns\z6\Z6.p3d";
		picture="\SWLW_clones\machineguns\z6\data\ui\Z6_ui.paa";
		magazines[]=
		{
			"442_z6_mag"
		};
		muzzles[]=
		{
			"this"
		};
		reloadAction="ReloadMagazine";
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0099999998;
		swayDecaySpeed=0.7;
		inertia=2.5;
		initSpeed=909;
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\SWLW_clones\machineguns\z6\anims\Z6_handanim.rtm"
		};
		dexterity=1;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		flash="gunfire";
		flashSize=3;
		modes[] = 
		{
			"FullAutoFast", 
			"FullAutoSlow", 
			"close", 
			"short", 
			"medium", 
			"far_optic1", 
			"far_optic2"
		};
		class FullAutoSlow: Mode_FullAuto
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
			reloadTime=0.1;
			dispersion=0.0099999998;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			showToPlayer = 1;
		};
		class FullAutoFast: FullAutoSlow
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
			reloadTime=0.050000001;
			texturetype = "fastAuto";
			dispersion=0.0099999998;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
		};
		class close: FullAutoFast
		{
			showToPlayer=0;
			aiRateOfFire=0.05;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
			showToPlayer = 0;
		};
		class short: close
		{
			aiRateOfFire=0.05;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: FullAutoSlow
		{
			burst = 20;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
			showToPlayer = 0;
		};
		class far_optic1: medium
		{
			burst=10;
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
			burst=5;
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
		recoil="442_Z6_recoil";
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		drySound[]=
		{
			"SWLW_clones\machineguns\z6\sounds\Z6_empty.wss",
			2,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"SWLW_main\Carbines\DC15S\sounds\DC15s_reload.wss",
			1,
			1,
			30
		};
		reloadSound[]=
		{
			"",
			1,
			1
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=176;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
		};
	};
	class 442_Z6: 442_Z6_base
	{
		scope=2;
		scopearsneal=2;
		initspeed=909;
		hiddenselections[] =
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"\SWLW_clones\machineguns\z6\data\z6_co.paa"
		};
		muzzles[]=
		{
			"this",
			"Explosive"
		};
		class Explosive: 442_Z6_base
		{
			author="SW Legion Studios";
			displayName="HE mode";
			initspeed=80;
			magazines[]=
			{
				"442_mag_40mm_3rnd"
			};
			class Single: Mode_SemiAuto
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
			reloadTime=1;
			dispersion=0.0099999998;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
		};
			modes[]=
			{
				"Single"
			};
		};
	};
	class 442_e6z: 442_Z6
	{
		displayname = "E6Z Rotary Blaster";
		hiddenselectionstextures[] = 
		{
			"442_weapons\clones\z6\data\kobra_e6z.paa"
		};
		magazines[]=
		{
			"442_e6z_mag"
		};
		class explosive: explosive
		{
			magazines[] = 
			{
				"442_mag_40mm_3rnd_red"
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class SWLW_GH_Z6: Weapon_Base_F
	{
		author="SW Legion Studios";
		displayName="Z6 Rotary Blaster";
		scope=2;
		class TransportWeapons
		{
			class SWLW_Z6
			{
				count=1;
				weapon="SWLW_Z6";
			};
		};
		class TransportMagazines
		{
			class SWLW_Z6_mag
			{
				count=1;
				magazine="SWLW_Z6_mag";
			};
			class SWLW_Z6_g_mag
			{
				count=1;
				magazine="SWLW_Z6_g_mag";
			};
		};
	};
};