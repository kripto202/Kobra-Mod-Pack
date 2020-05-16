class cfgpatches
{
	class 442_weapons_rps6
	{
		author = "kripto202";
		requiredaddons[] = {};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = 
		{
			"442_RPS6"
		};
	};
};

class cfgmagazines
{
	class CA_Magazine;
	class 442_rps6_heat_mag: CA_Magazine
	{
		author = "kripto202";
		scope = 2;
		displayname = "RPS-6 HEAT";
		displaynameshort = "HEAT";
		model = "\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT_F_item.p3d";
		picture = "\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HEAT_F_ca.paa";
		initSpeed = 40;
		count = 1;
		ammo = "442_nlaw_AT";
		type = "2 * 256";
		mass = 60;
	};
};
class Mode_SemiAuto;
class cfgweapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class 442_RPS6: Launcher_Base_F
	{
		author="kripto202";
		_generalMacro="launch_RPG32_F";
		scope=2;
		displayName="RPS-6 rocket launcher";
		model="SWLW_clones\launchers\rps6\RPS6.p3d";
		picture="\SWLW_clones\launchers\rps6\data\ui\RPS6_ui.paa";
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"\442_weapons\clones\rps6\data\kobra_rps6.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\SWLW_clones\launchers\rps6\anims\RPS6_handanim.rtm"
		};
		reloadAction="ReloadRPG";
		recoil="recoil_empty";
		maxZeroing=800;
		weaponInfoType = "RscOpticsRangeFinderVorona";
		modelOptics = "A3\Weapons_F_Tank\acc\reticle_Vorona.p3d";
		opticsZoomMin=0.0623;
		opticsZoomMax=0.0623;
		opticsZoomInit=0.0623;
		cameraDir="look";
		ace_overpressure_angle=45;
		ace_overpressure_damage=0.69999999;
		ace_overpresssure_priority=1;
		ace_overpressure_range=5;
		ace_nlaw_enabled = 1;
		
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		class OpticsModes
		{
			class optic
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsZoomMin = 0.0875;
				opticsZoomMax = 0.0875;
				opticsZoomInit = 0.0875;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				cameraDir = "look";
				visionMode[] = {"Normal", "NVG"};
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
			};
		};
		magazines[]=
		{
			"442_rps6_heat_mag"
		};
		modes[]=
		{
			"Single",
			"Overfly"
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw", 1.99526, 1, 1800};
				soundBegin[] = {"begin1", 1};
				soundSetShot[] = {"Launcher_NLAW_Shot_SoundSet", "Launcher_NLAW_Tail_SoundSet"};
			};
			recoil = "recoil_single_nlaw";
			aiRateOfFire = 7;
			aiRateOfFireDistance = 500;
			minRange = 25;
			minRangeProbab = 0.8;
			midRange = 50;
			midRangeProbab = 0.8;
			maxRange = 790;
			maxRangeProbab = 0.8;
			ace_missileGuidance_attackProfile = "ace_nlaw_directAttack";
		};
		class Overfly: Single
		{
			textureType = "overfly";
			displayName = "Overfly Top Attack";
			aiRateOfFire = 7;
			aiRateOfFireDistance = 500;
			minRange = 50;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.95;
			maxRange = 790;
			maxRangeProbab = 0.95;
			ace_missileGuidance_attackProfile = "ace_nlaw_overflyTopAttack";
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",
			0.44668359,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",
			0.25118864,
			1,
			10
		};
		canLock=1;
		weaponLockDelay=3;
		lockAcquire=0;
		inertia=1;
		aimTransitionSpeed=0.5;
		dexterity=1;
		cmimmunity = 0.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=150;
		};
		descriptionShort="";
		class Library
		{
			libTextDesc="";
		};
	};
};