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
			"1000Rnd_Laser_Cannon_LAAT",
			"24Rnd_PG_missiles",
			"Laserbatteries"
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
		showHMD = 1;
		CanEject = 1;
		minElev = -50;
		maxElev = +30;
		minTurn = -90;
		maxTurn = 90;
		initElev = 0;
		initTurn = 0;
		ballisticsComputer = 1;
		canLock = 2;
	};
	class GunnerTurret1: GunnerTurret1
	{
		weapons[] = {"442_saber_Turret"};
		magazines[] = {"1000Rnd_442_blaster_saber","1000Rnd_442_blaster_saber"};
		minElev = -60;
		initElev = 0;
		minTurn = 0;
		maxElev = 90;
		maxTurn = 180;
		initTurn = 0;
		inGunnerMayFire = 1;
		ballisticsComputer = 1;
		canLock = 2;
	};
	class GunnerTurret2: GunnerTurret2
	{
		weapons[] = {"442_saber_Turret"};
		magazines[] = {"1000Rnd_442_blaster_saber","1000Rnd_442_blaster_saber"};
		minTurn = -110;
		maxTurn = 0;
		initTurn = 0;
		inGunnerMayFire = 1;
		ballisticsComputer = 1;
		canLock = 2;
	};
	class CargoTurret_01: CargoTurret_01
	{
	};
	class CargoTurret_02: CargoTurret_02
	{
	};
	class CargoTurret_03: CargoTurret_03
	{
	};
	class CargoTurret_04: CargoTurret_04
	{
	};
	class CargoTurret_05: CargoTurret_05
	{
	};
	class CargoTurret_06: CargoTurret_06
	{
	};
};