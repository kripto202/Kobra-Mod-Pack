class cfgWeapons
{
	class Missile_AGM_02_Plane_CAS_01_F;
	class Mode_FullAuto;
	class Mode_SemiAuto;
	class Mode_Burst;
	class MissileLauncher;
	class LauncherCore;
	class Default;
	class laat_proton_torpedo_launcher;
	class Cannon_LAAT_Turret1;
	class Cannon_LAAT_Turret2;
	class CannonCore;
	class gatling_20mm;
	class MGun;
	class 442_saber_gun;
	
	class 442_Cannon_LAAT: 442_saber_gun
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
		class TopDown
		{
			access = 3;
			aiDispersionCoefX = 1;
			aiDispersionCoefY = 1;
			aimTransitionSpeed = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 0;
			aiRateOfFireDistance = 300;
			ammo = "Torpedo";
			artilleryCharge = 1;
			artilleryDispersion = 1;
			autoFire = 0;
			autoReload = 1;
			backgroundReload = 0;
			ballisticsComputer = 0;
			burst = 1;
			canDrop = 1;
			canLock = 2;
			canShootInWater = 0;
			cartridgePos = "nabojnicestart";
			cartridgeVel = "nabojniceend";
			changeFiremodeSound[] = {"",1,1};
			cmImmunity = 1;
			count = 1;
			cursor = "EmptyCursor";
			cursorAim = "missile";
			cursorAimOn = "";
			cursorSize = 1;
			descriptionShort = "";
			detectRange = 0;
			dexterity = 0.5;
			dispersion = 0.002;
			displayName = "Torpedo";
			distanceZoomMax = 400;
			distanceZoomMin = 400;
			drySound[] = {"",1,1};
			emptySound[] = {"",1,1};
			enableAttack = 1;
			ffCount = 1;
			ffFrequency = 1;
			ffMagnitude = 0;
			fireAnims[] = {};
			fireLightAmbient[] = {0,0,0};
			fireLightDiffuse[] = {0.937,0.631,0.259};
			fireLightDuration = 0.05;
			fireLightIntensity = 0.2;
			fireSpreadAngle = 3;
			forceOptics = 0;
			handAnim[] = {};
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			hiddenUnderwaterSelections[] = {};
			hiddenUnderwaterSelectionsTextures[] = {};
			inertia = 1;
			initSpeed = 0;
			irDistance = 0;
			irDotIntensity = 0.001;
			irLaserEnd = "laser dir";
			irLaserPos = "laser pos";
			laser = 0;
			lockAcquire = 1;
			lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.562341,2.5};
			lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
			magazineReloadTime = 20;
			magazines[] = {"442_laat_proton_torpedo"};
			maxRange = 8000;
			maxRangeProbab = 0.95;
			maxRecoilSway = 0.008;
			memoryPointCamera = "eye";
			midRange = 1500;
			midRangeProbab = 1;
			minRange = 360;
			minRangeProbab = 0.4;
			model = "";
			modelMagazine = "";
			modelOptics = "";
			modelSpecial = "";
			modes[] = {"this"};
			multiplier = 1;
			muzzleEnd = "konec hlavne";
			muzzlePos = "usti hlavne";
			muzzles[] = {"this"};
			nameSound = "MissileLauncher";
			optics = 1;
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsID = 0;
			opticsPPEffects[] = {};
			opticsZoomInit = 0.75;
			opticsZoomMax = 1.25;
			opticsZoomMin = 0.25;
			picture = "";
			primary = 10;
			recoil = "empty";
			recoilProne = "";
			reloadAction = "";
			reloadMagazineSound[] = {"",1,1};
			reloadSound[] = {"",1,1};
			reloadTime = 1;
			scope = 1;
			selectionFireAnim = "zasleh";
			showAimCursorInternal = 1;
			showEmpty = 1;
			shownUnderwaterSelections[] = {};
			showSwitchAction = 0;
			showToPlayer = 1;
			simulation = "Weapon";
			sound[] = {"",1,1};
			soundBegin[] = {"sound",1};
			soundBeginWater[] = {"sound",1};
			soundBullet[] = {"emptySound",1};
			soundBurst = 1;
			soundClosure[] = {"sound",1};
			soundContinuous = 0;
			soundEnd[] = {"sound",1};
			soundLoop[] = {"sound",1};
			sounds[] = {"StandardSound"};
			swayDecaySpeed = 2;
			textureType = "semi";
			type = 65536;
			uiPicture = "";
			useAction = 0;
			useActionTitle = "";
			useAsBinocular = 0;
			useModelOptics = 1;
			value = 2;
			weaponLockDelay = 0;
			weaponLockSystem = 0;
			weaponSoundEffect = "";
			weight = 0;
			zeroingSound[] = {"",1,1};
			class GunClouds 
			{
				access = 0;
				cloudletAccY = 0;
				cloudletAlpha = 0.3;
				cloudletAnimPeriod = 1;
				cloudletColor[] = {1,1,1,0};
				cloudletDuration = 0.05;
				cloudletFadeIn = 0;
				cloudletFadeOut = 0.1;
				cloudletGrowUp = 0.05;
				cloudletMaxYSpeed = 100;
				cloudletMinYSpeed = -100;
				cloudletShape = "cloudletClouds";
				cloudletSize = 1;
				deltaT = 0;
				initT = 0;
				interval = -0.02;
				size = 0.3;
				sourceSize = 0.02;
				timeToLive = 0;
				class Table
				{
					class T0
					{
						color[] = {1,1,1,0};
						maxT = 0;
					};
				};
			};
			class GunFire 
			{
				access = 0;
				cloudletAccY = 0;
				cloudletAlpha = 1;
				cloudletAnimPeriod = 1;
				cloudletColor[] = {1,1,1,0};
				cloudletDensityCoef = -1;
				cloudletDuration = 0.2;
				cloudletFadeIn = 0.01;
				cloudletFadeOut = 0.5;
				cloudletGrowUp = 0.2;
				cloudletMaxYSpeed = 100;
				cloudletMinYSpeed = -100;
				cloudletShape = "cloudletFire";
				cloudletSize = 1;
				deltaT = -3000;
				initT = 4500;
				interval = -0.01;
				size = 3;
				sourceSize = 0.5;
				timeToLive = 0;
				class Table
				{
					class T0
					{
						color[] = {0.82,0.95,0.93,0};
						maxT = 0;
					};
					class T1
					{
						color[] = {0.75,0.77,0.9,0};
						maxT = 200;
					};
					class T2
					{
						color[] = {0.56,0.62,0.67,0};
						maxT = 400;
					};
					class T3
					{
						color[] = {0.39,0.46,0.47,0};
						maxT = 600;
					};
					class T4
					{
						color[] = {0.24,0.31,0.31,0};
						maxT = 800;
					};
					class T5
					{
						color[] = {0.23,0.31,0.29,0};
						maxT = 1000;
					};
					class T6
					{
						color[] = {0.21,0.29,0.27,0};
						maxT = 1500;
					};
					class T7
					{
						color[] = {0.19,0.23,0.21,0};
						maxT = 2000;
					};
					class T8
					{
						color[] = {0.22,0.19,0.1,0};
						maxT = 2300;
					};
					class T9
					{
						color[] = {0.35,0.2,0.02,0};
						maxT = 2500;
					};
					class T10
					{
						color[] = {0.62,0.29,0.03,0};
						maxT = 2600;
					};
					class T11
					{
						color[] = {0.59,0.35,0.05,0};
						maxT = 2650;
					};
					class T12
					{
						color[] = {0.75,0.37,0.03,0};
						maxT = 2700;
					};
					class T13
					{
						color[] = {0.88,0.34,0.03,0};
						maxT = 2750;
					};
					class T14
					{
						color[] = {0.91,0.5,0.17,0};
						maxT = 2800;
					};
					class T15
					{
						color[] = {1,0.6,0.2,0};
						maxT = 2850;
					};
					class T16
					{
						color[] = {1,0.71,0.3,0};
						maxT = 2900;
					};
					class T17
					{
						color[] = {0.98,0.83,0.41,0};
						maxT = 2950;
					};
					class T18
					{
						color[] = {0.98,0.91,0.54,0};
						maxT = 3000;
					};
					class T19
					{
						color[] = {0.98,0.99,0.6,0};
						maxT = 3100;
					};
					class T20
					{
						color[] = {0.96,0.99,0.72,0};
						maxT = 3300;
					};
					class T21
					{
						color[] = {1,0.98,0.91,0};
						maxT = 3600;
					};
					class T22
					{
						color[] = {1,1,1,0};
						maxT = 4200;
					};
				};
			};
			class Library 
			{
				libTextDesc = "";
			};
			class StandardSound 
			{
				begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_1",1.77828,1,3500};
				soundBegin[] = {"begin1",1};
			};
		};
	};
	class 442_Cannon_LAAT_Turret: 442_saber_gun
	{
		displayname = "Laser Turret";
		reloadTime = 0.01;
		initspeed = 800;
		magazineReloadTime = 10;
		magazines[] = {"1000rnd_laat_ball_mag_green"};
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
			reloadTime=0.025;
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
			aiRateOfFire=0.025;
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
			aiRateOfFire=0.025;
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
			aiRateOfFire=0.05;
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
			recoilProne="recoil_single_prone_mx_sw";
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
			burst=3;
			requiredOpticType=1;
			aiRateOfFire=0.05;
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
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=0.05;
			aiRateOfFireDistance=900;
		};
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