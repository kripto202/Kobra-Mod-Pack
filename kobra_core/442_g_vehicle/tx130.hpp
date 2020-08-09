    class 442_tx130: Tank_F
	{
		author = "kripto202";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		side = 1;
		displayname = "[K] TX-130 Hover Tank";
		model="SWLG_clones_tanks\tx130\tx130.p3d";
		picture="\A3\armor_f_gamma\MBT_02\Data\UI\MBT_02_Base_ca.paa";
		icon="\A3\armor_f_gamma\MBT_02\Data\UI\map_MBT_02_ca.paa";
		// faction="SWLB_GAR";
		editorSubcategory="SWLG_GAR_tanks";
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.6;
		tf_range = 30000;
		hiddenSelections[]=
		{
			"_hull",
			"_rokets",
			"_tracks",
			"_turrets"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLG_clones_tanks\tx130\data\tx130_hull_co.paa",
			"SWLG_clones_tanks\tx130\data\tx130_rocket_co.paa",
			"SWLG_clones_tanks\tx130\data\tx130_tracks_co.paa",
			"SWLG_clones_tanks\tx130\data\tx130_turrets_co.paa"
		};
		faction = "kobra";
		canFloat=1;
		waterPPInVehicle=0;
		waterResistanceCoef=0.07;
		waterLeakiness=2.5;
		waterSpeedFactor=0.5;
		waterAngularDampingCoef=5;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=0.5;
		maxFordingDepth=0.5;
		waterResistance=1;
		simulation="tankX";
		enginePower=500;
		maxOmega=276;
		peakTorque=4832;
		maxspeed=58;
		torqueCurve[]=
		{
			{0,0},
			
			{
				"(1600/2640)",
				"(2650/2850)"
			},
			
			{
				"(1800/2640)",
				"(2800/2850)"
			},
			
			{
				"(1900/2640)",
				"(2850/2850)"
			},
			
			{
				"(2000/2640)",
				"(2800/2850)"
			},
			
			{
				"(2200/2640)",
				"(2750/2850)"
			},
			
			{
				"(2400/2640)",
				"(2600/2850)"
			},
			
			{
				"(2640/2640)",
				"(2350/2850)"
			}
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
				"R2",
				-3.9000001,
				"N",
				0,
				"D1",
				4.6999998,
				"D2",
				3.5,
				"D3",
				2.5999999,
				"D4",
				2,
				"D5",
				1.5,
				"D6",
				1.125,
				"D7",
				0.85000002
			};
			TransmissionRatios[]=
			{
				"High",
				15
			};
			gearBoxMode="full-auto";
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
				maxBrakeTorque=40000;
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
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.80000001;
				material=-1;
				name="hitpoint_hull";
				visual="_hull";
				passThrough=1;
				minimalHit=0.14;
				explosionShielding=2;
				radius=0.25;
			};
			class HitEngine: HitEngine
			{
				armor=1;
				material=-1;
				name="hitpoint_engine";
				passThrough=0.80000001;
				minimalHit=0.23999999;
				explosionShielding=1;
				radius=0.33000001;
			};
			class HitFuel: HitFuel
			{
				armor=1;
				material=-1;
				name="hitpoints_fuel";
				passThrough=0.80000001;
				minimalHit=0.23999999;
				explosionShielding=1;
				radius=0.33000001;
			};
			class HitLTrack: HitLTrack
			{
				armor=0.5;
				material=-1;
				name="hitpoint_track_l";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=1.4400001;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=0.5;
				material=-1;
				name="hitpoint_track_r";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=1.4400001;
				radius=0.30000001;
			};
		};
		class Turrets: Turrets
		{
			class CargoTurret1: CargoTurret
			{
				gunnerAction="passenger_inside_3";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo1";
				memoryPointsGetInGunnerDir="pos cargo1 dir";
				gunnerName="Passenger Gunner 1";
				proxyIndex=1;
				maxElev=15;
				minElev=-25;
				maxTurn=60;
				minTurn=-60;
				isPersonTurret=2;
				ejectDeadGunner=1;
				gunnerInAction="passenger_inside_3";
				startEngine=0;
				allowLauncherIn=1;
				allowLauncherOut=1;
				LODTurnedIn=1200;
				forceHideGunner=1;
			};
			class CargoTurret2: CargoTurret1
			{
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo2";
				memoryPointsGetInGunnerDir="pos cargo2 dir";
				gunnerName="Passenger Gunner 2";
				proxyIndex=2;
			};
			class CargoTurret3: CargoTurret1
			{
				proxyIndex=3;
				gunnerName="Passenger Gunner 3";
				gunnerCompartments="Compartment4";
				memoryPointsGetInGunner="pos cargo3";
				memoryPointsGetInGunnerDir="pos cargo3 dir";
			};
			class CargoTurret4: CargoTurret1
			{
				proxyIndex=4;
				gunnerName="Passenger Gunner 4";
				gunnerCompartments="Compartment5";
				memoryPointsGetInGunner="pos cargo4";
				memoryPointsGetInGunnerDir="pos cargo4 dir";
			};
			class CargoTurret5: CargoTurret1
			{
				proxyIndex=5;
				gunnerName="Passenger Gunner 5";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo5";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret6: CargoTurret1
			{
				proxyIndex=6;
				gunnerName="Passenger Gunner 6";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret7: CargoTurret1
			{
				proxyIndex=7;
				gunnerName="Passenger Gunner 7";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret8: CargoTurret1
			{
				proxyIndex=8;
				gunnerName="Passenger Gunner 8";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret9: CargoTurret1
			{
				proxyIndex=9;
				gunnerName="Passenger Gunner 9";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret10: CargoTurret1
			{
				proxyIndex=10;
				gunnerName="Passenger Gunner 10";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret11: CargoTurret1
			{
				proxyIndex=11;
				gunnerName="Passenger Gunner 11";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo11";
				memoryPointsGetInGunnerDir="pos cargo11 dir";
			};
			class MainTurret: MainTurret
			{
				class Turrets
				{
				};
				body="mainTurret";
				gun="mainGun";
				weapons[] = 
				{
					"442_saber_gun",
					"442_saber_tow"
				};
				memoryPointGun[]=
				{
					"usti hlavne 1",
					"usti hlavne 2"
				};
				magazines[] = 
				{
					"442_50_200rnd_ap_blue_mag",
					"442_50_200rnd_ap_blue_mag",
					"442_50_200rnd_ap_blue_mag",
					"442_50_200rnd_ap_blue_mag",
					"442_50_200rnd_he_blue_mag",
					"442_50_200rnd_he_blue_mag",
					"442_50_200rnd_he_blue_mag",
					"442_50_200rnd_he_blue_mag",
					"4rnd_saber_tow_mag"
				};
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
				commanding=1;
				minElev=-7;
				initElev=0;
				maxElev=30;
				minTurn=-14;
				initTurn=0;
				maxTurn=14;
				minCamElev=-90;
				maxCamElev=90;
				gunnerAction="crew_tank01_out";
				gunnerInAction="Gunner_APC_tracked_01_crv_in";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				forceHideGunner=1;
				startEngine=0;
				stabilizedInAxes=3;
				gunnerForceOptics=0;
				usePip=1;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerOutOpticsModel="";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				memoryPointGunnerOptics="gunnerview";
				selectionFireAnim="";
				showCrewAim=2;
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerRightHandAnimName="turret_control";
				LODOpticsIn=0;
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
				class ViewGunner: ViewGunner
				{
					initAngleX=-9;
					initAngleY=0;
					initFov=0.89999998;
					minFov=0.25;
					maxFov=1.25;
					minAngleX=-65;
					maxAngleX=85;
					minAngleY=-150;
					maxAngleY=150;
					minMoveX=-0.075000003;
					maxMoveX=0.075000003;
					minMoveY=-0.075000003;
					maxMoveY=0.075000003;
					minMoveZ=-0.075000003;
					maxMoveZ=0.1;
				};
				class ViewOptics: ViewOptics
				{
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
				};
				class HitPoints
				{
					class HitGunL
					{
						armor=-250;
						material=-1;
						armorComponent="gun_left";
						name="hit_main_gun_point";
						visual="gun_left";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.2;
						radius=0.2;
						isGun=1;
					};
					class HitGunR
					{
						armor=-250;
						material=-1;
						armorComponent="gun_right";
						name="hit_main_gun_point";
						visual="gun_right";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.2;
						radius=0.2;
						isGun=1;
					};
				};
			};
			class CommanderOptics: CommanderOptics
			{
				memoryPointGunnerOutOptics="commanderview";
				memoryPointGunnerOptics="commanderview";
				minElev=-10;
				maxElev=30;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				minCamElev=-90;
				maxCamElev=90;
				weapons[]=
				{
					"SmokeLauncher"
				};
				magazines[]=
				{
					"SmokeLauncherMag"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
					0.56234133,
					1,
					30
				};
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				gunnerAction="Commander_APC_tracked_01_crv_out";
				gunnerInAction="Commander_APC_tracked_01_crv_in";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				turretInfoType="RscWeaponRangeFinder";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerforceoptics=0;
				usePip=1;
				animationSourceStickX="com_turret_control_x";
				animationSourceStickY="com_turret_control_y";
				gunnerLeftHandAnimName="com_turret_control";
				turretFollowFreeLook=2;
				LODOpticsIn=0;
				LODTurnedIn=1100;
				LODTurnedOut=1;
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
				gunnerOutOpticsModel="";
				gunnerOpticsEffect[]={};
				class ViewGunner: ViewCargo
				{
					initAngleX=-6;
					initAngleY=0;
					initFov=0.89999998;
					minFov=0.25;
					maxFov=1.25;
					minAngleX=-65;
					maxAngleX=85;
					minAngleY=-150;
					maxAngleY=150;
					minMoveX=-0.075000003;
					maxMoveX=0.075000003;
					minMoveY=-0.075000003;
					maxMoveY=0.075000003;
					minMoveZ=-0.075000003;
					maxMoveZ=0.1;
				};
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.31;
					minFov=0.034000002;
					maxFov=0.31;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					thermalMode[]={2,3};
				};
				startEngine=0;
				stabilizedInAxes=3;
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.8;
				viewGunnerInExternal=1;
				showCrewAim=1;
				class HitPoints
				{
					class HitComTurret
					{
						armor=0.1;
						material=-1;
						armorComponent="hit_com_turret";
						name="hit_com_turret_point";
						visual="-";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=1;
						radius=0.15000001;
						isTurret=1;
					};
					class HitComGun
					{
						armor=0.1;
						material=-1;
						armorComponent="hit_com_gun";
						name="hit_com_gun_point";
						visual="-";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=1;
						radius=0.15000001;
						isGun=1;
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
					{
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
					{
					};
				};
			};
		};
		class transportItems
		{
			class ace_fielddressing
			{
				name = "ACE_fieldDressing";
				count = 20;
			};
			class ace_elastic
			{
				name = "ACE_elasticbandage";
				count = 20;
			};
			class ace_quikclot
			{
				name = "ACE_quikclot";
				count = 20;
			};
			class ace_blood
			{
				name = "ACE_bloodIV";
				count = 5;
			};
			class ace_blood250
			{
				name = "ACE_bloodIV_250";
				count = 5;
			};
			class ace_blood500
			{
				name = "ACE_bloodIV_500";
				count = 5;
			};
			class ace_bodybag
			{
				name = "ACE_bodyBag";
				count = 10;
			};
			class ace_epi
			{
				name = "ACE_Epinephrine";
				count = 20;
			};
			class ace_morphine
			{
				name = "ACE_morphine";
				count = 20;
			};
			class ace_packing
			{
				name = "ACE_packingBandage";
				count = 20;
			};
			class ace_pak
			{
				name = "ACE_personalAidKit";
				count = 20;
			};
			class ace_surgical
			{
				name = "ACE_surgicalKit";
				count = 5;
			};
			class ace_tourniquet
			{
				name = "ACE_tourniquet";
				count = 20;
			};
			class ace_splint
			{
				name = "adv_aceSplint_splint";
				count = 20;
			};
			class ace_toolkit
			{
				name = "Toolkit";
				count = 2;
			};
		};
		class transportMagazines
		{
			class SWLW_beltgrenade_mag
			{
				magazine = "SWLW_beltgrenade_mag";
				count = 10;
			};
			class smokeshellblue
			{
				magazine = "smokeshellblue";
				count = 10;
			};
			class smokeshellred
			{
				magazine = "smokeshellred";
				count = 10;
			};
			class smokeshell
			{
				magazine = "smokeshell";
				count = 10;
			};
			class chemlight_blue
			{
				magazine = "chemlight_blue";
				count = 10;
			};
			class chemlight_red
			{
				magazine = "chemlight_red";
				count = 10;
			};
			class 442_dc15a_mag
			{
				magazine = "442_dc15a_mag";
				count = 25;
			};
			class 442_dc15s_mag
			{
				magazine = "442_dc15s_mag";
				count = 25;
			};
			class 442_dc17_mag
			{
				magazine = "442_dc17_mag";
				count = 25;
			};
		};
		class RenderTargets
		{
			class gunner_display
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="pip1_pos";
					pointDirection="pip1_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.305731;
					turret[]={0,0};
				};
			};
			class driver_display
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="pip2_pos";
					pointDirection="pip2_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.80000001;
					turret[]={-1};
				};
			};
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
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles2\armor\Apc_Tracked_03\Apc_Tracked_03_Engine_Int_Start",
			0.79432797,
			1
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles2\armor\Apc_Tracked_03\Apc_Tracked_03_Engine_Int_Stop",
			0.79432797,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles2\armor\Apc_Tracked_03\Apc_Tracked_03_Engine_Ext_Start",
			1.99526,
			1,
			100
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles2\armor\Apc_Tracked_03\Apc_Tracked_03_Engine_Ext_Stop",
			1.99526,
			1,
			100
		};
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
		class Sounds
		{
			soundSetsInt[]=
			{
				"APC_Tracked_03_Engine_RPM0_INT_SoundSet",
				"APC_Tracked_03_Engine_RPM1_INT_SoundSet",
				"APC_Tracked_03_Engine_RPM2_INT_SoundSet",
				"APC_Tracked_03_Engine_RPM3_INT_SoundSet",
				"APC_Tracked_03_Engine_RPM4_INT_SoundSet",
				"APC_Tracked_03_Engine_INT_Burst_SoundSet",
				"APC_Tracked_03_Tracks_01_INT_SoundSet",
				"APC_Tracked_03_Tracks_02_INT_SoundSet",
				"APC_Tracked_03_Tracks_03_INT_SoundSet",
				"APC_Tracked_03_Tracks_04_INT_SoundSet",
				"APC_Tracked_03_Tracks_05_INT_SoundSet",
				"APC_Tracked_03_Tracks_06_INT_SoundSet",
				"APC_Tracked_03_Interior_Tone_Engine_Off_SoundSet",
				"APC_Tracked_03_Interior_Tone_Engine_On_SoundSet",
				"APC_Tracked_03_Rattling_INT_SoundSet",
				"APC_Tracked_03_Stress_INT_SoundSet",
				"APC_Tracked_03_Rain_INT_SoundSet",
				"APC_Tracked_03_Tracks_Brake_Hard_INT_SoundSet",
				"APC_Tracked_03_Tracks_Brake_Soft_INT_SoundSet",
				"APC_Tracked_03_Tracks_Turn_Hard_INT_SoundSet",
				"APC_Tracked_03_Tracks_Turn_Soft_INT_SoundSet",
				"APC_Tracked_03_Drive_Water_INT_SoundSet",
				"APC_Tracked_03_Drive_Dirt_INT_SoundSet",
				"Tracks_Movement_Dirt_Int_01_SoundSet",
				"Tracks_Surface_Soft_Int_SoundSet",
				"Tracks_Surface_Hard_Int_SoundSet",
				"Tracks_Surface_Sand_Int_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Int_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Int_SoundSet",
				"Tanks_Material_Strain_Int_SoundSet"
			};
			soundSetsExt[]=
			{
				"APC_Tracked_03_Engine_RPM0_EXT_SoundSet",
				"APC_Tracked_03_Engine_RPM1_EXT_SoundSet",
				"APC_Tracked_03_Engine_RPM2_EXT_SoundSet",
				"APC_Tracked_03_Engine_RPM3_EXT_SoundSet",
				"APC_Tracked_03_Engine_RPM4_EXT_SoundSet",
				"APC_Tracked_03_Engine_EXT_Burst_SoundSet",
				"APC_Tracked_03_Tracks_01_EXT_SoundSet",
				"APC_Tracked_03_Tracks_02_EXT_SoundSet",
				"APC_Tracked_03_Tracks_03_EXT_SoundSet",
				"APC_Tracked_03_Tracks_04_EXT_SoundSet",
				"APC_Tracked_03_Tracks_05_EXT_SoundSet",
				"APC_Tracked_03_Tracks_06_EXT_SoundSet",
				"APC_Tracked_03_Rattling_EXT_SoundSet",
				"APC_Tracked_03_Rain_EXT_SoundSet",
				"APC_Tracked_03_Tracks_Brake_Hard_EXT_SoundSet",
				"APC_Tracked_03_Tracks_Brake_Soft_EXT_SoundSet",
				"APC_Tracked_03_Tracks_Turn_Hard_EXT_SoundSet",
				"APC_Tracked_03_Tracks_Turn_Soft_EXT_SoundSet",
				"APC_Tracked_03_Drive_Water_EXT_SoundSet",
				"APC_Tracked_03_Drive_Dirt_EXT_SoundSet",
				"Tracks_Movement_Dirt_Ext_01_SoundSet",
				"Tracks_Surface_Soft_Ext_SoundSet",
				"Tracks_Surface_Hard_Ext_SoundSet",
				"Tracks_Surface_Sand_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Ext_SoundSet"
			};
		};
		driverAction="driver_offroad01";
		driverInAction="driver_offroad01";
		viewDriverInExternal=1;
		proxytype="CPDriver";
		proxyIndex=1;
		forcehideDriver=1;
		DriverForceOptics=0;
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
		driver="442_swla_unit_p2_dc15a";
		crew="442_swla_unit_p2_dc15a";
		typicalCargo[]=
		{
			"44_swla_unit"
		};
		class AnimationSources: AnimationSources
		{
			class maxholdstervalue
			{
				source="maxholdstervalue";
				weapon="missiles_titan";
				animPeriod=2;
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="missiles_titan";
			};
			class Missiles_reloadMagazine: Missiles_revolving
			{
				source="reloadMagazine";
			};
			class recoil_cannon_source
			{
				source="reload";
				weapon="SWLG_TX130_cannon";
			};
			class recoil_mg_source
			{
				source="reload";
				weapon="SWLG_TX130_mg";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=0.1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
		};

        class texturesources
		{
			class base
			{
				displayname="Republic";
				author="Legion Studio";
				textures[]=
				{
					"SWLG_clones_tanks\tx130\data\tx130_hull_co.paa",
                    "SWLG_clones_tanks\tx130\data\tx130_rocket_co.paa",
                    "SWLG_clones_tanks\tx130\data\tx130_tracks_co.paa",
                    "SWLG_clones_tanks\tx130\data\tx130_turrets_co.paa"
				};
				factions[]=
				{
					"kobra"
				};
			};
            class 442: base
            {
                displayname = "442";
                author = "kripto202";
                textures[] = 
                {
                    "442_g_vehicle\tx130\data\442_body.paa",
                    "SWLG_clones_tanks\tx130\data\tx130_rocket_co.paa",
                    "442_g_vehicle\tx130\data\442_track.paa",
                    "442_g_vehicle\tx130\data\442_turret.paa"
                };
            };
        };
	};