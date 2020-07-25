class Turrets: Turrets
{
    class MainTurret: MainTurret
    {
		body = "left_gun";
		gun = "left_gun";
        gunnername = "Left Gunner";
        animationsourcebody = "mainturret";
        animationsourcegun = "maingun";
        class turrets{};
        gunBeg = "usti_hlavne_l_1";
        gunEnd = "konec_hlavne_l_1";
		memorypointgun = "usti_hlavne_l_1";
        weapons[] = {"442_mtt_cannon_75mm_l"};
        magazines[]=
		{
			"442_30Rnd_75mm_HE_mag_red",
			"442_30Rnd_75mm_HE_mag_red",
			"442_30Rnd_75mm_HE_mag_red",
			"442_30Rnd_75mm_HE_mag_red",
			"442_30Rnd_75mm_HE_mag_red",
		};
        minelev = -5;
        maxelev = 10;
        initelev = 0;
        minturn = -45;
        maxturn = 45;
        soundServo[]= {"A3\Sounds_F\vehicles\armor\noises\servo_best", db-40, 1.0,50};

        turretInfoType = "RscWeaponRangeZeroing";
		discreteDistance[] = {
			100,200,300,400,500,600,700,800,
			900,1000,1100,1200,1300,1400,1500,1600,
			1700,1800,1900,2000,2100,2200,2300,2400
		};
        discreteDistanceInitIndex = 5;

        memoryPointGunnerOptics= "gunnerviewl";
        gunnerOutOpticsModel = "";
		gunnerOutOpticsEffect[] = {};
		gunnerOpticsEffect[] = {};
		gunnerForceOptics = 1;

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

        gunnerAction = mbt2_slot2a_out;
		gunnerInAction = mbt2_slot2a_in;
		forceHideGunner = 0;
		inGunnerMayFire = 1;
        viewGunnerInExternal = 1;

        class HitPoints 
		{
			class HitTurret	{
				armor = 0.8;
				material = -1;
				name = "main_turret_hit";
				visual="vez";
				passThrough = 0;
				minimalHit = 0.02;
				explosionShielding = 0.3;
				radius = 0.25;
			};
			class HitGun	{
				armor = 0.3;
				material = -1;
				name = "main_gun_hit";
				visual="";
				passThrough = 0;
				minimalHit = 0;
				explosionShielding = 1;
				radius = 0.25;
			};
		};
    };
    class MainTurret2: MainTurret
    {
		body = "right_gun";
		gun = "right_gun";
        animationsourcebody = "mainturret2";
        animationsourcegun = "maingun2";
        gunnername = "Right Gunner";
        gunBeg = "usti_hlavne_r_1";
        gunEnd = "konec_hlavne_r_1";
		memorypointgun = "usti_hlavne_r_1";
        memoryPointGunnerOptics= "gunnerviewr";
		weapons[] = {"442_mtt_cannon_75mm_r"};
    };
};