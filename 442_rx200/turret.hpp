class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets{};
				gunBeg="Usti hlavne3";
				gunEnd="Konec hlavne3";

				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=2;
				
				proxyIndex=2;
				weapons[]=
				{
					"mortar_155mm_AMOS"
				};
				magazines[]=
				{
					"32Rnd_155mm_Mo_shells",
					"2Rnd_155mm_Mo_guided",
					"2Rnd_155mm_Mo_guided",
					"6Rnd_155mm_Mo_mine",
					"2Rnd_155mm_Mo_Cluster",
					"6Rnd_155mm_Mo_smoke",
					"2Rnd_155mm_Mo_LG",
					"6Rnd_155mm_Mo_AT_mine"
				};
				minElev=0;
				maxElev=90;
				initElev=0;
				minTurn=-90;
				maxTurn=90;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					0.0099999998,
					1,
					50
				};
				turretInfoType="RscWeaponRangeArtilleryAuto";
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				class OpticsIn: Optics_Gunner_MBT_01
				{
					class Wide: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\acc\reticle_mortar_01_f.p3d";
						initFov=0.17399999;
						minFov=0.0077777999;
						maxFov=0.14;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
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