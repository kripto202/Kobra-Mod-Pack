class CfgPatches
{
	class 442_weapons_WestarM5
	{
		author="kripto202";
		requiredAddons[]={};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"442_WestarM5_scope",
			"442_WestarM5_scope_woodland",
			"442_WestarM5_scope_desert",
			"442_WestarM5_scope_snow",
			"442_WestarM5",
			"442_WestarM5_desert",
			"442_WestarM5_woodland",
			"442_WestarM5_snow",
			"442_WestarM5_ugl",
			"442_WestarM5_ugl_desert",
			"442_WestarM5_ugl_woodland",
			"442_WestarM5_ugl_snow",
		};
	};
};

class cfgmagazines
{
	class 442_mag_base;
	class 442_westarm5_low_mag: 442_mag_base
	{
		scope = 2;
		displayname = "Westar-M5 Low Power plasma cell (100rnd)";
		initspeed = 254;
		picture="\SWLW_clones\smgs\westar_m5\data\ui\WestarM5_mag_ui.paa";
		ammo = "442_ammo_45_blue";
		model="SWLW_clones\smgs\westar_m5\WestarM5_mag.p3d";
		mass = 15;
		count = 100;
	};
	class 442_westarm5_med_mag: 442_mag_base
	{
		scope = 2;
		displayname = "Westar-M5 Medium Power plasma cell (45rnd)";
		initspeed = 909;
		picture="\SWLW_clones\smgs\westar_m5\data\ui\WestarM5_mag_ui.paa";
		ammo = "442_ammo_556_blue";
		model="SWLW_clones\smgs\westar_m5\WestarM5_mag.p3d";
		mass = 15;
		count = 45;
	};
	class 442_westarm5_high_mag: 442_mag_base
	{
		scope = 2;
		displayname = "Westar-M5 High Power plasma cell (20rnd)";
		initspeed = 827;
		picture="\SWLW_clones\smgs\westar_m5\data\ui\WestarM5_mag_ui.paa";
		ammo = "442_ammo_762_blue";
		model="SWLW_clones\smgs\westar_m5\WestarM5_mag.p3d";
		mass = 15;
		count = 20;
	};
	class 442_westarm5_oc_mag: 442_mag_base
	{
		scope = 2;
		displayname = "Westar-M5 Over Charged plasma cell (5rnd)";
		initspeed = 880;
		picture="\SWLW_clones\smgs\westar_m5\data\ui\WestarM5_mag_ui.paa";
		ammo = "442_ammo_338_blue";
		model="SWLW_clones\smgs\westar_m5\WestarM5_mag.p3d";
		mass = 15;
		count = 5;
	};
	class 442_westarm5_ugl_mag: 442_mag_base
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
	class 442_westarm5_3rnd_ugl_mag: 442_mag_base
	{
		scope = 2;
		displayname = "DC-15A 3rnd 40mm HE Grenade";
		initspeed = 80;
		ammo = "1Rnd_HE_Grenade_shell";
		count = 3;
		mass = 12;
		modelSpecial = "\a3\Weapons_F\MagazineProxies\mag_40x36_HE_1rnd.p3d";
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class cfgweapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class Rifle_Long_Base_F;
	class UGL_F;
	class 442_WestarM5_scope: ItemCore
	{
		displayName="Westar M-5 scope";
		author="kripto202";
		picture="\SWLW_clones\smgs\westar_m5\data\ui\westarm5_scope_ui.paa";
		model="\SWLW_clones\smgs\westar_m5\WestarM5_scope.p3d";
		scope=2;
		descriptionShort="";
		weaponInfoType="RscWeaponZeroing";
		hiddenselections[] =
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"\442_weapons\clones\westar_m5\data\kobra_westarm5_scope.paa"
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
	class 442_WestarM5: 442_rifle_base
	{
		scope=2;
		model="\SWLW_clones\smgs\westar_m5\WestarM5.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\SWLW_clones\smgs\westar_m5\anims\westarm5_handanim.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\SWLW_clones\smgs\westar_m5\data\ui\WestarM5_ui.paa";
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"\SWLW_clones\smgs\westar_m5\data\westarm5_co.paa"
		};
		magazines[]=
		{
			"442_westarm5_low_mag",
			"442_westarm5_med_mag",
			"442_westarm5_high_mag",
			"442_westarm5_oc_mag"
		};
		displayname="Westar M5";
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
		recoil="SWLW_recoil";
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
					"\SWLW_clones\smgs\dc15s\sounds\DC15S_2",
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
			reloadTime=0.08;
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
			reloadTime=0.08;
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
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=-1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"442_WestarM5_scope"
				};
			};
		};
	};
	
	class 442_WestarM5_ugl: 442_WestarM5
	{
		displayName="Westar M-5 UGL";
		model="\SWLW_clones\smgs\westar_m5\WestarM5_ugl.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"ugl"
		};
		hiddenselectionstextures[] = 
		{
			"\SWLW_clones\smgs\westar_m5\data\westarm5_co.paa",
			"\SWLW_clones\smgs\westar_m5\data\westarm5_co.paa"
		};
		muzzles[]=
		{
			"this",
			"EGLM"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\SWLW_clones\smgs\westar_m5\anims\westarm5_ugl_handanim.rtm"
		};
		class EGLM: UGL_F
		{
			displayName="HE launcher";
			descriptionShort="";
			useModelOptics=0;
			useExternalOptic=0;
			initspeed=80;
			magazines[]=
			{
				"442_westarm5_ugl_mag",
				"442_westarm5_3rnd_ugl_mag"
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
	};
};