class cfgpatches
{
	class 442_ammo
	{
		author = "kripto202";
		units[]={};
		weapons[]={};
		requiredversion = 0.1;
		requiredAddons[] = {};
	};
};

class cfgammo
{
	class BulletCore;
	class GrenadeBase;
	class BulletBase: BulletCore
	{
		class SuperSonicCrack;
	};
	class 442_ammo_base: BulletBase
	{
		hit=8;
		indirecthit=0;
		indirecthitrange=0;
		model="SWLW_main\Effects\laser_blue.p3d";
		lightcolor[]={0.25,0.25,0.5};
		flaresize=5;
		tracerscale=1.1;
		effectflare="FlareShell";
		tracerstarttime=0;
		tracerendtime=10;
		nvgonly=0;
		typicalspeed=920;
		airlock=1;
		irtarget=1;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionradiushit=8;
		aiAmmoUsageFlags="64";
		audiblefire=35;
		brightness=1000;
		explosionSoundEffect="DefaultExplosion";
		cratereffects="exploammolasercrater";
		explosioneffects="ExploAmmoExplosion";
		effectfly="442_plasma_blue";
		airfriction=-0.0012000001;
		waterFriction=-0.30000001;
		caliber=0.86956501;
		cost=1;
		muzzleeffect="";
		deflecting=0;
		inittime=0;
		timetolive=6;
		coefgravity=1;
		supersoniccracknear[]={};
		supersoniccrackfar[]={};
		class SuperSonicCrack{};
		bulletFly[]=
		{
			"bulletFly1",
			0.082999997,
			"bulletFly2",
			0.082999997,
			"bulletFly3",
			0.082999997,
			"bulletFly4",
			0.082999997,
			"bulletFly5",
			0.082999997,
			"bulletFly6",
			0.082999997,
			"bulletFly7",
			0.082999997,
			"bulletFly8",
			0.082999997,
			"bulletFly9",
			0.082999997,
			"bulletFly10",
			0.082999997,
			"bulletFly11",
			0.082999997,
			"bulletFly12",
			0.082999997
		};
		bulletFly1[]=
		{
			"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss",
			1.58,
			1,
			30
		};
		bulletFly10[]=
		{
			"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss",
			1.58,
			1,
			30
		};
		bulletFly11[]=
		{
			"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss",
			1.58,
			1,
			30
		};
		bulletFly12[]=
		{
			"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss",
			1.58,
			1,
			30
		};
		bulletFly2[]=
		{
			"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss",
			1.58,
			1,
			30
		};
		bulletFly3[]=
		{
			"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss",
			1.58,
			1,
			30
		};
		bulletFly4[]=
		{
			"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss",
			2.2387199,
			1,
			100
		};
		bulletFly5[]=
		{
			"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss",
			2.2387199,
			1,
			100
		};
		bulletFly6[]=
		{
			"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss",
			2.2387199,
			1,
			100
		};
		bulletFly7[]=
		{
			"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss",
			2.2387199,
			1,
			100
		};
		bulletFly8[]=
		{
			"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss",
			2.2387199,
			1,
			100
		};
		bulletFly9[]=
		{
			"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss",
			2.2387199,
			1,
			100
		};
		soundHit1[]=
		{
			"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss",
			1.9952624,
			1,
			120
		};
		soundHit2[]=
		{
			"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss",
			1.9952624,
			1,
			120
		};
		soundHit3[]=
		{
			"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss",
			1.9952624,
			1,
			120
		};
		soundHit4[]=
		{
			"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss",
			1.9952624,
			1,
			120
		};
		soundHit5[]=
		{
			"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss",
			1.9952624,
			1,
			120
		};
		soundHit6[]=
		{
			"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss",
			1.9952624,
			1,
			120
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.2,
			"soundHit2",
			0.2,
			"soundHit3",
			0.2,
			"soundHit4",
			0.1,
			"soundHit5",
			0.15000001,
			"soundHit6",
			0.15000001
		};
		class HitEffects
		{
			default_mat = "442_plasma_impact";
			Hit_Foliage_Banana = "442_plasma_impact";
			Hit_Foliage_Dead = "442_plasma_impact";
			Hit_Foliage_green = "442_plasma_impact";
			Hit_Foliage_Green_big = "442_plasma_impact";
			Hit_Foliage_Palm = "442_plasma_impact";
			Hit_Foliage_Pine = "442_plasma_impact";
			hitBuilding = "442_plasma_impact";
			hitConcrete = "442_plasma_impact";
			hitFoliage = "442_plasma_impact";
			hitGlass = "442_plasma_impact";
			hitGlassArmored = "442_plasma_impact";
			hitGroundHard = "442_plasma_impact";
			hitGroundRed = "442_plasma_impact";
			hitGroundSoft = "442_plasma_impact";
			hitHay = "442_plasma_impact";
			hitMan = "442_plasma_impact";
			hitMetal = "442_plasma_impact";
			hitMetalPlate = "442_plasma_impact";
			hitPlastic = "442_plasma_impact";
			hitRubber = "442_plasma_impact";
			hitTyre = "442_plasma_impact";
			hitVirtual = "442_plasma_impact";
			hitWater = "442_plasma_impact";
			hitWood = "442_plasma_impact";
		};
	};
	class ShotgunBase;
	class 442_shotgun_base: ShotgunBase
	{
		effectfly="442_plasma_blue";
		simulation = "shotSpread";
		model="SWLW_main\Effects\laser_blue.p3d";
		lightcolor[]={0.25,0.25,0.5};
		flaresize=5;
		tracerscale=1.1;
		effectflare="FlareShell";
		tracerstarttime=0;
		tracerendtime=10;
		class HitEffects
		{
			default_mat = "442_plasma_impact";
			Hit_Foliage_Banana = "442_plasma_impact";
			Hit_Foliage_Dead = "442_plasma_impact";
			Hit_Foliage_green = "442_plasma_impact";
			Hit_Foliage_Green_big = "442_plasma_impact";
			Hit_Foliage_Palm = "442_plasma_impact";
			Hit_Foliage_Pine = "442_plasma_impact";
			hitBuilding = "442_plasma_impact";
			hitConcrete = "442_plasma_impact";
			hitFoliage = "442_plasma_impact";
			hitGlass = "442_plasma_impact";
			hitGlassArmored = "442_plasma_impact";
			hitGroundHard = "442_plasma_impact";
			hitGroundRed = "442_plasma_impact";
			hitGroundSoft = "442_plasma_impact";
			hitHay = "442_plasma_impact";
			hitMan = "442_plasma_impact";
			hitMetal = "442_plasma_impact";
			hitMetalPlate = "442_plasma_impact";
			hitPlastic = "442_plasma_impact";
			hitRubber = "442_plasma_impact";
			hitTyre = "442_plasma_impact";
			hitVirtual = "442_plasma_impact";
			hitWater = "442_plasma_impact";
			hitWood = "442_plasma_impact";
		};
	};
	
	#include "plasma_blue.hpp"
	#include "plasma_red.hpp"
	#include "plasma_yellow.hpp"
	#include "plasma_green.hpp"
	#include "rocket.hpp"
};

class cfgMagazines
{
	class UGL_FlareRed_F;
	class 1Rnd_Smoke_Grenade_shell;
	class 1Rnd_SmokeRed_Grenade_shell;
	class CA_Magazine;
	
	class 442_mag_base: CA_Magazine
	{
		author="kripto202";
		scope=1;
		displayname="all round base";
		initspeed=900;
		nameSound="magazine";
		maxLeadSpeed=25;
		mass=8;
		reloadaction="";
		useactiontitle="";
		modelspecial="";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		tracersevery=1;
		picture="";
		type=256;
	};
};