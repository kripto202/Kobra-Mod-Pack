class cfgPatches
{
    class 442_a_vehicle_hmp_gunship
    {
        author = "KOBRA Mod Team";
        requiredaddons[] = {};
        requiredVersion = 0.1;
        units[] = 
        {
            "442_hmp",
            "442_hmp_unmarked",
            "442_hmp_transport",
            "442_hmp_transport_unmarked",
            "442_hmp_wreck"
        };
        weapons[] = {};
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
class cfgVehicles
{
    class Helicopter;
    class Helicopter_Base_F : Helicopter {
        class Turrets;
		class Hitpoints;
    };

    class Helicopter_Base_H: Helicopter_Base_F {
		class Turrets: Turrets {
			class MainTurret;	// External class reference
		};

        class AnimationSources;	// External class reference
        class Eventhandlers;	// External class reference
        class Viewoptics;	// External class reference
        class ViewPilot;	// External class reference
        class RotorLibHelicopterProperties;	// External class reference

        class HitPoints: HitPoints {
            class HitHull;	// External class reference
            class HitFuel;	// External class reference
            class HitEngine;	// External class reference
            class HitHRotor;	// External class reference
            class HitVRotor;	// External class reference
            class HitAvionics;	// External class reference
        };

		class Reflectors {
            class Right;	// External class reference
        };
	};
	class 442_test_hmp_base: Helicopter_Base_H
	{
		ace_fastroping_enabled = 0;
		ace_cargo_hasCargo = 0;
		weapons[] = 
		{
			"442_hmp_gun",
			"missiles_DAR",
			"CMFlareLauncher"
		};
		magazines[] = 
		{
			"442_50_200rnd_he_red_mag",
			"442_50_200rnd_he_red_mag",
			"12rnd_missiles",
			"12rnd_missiles",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		
		class EventHandlers: EventHandlers
		{
			init="(_this) spawn kobra_Vehicle_fnc_ImpulsorMonitor;";
		};
		
		fuelCapacity = 2500;
		fuelConsumptionRate = 0.138;
		side = 0;
		faction = "442_CIS";
		crew = "k_swla_unit_b1_e5";
		typicalCargo[]=
		{
			"k_swla_unit_b1_e5"
		};
		icon = "442_a_vehicle\hmp\data\ui\hmp_icon.paa";
		editorpreview = "442_a_vehicle\hmp\data\ui\hmp_preview.jpg";
		picture = "";
		availableForSupportTypes[] = {"CAS_Heli", "Drop", "Transport"};
		cost = 2000000;
		armor = 100;
        altFullForce = 10000;
        altNoForce = 15000;
		maxSpeed = 500;
		maxFordingDepth = 5;
		incomingMissileDetectionSystem = "1 + 2 + 4 + 8 + 16 + 32";
		LockDetectionSystem = "1 + 2 + 4 + 8 + 16 + 32";
		getInRadius = 5;
		hideWeaponsCargo = 1;
		cargoCanEject = 0;
		isUav = 0;
		unloadInCombat = 0;
		driverOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UGV_01_Optics_Driver_F.p3d";
		
		mainBladeRadius = 0.0;
        liftForceCoef = 3;
        bodyFrictionCoef = 11;
        cyclicAsideForceCoef = 2.5;
        cyclicForwardForceCoef = 1.5;
        backRotorForceCoef = 2;
		
		unitInfoTypeLite = "RscUnitInfoAirRTDBasic";
		unitInfoTypeRTD = "RscOptics_AV_pilot";
		
		draconicForceXCoef = 11;
        draconicForceYCoef = 2;
        draconicForceZCoef = 2;
        draconicTorqueXCoef = 0.05;
        draconicTorqueYCoef = 0;
		
		accuracy = 0.5;
		displayname = "Test HMP Gunship";
		model = "442_a_vehicle\hmp\hmp_gunship.p3d";
		
		driverAction = "apctracked2_slot1_in";
		driverInAction = "apctracked2_slot1_in";
		precisegetinout = 1;
		usePreciseGetInAction=1;
		GetInAction = "GetInLow";
		GetOutAction = "GetOutLow";
		radarType=8;
		extCameraPosition[]={0,3,-23};
		driverforceoptics = 1;
		class Exhausts
		{
			class Exhaust_1
			{
				position="Exhaust1";
				direction="Exhaust1_dir";
				effect="ExhaustsEffectPlane";
			};
			class Exhaust_2
			{
				position="Exhaust2";
				direction="Exhaust2_dir";
				effect="ExhaustsEffectPlane";
			};
		};
		
		driveOnComponent[]=
		{
			"Skids"
		};
		class ViewPilot: ViewPilot
		{
			minFov=0.25;
			maxFov=1.25;
			initFov=0.75;
			initAngleX=0;
			minAngleX=-65;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		class Viewoptics: Viewoptics
		{
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.1;
			minFov = 0.1;
			maxFov = 1.2;
			visionMode[] = 
			{
				"Normal",
				"NVG",
				"Ti"
			};
			thermalMode[]={0,1};
		};
		class transportweapons {};
		class transportmagazines {};
		class transportItems {};
		class transportBackpacks {};
		class Reflectors
		{
			class Left
			{
				color[]={10000,7500,7000};
				ambient[]={100,75,70};
				intensity=50;
				size=1;
				innerAngle=15;
				outerAngle=65;
				coneFadeCoef=10;
				useFlare=1;
				flareSize=10;
				flareMaxDistance=250;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=100;
					hardLimitEnd=200;
				};
				position="light_l";
				direction="light_l_end";
				hitpoint="light_l";
				selection="light_l";
			};
			class Right: Left
			{
				position="light_r";
				direction="light_r_end";
				hitpoint="light_r";
				selection="light_r";
			};
		};
		class simpleobject
		{
			animate[] = 
			{
				{
					"CollisionLightRed1",
					0
				},
				{
					"CollisionLightGreen1",
					0
				},
				{
					"CollisionLightWhite1",
					0
				},
				{
					"CollisionLightWhite2",
					0
				},
				{
					"light_l",
					0
				},
				{
					"light_r",
					0
				},
			};
			hide[] = 
			{
				"light_l",
				"light_r"
			};
			verticaloffset = 0;
			verticaloffsetworld = 0;
		};
		
		class animationsources
		{
			// class hmp_wing_rotate
			// {
				// source = "user";
				// animPeriod = 2;
				// initphase = 0;
			// };
		};
		
		class attributes
		{
			
		};
		animationlist[] = 
		{
			
		};
		
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor=999;
				convexComponent = "hull_hit";
				depends = "Total";
				explosionShielding = 1;
				material = 51;
				name = "hull_hit";
				passThrough = 1;
				visual="zbytek";
				radius = 0.01;
			};
			class HitFuel
			{
				convexcomponent = "fuel_hit";
				hitpoint = "fuel_hit";
				name = "fuel_hit";
				explosionShielding = 2;
				radius = 0.1;
				visual = "";
				passthrough = 0.1;
				minimalhit = 0.1;
				material = -1;
				armor = 0.5;
			};
			class HitEngine
			{
				armor=0.25;
				convexComponent = "engine_hit";
				explosionShielding = 2;
				material = 51;
				name = "engine_hit";
				hitpoint = "engine_hit";
				passThrough = 1;
				visual="";
				radius = 0.2;
			};
			class HitHRotor
			{
				armor=3;
				convexComponent = "main_rotor_hit";
				explosionShielding = 2.5;
				material = 51;
				name = "main_rotor_hit";
				passThrough = 0.1;
				visual="";
				radius = 0.01;
			};
			class HitVRotor
			{
				armor=3;
				convexComponent = "tail_rotor_hit";
				explosionShielding = 6;
				material = 51;
				name = "tail_rotor_hit";
				passThrough = 0.3;
				visual="";
				radius = 0.01;
			};
			class HitAvionics
			{
				armor=1;
				convexComponent = "avionics_hit";
				explosionShielding = 2;
				material = 51;
				name = "avionics_hit";
				passThrough = 1;
				visual="";
				radius = 0.5;
			};
		};
		
		class MarkerLights
		{
			class CollisionLightRed1
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				intensity=75;
				name="positionlight_red_1_pos";
				drawLight=1;
				drawLightSize=0.25;
				drawLightCenterSize=0.050000001;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=0.75;
					hardLimitEnd=1;
				};
			};
			class CollisionLightGreen1: CollisionLightRed1
			{
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				name="positionlight_green_1_pos";
			};
			class CollisionLightWhite1: CollisionLightRed1
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="positionlight_white_1_pos";
				blinking=1;
				blinkingStartsOn=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=1;
				drawLightSize=0.34999999;
				drawLightCenterSize=0.050000001;
			};
			class CollisionLightWhite2: CollisionLightWhite1
			{
				name="positionlight_white_2_pos";
			};
		};
		
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class activeRadarSenorComponent
					{
						aimDown = 30;
						allowsMarking = 1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 90;
						animDirection = "";
						color[] = {0,1,1,1};
						componentType = "ActiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 125;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 3000;
						class AirTarget
						{
							maxRange = 5000;
							minRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 5000;
							minRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class AntiRadiationSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						animDirection = "";
						color[] = {0.5,1,0.5,0.5};
						componentType = "PassiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 12000;
						class AirTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class IRSensorComponent
					{
						class AirTarget
						{
							minRange=500;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=50;
						angleRangeVertical=37;
						maxTrackableSpeed=100;
						aimDown = 0;
						allowsMarking = 1;
						animDirection = "";
						color[] = {1,0,0,1};
						componentType = "IRSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 0.995;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 2000;
					};
					class VisualSensorComponent
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=50;
						angleRangeVertical=37;
						maxTrackableSpeed=100;
						aimDown=0;
						animDirection="";
						allowsMarking = 1;
						color[] = {1,1,0.5,0.8};
						componentType = "VisualSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 0.94;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						nightRangeCoef = 0;
						typeRecognitionDistance = 2000;
					};
					class PassiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange=16000;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=16000;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						aimDown = 0;
						allowsMarking = 0;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {0.5,1,0.5,0.5};
						componentType = "PassiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 12000;
					};
					class LaserSensorComponent
					{
						class AirTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "LaserSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 0;
					};
					class NVSensorComponent
					{
						class AirTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "NVSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 0;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
		
		#include "hmp_sounds.hpp"
		#include "hmp_memorypoints.hpp"
		#include "hmp_useractions.hpp"
		#include "hmp_turrets.hpp"
	};
	
	class 442_hmp: 442_test_hmp_base
	{
		author = "Kobra Mod Team";
		displayname = "HMP Gunship";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselections[] = 
		{
			"body",
			"engine",
			"eyes",
			"head",
			"rockets",
			"seats",
			"wings"
		};
		hiddenselectionstextures[] = 
		{
			"442_a_vehicle\hmp\data\body_co.paa",
			"442_a_vehicle\hmp\data\engine_co.paa",
			"442_a_vehicle\hmp\data\eyes_co.paa",
			"442_a_vehicle\hmp\data\head_co.paa",
			"442_a_vehicle\hmp\data\missiles_co.paa",
			"",
			"442_a_vehicle\hmp\data\wings_co.paa",
		};
		class components: components
		{
			class TransportPylonsComponent
			{
				uiPicture="\442_hmp\data\ui\cis_ui.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "PylonMissile_Missile_BIM9X_x1";
						priority = 5;
						hardpoints[] = 
						{
							"B_BIM9X_RAIL",
							"B_BIM9X_DUAL_RAIL",
							"SCALPEL_1RND",
							"B_ASRAAM",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_SDB_QUAD_RAIL",
							"B_GBU12",
							"B_AGM65_RAIL"
						};
						turret[] = {};
						UIposition[] = {0.06, 0.4};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.64, 0.4};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName = "Empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "Default";
						attachment[] = 
						{
							"PylonMissile_1Rnd_AAA_missiles", 
							"PylonMissile_1Rnd_AAA_missiles", 
							"PylonRack_12Rnd_PG_missiles",
							"PylonRack_12Rnd_PG_missiles"
						};
					};
					class AT
					{
						displayName = "AT";
						attachment[] = {"PylonRack_12Rnd_PG_missiles", "PylonMissile_1Rnd_LG_scalpel", "PylonRack_12Rnd_PG_missiles", "PylonRack_12Rnd_PG_missiles", "PylonMissile_1Rnd_LG_scalpel", "PylonRack_12Rnd_PG_missiles"};
					};
					class CAS
					{
						displayName = "CAS";
						attachment[] = {"PylonRack_12Rnd_missiles", "PylonMissile_1Rnd_AAA_missiles", "PylonRack_12Rnd_missiles", "PylonRack_12Rnd_missiles", "PylonMissile_1Rnd_AAA_missiles", "PylonRack_12Rnd_missiles"};
					};
				};
			};
		};
		
		class textureSources
		{
			class base
			{
				displayname = "Base";
				author = "Kobra Mod Team Team";
				textures[] = 
				{
					"442_a_vehicle\hmp\data\body_co.paa",
					"442_a_vehicle\hmp\data\engine_co.paa",
					"442_a_vehicle\hmp\data\eyes_co.paa",
					"442_a_vehicle\hmp\data\head_co.paa",
					"442_a_vehicle\hmp\data\missiles_co.paa",
					"",
					"442_a_vehicle\hmp\data\wings_co.paa",
				};
				factions[] = 
				{
					"442_CIS"
				};
			};
			class unmarked: base
			{
				displayname = "Unmarked";
				textures[] = 
				{
					"442_a_vehicle\hmp\data\b_body_co.paa",
					"442_a_vehicle\hmp\data\engine_co.paa",
					"442_a_vehicle\hmp\data\eyes_co.paa",
					"442_a_vehicle\hmp\data\b_head_co.paa",
					"442_a_vehicle\hmp\data\b_missiles_co.paa",
					"",
					"442_a_vehicle\hmp\data\b_wings_co.paa",
				};
			};
		};
	};
	class 442_hmp_unmarked: 442_hmp
	{
		displayname = "HMP Gunship (unmarked)";
		hiddenselectionstextures[] = 
		{
			"442_a_vehicle\hmp\data\b_body_co.paa",
			"442_a_vehicle\hmp\data\engine_co.paa",
			"442_a_vehicle\hmp\data\eyes_co.paa",
			"442_a_vehicle\hmp\data\b_head_co.paa",
			"442_a_vehicle\hmp\data\b_missiles_co.paa",
			"",
			"442_a_vehicle\hmp\data\b_wings_co.paa",
		};
	};
	class 442_hmp_transport: 442_test_hmp_base
	{
		author = "Kobra Mod Team";
		displayname = "HMP Gunship (Transport)";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselections[] = 
		{
			"body",
			"engine",
			"eyes",
			"head",
			"rockets",
			"seats",
			"wings"
		};
		hiddenselectionstextures[] = 
		{
			"442_a_vehicle\hmp\data\body_co.paa",
			"442_a_vehicle\hmp\data\engine_co.paa",
			"442_a_vehicle\hmp\data\eyes_co.paa",
			"442_a_vehicle\hmp\data\head_co.paa",
			"442_a_vehicle\hmp\data\missiles_co.paa",
			"442_a_vehicle\hmp\data\seats_co.paa",
			"442_a_vehicle\hmp\data\wings_co.paa",
		};
		
		transportSoldier = 10;
		cargoAction[] = 
		{
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
		};
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10};
		class textureSources
		{
			class base
			{
				displayname = "Base";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"442_a_vehicle\hmp\data\body_co.paa",
					"442_a_vehicle\hmp\data\engine_co.paa",
					"442_a_vehicle\hmp\data\eyes_co.paa",
					"442_a_vehicle\hmp\data\head_co.paa",
					"442_a_vehicle\hmp\data\missiles_co.paa",
					"442_a_vehicle\hmp\data\seats_co.paa",
					"442_a_vehicle\hmp\data\wings_co.paa",
				};
				factions[] = 
				{
					"442_CIS"
				};
			};
			class unmarked: base
			{
				displayname = "Unmarked";
				textures[] = 
				{
					"442_a_vehicle\hmp\data\b_body_co.paa",
					"442_a_vehicle\hmp\data\engine_co.paa",
					"442_a_vehicle\hmp\data\eyes_co.paa",
					"442_a_vehicle\hmp\data\b_head_co.paa",
					"442_a_vehicle\hmp\data\b_missiles_co.paa",
					"442_a_vehicle\hmp\data\b_seats_co.paa",
					"442_a_vehicle\hmp\data\b_wings_co.paa",
				};
			};
		};
	};
	class 442_hmp_transport_unmarked: 442_hmp_transport
	{
		displayname = "HMP Gunship (Transport-unmarked)";
		hiddenselectionstextures[] = 
		{
			"442_a_vehicle\hmp\data\b_body_co.paa",
			"442_a_vehicle\hmp\data\engine_co.paa",
			"442_a_vehicle\hmp\data\eyes_co.paa",
			"442_a_vehicle\hmp\data\b_head_co.paa",
			"442_a_vehicle\hmp\data\b_missiles_co.paa",
			"442_a_vehicle\hmp\data\b_seats_co.paa",
			"442_a_vehicle\hmp\data\b_wings_co.paa",
		};
	};
	class Wreck_base_F;
	class 442_hmp_wreck: Wreck_base_F
	{
		author = "Kobra Mod Team";
		mapsize = 20;
		editorPreview = "";
		scope = 2;
		scopecurator = 2;
		icon="iconObject_1x2";
		displayname = "HMP Gunship (Wrecked)";
		model = "442_a_vehicle\hmp\hmp_gunship_w.p3d";
		editorCategory = "kobra";
		editorSubcategory = "442_wrecks";
	};
};