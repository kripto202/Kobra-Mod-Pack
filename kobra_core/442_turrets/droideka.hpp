class cfgPatches
{
	class 442_Droideka
	{
		units[]={"CIS_Droideka"};
		author="Rancor Battalion";
		weapons[]={};
		magazines[]={"Droideka_mag"};
		ammo[] = {"Droideka_ammo"};
	};
};

class cfgAmmo
{
	class Default;
	class BulletCore;
	class BulletBase;
	class Droideka_ammo : BulletBase
	{
		hit=30;
		indirectHit = 3;
		indirectHitRange = 0.4;
		explosive = 0.4;
		caliber = 3;
		cost = 1;
		model = "442_turrets\Droideka\data\tracer\Doublelaserred.p3d";
		tracerScale = 1;
		tracerStartTime = 0;
		timeToLive = 2;
		tracerEndTime = 3;
		nvgOnly = 0;
		typicalSpeed = 60;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		soundHit1[] = {"442_turrets\Droideka\data\Sounds\Heavyimpact\Heavyimpact1.ogg",1.2,1,50};
		soundHit2[] = {"442_turrets\Droideka\data\Sounds\Heavyimpact\Heavyimpact2.ogg",1.2,1,50};
		soundHit3[] = {"442_turrets\Droideka\data\Sounds\Heavyimpact\Heavyimpact3.ogg",1.2,1,50};
		soundHit4[] = {"442_turrets\Droideka\data\Sounds\Heavyimpact\Heavyimpact4.ogg",1.2,1,50};
		soundHit5[] = {"442_turrets\Droideka\data\Sounds\Heavyimpact\Heavyimpact5.ogg",1.2,1,50};
		soundHit6[] = {"442_turrets\Droideka\data\Sounds\Heavyimpact\Heavyimpact6.ogg",1.2,1,50};
		soundHit7[] = {"442_turrets\Droideka\data\Sounds\Heavyimpact\Heavyimpact7.ogg",1.2,1,50};
		soundHit8[] = {"442_turrets\Droideka\data\Sounds\Heavyimpact\Heavyimpact8.ogg",1.2,1,50};
		soundHit9[] = {"442_turrets\Droideka\data\Sounds\Heavyimpact\Heavyimpact9.ogg",1.2,1,50};
		soundHit10[] = {"442_turrets\Droideka\data\Sounds\Heavyimpact\Heavyimpact10.ogg",1.2,1,50};
		soundHit11[] = {"442_turrets\Droideka\data\Sounds\Heavyimpact\Heavyimpact11.ogg",1.2,1,50};
		soundHit12[] = {"442_turrets\Droideka\data\Sounds\Heavyimpact\Heavyimpact12.ogg",1.2,1,50};
		soundHit13[] = {"442_turrets\Droideka\data\Sounds\Heavyimpact\Heavyimpact13.ogg",1.2,1,50};
		soundHit14[] = {"442_turrets\Droideka\data\Sounds\Heavyimpact\Heavyimpact14.ogg",1.2,1,50};
		soundHit15[] = {"442_turrets\Droideka\data\Sounds\Heavyimpact\Heavyimpact15.ogg",1.2,1,50};
		soundHit16[] = {"442_turrets\Droideka\data\Sounds\Heavyimpact\Heavyimpact16.ogg",1.2,1,50};
		soundHit17[] = {"442_turrets\Droideka\data\Sounds\Heavyimpact\Heavyimpact17.ogg",1.2,1,50};
		soundHit18[] = {"442_turrets\Droideka\data\Sounds\Heavyimpact\Heavyimpact18.ogg",1.2,1,50};
		multiSoundHit[] = {"soundHit1",0.055,"soundHit2",0.055,"soundHit3",0.055,"soundHit4",0.055,"soundHit5",0.055,"soundHit6",0.055,"soundHit7",0.055,"soundHit8",0.055,"soundHit9",0.055,"soundHit10",0.055,"soundHit11",0.055,"soundHit12",0.055,"soundHit13",0.055,"soundHit14",0.055,"soundHit15",0.055,"soundHit16",0.055,"soundHit17",0.055,"soundHit18",0.055};
		explosionSoundEffect = "DefaultExplosion";
		airLock = 0;
		explosioneffects = "ExploAmmoExplosion";
		effectfly = "SWLW_plasma_red";
		airFriction = -0.00078;
		muzzleEffect = "";
		deflecting = 0;
		initTime = 0;
		gravityFactor = 0;
		class CamShakeExplode
		{
			power = "(20*0.2)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((1 + 20^0.5)*8)";
		};		
		class CamShakeHit
		{
			power = 20;
			duration = "((round (20^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		bulletFly1[] = {"442_turrets\Droideka\data\Sounds\flyby_close1.ogg",1.5848932,1,30};
		bulletFly2[] = {"442_turrets\Droideka\data\Sounds\flyby_close2.ogg",1.5848932,1,30};
		bulletFly3[] = {"442_turrets\Droideka\data\Sounds\flyby_close3.ogg",1.5848932,1,30};
		bulletFly4[] = {"442_turrets\Droideka\data\Sounds\flyby_close4.ogg",1.5848932,1,30};
		bulletFly5[] = {"442_turrets\Droideka\data\Sounds\flyby_close5.ogg",1.5848932,1,30};
		bulletFly6[] = {"442_turrets\Droideka\data\Sounds\flyby_close6.ogg",1.5848932,1,30};
		bulletFly7[] = {"442_turrets\Droideka\data\Sounds\flyby_close7.ogg",1.5848932,1,30};
		bulletFly8[] = {"442_turrets\Droideka\data\Sounds\flyby_close8.ogg",1.5848932,1,30};
		bulletFly9[] = {"442_turrets\Droideka\data\Sounds\flyby_close9.ogg",1.5848932,1,30};
		bulletFly10[] = {"442_turrets\Droideka\data\Sounds\flyby_close10.ogg",1.5848932,1,30};
		bulletFly11[] = {"442_turrets\Droideka\data\Sounds\flyby_close11.ogg",1.5848932,1,30};
		bulletFly12[] = {"442_turrets\Droideka\data\Sounds\flyby_close12.ogg",1.5848932,1,30};
		bulletFly[] = {"bulletFly1",0.083,"bulletFly2",0.083,"bulletFly3",0.083,"bulletFly4",0.083,"bulletFly5",0.083,"bulletFly6",0.083,"bulletFly7",0.083,"bulletFly8",0.083,"bulletFly9",0.083,"bulletFly10",0.083,"bulletFly11",0.083,"bulletFly12",0.083};
		supersonicCrackNear[] = {"442_turrets\Droideka\data\Sounds\Cracks\crack1.ogg",1,1,200};
		supersonicCrackFar[] = {"442_turrets\Droideka\data\Sounds\Cracks\crack2.ogg",1,1,200};
		class SuperSonicCrack
		{
		superSonicCrack[] = {"442_turrets\Droideka\data\Sounds\Cracks\crack3.ogg",3.1622777,1,200};
		class SCrackForest
		{
		range[] = {0,500};
		sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest1",1,1,500};
		sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest2",1,1,500};
		sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest3",1,1,500};
		sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
		frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
		trigger = "forest";
		};
		class SCrackTrees
		{
		range[] = {0,500};
		sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees1",1,1,500};
		sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees2",1,1,500};
		sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees3",1,1,500};
		sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
		frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
		trigger = "trees";
		};
		class SCrackMeadow
		{
		range[] = {0,500};
		sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow1",1,1,500};
		sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow2",1,1,500};
		sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow3",1,1,500};
		sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
		frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
		trigger = "meadow max sea";
		};
		class SCrackHouses
		{
		range[] = {0,500};
		sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses1",1,1,500};
		sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses2",1,1,500};
		sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses3",1,1,500};
		sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
		frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
		trigger = "houses max interior";
		};
	};
	};
};
class cfgMagazines
{
	class CA_magazine;
	class Droideka_mag: CA_magazine
	{
		scope = 2;
		author = "Rancor";
		displayName = "dekaMagazine";
		picture = "\SWLW_droids\smgs\e5\data\ui\e5_mag_ui.paa";
		ammo = "Droideka_Ammo";
		tracersEvery = 1;
		type = 16;
		count = 30;
		descriptionShort = "Magazine";
		mass = 10;
		initSpeed = 310;
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class cfgWeapons
{
	class MGun;
	class CannonCore;
	class LMG_RCWS;
	class gatling_25mm: CannonCore{};
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
				begin1[] = {"442_turrets\Droideka\data\Sounds\droidekafire1.ogg",1,1,2000};
				begin2[] = {"442_turrets\Droideka\data\Sounds\droidekafire1.ogg",1,1,2000};
				begin3[] = {"442_turrets\Droideka\data\Sounds\droidekafire2.ogg",1,1,2000};
				begin4[] = {"442_turrets\Droideka\data\Sounds\droidekafire1.ogg",1,1,2000};
				begin5[] = {"442_turrets\Droideka\data\Sounds\droidekafire2.ogg",1,1,2000};
				begin6[] = {"442_turrets\Droideka\data\Sounds\droidekafire1.ogg",1,1,2000};
				begin7[] = {"442_turrets\Droideka\data\Sounds\droidekafire1.ogg",1,1,2000};
				begin8[] = {"442_turrets\Droideka\data\Sounds\droidekafire2.ogg",1,1,2000};
				begin9[] = {"442_turrets\Droideka\data\Sounds\droidekafire1.ogg",1,1,2000};
				begin10[] = {"442_turrets\Droideka\data\Sounds\droidekafire1.ogg",1,1,2000};
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
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
	{
	class MainTurret: NewTurret{};
	};
		class HitPoints;
	};
	class StaticMGWeapon: StaticWeapon
	{
		class EventHandlers;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				optics = 1;
			};
		};
		class Components;
		icon = "iconStaticMG";
	};
	class CIS_Droideka: StaticMGWeapon
	{
		model="442_turrets\Droideka\data\turret\droideka.p3d";
		author="Rancor Customs";
		DisplayName="Droideka";
		picture = "\A3\Static_F_Gamma\data\UI\gear_StaticTurret_AA_CA.paa";
		UiPicture = "\A3\Static_F_Gamma\data\UI\gear_StaticTurret_AA_CA.paa";
		icon = "\A3\Static_F_Gamma\data\UI\map_StaticTurret_AA_CA.paa";
		accuracy = 0.12;
		cost = 250000;
		threat[] = {0.6,0.6,1.0};
		armor = 250;
		scope = 2;
		side = 0;
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"442_turrets\Droideka\data\Textures\Droideka_CO.paa"};
		enableGPS = 1;
		radarType = 4;
		gunnerCanSee = "1+2+4+16";
		commanderCanSee = "1+2+4+16";
		driverCanSee = "1+2+4+16";
		radarTarget = 1;
		radarTargetSize = 1.2;
		visualTarget = 1;
		visualTargetSize = 1.2;
		irTargetSize = 0;
		reportRemoteTargets = 1;
		receiveRemoteTargets = 1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						typeRecognitionDistance = 4000;
						maxTrackableSpeed = 120;
						angleRangeHorizontal = 60;
						angleRangeVertical = 40;
						animDirection = "mainGun";
						aimDown = -0.5;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 14000;
							maxRange = 14000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 11000;
							maxRange = 11000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 11000;
						angleRangeHorizontal = 15;
						angleRangeVertical = 15;
						animDirection = "mainGun";
						aimDown = -0.5;
						groundNoiseDistanceCoef = 0.1;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink{};
				};
			};
		};
		isUav = 1;
		uavCameraGunnerPos = "PiP_pos";
		uavCameraGunnerDir = "PiP_dir";
		crew = "O_UAV_AI";
		hasGunner = 1;
		faction = "442_cis";
		LockDetectionSystem = "2 + 4 + 8";
		incomingMissileDetectionSystem = 16;
		showAllTargets = 2;
		laserScanner = 1;
		irTarget = 1;
		irScanRangeMin = 50;
		irScanRangeMax = 10500;
		irScanToEyeFactor = 4;
		irScanGround = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			optics = 1;
			discreteDistance[] = {100,200,300,400,600,800,1000,1200,1400,1500};
			discreteDistanceInitIndex = 2;
			turretinfotype = "RscOptics_APC_Tracked_01_gunner";
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			minElev = -15;
			maxElev = 20;
			initElev = 0;
			maxHorizontalRotSpeed = 2.7;
			maxVerticalRotSpeed = 2.7;
			gunnerInAction = "Disabled";
			gunnerAction = "Disabled";
			uavCameraGunnerPos = "PiP_pos";
			uavCameraGunnerDir = "PiP_dir";
			gunnerForceOptics = 1;
			ejectDeadGunner = 0;
			hideProxyInCombat = 1;
			class Components: Components
			{
				class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
				{
					class Components
					{
						class EmptyDisplay
						{
							componentType = "EmptyDisplayComponent";
						};
						class MinimapDisplay
						{
							componentType = "MinimapDisplayComponent";
							resource = "RscCustomInfoMiniMap";
						};
						class UAVDisplay
						{
							componentType = "UAVFeedDisplayComponent";
						};
						class SensorDisplay
						{
							componentType = "SensorsDisplayComponent";
							range[] = {16000,8000,4000,2000};
							resource = "RscCustomInfoSensors";
						};
					};
				};
				class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
				{
					defaultDisplay = "SensorDisplay";
					class Components
					{
						class EmptyDisplay
						{
							componentType = "EmptyDisplayComponent";
						};
						class MinimapDisplay
						{
							componentType = "MinimapDisplayComponent";
							resource = "RscCustomInfoMiniMap";
						};
						class UAVDisplay
						{
							componentType = "UAVFeedDisplayComponent";
						};
						class SensorDisplay
						{
							componentType = "SensorsDisplayComponent";
							range[] = {16000,8000,4000,2000};
							resource = "RscCustomInfoSensors";
						};
					};
				};
			};
			soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best",0.1,1,20};
			memoryPointGun[] = {"cannon1","cannon2"};
			gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = -15;
					maxAngleX = 20;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.466;
					minFov = 0.466;
					maxFov = 0.466;
					cameraDir = "";
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {0,1};
					gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
				};
				class Medium: Wide
				{
					opticsDisplayName = "M";
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
					gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_m_F";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "N";
					gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_n_F";
					initFov = 0.029;
					minFov = 0.029;
					maxFov = 0.029;
				};
			};
			weapons[] = {"Cannon_droideka"};
			magazines[] = {"Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag","Droideka_Mag"};
			};
		};
		class HitPoints
		{
			class HitGun
			{
				armor = 0.9;
				material = -1;
				name = "gun";
				visual = "autonomous_unhide";
				passThrough = 0;
				radius = 0.2;
			};
			class HitTurret: HitGun
			{
				armor = 0.3;
			};
		};
		damageEffect = "AirDestructionEffects";
		class Damage
		{
			tex[] = {};
			mat[] = 
			{
				"442_turrets\Droideka\data\Textures\Droideka.rvmat",
				"442_turrets\Droideka\data\Textures\Droideka.rvmat",
				"442_turrets\Droideka\data\Textures\Droideka.rvmat",
				"442_turrets\Droideka\data\Textures\Droideka.rvmat",
				"442_turrets\Droideka\data\Textures\Droideka.rvmat",
				"442_turrets\Droideka\data\Textures\Droideka.rvmat",
				"442_turrets\Droideka\data\Textures\Droideka.rvmat",
				"442_turrets\Droideka\data\Textures\Droideka.rvmat",
				"442_turrets\Droideka\data\Textures\Droideka.rvmat"
			};
		};
		destrType = "DestructWreck";
		class DestructionEffects
		{
			class Dust
			{
				simulation = "particles";
				type = "HousePartDust";
				position = "destructionEffect2";
				intensity = 1;
				interval = 1;
				lifeTime = 0.01;
			};
			class UAVCrashSmoke
			{
				simulation = "particles";
				type = "UAVCrashSmoke";
				position = "destructionEffect2";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.012;
			};
			class sparks1
			{
				simulation = "particles";
				type = "ObjectDestructionSparks";
				position = "destructionEffect2";
				intensity = 0;
				interval = 1;
				lifeTime = 0;
			};
			class Light1
			{
				simulation = "light";
				type = "ObjectDestructionLightSmall";
				position = "destructionEffect";
				intensity = 0.001;
				interval = 1;
				lifeTime = 3;
				enabled = "distToWater";
			};
			class Sound
			{
				simulation = "sound";
				position = "destructionEffect";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
				type = "Fire";
			};
			class Fire1
			{
				simulation = "particles";
				type = "ObjectDestructionFire1Tiny";
				position = "destructionEffect";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Refract1
			{
				simulation = "particles";
				type = "SmallFireFRefract";
				position = "destructionEffect";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
		};
		class AnimationSources
		{
			class muzzle_source
			{
				source = "reload";
				weapon = "Cannon_droideka";
			};
			class fire_anim: muzzle_source
			{
				source = "revolving";
			};
			class muzzleHMG_ROT: muzzle_source
			{
				source = "ammorandom";
			};
			class autonomous_unhide
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class muzzle_source_rot
			{
				source = "ammorandom";
				weapon = "Cannon_droideka";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "Cannon_droideka";
			};
		};
	};
	class Wreck;
	class Droideka_wreck: Wreck
	{
		scope = 1;
		model = "442_turrets\Droideka\data\droideka.p3d";
		typicalCargo[] = {};
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 1;
		class Eventhandlers{};
	};
};


	
	
	
	

