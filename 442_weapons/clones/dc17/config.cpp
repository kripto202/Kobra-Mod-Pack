class CfgPatches
{
	class 442_weapons_dc17
	{
		author="SW Legion Studios";
		requiredAddons[]={};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"442_dc17",
			"442_dc17_desert",
			"442_dc17_woodland",
			"442_dc17_snow",
		};
	};
};

class cfgmagazines
{
	class 442_mag_base;
	class 442_dc17_mag: 442_mag_base
	{
		scope=2;
		displayname="dc-17 (20rnd)";
		initspeed=430;
		ammo="442_ammo_9_blue";
		count=20;
		model="\SWLW_clones\machineguns\Z6\Z6_g_mag.p3d";
		picture="\SWLW_clones\machineguns\Z6\data\ui\Z6_g_mag_ui.paa";
		mass = 6;
	};
};
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UGL_F;
class cfgweapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class 442_DC17: Pistol_Base_F
	{
		author="kripto202";
		_generalMacro="hgun_P07_F";
		scope=2;
		model="SWLW_clones\pistols\dc17\DC17.p3d";
		picture="\SWLW_clones\pistols\dc17\data\ui\DC17_ui.paa";
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"\SWLW_clones\pistols\dc17\data\dc17_co.paa"
		};
		muzzles[]=
		{
			"this",
			"EGLM"
		};
		magazines[]=
		{
			"442_dc17_mag"
		};
		reloadAction="GestureReloadPistol";
		displayName="DC-17";
		hiddenSelections[]=
		{
			"camo"
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\dry_4_Five",
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
					"SWLW_clones\pistols\dc17\sounds\DC17_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"SWLW_clones\pistols\dc17\sounds\DC17_1",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"SWLW_clones\pistols\dc17\sounds\DC17_1",
					1,
					1,
					1800
				};
				begin4[]=
				{
					"SWLW_clones\pistols\dc17\sounds\DC17_1",
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
			reloadTime=0.2;
			dispersion=0.01015;
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
		class EGLM: UGL_F
		{
			displayName="Flare gun";
			descriptionShort="";
			useModelOptics="false";
			useExternalOptic="false";
			magazines[]=
			{
				"SWLW_flareRed_mag",
				"SWLW_smokeRed_mag"
			};
			magazineWell[]={};
			cameraDir="OP_look";
			discreteDistance[]={100};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye"
			};
			discreteDistanceInitIndex=1;
		};
		inertia=1.4;
		dexterity=1.7;
		initSpeed=300;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
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