class cfgpatches
{
	class 442_weapons
	{
		author = "kripto202";
		units[]={};
		weapons[]={};
		requiredversion = 0.1;
		requiredAddons[] = {};
	};
};

class cfgCloudlets
{
	class default;
	class 442_sparks_1: default
	{
		interval=0.00089999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=2.5;
		// moveVelocity[]=
		// {
			// "(- inDirX * 2 + surfNormalX / 2) * inSpeed / 200",
			// "( - inDirY * 2 + surfNormalY / 2) * inSpeed / 200",
			// "( - inDirZ * 2 + surfNormalZ / 2) * inSpeed / 200"
		// };
		moveVelocity[]=
		{
			0,
			1,
			0
		};
		rotationVelocity=1;
		weight=100;
		volume=0.0099999998;
		rubbing=0.30000001;
		size[]={0.12,0};
		sizeCoef=1;
		color[]=
		{
			{1,0.60000002,0.40000001,-50}
		};
		colorCoef[]={1,1,1,1};
		emissiveColor[]=
		{
			{10,6,4,1}
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.1;
		lifeTimeVar=5;
		position[]={0,0,0};
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		// moveVelocityVar[]={1,3,1};
		moveVelocityVar[]={1,1,1};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class 442_sparks_2: default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.039000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.44999999,0.22499999,0};
		sizeCoef=1;
		color[]=
		{
			{1,0.60000002,0.40000001,-50}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.02;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0.029999999;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class 442_sparks_3: default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.039000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.44999999,0.22499999,0};
		sizeCoef=1;
		color[]=
		{
			{1,0.60000002,0.40000001,-50}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.02;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0.029999999;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class 442_sparks_4: default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.039000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.44999999,0.22499999,0};
		sizeCoef=1;
		color[]=
		{
			{1,0.60000002,0.40000001,-50}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.02;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0.029999999;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
};

class CfgLights
{
	class 442_plasmaBlue
	{
		color[]={0,0,1,1};
		ambient[]={0,0,1,1};
		brightness=10;
		intensity=10000;
		drawLight=0;
		blinking = 1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=2.2;
			hardLimitStart=500;
			hardLimitEnd=1000;
		};
		position[]={0,3.5,0};
		diffuse[]={0,0,1};
	};
	class 442_plasmaYellow: 442_plasmaBlue
	{
		color[]={1,1,0,1};
		ambient[]={1,1,0,1};
		diffuse[]={1,1,0};
	};
	class 442_plasmaRed: 442_plasmaBlue
	{
		color[]={1,0,0,1};
		ambient[]={1,0,0,1};
		diffuse[]={1,0,0};
	};
	class 442_plasmaGreen: 442_plasmaBlue
	{
		color[]={0,1,0,1};
		ambient[]={0,1,0,1};
		diffuse[]={0,1,0};
	};
	class 442_sparks
	{
		diffuse[]={1,0.80000001,0.80000001};
		color[]={1,0.80000001,0.80000001};
		ambient[]={0,0,0,0};
		brightness=50;
		size=1;
		intensity=1000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=1;
			hardLimitStart=40;
			hardLimitEnd=80;
		};
		position[]={0,0,0};
	};
};

class 442_plasma_blue
{
	class plasma_blue
	{
		simulation="light";
		type="442_plasmaBlue";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
};
class 442_plasma_red
{
	class plasma_blue
	{
		simulation="light";
		type="442_plasmaRed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
};
class 442_plasma_yellow
{
	class plasma_yellow
	{
		simulation="light";
		type="442_plasmaYellow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
};
class 442_plasma_green
{
	class plasma_green
	{
		simulation="light";
		type="442_plasmaGreen";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
};

class 442_plasma_impact
{
	class SparksLight
	{
		simulation="light";
		type="442_sparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class ImpactSparks1
	{
		simulation="particles";
		type="442_sparks_1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	// class ImpactSparks2
	// {
		// simulation="particles";
		// type="442_sparks_2";
		// position[]={0,0,0};
		// intensity=1;
		// interval=1;
		// lifeTime=0.2;
	// };
	// class ImpactSparks3
	// {
		// simulation="particles";
		// type="442_sparks_3";
		// position[]={0,0,0};
		// intensity=1;
		// interval=1;
		// lifeTime=0.2;
	// };
	// class ImpactSparks4
	// {
		// simulation="particles";
		// type="442_sparks_4";
		// position[]={0,0,0};
		// intensity=1;
		// interval=1;
		// lifeTime=0.2;
	// };
};
class 442_plasma_he_impact
{
	class SparksLight
	{
		simulation="light";
		type="442_sparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class ImpactSparks1
	{
		simulation="particles";
		type="442_sparks_1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactSparks2
	{
		simulation="particles";
		type="442_sparks_2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactSparks3
	{
		simulation="particles";
		type="442_sparks_3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactSparks4
	{
		simulation="particles";
		type="442_sparks_4";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class grenadeExp1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
		position[] = {0,0,0};
		simulation = "particles";
		type = "GrenadeExp";
	};
	class grenadeSmoke1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0,0,0};
		simulation = "particles";
		type = "GrenadeSmoke1";
	};
};