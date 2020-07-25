    class 442_aat_base: Tank_F
	{
		author="kripto202";
		scope=1;
		scopecurator=1;
		scopearsenal=1;
		displayname="AAT";
		model="\442_g_vehicle\aat\aat.p3d";
		picture="";
		icon="\A3\armor_f_gamma\MBT_02\Data\UI\map_MBT_02_ca.paa";
		side=0;
		faction="442_CIS";
		editorSubcategory="SWLG_GAR_tanks";
		insideSoundCoef=0.89999998;
		threat[]={0.80000001,1,0.30000001};
		canFloat=1;
		waterLeakiness=2.5;
		waterAngularDampingCoef=4;
		waterLinearDampingCoefY=4;
		waterLinearDampingCoefX=4;
		waterLinearDampingCoefZ=4;
		engineShiftY=1.2;
		rudderForceCoef=100;
		rudderForceCoefAtMaxSpeed=100;
		waterPPInVehicle=0;
		waterResistanceCoef=0;
		waterSpeedFactor=3000;
		maxFordingDepth=0.5;
		waterResistance=1;
		turnCoef=0.5;
		engineEffectSpeed=5;
		simulation="tankX";
        enginePower=3000;
        maxOmega=276;
        peakTorque=4832;
        torqueCurve[]=
        {
            {0, 0},
            {"(1600/2640)",	"(2650/2850)"},
            {"(1800/2640)", "(2800/2850)"},
            {"(1900/2640)", "(2850/2850)"},
            {"(2000/2640)", "(2800/2850)"},
            {"(2200/2640)",	"(2750/2850)"},
            {"(2400/2640)",	"(2600/2850)"},
            {"(2640/2640)",	"(2350/2850)"}
        };
        thrustDelay=0.1;
        clutchStrength=180;
        fuelCapacity=1885;
        brakeIdleSpeed=1.78;
        latency=0.1;
        tankTurnForce=600000;
        idleRpm=700;
        redRpm=2640;
        engineLosses=25;
        transmissionLosses=15;
        class complexGearbox
        {
            GearboxRatios[]=
            {
                "R2", -3.9000001,
                "N", 0,
                "D1", 4.6999998,
                "D2", 3.5,
                "D3", 2.5999999,
                "D4", 2,
                "D5", 1.5,
                "D6", 1.125,
                "D7", 0.85000002
            };
            TransmissionRatios[]=
            {
                "High",	15
            };
            AmphibiousRatios[]=
            {
                "R1",
                -30,
                "N",
                0,
                "D1",
                50
            };
            gearBoxMode="auto";
            moveOffGear=1;
            driveString="D";
            neutralString="N";
            reverseString="R";
            transmissionDelay=0.1;
        };
        class Wheels
        {
            class L2
            {
                boneName="wheel_podkoloL1";
                center="wheel_1_2_axis";
                boundary="wheel_1_2_bound";
                damping=75;
                steering=0;
                side="left";
                weight=150;
                mass=150;
                MOI=25;
                latStiffX=25;
                latStiffY=280;
                longitudinalStiffnessPerUnitGravity=100000;
                maxBrakeTorque=20000;
                sprungMass=4000;
                springStrength=324000;
                springDamperRate=36000;
                dampingRate=1;
                dampingRateInAir=8830;
                dampingRateDamaged=10;
                dampingRateDestroyed=10000;
                maxDroop=0.15000001;
                maxCompression=0.15000001;
            };
            class L3: L2
            {
                boneName="wheel_podkolol2";
                center="wheel_1_3_axis";
                boundary="wheel_1_3_bound";
            };
            class L4: L2
            {
                boneName="wheel_podkolol3";
                center="wheel_1_4_axis";
                boundary="wheel_1_4_bound";
            };
            class L5: L2
            {
                boneName="wheel_podkolol4";
                center="wheel_1_5_axis";
                boundary="wheel_1_5_bound";
            };
            class L6: L2
            {
                boneName="wheel_podkolol5";
                center="wheel_1_6_axis";
                boundary="wheel_1_6_bound";
            };
            class L7: L2
            {
                boneName="wheel_podkolol6";
                center="wheel_1_7_axis";
                boundary="wheel_1_7_bound";
            };
            class R2: L2
            {
                boneName="wheel_podkolop1";
                center="wheel_2_2_axis";
                boundary="wheel_2_2_bound";
                side="right";
            };
            class R3: R2
            {
                boneName="wheel_podkolop2";
                center="wheel_2_3_axis";
                boundary="wheel_2_3_bound";
            };
            class R4: R2
            {
                boneName="wheel_podkolop3";
                center="wheel_2_4_axis";
                boundary="wheel_2_4_bound";
            };
            class R5: R2
            {
                boneName="wheel_podkolop4";
                center="wheel_2_5_axis";
                boundary="wheel_2_5_bound";
            };
            class R6: R2
            {
                boneName="wheel_podkolop5";
                center="wheel_2_6_axis";
                boundary="wheel_2_6_bound";
            };
            class R7: R2
            {
                boneName="wheel_podkolop6";
                center="wheel_2_7_axis";
                boundary="wheel_2_7_bound";
            };
        };
		cost=1500000;
		damageResistance=0.02;
        crewVulnerable=1;
        armor=500;
        armorStructural=6;
        class Hitpoints: Hitpoints
        {
            class HitHull: HitHull
            {
                armor = 0.75;
                material = -1;
                name = "hull_hit";
                visual = "zbytek";
                passthrough = 0.03;
                minimalhit = 0.14;
                explosionshielding = 2;
                radius = 0.25;
            };
            class HitEngine: HitEngine
            {
                armor=0.75;
                material=-1;
                name="engine_hit";
                passThrough=0.079999998;
                minimalHit=0.23999999;
                explosionShielding=1;
                radius=0.33000001;
            };
            class hitammo_l: HitEngine
            {
                name = "ammo_l_hit";
            };
            class hitammo_r: hitammo_l
            {
                name = "ammo_r_hit";
            };
        };
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body="side_turret_l";
						gun="side_gun_l";
						proxyIndex=4;
						viewGunnerInExternal=0;
						proxytype="CPCommander";
						gunnername="Side Gunner";
						animationSourceBody="ObsTurret";
						animationSourceGun="ObsGun";
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
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_best",
							0.0099999998,
							1,
							50
						};
						gunnerAction="";
						gunnerInAction="mbt2_slot2b_in";
						forceHideGunner=0;
						outGunnerMayFire=1;
						inGunnerMayFire=1;
						gunnerRightHandAnimName="";
						gunnerLeftHandAnimName="";
						soundAttenuationTurret="HeliAttenuationGunner";
						isPersonTurret=1;
						personTurretAction="vehicle_turnout_1";
						memoryPointGun[]=
						{
							"konec_hlavne_1",
							"konec_hlavne_2"
						};
						weapons[]=
						{
							"442_aat_127"
						};
						magazines[]=
						{
							"442_500Rnd_127x99_mag_red",
							"442_500Rnd_127x99_mag_red"
						};
						turretInfoType="RscWeaponRangeZeroing";
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						memoryPointGunnerOptics="commanderview";
						memoryPointGunnerOutOptics="commanderview";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						gunnerHasFlares=1;
						turretfollowfreelook=1;
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								initAngleX=0;
								minAngleX=-8;
								maxAngleX=8;
								initAngleY=0;
								minAngleY=-45;
								maxAngleY=80;
								initFov=0.30000001;
								minFov=0.30000001;
								maxFov=0.30000001;
								visionMode[]=
								{
									"Normal",
									"Ti"
								};
								thermalMode[]={4,5};
								gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
								gunnerOpticsEffect[]={};
							};
						};
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						startEngine=1;
						LODTurnedOut="VIEW_GUNNER";
						LODTurnedIn="VIEW_GUNNER";
						class HitPoints
						{
							class HitTurret
							{
								armor=0.80000001;
								material=-1;
								name="gunner_turret_hit";
								visual="vez";
								passThrough=0;
								minimalHit=0.02;
								explosionShielding=0.30000001;
								radius=0.25;
							};
							class HitGun
							{
								armor=0.30000001;
								material=-1;
								name="gunner_turret_hit";
								visual="";
								passThrough=0;
								minimalHit=0;
								explosionShielding=1;
								radius=0.25;
							};
						};
						class Damage
						{
							tex[]={};
							mat[]=
							{
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_body.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_damage.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_int.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_int_damage.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_int_destruct.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_tow.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_damage.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_destruct.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_track.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_track_damage.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_track_destruct.rvmat"
							};
						};
						selectionFireAnim="";
						gunBeg[]=
						{
							"konec_hlavne_1",
							"konec_hlavne_2"
						};
						gunEnd[]=
						{
							"usti_hlavne_1",
							"usti_hlavne_2"
						};
					};
				};
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				proxyIndex=2;
				weapons[]=
				{
					"442_aat_cannon_75mm"
				};
				magazines[]=
				{
					"442_30Rnd_75mm_AP_mag_red",
					"442_30Rnd_75mm_AP_mag_red",
					"442_30Rnd_75mm_AP_mag_red",
					"442_30Rnd_75mm_HE_mag_red",
					"442_30Rnd_75mm_HE_mag_red"
				};
				minElev=-5;
				maxElev=30;
				initElev=10;
				minTurn=-360;
				maxTurn=360;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					0.0099999998,
					1,
					50
				};
				turretInfoType="RscWeaponRangeZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={4,5};
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_m_F.p3d";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_n_F.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				gunnerAction="mbt2_slot2a_out";
				gunnerInAction="mbt2_slot2a_in";
				forceHideGunner=0;
				inGunnerMayFire=1;
				viewGunnerInExternal=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="main_turret_hit";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.30000001;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.30000001;
						material=-1;
						name="main_gun_hit";
						visual="";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.25;
					};
				};
			};
		};
		class RenderTargets
		{
		};
		soundGetIn[]=
        {
            "A3\Sounds_F_EPB\Tracked\noises\get_in_out",
            0.56234097,
            1
        };
        soundGetOut[]=
        {
            "A3\Sounds_F_EPB\Tracked\noises\get_in_out",
            0.56234097,
            1,
            20
        };
        soundTurnIn[]=
        {
            "A3\Sounds_F\vehicles\noises\Turn_in_out",
            1.77828,
            1,
            20
        };
        soundTurnOut[]=
        {
            "A3\Sounds_F\vehicles\noises\Turn_in_out",
            1.77828,
            1,
            20
        };
        soundTurnInInternal[]=
        {
            "A3\Sounds_F\vehicles\noises\Turn_in_out",
            1.77828,
            1,
            20
        };
        soundTurnOutInternal[]=
        {
            "A3\Sounds_F\vehicles\noises\Turn_in_out",
            1.77828,
            1,
            20
        };
        soundDammage[]=
        {
            "",
            0.56234097,
            1
        };

        //aat sounds
        soundEngineOnInt[]=
        {
            "442_g_vehicle\aat\sounds\aat_start_int.wss",
            0.79432797,
            1
        };
        soundEngineOffInt[]=
        {
            "442_g_vehicle\aat\sounds\aat_stop_int.wss",
            0.79432797,
            1
        };
        soundEngineOnExt[]=
        {
            "442_g_vehicle\aat\sounds\aat_start.wss",
            1.99526,
            1,
            100
        };
        soundEngineOffExt[]=
        {
            "442_g_vehicle\aat\sounds\aat_stop.wss",
            1.99526,
            1,
            100
        };

        /*soundEngineOnInt[]=
        {
            "A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_start",
            0.70794576,
            1
        };
        soundEngineOnExt[]=
        {
            "A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_start",
            1,
            1,
            200
        };
        soundEngineOffInt[]=
        {
            "A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_stop",
            0.70794576,
            1
        };
        soundEngineOffExt[]=
        {
            "A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_stop",
            1,
            1,
            200
        };*/

        BushCrash1[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_01",
            0.63095701,
            1,
            100
        };
        BushCrash2[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_02",
            0.63095701,
            1,
            100
        };
        BushCrash3[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_03",
            0.63095701,
            1,
            100
        };
        soundBushCrash[]=
        {
            "BushCrash1",
            0.33000001,
            "BushCrash2",
            0.33000001,
            "BushCrash3",
            0.33000001
        };
        buildCrash0[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
            3.1622801,
            1,
            200
        };
        buildCrash1[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
            3.1622801,
            1,
            200
        };
        buildCrash2[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
            3.1622801,
            1,
            200
        };
        buildCrash3[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
            3.1622801,
            1,
            200
        };
        buildCrash4[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
            3.1622801,
            1,
            200
        };
        buildCrash5[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
            3.1622801,
            1,
            200
        };
        soundBuildingCrash[]=
        {
            "buildCrash0",
            0.16599999,
            "buildCrash1",
            0.16599999,
            "buildCrash2",
            0.16599999,
            "buildCrash3",
            0.16599999,
            "buildCrash4",
            0.16599999,
            "buildCrash5",
            0.16599999
        };
        woodCrash0[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
            3.1622801,
            1,
            200
        };
        woodCrash1[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
            3.1622801,
            1,
            200
        };
        woodCrash2[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
            3.1622801,
            1,
            200
        };
        woodCrash3[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
            3.1622801,
            1,
            200
        };
        woodCrash4[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
            3.1622801,
            1,
            200
        };
        woodCrash5[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
            3.1622801,
            1,
            200
        };
        soundWoodCrash[]=
        {
            "woodCrash0",
            0.16599999,
            "woodCrash1",
            0.16599999,
            "woodCrash2",
            0.16599999,
            "woodCrash3",
            0.16599999,
            "woodCrash4",
            0.16599999,
            "woodCrash5",
            0.16599999
        };
        ArmorCrash0[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
            3.1622801,
            1,
            200
        };
        ArmorCrash1[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
            3.1622801,
            1,
            200
        };
        ArmorCrash2[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
            3.1622801,
            1,
            200
        };
        ArmorCrash3[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
            3.1622801,
            1,
            200
        };
        ArmorCrash4[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
            3.1622801,
            1,
            200
        };
        ArmorCrash5[]=
        {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
            3.1622801,
            1,
            200
        };
        soundArmorCrash[]=
        {
            "ArmorCrash0",
            0.16599999,
            "ArmorCrash1",
            0.16599999,
            "ArmorCrash2",
            0.16599999,
            "ArmorCrash3",
            0.16599999,
            "ArmorCrash4",
            0.16599999,
            "ArmorCrash5",
            0.16599999
        };
        class Sounds: Sounds
        {
            class Idle_ext
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine.wss",
                    4,
                    1,
                    200
                };
                frequency="0.95 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
                volume="engineOn*camPos*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
            };
            class Engine
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine.wss",
                    4.48808,
                    1,
                    240
                };
                frequency="0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
                volume="engineOn*camPos*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
            };
            class Engine1_ext
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine.wss",
                    5.6501598,
                    1,
                    280
                };
                frequency="0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
                volume="engineOn*camPos*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
            };
            class Engine2_ext
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine.wss",
                    6.3396001,
                    1,
                    320
                };
                frequency="0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
                volume="engineOn*camPos*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
            };
            class Engine3_ext
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine.wss",
                    7.1131301,
                    1,
                    360
                };
                frequency="0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
                volume="engineOn*camPos*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
            };
            class Engine4_ext
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine.wss",
                    7.98104,
                    1,
                    400
                };
                frequency="0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
                volume="engineOn*camPos*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
            };
            class Engine5_ext
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine.wss",
                    8.9548903,
                    1,
                    440
                };
                frequency="0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
                volume="engineOn*camPos*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
            };
            class IdleThrust
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine.wss",
                    5.6501598,
                    1,
                    200
                };
                frequency="0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
            };
            class EngineThrust
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine.wss",
                    7.1131301,
                    1,
                    200
                };
                frequency="0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
            };
            class Engine1_Thrust_ext
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine.wss",
                    8.9548903,
                    1,
                    230
                };
                frequency="0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
            };
            class Engine2_Thrust_ext
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine.wss",
                    10.0475,
                    1,
                    290
                };
                frequency="0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
            };
            class Engine3_Thrust_ext
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine.wss",
                    8.9548903,
                    1,
                    350
                };
                frequency="0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
            };
            class Engine4_Thrust_ext
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine.wss",
                    11.27353,
                    1,
                    400
                };
                frequency="0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
            };
            class Engine5_Thrust_ext
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine.wss",
                    12.64913,
                    1,
                    450
                };
                frequency="0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
            };
            class Idle_int
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine.wss",
                    2,
                    1
                };
                frequency="0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
                volume="engineOn*(1-camPos)*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
            };
            class Engine_int
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine_int.wss",
                    1.41589,
                    1
                };
                frequency="0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
                volume="engineOn*(1-camPos)*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
            };
            class Engine1_int
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine_int.wss",
                    1.58866,
                    1
                };
                frequency="0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
                volume="engineOn*(1-camPos)*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
            };
            class Engine2_int
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine_int.wss",
                    1.7825,
                    1
                };
                frequency="0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
                volume="engineOn*(1-camPos)*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
            };
            class Engine3_int
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine_int.wss",
                    2,
                    1
                };
                frequency="0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
                volume="engineOn*(1-camPos)*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
            };
            class Engine4_int
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine_int.wss",
                    2.24404,
                    1
                };
                frequency="0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
                volume="engineOn*(1-camPos)*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
            };
            class Engine5_int
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine_int.wss",
                    2.5178499,
                    1
                };
                frequency="0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
                volume="engineOn*(1-camPos)*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
            };
            class IdleThrust_int
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine_int.wss",
                    2.5178499,
                    1
                };
                frequency="0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
            };
            class EngineThrust_int
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine_int.wss",
                    1.58866,
                    1
                };
                frequency="0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
            };
            class Engine1_Thrust_int
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine_int.wss",
                    1.7825,
                    1
                };
                frequency="0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
            };
            class Engine2_Thrust_int
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine_int.wss",
                    1.7825,
                    1
                };
                frequency="0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
            };
            class Engine3_Thrust_int
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine_int.wss",
                    2,
                    1
                };
                frequency="0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
            };
            class Engine4_Thrust_int
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine_int.wss",
                    2.24404,
                    1
                };
                frequency="0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
            };
            class Engine5_Thrust_int
            {
                sound[]=
                {
                    "442_g_vehicle\aat\sounds\aat_engine_int.wss",
                    2.5178499,
                    1
                };
                frequency="0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
            };
        };
		driverAction="driver_apcwheeled2_out";
		driverInAction="driver_apcwheeled2_in";
		viewDriverInExternal=1;
		gunBeg[]=
		{
			"gun_driver_l",
			"gun_driver_r"
		};
		gunEnd[]=
		{
			"gun_driver_l_2",
			"gun_driver_r_2"
		};
		memoryPointGun[]=
		{
			"gun_driver_l",
			"gun_driver_r"
		};
		selectionFireAnim="zasleh4";
		proxytype="CPDriver";
		proxyIndex=1;
		forcehideDriver=0;
		DriverForceOptics=1;
		weapons[]=
		{
			"442_aat_gmg"
		};
		magazines[]=
		{
			"442_50Rnd_40mm_G_belt",
			"442_50Rnd_40mm_G_belt"
		};
		memoryPointsLeftWaterEffect="EngineEffectL";
        memoryPointsRightWaterEffect="EngineEffectR";
        memoryPointTrack1L="Track LL";
        memoryPointTrack1R="Track LR";
        memoryPointTrack2L="Track RL";
        memoryPointTrack2R="Track RR";
        dustFrontLeftPos="dustFrontLeft";
        dustFrontRightPos="dustFrontRight";
        dustBackLeftPos="dustBackLeft";
        dustBackRightPos="dustBackRight";
        class Exhausts
        {
            class Exhaust_1
            {
                position="Exhaust_1_pos";
                direction="Exhaust_1_dir";
                effect="ExhaustEffectTankSide";
            };
            class Exhaust_2
            {
                position="Exhaust_2_pos";
                direction="Exhaust_2_dir";
                effect="ExhaustEffectTankSide";
            };
        };
		driver="SWLB_b1_crew_base";
		crew="SWLB_b1_crew_base";
		typicalCargo[]=
		{
			"SWLB_b1_crew_base"
		};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="442_aat_cannon_75mm";
			};
		};
		class Reflectors
		{
		};
		memorypointLRocket="rocketl";
		memorypointRRocket="rocketr";
		memorypointLmissile="rocketl";
		memorypointRmissile="rocketr";
	};
	class 442_aat: 442_aat_base
	{
		displayname="AAT";
		author="kripto202";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"body1",
			"body2",
			"gun"
		};
		hiddenselectionstextures[]=
		{
			"442_g_vehicle\aat\data\body1_co.paa",
			"442_g_vehicle\aat\data\body2_co.paa",
			"442_g_vehicle\aat\data\gun_co.paa"
		};
		class texturesources
		{
			class base
			{
				displayname="Trade Federation";
				author="Legion Studio";
				textures[]=
				{
					"442_g_vehicle\aat\data\body1_co.paa",
					"442_g_vehicle\aat\data\body2_co.paa",
					"442_g_vehicle\aat\data\gun_co.paa"
				};
				factions[]=
				{
					"442_CIS"
				};
			};
			class red: base
			{
				displayname="CIS Red";
				textures[]=
				{
					"442_g_vehicle\aat\data\body1_red_co.paa",
					"442_g_vehicle\aat\data\body2_red_co.paa",
					"442_g_vehicle\aat\data\gun_red_co.paa"
				};
			};
			class black: base
			{
				displayname="CIS Black";
				textures[]=
				{
					"442_g_vehicle\aat\data\body1_black_co.paa",
					"442_g_vehicle\aat\data\body2_black_co.paa",
					"442_g_vehicle\aat\data\gun_black_co.paa"
				};
			};
			class green: base
			{
				displayname="CIS Green";
				textures[]=
				{
					"442_g_vehicle\aat\data\body1_green_co.paa",
					"442_g_vehicle\aat\data\body2_green_co.paa",
					"442_g_vehicle\aat\data\gun_green_co.paa"
				};
			};
			class blue: base
			{
				displayname="CIS Blue";
				textures[]=
				{
					"442_g_vehicle\aat\data\body1_blue_co.paa",
					"442_g_vehicle\aat\data\body2_blue_co.paa",
					"442_g_vehicle\aat\data\gun_blue_co.paa"
				};
			};
			class winter: base
			{
				displayname="CIS Winter";
				textures[]=
				{
					"442_g_vehicle\aat\data\body1_base_co.paa",
					"442_g_vehicle\aat\data\body2_base_co.paa",
					"442_g_vehicle\aat\data\gun_base_co.paa"
				};
			};
		};
	};

	class 442_aat_wreck: Wreck_base_F
	{
		author = "kripto202";
		mapsize = 20;
		editorPreview = "";
		scope = 2;
		scopecurator = 2;
		icon="iconObject_1x2";
		displayname = "AAT (Wrecked)";
		model = "442_g_vehicle\aat\aat_wreck.p3d";
		editorCategory = "kobra";
		editorSubcategory = "442_wrecks";
	};