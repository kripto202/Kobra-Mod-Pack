    class 442_DC15A: 442_rifle_base
	{
		scope=2;
		model="442_weapons\clones\dc15a\dc15a.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\SWLW_clones\rifles\dc15a\anims\dc15a_handanim.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\SWLW_clones\rifles\dc15a\data\ui\DC15A_ui.paa";
		magazines[]=
		{
			"442_DC15A_Mag"
		};
		displayname="DC-15A rifle";
		descriptionShort="Clone trooper rifle";
		selectionFireAnim="zasleh";
		hiddenSelections[]=
		{
			"camo1",
			"sight"
		};
		hiddenSelectionsTextures[]=
		{
			"442_weapons\clones\dc15a\data\DC15A_co.paa",
			"\442_weapons\clones\dc15a\data\optic\training_blue.paa"
		};
		class Library
		{
			libTextDesc="";
		};
		drySound[]=
		{
			"",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"SWLW_clones\pistols\dc17\sounds\DC17_reload.wss",
			0.56234133,
			1,
			30
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_2",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_3",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.18;
			dispersion=0.00030149999;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_2",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"SWLW_clones\smgs\dc15s\sounds\DC15S_3",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.18;
			dispersion=0.00014545;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
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
		maxRecoilSway=0.0125;
		recoil="SWLW_recoil";
		swayDecaySpeed=1.25;
		dexterity=1.7;
		initspeed=800;
		inertia=0.5;
		class OpticsModes
		{
			class sight
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]={""};
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=0.5;
				opticsZoomInit=0.75;
				discreteInitIndex=0;
				distanceZoomMin=200;
				distanceZoomMax=200;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare="false";
				cameraDir="";
			};
			class scope: sight
			{
				opticsID = 2;
				opticsZoomMin = 0.125;
				opticsZoomMax = 0.125;
				opticsZoomInit = 0.125;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
			};
		};
		class FlashLight
		{
			color[]={180,160,130};
			ambient[]={0.89999998,0.80000001,0.69999999};
			intensity=100;
			size=1;
			innerAngle=5;
			outerAngle=100;
			coneFadeCoef=10;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1.5;
			flareMaxDistance=100;
			dayLight=1;
			class Attenuation
			{
				start=0;
				constant=0.5;
				linear=0.1;
				quadratic=0.2;
				hardLimitStart=27;
				hardLimitEnd=34;
			};
			scale[]={0};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=130;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
	};
    class 442_DC15A_ugl: 442_DC15A
	{
		muzzles[]=
		{
			"this",
			"EGLM"
		};
		displayName="DC-15A rifle UGL";
		model="442_weapons\clones\dc15a\dc15a_ugl.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"sight"
		};
		hiddenSelectionsTextures[]=
		{
			"442_weapons\clones\dc15a\data\DC15A_co.paa",
			"\SWLW_clones\rifles\dc15a\data\DC15A_ugl_co.paa",
			"\442_weapons\clones\dc15a\data\optic\training_blue.paa"
		};
		class EGLM: UGL_F
		{
			displayName="Grenade launcher";
			descriptionShort="UGL";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]=
			{
				"442_dc15a_3rnd_ugl_mag",
				"442_DC15A_UGL_Mag",
				"442_DC15A_UGL_huntir_Mag",
				"442_DC15A_UGL_flare_white_Mag",
				"442_DC15A_UGL_flare_red_Mag",
				"442_DC15A_UGL_flare_green_Mag",
				"442_DC15A_UGL_smoke_white_Mag",
				"442_DC15A_UGL_smoke_red_Mag",
				"442_DC15A_UGL_smoke_purple_Mag",
				"442_DC15A_UGL_smoke_blue_Mag",
				"442_DC15A_UGL_smoke_green_Mag"
			};
			magazineWell[]={};
			cameraDir="OP_look";
			discreteDistance[]={100,200,300,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=150;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
	};
    class 442_DC15A_MC: 442_DC15A
	{
		muzzles[] = 
		{
			"this",
			"442_MC"
		};
		displayName="DC-15A rifle UBSG";
		model="442_weapons\clones\dc15a\dc15a_ugl.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"sight"
		};
		hiddenSelectionsTextures[]=
		{
			"\442_weapons\clones\dc15a\data\DC15A_co.paa",
			"\SWLW_clones\rifles\dc15a\data\DC15A_ugl_co.paa",
			"\442_weapons\clones\dc15a\data\optic\training_blue.paa"
		};
		class 442_MC: Rifle_Base_F
		{
			magazines[] = 
			{
				"442_dc15a_shotgun_ugl_mag"
			};
			Displayname = "Scattergun Mode";
			displaynameshort = "Scattergun";
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
			initSpeed = 400;
			reloadMagazineSound[] = {"\SWLW_main\sounds\scatter_reload", 0.562341, 1, 30};
			cursor = "sgun";
			recoil = "recoil_MSBS65_ubs";
			fireSpreadAngle = 0.95;
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL", 1, 1, 10};
					soundClosure[] = {"closure1", 1};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"\SWLW_main\sounds\scatter", 0.707946, 1, 200};
					begin2[] = {"\SWLW_main\sounds\scatter", 0.707946, 1, 200};
					soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
				};
				reloadTime = 0.3;
				dispersion = 0.01245;
				minRange = 2;
				minRangeProbab = 0.95;
				midRange = 30;
				midRangeProbab = 0.95;
				maxRange = 100;
				maxRangeProbab = 0.3;
				aiRateOfFire = 1;
				aiRateOfFireDistance = 30;
			};
		};
	};