class cfgPatches
{
	class 442_weapons_773
	{
		author="Kobra Mod Team";
		requiredaddons[]=
        {
            "kobra_core"
        };
		requiredversion=0.1;
		units[]=
		{
			""
		};
		weapons[]=
		{
            ""
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class cfgweapons
{
    class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
    class k_773_rifle_base: rifle_Long_Base_f
    {
        scope = 1;
        picture = "kobra\kobra_core\kobra.paa";
        model = "kobra\442_weapons\weapons\773\k_773_rifle.p3d";
        recoil = "recoil_mxm";
		recoilProne = "assaultRifleBase";
        modes[] = 
        {
            "single",
            "single_close_optics1",
            "single_medium_optics1",
            "single_far_optics1"
        };
        class single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
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
					"kobra\442_weapons\sounds\rifle\blaster31.wss",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"kobra\442_weapons\sounds\rifle\blaster32.wss",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"kobra\442_weapons\sounds\rifle\blaster33.wss",
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
			class SilencedSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"kobra\442_weapons\sounds\rifle\blaster31_s.wss",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
            reloadTime=0.23999999;
            recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
            dispersion=0.000009;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
        };
        class single_close_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=500;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=700;
			midRangeProbab=0.5;
			maxRange=1000;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
		};
		aiDispersionCoefY=3;
		aiDispersionCoefX=2;
        handAnim[] = 
        {
            "OFP2_ManSkeleton",
            "kobra\442_animations\weapons\k_773_hold.rtm"
        };
        drySound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_Dry_01",
			0.25118864,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_reload",
			1,
			1,
			10
		};
        reloadAction = "gestureReload773";
        reloadtime = 2.5;
		maxZeroing=1000;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		distanceZoomMin=300;
		distanceZoomMax=300;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
				compatibleItems[] = 
				{
					"k_773_scope1",
					"k_773_scope2"
				};
			};
			class UnderBarrelSlot
			{
				iconPicture = "\a3\weapons_f_mark\Data\UI\attachment_under";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.4,0.7};
				iconScale = 0.2;
				linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
				scope = 0;
				compatibleItems[] = 
				{
					"bipod_01_F_blk"
				};
			};
			class PointerSlot
			{
				displayName = "Pointer Slot";
				iconPicture = "\a3\weapons_f\Data\ui\attachment_side";
				iconPinpoint = "Center";
				iconPosition[] = {0.35,0.5};
				iconScale = 0.25;
				linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
				compatibleItems[] = 
				{
					"acc_flashlight",
					"acc_flashlight_broken",
					"acc_pointer_IR",
					"acc_pointer_IR_broken",
					"ACE_acc_pointer_green",
					"ACE_acc_pointer_green_IR",
					"ACE_acc_pointer_red"
				};
			};
			class MuzzleSlot
			{
				access = 1;
				displayName = "Muzzle Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint = "Center";
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				scope = 0;
				compatibleItems[] = 
				{
					"k_773_snds"
				};
			};
		};
    };
    class k_773_rifle: k_773_rifle_base
    {
        scope = 2;
        displayname = "[K] 773 Sniper Rifle";
        magazines[] = 
        {
            "442_408_10rnd_blue_mag"
        };
		class LinkedItems{};
    };

	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class k_773_scope1: ItemCore
	{
		author = "KOBRA";
		scope = 2;
		displayname = "[K] 773 Variable Scope";
		picture = "\kobra\kobra_core\kobra.paa";
		icon = "\kobra\kobra_core\kobra.paa";
		model = "kobra\442_weapons\weapons\773\k_773_scope1.p3d";
		MRT_SwitchItemNextClass = "k_773_scope2";
		MRT_SwitchItemPrevClass = "k_773_scope2";
		MRT_switchItemHintText = "Medium Range";
		memoryPointCamera = "eye";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 10;
			optics = 1;
			modelOptics = "\kobra\442_weapons\weapons\773\773_retical.p3d";
			//muzzleEnd = "konec hlavne";
			//muzzlePos = "usti hlavne";
			allowedSlots[] = {801,701,901};
			class OpticsModes
			{
				class 773scope
				{
					opticsID=1;
					useModelOptics = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 1000;
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsFlare = 1;
					modelOptics[] = {"\kobra\442_weapons\weapons\773\773_retical.p3d"};
					opticsDisablePeripherialVision=1;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsZoomMin=0.125;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					memoryPointCamera="opticView";
				};
			};
		};
	};
	class k_773_scope2: k_773_scope1
	{
		author = "KOBRA";
		scope = 2;
		model = "kobra\442_weapons\weapons\773\k_773_scope2.p3d";
		picture = "\kobra\kobra_core\kobra.paa";
		MRT_SwitchItemNextClass = "k_773_scope1";
		MRT_SwitchItemPrevClass = "k_773_scope1";
		MRT_switchItemHintText = "Long Range";
		class ItemInfo: ItemInfo
		{
			class opticsModes
			{
				class 773scope
				{
					opticsID=1;
					useModelOptics = 1;
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
					discreteDistanceInitIndex = 1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsFlare = 1;
					modelOptics[] = {"\kobra\442_weapons\weapons\773\773_retical.p3d"};
					opticsDisablePeripherialVision=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					//discretefov[] = {0.011};
					distanceZoomMin = 300;
					distanceZoomMax = 1500;
					opticsZoomMin = 0.011;
					opticsZoomMax=0.011;
					opticsZoomInit=0.011;
					memoryPointCamera="opticView";
				};
			};
		};
	};
	class muzzle_snds_B;
	class k_773_snds: muzzle_snds_B
	{
		scope = 2;
		displayname = "773 Suppressor";
		picture = "kobra\kobra_core\kobra.paa";
		icon = "kobra\kobra_core\kobra.paa";
		model = "kobra\442_weapons\weapons\773\k_773_snds.p3d";

	};
};