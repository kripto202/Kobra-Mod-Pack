class CfgWeapons
{
	/// All firemodes, to be sure
	class manual;
	class close;
	class short;
	class medium;
	class far;
	class Mode_SemiAuto;
	class TopDown;
	class GunParticles;
	/// Weapon slots
	class SlotInfo;
	class MuzzleSlot;
	class CowsSlot;
	class PointerSlot;
	class UnderBarrelSlot;

//Side Guns
	class LMG_RCWS;
	class HMG_127: LMG_RCWS
	{
		displayName = "$STR_A3_HMG_1270";
		scope = 1;
		magazines[] = {"500Rnd_127x99_mag","500Rnd_127x99_mag_Tracer_Red","500Rnd_127x99_mag_Tracer_Green","500Rnd_127x99_mag_Tracer_Yellow","200Rnd_127x99_mag","200Rnd_127x99_mag_Tracer_Red","200Rnd_127x99_mag_Tracer_Green","200Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Green","100Rnd_127x99_mag_Tracer_Yellow"};
		maxZeroing = 2000;
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "MachineGunCloud";
			};
		};
		showAimCursorInternal = 0;
		class manual: MGun
		{
			displayName = "12.7mm HMG";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_01",1.5848932,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_02",1.5848932,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_03",1.5848932,1,2100};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				closure1[] = {"A3\Sounds_F\weapons\Closure\sfx10",0.63095737,1,20};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx11",0.63095737,1.2,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
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

//Main Cannon
	class CannonCore;
	class cannon_120mm: CannonCore
	{
			scope = 1;
			displayName = "$STR_A3_cannon_120mm0";
			cursor = "EmptyCursor";
			cursorAim = "cannon";
			showAimCursorInternal = 0;
			nameSound = "cannon";
			reloadSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",2.5118864,1,10};
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",2.5118864,1,10};
			magazines[] = {"32Rnd_120mm_APFSDS_shells","32Rnd_120mm_APFSDS_shells_Tracer_Red","32Rnd_120mm_APFSDS_shells_Tracer_Green","32Rnd_120mm_APFSDS_shells_Tracer_Yellow","30Rnd_120mm_APFSDS_shells","30Rnd_120mm_APFSDS_shells_Tracer_Red","30Rnd_120mm_APFSDS_shells_Tracer_Green","30Rnd_120mm_APFSDS_shells_Tracer_Yellow","28Rnd_120mm_APFSDS_shells","28Rnd_120mm_APFSDS_shells_Tracer_Red","28Rnd_120mm_APFSDS_shells_Tracer_Green","28Rnd_120mm_APFSDS_shells_Tracer_Yellow","24Rnd_120mm_APFSDS_shells","24Rnd_120mm_APFSDS_shells_Tracer_Red","24Rnd_120mm_APFSDS_shells_Tracer_Green","24Rnd_120mm_APFSDS_shells_Tracer_Yellow","20Rnd_120mm_APFSDS_shells","20Rnd_120mm_APFSDS_shells_Tracer_Red","20Rnd_120mm_APFSDS_shells_Tracer_Green","20Rnd_120mm_APFSDS_shells_Tracer_Yellow","12Rnd_120mm_APFSDS_shells","12Rnd_120mm_APFSDS_shells_Tracer_Red","12Rnd_120mm_APFSDS_shells_Tracer_Green","12Rnd_120mm_APFSDS_shells_Tracer_Yellow","20Rnd_120mm_HEAT_MP","20Rnd_120mm_HEAT_MP_T_Red","20Rnd_120mm_HEAT_MP_T_Green","20Rnd_120mm_HEAT_MP_T_Yellow","12Rnd_120mm_HEAT_MP","12Rnd_120mm_HEAT_MP_T_Red","12Rnd_120mm_HEAT_MP_T_Green","12Rnd_120mm_HEAT_MP_T_Yellow","8Rnd_120mm_HEAT_MP","8Rnd_120mm_HEAT_MP_T_Red","8Rnd_120mm_HEAT_MP_T_Green","8Rnd_120mm_HEAT_MP_T_Yellow","30Rnd_120mm_HE_shells","30Rnd_120mm_HE_shells_Tracer_Red","30Rnd_120mm_HE_shells_Tracer_Green","30Rnd_120mm_HE_shells_Tracer_Yellow","16Rnd_120mm_HE_shells","16Rnd_120mm_HE_shells_Tracer_Red","16Rnd_120mm_HE_shells_Tracer_Green","16Rnd_120mm_HE_shells_Tracer_Yellow","14Rnd_120mm_HE_shells","14Rnd_120mm_HE_shells_Tracer_Red","14Rnd_120mm_HE_shells_Tracer_Green","14Rnd_120mm_HE_shells_Tracer_Yellow","12Rnd_120mm_HE_shells","12Rnd_120mm_HE_shells_Tracer_Red","12Rnd_120mm_HE_shells_Tracer_Green","12Rnd_120mm_HE_shells_Tracer_Yellow","8Rnd_120mm_HE_shells","8Rnd_120mm_HE_shells_Tracer_Red","8Rnd_120mm_HE_shells_Tracer_Green","8Rnd_120mm_HE_shells_Tracer_Yellow","4Rnd_120mm_cannon_missiles","4Rnd_120mm_LG_cannon_missiles"};
			reloadTime = 6;
			magazineReloadTime = 6;
			autoReload = 1;
			canLock = 0;
			ballisticsComputer = "2 + 16";
			FCSMaxLeadSpeed = 25;
			FCSZeroingDelay = 1;
			aiDispersionCoefY = 2;
			aiDispersionCoefX = 2;
			autoFire = 0;
			modes[] = {"player","topDown","close","short","medium","far"};
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
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\slammer_120mm_distant",3.1622777,1,1500};
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
	};

//Driver Guns
	class GMG_F;
	class GMG_20mm: GMG_F
	{
		scope = 1;
		displayName = "$STR_A3_GMG_20mm0";
		magazines[] = {"200Rnd_20mm_G_belt","40Rnd_20mm_g_belt"};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\reload_static_GMG",0.8912509,1,20};
		class GunClouds{};
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne3";
				directionName = "konec hlavne3";
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
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_01",1.1220185,1.0,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_02",1.1220185,1.0,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_03",1.1220185,1.0,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
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
};
