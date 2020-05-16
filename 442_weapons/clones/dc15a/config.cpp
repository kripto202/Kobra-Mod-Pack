class cfgpatches
{
	class 442_weapons_dc15a
	{
		author = "kripto202";
		units[]={};
		weapons[]=
		{
			"442_DC15A",
			"442_dc15a_training_blue",
			"442_dc15a_training_red",
			"442_dc15a_training_green",
			"442_dc15a_training_yellow",
			"442_DC15A_ugl",
			"442_DC15A_ugl_kamui",
			"442_DC15A_MC",
			"442_DC15A_MC_dukas",
			"442_dc15a_marksman",
			"442_dc15a_lite",
			"442_dc15a_mg",
		};
		requiredversion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgMagazines
{
	class 442_mag_base;
	class 3Rnd_HE_Grenade_shell;
	class ACE_HuntIR_M203;
	class UGL_FlareWhite_F;
	class UGL_FlareRed_F;
	class UGL_FlareGreen_F;
	class 1Rnd_Smoke_Grenade_shell;
	class 1Rnd_SmokeRed_Grenade_shell;
	class 1Rnd_SmokePurple_Grenade_shell;
	class 1Rnd_SmokeBlue_Grenade_shell;
	class 1Rnd_SmokeGreen_Grenade_shell;
	class 442_DC15A_Mag: 442_mag_base
	{
		scope=2;
		displayname="DC15A plasma cell (30rnd)";
		initspeed=774;
		picture="\SWLW_clones\rifles\DC15a\data\ui\DC15a_mag_ui.paa";
		ammo="442_ammo_65_blue";
		count=30;
		model="SWLW_clones\rifles\DC15a\DC15a_mag.p3d";
		mass = 10;
	};
	class 442_dc15a_mag_blue: 442_DC15A_Mag
	{
		displayname = "DC15A Training Cell (30rnd)";
		ammo = "442_ammo_65_blue";
	};
	class 442_dc15a_mag_red: 442_dc15a_mag_blue
	{
		ammo = "442_ammo_65_red";
	};
	class 442_dc15a_mag_green: 442_dc15a_mag_blue
	{
		ammo = "442_ammo_65_green";
	};
	class 442_dc15a_mag_yellow: 442_dc15a_mag_blue
	{
		ammo = "442_ammo_65_yellow";
	};
	class 442_dc15a_marksman_mag: 442_mag_base
	{
		scope = 2;
		displayname = "DC15A Marksman plasma cell (20rnd)";
		picture="SWLW_clones\rifles\DC15a\data\ui\DC15a_mag_ui.paa";
		initspeed = 827;
		count = 20;
		model="SWLW_clones\rifles\DC15a\DC15a_mag.p3d";
		ammo = "442_ammo_762_blue";
		mass = 12;
		picture = "\SWLW_clones\rifles\dc15a\data\ui\dc15a_mag_ui.paa";
	};
	class 442_dc15a_lite_mag: 442_mag_base
	{
		scope = 2;
		displayname = "DC15A Lite plasma cell (30rnd)";
		initspeed = 909;
		count = 30;
		model="SWLW_clones\rifles\DC15a\DC15a_mag.p3d";
		ammo = "442_ammo_556_blue";
		mass = 8;
		picture = "\SWLW_clones\rifles\dc15a\data\ui\dc15a_mag_ui.paa";
	};
	class 442_dc15a_mg_mag: 442_mag_base
	{
		scope = 2;
		displayname = "DC15A MG plasma cell (100rnd)";
		initspeed = 774;
		ammo="442_ammo_65_blue";
		count=100;
		model="SWLW_clones\rifles\DC15a\DC15a_mag.p3d";
		mass = 25;
		picture = "\SWLW_clones\rifles\dc15a\data\ui\dc15a_mag_ui.paa";
	};
	class 442_DC15A_UGL_Mag: 442_mag_base
	{
		scope = 2;
		displayname = "Explosive Plasma Cell";
		initspeed = 80;
		ammo = "442_ammo_40mm_blue";
		count = 1;
		model = "\SWLW_clones\rifles\dc15a\dc15a_g_mag.p3d";
		picture = "\SWLW_clones\rifles\dc15a\data\ui\dc15a_mag_ui.paa";
		mass = 4;
	};
	class 442_dc15a_3rnd_ugl_mag: 442_mag_base
	{
		scope = 2;
		displayname = "DC-15A 3rnd 40mm HE Grenade";
		initspeed = 80;
		ammo = "G_40mm_HE";
		count = 3;
		mass = 12;
		modelSpecial = "\a3\Weapons_F\MagazineProxies\mag_40x36_HE_1rnd.p3d";
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
	};
	class 442_DC15A_UGL_huntir_Mag: ACE_HuntIR_M203
	{
		displayname="DC-15A HuntIR grenade";
		count = 1;
		model="SWLW_clones\rifles\DC15a\DC15a_ugl_mag.p3d";
	};
	class 442_DC15A_UGL_flare_white_Mag: UGL_FlareWhite_F
	{
		displayname="DC-15A flare white";
		count=1;
		model="SWLW_clones\rifles\DC15a\DC15a_ugl_mag.p3d";
	};
	class 442_DC15A_UGL_flare_red_Mag: UGL_FlareRed_F
	{
		displayname="DC-15A droid attack signal flare";
		count=1;
		model="SWLW_clones\rifles\DC15a\DC15a_ugl_mag.p3d";
	};
	class 442_DC15A_UGL_flare_green_Mag: UGL_FlareGreen_F
	{
		displayname="DC-15A flare green";
		count=1;
		model="SWLW_clones\rifles\DC15a\DC15a_ugl_mag.p3d";
	};
	class 442_DC15A_UGL_smoke_white_Mag: 1Rnd_Smoke_Grenade_shell
	{
		displayname="DC-15A smoke white";
		count=1;
		model="SWLW_clones\rifles\DC15a\DC15a_ugl_mag.p3d";
	};
	class 442_DC15A_UGL_smoke_red_Mag: 1Rnd_SmokeRed_Grenade_shell
	{
		displayname="DC-15A smoke red";
		count=1;
		model="SWLW_clones\rifles\DC15a\DC15a_ugl_mag.p3d";
	};
	class 442_DC15A_UGL_smoke_purple_Mag: 1Rnd_SmokePurple_Grenade_shell
	{
		displayname="DC-15A smoke white";
		count=1;
		model="SWLW_clones\rifles\DC15a\DC15a_ugl_mag.p3d";
	};
	class 442_DC15A_UGL_smoke_blue_Mag: 1Rnd_SmokeBlue_Grenade_shell
	{
		displayname="DC-15A smoke blue";
		count=1;
		model="SWLW_clones\rifles\DC15a\DC15a_ugl_mag.p3d";
	};
	class 442_DC15A_UGL_smoke_green_Mag: 1Rnd_SmokeGreen_Grenade_shell
	{
		displayname="DC-15A smoke green";
		count=1;
		model="SWLW_clones\rifles\DC15a\DC15a_ugl_mag.p3d";
	};
	class 442_dc15a_shotgun_ugl_mag: 442_mag_base
	{
		scope = 2;
		displayname = "Scatter Plasma Cell (10rnd)";
		initspeed = 400;
		picture="\SWLW_clones\rifles\DC15a\data\ui\DC15a_mag_ui.paa";
		ammo="442_ammo_shotgun_blue";
		count=10;
		model="SWLW_clones\rifles\DC15a\DC15a_mag.p3d";
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
	class 442_DC15A: 442_rifle_base
	{
		scope=2;
		model="442_weapons\clones\dc15a\dc15a.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\SWLW_clones\rifles\dc15a\anims\dc15a_handanim.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\SWLW_clones\rifles\dc15a\data\ui\DC15A_ui.paa";
		magazines[]=
		{
			"442_DC15A_Mag"
		};
		displayname="DC-15A rifle";
		descriptionShort="Clone trooper rifle";
		selectionFireAnim="zasleh";
		hiddenSelections[]=
		{
			"camo1",
			"sight"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLW_clones\rifles\dc15a\data\DC15A_co.paa",
			"\442_weapons\clones\dc15a\data\optic\training_blue.paa"
		};
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
			reloadTime=0.18;
			dispersion=0.00030149999;
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
			reloadTime=0.18;
			dispersion=0.00014545;
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
		maxRecoilSway=0.0125;
		recoil="SWLW_recoil";
		swayDecaySpeed=1.25;
		dexterity=1.7;
		initspeed=800;
		inertia=0.5;
		class OpticsModes
		{
			class sight
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]={""};
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=0.5;
				opticsZoomInit=0.75;
				discreteInitIndex=0;
				distanceZoomMin=200;
				distanceZoomMax=200;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare="false";
				cameraDir="";
			};
			class scope: sight
			{
				opticsID = 2;
				opticsZoomMin = 0.125;
				opticsZoomMax = 0.125;
				opticsZoomInit = 0.125;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
			};
		};
		class FlashLight
		{
			color[]={180,160,130};
			ambient[]={0.89999998,0.80000001,0.69999999};
			intensity=100;
			size=1;
			innerAngle=5;
			outerAngle=100;
			coneFadeCoef=10;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1.5;
			flareMaxDistance=100;
			dayLight=1;
			class Attenuation
			{
				start=0;
				constant=0.5;
				linear=0.1;
				quadratic=0.2;
				hardLimitStart=27;
				hardLimitEnd=34;
			};
			scale[]={0};
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
	
	class 442_dc15a_training_blue: 442_DC15A
	{
		displayname = "DC-15A Training Weapon (Blue)";
		hiddenSelections[]=
		{
			"camo1",
			"sight"
		};
		hiddenSelectionsTextures[]=
		{
			"\442_weapons\clones\dc15a\data\dc15a_training\kobra_dc15a_blue.paa",
			"\442_weapons\clones\dc15a\data\optic\training_blue.paa"
		};
		magazines[]=
		{
			"442_dc15a_mag_blue"
		};
	};
	class 442_dc15a_training_red: 442_dc15a_training_blue
	{
		displayname = "DC-15A Training Weapon (Red)";
		hiddenSelectionsTextures[]=
		{
			"\442_weapons\clones\dc15a\data\dc15a_training\kobra_dc15a_red.paa",
			"\442_weapons\clones\dc15a\data\optic\training_red.paa"
		};
		magazines[]=
		{
			"442_dc15a_mag_red"
		};
	};
	class 442_dc15a_training_green: 442_dc15a_training_blue
	{
		displayname = "DC-15A Training Weapon (Green)";
		hiddenSelectionsTextures[]=
		{
			"\442_weapons\clones\dc15a\data\dc15a_training\kobra_dc15a_green.paa",
			"\442_weapons\clones\dc15a\data\optic\training_green.paa"
		};
		magazines[]=
		{
			"442_dc15a_mag_green"
		};
	};
	class 442_dc15a_training_yellow: 442_dc15a_training_blue
	{
		displayname = "DC-15A Training Weapon (Yellow)";
		hiddenSelectionsTextures[]=
		{
			"\442_weapons\clones\dc15a\data\dc15a_training\kobra_dc15a_yellow.paa",
			"\442_weapons\clones\dc15a\data\optic\training_yellow.paa"
		};
		magazines[]=
		{
			"442_dc15a_mag_yellow"
		};
	};
	
	class 442_DC15A_ugl: 442_DC15A
	{
		muzzles[]=
		{
			"this",
			"EGLM"
		};
		displayName="DC-15A rifle UGL";
		model="442_weapons\clones\dc15a\dc15a_ugl.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"sight"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLW_clones\rifles\dc15a\data\DC15A_co.paa",
			"\SWLW_clones\rifles\dc15a\data\DC15A_ugl_co.paa",
			"\442_weapons\clones\dc15a\data\optic\training_blue.paa"
		};
		class EGLM: UGL_F
		{
			displayName="Grenade launcher";
			descriptionShort="UGL";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]=
			{
				"442_dc15a_3rnd_ugl_mag",
				"442_DC15A_UGL_Mag",
				"442_DC15A_UGL_huntir_Mag",
				"442_DC15A_UGL_flare_white_Mag",
				"442_DC15A_UGL_flare_red_Mag",
				"442_DC15A_UGL_flare_green_Mag",
				"442_DC15A_UGL_smoke_white_Mag",
				"442_DC15A_UGL_smoke_red_Mag",
				"442_DC15A_UGL_smoke_purple_Mag",
				"442_DC15A_UGL_smoke_blue_Mag",
				"442_DC15A_UGL_smoke_green_Mag"
			};
			magazineWell[]={};
			cameraDir="OP_look";
			discreteDistance[]={100,200,300,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=150;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
	};
	class 442_DC15A_ugl_kamui: 442_DC15A_ugl
	{
		displayname = "DC-15A UGL (Kamui)";
		hiddenSelectionsTextures[]=
		{
			"\442_weapons\clones\dc15a\data\dc15a\kobra_dc15a_kamui.paa",
			"\442_weapons\clones\dc15a\data\dc15a\kobra_ubgl_kamui.paa",
			"\442_weapons\clones\dc15a\data\optic\training_red.paa"
		};
	};

	class 442_DC15A_MC: 442_DC15A
	{
		muzzles[] = 
		{
			"this",
			"442_MC"
		};
		displayName="DC-15A rifle UBSG";
		model="442_weapons\clones\dc15a\dc15a_ugl.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"sight"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLW_clones\rifles\dc15a\data\DC15A_co.paa",
			"\SWLW_clones\rifles\dc15a\data\DC15A_ugl_co.paa",
			"\442_weapons\clones\dc15a\data\optic\training_blue.paa"
		};
		class 442_MC: Rifle_Base_F
		{
			magazines[] = 
			{
				"442_dc15a_shotgun_ugl_mag"
			};
			Displayname = "Scattergun Mode";
			displaynameshort = "Scattergun";
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
			initSpeed = 400;
			reloadMagazineSound[] = {"\SWLW_main\sounds\scatter_reload", 0.562341, 1, 30};
			cursor = "sgun";
			recoil = "recoil_MSBS65_ubs";
			fireSpreadAngle = 0.95;
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL", 1, 1, 10};
					soundClosure[] = {"closure1", 1};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"\SWLW_main\sounds\scatter", 0.707946, 1, 200};
					begin2[] = {"\SWLW_main\sounds\scatter", 0.707946, 1, 200};
					soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
				};
				reloadTime = 0.3;
				dispersion = 0.01245;
				minRange = 2;
				minRangeProbab = 0.95;
				midRange = 30;
				midRangeProbab = 0.95;
				maxRange = 100;
				maxRangeProbab = 0.3;
				aiRateOfFire = 1;
				aiRateOfFireDistance = 30;
			};
		};
	};
	class 442_DC15A_MC_dukas: 442_DC15A_MC
	{
		displayName="DC-15A rifle UBSG (Daisy)";
		hiddenSelectionsTextures[]=
		{
			"\442_weapons\clones\dc15a\data\dc15a\kobra_dc15a_dukas.paa",
			"\442_weapons\clones\dc15a\data\dc15a\kobra_ubsg_dukas.paa",
			"\442_weapons\clones\dc15a\data\optic\training_green.paa"
		};
	};
	
	class 442_dc15a_marksman: 442_DC15A
	{
		displayname = "DC15-A Marksman";
		hiddenSelectionsTextures[]=
		{
			"\SWLW_clones\rifles\dc15a\data\DC15A_co.paa",
			"\442_weapons\clones\dc15a\data\optic\training_blue.paa"
		};
		magazines[]=
		{
			"442_dc15a_marksman_mag"
		};
		modes[]=
		{
			"Single",
			"close",
			"short",
			"medium"
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
			reloadTime=0.22;
			dispersion=0.000030149999;
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
			reloadTime=0.22;
			dispersion=0.0014545;
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
		class OpticsModes
		{
			class sight
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]={"Default"};
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.5;
				opticsZoomMax=0.25;
				opticsZoomInit=0.75;
				discreteInitIndex=0;
				distanceZoomMin=200;
				distanceZoomMax=200;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare="false";
				cameraDir="";
			};
			class scope: sight
			{
				opticsID = 2;
				opticsZoomMin=0.0105;
				opticsZoomMax=0.041999999;
				opticsZoomInit=0.041999999;
				discretefov[]={0.041999999,0.0105};
				distanceZoomMin=100;
				distanceZoomMax=700;
				discreteDistanceInitIndex = 2;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=160;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
	};
	
	class 442_dc15a_lite: 442_DC15A
	{
		displayname = "DC15-A Lite";
		magazines[] = {"442_dc15a_lite_mag"};
		hiddenSelectionsTextures[]=
		{
			"\SWLW_clones\rifles\dc15a\data\DC15A_co.paa",
			"\442_weapons\clones\dc15a\data\optic\training_blue.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
	};
	
	class 442_dc15a_mg: 442_DC15A
	{
		displayname = "DC15-A MG";
		magazines[] = {"442_dc15a_mg_mag"};
		hiddenSelectionsTextures[]=
		{
			"\SWLW_clones\rifles\dc15a\data\DC15A_co.paa",
			"\442_weapons\clones\dc15a\data\optic\training_blue.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=160;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
		modes[]=
		{
			"FullAuto",
			"close",
			"short",
			"medium"
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
			reloadTime=0.22;
			dispersion=0.0030149999;
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
			reloadTime=0.14;
			dispersion=0.0014545;
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
	};
};