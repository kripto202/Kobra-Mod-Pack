class cfgpatches
{
	class 442_weapons_dc17m
	{
		author = "kripto202";
		units[] = {};
		weapons[] = 
		{
			"442_attachment_DC17M_blaster",
			"442_attachment_DC17M_sniper",
			"442_attachment_DC17M_at",
			"442_attachment_scope_DC17M_sniper",
			"442_DC17M"
		};
		requiredaddons[] = {};
	};
};

class cfgmagazines
{
	class CA_magazine;
	class 442_DC17M_Blaster_Mag: CA_Magazine
	{
		author="SW Legion Studios";
		scope=2;
		tracersEvery=1;
		type=16;
		mass=10;
		initSpeed=827;
		picture="\SWLW_clones_spec\data\ui\DC17M_mag_blaster_ui_ca.paa";
		displayName="DC-17M Blaster magazine (60rnd)";
		ammo="442_ammo_762_blue";
		count=60;
		descriptionShort="";
		modelSpecial="\SWLW_clones_spec\DC17M_magazine_blaster.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLW_clones_spec\data\DC17M_co.paa"
		};
	};
	class 442_DC17M_Sniper_Mag: CA_Magazine
	{
		picture="\SWLW_clones_spec\data\ui\DC17M_mag_sniper_ui_ca.paa";
		scope = 2;
		displayName="DC-17M Sniper magazine (5rnd)";
		ammo="442_ammo_127x108_blue";
		initspeed = 820;
		count=5;
		modelSpecial="\SWLW_clones_spec\DC17M_magazine_sniper.p3d";
		modelSpecialIsProxy=1;
		mass = 8;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLW_clones_spec\data\DC17M_co.paa"
		};
	};
	class 442_DC17M_AT_Mag: CA_Magazine
	{
		author="SW Legion Studios";
		scope=2;
		picture="\SWLW_clones_spec\data\ui\DC17M_mag_at_ui_ca.paa";
		displayName="DC-17M Anti Armor grenade";
		count=1;
		modelSpecial="\SWLW_clones_spec\DC17M_magazine_at.p3d";
		modelSpecialIsProxy=1;
		descriptionShort="";
		ammo="442_ammo_at_blue";
		mass = 12;
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class cfgweapons
{
	class itemcore;
	class InventoryMuzzleItem_Base_F;
	class InventoryUnderItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class 442_attachment_DC17M_blaster: ItemCore
	{
		scope=2;
		author="kripto202";
		displayName="DC-17M Blaster attachment";
		picture="\SWLW_clones_spec\data\ui\DC17M_attachment_blaster_ui_ca.paa";
		model="\SWLW_clones_spec\DC17M_attachment_blaster.p3d";
		dispersion=0.00029;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=5;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				artilleryDispersionCoef="0.02f";
				dispersionCoef="0.02f";
				fireLightCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
			};
		};
		memoryPointCamera="eye_attachment";
	};
	class 442_attachment_DC17M_sniper: ItemCore
	{
		scope=2;
		author="SW Legion Studios";
		displayName="DC-17M Sniper attachment";
		picture="\SWLW_clones_spec\data\ui\DC17M_attachment_sniper_ui_ca.paa";
		model="\SWLW_clones_spec\DC17M_attachment_sniper.p3d";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=5;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				artilleryDispersionCoef="0.01";
				dispersionCoef="0.005f";
				fireLightCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				recoilCoef="0.05f";
				recoilProneCoef="0.05f";
			};
		};
		dispersion=1e-007;
		memoryPointCamera="eye_attachment";
		modelOptics="\SWLW_clones_spec\DC17M_attachment_sniper_optic.p3d";
	};
	class 442_attachment_DC17M_at: ItemCore
	{
		scope=2;
		author="SW Legion Studios";
		displayName="DC-17M Anti-Armor attachment";
		picture="\SWLW_clones_spec\data\ui\DC17M_attachment_at_ui_ca.paa";
		model="\SWLW_clones_spec\DC17M_attachment_at.p3d";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=5;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				artilleryDispersionCoef="1.0f";
				dispersionCoef="0.1f";
				fireLightCoef="2.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
			};
		};
		memoryPointCamera="eye_attachment";
		class opticModes
		{
			class iron_sight
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					""
				};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.375;
				opticsZoomMax=1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye_attachment";
				visionMode[]={};
				distanceZoomMin=300;
				distanceZoomMax=300;
			};
		};
	};
	class 442_attachment_scope_DC17M_sniper: ItemCore
	{
		displayName="DC-17M Sniper scope";
		author="SW Legion Studios";
		picture="\SWLW_clones_spec\data\DC17M_attachment_sniper_optic_ca.paa";
		model="\SWLW_clones_spec\DC17M_attachment_scope_sniper.p3d";
		scope=2;
		descriptionShort="";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
			opticType=1;
			optics=1;
			modelOptics="\SWLW_clones_spec\DC17M_attachment_sniper_optic.p3d";
			class OpticsModes
			{
				class Scope
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsZoomMin=0.0625;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=1200;
					discretefov[]={0.125,0.0625};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class Sight
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="sightView";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
			};
		};
		inertia=0.1;
	};
	
	class rifle_long_base_f;
	class 442_rifle_base: Rifle_Long_Base_F
	{
		author="kripto202";
		scope=1;
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
		class GunParticles;
		class AnimationSources;
	};
	class 442_DC17M: 442_rifle_base
	{
		author="kripto202";
		displayName="DC-17M Blaster";
		scope=2;
		picture="\SWLW_clones_spec\data\ui\DC17M_ui.paa";
		model="\SWLW_clones_spec\DC17M_base.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLW_clones_spec\data\DC17m_co.paa"
		};
		magazineReloadSwitchPhase=0.40000001;
		ace_overheating_mrbs=100000;
		ace_overheating_slowdownFactor=1e-006;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.2;
		class Library
		{
			libTextDesc="";
		};
		magazines[]=
		{
			"442_DC17M_Blaster_Mag",
			"442_DC17M_Sniper_Mag",
			"442_DC17M_AT_Mag"
		};
		reloadMagazineSound[]=
		{
			"SWLW_clones_spec\sounds\DC17M_reload.wss",
			0.56234133,
			1,
			30
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\SWLW_clones_spec\anims\DC17M_handanim.rtm"
		};
		reloadAction="ReloadMagazine";
		modes[]=
		{
			"FullAuto",
			"Single"
		};
		initSpeed=-1;
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\SWLW_clones_spec\sounds\DC17M_sniper_fire.wss",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\SWLW_clones_spec\sounds\DC17M_sniper_fire.wss",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"\SWLW_clones_spec\sounds\DC17M_sniper_fire.wss",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=2;
			dispersion=0.15000001;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.1;
			dispersion=0.2;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		recoil="recoil_smg_03";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"SWLW_attachment_scope_DC17M_sniper"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"442_attachment_DC17M_blaster",
					"442_attachment_DC17M_sniper",
					"442_attachment_DC17M_at"
				};
			};
		};
	};
};