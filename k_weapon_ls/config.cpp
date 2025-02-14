class cfgpatches
{
    class k_weapon_ls
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
		{
			"k_ls_weapon_dc15a",
			"k_ls_weapon_dc15a_ugl",
			"k_ls_weapon_dc15a_mc",
			"k_ls_weapon_dc15s",
			"k_ls_weapon_dc15s_ab",
			"k_ls_weapon_dc15sa",
			"k_ls_weapon_dc15x",
			"k_ls_weapon_dc15y",
			"k_ls_weapon_dc17",
			"k_ls_weapon_gl",
			"k_ls_weapon_rps6",
			"k_ls_weapon_westar_m5",
			"k_ls_weapon_z6",
			"k_ls_weapon_e6z",
			"k_ls_weapon_e5",
			"k_ls_weapon_e5c",
		};
        weapons[] = 
        {
            "442_DC15A",
            "442_DC15A_ugl",
            "442_DC15A_MC",
            "442_dc15s",
            "442_dc15s_ab",
            "442_DC15SA",
            "442_DC15X",
            "442_DC15Y",
            "442_DC17",
            "442_GL",
            "442_RPS6",
            "442_WestarM5",
            "442_WestarM5_scope",
            "442_WestarM5_ugl",
            "442_Z6",
            "442_e6z",
			"442_E5",
			"442_E5C"
        };
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class UGL_F;

class cfgweapons
{
    class MGun;
    class gatling_20mm;
    class missiles_titan;
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class Rifle_Long_Base_F;
	class UGL_F;
	class Rifle_Base_F;
	class LMG_RCWS;
	class cannon_120mm;
	class GMG_F;
	class missiles_ASRAAM;
	class CannonCore;
	class HMG_127;
	class LMG_Minigun;
	class GMG_40mm;
	class gatling_25mm;
	class SWLW_WestarM5_scope;
	class swlw_dc15a;
	class swlw_dc15a_ugl;
	class swlw_dc15s;
	class swlw_dc15x;
	class swlw_e5;
	class swlw_e5c;
	class swlw_westarm5;
	class swlw_westarm5_ugl;
	class swlw_z6;
	class swlw_dc15sa;
	class swlw_dc17;
	class swlw_gl;
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
	class pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
///dc15a   
    class 442_DC15A: swlw_dc15a
	{
		scope=2;
		//model="442_weapons\clones\dc15a\dc15a.p3d";
		magazines[] =
		{
			"442_762_30rnd_blue_mag"
		};
		magazinewell[] = 
		{
			"dc15a_magazines",
			"k_762_30rnd_magazines",
			"k_762_60rnd_magazines",
			"k_762_100rnd_magazines",
			"k_762_150rnd_magazines"
		};
		displayname="DC-15A rifle";
		modes[]=
		{
			"Single",
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
				begin1[]= {
					"SWLW_clones\smgs\dc15s\sounds\DC15S_1", 1, 1, 1800
				};
				begin2[]= {
					"SWLW_clones\smgs\dc15s\sounds\DC15S_2", 1, 1, 1800
				};
				begin3[]= {
					"SWLW_clones\smgs\dc15s\sounds\DC15S_3", 1, 1, 1800
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
			reloadTime=0.096001;
			dispersion=0.00030149999;
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
			recoil="recoil_single_mk20";
			recoilProne="recoil_single_prone_mk20";
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
				begin1[]= {
					"SWLW_clones\smgs\dc15s\sounds\DC15S_1", 1, 1, 1800
				};
				begin2[]= {
					"SWLW_clones\smgs\dc15s\sounds\DC15S_2", 1, 1, 1800
				};
				begin3[]= {
					"SWLW_clones\smgs\dc15s\sounds\DC15S_3", 1, 1, 1800
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
			reloadTime=0.104347;
			dispersion=0.00014545;
			recoil="recoil_auto_mk20";
			recoilProne="recoil_auto_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
		};
		class close: FullAuto
		{
			burst = 10;
			showToPlayer=0;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.02;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 3;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 700;
			minRange = 350;
			minRangeProbab = 0.04;
			midRange = 550;
			midRangeProbab = 0.5;
			maxRange = 700;
			maxRangeProbab = 0.01;
		};
		aiDispersionCoefY=2.5;
		aiDispersionCoefX=2.5;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		dexterity=1.7;
		initSpeed=-1;
		inertia=0.5;
		recoil="recoil_mk20";
	};
    class 442_DC15A_ugl: 442_DC15A
	{
		muzzles[]=
		{
			"this",
			"EGLM"
		};
		displayName="DC-15A rifle UGL";
		//model="442_weapons\clones\dc15a\dc15a_ugl.p3d";
		model = "swlw_rework\rifles\dc15a\dc15a_ugl.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"magazine",
			"sight"
		};
		hiddenSelectionsTextures[]=
		{
			"swlw_rework\rifles\dc15a\data\dc15a_co.paa",
			"swlw_rework\rifles\dc15a\data\DC15A_ugl_co.paa",
			"swlw_rework\rifles\dc15a\data\dc15a_mag_co.paa",
			"swlw_rework\rifles\dc15a\data\training_blue.paa"
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		dexterity=1.7;
		initspeed=800;
		inertia=0.5;
		class EGLM: UGL_F
		{
			displayName="Grenade launcher";
			descriptionShort="UGL";
			useModelOptics=0;
			useExternalOptic=0;
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
			magazinewell[] = {"dc15a_grenades"};
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
		//model="442_weapons\clones\dc15a\dc15a_ugl.p3d";
		model = "\swlw_rework\rifles\dc15a\DC15A_ugl.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = {"\SWLW_clones\rifles\dc15a\data\DC15A_co.paa","\SWLW_clones\rifles\dc15a\data\DC15A_ugl_co.paa"};
		class 442_MC: Rifle_Base_F
		{
			magazines[] = 
			{
				"442_shotgun_8rnd_blue_mag"
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
///dc15s
    class 442_dc15s: swlw_dc15s
	{
		scope=2;
		//model="442_weapons\clones\dc15s\dc15s.p3d";
		magazines[]=
		{
			"442_556_30rnd_blue_mag"
		};
		magazinewell[] = 
		{
			"dc15s_magazines",
			"k_556_20rnd_magazine",
			"k_556_30rnd_magazine",
			"k_556_60rnd_magazine",
			"k_556_100rnd_magazine",
		};
		displayname="DC-15s carbine";

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
				begin1[]= {
					"SWLW_clones\smgs\dc15s\sounds\DC15S_1", 1, 1, 1800
				};
				begin2[]= {
					"SWLW_clones\smgs\dc15s\sounds\DC15S_2", 1, 1, 1800
				};
				begin3[]= {
					"SWLW_clones\smgs\dc15s\sounds\DC15S_3", 1, 1, 1800
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
			reloadTime=0.096001;
			dispersion=0.0008;
			recoil = "recoil_single_trg";
			recoilProne = "recoil_single_prone_trg";
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
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
				begin1[]= {
					"SWLW_clones\smgs\dc15s\sounds\DC15S_1", 1, 1, 1800
				};
				begin2[]= {
					"SWLW_clones\smgs\dc15s\sounds\DC15S_2", 1, 1, 1800
				};
				begin3[]= {
					"SWLW_clones\smgs\dc15s\sounds\DC15S_3", 1, 1, 1800
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
			reloadTime=0.070011;
			dispersion=0.0008;
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
		};
		class close: FullAuto
		{
			burst = 10;
			showToPlayer=0;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab=0.69999999;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 3;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 700;
			minRange = 350;
			minRangeProbab = 0.04;
			midRange = 550;
			midRangeProbab = 0.5;
			maxRange = 700;
			maxRangeProbab = 0.01;
		};
		aiDispersionCoefY=10;
		aiDispersionCoefX=10;
		inertia=1;
		dexterity=1.7;
		initSpeed=-1;
		recoil = "recoil_trg21";
		maxRecoilSway=0.015;
		swayDecaySpeed=1.25;
	};
    class 442_dc15s_ab: 442_dc15s
	{
		displayname = "DC-15AB";
		inertia = 1.5;
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
				begin1[]= {
					"SWLW_clones\smgs\dc15s\sounds\DC15S_1", 1, 1, 1800
				};
				begin2[]= {
					"SWLW_clones\smgs\dc15s\sounds\DC15S_2", 1, 1, 1800
				};
				begin3[]= {
					"SWLW_clones\smgs\dc15s\sounds\DC15S_3", 1, 1, 1800
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
			reloadTime=0.096001;
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
				begin1[]= {
					"SWLW_clones\smgs\dc15s\sounds\DC15S_1", 1, 1, 1800
				};
				begin2[]= {
					"SWLW_clones\smgs\dc15s\sounds\DC15S_2", 1, 1, 1800
				};
				begin3[]= {
					"SWLW_clones\smgs\dc15s\sounds\DC15S_3", 1, 1, 1800
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
			reloadTime=0.05;
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
		class close: FullAuto
		{
			burst = 10;
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire=1;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.2;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		magazines[] = 
		{
			"442_45_45rnd_blue_mag"
		};
		magazinewell[] = 
		{
			"k_45_45rnd_magazine",
			"k_45_100rnd_magazine",
		};
	};
///dc15sa
    class 442_DC15SA: swlw_dc15sa
	{
		scope=2;
		//model="\SWLW_clones_spec\DC15SA.p3d";
		muzzles[]=
		{
			"this"
		};
		magazines[]=
		{
			"442_127x33_10rnd_blue_mag"
		};
		magazinewell[] = 
		{
			"k_127x33_10rnd_magazine",
			"dc15sa_magazines"
		};
		displayName="DC-15SA";
		modes[]=
		{
			"single"
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
			reloadTime=0.096001;
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
		initSpeed=-1;
		dexterity=1.7;
		recoil="recoil_pistol_4five";
	};
///dc15x
    class 442_DC15X: swlw_dc15x
	{
		scope=2;
		magazines[]=
		{
			"442_408_10rnd_blue_mag"
		};
		magazinewell[] = 
		{
			"k_408_10rnd_magazine",
			"dc15x_magazines"
		};
		displayname="DC-15X";
		maxZeroing=1200;
		opticsZoomMin=0.0099999998;
		opticsZoomMax=0.041999999;
		opticsZoomInit=0.041999999;
		discretefov[]={0.041999999,0.0099999998};
		discreteInitIndex=0;
		distanceZoomMin=100;
		distanceZoomMax=1200;
		discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
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
			dispersion=0.00001;
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
		class single_close_optics1: Single
		{
			requiredOptictype = 1;
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.2;
		};
		class single_short_optics1: single_close_optics1
		{
			requiredOptictype = 1;
			aiRateOfFire=1;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.2;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class single_medium_optics1: single_short_optics1
		{
			requiredOptictype = 2;
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			minRange=400;
			minRangeProbab=0.2;
			midRange=600;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.2;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOptictype = 2;
			aiRateOfFire=4;
			aiRateOfFireDistance=700;
			minRange=700;
			minRangeProbab=0.2;
			midRange=800;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		maxRecoilSway=0.0125;
		recoil="442_recoil";
		swayDecaySpeed=1.25;
		dexterity=1.7;
		initSpeed = -1;
		inertia=1.4;
		modelOptics[] = {"\A3\Weapons_F\acc\reticle_lrps_F", "\A3\Weapons_F\acc\reticle_lrps_z_F"};
		class OpticModes
		{
			class Scope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
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
				thermalMode[] = {0, 1};
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
	};
	class 442_DC15Y: 442_DC15X
	{
		displayname="DC-15Y";
		initSpeed = -1;
		magazines[]=
		{
			"442_127x108_5rnd_blue_mag"
		};
		magazinewell[] = 
		{
			"k_127x108_5rnd_magazine"
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
			reloadTime=0.096001;
			dispersion=0.0001;
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
	};
///dc17
    class 442_DC17: swlw_dc17
	{
		scope=2;
		//model="SWLW_clones\pistols\dc17\DC17.p3d";
		muzzles[]=
		{
			"this",
			"EGLM"
		};
		magazines[]=
		{
			"442_9_20rnd_blue_mag"
		};
		magazinewell[] = 
		{
			"k_9_20Rnd_magazines",
			"dc17_magazines"
		};
		displayName="DC-17";
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
				begin1[]= {
					"SWLW_clones\pistols\dc17\sounds\DC17_1", 1, 1, 1800
				};
				begin2[]= {
					"SWLW_clones\pistols\dc17\sounds\DC17_1", 1, 1, 1800
				};
				begin3[]= {
					"SWLW_clones\pistols\dc17\sounds\DC17_1", 1, 1, 1800
				};
				begin4[]= {
					"SWLW_clones\pistols\dc17\sounds\DC17_1", 1, 1, 1800
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
			reloadTime=0.0960001;
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
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=300;
			minRange=10;
			minRangeProbab=0.2;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			minRange=20;
			minRangeProbab=0.2;
			midRange=25;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.2;
		};
		class far: close
		{
			aiRateOfFire=4;
			aiRateOfFireDistance=700;
			minRange=30;
			minRangeProbab=0.2;
			midRange=40;
			midRangeProbab=0.69999999;
			maxRange=50;
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
			magazineWell[]=
			{
				"dc17_grenades"
			};
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
		initSpeed=-1;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
	};
///gl
    class 442_GL: swlw_gl
	{
		scope=2;
		magazines[]=
		{
			"442_40_6rnd_he_blue_mag"
		};
		magazinewell[] = 
		{
			"gl_magazines"
		};
		displayname="Grenade launcher";
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
				begin1[]= {
					"SWLW_clones\rifles\gl\sounds\gl",
					1,
					1,
					1800
				};
				begin2[]= {
					"SWLW_clones\rifles\gl\sounds\gl",
					1,
					1,
					1800
				};
				begin3[]= {
					"SWLW_clones\rifles\gl\sounds\gl",
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
			reloadTime=0.15000001;
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
		class close: Single
		{
			burst = 10;
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=50;
			minRange=25;
			minRangeProbab=0.050000001;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire=1;
			aiRateOfFireDistance=300;
			minRange=100;
			minRangeProbab=0.2;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.2;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class far: close
		{
			burst = 3;
			aiRateOfFire=4;
			aiRateOfFireDistance=700;
			minRange=300;
			minRangeProbab=0.2;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		muzzles[]=
		{
			"this"
		};
		initSpeed=-1;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.5;
	};
///rps6
    class 442_RPS6: Launcher_Base_F
	{
		author="Kobra";
		_generalMacro="launch_RPG32_F";
		scope=2;
		displayName="RPS-6 Rocket Launcher";
		model = "SWLW_clones\launchers\rps6\RPS6.p3d";
		picture="\SWLW_clones\launchers\rps6\data\ui\RPS6_ui.paa";
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_weapons\weapons\rps6\data\kobra_rps6.paa"
		};
		handAnim[] = {"OFP2_ManSkeleton","\SWLW_clones\launchers\rps6\anims\RPS6_handanim.rtm"};
		reloadAction="ReloadRPG";
		recoil="recoil_empty";
		maxZeroing=800;
		weaponInfoType = "RscOpticsRangeFinderVorona";
		modelOptics = "A3\Weapons_F_Tank\acc\reticle_Vorona.p3d";
		opticsZoomMin=0.0623;
		opticsZoomMax=0.0623;
		opticsZoomInit=0.0623;
		cameraDir="look";
		ace_overpressure_angle=45;
		ace_overpressure_damage=0.69999999;
		ace_overpresssure_priority=1;
		ace_overpressure_range=5;
		ace_nlaw_enabled = 1;
		
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		class OpticsModes
		{
			class optic
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsZoomMin = 0.0875;
				opticsZoomMax = 0.0875;
				opticsZoomInit = 0.0875;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				cameraDir = "look";
				visionMode[] = {"Normal", "NVG"};
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
			};
		};
		magazines[]=
		{
			"442_rps6_heat_mag"
		};
		modes[]=
		{
			"Single",
			"Overfly"
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw", 1.99526, 1, 1800};
				soundBegin[] = {"begin1", 1};
				soundSetShot[] = {"Launcher_NLAW_Shot_SoundSet", "Launcher_NLAW_Tail_SoundSet"};
			};
			recoil = "recoil_single_nlaw";
			aiRateOfFire = 7;
			aiRateOfFireDistance = 500;
			minRange = 25;
			minRangeProbab = 0.8;
			midRange = 50;
			midRangeProbab = 0.8;
			maxRange = 790;
			maxRangeProbab = 0.8;
		};
		class Overfly: Single
		{
			textureType = "overfly";
			displayName = "Overfly Top Attack";
			aiRateOfFire = 7;
			aiRateOfFireDistance = 500;
			minRange = 50;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.95;
			maxRange = 790;
			maxRangeProbab = 0.95;
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",
			0.44668359,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",
			0.25118864,
			1,
			10
		};
		canLock=1;
		weaponLockDelay=3;
		lockAcquire=0;
		inertia=1;
		aimTransitionSpeed=0.5;
		dexterity=1;
		cmimmunity = 0.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=120;
		};
		descriptionShort="";
		class Library
		{
			libTextDesc="";
		};
	};
///westarm5
    class 442_WestarM5: swlw_westarm5
	{
		scope=2;
		//model="\SWLW_clones\smgs\westar_m5\WestarM5.p3d";
		magazines[]=
		{
			"442_65_30rnd_blue_mag"
		};
		magazinewell[] = 
		{
			"k_65_30rnd_magazine",
			"k_65_60rnd_magazine",
			"k_65_100rnd_magazine"
		};
		displayname="Westar M5";
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		recoil="442_recoil";
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
				begin1[]= {
					"SWLW_merc_mando\rifles\westar35s\sounds\westar35s", 1, 1, 1800
				};
				begin2[]= {
					"SWLW_merc_mando\rifles\westar35s\sounds\westar35s", 1, 1, 1800
				};
				begin3[]= {
					"SWLW_merc_mando\rifles\westar35s\sounds\westar35s", 1, 1, 1800
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
			reloadTime=0.096001;
			dispersion=0.000020000001;
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
				begin1[]= {
					"SWLW_merc_mando\rifles\westar35s\sounds\westar35s", 1, 1, 1800
				};
				begin2[]= {
					"SWLW_merc_mando\rifles\westar35s\sounds\westar35s", 1, 1, 1800
				};
				begin3[]= {
					"SWLW_merc_mando\rifles\westar35s\sounds\westar35s", 1, 1, 1800
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
			reloadTime=0.063157;
			dispersion=0.000014545;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: FullAuto
		{
			burst = 10;
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=25;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire=1;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.2;
			midRange=125;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class far: close
		{
			burst = 3;
			aiRateOfFire=4;
			aiRateOfFireDistance=700;
			minRange=400;
			minRangeProbab=0.2;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
		};
		class EGLM: UGL_F
		{
			displayName = "1rnd HE launcher";
			descriptionShort = "";
			useModelOptics = 0;
			useExternalOptic = 0;
			initspeed = 75;
			magazines[] = {"SWLW_WestarM5_g_Mag"};
			magazineWell[] = {};
			cameraDir = "OP_look";
			discreteDistance[] = {100};
			discreteDistanceCameraPoint[] = {"OP_eye"};
			discreteDistanceInitIndex = 1;
		};
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=-1;
	};
    class 442_WestarM5_scope: SWLW_WestarM5_scope
	{
		displayName="Westar M-5 scope";
		author="Kobra";
		picture="\SWLW_clones\smgs\westar_m5\data\ui\westarm5_scope_ui.paa";
		//model="\SWLW_clones\smgs\westar_m5\WestarM5_scope.p3d";
		scope=2;
		descriptionShort="";
		weaponInfoType="RscWeaponZeroing";
		hiddenselections[] =
		{
			"camo1"
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
			opticType=1;
			optics=1;
			modelOptics = "\A3\Weapons_f\acc\reticle_marksman_F";
			class OpticsModes
			{
				class WestarM5scope_sights
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
				class WestarM5scope_scope: WestarM5scope_sights
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsZoomMin=0.0625;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					visionMode[] = {"Normal", "NVG", "Ti"};
					thermalMode[] = {0, 1};
					discretefov[] = {0.125, 0.0625};
					discreteInitIndex = 0;
					discreteDistanceInitIndex = 0;
					discreteDistance[] = {100};
					distanceZoomMin=300;
					distanceZoomMax=1200;
					modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
				};
			};
		};
		inertia=0.1;
	};
	class 442_WestarM5_ugl: 442_WestarM5
	{
		displayname="Westar M5 UGL";
		//model = "\SWLW_clones\smgs\westar_m5\WestarM5_ugl.p3d";
		model = "\SWLW_clones\smgs\westar_m5\WestarM5_ugl.p3d";
		muzzles[] = {"this","EGLM"};
		handAnim[] = {"OFP2_ManSkeleton","\SWLW_clones\smgs\westar_m5\anims\westarm5_ugl_handanim.rtm"};
	};
///z6
	class 442_Z6: swlw_z6
	{
		ace_overheating_mrbs=100000;
		ace_overheating_slowdownFactor=1e-006;
		ace_overheating_allowSwapBarrel=1;
		ace_overheating_dispersion=0;
		scope=2;
		displayName="Z6 Rotary Blaster";
		//model="442_weapons\clones\z6\z6.p3d";
		magazines[]=
		{
			"442_556_200rnd_blue_mag",
		};
		magazinewell[] =
		{
			"z6_magazines",
			"k_556_20rnd_magazine",
			"k_556_30rnd_magazine",
			"k_556_100rnd_magazine",
			"k_556_150rnd_magazine",
			"k_556_200rnd_magazine",
			"k_556_500rnd_magazine"
		};
		muzzles[]=
		{
			"this"
		};
		maxRecoilSway=0.0099999998;
		swayDecaySpeed=0.7;
		initSpeed=-1;
		initSpeed=909;
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="";
		modes[] = 
		{
			"FullAutoFast", 
			"FullAutoSlow",
			//"Explosive", 
			"close", 
			"short", 
			"medium",
			"far"
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
					"swlw_rework\sounds\z-series\z6\z6_shot.wss",
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
			reloadTime=0.096001;
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
					"swlw_rework\sounds\z-series\z6\z6_shot.wss",
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
			reloadTime=0.06;
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
			burst = 30;
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=25;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			burst = 24;
			aiRateOfFire=1;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.2;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			burst = 15;
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			minRange=250;
			minRangeProbab=0.2;
			midRange=425;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class far: FullAutoSlow
		{
			burst = 9;
			aiRateOfFire=4;
			aiRateOfFireDistance=700;
			minRange=500;
			minRangeProbab=0.2;
			midRange=625;
			midRangeProbab=0.69999999;
			maxRange=750;
			maxRangeProbab=0.2;
		};
		recoil="442_recoil";
		aiDispersionCoefY=4;
		aiDispersionCoefX=4;
		class animationsources
		{
			class gatling
			{
				source = "revolving";
				weapon = "442_Z6";
			};
		};
	};
	class 442_e6z: 442_Z6
	{
		displayname = "CIS Z6 Rotary Blaster";
		magazines[]=
		{
			"442_556_200rnd_red_mag",
			"442_556_100rnd_red_mag",
			"442_556_150rnd_red_mag",
			"442_556_500rnd_red_mag"
		};
	};
///E5
    class 442_E5: swlw_e5
	{
		scope=2;
		//model="\442_weapons\droids\e5\e5.p3d";
		magazines[]=
		{
			"442_65_30rnd_blue_mag"
		};
		magazinewell[] = 
		{
			"k_65_30rnd_magazine",
			"k_65_60rnd_magazine",
			"k_65_100rnd_magazine",
			"k_65_150rnd_magazine",
			"k_65_200rnd_magazine",
			"e5_magazines"
		};
		displayname="E-5 carbine";
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
				begin1[]= {
					"\swlw_rework\sounds\e-series\E5_shot1.wss", 1, 1, 1800
				};
				begin2[]= {
					"\swlw_rework\sounds\e-series\E5_shot2.wss", 1, 1, 1800
				};
				begin3[]= {
					"\swlw_rework\sounds\e-series\E5_shot3.wss", 1, 1, 1800
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
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
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
				begin1[]= {
					"\swlw_rework\sounds\e-series\E5_shot1.wss", 1, 1, 1800
				};
				begin2[]= {
					"\swlw_rework\sounds\e-series\E5_shot2.wss", 1, 1, 1800
				};
				begin3[]= {
					"\swlw_rework\sounds\e-series\E5_shot3.wss", 1, 1, 1800
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
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
		};
		class close: FullAuto
		{
			burst = 10;
			showToPlayer=0;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.02;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 3;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 700;
			minRange = 350;
			minRangeProbab = 0.04;
			midRange = 550;
			midRangeProbab = 0.5;
			maxRange = 700;
			maxRangeProbab = 0.01;
		};
	};
///e5c
    class 442_E5C: swlw_e5c
	{
		displayName="E-5C Blaster Repeater";
		//model="\442_weapons\droids\e5c\e5c.p3d";
		scope=2;
		magazines[]=
		{
			"442_65_60rnd_red_mag"
		};
		magazinewell[] = 
		{
			"k_65_30rnd_magazine",
			"k_65_60rnd_magazine",
			"k_65_100rnd_magazine",
			"e5c_magazines"
		};
		ace_overheating_allowSwapBarrel=1;
		muzzles[]=
		{
			"this"
		};
		maxRecoilSway=0.0099999998;
		swayDecaySpeed=0.2;
		initSpeed=-1;
		initSpeed=-1;
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="";
		dexterity=3;
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
				begin1[]= {
					"\swlw_rework\sounds\e-series\E5_shot1.wss", 1, 1, 1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.15000001;
			dispersion=0.0070000002;
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
		};
		class close: FullAuto
		{
			burst = 10;
			showToPlayer=0;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.02;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 3;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 700;
			minRange = 350;
			minRangeProbab = 0.04;
			midRange = 550;
			midRangeProbab = 0.5;
			maxRange = 700;
			maxRangeProbab = 0.01;
		};
		recoil="SWLW_Z6_recoil";
		aiDispersionCoefY=10;
		aiDispersionCoefX=10;
	};

};

class cfgvehicles
{
	class Weapon_Base_F;
	class k_ls_weapon_base: Weapon_Base_F
    {
        scope = 0;
        scopecurator = 0;
        scopearsenal = 0;
        displayname = "base weapon item";
        author = "KOBRA Mod Team";
        editorcategory = "kobra";
        editorsubcategory = "442_weapon";
        vehicleclass = "WeaponsPrimary";
        class TransportWeapons
        {
            class weapon
            {
                name = "";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                name = "";
                count = 1;
            };
        };
    };
///clones///
    class k_ls_weapon_dc15a: k_ls_weapon_base
    {
        scope = 2;
        scopecurator = 2;
        displayname = "DC-15A";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_DC15A";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_762_30rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_ls_weapon_dc15a_ugl: k_ls_weapon_dc15a
    {
        displayname = "DC-15A UGL";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_DC15A_ugl";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_762_30rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_ls_weapon_dc15a_mc: k_ls_weapon_dc15a
    {
        displayname = "DC-15A UBSG";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_DC15A_mc";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_762_30rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_ls_weapon_dc15s: k_ls_weapon_dc15a
    {
        displayname = "DC-15s";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_DC15s";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_556_30rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_ls_weapon_dc15s_ab: k_ls_weapon_dc15a
    {
        displayname = "DC-15AB";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_DC15s_ab";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_45_100rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_ls_weapon_dc15sa: k_ls_weapon_dc15a
    {
        displayname = "DC-15SA";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_DC15sa";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_127x33_10rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_ls_weapon_dc15x: k_ls_weapon_dc15a
    {
        displayname = "DC-15X";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_DC15x";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_408_10rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_ls_weapon_dc15y: k_ls_weapon_dc15a
    {
        displayname = "DC-15Y";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_DC15y";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_127x108_5rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_ls_weapon_dc17: k_ls_weapon_dc15a
    {
        displayname = "DC-17";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_DC17";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_9_20rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_ls_weapon_gl: k_ls_weapon_dc15a
    {
        displayname = "Grenade Launcher";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_gl";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_40_6rnd_he_blue_mag";
                count = 1;
            };
        };
    };
    class k_ls_weapon_rps6: k_ls_weapon_dc15a
    {
        displayname = "RPS-6 Rocket Launcher";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_rps6";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_rps6_heat_mag";
                count = 1;
            };
        };
    };
    class k_ls_weapon_westar_m5: k_ls_weapon_dc15a
    {
        displayname = "Westar M5";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_westarM5";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_65_60rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_ls_weapon_z6: k_ls_weapon_dc15a
    {
        displayname = "Z6 Rotary Blaster";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_z6";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_556_200rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_ls_weapon_e6z: k_ls_weapon_dc15a
    {
        displayname = "E6Z Rotary Blaster";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_e6z";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_556_200rnd_red_mag";
                count = 1;
            };
        };
    };

////Droids////
    class k_ls_weapon_e5: k_ls_weapon_dc15a
    {
        displayname = "E5 Carbine";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_e5";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_65_60rnd_red_mag";
                count = 1;
            };
        };
    };
    class k_ls_weapon_e5c: k_ls_weapon_dc15a
    {
        displayname = "E5 Carbine";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_e5c";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_65_100rnd_red_mag";
                count = 1;
            };
        };
    };
};

class cfgmagazinewells
{
///other mods
	class dc15a_magazines
	{
		ls_magazines[] = 
		{
			"SWLW_DC15A_Mag"
		};
		ls_stun_magazines[] = 
		{
			"ls_mag_stunLow_2rnd"
		};
		ls_ion_magazines[] = 
		{
			"ls_mag_ionLow_1rnd"
		};
		jlts_magazines[] = 
		{
			"JLTS_DC15A_mag"
		};
		3as_magazines[] =
		{
			"3as_45rnd_ec50_mag"
		};
	};
	class dc15a_grenades
	{
		ls_magazines[] = 
		{
			"SWLW_DC15A_UGL_Mag",
			"SWLW_DC15A_UGL_huntir_Mag",
			"SWLW_DC15A_UGL_flare_white_Mag",
			"SWLW_DC15A_UGL_flare_red_Mag",
			"SWLW_DC15A_UGL_flare_gree_Mag",
			"SWLW_DC15A_UGL_smoke_white_Mag",
			"SWLW_DC15A_UGL_smoke_red_Mag",
			"SWLW_DC15A_UGL_smoke_purple_Mag",
			"SWLW_DC15A_UGL_smoke_blue_Mag",
			"SWLW_DC15A_UGL_smoke_green_Mag"
		};
		jlts_stun[] = 
		{
			"jlts_stun_mag_long",
			"jlts_stun_mag_short",
		};
	};
	class dc15s_magazines 
	{
		ls_magazines[] = 
		{
			"SWLW_DC15s_Mag"
		};
		jlts_magazines[] =
		{
			"JLTS_DC15A_mag",
			"JLTS_DC15S_mag"
		};
		3a_magazines[] =
		{
			"3as_60rnd_ec30_mag"
		};
	};
	class dc15s_grenades
	{
		jlts_stun[] = 
		{
			"jlts_stun_mag_long",
			"jlts_stun_mag_short",
		};
	};
	class dc15sa_magazines 
	{
		ls_magazines[] = 
		{
			"SWLW_DC15SA_Mag"
		};
		3as_magazines[] =
		{
			"3as_15rnd_ec30_mag"
		};
	};
	class dc15x_magazines 
	{
		ls_magazines[] = 
		{
			"SWLW_DC15X_Mag"
		};
		jlts_magazine[] =
		{
			"jlts_dc15x_mag",
		};
	};
	class dc17_magazines 
	{
		ls_magazines[] = 
		{
			"SWLW_DC17_Mag"
		};
		jlts_magazines[] =
		{
			"jlts_dc17sa_mag"	
		};
		3as_magazines[] =
		{
			"3as_16rnd_ec20_mag"
		};
	};
	class dc17_grenades
	{
		ls_magazines[] = 
		{
			"SWLW_flareRed_mag",
			"SWLW_smokeRed_mag"
		};
		jlts_stun[] = 
		{
			"jlts_stun_mag_long",
			"jlts_stun_mag_short",
		};
	};
	class z6_magazines 
	{
		ls_magazines[] = 
		{
			"SWLW_Z6_mag"
		};
		jlts_magazines[] =
		{
			"jlts_z6_mag",
		};
		3as_magazines[] =
		{
			"3as_200rnd_ec40_mag"
		};
	};
	class e5_magazines 
	{
		ls_magazines[] = 
		{
			"SWLW_E5_Mag"
		};
		jlts_magzines[] =
		{
			"jlts_e5_mag"
		};
		3as_magazines[] =
		{
			"3as_60rnd_em50_redplasma"
		};
	};
	class e5c_magazines 
	{
		ls_magazines[] = 
		{
			"SWLW_E5C_mag"
		};
		jlts_magzines[] =
		{
			"jlts_e5c_mag"
		};
		3as_magazines[] =
		{
			"3as_130rnd_em50_redplasma"
		};
	};
	class gl_magazines
	{
		gl_magazines[] = 
		{
			"SWLW_mag_40mm_3rnd"
		};
	};
};