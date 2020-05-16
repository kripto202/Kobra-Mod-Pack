class cfgpatches
{
	class 442_weapons_dc15sa
	{
		author = "kripto202";
		units[] = {};
		weapons[] = 
		{
			"442_DC15SA"
		};
		requiredaddons[] = {};
	};
};

class cfgmagazines
{
	class SWLW_mag_base;
	class 442_DC15SA_Mag: SWLW_mag_base
	{
		author="kripto202";
		scope=2;
		tracersEvery=1;
		initSpeed=300;
		picture="\SWLW_clones_spec\data\ui\DC15SA_mag_ui_ca.paa";
		displayName="DC-15SA magazine (20rnd)";
		ammo="442_ammo_127x33_blue";
		initspeed = 350;
		count=7;
		descriptionShort="";
		maxLeadSpeed=27.7778;
		type=256;
		mass=8;
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;

class cfgweapons
{
	class ItemCore;
	class pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class 442_DC15SA: Pistol_Base_F
	{
		author="kripto202";
		scope=2;
		model="\SWLW_clones_spec\DC15SA.p3d";
		picture="\SWLW_clones_spec\data\ui\DC15SA_ui.paa";
		muzzles[]=
		{
			"this"
		};
		magazines[]=
		{
			"442_DC15SA_Mag"
		};
		magazineReloadSwitchPhase=0.40000001;
		reloadAction="GestureReloadPistol";
		displayName="DC-15SA";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLW_clones_spec\data\DC15SA_co.paa"
		};
		modes[]=
		{
			"single"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		reloadMagazineSound[]=
		{
			"SWLW_clones_spec\sounds\DC15SA_reload.wss",
			0.56234133,
			1,
			30
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
					"SWLW_clones_spec\sounds\DC15SA_fire.wss",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"SWLW_clones_spec\sounds\DC15SA_fire.wss",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"SWLW_clones_spec\sounds\DC15SA_fire.wss",
					1,
					1,
					1800
				};
				begin4[]=
				{
					"SWLW_clones_spec\sounds\DC15SA_fire.wss",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.1;
			dispersion=0.0099999998;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		initspeed=-1;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=1.4;
		dexterity=1.7;
		recoil="recoil_pistol_4five";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=24;
			holsterScale=0.89999998;
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