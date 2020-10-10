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
			initAngleX = 0;
			minAngleX = 90;
			maxAngleX = 270;
			initAngleY = 0;
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
		gunnerType="k_swla_unit_b1_e5";
		primaryGunner = 1;
		primary = 1;
		usePip = 1;
		turretFollowFreeLook = 0;
		gunnerCompartments = "Compartment2";
		gunnerLeftHandAnimName = "";
		gunnerRightHandAnimName = "";
		proxyindex = 1;
		isCopilot = 0;
		gunnerName = "Center Gun";
		showHMD = 1;
		castCargoShadow = 0;
		viewCargoShadow = 0;
		castDriverShadow = 0;
		viewDriverShadow = 0;
		CanEject = 0;
		hideWeaponsGunner = 1;
		memoryPointsGetInGunner = "pos_cargo";
		memoryPointsGetInGunnerDir = "pos_cargo_dir";
		memoryPointGunnerOutOptics = "gunnerviewout";
		discreteDistanceInitIndex = 5;
		gunnerAction = "apctracked2_slot1_in";
		gunnerInAction = "apctracked2_slot1_in";
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
		selectionFireAnim = "zasleh_c";
		weapons[] = 
		{
			"442_hmp_gun",
			"442_hmp_gun_2"
		};
		magazines[] = 
		{
			"442_50_200rnd_he_red_mag",
			"442_50_200rnd_he_red_mag",
			"442_50_200rnd_ap_red_mag",
			"442_50_200rnd_ap_red_mag",
		};
		gunBeg = "usti hlavne 3";
		gunEnd = "konec hlavne 3";
		memoryPointGun = "konec hlavne 3";
		outGunnerMayFire = 1;
		castGunnerShadow = 0;
		viewGunnerShadow = 0;
		gunnerOpticsModel = "";
		gunnerForceOptics = 1;
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
		minElev = -15;
		maxElev = 45;
		minTurn = -40;
		maxTurn = 40;
		initElev = 0;
		initTurn = 0;
		minCamElev = -10;
		maxCamElev = -45;
		memoryPointGunnerOptics = "gunner_view";
	};
	class MainTurret2: MainTurret
	{
		gunnerName = "Left Gun";
		proxyindex = 2;
		weapons[] = {"442_hmp_gun_3"};
		gunnerCompartments = "Compartment3";
		magazines[] = 
		{
			"442_50_200rnd_ap_red_mag",
			"442_50_200rnd_ap_red_mag"
		};
		minElev = -80;
		maxElev = 80;
		minTurn = -20;
		maxTurn = 120;
		initElev = 0;
		initTurn = 45;
		minCamElev = -10;
		maxCamElev = -45;
		memoryPointGunnerOptics = "gunner_left_view";
		selectionFireAnim = "zasleh_l_1";
		gunBeg = "usti hlavne 5";
		gunEnd = "konec hlavne 5";
		memoryPointGun = "konec hlavne 5";
		enableManualFire=0;
		animationSourceBody = "mainturret2";
		animationSourceCamElev = "camElev";
		animationSourceGun = "mainGun2";
		gun = "mainGun2";
		
	};
	class MainTurret3: MainTurret2
	{
		gunnerName = "Right Gun";
		gunnerCompartments = "Compartment4";
		proxyindex = 3;
		minElev = -80;
		maxElev = 80;
		minTurn = -120;
		maxTurn = 20;
		initElev = 0;
		initTurn = -45;
		minCamElev = -10;
		maxCamElev = -45;
		memoryPointGunnerOptics = "gunner_right_view";
		selectionFireAnim = "zasleh_r_1";
		gunBeg = "usti hlavne 4";
		gunEnd = "konec hlavne 4";
		memoryPointGun = "konec hlavne 4";
		animationSourceBody = "mainturret3";
		animationSourceCamElev = "camElev";
		animationSourceGun = "mainGun3";
		gun = "mainGun3";
	};
};