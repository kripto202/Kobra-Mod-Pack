class CfgAmmo
{
//Side Guns
	class BulletBase;
	class 442_127x99_red: BulletBase
	{
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		visibleFire = 8;
		audibleFire = 120;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 16;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
		aiAmmoUsageFlags = "64 + 128 + 256";
		cost = 1;
		airLock = 1;
		caliber = 2.6;
		typicalSpeed = 880;
		timeToLive = 10;
		model="swlw_main\Effects\laser_red.p3d";
		effectfly="442_plasma_red";
		tracerScale = 1.2;
		tracerStartTime = 0.00001;
		tracerEndTime = 10;
		airFriction = -0.00086;
		class CamShakeExplode
		{
			power = 3.60555;
			duration = 0.8;
			frequency = 20;
			distance = 10.8167;
		};
		class CamShakeHit
		{
			power = 13;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};

//Main Cannon
	class Sh_105mm_APFSDS_T_Green;
	class Sh_120mm_HE;
	class 442_75mm_red_ap: Sh_105mm_APFSDS_T_Green
	{
		caliber = 18;
		hit = 350;
		model="swlw_main\Effects\laser_red.p3d";
		effectfly="442_plasma_red";
		flaresize=10;
		tracerscale=2;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowagainstinfantry = 1;
	};
	class 442_75mm_red_he: Sh_120mm_HE
	{
		caliber=6;
		indirectHit=40;
		indirectHitRange=3;
		hit=150;
		explosive=0.89999998;
		model="swlw_main\Effects\laser_red.p3d";
		effectfly="442_plasma_red";
		flaresize=10;
		tracerscale=2;
		cost = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowagainstinfantry = 1;
	};

//Driver Guns
	class GrenadeBase;
	class 442_40mm_HE: GrenadeBase
	{
		explosionSoundEffect = "DefaultExplosion";
		simulation = "shotShell";
		model="swlw_main\Effects\laser_red.p3d";
		effectfly="442_plasma_red";
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowagainstinfantry = 1;
		hit = 80;
		indirectHit = 8;
		indirectHitRange = 6;
		warheadName = "HE";
		visibleFire = 1;
		audibleFire = 30;
		visibleFireTime = 3;
		dangerRadiusHit = 60;
		suppressionRadiusHit = 24;
		explosive = 1;
		cost = 10;
		deflecting = 5;
		airFriction = -0.001;
		fuseDistance = 1;
		whistleDist = 16;
		typicalSpeed = 185;
		caliber = 2;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01",3.1622777,1,1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02",3.1622777,1,1500};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03",3.1622777,1,1500};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04",3.1622777,1,1500};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class CamShakeExplode
		{
			power = 8;
			duration = 1.2;
			frequency = 20;
			distance = 74.5964;
		};
		class CamShakeHit
		{
			power = 20;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
};