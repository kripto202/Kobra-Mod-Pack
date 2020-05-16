class cfgpatches
{
	class 442_aat
	{
		author="kripto202";
		requiredaddons[]=
		{
			"A3_Armor_F_Beta"
		};
		requiredVersion=1;
		weapons[]={};
		units[]=
		{
			"442_aat"
		};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_AAA_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class cfgvehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class CommanderOptics;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class 442_aat_base: Tank_F
	{
		author="kripto202";
		scope=1;
		scopecurator=1;
		scopearsenal=1;
		displayname="AAT Test Tank";
		model="\442_aat\aat.p3d";
		picture="";
		icon="\A3\armor_f_gamma\MBT_02\Data\UI\map_MBT_02_ca.paa";
		side=0;
		faction="442_CIS";
		editorSubcategory="SWLG_GAR_tanks";
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
		class Hitpoints
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets
				{
				};
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				proxyIndex=2;
				weapons[]=
				{
					"cannon_120mm"
				};
				magazines[]=
				{
					"32Rnd_120mm_APFSDS_shells_Tracer_Red",
					"16Rnd_120mm_HE_shells_Tracer_Red"
				};
				minElev=-5;
				maxElev=30;
				initElev=10;
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
						name="vez";
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
						name="zbran";
						visual="";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.25;
					};
				};
			};
			class CommanderOptics: CommanderOptics
			{
				body="ObsTurret";
				gun="ObsGun";
				proxyIndex=4;
				viewGunnerInExternal=0;
				proxytype="CPCommander";
				gunnername="Commander";
				animationSourceBody="ObsTurret";
				animationSourceGun="ObsGun";
				minElev=-10;
				maxElev=60;
				initElev=0;
				minTurn=-15;
				maxTurn=15;
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
				memoryPointGun[]={};
				weapons[]=
				{
					"SmokeLauncher"
				};
				magazines[]=
				{
					"SmokeLauncherMag"
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
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.155;
					minFov=0.034000002;
					maxFov=0.155;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={2,3,4};
				};
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				startEngine=0;
				LODTurnedOut="VIEW_GUNNER";
				LODTurnedIn="VIEW_GUNNER";
				class HitPoints
				{
					class HitTurret
					{
						armor=0.30000001;
						material=-1;
						name="Commander_Turret";
						visual="commander_turret";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.60000002;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.30000001;
						material=-1;
						name="Commander_Gun";
						visual="Commander_Gun";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.60000002;
						radius=0.25;
					};
				};
				selectionFireAnim="zasleh1";
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
		soundEngineOnInt[]=
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
		class Sounds: Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_01",
					0.39810717,
					1,
					200
				};
				frequency="0.95	+	((rpm/	2640) factor[(400/	2640),(500/	2640)])*0.15";
				volume="engineOn*camPos*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(750/	2640),(600/	2640)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_02",
					0.50118721,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2640) factor[(500/	2640),(730/	2640)])*0.2";
				volume="engineOn*camPos*(((rpm/	2640) factor[(550/	2640),(730/	2640)])	*	((rpm/	2640) factor[(800/	2640),(780/	2640)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_03",
					0.56234133,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2640) factor[(630/	2640),(1000/	2640)])*0.2";
				volume="engineOn*camPos*(((rpm/	2640) factor[(600/	2640),(720/	2640)])	*	((rpm/	2640) factor[(1100/	2640),(840/	2640)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_06",
					0.63095737,
					1,
					250
				};
				frequency="0.8	+	((rpm/	2640) factor[(850/	2640),(1300/	2640)])*0.2";
				volume="engineOn*camPos*(((rpm/	2640) factor[(800/	2640),(1000/	2640)])	*	((rpm/	2640) factor[(1300/	2640),(1100/	2640)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_07",
					0.63095737,
					1,
					300
				};
				frequency="0.8	+	((rpm/	2640) factor[(1100/	2640),(1600/	2640)])*0.1";
				volume="engineOn*camPos*(((rpm/	2640) factor[(1100/	2640),(1270/	2640)])	*	((rpm/	2640) factor[(1550/	2640),(1380/	2640)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_08",
					0.70794576,
					1,
					300
				};
				frequency="0.8	+	((rpm/	2640) factor[(1400/	2640),(2000/	2640)])*0.1";
				volume="engineOn*camPos*(((rpm/	2640) factor[(1380/	2640),(1500/	2640)])	*	((rpm/	2640) factor[(2000/	2640),(1700/	2640)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_10",
					1,
					1,
					300
				};
				frequency="0.8	+	((rpm/	2640) factor[(1700/	2640),(2640/	2640)])*0.1";
				volume="engineOn*camPos*((rpm/	2640) factor[(1600/	2640),(2500/	2640)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_01",
					0.63095737,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2640) factor[(400/	2640),(500/	2640)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(750/	2640),(600/	2640)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_02",
					0.63095737,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2640) factor[(500/	2640),(730/	2640)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(550/	2640),(730/	2640)])	*	((rpm/	2640) factor[(800/	2640),(780/	2640)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_03",
					0.70794576,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2640) factor[(630/	2640),(1000/	2640)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(600/	2640),(720/	2640)])	*	((rpm/	2640) factor[(1100/	2640),(840/	2640)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_06",
					0.70794576,
					1,
					250
				};
				frequency="0.8	+	((rpm/	2640) factor[(850/	2640),(1300/	2640)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(800/	2640),(1000/	2640)])	*	((rpm/	2640) factor[(1300/	2640),(1100/	2640)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_07",
					1,
					1,
					350
				};
				frequency="0.8	+	((rpm/	2640) factor[(1100/	2640),(1600/	2640)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1100/	2640),(1270/	2640)])	*	((rpm/	2640) factor[(1550/	2640),(1380/	2640)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_08",
					1.1220185,
					1,
					350
				};
				frequency="0.8	+	((rpm/	2640) factor[(1400/	2640),(2000/	2640)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1380/	2640),(1500/	2640)])	*	((rpm/	2640) factor[(2000/	2640),(1700/	2640)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_10",
					1.2589254,
					1,
					400
				};
				frequency="0.8	+	((rpm/	2640) factor[(1700/	2640),(2640/	2640)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(1600/	2640),(2500/	2640)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_01",
					0.31622776,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(400/	2640),(500/	2640)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(750/	2640),(600/	2640)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_02",
					0.3548134,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(500/	2640),(730/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(550/	2640),(730/	2640)])	*	((rpm/	2640) factor[(800/	2640),(780/	2640)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_03",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(630/	2640),(1000/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(600/	2640),(720/	2640)])	*	((rpm/	2640) factor[(1100/	2640),(840/	2640)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_06",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(850/	2640),(1300/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(800/	2640),(1000/	2640)])	*	((rpm/	2640) factor[(1300/	2640),(1100/	2640)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_07",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1100/	2640),(1600/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(1100/	2640),(1270/	2640)])	*	((rpm/	2640) factor[(1550/	2640),(1380/	2640)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_08",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1400/	2640),(2000/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(1380/	2640),(1500/	2640)])	*	((rpm/	2640) factor[(2000/	2640),(1700/	2640)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_10",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1700/	2640),(2640/	2640)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	2640) factor[(1600/	2640),(2500/	2640)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_01",
					0.3548134,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(400/	2640),(500/	2640)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(750/	2640),(600/	2640)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_02",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(500/	2640),(730/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(550/	2640),(730/	2640)])	*	((rpm/	2640) factor[(800/	2640),(780/	2640)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_03",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(630/	2640),(1000/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(600/	2640),(720/	2640)])	*	((rpm/	2640) factor[(1100/	2640),(840/	2640)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_06",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(850/	2640),(1300/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(800/	2640),(1000/	2640)])	*	((rpm/	2640) factor[(1300/	2640),(1100/	2640)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_07",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1100/	2640),(1600/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1100/	2640),(1270/	2640)])	*	((rpm/	2640) factor[(1550/	2640),(1380/	2640)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_08",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1400/	2640),(2000/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1380/	2640),(1500/	2640)])	*	((rpm/	2640) factor[(2000/	2640),(1700/	2640)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_10",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1700/	2640),(2640/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(1600/	2640),(2500/	2640)])";
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
		forcehideDriver=1;
		DriverForceOptics=1;
		weapons[]=
		{
			"GMG_20mm"
		};
		magazines[]=
		{
			"200Rnd_20mm_G_belt",
			"200Rnd_20mm_G_belt"
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
				weapon="cannon_120mm";
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
		displayname="AAT Test";
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
			"442_aat\data\body1_co.paa",
			"442_aat\data\body2_co.paa",
			"442_aat\data\gun_co.paa"
		};
		class texturesources
		{
			class base
			{
				displayname="Trade Federation";
				author="Legion Studio";
				textures[]=
				{
					"442_aat\data\body1_co.paa",
					"442_aat\data\body2_co.paa",
					"442_aat\data\gun_co.paa"
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
					"442_aat\data\body1_red_co.paa",
					"442_aat\data\body2_red_co.paa",
					"442_aat\data\gun_red_co.paa"
				};
			};
			class black: base
			{
				displayname="CIS Black";
				textures[]=
				{
					"442_aat\data\body1_black_co.paa",
					"442_aat\data\body2_black_co.paa",
					"442_aat\data\gun_black_co.paa"
				};
			};
			class green: base
			{
				displayname="CIS Green";
				textures[]=
				{
					"442_aat\data\body1_green_co.paa",
					"442_aat\data\body2_green_co.paa",
					"442_aat\data\gun_green_co.paa"
				};
			};
			class blue: base
			{
				displayname="CIS Blue";
				textures[]=
				{
					"442_aat\data\body1_blue_co.paa",
					"442_aat\data\body2_blue_co.paa",
					"442_aat\data\gun_blue_co.paa"
				};
			};
			class winter: base
			{
				displayname="CIS Winter";
				textures[]=
				{
					"442_aat\data\body1_base_co.paa",
					"442_aat\data\body2_base_co.paa",
					"442_aat\data\gun_base_co.paa"
				};
			};
		};
	};
};