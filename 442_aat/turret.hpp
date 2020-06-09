class Turrets: Turrets 
{
	class MainTurret: MainTurret 
	{
		class Turrets: Turrets 
		{
			class CommanderOptics: CommanderOptics
			{
				body = "side_turret_l";
				gun = "side_gun_l";
				proxyIndex = 4;
				viewGunnerInExternal = 0;
				proxytype = "CPCommander";
				gunnername = "Side Gunner";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				minElev=-20;
				maxElev=30;
				minTurn=-25;
				maxTurn=25;
				initElev=0;
				initTurn=0;
				
				minOutElev=-25;
				maxOutElev=45;
				initOutElev=0;
				minOutTurn=-90;
				maxOutTurn=90;
				initOutTurn=0;
				
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.8;
				stabilizedInAxes = 3;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best",0.01,1,50};
				gunnerAction = "";
				gunnerInAction = "mbt2_slot2b_in";
				forceHideGunner = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				gunnerRightHandAnimName = "";
				gunnerLeftHandAnimName = "";
				soundAttenuationTurret = "HeliAttenuationGunner";
				isPersonTurret = 1;
				personTurretAction = "vehicle_turnout_1";
				memoryPointGun[]=
				{
					"konec_hlavne_1",
					"konec_hlavne_2"
				};
				weapons[]={"HMG_127"};
				magazines[]={"500Rnd_127x99_mag","500Rnd_127x99_mag"};
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 2;
				memoryPointGunnerOptics = "commanderview";
				memoryPointGunnerOutOptics = "commanderview";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerOutOpticsModel = "";
				gunnerOpticsEffect[] = {};
				gunnerHasFlares = 1;
				turretfollowfreelook = 1;
				class OpticsIn 
				{
					class Wide: ViewOptics {
						initAngleX=0;
						minAngleX=-8;
						maxAngleX=8;
						initAngleY=0;
						minAngleY=-45;
						maxAngleY=+80;
						initFov=0.3;
						minFov=0.3;
						maxFov=0.3;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {4,5}; //red hot chilli
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
						gunnerOpticsEffect[] = {};
					};
				};
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				startEngine = 0;
				LODTurnedOut = "VIEW_GUNNER";
				LODTurnedIn = "VIEW_GUNNER";
				class HitPoints 
				{
					class HitTurret	{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual="vez";
						passThrough = 0;
						minimalHit = 0.02;
						explosionShielding = 0.3;
						radius = 0.25;
					};
					class HitGun	{
						armor = 0.3;
						material = -1;
						name = "zbran";
						visual="";
						passThrough = 0;
						minimalHit = 0;
						explosionShielding = 1;
						radius = 0.25;
					};
				};
				selectionFireAnim = "";
				gunBeg[] = 
				{
					"konec_hlavne_1",
					"konec_hlavne_2"
				};
				gunEnd[] = 
				{
					"usti_hlavne_1",
					"usti_hlavne_2"
				};
				memoryPointGun[] = 
				{
					"konec_hlavne_1",
					"konec_hlavne_2"
				};
			};
			/*class side_turret: NewTurret
			{
				// Animation class
				body = "side_turret";
				gun = "side_turret_gun";
				// Animation source
				animationSourceBody = "side_turret";
				animationSourceGun = "side_turret_gun";
				// Main gun
				gunBeg[] = 
				{
					"side_turret_l_muzzle",
					"side_turret_r_muzzle"
				};
				gunEnd[] = 
				{
					"side_turret_l_muzzle_2",
					"side_turret_r_muzzle_2"
				};
				memoryPointGun[] = 
				{
					"side_turret_l_muzzle",
					"side_turret_r_muzzle"
				};
				proxyIndex = 3;
				gunnerName="Side Gunner";
				selectionFireAnim = "zasleh4";

				// Weapons and magazines
				weapons[]={"HMG_127"};
				magazines[]={"500Rnd_127x99_mag","500Rnd_127x99_mag"};

				// Turret servos
				minElev=-5;
				maxElev=+30;
				minTurn=-15;
				maxTurn=15;
				initElev=0;
				initTurn=0;
				soundServo[]= {"A3\Sounds_F\vehicles\armor\noises\servo_best", db-40, 1.0,50};

				// FCS
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {
					100,200,300,400,500,600,700,800,
					900,1000,1100,1200,1300,1400,1500,1600,
					1700,1800,1900,2000,2100,2200,2300,2400
				};
				discreteDistanceInitIndex = 5;	// start at 600 meters

				// Optics view
				memoryPointGunnerOptics= "gun_side_view";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 1;

				// Field of view values: 1 = 120°
				class OpticsIn 
				{
					class Wide: ViewOptics {
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=+30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=+100;
						initFov=0.3;
						minFov=0.3;
						maxFov=0.3;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {4,5}; //red hot chilli
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
						gunnerOpticsEffect[] = {};
					};
					class Medium: Wide {
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_m_F.p3d";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide {
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_n_F.p3d";
						initFov=0.028;
						minFov=0.028;
						maxFov=0.028;
					};
				};

				// Gunner operations and animations
				gunnerAction = mbt2_slot2a_out;
				gunnerInAction = mbt2_slot2a_in;
				forceHideGunner = 0;
				inGunnerMayFire = 1;	// set to 0 to let gunner look around the internal compartment if modeled
				viewGunnerInExternal = 1; // Needed to make gunner possible to be killed with penetrating rounds.
				class HitPoints 
				{
					class HitTurret	{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual="vez";
						passThrough = 0;
						minimalHit = 0.02;
						explosionShielding = 0.3;
						radius = 0.25;
					};
					class HitGun	{
						armor = 0.3;
						material = -1;
						name = "zbran";
						visual="";
						passThrough = 0;
						minimalHit = 0;
						explosionShielding = 1;
						radius = 0.25;
					};
				};
			};*/
		};
		// Main gun
		gunBeg = "usti hlavne";
		gunEnd = "konec hlavne";
		//memoryPointGun[] = {"turret_l","turret_r"};
		proxyIndex = 2;
		// Weapons and magazines
		weapons[]={"cannon_120mm"};
		magazines[]={"32Rnd_120mm_APFSDS_shells_Tracer_Red", "16Rnd_120mm_HE_shells_Tracer_Red"};
		// Turret servos
		minElev=-5;
		maxElev=+30;
		initElev=10;
		minTurn=-360;
		maxTurn=360;
		soundServo[]= {"A3\Sounds_F\vehicles\armor\noises\servo_best", db-40, 1.0,50};
		// FCS
		turretInfoType = "RscWeaponRangeZeroing";
		discreteDistance[] = {
			100,200,300,400,500,600,700,800,
			900,1000,1100,1200,1300,1400,1500,1600,
			1700,1800,1900,2000,2100,2200,2300,2400
		};
		discreteDistanceInitIndex = 5;	// start at 600 meters
		// Optics view
		memoryPointGunnerOptics= "gunnerview";
		gunnerOutOpticsModel = "";
		gunnerOutOpticsEffect[] = {};
		gunnerOpticsEffect[] = {};
		gunnerForceOptics = 1;
		// Field of view values: 1 = 120°
		class OpticsIn 
		{
			class Wide: ViewOptics 
			{
				initAngleX=0;
				minAngleX=-30;
				maxAngleX=+30;
				initAngleY=0;
				minAngleY=-100;
				maxAngleY=+100;
				initFov=0.3;
				minFov=0.3;
				maxFov=0.3;
				visionMode[] = {"Normal","Ti"};
				thermalMode[] = {4,5}; //red hot chilli
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
				gunnerOpticsEffect[] = {};
			};
			class Medium: Wide 
			{
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_m_F.p3d";
				initFov=0.07;
				minFov=0.07;
				maxFov=0.07;
			};
			class Narrow: Wide 
			{
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_n_F.p3d";
				initFov=0.028;
				minFov=0.028;
				maxFov=0.028;
			};
		};
		// Gunner operations and animations
		gunnerAction = mbt2_slot2a_out;
		gunnerInAction = mbt2_slot2a_in;
		forceHideGunner = 0;
		inGunnerMayFire = 1;	// set to 0 to let gunner look around the internal compartment if modeled
		viewGunnerInExternal = 1; // Needed to make gunner possible to be killed with penetrating rounds.
		class HitPoints 
		{
					class HitTurret	{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual="vez";
						passThrough = 0;
						minimalHit = 0.02;
						explosionShielding = 0.3;
						radius = 0.25;
					};
					class HitGun	{
						armor = 0.3;
						material = -1;
						name = "zbran";
						visual="";
						passThrough = 0;
						minimalHit = 0;
						explosionShielding = 1;
						radius = 0.25;
					};
		};
	};
};	