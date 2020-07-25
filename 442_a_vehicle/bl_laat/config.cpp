class cfgPatches
{
	class 442nd_doom_LAAT
	{
		weapons[]={};
		units[]=
		{
			"442_doom_laat",
			"442_doom_laatmk2",
			"442_doom_laatmk3",
			"442_doom_laat_kripto",
			"442_doom_laat_stealth",
			"442_doom_laat_jungle",
			"442_doom_laat_red",
			"442_doom_laat_blue",
			"442_doom_laat_red",
			"442_doom_laat_snow",
			"442_doom_laat_kix",
		};
		requiredaddons[]={};
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
	class 442_LAAT_he_green: Cannon_30mm_HE_Plane_CAS_02_F
	{
		model="SWLW_main\Effects\laser_green.p3d";
		effectfly="SWLW_plasma_green";
		flaresize=3;
		tracerscale=3;
		hit = 150;
		indirectHit = 10;
		indirectHitRange = 2;
		caliber = 6;
		explosive = 0.65;
		tracerStartTime = 0;
		tracerEndTime = 10;
		allowAgainstInfantry = 1;
	};
	class 442_LAAT_apfsds: Cannon_30mm_HE_Plane_CAS_02_F
	{
		model="SWLW_main\Effects\laser_green.p3d";
		effectfly="SWLW_plasma_green";
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
	
	class SWLW_ammo_base;
	class 442_LAAT_Z6_ammo_green: SWLW_ammo_base
	{
		model="SWLW_main\Effects\laser_green.p3d";
		effectfly="SWLW_plasma_green";
		submunitionconeangle=0;
		submunitioncount=1;
		submunitionammo="";
		hit=12;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=8;
		dangerRadusHit=12;
		suppressionRadusBulletClose=6;
		suppressionRadusHit=8;
		audiblefire=45;
		airFriction=0;
		waterFriction=-0.30000001;
		caliber=1.6;
		timetolive=6;
		typicalspeed=800;
		ACE_caliber=7.823;
		ACE_bulletLength=28.955999;
		ACE_bulletMass=9.4608002;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.2};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={700,800,820,833,845};
		ACE_barrelLengths[]={254,406.39999,508,609.59998,660.40002};
	};
};
class cfgmagazines
{
	class laat_proton_torpedo;
	class 442_laat_proton_torpedo: laat_proton_torpedo
	{
		count = 24;
		ammo = "M_Scalpel_AT";
		missileKeepLockedCone = 180;
		missileLockCone = 180;
		missileLockMaxDistance = 13000;
		missileLockMaxSpeed = 0;
		missileLockMinDistance = 50;
		lockSeekRadius = 180;
		maxLeadSpeed = 200;
		displayName = "LAAT Proton Torpedo";
		displayNameShort = "Torpedo";
		descriptionShort = "Short-range, laser/infrared-guided, air-to-surface missile with tandem high-explosive anti-tank warhead";
	};
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
	class 500rnd_laat_he_green_mag: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		author = "kripto202";
		displayname = "50mm HE";
		displayNameShort = "HE";
		ammo = "442_laat_he_green";
		count = 500;
	};
	class SWLW_mag_base;
	class 442_LAAT_Z6_mag: SWLW_mag_base
	{
		displayname="LAAT Z-6 Energy Cell (1000rnd)";
		initspeed=800;
		displayNameShort = "";
		ammo="442_LAAT_Z6_ammo_green";
		count=1000;
	};
};
class cfgweapons
{
	class MGun;
	class RocketPods;
	class 442_saber_gun;
	class laat_proton_torpedo_launcher;
	class gatling_20mm;
	
	class 442_Cannon_LAAT: 442_saber_gun
	{
		displayname = "50mm Cannons";
		displaynameMagazine = "50mm Cannons";
		shortNameMagazine = "50mm Cannons";
		scope = 1;
		displayNameShort = "50mm";
		magazines[] = 
		{
			"500rnd_laat_he_green_mag"
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
		class FullAuto: MGun
		{
			class StandardSound
			{
				begin1[] = {"SW_Droides_2\ATTE\atte_laserx2.ogg", 1.5, 1, 2000};
				soundBegin[] = {"begin1", 1};
				closure1[] = {};
				soundClosure[] = {"closure1", 1};
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
	class 442_laat_proton_torpedo_launcher: laat_proton_torpedo_launcher
	{
		magazines[] = {"442_laat_proton_torpedo"};
		magazineReloadTime = 20;
		reloadTime = 1;
		modes[] = {"TopDown"};
		class TopDown: RocketPods
		{
			textureType = "topDown";
			displayName = "Skalpel ATGM";
			reloadTime = 0.1;
			magazineReloadTime = 0.1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1", 1.12202, 1.3, 1000};
				soundBegin[] = {"begin1", 1};
				soundsetshot[] = {"RocketsHeavy_Shot_SoundSet"};
			};
			lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", 0.562341, 1};
			lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.562341, 2.5};
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			showToPlayer = 1;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 800;
			midRangeProbab = 0.96;
			maxRange = 6000;
			maxRangeProbab = 0.92;
		};
	};
	class GunParticles;
	class 442_LAAT_ball: gatling_20mm
	{
		author="SW Legion Studios";
		displayName="LAAT Z-6 Rotary Blaster";
		magazines[]=
		{
			"442_LAAT_Z6_mag"
		};
		reloadAction="ReloadMagazine";
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		autoreload = 1;
		inertia=3;
		initSpeed=800;
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="Z6";
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		flash="gunfire";
		flashSize=3;
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
					"SWLW_clones\machineguns\z6\sounds\Z6_1.wss",
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
			burst=20;
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
			burst=20;
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
};
class cfgvehicles
{
	class Air;
    class Helicopter: Air 
	{
		class HitPoints;
		class Turrets;
	};
	class Helicopter_Base_F: Helicopter
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitHRotor;
			class HitVRotor;
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class EventHandlers;
		class ViewOptics;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret: MainTurret
			{
				class ViewGunner;
			};
		};
		class Components;
	};
	class swop_LAAT: Helicopter_Base_H 
	{
		class RotorLibHelicopterProperties;
		class EventHandlers;

		class Turrets: Turrets
		{
			class CopilotTurret:CopilotTurret
			{

			};
			class GunnerTurret1;
			class GunnerTurret2;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
			class CargoTurret_06;
			
		};
	};
	class bl_doom_laat: swop_LAAT
	{
		author = "kripto202";
		editorSubcategory = "bl_LAATS";
		faction = "black_legion";
		side = 1;
		scope = 2;
		weapons[] = 
		{
			"442_laat_proton_torpedo_launcher",
			"CMFlareLauncher"
		};
		magazines[] = 
		{
			"442_laat_proton_torpedo",
			"442_laat_proton_torpedo",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 16;
		bodyFrictionCoef = 15;
		showCrewAim = 1;
		armor = 100;
		getInRadius = 5;
		ace_fastroping_enabled = 1;
		ace_fastroping_onCut = "ace_fastroping_fnc_onCutCommon";
		ace_fastroping_ropeOrigins[] = 
		{	
			{1.5,0,-3.5},
			{-1.5,0,-3.5},
			{1.5,1.5,-3.5},
			{-1.5,1.5,-3.5}
		};
		ace_interaction_bodyWidth = 3;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"bl_laat\data\body_bl.paa",
			"bl_laat\data\wings_bl.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"\bl_laat\data\body.rvmat",
			"\bl_laat\data\wings.rvmat"
		};
		crew = "SWLA_BL_Trooper";
		#include "equipment.hpp"
		#include "useractions.hpp"
		displayName = "MKI LAAT";
		driverInAction = "";
		incomingMissileDetectionSystem = "1 + 2 + 4 + 8 + 16";
		LockDetectionSystem = "1 + 2 + 4 + 8 + 16";
		defaultUserMFDvalues[] = {0,0,1,1};
		dustBackLeftPos = "";
		dustBackRightPos = "";
		dustEffect = "";
		dustFrontLeftPos = "";
		dustFrontRightPos = "";
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 0.1;
				visual = "Hull";
				minimalHit = 0.05;
				depends = "Total";
				radius = 0.01;
			};
			class HitFuel: HitFuel
			{
				armorComponent = "hit_fuel";
				material = -1;
				name = "hit_fuel_point";
				visual = "-";
				passthrough = 1;
				armor = 0.7;
				radius = 0.25;
				minimalHit = 0.05;
				explosionShielding = 2;
			};
			class HitHRotor: HitHRotor
			{
				armor = 2.6;
				radius = 0.4;
				minimalHit = 0.09;
				explosionShielding = 2.5;
			};
			class HitVRotor: HitVRotor
			{
				armor = 1.3;
				radius = 0.06;
				minimalHit = 0.05;
				explosionShielding = 6;
			};
		};
		class Exhausts{};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
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
					initAngleX = -10;
					minAngleX = -35;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -130;
					maxAngleY = 130;
					minMoveX = -0.1;
					maxMoveX = 0.1;
					minMoveY = -0.025;
					maxMoveY = 0.1;
					minMoveZ = -0.1;
					maxMoveZ = 0.1;
					gunnerOpticsModel = "";
				};
				visionMode[] = {"Normal", "NVG", "Ti"};
				class Reflectors
				{
					class cabin
					{
						color[] = {830, 100, 100};
						ambient[] = {5, 0, 0};
						class Attenuation
						{
							start = 0;
							constant = 0;
							linear = 1;
							quadratic = 50;
							hardLimitStart = 1;
							hardLimitEnd = 1.5;
						};
						intensity = 9;
						size = 1;
						innerAngle = 90;
						outerAngle = 165;
						coneFadeCoef = 1;
						position = "cabin_light";
						direction = "cabin_light_dir";
						hitpoint = "cabin_light";
						selection = "cabin_light";
						useFlare = 1;
						flareSize = 1;
						flareMaxDistance = 5;
						dayLight = 1;
						blinking = 0;
					};
					class cabin2
					{
						color[] = {830, 100, 100};
						ambient[] = {5, 0, 0};
						class Attenuation
						{
							start = 0;
							constant = 0;
							linear = 1;
							quadratic = 50;
							hardLimitStart = 1;
							hardLimitEnd = 1.5;
						};
						intensity = 9;
						size = 1;
						innerAngle = 90;
						outerAngle = 165;
						coneFadeCoef = 1;
						position = "cabin_light2";
						direction = "cabin_light2_dir";
						hitpoint = "cabin_light2";
						selection = "cabin_light2";
						useFlare = 1;
						flareSize = 1;
						flareMaxDistance = 5;
						dayLight = 1;
						blinking = 0;
					};
					class cargo_light_1: cabin
					{
						color[] = {830, 100, 100};
						class Attenuation
						{
							start = 0;
							constant = 0;
							linear = 1;
							quadratic = 70;
							hardLimitStart = 2;
							hardLimitEnd = 2.5;
						};
						position = "cargo_light_1";
						direction = "cargo_light_1_dir";
						hitpoint = "cargo_light_1";
						selection = "cargo_light_1";
						intensity = 21;
						useFlare = 0;
						coneFadeCoef = 0.1;
					};
					class cargo_light_2: cargo_light_1
					{
						position = "cargo_light_2";
						direction = "cargo_light_2_dir";
						hitpoint = "cargo_light_2";
						selection = "cargo_light_2";
					};
				};
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 1000, 1200, 1500, 1800, 2100, 2400};
				weapons[] = 
				{
					"442_Cannon_LAAT",
					"missiles_DAGR",
					"Laserdesignator_mounted"
				};
				magazines[] = 
				{
					"500rnd_laat_he_green_mag",
					"500rnd_laat_he_green_mag",
					"24Rnd_PG_missiles",
					"Laserbatteries"
				};
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
				soundServo[] = {"", 0.01, 1};
				gunnerOpticsEffect[] = {"TankCommanderOptics1", "BWTV"};
				primaryObserver = 0;
				primaryGunner = 1;
				primary = 1;
				usePip = 1;
				turretFollowFreeLook = 0;
				gunnerCompartments = "Compartment2";
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
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
				CanEject = 1;
				hideWeaponsGunner = 1;
				memoryPointsGetInGunner = "pos driver";
				memoryPointsGetInGunnerDir = "pos driver dir";
				memoryPointGunnerOutOptics = "gunnerviewout";
				discreteDistanceInitIndex = 5;
				gunnerAction = "Driver_mid01";
				gunnerInAction = "Driver_mid01";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				gunnerUsesPilotView = 0;
				commanding = -1;
				startEngine = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				showAllTargets = 4;
				minElev = -50;
				maxElev = +30;
				minTurn = -90;
				maxTurn = 90;
				initElev = 0;
				initTurn = 0;
				memoryPointLRocket = "RocketL";
				memoryPointRRocket = "RocketR";
				memoryPointLMissile = "RocketL";
				memoryPointRMissile = "RocketR";
				selectionFireAnim = "";
				SWOP_JumpMasterTurretIndex = 1;
				outGunnerMayFire = 1;
				memoryPointGunnerOptics = "gunner1";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				gunnerOpticsModel = "";
				gunnerForceOptics = 0;
				turretInfoType = "RscOptics_Heli_Attack_01_gunner";
			};
			class GunnerTurret1: GunnerTurret1
			{
				directionStabilized = 1;
				elevationMode = 0;
				radarType = 4;
				canUseScanner = 1;
				stabilizedInAxes = 3;
				ballisticsComputer = 1;
				minElev = -60;
				initElev = 0;
				minTurn = 0;
				maxElev = 90;
				maxTurn = 180;
				canLock = 2;
				weapons[] = {"442_LAAT_ball"};
				magazines[] = 
				{
					"442_LAAT_Z6_mag",
					"442_LAAT_Z6_mag",
					"442_LAAT_Z6_mag",
				};
			};
			class GunnerTurret2: GunnerTurret2
			{
				stabilizedInAxes = 3;
				elevationMode = 0;
				radarType = 4;
				minTurn = -110;
				maxElev = 90;
				minElev = -60;
				initElev = 0;
				maxTurn = 0;
				initTurn = 0;
				canUseScanner = 1;
				ballisticsComputer = 1;
				canLock = 2;
				weapons[] = {"442_LAAT_ball"};
				magazines[] = 
				{
					"442_LAAT_Z6_mag",
					"442_LAAT_Z6_mag",
					"442_LAAT_Z6_mag",
				};
			};
			class CargoTurret_01: CargoTurret_01
			{
				memoryPointGunnerOptics = "gunnerview";
			};
			class CargoTurret_02: CargoTurret_02
			{
				memoryPointGunnerOptics = "gunnerview";
			};
			class CargoTurret_03: CargoTurret_03
			{
				memoryPointGunnerOptics = "gunnerview";
			};
			class CargoTurret_04: CargoTurret_04
			{
				memoryPointGunnerOptics = "gunnerview";
			};
			class CargoTurret_05: CargoTurret_05
			{
				memoryPointGunnerOptics = "gunnerview";
			};
			class CargoTurret_06: CargoTurret_06
			{
				memoryPointGunnerOptics = "gunnerview";
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
				uiPicture="\442_laat\data\laat_ui.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "PylonMissile_1Rnd_AAA_missiles";
						priority = 5;
						hardpoints[] = {"SCALPEL_1RND", "B_ASRAAM", "DAR", "DAGR"};
						turret[] = {};
						UIposition[] = {0.06, 0.4};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment = "PylonMissile_1Rnd_AAA_missiles";
						priority = 4;
						hardpoints[] = {"SCALPEL_1RND", "B_ASRAAM"};
						UIposition[] = {0.08, 0.35};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment = "PylonRack_12Rnd_PG_missiles";
						priority = 3;
						hardpoints[] = {"SCALPEL_1RND", "B_ASRAAM", "DAR", "DAGR"};
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
						turret[] = {};
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
	};
	//#include "custom.hpp"
};