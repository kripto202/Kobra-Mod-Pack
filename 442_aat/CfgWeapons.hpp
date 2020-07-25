class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons
{
	/// All firemodes, to be sure
	class manual;
	class close;
	class short;
	class medium;
	class far;
	class TopDown;
	class GunParticles;
	class mgun;
	/// Weapon slots
	class SlotInfo;
	class MuzzleSlot;
	class CowsSlot;
	class PointerSlot;
	class UnderBarrelSlot;

//Side Guns
	class LMG_RCWS;
	class 442_aat_127: LMG_RCWS
	{
		displayName = "12.7mm AAT Side Gun";
		scope = 1;
		magazines[] = {"442_500Rnd_127x99_mag_red"};
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
				begin1[] = {"442_aat\sounds\aat_light_guns.wss",1.5848932,1,2100};
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
			burst=20;
			aiBurstTerminable=1;
			aiRateOfFire=.01;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.1;
			showToPlayer=0;
		};
		class short: close
		{
			burst=18;
			aiBurstTerminable=1;
			aiRateOfFire=.01;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.1;
		};
		class medium: close
		{
			burst=16;
			aiBurstTerminable=1;
			aiRateOfFire=.01;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			burst=10;
			aiBurstTerminable=1;
			aiRateOfFire=.01;
			aiRateOfFireDistance=1000;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=850;
			midRangeProbab=0.40000001;
			maxRange=1100;
			maxRangeProbab=0.0099999998;
		};
	};

//Main Cannon
	class cannon_120mm;
	class 442_aat_cannon_75mm: cannon_120mm
	{
		scope = 1;
		displayName = "75mm AAT Cannon";
		reloadSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",2.5118864,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",2.5118864,1,10};
		magazines[] = {"442_30Rnd_75mm_HE_mag_red", "442_30Rnd_75mm_AP_mag_red"};
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
				begin1[] = {"442_aat\sounds\aat_main_gun.wss",3.1622777,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			reloadTime = 6;
			magazineReloadTime = 6;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.00057;
			aiRateOfFire=.01;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 1;
			midRangeProbab = 0.7;
			maxRange = 2;
			maxRangeProbab = 0.7;
		};
		class close: player
		{
			showToPlayer=0;
			aiRateOfFire=.01;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.7;
			midRange=500;
			midRangeProbab=0.7;
			maxRange=1000;
			maxRangeProbab=0.7;
			aiDispersionCoefX=6;
			aiDispersionCoefY=6;
		};
		class short: close
		{
			aiRateOfFire=.01;
			aiRateOfFireDistance=300;
			minRange=500;
			minRangeProbab=0.7;
			midRange=1000;
			midRangeProbab=0.7;
			maxRange=1500;
			maxRangeProbab=0.7;
		};
		class medium: short
		{
			aiRateOfFire=.01;
			aiRateOfFireDistance=600;
			minRange=1000;
			minRangeProbab=0.7;
			midRange=1500;
			midRangeProbab=0.7;
			maxRange=2000;
			maxRangeProbab=0.7;
		};
		class far: medium
		{
			aiRateOfFire=.01;
			aiRateOfFireDistance=1000;
			minRange=1500;
			minRangeProbab=0.7;
			midRange=2500;
			midRangeProbab=0.7;
			maxRange=3000;
			maxRangeProbab=0.7;
		};
	};

//Driver Guns
	class GMG_F;
	class 442_aat_gmg: GMG_F
	{
		scope = 1;
		displayName = "$STR_A3_GMG_20mm0";
		magazines[] = {"442_50Rnd_40mm_G_belt"};
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
			burst=6;
			aiBurstTerminable=1;
			aiRateOfFire=1;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.1;
			showToPlayer=0;
		};
		class short: close
		{
			burst=5;
			aiBurstTerminable=1;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.1;
		};
		class medium: close
		{
			burst=4;
			aiBurstTerminable=1;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			burst=3;
			aiBurstTerminable=1;
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.40000001;
			maxRange=1000;
			maxRangeProbab=0.0099999998;
		};
	};
};
