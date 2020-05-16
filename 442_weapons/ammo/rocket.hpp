class MissileBase;
class 442_nlaw_AT: MissileBase
{
	model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";
	submunitionAmmo = "ammo_Penetrator_Vorona";
	submunitionDirectionType = "SubmunitionModelDirection";
	submunitionInitSpeed = 1000;
	submunitionParentSpeedCoef = 0;
	submunitionInitialOffset[] = {0, 0, -0.2};
	triggerOnImpact = 1;
	deleteParentWhenTriggered = 0;
	hit = 150;
	warheadName = "TandemHEAT";
	indirectHit = 25;
	indirectHitRange = 3.5;
	explosive = 0.8;
	cost = 500;
	aiAmmoUsageFlags = "128 + 512";
	lockType = 1;
	manualControl = 1;
	manualControlOffset = 80;
	missileManualControlCone = 60;
	maxControlRange = 2000;
	weaponLockSystem = 0;
	explosionSoundEffect = "DefaultExplosion";
	effectsMissileInit = "RocketBackEffectsRPG";
	initTime = 0.05;
	trackOversteer = 0.5;
	trackLead = 0.85;
	timeToLive = 30;
	maneuvrability = 6;
	simulationStep = 0.002;
	airFriction = 0.06;
	sideAirFriction = 0.09;
	maxSpeed = 200;
	thrustTime = 1;
	thrust = 70;
	fuseDistance = 50;
	effectsMissile = "missile2";
	whistleDist = 4;
	class CamShakeExplode
	{
		power = 11;
		duration = 1.4;
		frequency = 20;
		distance = 91.3296;
	};
	class CamShakeHit
	{
		power = 110;
		duration = 0.6;
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