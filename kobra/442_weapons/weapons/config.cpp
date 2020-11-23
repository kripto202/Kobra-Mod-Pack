class cfgpatches
{
    class 442_weapons
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = {};
        weapons[] = 
		{
			"442_saber_gun",
			"442_saber_tow",
			"442_laat_gun",
			"442_laat_gun_2",
			"442_laat_gun_3",
			"442_hmp_gun",
			"442_hmp_gun_2",
			"442_hmp_gun_3",
			"442_aat_127",
			"442_aat_cannon_75mm",
			"442_aat_gmg",
			"442_mtt_cannon_75mm_l",
			"442_mtt_cannon_75mm_r",
			"442_minigun",
			"442_gmg",
			"Cannon_droideka"
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
///saber
	class 442_saber_gun: gatling_20mm
	{
		displayname = "50mm Cannons";
		displaynameMagazine = "50mm Cannons";
		shortNameMagazine = "50mm Cannons";
		scope = 1;
		displayNameShort = "50mm";
		magazines[] = 
		{
			"442_50_200rnd_ap_blue_mag",
			"442_50_200rnd_ap_blue_mag",
			"442_50_200rnd_he_blue_mag",
			"442_50_200rnd_he_blue_mag"
		};
		modes[] = 
		{
			"FullAuto",
			"close",
			"short",
			"medium",
		};
		reloadtime = 0.1375;
		magazinereloadtime = 10;
		magazineReloadSwitchPhase = 5;
		class gunparticles {};
		class FullAuto: MGun
		{
			reloadTime = 0.1375;
			dispersion = 0;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.05;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = .1375;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = .1375;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 10;
			aiRateOfFire = .1375;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
	};
	class 442_saber_tow: missiles_titan
	{
		scope = 1;
		displayname = "TOW Launchers";
		displaynameshort = "TOW";
		magazines[] = 
		{
			"4rnd_saber_tow_mag"
		};
	};
///laat
	class 442_laat_gun: 442_saber_gun
	{
		displayname = "Laat nose guns HE";
		displaynameshort = "50mm HE";
		magazines[] = 
        {
            "442_50_200rnd_he_green_mag"
        };
		class GunParticles{};
		class FullAuto: MGun
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
					"442_a_vehicle\laat\sounds\dc-15r.wss",
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
			reloadTime = 0.1375;
			dispersion = 0;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.05;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = .1375;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = .1375;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 10;
			aiRateOfFire = .1375;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
	};
	class 442_laat_gun_2: 442_laat_gun
	{
		magazines[] = {"442_50_200rnd_ap_green_mag"};
		displayname = "Laat nose guns AP";
		displaynameshort = "50mm AP";
	};
	class 442_laat_gun_3: 442_laat_gun {};
///hmp
    class 442_hmp_gun: 442_laat_gun
	{
		displayname = "HMP Auto Guns HE";
		magazines[] = {"442_50_200rnd_he_red_mag"};
		scope = 1;
		class gunparticles {};
		selectionFireAnim[] = 
		{
			"zasleh_c",
			"zasleh_r_1",
			"zasleh_r_2",
			"zasleh_l_1",
			"zasleh_l_2",
		};
	};
	class 442_hmp_gun_2: 442_laat_gun_2
	{
		displayname = "HMP Auto Guns AP";
		magazines[] = {"442_50_200rnd_ap_red_mag"};
		class gunparticles {};
		selectionFireAnim[] = 
		{
			"zasleh_c",
			"zasleh_r_1",
			"zasleh_r_2",
			"zasleh_l_1",
			"zasleh_l_2",
		};
	};
	class 442_hmp_gun_3: 442_hmp_gun
	{
		displayname = "HMP Infantry Cheek Gun";
		magazines[] = {"442_50_200rnd_ap_red_mag"};
	};

///aat
    class 442_aat_127: LMG_RCWS
	{
		displayName = "12.7mm AAT Side Gun";
		scope = 1;
		magazines[] = {"442_127x99_500rnd_red_mag"};
		maxZeroing = 2000;
		class GunParticles
		{
			class effect1
			{
				positionName = "usti_hlavne_1";
				directionName = "konec_hlavne_1";
				effectName = "MachineGunCloud";
			};
			class effect2: effect1
			{
				positionName = "usti_hlavne_2";
				directionName = "konec_hlavne_2";
			};
		};
		showAimCursorInternal = 0;
		class manual: mgun
		{
			displayName = "12.7mm AAT Side Gun";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"442_g_vehicle\aat\sounds\aat_light_guns.wss",1.5848932,1,2100};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.1;
			dispersion = 0.0012;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 16;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 400;
			midRangeProbab = 0.75;
			maxRange = 800;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 4;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 400;
			minRange = 400;
			minRangeProbab = 0.75;
			midRange = 800;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.6;
			midRange = 1500;
			midRangeProbab = 0.25;
			maxRange = 2000;
			maxRangeProbab = 0.05;
		};
	};
    class 442_aat_cannon_75mm: cannon_120mm
	{
		scope = 1;
		displayName = "75mm AAT Cannon";
		reloadSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",2.5118864,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",2.5118864,1,10};
		magazines[] = 
        {
            "442_75_30rnd_ap_red_mag", 
            "442_75_30rnd_he_red_mag"
        };
		reloadTime = 6;
		magazineReloadTime = 6;
		autoReload = 1;
		modes[] = {"player","close","short","medium","far"};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "CannonFired";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class player: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"442_g_vehicle\aat\sounds\aat_main_gun.wss",3.1622777,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			reloadTime = 6;
			magazineReloadTime = 6;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.00057;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class TopDown: player
		{
			textureType = "topDown";
			displayName = "$STR_A3_FireMode_TopDown0";
			minRange = 150;
			minRangeProbab = 0.4;
			midRange = 400;
			midRangeProbab = 0.95;
			maxRange = 8000;
			maxRangeProbab = 0.95;
		};
		class close: player
		{
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 5;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.8;
			maxRange = 1000;
			maxRangeProbab = 0.85;
		};
		class short: close
		{
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.3;
			midRange = 1000;
			midRangeProbab = 0.85;
			maxRange = 1500;
			maxRangeProbab = 0.85;
		};
		class medium: close
		{
			dispersion = 0.0007125;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 8;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1250;
			minRange = 1000;
			minRangeProbab = 0.6;
			midRange = 1500;
			midRangeProbab = 0.85;
			maxRange = 2000;
			maxRangeProbab = 0.8;
		};
		class far: close
		{
			dispersion = 0.0007125;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 10;
			aiRateOfFireDispersion = 8;
			aiRateOfFireDistance = 1500;
			minRange = 1500;
			minRangeProbab = 0.75;
			midRange = 2000;
			midRangeProbab = 0.8;
			maxRange = 3500;
			maxRangeProbab = 0.05;
		};
	};
    class 442_aat_gmg: GMG_F
	{
		scope = 1;
		displayName = "$STR_A3_GMG_20mm0";
		magazines[] = 
        {
            "442_40_50rnd_he_red_mag"
        };
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\reload_static_GMG",0.8912509,1,20};
		class GunClouds{};
		class GunParticles
		{
			class effect1
			{
				positionName = "gun_driver_l";
				directionName = "gun_driver_l_2";
				effectName = "GrenadeLauncherCloud";
			};
			class effect2
			{
				positionName = "gun_driver_r";
				directionName = "gun_driver_r_2";
				effectName = "GrenadeLauncherCloud";
			};
		};
		maxZeroing = 2000;
		modes[] = {"manual","close","short","medium","far"};
		class manual: GMG_F
		{
			displayName = "$STR_A3_GMG_20mm0";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"SWLW_clones\rifles\gl\sounds\gl",1.1220185,1.0,1200};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.24;
			dispersion = 0.0038;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 6;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			minRange = 16;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.5;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 5;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 200;
			minRange = 200;
			minRangeProbab = 0.5;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.7;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 5;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 700;
			minRange = 700;
			minRangeProbab = 0.7;
			midRange = 1000;
			midRangeProbab = 0.8;
			maxRange = 1500;
			maxRangeProbab = 0.75;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 3;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.8;
			midRange = 1500;
			midRangeProbab = 0.75;
			maxRange = 2000;
			maxRangeProbab = 0.1;
		};
	};
///mtt
    class 442_mtt_cannon_75mm_l: 442_aat_cannon_75mm
    {
        displayname = "75mm MTT Ball Gun";
        magazines[] = 
        {
            "442_75_30rnd_he_red_mag"
        };
        reloadTime = 2.5;
        magazineReloadTime = 6;
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "CannonFired";
                positionName = "Usti_hlavne_l_1";
                directionName = "Konec_hlavne_l_1";
            };
            class SecondEffect
            {
                effectName = "CannonFired";
                positionName = "Usti_hlavne_l_2";
                directionName = "Konec_hlavne_l_2";
            };
        };
        class player: Mode_SemiAuto
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                begin1[] = {"442_g_vehicle\aat\sounds\aat_main_gun.wss",3.1622777,1,1500};
                soundBegin[] = {"begin1",1};
            };
            soundContinuous = 0;
            reloadTime = 2.5;
            magazineReloadTime = 6;
            autoReload = 1;
            autoFire = 0;
            dispersion = 0.00057;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class TopDown: player
        {
            textureType = "topDown";
            displayName = "$STR_A3_FireMode_TopDown0";
            minRange = 150;
            minRangeProbab = 0.4;
            midRange = 400;
            midRangeProbab = 0.95;
            maxRange = 8000;
            maxRangeProbab = 0.95;
        };
        class close: player
        {
            showToPlayer = 0;
            burst = 1;
            burstRangeMax = 1;
            aiRateOfFire = 6;
            aiRateOfFireDispersion = 0.5;
            aiRateOfFireDistance = 500;
            minRange = 5;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.8;
            maxRange = 1000;
            maxRangeProbab = 0.85;
        };
        class short: close
        {
            showToPlayer = 0;
            burst = 1;
            burstRangeMax = 1;
            aiRateOfFire = 6;
            aiRateOfFireDispersion = 1;
            aiRateOfFireDistance = 1000;
            minRange = 500;
            minRangeProbab = 0.3;
            midRange = 1000;
            midRangeProbab = 0.85;
            maxRange = 1500;
            maxRangeProbab = 0.85;
        };
        class medium: close
        {
            dispersion = 0.0007125;
            showToPlayer = 0;
            burst = 1;
            burstRangeMax = 1;
            aiRateOfFire = 8;
            aiRateOfFireDispersion = 4;
            aiRateOfFireDistance = 1250;
            minRange = 1000;
            minRangeProbab = 0.6;
            midRange = 1500;
            midRangeProbab = 0.85;
            maxRange = 2000;
            maxRangeProbab = 0.8;
        };
        class far: close
        {
            dispersion = 0.0007125;
            showToPlayer = 0;
            burst = 1;
            burstRangeMax = 1;
            aiRateOfFire = 10;
            aiRateOfFireDispersion = 8;
            aiRateOfFireDistance = 1500;
            minRange = 1500;
            minRangeProbab = 0.75;
            midRange = 2000;
            midRangeProbab = 0.8;
            maxRange = 3500;
            maxRangeProbab = 0.05;
        };
    };
    class 442_mtt_cannon_75mm_r: 442_mtt_cannon_75mm_l
    {
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "CannonFired";
                positionName = "Usti_hlavne_r_1";
                directionName = "Konec_hlavne_r_1";
            };
            class SecondEffect
            {
                effectName = "CannonFired";
                positionName = "Usti_hlavne_r_2";
                directionName = "Konec_hlavne_r_2";
            };
        };
    };
///assault boat
    class 442_minigun: LMG_Minigun
	{
		displayname = "Plasma Minigun";
		scope = 1;
		magazines[] = {"442_127x99_500rnd_blue_mag"};
		modes[]=
		{
			"FullAuto",
			"close",
			"short",
			"medium",
			"manual",
			"far_optic1",
			"far_optic2"
		};
		class FullAuto: MGun
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
					"442_weapons\sounds\z6\Z6_1.wss",
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
			reloadTime=0.0135;
			dispersion=0.0099999998;
			minRange=0;
			burst = 50;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
		};
		class close: FullAuto
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
		class manual: FullAuto
		{
			dispersion=0.00073000003;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class far_optic1: close
		{
			burst=3;
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
			burst=3;
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
		recoil="empty";
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		drySound[]=
		{
			"SWLW_clones\machineguns\z6\sounds\Z6_empty.wss",
			2,
			1,
			20
		};
	};
	class 442_gmg: GMG_40mm
	{
		displayname = "Explosive Plasma Launcher";
		scope = 1;
		magazines[] = {"442_40_50rnd_he_blue_mag"};
	};
///droideka
	class Cannon_droideka: gatling_25mm
	{
		displayName="BigLasorz";
		magazines[]={"Droideka_mag"};
		scope = 1;
		ballisticsComputer = 1;
		autoFire = 1;
		canLock = 2;
		airLock = 1;
		weaponInfoType = "RscWeaponZeroing";
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		nameSound = "cannon";
		initSpeed = 310;
		muzzlePos = "usti hlavne";
		muzzleEnd = "konec hlavne";
		selectionFireAnim = "";
		reloadTime = 1;
		reloadmagazinetime = 4;
		magazinereloadtime = 4;
		fireLightDuration = 0.03;
		fireLightIntensity = 0.5;
		fireLightDiffuse[] = {0.1,0,0.0025};
		fireLightAmbient[] = {0.1,0,0};
		soundBullet[] = {};
		soundContinuous = 0;
		reloadMagazineSound[] = {"",1,1,1};
		reloadSound[] = {"",1,1,1};
		modes[] = {"manual","close","short","medium","far"};
		class manual: Mode_FullAuto
		{
			displayName = "Twin Blaster Cannon";
			autoFire = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"442_turrets\droideka\sounds\droidekafire1.wss",1,1,2000};
				begin2[] = {"442_turrets\droideka\sounds\droidekafire1.wss",1,1,2000};
				begin3[] = {"442_turrets\droideka\sounds\droidekafire2.wss",1,1,2000};
				begin4[] = {"442_turrets\droideka\sounds\droidekafire1.wss",1,1,2000};
				begin5[] = {"442_turrets\droideka\sounds\droidekafire2.wss",1,1,2000};
				begin6[] = {"442_turrets\droideka\sounds\droidekafire1.wss",1,1,2000};
				begin7[] = {"442_turrets\droideka\sounds\droidekafire1.wss",1,1,2000};
				begin8[] = {"442_turrets\droideka\sounds\droidekafire2.wss",1,1,2000};
				begin9[] = {"442_turrets\droideka\sounds\droidekafire1.wss",1,1,2000};
				begin10[] = {"442_turrets\droideka\sounds\droidekafire1.wss",1,1,2000};
				soundBegin[] = {"begin1",0.1,"begin2",0.1,"begin3",0.1,"begin4",0.1,"begin5",0.1,"begin6",0.1,"begin7",0.1,"begin8",0.1,"begin9",0.1,"begin10",0.1};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_forest",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_houses",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_interior",1.9952624,1,2200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_meadows",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_trees",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			recoil = "empty";
			reloadTime = 0.18;
			reloadmagazinetime = 4;
			magazinereloadtime = 4;
			soundBurst = 0;
			dispersion = 0.006;
			showToPlayer = 1;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
			textureType = "fullAuto";
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 20;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.15;
			aiRateOfFireDistance = 400;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			burst = 20;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.15;
			aiRateOfFireDistance = 500;
			minRange = 300;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			burst = 15;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 9000;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 700;
			midRangeProbab = 0.58;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class far: close
		{
			burst = 10;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.4;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.4;
			maxRange = 1500;
			maxRangeProbab = 0.01;
		};
	};
};

class cfgvehicles
{
	class Item_Base_F;
	///grenades///
    class k_mag_thermal_det: Item_Base_F
    {
        scope = 2;
        displayname = "Thermal Det";
        author = "KOBRA Mod Team";
        editorcategory = "kobra";
        editorsubcategory = "442_weapon";
        vehicleclass = "WeaponsPrimary";
        class TransportWeapons {};
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_thermal_det_mag";
                count = 1;
            };
        };
    };
    class k_mag_impact_grenade: Item_Base_F
    {
        displayname = "Impact Grenade";
        class TransportWeapons {};
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_impact_mag";
                count = 1;
            };
        };
    };
};