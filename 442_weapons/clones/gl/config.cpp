class CfgPatches
{
	class 442_weapons_gl
	{
		author="SW Legion Studios";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"SWLW_main",
			"SWLW_clones",
			"SWLW_clones_rifles"
		};
		requiredVersion=0.1;
		units[]=
		{
			"SWLW_GH_GL"
		};
		weapons[]=
		{
			"442_GL",
			"442_gl_desert",
			"442_gl_woodland",
			"442_gl_snow"
		};
	};
};
class CfgMagazines
{
	class SWLW_mag_base;
	class SWLW_mag_40mm_10rnd;
	class 442_mag_40mm_1rnd: SWLW_mag_base
	{
		scope=2;
		displayname="Explosive Plasma Cell (1rnd)";
		initspeed=185;
		ammo="442_ammo_40mm_blue";
		count=1;
		model="\SWLW_clones\machineguns\Z6\Z6_g_mag.p3d";
		picture="\SWLW_clones\machineguns\Z6\data\ui\Z6_g_mag_ui.paa";
	};
	class 442_mag_40mm_6rnd: 442_mag_40mm_1rnd
	{
		scope=2;
		displayname="Exposive Plasma Cell (3rnd)";
		ammo="442_ammo_40mm_blue";
		count=6;
		initspeed=80;
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class UGL_F;
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class Rifle_Long_Base_F;
	class 442_rifle_base: Rifle_Long_Base_F
	{
		author="SW Legion Studios";
		scope=1;
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
		class GunParticles;
		class AnimationSources;
	};
	class 442_GL: 442_rifle_base
	{
		scope=2;
		model="442_weapons\clones\gl\gl.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"sight"
		};
		hiddenselectionstextures[] = 
		{
			"\SWLW_clones\rifles\gl\data\gl_co.paa",
			"\442_weapons\clones\dc15a\data\optic\training_blue.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\swlw_clones\rifles\gl\data\ui\GL_ui.paa";
		magazines[]=
		{
			"442_mag_40mm_6rnd"
		};
		displayname="Grenade launcher";
		descriptionShort="";
		selectionFireAnim="zasleh";
		class Library
		{
			libTextDesc="";
		};
		drySound[]=
		{
			"",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"SWLW_clones\pistols\dc17\sounds\DC17_reload.wss",
			0.56234133,
			1,
			30
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		cameraDir="OP_look";
		discreteinitindex = 0;
		discretedistance[] = {100,200,300,400};
		discreteDistanceCameraPoint[]=
		{
			"OP_eye",
			"OP_eye2",
			"OP_eye3",
			"OP_eye4"
		};
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
					"SWLW_clones\rifles\gl\sounds\gl",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"SWLW_clones\rifles\gl\sounds\gl",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"SWLW_clones\rifles\gl\sounds\gl",
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
			reloadTime=0.15000001;
			dispersion=0.0030149999;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		class EGLM: UGL_F
		{
			displayName="3rnd HE launcher";
			descriptionShort="";
			useModelOptics=0;
			useExternalOptic=0;
			initspeed=75;
			magazines[]=
			{
				"SWLW_mag_40mm_3rnd"
			};
			magazineWell[]={};
			cameraDir="OP_look";
			discreteDistance[]={100};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=1;
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
						"SWLW_clones\rifles\gl\sounds\gl",
						1,
						1,
						1800
					};
					begin2[]=
					{
						"SWLW_clones\rifles\gl\sounds\gl",
						1,
						1,
						1800
					};
					begin3[]=
					{
						"SWLW_clones\rifles\gl\sounds\gl",
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
				reloadTime=0.15000001;
				dispersion=0.0030149999;
				minRange=5;
				minRangeProbab=0.30000001;
				midRange=25;
				midRangeProbab=0.60000002;
				maxRange=50;
				maxRangeProbab=0.1;
				aiRateOfFire=2;
				aiRateOfFireDistance=25;
			};
		};
		muzzles[]=
		{
			"this"
		};
		initspeed=80;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=180;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class SWLW_GH_GL: Weapon_Base_F
	{
		author="SW Legion Studios";
		displayName="Grenade launcher";
		scope=2;
		class TransportWeapons
		{
			class SWLW_GL
			{
				count=1;
				weapon="SWLW_GL";
			};
		};
		class TransportMagazines
		{
			class SWLW_GL_Mag
			{
				count=1;
				magazine="SWLW_mag_40mm_6rnd";
			};
		};
	};
};
