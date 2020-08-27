	class 442_laat_2_base: Helicopter_Base_H
	{
		ace_fastroping_enabled=1;
		ace_fastroping_ropeorigins[]=
		{
			"ropefriesorigin1",
			"ropeoriginpoint2",
			"ropeoriginpoint3",
			"ropeoriginpoint4"
		};
		ace_fastroping_onCut="ace_fastroping_fnc_onCutCommon";
		ace_interaction_bodyWidth=3;
		ace_cargo_hasCargo=1;
		ace_cargo_space=16;
		weapons[]=
		{
			"442_laat_gun",
			"442_laat_gun_2",
			"missiles_DAR",
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"442_50_200rnd_he_green_mag",
			"442_50_200rnd_he_green_mag",
			"442_50_200rnd_ap_green_mag",
			"442_50_200rnd_ap_green_mag",
			"12rnd_missiles",
			"12rnd_missiles",
			"12rnd_missiles",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		fuelCapacity=2500;
		fuelConsumptionRate=0.138;
		side=1;
		faction="kobra";
		crew="SWLB_clone_pilot_base_P2";
		icon="442_a_vehicle\laat\data\ui\laat_icon.paa";
		editorpreview="442_a_vehicle\laat\data\ui\laat_preview.jpg";
		picture="";
		availableForSupportTypes[]=
		{
			"CAS_Heli",
			"Drop",
			"Transport"
		};
		cost=2000000;
		armor=200;
		altFullForce=10000;
		altNoForce=15000;
		maxSpeed=500;
		maxFordingDepth=5;
		incomingMissileDetectionSystem="1 + 2 + 4 + 8 + 16 + 32";
		LockDetectionSystem="1 + 2 + 4 + 8 + 16 + 32";
		getInRadius=3;
		hideWeaponsCargo=1;
		cargoCanEject=0;
		mainBladeRadius=0;
		liftForceCoef=3;
		bodyFrictionCoef=11;
		cyclicAsideForceCoef=5;
		cyclicForwardForceCoef=3;
		backRotorForceCoef=2;
		draconicForceXCoef=11;
		draconicForceYCoef=2;
		draconicForceZCoef=2;
		draconicTorqueXCoef=0.050000001;
		draconicTorqueYCoef=0;
		accuracy=0.5;
		displayname="LAAT/I Gunship";
		model="442_a_vehicle\laat\Laat.p3d";
		driverAction="pilot_Heli_Light_02";
		driverInAction="pilot_Heli_Light_02";
		precisegetinout=1;
		usePreciseGetInAction=1;
		GetInAction="GetInLow";
		GetOutAction="GetOutLow";
		memoryPointsGetInDriver="pos_driver";
		memoryPointsGetInDriverDir="pos_driver_dir";
		memoryPointsGetInCargo="pos_cargo";
		memoryPointDriverOptics="slingcamera";
		memoryPointsGetInCargoDir="pos_cargo_dir";
		memoryPointsGetInCargoPrecise[]=
		{
			"pos_cargo"
		};
		transportSoldier=16;
		memoryPointTaskMarker="TaskMarker_1_pos";
		radarType=8;
		extCameraPosition[]={0,6,-23};
		class exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectPlane";
			};
		};
		gunBeg[]=
		{
			"usti hlavne 1",
			"usti hlavne 2"
		};
		gunEnd[]=
		{
			"konec hlavne 1",
			"konec hlavne 2"
		};
		memoryPointGun[]=
		{
			"usti hlavne 1",
			"usti hlavne 2"
		};
		memorypointLRocket="rocketl";
		memorypointRRocket="rocketr";
		memorypointLmissile="rocketl";
		memorypointRmissile="rocketR";
		memorypointcm[]=
		{
			"flare_launcher1",
			"flare_launcher2"
		};
		memorypointcmdir[]=
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir"
		};
		class HitPoints
		{
			class HitHull
			{
				armor=999;
				convexComponent="hull_hit";
				depends="Total";
				explosionShielding=1;
				material=51;
				name="hull_hit";
				passThrough=1;
				visual="zbytek";
				radius=0.0099999998;
			};
			class HitFuel
			{
				convexcomponent="fuel_hit";
				hitpoint="fuel_hit";
				name="fuel_hit";
				explosionShielding=2;
				radius=0.1;
				visual="";
				passthrough=0.1;
				minimalhit=0.1;
				material=-1;
				armor=0.5;
			};
			class HitEngine
			{
				armor=0.25;
				convexComponent="engine_hit";
				explosionShielding=2;
				material=51;
				name="engine_hit";
				hitpoint="engine_hit";
				passThrough=1;
				visual="";
				radius=0.2;
			};
			class HitEngine_1: HitEngine
			{
				convexComponent="engine_hit_1";
				name="engine_hit_1";
				hitpoint="engine_hit_1";
			};
			class HitEngine_2: HitEngine
			{
				convexComponent="engine_hit_2";
				name="engine_hit_2";
				hitpoint="engine_hit_2";
			};
			class HitHRotor
			{
				armor=3;
				convexComponent="main_rotor_hit";
				explosionShielding=2.5;
				material=51;
				name="main_rotor_hit";
				passThrough=0.1;
				visual="";
				radius=0.0099999998;
			};
			class HitVRotor
			{
				armor=3;
				convexComponent="tail_rotor_hit";
				explosionShielding=6;
				material=51;
				name="tail_rotor_hit";
				passThrough=0.30000001;
				visual="";
				radius=0.0099999998;
			};
			class HitAvionics
			{
				armor=1;
				convexComponent="avionics_hit";
				explosionShielding=2;
				material=51;
				name="avionics_hit";
				passThrough=1;
				visual="";
				radius=0.5;
			};
		};
		class EventHandlers: Eventhandlers
		{
			init="(_this) spawn kobra_Vehicle_fnc_ImpulsorMonitor;";
		};
		cargoAction[]=
		{
			"passenger_flatground_leanright",
			"passenger_flatground_leanleft",
			"passenger_boat_holdleft",
			"passenger_boat_holdleft2",
			"passenger_boat_holdright",
			"passenger_boat_holdleft2",
			"passenger_boat_holdleft",
			"passenger_boat_holdleft2",
			"passenger_boat_holdright",
			"passenger_boat_holdleft2",
			"passenger_boat_holdleft",
			"passenger_boat_holdleft2",
			"passenger_boat_holdright",
			"passenger_boat_holdleft2",
			"passenger_boat_holdleft",
			"passenger_boat_holdright2"
		};
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoProxyIndexes[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
		driveOnComponent[]=
		{
			"Skids"
		};
		class ViewPilot: ViewPilot
		{
			initFov=0.75;
			minFov=0.375;
			maxFov=1.1;
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = -10;
					maxAngleX = 90;
					initAngleY = 0;
					minAngleY = -90;
					maxAngleY = 90;
					initFov = "(30 / 120)";
					minFov = "(30 / 120)";
					maxFov = "(30 / 120)";
					directionStabilized = 1;
					visionMode[] = {"Normal", "Ti"};
					thermalMode[] = {0, 1};
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
				};
				class Medium: Wide
				{
					opticsDisplayName = "MFOV";
					initFov = "(15 / 120)";
					minFov = "(15 / 120)";
					maxFov = "(15 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(3.75 / 120)";
					minFov = "(3.75 / 120)";
					maxFov = "(3.75 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics = 1;
				showUAVViewInOptics = 0;
				showSlingLoadManagerInOptics = 1;
			};
			minTurn = -90;
			maxTurn = 90;
			initTurn = 0;
			minElev = -10;
			maxElev = 90;
			initElev = -10;
			maxXRotSpeed = 0.3;
			maxYRotSpeed = 0.3;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		};
		class wingvortices
		{
			class Wingtipleft
			{
				effectName="FX_WingVortices_FighterJet";
				position="vapour_l_pos";
			};
			class Wingtipright
			{
				effectName="FX_WingVortices_FighterJet";
				position="vapour_r_pos";
			};
		};
		class Viewoptics: Viewoptics
		{
			initAngleX=0;
			minAngleX=0;
			maxAngleX=0;
			initAngleY=0;
			minAngleY=0;
			maxAngleY=0;
			initFov=0.1;
			minFov=0.1;
			maxFov=1.2;
		};
		class transportweapons
		{
		};
		class transportmagazines
		{
		};
		class transportItems
		{
		};
		class transportBackpacks
		{
		};
		class compartmentslights
		{
			class comp1
			{
				class light1
				{
					color[]={10,20,20};
					ambient[]={0,0,0};
					intensity=2;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
					blinking=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=70;
						hardLimitStart=0.15000001;
						hardLimitEnd=3;
					};
					point="light_interior1";
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner
				{
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					gunnerOpticsEffect[]={};
					stabilizedInAxes=0;
					directionStabilized=0;
					horizontallyStabilized=0;
					initFov=1;
					minFov=0.60000002;
					maxFov=0.85000002;
					initAngleX=180;
					minAngleX=90;
					maxAngleX=270;
					initAngleY=-45;
					minAngleY=-90;
					maxAngleY=-30;
					minMoveX=-0.1;
					maxMoveX=0.1;
					minMoveY=-0.025;
					maxMoveY=0.1;
					minMoveZ=-0.1;
					maxMoveZ=0.1;
					gunnerOpticsModel="";
				};
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2400};
				class Viewoptics
				{
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					minAngleX=0;
					maxAngleX=0;
					initAngleX=0;
					minAngleY=-15;
					maxAngleY=15;
					initAngleY=0;
					initFov=0.75;
					minFov=0.25;
					maxFov=0.75;
				};
				class OpticsIn
				{
					class Wide
					{
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						initAngleX=0;
						minAngleX=0;
						maxAngleX=0;
						initAngleY=0;
						minAngleY=-15;
						maxAngleY=15;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="W";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="M";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsEffect[]={};
						initAngleX=-10;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						gunnerOpticsModel="";
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								range[]={4000,2000,16000,8000};
								componentType="SensorsDisplayComponent";
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						class Components: components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								range[]={4000,2000,16000,8000};
								componentType="SensorsDisplayComponent";
								resource="RscCustomInfoSensors";
							};
						};
						defaultDisplay="SensorDisplay";
					};
				};
				gunnerOpticsEffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				primaryObserver=0;
				primaryGunner=1;
				primary=1;
				usePip=1;
				turretFollowFreeLook=0;
				gunnerCompartments="Compartment2";
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="";
				proxyindex=1;
				isCopilot=1;
				gunnerName="Co-Pilot";
				showHMD=1;
				castCargoShadow=0;
				viewCargoShadow=0;
				castDriverShadow=0;
				viewDriverShadow=0;
				CanEject=0;
				hideWeaponsGunner=1;
				memoryPointsGetInGunner="pos_gunner";
				memoryPointsGetInGunnerDir="pos_gunner_dir";
				memoryPointGunnerOutOptics="gunnerviewout";
				discreteDistanceInitIndex=5;
				gunnerAction="Driver_mid01";
				gunnerInAction="Driver_mid01";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				gunnerUsesPilotView=0;
				commanding=-1;
				startEngine=0;
				stabilizedInAxes=3;
				showAllTargets=4;
				memoryPointLRocket="RocketL";
				memoryPointRRocket="RocketR";
				memoryPointLMissile="RocketL";
				memoryPointRMissile="RocketR";
				selectionFireAnim="zasleh_b";
				weapons[]=
				{
					"442_laat_gun_3"
				};
				magazines[]=
				{
					"200rnd_laat_he_mag",
					"200rnd_laat_he_mag"
				};
				gunBeg="konec hlavne b";
				gunEnd="usti hlavne b";
				memoryPointGun="konec hlavne b";
				outGunnerMayFire=1;
				castGunnerShadow=0;
				viewGunnerShadow=0;
				gunnerOpticsModel="";
				gunnerForceOptics=0;
				turretInfoType="RscOptics_Heli_Attack_01_gunner";
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
				minElev=-80;
				maxElev=30;
				minTurn=100;
				maxTurn=260;
				initElev=-45;
				initTurn=180;
				minCamElev=-80;
				maxCamElev=-30;
				memoryPointGunnerOptics="gunnerview";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=50;
				size=1;
				innerAngle=15;
				outerAngle=65;
				coneFadeCoef=10;
				useFlare=1;
				flareSize=10;
				flareMaxDistance=250;
				dayLight=1;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=100;
					hardLimitEnd=200;
				};
				position="light_l";
				direction="light_l_end";
				hitpoint="light_l";
				selection="light_l";
			};
			class Right: Left
			{
				position="light_r";
				direction="light_r_end";
				hitpoint="light_r";
				selection="light_r";
			};
		};
		class animationsources
		{
			class laat_ramp_open
			{
				source="user";
				animPeriod=2;
				initphase=0;
			};
			class hidedoor1
			{
				displayname="Show Front Left Door";
				Author="kripto202";
				source="user";
				animperiod=0.001;
				initphase=1;
				mass="-50";
			};
			class hidedoor2: hidedoor1
			{
				displayname="Show Back Left Door";
				mass="-70";
			};
			class hidedoor3: hidedoor1
			{
				displayname="Show Ramp";
			};
			class hidedoor4: hidedoor1
			{
				displayname="Show Front Right Door";
			};
			class hidedoor5: hidedoor2
			{
				displayname="Show Back Right Door";
			};
			class laat_door_l
			{
				source="user";
				animPeriod=2;
				initphase=0;
			};
			class laat_door_r
			{
				source="user";
				animPeriod=2;
				initphase=0;
			};
		};
		class Attributes
		{
			class hidedoor1
			{
				displayname="Show Front Left Door";
				property="hidedoor1";
				control="CheckboxNumber";
				defaultvalue=1;
				expression="_this animateSource ['%s',_value,true]";
			};
			class hidedoor2: hidedoor1
			{
				displayname="Show Back Left Door";
				property="hidedoor2";
			};
			class hidedoor3: hidedoor1
			{
				displayname="Ramp";
				property="hidedoor3";
			};
			class hidedoor4: hidedoor1
			{
				displayname="Show Front Right Door";
				property="hidedoor4";
			};
			class hidedoor5: hidedoor1
			{
				displayname="Show Back Right Door";
				property="hidedoor5";
			};
		};
		animationlist[]=
		{
			"laat_ramp_open",
			0,
			"laat_door_l_close",
			0,
			"laat_door_l_open",
			0,
			"laat_door_r_close",
			0,
			"laat_door_r_open",
			0,
			"laat_door_open",
			0,
			"laat_door_close",
			0
		};
		class useractions
		{
			class laat_ramp_open
			{
				displayname="Open Ramp";
				position="pilotview";
				priority="107";
				radius=5;
				onlyforplayer=0;
				condition="(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_ramp_open"" == 0;";
				statement="this animatesource [""laat_ramp_open"",1]; [this, ""laat_ramp""] remoteExec [""say3d"",0,false]; ";
			};
			class laat_ramp_close: laat_ramp_open
			{
				displayname="Close Ramp";
				priority="108";
				condition="(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_ramp_open"" == 1;";
				statement="this animatesource[""laat_ramp_open"",0]; [this, ""laat_ramp""] remoteExec [""say3d"",0,false];";
			};
			class laat_door_close: laat_ramp_open
			{
				displayname="Close Doors";
				priority="101";
				condition="(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_door_l"" == 0 AND this animationsourcephase ""laat_door_r"" == 0;";
				statement="this animatesource [""laat_door_l"",1]; this animatesource [""laat_door_r"",1]; [this, ""laat_door_close""] remoteExec [""say3d"",0,false];";
			};
			class laat_door_open: laat_ramp_open
			{
				displayname="Open Doors";
				priority="102";
				condition="(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_door_l"" == 1 AND this animationsourcephase ""laat_door_r"" == 1;";
				statement="this animatesource [""laat_door_l"",0]; this animatesource [""laat_door_r"",0]; [this, ""laat_door_open""] remoteExec [""say3d"",0,false];";
			};
			class laat_door_r_close: laat_ramp_open
			{
				displayname="Close Right Doors";
				priority="103";
				condition="(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_door_r"" == 0;";
				statement="this animatesource [""laat_door_r"",1]; [this, ""laat_door_close""] remoteExec [""say3d"",0,false];";
			};
			class laat_door_r_open: laat_ramp_open
			{
				displayname="Open Right Doors";
				priority="104";
				condition="(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_door_r"" == 1;";
				statement="this animatesource [""laat_door_r"",0]; [this, ""laat_door_open""] remoteExec [""say3d"",0,false];";
			};
			class laat_door_l_close: laat_ramp_open
			{
				displayname="Close Left Doors";
				priority="105";
				condition="(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_door_l"" == 0;";
				statement="this animatesource [""laat_door_l"",1]; [this, ""laat_door_close""] remoteExec [""say3d"",0,false];";
			};
			class laat_door_l_open: laat_ramp_open
			{
				displayname="Open Left Doors";
				priority="106";
				condition="(player == driver this OR !(player in crew this) ) AND this animationsourcephase ""laat_door_l"" == 1;";
				statement="this animatesource [""laat_door_l"",0]; [this, ""laat_door_open""] remoteExec [""say3d"",0,false];";
			};
			class impulse
			{
				displayName="Impulse";
				position="pilotview";
				radius=5;
				onlyforplayer=0;
				shortcut="User19";
				condition="isEngineOn this and player == driver this;";
				statement="this call kobra_Vehicle_fnc_ImpulseJoystick";
			};
			class repulse: impulse
			{
				displayName="Repulse";
				shortcut="User20";
				condition="isEngineOn this and player == driver this;";
				statement="this call kobra_Vehicle_fnc_RepulseJoystick";
			};
		};
		class MarkerLights
		{
			class CollisionLightRed1
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				intensity=75;
				name="positionlight_red_1_pos";
				drawLight=1;
				drawLightSize=0.25;
				drawLightCenterSize=0.050000001;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=0.75;
					hardLimitEnd=1;
				};
			};
			class CollisionLightGreen1: CollisionLightRed1
			{
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				name="positionlight_green_1_pos";
			};
			class CollisionLightWhite1: CollisionLightRed1
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="positionlight_white_1_pos";
				blinking=1;
				blinkingStartsOn=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=1;
				drawLightSize=0.34999999;
				drawLightCenterSize=0.050000001;
			};
			class CollisionLightWhite2: CollisionLightWhite1
			{
				name="positionlight_white_2_pos";
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
						aimDown=30;
						allowsMarking=1;
						angleRangeHorizontal=180;
						angleRangeVertical=90;
						animDirection="";
						color[]={0,1,1,1};
						componentType="ActiveRadarSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=125;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=3000;
						class AirTarget
						{
							maxRange=5000;
							minRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=5000;
							minRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class AntiRadiationSensorComponent
					{
						aimDown=0;
						allowsMarking=1;
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						animDirection="";
						color[]={0.5,1,0.5,0.5};
						componentType="PassiveRadarSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=12000;
						class AirTarget
						{
							maxRange=8000;
							minRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=8000;
							minRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
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
						aimDown=0;
						allowsMarking=1;
						animDirection="";
						color[]={1,0,0,1};
						componentType="IRSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxFogSeeThrough=0.995;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=2000;
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
						allowsMarking=1;
						color[]={1,1,0.5,0.80000001};
						componentType="VisualSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxFogSeeThrough=0.94;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						nightRangeCoef=0;
						typeRecognitionDistance=2000;
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
						aimDown=0;
						allowsMarking=0;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						animDirection="";
						color[]={0.5,1,0.5,0.5};
						componentType="PassiveRadarSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=12000;
					};
					class LaserSensorComponent
					{
						class AirTarget
						{
							maxRange=6000;
							minRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=6000;
							minRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						aimDown=0;
						allowsMarking=1;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						animDirection="";
						color[]={1,1,1,0};
						componentType="LaserSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=0;
					};
					class NVSensorComponent
					{
						class AirTarget
						{
							maxRange=6000;
							minRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=6000;
							minRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						aimDown=0;
						allowsMarking=1;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						animDirection="";
						color[]={1,1,1,0};
						componentType="NVSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=0;
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
				uiPicture="\442_a_vehicle\laat\data\ui\laat_ui.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="PylonRack_Missile_AMRAAM_D_x1";
						priority=5;
						hardpoints[]=
						{
							"SCALPEL_1RND",
							"B_ASRAAM",
							"DAR",
							"DAGR",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_SDB_QUAD_RAIL",
							"B_GBU12",
							"B_AGM65_RAIL"
						};
						turret[]={};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment="PylonRack_Missile_AMRAAM_D_x1";
						priority=4;
						hardpoints[]=
						{
							"SCALPEL_1RND",
							"B_ASRAAM",
							"DAR",
							"DAGR",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_SDB_QUAD_RAIL",
							"B_GBU12",
							"B_AGM65_RAIL"
						};
						UIposition[]={0.079999998,0.34999999};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment="PylonRack_Missile_AMRAAM_D_x1";
						priority=3;
						hardpoints[]=
						{
							"SCALPEL_1RND",
							"B_ASRAAM",
							"DAR",
							"DAGR",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_SDB_QUAD_RAIL",
							"B_GBU12",
							"B_AGM65_RAIL"
						};
						UIposition[]={0.1,0.30000001};
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos=3;
						UIposition[]={0.58999997,0.30000001};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos=2;
						UIposition[]={0.62,0.34999999};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos=1;
						UIposition[]={0.63999999,0.40000001};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="Empty";
						attachment[]={};
					};
					class Default
					{
						displayName="Default";
						attachment[]=
						{
							"PylonMissile_1Rnd_AAA_missiles",
							"PylonMissile_1Rnd_AAA_missiles",
							"PylonRack_12Rnd_PG_missiles",
							"PylonRack_12Rnd_PG_missiles",
							"PylonMissile_1Rnd_AAA_missiles",
							"PylonMissile_1Rnd_AAA_missiles"
						};
					};
					class AT
					{
						displayName="AT";
						attachment[]=
						{
							"PylonRack_12Rnd_PG_missiles",
							"PylonMissile_1Rnd_LG_scalpel",
							"PylonRack_12Rnd_PG_missiles",
							"PylonRack_12Rnd_PG_missiles",
							"PylonMissile_1Rnd_LG_scalpel",
							"PylonRack_12Rnd_PG_missiles"
						};
					};
					class CAS
					{
						displayName="CAS";
						attachment[]=
						{
							"PylonRack_12Rnd_missiles",
							"PylonMissile_1Rnd_AAA_missiles",
							"PylonRack_12Rnd_missiles",
							"PylonRack_12Rnd_missiles",
							"PylonMissile_1Rnd_AAA_missiles",
							"PylonRack_12Rnd_missiles"
						};
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
		class MFD
		{
			class AirplaneHUD
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.1,0.60000002,1,1};
				helmetMountedDisplay=1;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				enableParallax=1;
				font="LucidaConsoleB";
				class Bones
				{
					class HUDCenter
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class HorizonBankSource
					{
						type="rotational";
						source="HorizonBank";
						center[]={0.5,0.5};
						min=-6.2831001;
						max=6.2831001;
						minAngle=-360;
						maxAngle=360;
					};
					class HorizonDiveSource
					{
						source="horizonDive";
						type="linear";
						min=-1;
						max=1;
						minPos[]={0.5,2.5};
						maxPos[]={0.5,-1.5};
					};
					class VelocityVector
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class ForwardVector
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.234,0.23};
					};
					class GunnerAim
					{
						type="vector";
						source="weapon";
						pos0[]={0,-0.0024999999};
						pos10[]={0.0099999998,0.0024999999};
					};
					class WeaponAim
					{
						type="vector";
						source="weaponToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class SliderDiveSource
					{
						type="linear";
						source="horizonDive";
						min="RAD(-10)";
						max="RAD(10)";
						minPos[]={0.105,0.38};
						maxPos[]={0.105,0.54000002};
					};
					class SliderDiveSource30: SliderDiveSource
					{
						min="RAD(10)";
						max="RAD(30)";
						minPos[]={0,-0.039999999};
						maxPos[]=
						{
							0,
							"0)"
						};
					};
					class SliderDiveSource90: SliderDiveSource30
					{
						min="RAD(30)";
						max="RAD(90)";
						minPos[]={0,-0.039999999};
					};
					class SliderDiveSource30m: SliderDiveSource
					{
						min="RAD(-30)";
						max="RAD(-10)";
						minPos[]={0,0};
						maxPos[]={0,0.039999999};
					};
					class SliderDiveSource90m: SliderDiveSource30m
					{
						min="RAD(-90)";
						max="RAD(-30)";
						maxPos[]={0,0.039999999};
					};
					class SliderAltitudeSource
					{
						type="linear";
						source="altitudeAGL";
						sourceOffset=-3;
						min=0;
						max=1000;
						minPos[]={0.88499999,0.2};
						maxPos[]={0.88499999,0.375};
					};
					class GForceSource
					{
						type="linear";
						source="gmeter";
						sourceScale=0.15000001;
						min=-1;
						max=3;
						minPos[]={0.105,0.69999999};
						maxPos[]={0.105,0.86000001};
					};
					class SliderVSpeedSource
					{
						type="linear";
						source="vspeed";
						min=-15;
						max=15;
						minPos[]={0.79500002,0.60000002};
						maxPos[]={0.79500002,0.83999997};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class WPPoint
					{
						type="vector";
						source="WPPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class rtdRPM1
					{
						type="linear";
						source="rpm";
						min=0.1;
						max=1;
						minPos[]={0,-0.075000003};
						maxPos[]={0,0};
					};
					class rtdRPM2: rtdRPM1
					{
						source="rpm";
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class Target
					{
						source="targettoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=0.46000001;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.98290598;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class HorizonBankRotFull
					{
						type="rotational";
						source="horizonBank";
						center[]={0,0};
						min=-3.1415999;
						max=3.1415999;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=1;
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class Airport2: Airport1
					{
						source="airportCorner2";
					};
					class Airport3: Airport1
					{
						source="airportCorner3";
					};
					class Airport4: Airport1
					{
						source="airportCorner4";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.5};
						pos3[]={0.57020003,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.56900001};
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0.1,0.60000002,1,1};
					condition="on";
					class VelocityLine
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"HUDCenter",
								1
							},
							
							{
								"VelocityVector",
								1
							},
							{},
							
							{
								"VelocityVector",
								{0,-0.0049145301},
								1
							},
							
							{
								"VelocityVector",
								{0.0024999999,-0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0.0043299999,-0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{0.0049999999,0},
								1
							},
							
							{
								"VelocityVector",
								{0.0043299999,0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{0.0024999999,0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0,0.0049145301},
								1
							},
							
							{
								"VelocityVector",
								{-0.0024999999,0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{-0.0043299999,0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{-0.0049999999,0},
								1
							},
							
							{
								"VelocityVector",
								{-0.0043299999,-0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{-0.0024999999,-0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0,-0.0049145301},
								1
							},
							{}
						};
					};
					class Static
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,0.0099999998},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0,0},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,-0.0099999998},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,0.0099999998},
								1
							},
							{},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.088,0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.088,-0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,-0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,0.015},
								1
							},
							{},
							
							{
								{0.1,0.30000001},
								1
							},
							
							{
								{0.1,0.62},
								1
							},
							{},
							
							{
								{0.1,0.30000001},
								1
							},
							
							{
								{0.079999998,0.30000001},
								1
							},
							{},
							
							{
								{0.1,0.34},
								1
							},
							
							{
								{0.079999998,0.34},
								1
							},
							{},
							
							{
								{0.1,0.38},
								1
							},
							
							{
								{0.079999998,0.38},
								1
							},
							{},
							
							{
								{0.1,0.46000001},
								1
							},
							
							{
								{0.079999998,0.46000001},
								1
							},
							{},
							
							{
								{0.1,0.54000002},
								1
							},
							
							{
								{0.079999998,0.54000002},
								1
							},
							{},
							
							{
								{0.1,0.57999998},
								1
							},
							
							{
								{0.079999998,0.57999998},
								1
							},
							{},
							
							{
								{0.1,0.62},
								1
							},
							
							{
								{0.079999998,0.62},
								1
							},
							{},
							
							{
								"GForceSource",
								{0.015,0.0099999998},
								1
							},
							
							{
								"GForceSource",
								{0,0},
								1
							},
							
							{
								"GForceSource",
								{0.015,-0.0099999998},
								1
							},
							
							{
								"GForceSource",
								{0.015,0.0099999998},
								1
							},
							{},
							
							{
								{0.1,0.68800002},
								1
							},
							
							{
								{0.1,0.81999999},
								1
							},
							{},
							
							{
								{0.1,0.69999999},
								1
							},
							
							{
								{0.079999998,0.69999999},
								1
							},
							{},
							
							{
								{0.1,0.74000001},
								1
							},
							
							{
								{0.079999998,0.74000001},
								1
							},
							{},
							
							{
								{0.1,0.77999997},
								1
							},
							
							{
								{0.079999998,0.77999997},
								1
							},
							{},
							
							{
								{0.1,0.81999999},
								1
							},
							
							{
								{0.079999998,0.81999999},
								1
							},
							{},
							
							{
								{0.40000001,0.86000001},
								1
							},
							
							{
								{0.40000001,0.94},
								1
							},
							
							{
								{0.60000002,0.94},
								1
							},
							
							{
								{0.60000002,0.86000001},
								1
							},
							
							{
								{0.40000001,0.86000001},
								1
							},
							{},
							
							{
								{0.40000001,0.88499999},
								1
							},
							
							{
								{0.40799999,0.88499999},
								1
							},
							{},
							
							{
								{0.60000002,0.88499999},
								1
							},
							
							{
								{0.59200001,0.88499999},
								1
							},
							{},
							
							{
								{0.5,0.86000001},
								1
							},
							
							{
								{0.5,0.86799997},
								1
							},
							{},
							
							{
								{0.5,0.94},
								1
							},
							
							{
								{0.5,0.93199998},
								1
							},
							{},
							
							{
								{0.51999998,0.079999998},
								1
							},
							
							{
								{0.5,0.11},
								1
							},
							
							{
								{0.47999999,0.079999998},
								1
							},
							
							{
								{0.51999998,0.079999998},
								1
							},
							{},
							
							{
								{0.46000001,0.07},
								1
							},
							
							{
								{0.54000002,0.07},
								1
							},
							
							{
								{0.54000002,0.035},
								1
							},
							
							{
								{0.46000001,0.035},
								1
							},
							
							{
								{0.46000001,0.07},
								1
							},
							{},
							
							{
								{0.15000001,0.115},
								1
							},
							
							{
								{0.85000002,0.115},
								1
							},
							{},
							
							{
								{0,0.95999998},
								1
							},
							
							{
								{1.1,0.95999998},
								1
							},
							{},
							
							{
								{0.47999999,0.5},
								1
							},
							
							{
								{0.49000001,0.5},
								1
							},
							{},
							
							{
								{0.50999999,0.5},
								1
							},
							
							{
								{0.51999998,0.5},
								1
							},
							{},
							
							{
								{0.5,0.49000001},
								1
							},
							
							{
								{0.5,0.47999999},
								1
							},
							{},
							
							{
								{0.5,0.50999999},
								1
							},
							
							{
								{0.5,0.51999998},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{-0.02,0},
								1
							},
							
							{
								"WeaponAim",
								1,
								{-0.0099999998,0},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0.0099999998,0},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0.02,0},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0,-0.0099999998},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0,-0.02},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0,0.0099999998},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0,0.02},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.16500001,7.0890902e-009},
								1
							},
							
							{
								"HUDCenter",
								{-0.22,9.45212e-009},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.16500001,-1.9339701e-009},
								1
							},
							
							{
								"HUDCenter",
								{0.22,-2.57863e-009},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.082500003,0.140452},
								1
							},
							
							{
								"HUDCenter",
								{-0.096249998,0.16385999},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.082500003,0.140452},
								1
							},
							
							{
								"HUDCenter",
								{0.096249998,0.16385999},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.142894,0.081089802},
								1
							},
							
							{
								"HUDCenter",
								{-0.16671,0.094604701},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.142894,0.081089698},
								1
							},
							
							{
								"HUDCenter",
								{0.16671,0.094604701},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.116673,0.114678},
								1
							},
							
							{
								"HUDCenter",
								{-0.155564,0.152904},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.116673,0.114678},
								1
							},
							
							{
								"HUDCenter",
								{0.155563,0.152904},
								1
							},
							{},
							{}
						};
					};
					class Gunner
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								"GunnerAim",
								{0.48500001,0.89200002},
								1
							},
							
							{
								"GunnerAim",
								{0.48500001,0.90799999},
								1
							},
							
							{
								"GunnerAim",
								{0.51499999,0.90799999},
								1
							},
							
							{
								"GunnerAim",
								{0.51499999,0.89200002},
								1
							},
							
							{
								"GunnerAim",
								{0.48500001,0.89200002},
								1
							}
						};
					};
					class DiveNumber
					{
						type="text";
						source="horizondive";
						sourceScale=57.295799;
						sourceOffset=0;
						align="left";
						scale=1;
						pos[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.085000001,
								"0.00-0.011"
							},
							1
						};
						right[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.12,
								"0.00-0.011"
							},
							1
						};
						down[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.085000001,
								"0.03-0.011"
							},
							1
						};
					};
					class VSpeedGroup
					{
						condition="on";
						class VSpeedNumber
						{
							type="text";
							source="vspeed";
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								
								{
									"0.82+0.07",
									0.72799999
								},
								1
							};
							right[]=
							{
								
								{
									"0.86+0.07",
									0.72799999
								},
								1
							};
							down[]=
							{
								
								{
									"0.82+0.07",
									0.76300001
								},
								1
							};
						};
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.84899998,0.75999999},
									1
								},
								
								{
									{0.92900002,0.75999999},
									1
								},
								
								{
									{0.92900002,0.72500002},
									1
								},
								
								{
									{0.84899998,0.72500002},
									1
								},
								
								{
									{0.84899998,0.75999999},
									1
								},
								{}
							};
						};
					};
					class VSpeedGroupUp
					{
						condition="vspeed";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.86900002,0.71499997},
									1
								},
								
								{
									{0.90899998,0.71499997},
									1
								},
								
								{
									{0.889,0.69499999},
									1
								},
								
								{
									{0.86900002,0.71499997},
									1
								},
								{}
							};
						};
					};
					class VSpeedGroupDown
					{
						condition="-vspeed";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.86900002,0.76999998},
									1
								},
								
								{
									{0.90899998,0.76999998},
									1
								},
								
								{
									{0.889,0.79000002},
									1
								},
								
								{
									{0.86900002,0.76999998},
									1
								},
								{}
							};
						};
					};
					class AltGroup
					{
						condition="1000 - altitudeAGL";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"SliderAltitudeSource",
									{0.024,0.0099999998},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.0089999996,0},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.024,-0.0099999998},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.024,0.0099999998},
									1
								},
								{},
								
								{
									"SliderAltitudeSource",
									{0.035,0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.093000002,0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.093000002,-0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.035,-0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.035,0.015},
									1
								},
								{},
								
								{
									{0.889,0.2},
									1
								},
								
								{
									{0.889,0.375},
									1
								},
								{},
								
								{
									{0.87900001,0.2},
									1
								},
								
								{
									{0.89899999,0.2},
									1
								},
								{},
								
								{
									{0.87900001,0.375},
									1
								},
								
								{
									{0.89899999,0.375},
									1
								},
								{}
							};
						};
						class AltNumber
						{
							type="text";
							source="altitudeAGL";
							sourceScale=1;
							sourceOffset=-3;
							align="left";
							scale=1;
							pos[]=
							{
								"SliderAltitudeSource",
								
								{
									0.085000001,
									"0.00-0.011"
								},
								1
							};
							right[]=
							{
								"SliderAltitudeSource",
								
								{
									0.11,
									"0.00-0.011"
								},
								1
							};
							down[]=
							{
								"SliderAltitudeSource",
								
								{
									0.085000001,
									"0.03-0.011"
								},
								1
							};
						};
						class AltStatic50
						{
							type="text";
							source="static";
							text="1000";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.88499999,0.171},
								1
							};
							right[]=
							{
								{0.92500001,0.171},
								1
							};
							down[]=
							{
								{0.88499999,0.20100001},
								1
							};
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						sourceLength=3;
						align="left";
						scale=1;
						pos[]=
						{
							{0.13,0.22},
							1
						};
						down[]=
						{
							{0.13,0.25999999},
							1
						};
						right[]=
						{
							{0.2,0.22},
							1
						};
					};
					class HeadingNumber
					{
						type="text";
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							
							{
								"0.80-0.302",
								"0.082-0.043"
							},
							1
						};
						right[]=
						{
							
							{
								"0.84-0.302",
								"0.082-0.043"
							},
							1
						};
						down[]=
						{
							
							{
								"0.80-0.302",
								"0.117-0.043"
							},
							1
						};
					};
					class Angle_90
					{
						type="text";
						source="static";
						text="90";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.285},
							1
						};
						right[]=
						{
							{0.11,0.285},
							1
						};
						down[]=
						{
							{0.07,0.315},
							1
						};
					};
					class Angle_30
					{
						type="text";
						source="static";
						text="30";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.32499999},
							1
						};
						right[]=
						{
							{0.11,0.32499999},
							1
						};
						down[]=
						{
							{0.07,0.35499999},
							1
						};
					};
					class Angle_10
					{
						type="text";
						source="static";
						text="10";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.36500001},
							1
						};
						right[]=
						{
							{0.11,0.36500001},
							1
						};
						down[]=
						{
							{0.07,0.39500001},
							1
						};
					};
					class Angle_0
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.44499999},
							1
						};
						right[]=
						{
							{0.11,0.44499999},
							1
						};
						down[]=
						{
							{0.07,0.47499999},
							1
						};
					};
					class Angle_10m
					{
						type="text";
						source="static";
						text="-10";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.52499998},
							1
						};
						right[]=
						{
							{0.11,0.52499998},
							1
						};
						down[]=
						{
							{0.07,0.55500001},
							1
						};
					};
					class Angle_30m
					{
						type="text";
						source="static";
						text="-30";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.565},
							1
						};
						right[]=
						{
							{0.11,0.565},
							1
						};
						down[]=
						{
							{0.07,0.59500003},
							1
						};
					};
					class Angle_90m
					{
						type="text";
						source="static";
						text="-90";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.60500002},
							1
						};
						right[]=
						{
							{0.11,0.60500002},
							1
						};
						down[]=
						{
							{0.07,0.63499999},
							1
						};
					};
					class GMeterStatic3
					{
						type="text";
						source="static";
						text="3";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.68300003},
							1
						};
						right[]=
						{
							{0.11,0.68300003},
							1
						};
						down[]=
						{
							{0.07,0.713},
							1
						};
					};
					class GMeterStatic2
					{
						type="text";
						source="static";
						text="2";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.72299999},
							1
						};
						right[]=
						{
							{0.11,0.72299999},
							1
						};
						down[]=
						{
							{0.07,0.75300002},
							1
						};
					};
					class GMeterStatic1
					{
						type="text";
						source="static";
						text="1";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.76300001},
							1
						};
						right[]=
						{
							{0.11,0.76300001},
							1
						};
						down[]=
						{
							{0.07,0.79299998},
							1
						};
					};
					class GMeterStatic0
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.80299997},
							1
						};
						right[]=
						{
							{0.11,0.80299997},
							1
						};
						down[]=
						{
							{0.07,0.833},
							1
						};
					};
					class CollectiveNumber
					{
						type="text";
						source="throttle";
						sourceScale=100;
						align="left";
						scale=1;
						pos[]=
						{
							{0.889,0.46000001},
							1
						};
						right[]=
						{
							{0.93900001,0.46000001},
							1
						};
						down[]=
						{
							{0.889,0.495},
							1
						};
					};
					class CollectiveText
					{
						type="text";
						source="static";
						text="%";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.89899999,0.46000001},
							1
						};
						right[]=
						{
							{0.949,0.46000001},
							1
						};
						down[]=
						{
							{0.89899999,0.495},
							1
						};
					};
					class HeadingScale
					{
						type="scale";
						horizontal=1;
						source="heading";
						sourceScale=0.1;
						sourceoffset=0;
						width=3;
						NeverEatSeaWeed=1;
						top=0.15000001;
						center=0.5;
						bottom=0.85000002;
						lineXleft=0.114;
						lineYright=0.12;
						lineXleftMajor=0.114;
						lineYrightMajor=0.13;
						majorLineEach=2;
						numberEach=6;
						step=0.5;
						stepSize=0.034482799;
						align="center";
						scale=1;
						pos[]={0.15000001,0.13};
						right[]={0.20999999,0.13};
						down[]={0.15000001,0.17};
					};
					class HorizonBanking
					{
						type="line";
						width=3;
						clipTL[]={0,0.1};
						clipBR[]={1,0.89999998};
						points[]=
						{
							
							{
								"HorizonBankSource",
								{0.16,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.1,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.085000001,-0.015},
								1
							},
							
							{
								"HorizonBankSource",
								{0.07,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.050000001,0},
								1
							},
							{},
							
							{
								"HorizonBankSource",
								{-0.16,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.1,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.085000001,-0.015},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.07,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.050000001,0},
								1
							},
							{}
						};
					};
					class CoordXNumber
					{
						type="text";
						source="coordinateX";
						sourceScale=0.0099999998;
						sourceLength=3;
						sourceOffset=-0.5;
						align="right";
						scale=1;
						pos[]=
						{
							{0.80900002,0.96100003},
							1
						};
						right[]=
						{
							{0.85900003,0.96100003},
							1
						};
						down[]=
						{
							{0.80900002,0.99599999},
							1
						};
					};
					class CoordYNumber: CoordXNumber
					{
						source="coordinateY";
						pos[]=
						{
							{0.89899999,0.96100003},
							1
						};
						right[]=
						{
							{0.949,0.96100003},
							1
						};
						down[]=
						{
							{0.89899999,0.99599999},
							1
						};
					};
					class Time: CoordXNumber
					{
						source="time";
						text="%X";
						align="left";
						pos[]=
						{
							{0.60500002,0.96100003},
							1
						};
						right[]=
						{
							{0.65499997,0.96100003},
							1
						};
						down[]=
						{
							{0.60500002,0.99599999},
							1
						};
					};
					class CurrentWeapon
					{
						type="text";
						source="weapon";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.97899997,0.889},
							1
						};
						right[]=
						{
							{1.029,0.889},
							1
						};
						down[]=
						{
							{0.97899997,0.92400002},
							1
						};
					};
					class CurrentAmmo: CurrentWeapon
					{
						source="ammo";
						align="left";
						pos[]=
						{
							{0.97899997,0.921},
							1
						};
						right[]=
						{
							{1.029,0.921},
							1
						};
						down[]=
						{
							{0.97899997,0.95599997},
							1
						};
					};
					class CoordXText
					{
						type="text";
						source="static";
						text="GRID:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.65499997,0.96100003},
							1
						};
						right[]=
						{
							{0.70499998,0.96100003},
							1
						};
						down[]=
						{
							{0.65499997,0.99599999},
							1
						};
					};
					class CoordYText
					{
						type="text";
						source="static";
						text="";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.875,0.96100003},
							1
						};
						right[]=
						{
							{0.92500001,0.96100003},
							1
						};
						down[]=
						{
							{0.875,0.99599999},
							1
						};
					};
					class LightsGroup
					{
						condition="lights";
						class LightsText
						{
							type="text";
							source="static";
							text="LIGHT";
							align="left";
							scale=1;
							pos[]=
							{
								{0.149,0.96100003},
								1
							};
							right[]=
							{
								{0.199,0.96100003},
								1
							};
							down[]=
							{
								{0.149,0.99599999},
								1
							};
						};
					};
					class CollisionLights
					{
						condition="collisionlights";
						class CollisionLightsText
						{
							type="text";
							source="static";
							text="COLL";
							align="left";
							scale=1;
							pos[]=
							{
								{0.30899999,0.96100003},
								1
							};
							right[]=
							{
								{0.359,0.96100003},
								1
							};
							down[]=
							{
								{0.30899999,0.99599999},
								1
							};
						};
					};
					class WeaponsLocking
					{
						condition="missilelocking";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="LOCKING";
							align="center";
							scale=1;
							pos[]=
							{
								{0.215,0.87970102},
								1
							};
							right[]=
							{
								{0.27500001,0.87970102},
								1
							};
							down[]=
							{
								{0.215,0.928846},
								1
							};
						};
					};
					class TargetInfo
					{
						condition="missilelocked";
						class TargetLockedText
						{
							type="text";
							source="static";
							text="TARGET ACQUIRED";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.19499999,0.85900003},
								1
							};
							right[]=
							{
								{0.235,0.85900003},
								1
							};
							down[]=
							{
								{0.19499999,0.88999999},
								1
							};
						};
						class TimeOfFlightText
						{
							type="text";
							source="static";
							text="TOF:";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.127+0.13",
									0.889
								},
								1
							};
							right[]=
							{
								{0.30199999,0.889},
								1
							};
							down[]=
							{
								
								{
									"0.127+0.13",
									0.92400002
								},
								1
							};
						};
						class DistanceText
						{
							type="text";
							source="static";
							text="DISTANCE:";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.125+0.13",
									0.921
								},
								1
							};
							right[]=
							{
								{0.30000001,0.921},
								1
							};
							down[]=
							{
								
								{
									"0.125+0.13",
									0.95599997
								},
								1
							};
						};
						class TOF_source: CurrentWeapon
						{
							source="missileflighttime";
							align="right";
							pos[]=
							{
								{0.26899999,0.889},
								1
							};
							right[]=
							{
								{0.31900001,0.889},
								1
							};
							down[]=
							{
								{0.26899999,0.92400002},
								1
							};
						};
						class TargetDistance: CurrentWeapon
						{
							source="targetDist";
							sourceLength=0;
							sourcePrecision=1;
							sourceScale=0.001;
							align="right";
							pos[]=
							{
								{0.26899999,0.921},
								1
							};
							right[]=
							{
								{0.31900001,0.921},
								1
							};
							down[]=
							{
								{0.26899999,0.95599997},
								1
							};
						};
					};
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="!INCOMING MISSILE!";
							align="center";
							scale=1;
							pos[]=
							{
								{0.48500001,0.21623901},
								1
							};
							right[]=
							{
								{0.54500002,0.21623901},
								1
							};
							down[]=
							{
								{0.48500001,0.265385},
								1
							};
						};
					};
					class GearGroup
					{
						type="group";
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="DOORS";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.82564098},
								1
							};
							right[]=
							{
								{0.54000002,0.82564098},
								1
							};
							down[]=
							{
								{0.5,0.85512799},
								1
							};
						};
					};
					class MGun
					{
						condition="mgun+rocket";
						class Cross
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0393162},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.02,-0.024},
									1
								},
								
								{
									"ImpactPoint",
									{0.025,-0.030999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0020000001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0020000001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0344017},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,-0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,-0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,-0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,-0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,-0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,-0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,-0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,-0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,-0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,-0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,-0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,-0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,-0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,-0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,-0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,-0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.079999998},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,-0.079999998},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.039999999},
								1
							};
						};
					};
					class WP
					{
						condition="wpvalid";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.935,0.81089699},
								1
							};
							right[]=
							{
								{0.995,0.81089699},
								1
							};
							down[]=
							{
								{0.935,0.86004299},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text=">";
							align="center";
							scale=2;
							pos[]=
							{
								{0.94999999,0.81089699},
								1
							};
							right[]=
							{
								{0.97000003,0.81089699},
								1
							};
							down[]=
							{
								{0.94999999,0.86004299},
								1
							};
						};
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.95999998,0.81089699},
								1
							};
							right[]=
							{
								{1.02,0.81089699},
								1
							};
							down[]=
							{
								{0.95999998,0.86004299},
								1
							};
						};
						class WP
						{
							width=1;
							type="line";
							points[]=
							{
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										0.015,
										-0.035
									},
									1
								},
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										0,
										0
									},
									1
								},
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										-0.015,
										-0.035
									},
									1
								}
							};
						};
					};
					class RadarBoxes
					{
						type="radartoview";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
						width=2;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0019658101},
								1
							},
							
							{
								{0.0020000001,-0.0019658101},
								1
							},
							
							{
								{0.0020000001,0.0019658101},
								1
							},
							
							{
								{-0.0020000001,0.0019658101},
								1
							},
							
							{
								{-0.0020000001,-0.0019658101},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.0196581},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.0294872},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.0294872},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.0294872},
									1
								}
							};
						};
					};
				};
			};
		};
		soundEngineOnInt[]=
		{
			"442_a_vehicle\laat\sounds\laat_engine_start_int.wss",
			0.316228,
			1
		};
		soundEngineOnExt[]=
		{
			"442_a_vehicle\laat\sounds\laat_engine_start.wss",
			0.79432797,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"442_a_vehicle\laat\sounds\laat_engine_end_int.wss",
			0.316228,
			1
		};
		soundEngineOffExt[]=
		{
			"442_a_vehicle\laat\sounds\laat_engine_end.wss",
			0.79432797,
			1,
			600
		};
		soundLocked[]=
		{
			"442_a_vehicle\laat\sounds\laat_lock_on_beep.wss",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"442_a_vehicle\laat\sounds\laat_lock_on_alert_beep.wss",
			0.316228,
			1
		};
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles2\soft\Mrap_02\Mrap_02_Enter",
			0.446684,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles2\soft\Mrap_02\Mrap_02_Exit",
			0.446684,
			1,
			40
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
			1.99526,
			1,
			75
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
			1.99526,
			1,
			75
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
			1.99526,
			1,
			75
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
			1.99526,
			1,
			75
		};
		buildCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
			1.99526,
			1,
			75
		};
		buildCrash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
			1.99526,
			1,
			75
		};
		buildCrash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
			1.99526,
			1,
			75
		};
		buildCrash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
			1.99526,
			1,
			75
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.125,
			"buildCrash1",
			0.125,
			"buildCrash2",
			0.125,
			"buildCrash3",
			0.125,
			"buildCrash4",
			0.125,
			"buildCrash5",
			0.125,
			"buildCrash6",
			0.125,
			"buildCrash7",
			0.125
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_01",
			1.99526,
			1,
			75
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_02",
			1.99526,
			1,
			75
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_03",
			1.99526,
			1,
			75
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_04",
			1.99526,
			1,
			75
		};
		WoodCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_05",
			1.99526,
			1,
			75
		};
		WoodCrash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_06",
			1.99526,
			1,
			75
		};
		WoodCrash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_07",
			1.99526,
			1,
			75
		};
		WoodCrash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_08",
			1.99526,
			1,
			75
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.125,
			"woodCrash1",
			0.125,
			"woodCrash2",
			0.125,
			"woodCrash3",
			0.125,
			"woodCrash4",
			0.125,
			"woodCrash5",
			0.125,
			"woodCrash6",
			0.125,
			"woodCrash7",
			0.125
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
			1.99526,
			1,
			75
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
			1.99526,
			1,
			75
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
			1.99526,
			1,
			75
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
			1.99526,
			1,
			75
		};
		armorCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
			1.99526,
			1,
			75
		};
		armorCrash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
			1.99526,
			1,
			75
		};
		armorCrash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
			1.99526,
			1,
			75
		};
		armorCrash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
			1.99526,
			1,
			75
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.125,
			"ArmorCrash1",
			0.125,
			"ArmorCrash2",
			0.125,
			"ArmorCrash3",
			0.125,
			"ArmorCrash4",
			0.125,
			"ArmorCrash5",
			0.125,
			"ArmorCrash6",
			0.125,
			"ArmorCrash7",
			0.125
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
			1.99526,
			1,
			75
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
			1.99526,
			1,
			75
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
			1.99526,
			1,
			75
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
			1.99526,
			1,
			75
		};
		Crash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
			1.99526,
			1,
			75
		};
		Crash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
			1.99526,
			1,
			75
		};
		Crash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
			1.99526,
			1,
			75
		};
		Crash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
			1.99526,
			1,
			75
		};
		soundCrashes[]=
		{
			"Crash0",
			0.125,
			"Crash1",
			0.125,
			"Crash2",
			0.125,
			"Crash3",
			0.125,
			"Crash4",
			0.125,
			"Crash5",
			0.125,
			"Crash6",
			0.125,
			"Crash7",
			0.125
		};
		BushCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_01",
			0.63095701,
			1,
			50
		};
		BushCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_02",
			0.63095701,
			1,
			50
		};
		BushCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
			0.63095701,
			1,
			50
		};
		BushCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
			0.63095701,
			0.80000001,
			50
		};
		soundBushCrash[]=
		{
			"BushCrash1",
			0.25,
			"BushCrash2",
			0.25,
			"BushCrash3",
			0.25,
			"BushCrash4",
			0.25
		};
		class sounds
		{
			class EngineInt
			{
				sound[]=
				{
					"442_a_vehicle\laat\sounds\laat_engine_int.wss",
					0.79432797,
					1
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
				volume="2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
			};
			class EngineExt
			{
				sound[]=
				{
					"442_a_vehicle\laat\sounds\laat_engine.wss",
					1.25893,
					1,
					600
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int_open",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1.25893,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1.25893,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					700
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					700
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					"db-7",
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2b",
					0.316228,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class rotorLowAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.316228,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.22387201,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubLandExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05])";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * ((scrubTree) factor [0, 0.01])";
			};
		};
	};
	class 442_laat_2: 442_laat_2_base
	{
		author="kripto202";
		class simpleobject
		{
			animate[]=
			{
				
				{
					"door_1_l",
					0
				},
				
				{
					"door_1_r",
					0
				},
				
				{
					"door_2_l",
					0
				},
				
				{
					"door_1_r",
					0
				},
				
				{
					"laat_ramp_open",
					0
				},
				
				{
					"CollisionLightRed1",
					0
				},
				
				{
					"CollisionLightGreen1",
					0
				},
				
				{
					"CollisionLightWhite1",
					0
				},
				
				{
					"CollisionLightWhite2",
					0
				},
				
				{
					"light_l",
					0
				},
				
				{
					"light_r",
					0
				}
			};
			hide[]=
			{
				"clan",
				"light_l",
				"light_r"
			};
			verticaloffset=0;
			verticaloffsetworld=0;
		};
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		hiddenselections[]=
		{
			"body",
			"body_2",
			"door_1",
			"door_2",
			"door_3",
			"wings",
			"missiles",
			"cockpits",
			"glass",
			"clan",
			"zasleh_l",
			"zasleh_r",
			"zasleh_b"
		};
		hiddenselectionstextures[]=
		{
			"442_a_vehicle\laat\data\body_1_co.paa",
			"442_a_vehicle\laat\data\body_2_co.paa",
			"442_a_vehicle\laat\data\door_1_co.paa",
			"442_a_vehicle\laat\data\door_2_co.paa",
			"442_a_vehicle\laat\data\door_3_co.paa",
			"442_a_vehicle\laat\data\wings_co.paa",
			"442_a_vehicle\laat\data\missiles_co.paa",
			"442_a_vehicle\laat\data\cockpits_co.paa",
			"442_a_vehicle\laat\data\glass_ca.paa"
		};
		class TextureSources
		{
			class base
			{
				displayname="No Design";
				author="kripto202";
				textures[]=
				{
					"442_a_vehicle\laat\data\body1_co.paa",
					"442_a_vehicle\laat\data\body2_co.paa",
					"442_a_vehicle\laat\data\door1_co.paa",
					"442_a_vehicle\laat\data\door2_co.paa",
					"442_a_vehicle\laat\data\door3_co.paa",
					"442_a_vehicle\laat\data\wings_co.paa",
					"442_a_vehicle\laat\data\missiles_co.paa",
					"442_a_vehicle\laat\data\cockpits_co.paa",
					"442_a_vehicle\laat\data\glass_ca.paa"
				};
				factions[]=
				{
					"kobra"
				};
			};
			class jetporg: base
			{
				displayname="Jet Porg";
				textures[]=
				{
					"442_a_vehicle\laat\data\body1_jetporg_co.paa",
					"442_a_vehicle\laat\data\body2_co.paa",
					"442_a_vehicle\laat\data\door1_co.paa",
					"442_a_vehicle\laat\data\door2_co.paa",
					"442_a_vehicle\laat\data\door3_co.paa",
					"442_a_vehicle\laat\data\wings_co.paa",
					"442_a_vehicle\laat\data\missiles_co.paa",
					"442_a_vehicle\laat\data\cockpits_co.paa",
					"442_a_vehicle\laat\data\glass_ca.paa"
				};
			};
			class misfit: base
			{
				displayname="Misfit";
				textures[]=
				{
					"442_a_vehicle\laat\data\body1_misfit_co.paa",
					"442_a_vehicle\laat\data\body2_co.paa",
					"442_a_vehicle\laat\data\door1_co.paa",
					"442_a_vehicle\laat\data\door2_co.paa",
					"442_a_vehicle\laat\data\door3_co.paa",
					"442_a_vehicle\laat\data\wings_co.paa",
					"442_a_vehicle\laat\data\missiles_co.paa",
					"442_a_vehicle\laat\data\cockpits_co.paa",
					"442_a_vehicle\laat\data\glass_ca.paa"
				};
			};
			class m10: base
			{
				displayname="Muunilinst 10";
				textures[]=
				{
					"442_a_vehicle\laat\data\body1_m10_co.paa",
					"442_a_vehicle\laat\data\body2_co.paa",
					"442_a_vehicle\laat\data\door1_co.paa",
					"442_a_vehicle\laat\data\door2_co.paa",
					"442_a_vehicle\laat\data\door3_co.paa",
					"442_a_vehicle\laat\data\wings_m10_co.paa",
					"442_a_vehicle\laat\data\missiles_co.paa",
					"442_a_vehicle\laat\data\cockpits_co.paa",
					"442_a_vehicle\laat\data\glass_ca.paa"
				};
			};
			class 44sod: base
			{
				displayname="44th Special Operations Division";
				textures[]=
				{
					"442_a_vehicle\laat\data\body1_44_co.paa",
					"442_a_vehicle\laat\data\body2_co.paa",
					"442_a_vehicle\laat\data\door1_44_co.paa",
					"442_a_vehicle\laat\data\door2_44_co.paa",
					"442_a_vehicle\laat\data\door3_44_co.paa",
					"442_a_vehicle\laat\data\wings_44_co.paa",
					"442_a_vehicle\laat\data\missiles_co.paa",
					"442_a_vehicle\laat\data\cockpits_co.paa",
					"442_a_vehicle\laat\data\glass_ca.paa"
				};
			};
			class black_legion: base
			{
				displayname="Black Legion";
				textures[]=
				{
					"442_a_vehicle\laat\data\body1_bl_co.paa",
					"442_a_vehicle\laat\data\body2_co.paa",
					"442_a_vehicle\laat\data\door1_bl_co.paa",
					"442_a_vehicle\laat\data\door2_bl_co.paa",
					"442_a_vehicle\laat\data\door3_bl_co.paa",
					"442_a_vehicle\laat\data\wings_bl_co.paa",
					"442_a_vehicle\laat\data\missiles_co.paa",
					"442_a_vehicle\laat\data\cockpits_co.paa",
					"442_a_vehicle\laat\data\glass_ca.paa"
				};
			};
			class paintless: base
			{
				displayname="Paintless";
				textures[]=
				{
					"442_a_vehicle\laat\data\body1_paintless_co.paa",
					"442_a_vehicle\laat\data\body2_co.paa",
					"442_a_vehicle\laat\data\door1_co.paa",
					"442_a_vehicle\laat\data\door2_co.paa",
					"442_a_vehicle\laat\data\door3_co.paa",
					"442_a_vehicle\laat\data\wings_paintless_co.paa",
					"442_a_vehicle\laat\data\missiles_co.paa",
					"442_a_vehicle\laat\data\cockpits_co.paa",
					"442_a_vehicle\laat\data\glass_ca.paa"
				};
			};
			class 796sc: base
			{
				displayname="796th Star Corps";
				textures[]=
				{
					"442_a_vehicle\laat\data\796th_body1_co.paa",
					"442_a_vehicle\laat\data\796th_body2_co.paa",
					"442_a_vehicle\laat\data\796th_door1_co.paa",
					"442_a_vehicle\laat\data\796th_door2_co.paa",
					"442_a_vehicle\laat\data\796th_door3_co.paa",
					"442_a_vehicle\laat\data\796th_wings_co.paa",
					"442_a_vehicle\laat\data\missiles_co.paa",
					"442_a_vehicle\laat\data\cockpits_co.paa",
					"442_a_vehicle\laat\data\glass_ca.paa"
				};
			};
		};
		textureList[]=
		{
			"base",
			1,
			"jetporg",
			1,
			"misfit",
			1,
			"m10",
			1,
			"paintless",
			0,
			"44sod",
			0,
			"black_legion",
			0,
			"796sc",
			0
		};
	};
	class 442_laat_2_ab: 442_laat_2
	{
		class simpleobject
		{
			animate[]=
			{
				
				{
					"door_1_l",
					0
				},
				
				{
					"door_1_r",
					0
				},
				
				{
					"door_2_l",
					0
				},
				
				{
					"door_1_r",
					0
				},
				
				{
					"laat_ramp_open",
					0
				},
				
				{
					"CollisionLightRed1",
					0
				},
				
				{
					"CollisionLightGreen1",
					0
				},
				
				{
					"CollisionLightWhite1",
					0
				},
				
				{
					"CollisionLightWhite2",
					0
				},
				
				{
					"light_l",
					0
				},
				
				{
					"light_r",
					0
				}
			};
			hide[]=
			{
				"clan",
				"light_l",
				"light_r"
			};
			verticaloffset=0;
			verticaloffsetworld=0;
		};
		model="442_a_vehicle\laat\Laat_ab.p3d";
		displayname="LAAT/I Gunship (Airborne)";
		getInRadius=5;
		cargoCanEject=1;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class activeRadarSenorComponent
					{
						aimDown=30;
						allowsMarking=1;
						angleRangeHorizontal=180;
						angleRangeVertical=90;
						animDirection="";
						color[]={0,1,1,1};
						componentType="ActiveRadarSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=125;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=3000;
						class AirTarget
						{
							maxRange=5000;
							minRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=5000;
							minRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class AntiRadiationSensorComponent
					{
						aimDown=0;
						allowsMarking=1;
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						animDirection="";
						color[]={0.5,1,0.5,0.5};
						componentType="PassiveRadarSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=12000;
						class AirTarget
						{
							maxRange=8000;
							minRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=8000;
							minRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
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
						aimDown=0;
						allowsMarking=1;
						animDirection="";
						color[]={1,0,0,1};
						componentType="IRSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxFogSeeThrough=0.995;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=2000;
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
						allowsMarking=1;
						color[]={1,1,0.5,0.80000001};
						componentType="VisualSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxFogSeeThrough=0.94;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						nightRangeCoef=0;
						typeRecognitionDistance=2000;
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
						aimDown=0;
						allowsMarking=0;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						animDirection="";
						color[]={0.5,1,0.5,0.5};
						componentType="PassiveRadarSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=12000;
					};
					class LaserSensorComponent
					{
						class AirTarget
						{
							maxRange=6000;
							minRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=6000;
							minRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						aimDown=0;
						allowsMarking=1;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						animDirection="";
						color[]={1,1,1,0};
						componentType="LaserSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=0;
					};
					class NVSensorComponent
					{
						class AirTarget
						{
							maxRange=6000;
							minRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=6000;
							minRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						aimDown=0;
						allowsMarking=1;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						animDirection="";
						color[]={1,1,1,0};
						componentType="NVSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=0;
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
			class TransportCounterMeasuresComponent;
		};
	};
	class 442_laat_wreck: Wreck_base_F
	{
		author="kripto202";
		mapsize=20;
		editorPreview="";
		scope=2;
		scopecurator=2;
		icon="iconObject_1x2";
		displayname="LAAT (Wrecked)";
		model="442_a_vehicle\laat\laat_w.p3d";
		editorCategory="kobra";
		editorSubcategory="442_wrecks";
	};
	class 442_laat_door_1: Items_base_F
	{
		author="kripto202";
		mapsize=20;
		editorPreview="";
		scope=2;
		scopecurator=2;
		displayname="LAAT Door 1";
		model="442_a_vehicle\laat\laat_w2.p3d";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class 442_laat_door_2: 442_laat_door_1
	{
		displayname="LAAT Door 2";
		model="442_a_vehicle\laat\laat_w3.p3d";
	};
	class 442_laat_door_3: 442_laat_door_1
	{
		displayname="LAAT Door 3";
		model="442_a_vehicle\laat\laat_w4.p3d";
	};
	class 442_laat_door_4: 442_laat_door_1
	{
		displayname="LAAT Door 4";
		model="442_a_vehicle\laat\laat_w5.p3d";
	};