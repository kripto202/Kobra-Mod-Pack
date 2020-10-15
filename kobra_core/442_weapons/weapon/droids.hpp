///E5
    class 442_E5: swlw_e5
	{
		scope=2;
		//model="\442_weapons\droids\e5\e5.p3d";
		magazines[]=
		{
			"442_65_30rnd_blue_mag",
			"442_65_60rnd_blue_mag",
			"442_65_30rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_30rnd_orange_mag",
			"442_65_60rnd_orange_mag",
			"442_65_30rnd_green_mag",
			"442_65_60rnd_green_mag",
			"442_65_30rnd_pink_mag",
			"442_65_60rnd_pink_mag",
			"442_65_30rnd_purple_mag",
			"442_65_60rnd_purple_mag",
			"442_65_30rnd_black_mag",
			"442_65_60rnd_black_mag",
			"442_65_30rnd_yellow_mag",
			"442_65_60rnd_yellow_mag",
			"442_65_30rnd_blue_b_mag",
			"442_65_60rnd_blue_b_mag",
			"442_65_30rnd_red_b_mag",
			"442_65_60rnd_red_b_mag",
			"442_65_30rnd_orange_b_mag",
			"442_65_60rnd_orange_b_mag",
			"442_65_30rnd_green_b_mag",
			"442_65_60rnd_green_b_mag",
			"442_65_30rnd_pink_b_mag",
			"442_65_60rnd_pink_b_mag",
			"442_65_30rnd_purple_b_mag",
			"442_65_60rnd_purple_b_mag",
			"442_65_30rnd_white_b_mag",
			"442_65_60rnd_white_b_mag",
			"442_65_30rnd_yellow_b_mag",
			"442_65_60rnd_yellow_b_mag"
		};
		displayname="E-5 carbine";
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
				begin1[]= {
					"\swlw_rework\sounds\e-series\E5_shot1.wss", 1, 1, 1800
				};
				begin2[]= {
					"\swlw_rework\sounds\e-series\E5_shot2.wss", 1, 1, 1800
				};
				begin3[]= {
					"\swlw_rework\sounds\e-series\E5_shot3.wss", 1, 1, 1800
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
			reloadTime=0.2;
			dispersion=0.0049999999;
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
				begin1[]= {
					"\swlw_rework\sounds\e-series\E5_shot1.wss", 1, 1, 1800
				};
				begin2[]= {
					"\swlw_rework\sounds\e-series\E5_shot2.wss", 1, 1, 1800
				};
				begin3[]= {
					"\swlw_rework\sounds\e-series\E5_shot3.wss", 1, 1, 1800
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
			reloadTime=0.19;
			dispersion=0.0049999999;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: FullAuto
		{
			burst = 10;
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=25;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire=1;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.2;
			midRange=125;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class far: close
		{
			burst = 3;
			aiRateOfFire=4;
			aiRateOfFireDistance=700;
			minRange=400;
			minRangeProbab=0.2;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
		};
	};
///e5c
    class 442_E5C: swlw_e5c
	{
		displayName="E-5C Blaster Repeater";
		//model="\442_weapons\droids\e5c\e5c.p3d";
		scope=2;
		magazines[]=
		{
			"442_65_30rnd_blue_mag",
			"442_65_60rnd_blue_mag",
			"442_65_100rnd_blue_mag",
			"442_65_30rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_100rnd_red_mag",
			"442_65_30rnd_orange_mag",
			"442_65_60rnd_orange_mag",
			"442_65_100rnd_orange_mag",
			"442_65_30rnd_green_mag",
			"442_65_60rnd_green_mag",
			"442_65_100rnd_green_mag",
			"442_65_30rnd_pink_mag",
			"442_65_60rnd_pink_mag",
			"442_65_100rnd_pink_mag",
			"442_65_30rnd_purple_mag",
			"442_65_60rnd_purple_mag",
			"442_65_100rnd_purple_mag",
			"442_65_30rnd_black_mag",
			"442_65_60rnd_black_mag",
			"442_65_100rnd_black_mag",
			"442_65_30rnd_yellow_mag",
			"442_65_60rnd_yellow_mag",
			"442_65_100rnd_yellow_mag",
			"442_65_30rnd_blue_b_mag",
			"442_65_60rnd_blue_b_mag",
			"442_65_100rnd_blue_b_mag",
			"442_65_30rnd_red_b_mag",
			"442_65_60rnd_red_b_mag",
			"442_65_100rnd_red_b_mag",
			"442_65_30rnd_orange_b_mag",
			"442_65_60rnd_orange_b_mag",
			"442_65_100rnd_orange_b_mag",
			"442_65_30rnd_green_b_mag",
			"442_65_60rnd_green_b_mag",
			"442_65_100rnd_green_b_mag",
			"442_65_30rnd_pink_b_mag",
			"442_65_60rnd_pink_b_mag",
			"442_65_100rnd_pink_b_mag",
			"442_65_30rnd_purple_b_mag",
			"442_65_60rnd_purple_b_mag",
			"442_65_100rnd_purple_b_mag",
			"442_65_30rnd_white_b_mag",
			"442_65_60rnd_white_b_mag",
			"442_65_100rnd_white_b_mag",
			"442_65_30rnd_yellow_b_mag",
			"442_65_60rnd_yellow_b_mag",
			"442_65_100rnd_yellow_b_mag"
		};
		ace_overheating_allowSwapBarrel=1;
		muzzles[]=
		{
			"this"
		};
		maxRecoilSway=0.0099999998;
		swayDecaySpeed=0.2;
		inertia=3;
		initSpeed=-1;
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="";
		dexterity=3;
		modes[]=
		{
			"FullAuto"
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[]= {
					"\swlw_rework\sounds\e-series\E5_shot1.wss", 1, 1, 1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.15000001;
			dispersion=0.0070000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
		};
		class close: FullAuto
		{
			burst = 20;
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=25;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			burst = 16;
			aiRateOfFire=1;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.2;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			burst = 10;
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			minRange=250;
			minRangeProbab=0.2;
			midRange=375;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class far: close
		{
			burst = 6;
			aiRateOfFire=4;
			aiRateOfFireDistance=700;
			minRange=500;
			minRangeProbab=0.2;
			midRange=625;
			midRangeProbab=0.69999999;
			maxRange=750;
			maxRangeProbab=0.2;
		};
		recoil="SWLW_Z6_recoil";
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
	};
