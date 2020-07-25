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
		thermalmode[] = {0,1};
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
			"1000Rnd_Laser_Cannon_LAAT",
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
	class GunnerTurret1: MainTurret
	{
		soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner", 0.362341, 1, 20};
		soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical", 0.362341, 1, 30};
		weapons[] = {"442_Cannon_LAAT_Turret1"};
		magazines[] = {"500Rnd_Cannon_LAAT_TURRET","500Rnd_Cannon_LAAT_TURRET"};
		class ViewOptics
		{
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.25;
			maxFov = 1.1;
		};
		class OpticsIn
		{
			class Wide
			{
				visionMode[] = {"Normal", "NVG", "Ti"};
				thermalMode[] = {0, 1};
				opticsDisplayName = "W";
				initAngleX = 0;
				minAngleX = -45;
				maxAngleX = 45;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.466;
				minFov = 0.466;
				maxFov = 0.466;
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
		isCopilot = 0;
		proxyIndex = 2;
		commanding = -4;
		primaryObserver = 0;
		primaryGunner = 0;
		body = "mainTurret2";
		gun = "mainGun2";
		minElev = -60;
		initElev = 0;
		minTurn = 0;
		maxElev = 90;
		maxTurn = 180;
		initTurn = 0;
		turretFollowFreeLook = 0;
		isPersonTurret = 0;
		memoryPointGunnerOptics = "gunnerview2";
		memoryPointGun = "machinegun2";
		animationSourceHatch = "";
		stabilizedInAxes = "StabilizedInAxesNone";
		selectionFireAnim = "";
		animationSourceBody = "MainTurret2";
		animationSourceGun = "MainGun2";
		gunBeg = "muzzle_2";
		gunEnd = "chamber_2";
		gunnerName = "Ball Turret (Left)";
		gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
		gunnerOutOpticsShowCursor = 1;
		gunnerOpticsShowCursor = 1;
		gunnerAction = "Driver_mid01";
		gunnerInAction = "Driver_mid01";
		gunnerlefthandanimname = "";
		gunnerrighthandanimname = "";
		gunnerLeftLegAnimName = "";
		gunnerRightLegAnimName = "";
		gunnerGetInAction = "GetInLow";
		gunnerGetOutAction = "GetOutLow";
		gunnerForceOptics = 1;
		inGunnerMayFire = 1;
		gunnerFireAlsoInInternalCamera = 1;
		outGunnerMayFire = 1;
		gunnerCompartments = "Compartment4";
		memoryPointsGetInGunner = "pos driver";
		memoryPointsGetInGunnerDir = "pos driver dir";
		turretinfotype = "RscOptics_APC_Tracked_01_gunner";
	};
	class GunnerTurret2: GunnerTurret1
	{
		soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner", 0.362341, 1, 20};
		soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical", 0.362341, 1, 30};
		weapons[] = {"442_Cannon_LAAT_Turret2"};
		magazines[] = {"500Rnd_Cannon_LAAT_TURRET","500Rnd_Cannon_LAAT_TURRET"};
		isCopilot = 0;
		body = "mainTurret3";
		gun = "mainGun3";
		minTurn = -110;
		maxTurn = 0;
		initTurn = 0;
		inGunnerMayFire = 1;
		gunnerFireAlsoInInternalCamera = 1;
		outGunnerMayFire = 1;
		animationSourceBody = "MainTurret3";
		animationSourceGun = "MainGun3";
		gunBeg = "muzzle_3";
		gunEnd = "chamber_3";
		gunnerlefthandanimname = "";
		gunnerrighthandanimname = "";
		gunnerLeftLegAnimName = "";
		gunnerRightLegAnimName = "";
		stabilizedInAxes = "StabilizedInAxesNone";
		selectionFireAnim = "";
		proxyIndex = 3;
		commanding = -5;
		primaryObserver = 0;
		primaryGunner = 0;
		turretFollowFreeLook = 0;
		isPersonTurret = 0;
		gunnerOutOpticsShowCursor = 1;
		gunnerOpticsShowCursor = 1;
		gunnerName = "Ball Turret (Right)";
		memoryPointGun = "machinegun3";
		memoryPointGunnerOptics = "gunnerview3";
		gunnerCompartments = "Compartment5";
		memoryPointsGetInGunner = "pos driver";
		memoryPointsGetInGunnerDir = "pos driver dir";
	};
	// class CargoTurret_01: MainTurret
	// {
		// gunnerAction = "passenger_inside_3";
		// gunnerGetInAction = "GetInLow";
		// gunnerGetOutAction = "GetOutLow";
		// memoryPointsGetInGunner = "pos cargo";
		// memoryPointsGetInGunnerDir = "pos cargo dir";
		// gunnerName = "Passenger (left-back)";
		// gunnerCompartments = "Compartment6";
		// memoryPointGunnerOptics = "";
		// LODTurnedIn = 1;
		// LODTurnedOut = 1;
		// proxyIndex = 42;
		// maxElev = 45;
		// minElev = -35;
		// maxTurn = 61;
		// minTurn = -65;
		// castGunnerShadow = 0;
		// viewGunnerShadow = 0;
		// castCargoShadow = 1;
		// viewCargoShadow = 1;
		// castDriverShadow = 0;
		// viewDriverShadow = 0;
		// enabledByAnimationSource = "";
	// };
	// class CargoTurret_02: CargoTurret_01
	// {
		// gunnerAction = "passenger_inside_3";
		// gunnerName = "Passenger (left-front)";
		// gunnerCompartments = "Compartment6";
		// memoryPointsGetInGunner = "pos cargo";
		// memoryPointsGetInGunnerDir = "pos cargo dir";
		// proxyIndex = 43;
		// castGunnerShadow = 0;
		// viewGunnerShadow = 0;
		// castCargoShadow = 1;
		// viewCargoShadow = 1;
		// castDriverShadow = 0;
		// viewDriverShadow = 0;
		// enabledByAnimationSource = "";
	// };
	// class CargoTurret_03: CargoTurret_01
	// {
		// gunnerAction = "passenger_inside_3";
		// gunnerName = "Passenger (left-middle)";
		// gunnerCompartments = "Compartment6";
		// memoryPointsGetInGunner = "pos cargo";
		// memoryPointsGetInGunnerDir = "pos cargo dir";
		// proxyIndex = 44;
		// castGunnerShadow = 0;
		// viewGunnerShadow = 0;
		// castCargoShadow = 1;
		// viewCargoShadow = 1;
		// castDriverShadow = 0;
		// viewDriverShadow = 0;
		// enabledByAnimationSource = "";
	// };
	// class CargoTurret_04: CargoTurret_01
	// {
		// gunnerAction = "passenger_inside_3";
		// gunnerName = "Passenger (right-back)";
		// gunnerCompartments = "Compartment6";
		// memoryPointsGetInGunner = "pos cargo";
		// memoryPointsGetInGunnerDir = "pos cargo dir";
		// proxyIndex = 45;
		// castGunnerShadow = 0;
		// viewGunnerShadow = 0;
		// castCargoShadow = 1;
		// viewCargoShadow = 1;
		// castDriverShadow = 0;
		// viewDriverShadow = 0;
		// enabledByAnimationSource = "";
	// };
	// class CargoTurret_05: CargoTurret_01
	// {
		// gunnerAction = "passenger_inside_3";
		// gunnerName = "Passenger (right-front)";
		// gunnerCompartments = "Compartment6";
		// memoryPointsGetInGunner = "pos cargo";
		// memoryPointsGetInGunnerDir = "pos cargo dir";
		// proxyIndex = 46;
		// castGunnerShadow = 0;
		// viewGunnerShadow = 0;
		// castCargoShadow = 1;
		// viewCargoShadow = 1;
		// castDriverShadow = 0;
		// viewDriverShadow = 0;
		// enabledByAnimationSource = "";
	// };
	// class CargoTurret_06: CargoTurret_01
	// {
		// gunnerAction = "passenger_inside_3";
		// gunnerName = "Passenger (right-middle)";
		// gunnerCompartments = "Compartment6";
		// memoryPointsGetInGunner = "pos cargo";
		// memoryPointsGetInGunnerDir = "pos cargo dir";
		// proxyIndex = 47;
		// castGunnerShadow = 0;
		// viewGunnerShadow = 0;
		// castCargoShadow = 1;
		// viewCargoShadow = 1;
		// castDriverShadow = 0;
		// viewDriverShadow = 0;
		// enabledByAnimationSource = "";
	// };
};