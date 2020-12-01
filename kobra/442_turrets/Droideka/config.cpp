class cfgpatches
{
    class 442_turrets_droideka
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
            "k_CIS_Droideka",
            "Droideka_wreck"
        };
    };
};

class SensorTemplatePassiveRadar;
class DefaultVehicleSystemsDisplayManagerLeft
{
    class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
    class components;
};
class VehicleSystemsTemplateLeftPilot : DefaultVehicleSystemsDisplayManagerLeft
{
    class components;
};
class VehicleSystemsTemplateRightPilot : DefaultVehicleSystemsDisplayManagerRight
{
    class components;
};

class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_AAA_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};

class cfgvehicles
{
	class land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class MainTurret: NewTurret{};
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
    class k_CIS_Droideka: StaticMGWeapon
	{
		model="kobra\442_turrets\droideka\droideka.p3d";
		author="Kobra Mod Team";
		DisplayName="Droideka";
		picture = "kobra\kobra_core\kobra.paa";
		UiPicture = "kobra\kobra_core\kobra.paa";
		icon = "\A3\Static_F_Gamma\data\UI\map_StaticTurret_AA_CA.paa";
		accuracy = 0.12;
		cost = 250000;
		threat[] = {0.6,0.6,1.0};
		armor = 250;
		scope = 2;
		side = 0;
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"kobra\442_turrets\droideka\data\Droideka_CO.paa"};
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
				"kobra\442_turrets\droideka\data\Droideka.rvmat",
				"kobra\442_turrets\droideka\data\Droideka.rvmat",
				"kobra\442_turrets\droideka\data\Droideka.rvmat",
				"kobra\442_turrets\droideka\data\Droideka.rvmat",
				"kobra\442_turrets\droideka\data\Droideka.rvmat",
				"kobra\442_turrets\droideka\data\Droideka.rvmat",
				"kobra\442_turrets\droideka\data\Droideka.rvmat",
				"kobra\442_turrets\droideka\data\Droideka.rvmat",
				"kobra\442_turrets\droideka\data\Droideka.rvmat"
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
		model = "kobra\442_turrets\Droideka\droideka.p3d";
		typicalCargo[] = {};
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 1;
		class Eventhandlers{};
	};
};