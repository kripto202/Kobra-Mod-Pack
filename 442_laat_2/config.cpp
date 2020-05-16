class cfgpatches
{
	class 442_laat_2
	{
		units[] = 
		{
			"442_laat_2",
			"442_laat_2_ab",
			"442_laat_wreck",
			"442_laat_door_1",
			"442_laat_door_2",
			"442_laat_door_3",
			"442_laat_door_4",
		};
		weapons[] = {};
		requiredversion = 0.1;
		requiredaddons[] = {};
	};
};

class CfgSounds 
{
	class laat_door_open
	{
		sound[] = {"442_laat_2\sounds\LAAT_door_open.wss", 15, 1, 1500};
		name = "laat_door_open";
		titles[] = {"laat_door_open"};
		duration = 3;
	};

	class laat_door_close 
	{
		sound[] = {"442_laat_2\sounds\LAAT_door_close.wss", 15, 1, 1500};
		name = "laat_door_close";
		titles[] = {"laat_door_close"};
		duration = 3;
	};

	class laat_ramp
	{
		sound[] = {"442_laat_2\sounds\LAAT_ramp.wss", 15, 1, 1500};
		name = "laat_ramp";
		titles[] = {"laat_ramp"};
		duration = 2;
	};

};

class CfgFunctions {
	class LAAT {
		class Operation {
			file = "442_laat_2\Scripts";
			
			class Init {
				postInit = 1;
			};
			
			class ToggleAllDoors {};
			
			class ToggleLeftDoors {};
			
			class ToggleRightDoors {};
			
			class ToggleRamp {};
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
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class CfgAmmo
{
	class Cannon_30mm_HE_Plane_CAS_02_F;
	class 442_50mm_he: Cannon_30mm_HE_Plane_CAS_02_F
	{
		model="SWLW_main\Effects\laser_blue.p3d";
		effectfly="SWLW_plasma_blue";
		flaresize=3;
		tracerscale=3;
		hit = 150;
		indirectHit = 10;
		indirectHitRange = 4;
		caliber = 6;
		explosive = 0.65;
		tracerStartTime = 0;
		tracerEndTime = 10;
		allowAgainstInfantry = 1;
	};
	class 442_50mm_apfsds: Cannon_30mm_HE_Plane_CAS_02_F
	{
		model="SWLW_main\Effects\laser_blue.p3d";
		effectfly="SWLW_plasma_blue";
		flaresize=3;
		tracerscale=3;
		hit = 240;
		indirectHit = 5;
		indirectHitRange = 0.2;
		caliber = 10;
		explosive = 0;
		tracerStartTime = 0;
		tracerEndTime = 10;
		allowAgainstInfantry = 1;
	};
	class 442_50mm_laat_he: 442_50mm_he
	{
		model = "SWLW_main\Effects\laser_green.p3d";
		effectfly = "swlw_plasma_green";
		flaresize=3;
		tracerscale=3;
	};
	class 442_50mm_laat_apfsds: 442_50mm_apfsds
	{
		model = "SWLW_main\Effects\laser_green.p3d";
		effectfly = "swlw_plasma_green";
		flaresize=3;
		tracerscale=3;
	};
};
class CfgMagazines
{
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
	class 200rnd_saber_he_mag: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		author = "kripto202";
		displayname = "50mm HE";
		displaynameMagazine = "50mm Cannons HE";
		shortNameMagazine = "50mm Cannons HE";
		ammo = "442_50mm_he";
		count = 200;
	};
	class 200rnd_saber_apfsds_mag: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		author = "kripto202";
		displayname = "50mm APFSDS";
		displaynameMagazine = "50mm Cannons APFSDS";
		shortNameMagazine = "50mm Cannons APFSDS";
		ammo = "442_50mm_apfsds";
		count = 200;
	};
	class 200rnd_laat_he_mag: 200rnd_saber_he_mag
	{
		ammo = "442_50mm_laat_he";
		displayNameShort = "50mm HE";
	};
	class 200rnd_laat_apfsds_mag: 200rnd_laat_he_mag
	{
		ammo = "442_50mm_laat_apfsds";
		displayNameShort = "50mm AP";
		displayname = "50mm APFSDS";
		displaynameMagazine = "50mm Cannons APFSDS";
		shortNameMagazine = "50mm Cannons APFSDS";
	};
};
class cfgweapons
{
	class MGun;
	class gatling_20mm;
	class missiles_titan;
	class 442_saber_gun: gatling_20mm
	{
		displayname = "50mm Cannons";
		displaynameMagazine = "50mm Cannons";
		shortNameMagazine = "50mm Cannons";
		scope = 1;
		displayNameShort = "50mm";
		magazines[] = 
		{
			"200rnd_saber_he_mag",
			"200rnd_saber_apfsds_mag",
			"200rnd_saber_he_mag_green",
			"200rnd_saber_apfsds_mag_green"
		};
		modes[] = 
		{
			"FullAuto",
			"close",
			"short",
			"medium",
		};
		reloadtime = 0.1375
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
	class 442_laat_gun: 442_saber_gun
	{
		displayname = "Laat nose guns HE";
		displaynameshort = "50mm HE";
		magazines[] = {"200rnd_laat_he_mag"};
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
					"442_laat_2\sounds\dc-15r.wss",
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
		magazines[] = {"200rnd_laat_apfsds_mag"};
		displayname = "Laat nose guns AP";
		displaynameshort = "50mm AP";
	};
	class 442_laat_gun_3: 442_laat_gun {};
};
class cfgvehicles
{
	class Helicopter;
	class Items_base_F;
	class Wreck_base_F;
    class Helicopter_Base_F : Helicopter {
        class Turrets;
		class Hitpoints;
		class CargoTurret;
    };

    class Helicopter_Base_H : Helicopter_Base_F {
        class NewTurret;
        class Turrets : Turrets {
            class MainTurret;
        };
        class AnimationSources;
        class Eventhandlers;
        class Viewoptics;
        class ViewPilot;
        class RotorLibHelicopterProperties;
        class Reflectors
        {
            class Right;
        };
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitAvionics;
		};
    };
	
	class 442_laat_2_base: Helicopter_Base_H
	{
		
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeorigins[] = 
		{
			"ropefriesorigin1",
			"ropeoriginpoint2",
			"ropeoriginpoint3",
			"ropeoriginpoint4",
		};
		ace_fastroping_onCut = "ace_fastroping_fnc_onCutCommon";
		ace_interaction_bodyWidth = 3;
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 16;
		
		weapons[] = 
		{
			"442_laat_gun",
			"442_laat_gun_2",
			// "Missile_AGM_02_Plane_CAS_01_F",
			"missiles_DAR",
			"CMFlareLauncher"
		};
		magazines[] = 
		{
			"200rnd_laat_he_mag",
			"200rnd_laat_he_mag",
			"200rnd_laat_apfsds_mag",
			"200rnd_laat_apfsds_mag",
			// "6Rnd_Missile_AGM_02_F",
			// "6Rnd_Missile_AGM_02_F",
			// "6Rnd_Missile_AGM_02_F",
			// "6Rnd_Missile_AGM_02_F",
			// "6Rnd_Missile_AGM_02_F",
			"12rnd_missiles",
			"12rnd_missiles",
			"12rnd_missiles",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		
		fuelCapacity = 2500;
		fuelConsumptionRate = 0.138;
		side = 1;
		faction = "kobra";
		crew = "SWLB_clone_pilot_base_P2";
		icon = "442_laat_2\data\ui\laat_icon.paa";
		editorpreview = "442_laat_2\data\ui\laat_preview.jpg";
		picture = "";
		availableForSupportTypes[] = {"CAS_Heli", "Drop", "Transport"};
		cost = 2000000;
		armor = 200;
        altFullForce = 10000;
        altNoForce = 15000;
		maxSpeed = 500;
		maxFordingDepth = 5;
		// gearRetracting=1;
		// gearUpTime=1;
		// gearDownTime=1;
		incomingMissileDetectionSystem = "1 + 2 + 4 + 8 + 16 + 32";
		LockDetectionSystem = "1 + 2 + 4 + 8 + 16 + 32";
		getInRadius = 3;
		hideWeaponsCargo = 1;
		cargoCanEject = 0;
		
		mainBladeRadius = 0.0;
        liftForceCoef = 3;
        bodyFrictionCoef = 11;
        cyclicAsideForceCoef = 5;
        cyclicForwardForceCoef = 3;
        backRotorForceCoef = 2;
		
		draconicForceXCoef = 11;
        draconicForceYCoef = 2;
        draconicForceZCoef = 2;
        draconicTorqueXCoef = 0.05;
        draconicTorqueYCoef = 0;
		
		accuracy = 0.5;
		displayname = "LAAT/I Gunship";
		model = "442_laat_2\Laat.p3d";
		
		driverAction = "pilot_Heli_Light_02";
		driverInAction = "pilot_Heli_Light_02";
		precisegetinout = 1;
		usePreciseGetInAction=1;
		GetInAction = "GetInLow";
		GetOutAction = "GetOutLow";
		memoryPointsGetInDriver = "pos_driver";
		memoryPointsGetInDriverDir = "pos_driver_dir";
		memoryPointsGetInCargo="pos_cargo";
		memoryPointsGetInCargoDir="pos_cargo_dir";
		memoryPointsGetInCargoPrecise[] = {"pos_cargo"};
		// transportSoldier = 4;
		transportSoldier = 16;
		memoryPointTaskMarker="TaskMarker_1_pos";
		radarType=8;
		extCameraPosition[]={0,6,-23};
		class exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectPlane";
			};
		};
		
		gunBeg[] = {"usti hlavne 1", "usti hlavne 2"};
		gunEnd[] = {"konec hlavne 1", "konec hlavne 2"};
		memoryPointGun[] = {"usti hlavne 1", "usti hlavne 2"};
		
		memorypointLRocket = "rocketl";
		memorypointRRocket = "rocketr";
		memorypointLmissile = "rocketl";
		memorypointRmissile = "rocketR";
		/*
		class VehicleTransport
		{
			class Cargo
			{
				canBeTransported=0;
			};
			class Carrier
			{
				cargoBayDimensions[]=
				{
					"VVT_cargo_1",
					"VVT_cargo_2"
				};
				disableHeightLimit=0;
				maxLoadMass=25000;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VVT_exit"
				};
				unloadingInterval=2;
				loadingDistance=10;
				loadingAngle=180;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=5;
			};
		};
		*/
		memorypointcm[] = 
		{
			"flare_launcher1",
			"flare_launcher2"
		};
		memorypointcmdir[] = 
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir"
		};
		class HitPoints
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
			class HitEngine_1: HitEngine
			{
				convexComponent = "engine_hit_1";
				name = "engine_hit_1";
				hitpoint = "engine_hit_1";
			};
			class HitEngine_2: HitEngine
			{
				convexComponent = "engine_hit_2";
				name = "engine_hit_2";
				hitpoint = "engine_hit_2";
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
		class EventHandlers: EventHandlers
		{
			init="(_this) spawn kobra_Vehicle_fnc_ImpulsorMonitor;";
		};
		cargoAction[] = 
		{
			"passenger_flatground_leanright", 
			"passenger_flatground_leanleft", 
			"passenger_boat_holdleft", 
			"passenger_boat_holdleft2", 
			"passenger_boat_holdright", 
			"passenger_boat_holdleft2", 
			"passenger_boat_holdleft", 
			"passenger_boat_holdleft2", 
			"passenger_boat_holdright", 
			"passenger_boat_holdleft2", 
			"passenger_boat_holdleft", 
			"passenger_boat_holdleft2",
			"passenger_boat_holdright",
			"passenger_boat_holdleft2",
			"passenger_boat_holdleft",
			"passenger_boat_holdright2",
		};
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		// cargoProxyIndexes[] = {1,2,13,14};
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
		driveOnComponent[]=
		{
			"Skids"
		};
		class ViewPilot: ViewPilot
		{
			initFov = 0.75;
			minFov = 0.375;
			maxFov = 1.1;
		};
		class wingvortices
		{
			class Wingtipleft
			{
				effectName = "FX_WingVortices_FighterJet";
				position = "vapour_l_pos";
			};
			class Wingtipright
			{
				effectName = "FX_WingVortices_FighterJet";
				position = "vapour_r_pos";
			};
		};
		class Viewoptics: Viewoptics 	/// pilot doesn't use optics in this vehicle
		{
			initAngleX = 0; 			/// initial horizontal angle of the optics view relative to proxy position of pilot
			minAngleX = 0; 				/// maximum turn to the left relative to proxy position of pilot
			maxAngleX = 0;				/// maximum turn to the right relative to proxy position of pilot
			initAngleY = 0; 			/// initial vertical angle of the optics view relative to proxy position of pilot
			minAngleY = 0; 				/// maximum elevation down relative to proxy position of pilot
			maxAngleY = 0;				/// maximum elevation up relative to proxy position of pilot
			initFov = 0.1; 				/// the same functionality as in ViewPilot
			minFov = 0.1;  				/// the same functionality as in ViewPilot
			maxFov = 1.2; 				/// the same functionality as in ViewPilot
		};
		class exhausts {};
		class transportweapons {};
		class transportmagazines {};
		class transportItems {};
		class transportBackpacks {};
		class compartmentslights
		{
			class comp1
			{
				class light1
				{
					color[] = {10, 20, 20};
					ambient[] = {0, 0, 0};
					intensity = 2;
					size = 0;
					useFlare = 0;
					flareSize = 0;
					flareMaxDistance = 0;
					dayLight = 0;
					blinking = 0;
					class Attenuation
					{
						start = 0;
						constant = 0;
						linear = 1;
						quadratic = 70;
						hardLimitStart = 0.15;
						hardLimitEnd = 3;
					};
					point = "light_interior1";
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner
				{
					visionMode[] = {"Normal", "NVG"};
					gunnerOpticsEffect[] = {};
					stabilizedInAxes = 0;
					directionStabilized = 0;
					horizontallyStabilized = 0;
					initFov = 1;
					minFov = 0.6;
					maxFov = 0.85;
					initAngleX = 180;
					minAngleX = 90;
					maxAngleX = 270;
					initAngleY = -45;
					minAngleY = -90;
					maxAngleY = -30;
					minMoveX = -0.1;
					maxMoveX = 0.1;
					minMoveY = -0.025;
					maxMoveY = 0.1;
					minMoveZ = -0.1;
					maxMoveZ = 0.1;
					gunnerOpticsModel = "";
				};
				visionMode[] = {"Normal", "NVG", "Ti"};
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 1000, 1200, 1500, 1800, 2100, 2400};
				class Viewoptics
				{
					visionMode[] = {"Normal", "NVG", "Ti"};
					minAngleX = 0;
					maxAngleX = 0;
					initAngleX = 0;
					minAngleY = -15;
					maxAngleY = 15;
					initAngleY = 0;
					initFov = 0.75;
					minFov = 0.25;
					maxFov = 0.75;
				};
				class OpticsIn
				{
					class Wide
					{
						visionMode[] = {"Normal", "NVG", "Ti"};
						thermalMode[] = {0, 1};
						initAngleX = 0;
						minAngleX = 0;
						maxAngleX = 0;
						initAngleY = 0;
						minAngleY = -15;
						maxAngleY = 15;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						opticsDisplayName = "W";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						opticsDisplayName = "M";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						opticsDisplayName = "N";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						visionMode[] = {"Normal", "NVG"};
						gunnerOpticsEffect[] = {};
						initAngleX = -10;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						minFov = 0.25;
						maxFov = 1.25;
						initFov = 0.75;
						gunnerOpticsModel = "";
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: Components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Missile";
							};
							class SensorDisplay
							{
								range[] = {4000, 2000, 16000, 8000};
								componentType = "SensorsDisplayComponent";
								resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						class Components: Components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Missile";
							};
							class SensorDisplay
							{
								range[] = {4000, 2000, 16000, 8000};
								componentType = "SensorsDisplayComponent";
								resource = "RscCustomInfoSensors";
							};
						};
						defaultDisplay = "SensorDisplay";
					};
				};
				gunnerOpticsEffect[] = {"TankCommanderOptics1", "BWTV"};
				primaryObserver = 0;
				primaryGunner = 1;
				primary = 1;
				usePip = 1;
				turretFollowFreeLook = 0;
				gunnerCompartments = "Compartment2";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				showHMD = 1;
				castCargoShadow = 0;
				viewCargoShadow = 0;
				castDriverShadow = 0;
				viewDriverShadow = 0;
				CanEject = 0;
				hideWeaponsGunner = 1;
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				memoryPointGunnerOutOptics = "gunnerviewout";
				discreteDistanceInitIndex = 5;
				gunnerAction = "Driver_mid01";
				gunnerInAction = "Driver_mid01";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				gunnerUsesPilotView = 0;
				commanding = -1;
				startEngine = 0;
				stabilizedInAxes=3;
				showAllTargets = 4;
				memoryPointLRocket = "RocketL";
				memoryPointRRocket = "RocketR";
				memoryPointLMissile = "RocketL";
				memoryPointRMissile = "RocketR";
				selectionFireAnim = "zasleh_b";
				weapons[] = {"442_laat_gun_3"};
				magazines[] = 
				{
					"200rnd_laat_he_mag",
					"200rnd_laat_he_mag",
				};
				gunBeg = "konec hlavne b";
				gunEnd = "usti hlavne b";
				memoryPointGun = "konec hlavne b";
				outGunnerMayFire = 1;
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				gunnerOpticsModel = "";
				gunnerForceOptics = 0;
				turretInfoType = "RscOptics_Heli_Attack_01_gunner";
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.31622776,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.31622776,
					1,
					30
				};
				minElev = -80;
				maxElev = +30;
				minTurn = 100;
				maxTurn = 260;
				initElev = -45;
				initTurn = 180;
				minCamElev=-80;
				maxCamElev=-30;
				memoryPointGunnerOptics = "gunnerview";
			};
			/*
			class cargoTurret_rearl: CargoTurret
			{
				gunnerAction = "passenger_inside_3";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "Passenger (Ramp Left)";
				gunnerCompartments = "Compartment4";
				isPersonTurret=1;
				playerPosition=12;
				ejectDeadGunner=1;
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				proxyIndex = 16;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				castCargoShadow = 1;
				viewCargoShadow = 1;
				castDriverShadow = 0;
				viewDriverShadow = 0;
				showAsCargo = 1;
				dontCreateAI = 0;
				enabledByAnimationSource = "";
			};
			class cargoTurret_rearr: cargoTurret_rearl
			{
				gunnerName = "Passenger (Ramp Right)";
				proxyIndex = 15;
			};
			class cargoturret_left_1: cargoTurret_rearl
			{
				gunnerName = "Passenger (Left Side)";
				proxyIndex = 3;
			};
			class cargoTurret_left_2: cargoturret_left_1
			{
				proxyIndex = 4;
			};
			class cargoTurret_left_3: cargoturret_left_1
			{
				proxyIndex = 5;
			};
			class cargoTurret_left_4: cargoturret_left_1
			{
				proxyIndex = 6;
			};
			class cargoTurret_left_5: cargoturret_left_1
			{
				proxyIndex = 7;
			};
			class cargoturret_right_1: cargoTurret_rearl
			{
				gunnerName = "Passenger (Right Side)";
				proxyIndex = 8;
			};
			class cargoTurret_right_2: cargoturret_right_1
			{
				proxyIndex = 9;
			};
			class cargoTurret_right_3: cargoturret_right_1
			{
				proxyIndex = 10;
			};
			class cargoTurret_right_4: cargoturret_right_1
			{
				proxyIndex = 11;
			};
			class cargoTurret_right_5: cargoturret_right_1
			{
				proxyIndex = 12;
			};
			*/
		};
		class Reflectors
		{
			class Left
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=50;
				size=1;
				innerAngle=15;
				outerAngle=65;
				coneFadeCoef=10;
				useFlare=1;
				flareSize=10;
				flareMaxDistance=250;
				dayLight=1;
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
		class animationsources
		{
			class laat_ramp_open
			{
				source = "user";
				animPeriod = 2;
				initphase = 0;
			};
			class hidedoor1
			{
				displayname = "Show Front Left Door";
				Author = "kripto202";
				source = "user";
				animperiod = 0.001;
				initphase = 1;
				mass = "-50";
			};
			class hidedoor2: hidedoor1
			{
				displayname = "Show Back Left Door";
				mass = "-70";
			};
			class hidedoor3: hidedoor1
			{
				displayname = "Show Ramp";
			};
			class hidedoor4: hidedoor1
			{
				displayname = "Show Front Right Door";
			};
			class hidedoor5: hidedoor2
			{
				displayname = "Show Back Right Door";
			};
			class laat_door_l
			{
				source = "user";
				animPeriod = 2;
				initphase = 0;
			};
			class laat_door_r
			{
				source = "user";
				animPeriod = 2;
				initphase = 0;
			};
		};
		class Attributes
		{
			class hidedoor1
			{
				displayname = "Show Front Left Door";
				property = "hidedoor1";
				control = "CheckboxNumber";
				defaultvalue = 1;
				expression = "_this animateSource ['%s',_value,true]";
			};
			class hidedoor2: hidedoor1
			{
				displayname = "Show Back Left Door";
				property = "hidedoor2";
			};
			class hidedoor3: hidedoor1
			{
				displayname = "Ramp";
				property = "hidedoor3";
			};
			class hidedoor4: hidedoor1
			{
				displayname = "Show Front Right Door";
				property = "hidedoor4";
			};
			class hidedoor5: hidedoor1
			{
				displayname = "Show Back Right Door";
				property = "hidedoor5";
			};
		};
		animationlist[] = 
		{
			"laat_ramp_open", 0,
			"laat_door_l_close", 0,
			"laat_door_l_open", 0,
			"laat_door_r_close", 0,
			"laat_door_r_open", 0,
			"laat_door_open", 0,
			"laat_door_close", 0,
		};
		class useractions
		{
			class laat_ramp_open
			{
				displayname = "Open Ramp";
				position = "pilotview";
				priority = "107";
				radius = 5;
				onlyforplayer = 0;
				condition = "(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_ramp_open"" == 0;";
				statement = "this animatesource [""laat_ramp_open"",1]; [this, ""laat_ramp""] remoteExec [""say3d"",0,false]; ";
			};
			class laat_ramp_close: laat_ramp_open
			{
				displayname = "Close Ramp";
				priority = "108";
				condition = "(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_ramp_open"" == 1;";
				statement = "this animatesource[""laat_ramp_open"",0]; [this, ""laat_ramp""] remoteExec [""say3d"",0,false];";
			};
			class laat_door_close: laat_ramp_open
			{
				displayname = "Close Doors";
				priority = "101";
				condition = "(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_door_l"" == 0 AND this animationsourcephase ""laat_door_r"" == 0;";
				statement = "this animatesource [""laat_door_l"",1]; this animatesource [""laat_door_r"",1]; [this, ""laat_door_close""] remoteExec [""say3d"",0,false];";
			};
			class laat_door_open: laat_ramp_open
			{
				displayname = "Open Doors";
				priority = "102";
				condition = "(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_door_l"" == 1 AND this animationsourcephase ""laat_door_r"" == 1;";
				statement = "this animatesource [""laat_door_l"",0]; this animatesource [""laat_door_r"",0]; [this, ""laat_door_open""] remoteExec [""say3d"",0,false];";
			};
			class laat_door_r_close: laat_ramp_open
			{
				displayname = "Close Right Doors";
				priority = "103";
				condition = "(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_door_r"" == 0;";
				statement = "this animatesource [""laat_door_r"",1]; [this, ""laat_door_close""] remoteExec [""say3d"",0,false];";
			};
			class laat_door_r_open: laat_ramp_open
			{
				displayname = "Open Right Doors";
				priority = "104";
				condition = "(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_door_r"" == 1;";
				statement = "this animatesource [""laat_door_r"",0]; [this, ""laat_door_open""] remoteExec [""say3d"",0,false];";
			};
			class laat_door_l_close: laat_ramp_open
			{
				displayname = "Close Left Doors";
				priority = "105";
				condition = "(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_door_l"" == 0;";
				statement = "this animatesource [""laat_door_l"",1]; [this, ""laat_door_close""] remoteExec [""say3d"",0,false];";
			};
			class laat_door_l_open: laat_ramp_open
			{
				displayname = "Open Left Doors";
				priority = "106";
				condition = "(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_door_l"" == 1;";
				statement = "this animatesource [""laat_door_l"",0]; [this, ""laat_door_open""] remoteExec [""say3d"",0,false];";
			};
			class impulse
			{
				displayName = "Impulse";
				position = "pilotview";
				radius = 5;
				onlyforplayer = 0;
				shortcut = "User19";
				condition = "isEngineOn this and player == driver this;";
				statement = "this call kobra_Vehicle_fnc_ImpulseJoystick";
			};
			class repulse : impulse
			{
				displayName = "Repulse";
				shortcut = "User20";
				condition = "isEngineOn this and player == driver this;";
				statement = "this call kobra_Vehicle_fnc_RepulseJoystick";
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
			class TransportPylonsComponent
			{
				uiPicture="\442_laat_2\data\ui\laat_ui.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "PylonRack_Missile_AMRAAM_D_x1";
						priority = 5;
						hardpoints[] = 
						{
							"SCALPEL_1RND", 
							"B_ASRAAM", 
							"DAR", 
							"DAGR", 
							"B_AMRAAM_D_DUAL_RAIL", 
							"B_SDB_QUAD_RAIL", 
							"B_GBU12",
							"B_AGM65_RAIL"
						};
						turret[] = {};
						UIposition[] = {0.06, 0.4};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment = "PylonRack_Missile_AMRAAM_D_x1";
						priority = 4;
						hardpoints[] = 
						{
							"SCALPEL_1RND", 
							"B_ASRAAM", 
							"DAR", 
							"DAGR", 
							"B_AMRAAM_D_DUAL_RAIL", 
							"B_SDB_QUAD_RAIL", 
							"B_GBU12",
							"B_AGM65_RAIL"
						};
						UIposition[] = {0.08, 0.35};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment = "PylonRack_Missile_AMRAAM_D_x1";
						priority = 3;
						hardpoints[] = 
						{
							"SCALPEL_1RND", 
							"B_ASRAAM", 
							"DAR", 
							"DAGR", 
							"B_AMRAAM_D_DUAL_RAIL", 
							"B_SDB_QUAD_RAIL", 
							"B_GBU12",
							"B_AGM65_RAIL"
						};
						UIposition[] = {0.1, 0.3};
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos = 3;
						UIposition[] = {0.59, 0.3};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos = 2;
						UIposition[] = {0.62, 0.35};
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
						attachment[] = {"PylonMissile_1Rnd_AAA_missiles", "PylonMissile_1Rnd_AAA_missiles", "PylonRack_12Rnd_PG_missiles", "PylonRack_12Rnd_PG_missiles", "PylonMissile_1Rnd_AAA_missiles", "PylonMissile_1Rnd_AAA_missiles"};
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
			class TransportCounterMeasuresComponent;
		};
		class MFD
		{
			class AirplaneHUD
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.1, 0.6, 1, 1};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.0375, 0.0375, 0.1};
				helmetRight[] = {0.075, 0, 0};
				helmetDown[] = {0, -0.075, 0};
				enableParallax = 1;
				font = "LucidaConsoleB";
				class Bones
				{
					class HUDCenter
					{
						type = "fixed";
						pos[] = {0.5, 0.5};
					};
					class HorizonBankSource
					{
						type = "rotational";
						source = "HorizonBank";
						center[] = {0.5, 0.5};
						min = -6.2831;
						max = 6.2831;
						minAngle = -360;
						maxAngle = 360;
					};
					class HorizonDiveSource
					{
						source = "horizonDive";
						type = "linear";
						min = -1;
						max = 1;
						minPos[] = {0.5, 2.5};
						maxPos[] = {0.5, -1.5};
					};
					class VelocityVector
					{
						type = "vector";
						source = "velocityToView";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.734, 0.73};
					};
					class ForwardVector
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {0.234, 0.23};
					};
					class GunnerAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0, -0.0025};
						pos10[] = {0.01, 0.0025};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weaponToView";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.734, 0.73};
					};
					class SliderDiveSource
					{
						type = "linear";
						source = "horizonDive";
						min = "RAD(-10)";
						max = "RAD(10)";
						minPos[] = {0.105, 0.38};
						maxPos[] = {0.105, 0.54};
					};
					class SliderDiveSource30: SliderDiveSource
					{
						min = "RAD(10)";
						max = "RAD(30)";
						minPos[] = {0, -0.04};
						maxPos[] = {0, "0)"};
					};
					class SliderDiveSource90: SliderDiveSource30
					{
						min = "RAD(30)";
						max = "RAD(90)";
						minPos[] = {0, -0.04};
					};
					class SliderDiveSource30m: SliderDiveSource
					{
						min = "RAD(-30)";
						max = "RAD(-10)";
						minPos[] = {0, 0};
						maxPos[] = {0, 0.04};
					};
					class SliderDiveSource90m: SliderDiveSource30m
					{
						min = "RAD(-90)";
						max = "RAD(-30)";
						maxPos[] = {0, 0.04};
					};
					class SliderAltitudeSource
					{
						type = "linear";
						source = "altitudeAGL";
						sourceOffset = -3;
						min = 0;
						max = 1000;
						minPos[] = {0.885, 0.2};
						maxPos[] = {0.885, 0.375};
					};
					class GForceSource
					{
						type = "linear";
						source = "gmeter";
						sourceScale = 0.15;
						min = -1;
						max = 3;
						minPos[] = {0.105, 0.7};
						maxPos[] = {0.105, 0.86};
					};
					class SliderVSpeedSource
					{
						type = "linear";
						source = "vspeed";
						min = -15;
						max = 15;
						minPos[] = {0.795, 0.6};
						maxPos[] = {0.795, 0.84};
					};
					class ImpactPoint
					{
						type = "vector";
						source = "ImpactPointToView";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.734, 0.73};
					};
					class WPPoint
					{
						type = "vector";
						source = "WPPointToView";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.734, 0.73};
					};
					class rtdRPM1
					{
						type = "linear";
						source = "rpm";
						min = 0.1;
						max = 1;
						minPos[] = {0, -0.075};
						maxPos[] = {0, 0};
					};
					class rtdRPM2: rtdRPM1
					{
						source = "rpm";
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1, 0.1, 0.9, 0.9};
					};
					class Target
					{
						source = "targettoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.734, 0.73};
					};
					class MissileFlightTimeRot1
					{
						type = "rotational";
						source = "MissileFlightTime";
						sourceScale = 0.46;
						center[] = {0, 0};
						min = 0;
						max = 0.5;
						minAngle = 0;
						maxAngle = 18;
						aspectRatio = 0.982906;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle = 36;
						max = 1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle = 54;
						max = 1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle = 72;
						max = 2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle = 90;
						max = 2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle = 108;
						max = 3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle = 126;
						max = 3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle = 144;
						max = 4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle = 162;
						max = 4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle = 180;
						max = 5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle = 198;
						max = 5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle = 216;
						max = 6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle = 234;
						max = 6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle = 252;
						max = 7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle = 270;
						max = 7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle = 288;
						max = 8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle = 306;
						max = 8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle = 324;
						max = 9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle = 342;
						max = 9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle = 360;
						max = 10;
					};
					class HorizonBankRotFull
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0, 0};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Airport1
					{
						type = "vector";
						source = "airportCorner1";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.734, 0.73};
					};
					class Airport2: Airport1
					{
						source = "airportCorner2";
					};
					class Airport3: Airport1
					{
						source = "airportCorner3";
					};
					class Airport4: Airport1
					{
						source = "airportCorner4";
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5, 0.5};
						pos3[] = {0.5702, 0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5, 0.569};
					};
				};
				class Draw
				{
					alpha = 1;
					color[] = {0.1, 0.6, 1, 1};
					condition = "on";
					class VelocityLine
					{
						type = "line";
						width = 2;
						points[] = {{"HUDCenter", 1}, {"VelocityVector", 1}, {}, {"VelocityVector", {0, -0.00491453}, 1}, {"VelocityVector", {0.0025, -0.00425598}, 1}, {"VelocityVector", {0.00433, -0.00245726}, 1}, {"VelocityVector", {0.005, 0}, 1}, {"VelocityVector", {0.00433, 0.00245726}, 1}, {"VelocityVector", {0.0025, 0.00425598}, 1}, {"VelocityVector", {0, 0.00491453}, 1}, {"VelocityVector", {-0.0025, 0.00425598}, 1}, {"VelocityVector", {-0.00433, 0.00245726}, 1}, {"VelocityVector", {-0.005, 0}, 1}, {"VelocityVector", {-0.00433, -0.00245726}, 1}, {"VelocityVector", {-0.0025, -0.00425598}, 1}, {"VelocityVector", {0, -0.00491453}, 1}, {}};
					};
					class Static
					{
						type = "line";
						width = 3;
						points[] = {{"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.015, 0.01}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0, 0}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.015, -0.01}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.015, 0.01}, 1}, {}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.03, 0.015}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.088, 0.015}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.088, -0.015}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.03, -0.015}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.03, 0.015}, 1}, {}, {{0.1, 0.3}, 1}, {{0.1, 0.62}, 1}, {}, {{0.1, 0.3}, 1}, {{0.08, 0.3}, 1}, {}, {{0.1, 0.34}, 1}, {{0.08, 0.34}, 1}, {}, {{0.1, 0.38}, 1}, {{0.08, 0.38}, 1}, {}, {{0.1, 0.46}, 1}, {{0.08, 0.46}, 1}, {}, {{0.1, 0.54}, 1}, {{0.08, 0.54}, 1}, {}, {{0.1, 0.58}, 1}, {{0.08, 0.58}, 1}, {}, {{0.1, 0.62}, 1}, {{0.08, 0.62}, 1}, {}, {"GForceSource", {0.015, 0.01}, 1}, {"GForceSource", {0, 0}, 1}, {"GForceSource", {0.015, -0.01}, 1}, {"GForceSource", {0.015, 0.01}, 1}, {}, {{0.1, 0.688}, 1}, {{0.1, 0.82}, 1}, {}, {{0.1, 0.7}, 1}, {{0.08, 0.7}, 1}, {}, {{0.1, 0.74}, 1}, {{0.08, 0.74}, 1}, {}, {{0.1, 0.78}, 1}, {{0.08, 0.78}, 1}, {}, {{0.1, 0.82}, 1}, {{0.08, 0.82}, 1}, {}, {{0.4, 0.86}, 1}, {{0.4, 0.94}, 1}, {{0.6, 0.94}, 1}, {{0.6, 0.86}, 1}, {{0.4, 0.86}, 1}, {}, {{0.4, 0.885}, 1}, {{0.408, 0.885}, 1}, {}, {{0.6, 0.885}, 1}, {{0.592, 0.885}, 1}, {}, {{0.5, 0.86}, 1}, {{0.5, 0.868}, 1}, {}, {{0.5, 0.94}, 1}, {{0.5, 0.932}, 1}, {}, {{0.52, 0.08}, 1}, {{0.5, 0.11}, 1}, {{0.48, 0.08}, 1}, {{0.52, 0.08}, 1}, {}, {{0.46, 0.07}, 1}, {{0.54, 0.07}, 1}, {{0.54, 0.035}, 1}, {{0.46, 0.035}, 1}, {{0.46, 0.07}, 1}, {}, {{0.15, 0.115}, 1}, {{0.85, 0.115}, 1}, {}, {{0, 0.96}, 1}, {{1.1, 0.96}, 1}, {}, {{0.48, 0.5}, 1}, {{0.49, 0.5}, 1}, {}, {{0.51, 0.5}, 1}, {{0.52, 0.5}, 1}, {}, {{0.5, 0.49}, 1}, {{0.5, 0.48}, 1}, {}, {{0.5, 0.51}, 1}, {{0.5, 0.52}, 1}, {}, {"WeaponAim", 1, {-0.02, 0}, 1}, {"WeaponAim", 1, {-0.01, 0}, 1}, {}, {"WeaponAim", 1, {0.01, 0}, 1}, {"WeaponAim", 1, {0.02, 0}, 1}, {}, {"WeaponAim", 1, {0, -0.01}, 1}, {"WeaponAim", 1, {0, -0.02}, 1}, {}, {"WeaponAim", 1, {0, 0.01}, 1}, {"WeaponAim", 1, {0, 0.02}, 1}, {}, {"HUDCenter", {-0.165, 7.08909e-009}, 1}, {"HUDCenter", {-0.22, 9.45212e-009}, 1}, {}, {"HUDCenter", {0.165, -1.93397e-009}, 1}, {"HUDCenter", {0.22, -2.57863e-009}, 1}, {}, {"HUDCenter", {-0.0825, 0.140452}, 1}, {"HUDCenter", {-0.09625, 0.16386}, 1}, {}, {"HUDCenter", {0.0825, 0.140452}, 1}, {"HUDCenter", {0.09625, 0.16386}, 1}, {}, {"HUDCenter", {-0.142894, 0.0810898}, 1}, {"HUDCenter", {-0.16671, 0.0946047}, 1}, {}, {"HUDCenter", {0.142894, 0.0810897}, 1}, {"HUDCenter", {0.16671, 0.0946047}, 1}, {}, {"HUDCenter", {-0.116673, 0.114678}, 1}, {"HUDCenter", {-0.155564, 0.152904}, 1}, {}, {"HUDCenter", {0.116673, 0.114678}, 1}, {"HUDCenter", {0.155563, 0.152904}, 1}, {}, {}};
					};
					class Gunner
					{
						type = "line";
						width = 4;
						points[] = {{"GunnerAim", {0.485, 0.892}, 1}, {"GunnerAim", {0.485, 0.908}, 1}, {"GunnerAim", {0.515, 0.908}, 1}, {"GunnerAim", {0.515, 0.892}, 1}, {"GunnerAim", {0.485, 0.892}, 1}};
					};
					class DiveNumber
					{
						type = "text";
						source = "horizondive";
						sourceScale = 57.2958;
						sourceOffset = 0;
						align = "left";
						scale = 1;
						pos[] = {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.085, "0.00-0.011"}, 1};
						right[] = {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.12, "0.00-0.011"}, 1};
						down[] = {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.085, "0.03-0.011"}, 1};
					};
					class VSpeedGroup
					{
						condition = "on";
						class VSpeedNumber
						{
							type = "text";
							source = "vspeed";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{"0.82+0.07", 0.728}, 1};
							right[] = {{"0.86+0.07", 0.728}, 1};
							down[] = {{"0.82+0.07", 0.763}, 1};
						};
						class Static
						{
							type = "line";
							width = 3;
							points[] = {{{0.849, 0.76}, 1}, {{0.929, 0.76}, 1}, {{0.929, 0.725}, 1}, {{0.849, 0.725}, 1}, {{0.849, 0.76}, 1}, {}};
						};
					};
					class VSpeedGroupUp
					{
						condition = "vspeed";
						class Static
						{
							type = "line";
							width = 3;
							points[] = {{{0.869, 0.715}, 1}, {{0.909, 0.715}, 1}, {{0.889, 0.695}, 1}, {{0.869, 0.715}, 1}, {}};
						};
					};
					class VSpeedGroupDown
					{
						condition = "-vspeed";
						class Static
						{
							type = "line";
							width = 3;
							points[] = {{{0.869, 0.77}, 1}, {{0.909, 0.77}, 1}, {{0.889, 0.79}, 1}, {{0.869, 0.77}, 1}, {}};
						};
					};
					class AltGroup
					{
						condition = "1000 - altitudeAGL";
						class Static
						{
							type = "line";
							width = 3;
							points[] = {{"SliderAltitudeSource", {0.024, 0.01}, 1}, {"SliderAltitudeSource", {0.009, 0}, 1}, {"SliderAltitudeSource", {0.024, -0.01}, 1}, {"SliderAltitudeSource", {0.024, 0.01}, 1}, {}, {"SliderAltitudeSource", {0.035, 0.015}, 1}, {"SliderAltitudeSource", {0.093, 0.015}, 1}, {"SliderAltitudeSource", {0.093, -0.015}, 1}, {"SliderAltitudeSource", {0.035, -0.015}, 1}, {"SliderAltitudeSource", {0.035, 0.015}, 1}, {}, {{0.889, 0.2}, 1}, {{0.889, 0.375}, 1}, {}, {{0.879, 0.2}, 1}, {{0.899, 0.2}, 1}, {}, {{0.879, 0.375}, 1}, {{0.899, 0.375}, 1}, {}};
						};
						class AltNumber
						{
							type = "text";
							source = "altitudeAGL";
							sourceScale = 1;
							sourceOffset = -3;
							align = "left";
							scale = 1;
							pos[] = {"SliderAltitudeSource", {0.085, "0.00-0.011"}, 1};
							right[] = {"SliderAltitudeSource", {0.11, "0.00-0.011"}, 1};
							down[] = {"SliderAltitudeSource", {0.085, "0.03-0.011"}, 1};
						};
						class AltStatic50
						{
							type = "text";
							source = "static";
							text = "1000";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.885, 0.171}, 1};
							right[] = {{0.925, 0.171}, 1};
							down[] = {{0.885, 0.201}, 1};
						};
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						sourceLength = 3;
						align = "left";
						scale = 1;
						pos[] = {{0.13, 0.22}, 1};
						down[] = {{0.13, 0.26}, 1};
						right[] = {{0.2, 0.22}, 1};
					};
					class HeadingNumber
					{
						type = "text";
						source = "heading";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = {{"0.80-0.302", "0.082-0.043"}, 1};
						right[] = {{"0.84-0.302", "0.082-0.043"}, 1};
						down[] = {{"0.80-0.302", "0.117-0.043"}, 1};
					};
					class Angle_90
					{
						type = "text";
						source = "static";
						text = "90";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.285}, 1};
						right[] = {{0.11, 0.285}, 1};
						down[] = {{0.07, 0.315}, 1};
					};
					class Angle_30
					{
						type = "text";
						source = "static";
						text = "30";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.325}, 1};
						right[] = {{0.11, 0.325}, 1};
						down[] = {{0.07, 0.355}, 1};
					};
					class Angle_10
					{
						type = "text";
						source = "static";
						text = "10";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.365}, 1};
						right[] = {{0.11, 0.365}, 1};
						down[] = {{0.07, 0.395}, 1};
					};
					class Angle_0
					{
						type = "text";
						source = "static";
						text = "0";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.445}, 1};
						right[] = {{0.11, 0.445}, 1};
						down[] = {{0.07, 0.475}, 1};
					};
					class Angle_10m
					{
						type = "text";
						source = "static";
						text = "-10";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.525}, 1};
						right[] = {{0.11, 0.525}, 1};
						down[] = {{0.07, 0.555}, 1};
					};
					class Angle_30m
					{
						type = "text";
						source = "static";
						text = "-30";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.565}, 1};
						right[] = {{0.11, 0.565}, 1};
						down[] = {{0.07, 0.595}, 1};
					};
					class Angle_90m
					{
						type = "text";
						source = "static";
						text = "-90";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.605}, 1};
						right[] = {{0.11, 0.605}, 1};
						down[] = {{0.07, 0.635}, 1};
					};
					class GMeterStatic3
					{
						type = "text";
						source = "static";
						text = "3";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.683}, 1};
						right[] = {{0.11, 0.683}, 1};
						down[] = {{0.07, 0.713}, 1};
					};
					class GMeterStatic2
					{
						type = "text";
						source = "static";
						text = "2";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.723}, 1};
						right[] = {{0.11, 0.723}, 1};
						down[] = {{0.07, 0.753}, 1};
					};
					class GMeterStatic1
					{
						type = "text";
						source = "static";
						text = "1";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.763}, 1};
						right[] = {{0.11, 0.763}, 1};
						down[] = {{0.07, 0.793}, 1};
					};
					class GMeterStatic0
					{
						type = "text";
						source = "static";
						text = "0";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.803}, 1};
						right[] = {{0.11, 0.803}, 1};
						down[] = {{0.07, 0.833}, 1};
					};
					class CollectiveNumber
					{
						type = "text";
						source = "throttle";
						sourceScale = 100;
						align = "left";
						scale = 1;
						pos[] = {{0.889, 0.46}, 1};
						right[] = {{0.939, 0.46}, 1};
						down[] = {{0.889, 0.495}, 1};
					};
					class CollectiveText
					{
						type = "text";
						source = "static";
						text = "%";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.899, 0.46}, 1};
						right[] = {{0.949, 0.46}, 1};
						down[] = {{0.899, 0.495}, 1};
					};
					class HeadingScale
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 0.1;
						sourceoffset = 0;
						width = 3;
						NeverEatSeaWeed = 1;
						top = 0.15;
						center = 0.5;
						bottom = 0.85;
						lineXleft = 0.114;
						lineYright = 0.12;
						lineXleftMajor = 0.114;
						lineYrightMajor = 0.13;
						majorLineEach = 2;
						numberEach = 6;
						step = 0.5;
						stepSize = 0.0344828;
						align = "center";
						scale = 1;
						pos[] = {0.15, 0.13};
						right[] = {0.21, 0.13};
						down[] = {0.15, 0.17};
					};
					class HorizonBanking
					{
						type = "line";
						width = 3;
						clipTL[] = {0, 0.1};
						clipBR[] = {1, 0.9};
						points[] = {{"HorizonBankSource", {0.16, 0}, 1}, {"HorizonBankSource", {0.1, 0}, 1}, {"HorizonBankSource", {0.085, -0.015}, 1}, {"HorizonBankSource", {0.07, 0}, 1}, {"HorizonBankSource", {0.05, 0}, 1}, {}, {"HorizonBankSource", {-0.16, 0}, 1}, {"HorizonBankSource", {-0.1, 0}, 1}, {"HorizonBankSource", {-0.085, -0.015}, 1}, {"HorizonBankSource", {-0.07, 0}, 1}, {"HorizonBankSource", {-0.05, 0}, 1}, {}};
					};
					class CoordXNumber
					{
						type = "text";
						source = "coordinateX";
						sourceScale = 0.01;
						sourceLength = 3;
						sourceOffset = -0.5;
						align = "right";
						scale = 1;
						pos[] = {{0.809, 0.961}, 1};
						right[] = {{0.859, 0.961}, 1};
						down[] = {{0.809, 0.996}, 1};
					};
					class CoordYNumber: CoordXNumber
					{
						source = "coordinateY";
						pos[] = {{0.899, 0.961}, 1};
						right[] = {{0.949, 0.961}, 1};
						down[] = {{0.899, 0.996}, 1};
					};
					class Time: CoordXNumber
					{
						source = "time";
						text = "%X";
						align = "left";
						pos[] = {{0.605, 0.961}, 1};
						right[] = {{0.655, 0.961}, 1};
						down[] = {{0.605, 0.996}, 1};
					};
					class CurrentWeapon
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.979, 0.889}, 1};
						right[] = {{1.029, 0.889}, 1};
						down[] = {{0.979, 0.924}, 1};
					};
					class CurrentAmmo: CurrentWeapon
					{
						source = "ammo";
						align = "left";
						pos[] = {{0.979, 0.921}, 1};
						right[] = {{1.029, 0.921}, 1};
						down[] = {{0.979, 0.956}, 1};
					};
					class CoordXText
					{
						type = "text";
						source = "static";
						text = "GRID:";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.655, 0.961}, 1};
						right[] = {{0.705, 0.961}, 1};
						down[] = {{0.655, 0.996}, 1};
					};
					class CoordYText
					{
						type = "text";
						source = "static";
						text = "";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.875, 0.961}, 1};
						right[] = {{0.925, 0.961}, 1};
						down[] = {{0.875, 0.996}, 1};
					};
					class LightsGroup
					{
						condition = "lights";
						class LightsText
						{
							type = "text";
							source = "static";
							text = "LIGHT";
							align = "left";
							scale = 1;
							pos[] = {{0.149, 0.961}, 1};
							right[] = {{0.199, 0.961}, 1};
							down[] = {{0.149, 0.996}, 1};
						};
					};
					class CollisionLights
					{
						condition = "collisionlights";
						class CollisionLightsText
						{
							type = "text";
							source = "static";
							text = "COLL";
							align = "left";
							scale = 1;
							pos[] = {{0.309, 0.961}, 1};
							right[] = {{0.359, 0.961}, 1};
							down[] = {{0.309, 0.996}, 1};
						};
					};
					class WeaponsLocking
					{
						condition = "missilelocking";
						blinkingPattern[] = {0.2, 0.2};
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "LOCKING";
							align = "center";
							scale = 1;
							pos[] = {{0.215, 0.879701}, 1};
							right[] = {{0.275, 0.879701}, 1};
							down[] = {{0.215, 0.928846}, 1};
						};
					};
					class TargetInfo
					{
						condition = "missilelocked";
						class TargetLockedText
						{
							type = "text";
							source = "static";
							text = "TARGET ACQUIRED";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.195, 0.859}, 1};
							right[] = {{0.235, 0.859}, 1};
							down[] = {{0.195, 0.89}, 1};
						};
						class TimeOfFlightText
						{
							type = "text";
							source = "static";
							text = "TOF:";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{"0.127+0.13", 0.889}, 1};
							right[] = {{0.302, 0.889}, 1};
							down[] = {{"0.127+0.13", 0.924}, 1};
						};
						class DistanceText
						{
							type = "text";
							source = "static";
							text = "DISTANCE:";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{"0.125+0.13", 0.921}, 1};
							right[] = {{0.3, 0.921}, 1};
							down[] = {{"0.125+0.13", 0.956}, 1};
						};
						class TOF_source: CurrentWeapon
						{
							source = "missileflighttime";
							align = "right";
							pos[] = {{0.269, 0.889}, 1};
							right[] = {{0.319, 0.889}, 1};
							down[] = {{0.269, 0.924}, 1};
						};
						class TargetDistance: CurrentWeapon
						{
							source = "targetDist";
							sourceLength = 0;
							sourcePrecision = 1;
							sourceScale = 0.001;
							align = "right";
							pos[] = {{0.269, 0.921}, 1};
							right[] = {{0.319, 0.921}, 1};
							down[] = {{0.269, 0.956}, 1};
						};
					};
					class IncomingMissile
					{
						condition = "incomingmissile";
						blinkingPattern[] = {0.3, 0.3};
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "!INCOMING MISSILE!";
							align = "center";
							scale = 1;
							pos[] = {{0.485, 0.216239}, 1};
							right[] = {{0.545, 0.216239}, 1};
							down[] = {{0.485, 0.265385}, 1};
						};
					};
					class GearGroup
					{
						type = "group";
						condition = "ils";
						class GearText
						{
							type = "text";
							source = "static";
							text = "DOORS";
							align = "center";
							scale = 1;
							pos[] = {{0.5, 0.825641}, 1};
							right[] = {{0.54, 0.825641}, 1};
							down[] = {{0.5, 0.855128}, 1};
						};
					};
					class MGun
					{
						condition = "mgun+rocket";
						class Cross
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPoint", {0, -0.0294872}, 1}, {"ImpactPoint", {0, -0.0393162}, 1}, {}, {"ImpactPoint", {0.02, -0.024}, 1}, {"ImpactPoint", {0.025, -0.031}, 1}, {}, {"ImpactPoint", {0, -0.002}, 1}, {"ImpactPoint", {0, 0.002}, 1}, {}, {"ImpactPoint", {-0.002, 0}, 1}, {"ImpactPoint", {0.002, 0}, 1}, {}};
						};
						class Circle
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPoint", {0, -0.0344017}, 1}, {"MissileFlightTimeRot1", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot2", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot3", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot4", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot5", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot6", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot7", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot8", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot9", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot10", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot11", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot12", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot13", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot14", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot15", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot16", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot17", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot18", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot19", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot20", {0, 0.035}, 1, "ImpactPoint", 1}};
						};
						class Circle_Min_Range
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPoint", {0, -0.0294872}, 1}, {"ImpactPoint", {0.005208, -0.029039}, 1}, {"ImpactPoint", {0.01026, -0.0277091}, 1}, {"ImpactPoint", {0.015, -0.0255359}, 1}, {"ImpactPoint", {0.019284, -0.0225872}, 1}, {"ImpactPoint", {0.02298, -0.0189544}, 1}, {"ImpactPoint", {0.02598, -0.0147436}, 1}, {"ImpactPoint", {0.028191, -0.0100846}, 1}, {"ImpactPoint", {0.029544, -0.00511897}, 1}, {"ImpactPoint", {0.03, 0}, 1}, {"ImpactPoint", {0.029544, 0.00511897}, 1}, {"ImpactPoint", {0.028191, 0.0100846}, 1}, {"ImpactPoint", {0.02598, 0.0147436}, 1}, {"ImpactPoint", {0.02298, 0.0189544}, 1}, {"ImpactPoint", {0.019284, 0.0225872}, 1}, {"ImpactPoint", {0.015, 0.0255359}, 1}, {"ImpactPoint", {0.01026, 0.0277091}, 1}, {"ImpactPoint", {0.005208, 0.029039}, 1}, {"ImpactPoint", {0, 0.0294872}, 1}, {"ImpactPoint", {-0.005208, 0.029039}, 1}, {"ImpactPoint", {-0.01026, 0.0277091}, 1}, {"ImpactPoint", {-0.015, 0.0255359}, 1}, {"ImpactPoint", {-0.019284, 0.0225872}, 1}, {"ImpactPoint", {-0.02298, 0.0189544}, 1}, {"ImpactPoint", {-0.02598, 0.0147436}, 1}, {"ImpactPoint", {-0.028191, 0.0100846}, 1}, {"ImpactPoint", {-0.029544, 0.00511897}, 1}, {"ImpactPoint", {-0.03, 0}, 1}, {"ImpactPoint", {-0.029544, -0.00511897}, 1}, {"ImpactPoint", {-0.028191, -0.0100846}, 1}, {"ImpactPoint", {-0.02598, -0.0147436}, 1}, {"ImpactPoint", {-0.02298, -0.0189544}, 1}, {"ImpactPoint", {-0.019284, -0.0225872}, 1}, {"ImpactPoint", {-0.015, -0.0255359}, 1}, {"ImpactPoint", {-0.01026, -0.0277091}, 1}, {"ImpactPoint", {-0.005208, -0.029039}, 1}, {"ImpactPoint", {0, -0.0294872}, 1}};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = {"ImpactPoint", {-0.002, -0.08}, 1};
							right[] = {"ImpactPoint", {0.045, -0.08}, 1};
							down[] = {"ImpactPoint", {-0.002, -0.04}, 1};
						};
					};
					class WP
					{
						condition = "wpvalid";
						class WPdist
						{
							type = "text";
							source = "wpdist";
							sourceScale = 0.001;
							sourcePrecision = 1;
							align = "left";
							scale = 1;
							pos[] = {{0.935, 0.810897}, 1};
							right[] = {{0.995, 0.810897}, 1};
							down[] = {{0.935, 0.860043}, 1};
						};
						class WPstatic
						{
							type = "text";
							source = "static";
							text = ">";
							align = "center";
							scale = 2;
							pos[] = {{0.95, 0.810897}, 1};
							right[] = {{0.97, 0.810897}, 1};
							down[] = {{0.95, 0.860043}, 1};
						};
						class WPIndex
						{
							type = "text";
							source = "wpIndex";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.96, 0.810897}, 1};
							right[] = {{1.02, 0.810897}, 1};
							down[] = {{0.96, 0.860043}, 1};
						};
						class WP
						{
							width = 1;
							type = "line";
							points[] = {{"wppoint", 1, {"HorizonBankRotFull", 0.015, -0.035}, 1}, {"wppoint", 1, {"HorizonBankRotFull", 0, 0}, 1}, {"wppoint", 1, {"HorizonBankRotFull", -0.015, -0.035}, 1}};
						};
					};
					class RadarBoxes
					{
						type = "radartoview";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.734, 0.73};
						width = 2;
						points[] = {{{-0.002, -0.00196581}, 1}, {{0.002, -0.00196581}, 1}, {{0.002, 0.00196581}, 1}, {{-0.002, 0.00196581}, 1}, {{-0.002, -0.00196581}, 1}};
					};
					class TargetDiamond
					{
						class shape
						{
							type = "line";
							width = 4;
							points[] = {{"Target", 1, "Limit0109", 1, {0.02, 0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {-0.02, 0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {-0.02, -0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {0.02, -0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {0.02, 0.0196581}, 1}};
						};
					};
					class TargetLocked
					{
						condition = "missilelocked";
						class shape
						{
							type = "line";
							width = 4;
							points[] = {{"Target", 1, "Limit0109", 1, {0, -0.0294872}, 1}, {"Target", 1, "Limit0109", 1, {0.03, 0}, 1}, {"Target", 1, "Limit0109", 1, {0, 0.0294872}, 1}, {"Target", 1, "Limit0109", 1, {-0.03, 0}, 1}, {"Target", 1, "Limit0109", 1, {0, -0.0294872}, 1}};
						};
					};
				};
			};
		};
		
		soundEngineOnInt[] = {"442_laat_2\sounds\laat_engine_start_int.wss", 0.316228, 1};
		soundEngineOnExt[] = {"442_laat_2\sounds\laat_engine_start.wss", 0.794328, 1, 600};
		soundEngineOffInt[] = {"442_laat_2\sounds\laat_engine_end_int.wss", 0.316228, 1};
		soundEngineOffExt[] = {"442_laat_2\sounds\laat_engine_end.wss", 0.794328, 1, 600};
		soundLocked[] = {"442_laat_2\sounds\laat_lock_on_beep.wss", 1, 1};
		soundIncommingMissile[] = {"442_laat_2\sounds\laat_lock_on_alert_beep.wss", 0.316228, 1};
		soundGetIn[] = 
		{
			"A3\Sounds_F\vehicles2\soft\Mrap_02\Mrap_02_Enter", 
			0.446684, 
			1
		};
		soundGetOut[] = 
		{
			"A3\Sounds_F\vehicles2\soft\Mrap_02\Mrap_02_Exit", 
			0.446684, 
			1, 
			40
		};
		buildCrash0[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01", 
			1.99526, 
			1, 
			75
		};
		buildCrash1[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02", 
			1.99526, 
			1, 
			75
		};
		buildCrash2[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03", 
			1.99526, 
			1, 
			75
		};
		buildCrash3[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04", 
			1.99526, 
			1, 
			75
		};
		buildCrash4[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05", 
			1.99526, 
			1, 
			75
		};
		buildCrash5[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06", 
			1.99526, 
			1, 
			75
		};
		buildCrash6[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07", 
			1.99526, 
			1, 
			75
		};
		buildCrash7[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08", 
			1.99526, 
			1, 
			75
		};
		soundBuildingCrash[] = 
		{
			"buildCrash0", 0.125, 
			"buildCrash1", 0.125, 
			"buildCrash2", 0.125, 
			"buildCrash3", 0.125, 
			"buildCrash4", 0.125, 
			"buildCrash5", 0.125, 
			"buildCrash6", 0.125, 
			"buildCrash7", 0.125
		};
		WoodCrash0[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_01", 
			1.99526, 
			1, 
			75
		};
		WoodCrash1[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_02", 
			1.99526, 
			1, 
			75
		};
		WoodCrash2[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_03", 
			1.99526, 
			1, 
			75
		};
		WoodCrash3[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_04", 
			1.99526, 
			1, 
			75
		};
		WoodCrash4[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_05", 
			1.99526, 
			1, 
			75
		};
		WoodCrash5[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_06", 
			1.99526, 
			1, 
			75
		};
		WoodCrash6[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_07", 
			1.99526, 
			1, 
			75
		};
		WoodCrash7[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_08", 
			1.99526, 
			1, 
			75
		};
		soundWoodCrash[] = 
		{
			"woodCrash0", 0.125, 
			"woodCrash1", 0.125, 
			"woodCrash2", 0.125, 
			"woodCrash3", 0.125, 
			"woodCrash4", 0.125, 
			"woodCrash5", 0.125, 
			"woodCrash6", 0.125, 
			"woodCrash7", 0.125
		};
		armorCrash0[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01", 
			1.99526, 
			1, 
			75
		};
		armorCrash1[] =
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02", 
			1.99526, 
			1, 
			75
		};
		armorCrash2[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03", 
			1.99526, 
			1, 
			75
		};
		armorCrash3[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04", 
			1.99526, 
			1, 
			75
		};
		armorCrash4[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05", 
			1.99526, 
			1, 
			75
		};
		armorCrash5[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06", 
			1.99526, 
			1, 
			75
		};
		armorCrash6[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07", 
			1.99526, 
			1, 
			75
		};
		armorCrash7[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08", 
			1.99526, 
			1, 
			75
		};
		soundArmorCrash[] = 
		{
			"ArmorCrash0", 0.125, 
			"ArmorCrash1", 0.125, 
			"ArmorCrash2", 0.125, 
			"ArmorCrash3", 0.125, 
			"ArmorCrash4", 0.125, 
			"ArmorCrash5", 0.125, 
			"ArmorCrash6", 0.125, 
			"ArmorCrash7", 0.125
		};
		Crash0[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01", 
			1.99526, 
			1, 
			75
		};
		Crash1[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02", 
			1.99526, 
			1, 
			75
		};
		Crash2[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03", 
			1.99526, 
			1, 
			75
		};
		Crash3[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04", 
			1.99526, 
			1, 
			75
		};
		Crash4[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05", 
			1.99526, 
			1, 
			75
		};
		Crash5[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06", 
			1.99526, 
			1, 
			75
		};
		Crash6[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07", 
			1.99526, 
			1, 
			75
		};
		Crash7[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08", 
			1.99526, 
			1, 
			75
		};
		soundCrashes[] = 
		{
			"Crash0", 0.125, 
			"Crash1", 0.125, 
			"Crash2", 0.125, 
			"Crash3", 0.125, 
			"Crash4", 0.125, 
			"Crash5", 0.125, 
			"Crash6", 0.125, 
			"Crash7", 0.125
		};
		BushCrash1[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_01", 
			0.630957, 
			1, 
			50
		};
		BushCrash2[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_02", 
			0.630957, 
			1, 
			50
		};
		BushCrash3[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03", 
			0.630957, 
			1, 
			50
		};
		BushCrash4[] = 
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03", 
			0.630957, 
			0.8, 
			50
		};
		soundBushCrash[] = 
		{
			"BushCrash1", 0.25, 
			"BushCrash2", 0.25, 
			"BushCrash3", 0.25, 
			"BushCrash4", 0.25
		};
		class sounds
		{
			class EngineInt
			{
				sound[] = {"442_laat_2\sounds\laat_engine_int.wss", 0.794328, 1};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
				volume = "2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
			};
			class EngineExt
			{
				sound[] = {"442_laat_2\sounds\laat_engine.wss", 1.25893, 1, 600};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1, 1, 100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int_open", 1, 1, 100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT", 1.25893, 1, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT", 1.25893, 1, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT", 1, 1, 700};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT", 1, 1, 700};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed", "db-7", 1, 50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2b", 0.316228, 1, 50};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class rotorLowAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", 0.316228, 1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", 0.223872, 1, 20};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open", 1, 1, 100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandExt", 1, 1, 100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05])";
			};
			class scrubBuildingInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt", 1, 1, 100};
				frequency = 1;
				volume = "2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubBuildingExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt", 1, 1, 100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt", 1, 1, 100};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt", 1, 1, 100};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
		};
	};
	
	class 442_laat_2: 442_laat_2_base
	{
		author = "kripto202";
		class simpleobject 
		{
			animate[] = 
			{
				{
					"door_1_l",
					0
				},
				{
					"door_1_r",
					0
				},
				{
					"door_2_l",
					0
				},
				{
					"door_1_r",
					0
				},
				{
					"laat_ramp_open",
					0
				},
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
				"clan",
				"light_l",
				"light_r",
			};
			verticaloffset = 0;
			verticaloffsetworld = 0;
		};
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselections[] = 
		{
			"body", 
			"body_2", 
			"door_1", 
			"door_2", 
			"door_3", 
			"wings", 
			"missiles", 
			"cockpits", 
			"glass",
			"clan", 
			"zasleh_l", 
			"zasleh_r",
			"zasleh_b"
		};
		hiddenselectionstextures[] = 
		{
			"442_laat_2\data\body1_co.paa",
			"442_laat_2\data\body2_co.paa",
			"442_laat_2\data\door1_co.paa",
			"442_laat_2\data\door2_co.paa",
			"442_laat_2\data\door3_co.paa",
			"442_laat_2\data\wings_co.paa",
			"442_laat_2\data\missiles_co.paa",
			"442_laat_2\data\cockpits_co.paa",
			"442_laat_2\data\glass_ca.paa"
		};
		
		class TextureSources
		{
			class base
			{
				displayname = "No Design";
				author = "kripto202";
				textures[] = 
				{
					"442_laat_2\data\body1_co.paa",
					"442_laat_2\data\body2_co.paa",
					"442_laat_2\data\door1_co.paa",
					"442_laat_2\data\door2_co.paa",
					"442_laat_2\data\door3_co.paa",
					"442_laat_2\data\wings_co.paa",
					"442_laat_2\data\missiles_co.paa",
					"442_laat_2\data\cockpits_co.paa",
					"442_laat_2\data\glass_ca.paa"
				};
				factions[] = 
				{
					"kobra"
				};
			};
			class jetporg: base
			{
				displayname = "Jet Porg";
				textures[] = 
				{
					"442_laat_2\data\body1_jetporg_co.paa",
					"442_laat_2\data\body2_co.paa",
					"442_laat_2\data\door1_co.paa",
					"442_laat_2\data\door2_co.paa",
					"442_laat_2\data\door3_co.paa",
					"442_laat_2\data\wings_co.paa",
					"442_laat_2\data\missiles_co.paa",
					"442_laat_2\data\cockpits_co.paa",
					"442_laat_2\data\glass_ca.paa"
				};
			};
			class misfit: base
			{
				displayname = "Misfit";
				textures[] = 
				{
					"442_laat_2\data\body1_misfit_co.paa",
					"442_laat_2\data\body2_co.paa",
					"442_laat_2\data\door1_co.paa",
					"442_laat_2\data\door2_co.paa",
					"442_laat_2\data\door3_co.paa",
					"442_laat_2\data\wings_co.paa",
					"442_laat_2\data\missiles_co.paa",
					"442_laat_2\data\cockpits_co.paa",
					"442_laat_2\data\glass_ca.paa"
				};
			};
			class m10: base
			{
				displayname = "Muunilinst 10";
				textures[] = 
				{
					"442_laat_2\data\body1_m10_co.paa",
					"442_laat_2\data\body2_co.paa",
					"442_laat_2\data\door1_co.paa",
					"442_laat_2\data\door2_co.paa",
					"442_laat_2\data\door3_co.paa",
					"442_laat_2\data\wings_m10_co.paa",
					"442_laat_2\data\missiles_co.paa",
					"442_laat_2\data\cockpits_co.paa",
					"442_laat_2\data\glass_ca.paa"
				};
			};
			class 44sod: base
			{
				displayname = "44th Special Operations Division";
				textures[] = 
				{
					"442_laat_2\data\body1_44_co.paa",
					"442_laat_2\data\body2_co.paa",
					"442_laat_2\data\door1_44_co.paa",
					"442_laat_2\data\door2_44_co.paa",
					"442_laat_2\data\door3_44_co.paa",
					"442_laat_2\data\wings_44_co.paa",
					"442_laat_2\data\missiles_co.paa",
					"442_laat_2\data\cockpits_co.paa",
					"442_laat_2\data\glass_ca.paa"
				};
			};
			class black_legion: base
			{
				displayname = "Black Legion";
				textures[] = 
				{
					"442_laat_2\data\body1_bl_co.paa",
					"442_laat_2\data\body2_co.paa",
					"442_laat_2\data\door1_bl_co.paa",
					"442_laat_2\data\door2_bl_co.paa",
					"442_laat_2\data\door3_bl_co.paa",
					"442_laat_2\data\wings_bl_co.paa",
					"442_laat_2\data\missiles_co.paa",
					"442_laat_2\data\cockpits_co.paa",
					"442_laat_2\data\glass_ca.paa"
				};
			};
			class paintless: base
			{
				displayname = "Paintless";
				textures[] = 
				{
					"442_laat_2\data\body1_paintless_co.paa",
					"442_laat_2\data\body2_co.paa",
					"442_laat_2\data\door1_co.paa",
					"442_laat_2\data\door2_co.paa",
					"442_laat_2\data\door3_co.paa",
					"442_laat_2\data\wings_paintless_co.paa",
					"442_laat_2\data\missiles_co.paa",
					"442_laat_2\data\cockpits_co.paa",
					"442_laat_2\data\glass_ca.paa"
				};
			};
			class 796sc: base
			{
				displayname = "796th Star Corps";
				textures[] = 
				{
					"442_laat_2\data\796th_body1_co.paa",
					"442_laat_2\data\796th_body2_co.paa",
					"442_laat_2\data\796th_door1_co.paa",
					"442_laat_2\data\796th_door2_co.paa",
					"442_laat_2\data\796th_door3_co.paa",
					"442_laat_2\data\796th_wings_co.paa",
					"442_laat_2\data\missiles_co.paa",
					"442_laat_2\data\cockpits_co.paa",
					"442_laat_2\data\glass_ca.paa"
				};
			};
			/* class 796sc_del: base
			{
				displayname = "796th Star Corps (Del)";
				textures[] = 
				{
					"442_laat_2\data\body1_del.paa",
					"442_laat_2\data\796th_body2_co.paa",
					"442_laat_2\data\796th_door1_co.paa",
					"442_laat_2\data\796th_door2_co.paa",
					"442_laat_2\data\796th_door3_co.paa",
					"442_laat_2\data\796th_wings_co.paa",
					"442_laat_2\data\missiles_co.paa",
					"442_laat_2\data\cockpits_co.paa",
					"442_laat_2\data\glass_ca.paa"
				};
			}; */
		};
		textureList[] = 
		{
			"base", 1,
			"jetporg", 1,
			"misfit", 1,
			"m10", 1,
			"paintless", 0,
			"44sod", 0,
			"black_legion", 0,
			"796sc", 0,
			// "796sc_del", 0
		};
	};
	
	class 442_laat_2_ab: 442_laat_2
	{
		class simpleobject 
		{
			animate[] = 
			{
				{
					"door_1_l",
					0
				},
				{
					"door_1_r",
					0
				},
				{
					"door_2_l",
					0
				},
				{
					"door_1_r",
					0
				},
				{
					"laat_ramp_open",
					0
				},
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
				"clan",
				"light_l",
				"light_r",
			};
			verticaloffset = 0;
			verticaloffsetworld = 0;
		};
		model = "442_laat_2\Laat_ab.p3d";
		displayname = "LAAT/I Gunship (Airborne)";
		getInRadius = 5;
		cargoCanEject = 1;
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
	};
	
	class 442_laat_wreck: Wreck_base_F
	{
		author = "kripto202";
		mapsize = 20;
		editorPreview = "";
		scope = 2;
		scopecurator = 2;
		icon="iconObject_1x2";
		displayname = "LAAT (Wrecked)";
		model = "442_laat_2\laat_w.p3d";
		editorCategory = "EdCat_Wrecks";
		editorSubcategory = "EdSubcat_Helicopters";
	};
	class 442_laat_door_1: Items_base_F
	{
		author = "kripto202";
		mapsize = 20;
		editorPreview = "";
		scope = 2;
		scopecurator = 2;
		displayname = "LAAT Door 1";
		model = "442_laat_2\laat_w2.p3d";
		editorSubcategory = "EdSubcat_Helicopters";
	};
	class 442_laat_door_2: 442_laat_door_1
	{
		displayname = "LAAT Door 2";
		model = "442_laat_2\laat_w3.p3d";
	};
	class 442_laat_door_3: 442_laat_door_1
	{
		displayname = "LAAT Door 3";
		model = "442_laat_2\laat_w4.p3d";
	};
	class 442_laat_door_4: 442_laat_door_1
	{
		displayname = "LAAT Door 4";
		model = "442_laat_2\laat_w5.p3d";
	};
};