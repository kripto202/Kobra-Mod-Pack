class CfgAmmo
{
//Side Guns
	class BulletBase;
	class B_127x99_Ball: BulletBase
	{
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		visibleFire = 8;
		audibleFire = 120;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 16;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
		cost = 5;
		airLock = 1;
		caliber = 2.6;
		typicalSpeed = 880;
		timeToLive = 10;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
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
	class B_127x99_Ball_Tracer_Red: B_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};

//Main Cannon
	class ShellBase;
	class Sh_120mm_HE: ShellBase
		{
			hit = 250;
			indirectHit = 60;
			indirectHitRange = 6;
			warheadName = "HE";
			dangerRadiusHit = 160;
			suppressionRadiusHit = 32;
			typicalSpeed = 1400;
			explosive = 0.8;
			cost = 300;
			airFriction = -0.000275;
			caliber = 10;
			deflecting = 4;
			timeToLive = 15;
			whistleOnFire = 1;
			whistleDist = 14;
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
			tracerScale = 1;
			tracerStartTime = 0.1;
			tracerEndTime = 3.0;
			muzzleEffect = "";
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01",1.7782794,1,1800};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02",1.7782794,1,1800};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03",1.7782794,1,1800};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04",1.7782794,1,1800};
			multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
			class CamShakeExplode
			{
				power = 24;
				duration = 2.2;
				frequency = 20;
				distance = 143.636;
			};
			class CamShakeHit
			{
				power = 120;
				duration = 0.6;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire
			{
				power = 3.30975;
				duration = 2.2;
				frequency = 20;
				distance = 87.6356;
			};
			class CamShakePlayerFire
			{
				power = 0.02;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
		};
	class Sh_120mm_HE_Tracer_Red: Sh_120mm_HE
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		};
	class Sh_120mm_APFSDS: ShellBase
		{
			hit = 500;
			indirectHit = 15;
			indirectHitRange = 0.5;
			warheadName = "AP";
			dangerRadiusHit = 100;
			suppressionRadiusHit = 18;
			explosive = 0;
			cost = 500;
			airFriction = -3.96e-005;
			CraterEffects = "ExploAmmoCrater";
			explosionEffects = "ExploAmmoExplosion";
			typicalSpeed = 1550;
			caliber = 35.2688;
			deflecting = 15;
			timeToLive = 15;
			whistleOnFire = 1;
			whistleDist = 14;
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
			tracerScale = 3;
			tracerStartTime = 0.1;
			tracerEndTime = 3.0;
			muzzleEffect = "";
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01",1.7782794,1,1800};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02",1.7782794,1,1800};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03",1.7782794,1,1800};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04",1.7782794,1,1800};
			multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
			class HitEffects
			{
				hitMetal = "ImpactMetalSabotBig";
				hitMetalPlate = "ImpactMetalSabotBig";
				hitBuilding = "ImpactConcreteSabot";
				hitConcrete = "ImpactConcreteSabot";
				hitGroundSoft = "ImpactEffectsGroundSabot";
				hitGroundHard = "ImpactEffectsGroundSabot";
				hitWater = "ImpactEffectsWater";
				default_mat = "ImpactEffectsGroundSabot";
			};
			aiAmmoUsageFlags = "128 + 512";
			class CamShakeExplode
			{
				power = 13.4164;
				duration = 2.6;
				frequency = 20;
				distance = 40.2492;
			};
			class CamShakeHit
			{
				power = 180;
				duration = 0.8;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire
			{
				power = 3.30975;
				duration = 2.2;
				frequency = 20;
				distance = 87.6356;
			};
			class CamShakePlayerFire
			{
				power = 0.02;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
		};
	class Sh_120mm_APFSDS_Tracer_Red: Sh_120mm_APFSDS
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		};

//Driver Guns
	class GrenadeBase;
	class G_40mm_HE: GrenadeBase
	{
			explosionSoundEffect = "DefaultExplosion";
			simulation = "shotShell";
			model = "\A3\weapons_f\ammo\UGL_slug";
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
			fuseDistance = 15;
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
	class G_20mm_HE: G_40mm_HE
	{
			hit = 40;
			indirectHit = 6;
			indirectHitRange = 4;
			whistleDist = 20;
			caliber = 1;
			class CamShakeExplode
			{
				power = 4;
				duration = 0.8;
				frequency = 20;
				distance = 75.7771;
			};
			class CamShakeHit
			{
				power = 20;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
	};
};