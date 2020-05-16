class CfgPatches
{
	class 442_weapons_e5c
	{
		author="kripto202";
		requiredAddons[]={};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"442_E5C"
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class SWLW_E5C_mag: CA_Magazine
	{
		author="SW Legion Studios";
		scope=2;
		tracersEvery=1;
		type=16;
		initSpeed=774;
		picture="\SWLW_droids\machineguns\e5c\data\ui\e5c_mag_ui.paa";
		displayName="E-5C energy cell (120rnd)";
		ammo="442_ammo_65_red";
		count=120;
		descriptionShort="120rnd energy cell for E-5C Blaster Repeater";
		model="SWLW_droids\machineguns\e5c\e5c_mag.p3d";
		mass = 25;
	};
};
class Mode_FullAuto;
class Mode_Burst;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class UGL_F;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
		scope=1;
	};
	class 442_E5C: Rifle_Base_F
	{
		author="SW Legion Studios";
		picture="\SWLW_droids\machineguns\e5c\data\ui\e5c_ui.paa";
		displayName="E-5C Blaster Repeater";
		model="\442_weapons\droids\e5c\e5c.p3d";
		scope=2;
		hiddenselections[] = 
		{
			"camo1",
			"sight"
		};
		hiddenselectionstextures[] = 
		{
			"SWLW_droids\machineguns\e5c\data\e5c_co.paa",
			"\442_weapons\droids\e5c\data\training_red.paa"
		};
		magazines[]=
		{
			"SWLW_E5C_mag"
		};
		ace_overheating_allowSwapBarrel=1;
		muzzles[]=
		{
			"this"
		};
		reloadAction="ReloadMagazine";
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0099999998;
		swayDecaySpeed=0.2;
		inertia=3;
		initSpeed=-1;
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
			"\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"
		};
		dexterity=3;
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
		modes[]=
		{
			"FullAuto"
		};
		class FullAuto: Mode_FullAuto
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
					"\SWLW_droids\smgs\e5\sounds\e5",
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
			reloadTime=0.15000001;
			dispersion=0.0070000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
		};
		recoil="SWLW_Z6_recoil";
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
			"\SWLW_droids\smgs\e5\sounds\e5_reload",
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
};
class CfgVehicles
{
	class Weapon_Base_F;
	class SWLW_GH_E5C: Weapon_Base_F
	{
		author="SW Legion Studios";
		displayName="E-5C Blaster Repeater";
		scope=2;
		class TransportWeapons
		{
			class SWLW_E5C
			{
				count=1;
				weapon="SWLW_E5C";
			};
		};
		class TransportMagazines
		{
			class SWLW_E5C_mag
			{
				count=1;
				magazine="SWLW_E5C_mag";
			};
		};
	};
};