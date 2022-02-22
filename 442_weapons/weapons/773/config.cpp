class cfgPatches
{
	class 442_weapons_773
	{
		author="Stahl";
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
        recoil="recoil_single_dmr";
        modes[] = 
        {
            "single",
            "single_close_optics1",
            "single_medium_optics1",
            "single_far_optics1"
        };
        class single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound"};
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
            reloadTime=0.23999999;
            recoil="recoil_single_dmr";
			recoilProne="recoil_single_prone_dmr";
            dispersion=0.00086999999;
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
					"optic_aco",
					"optic_hamr",
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
            "442_338_10rnd_blue_mag"
        };
    };
};