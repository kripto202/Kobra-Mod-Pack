class cfgpatches
{
	class 442_aat
	{
		author="kripto202";
		requiredaddons[]=
		{
			"A3_Armor_F_Beta"
		};
		requiredVersion=1;
		weapons[]={};
		units[]=
		{
			"442_aat",
			"442_aat_wreck"
		};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_AAA_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
class cfgvehicles
{
	class LandVehicle;
	class wreck_base_f;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class CommanderOptics;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class 442_aat_base: Tank_F
	{
		author="kripto202";
		scope=1;
		scopecurator=1;
		scopearsenal=1;
		displayname="AAT";
		model="\442_aat\aat.p3d";
		picture="";
		icon="\A3\armor_f_gamma\MBT_02\Data\UI\map_MBT_02_ca.paa";
		side=0;
		faction="442_CIS";
		editorSubcategory="SWLG_GAR_tanks";
		insideSoundCoef=0.89999998;
		threat[]={0.80000001,1,0.30000001};
		canFloat=1;
		waterLeakiness=2.5;
		waterAngularDampingCoef=4;
		waterLinearDampingCoefY=4;
		waterLinearDampingCoefX=4;
		waterLinearDampingCoefZ=4;
		engineShiftY=1.2;
		rudderForceCoef=100;
		rudderForceCoefAtMaxSpeed=100;
		waterPPInVehicle=0;
		waterResistanceCoef=0;
		waterSpeedFactor=3000;
		maxFordingDepth=0.5;
		waterResistance=1;
		turnCoef=0.5;
		engineEffectSpeed=5;
		#include "physx.hpp"
		cost=1500000;
		#include "armor.hpp"
		#include "turret.hpp"
		class RenderTargets
		{
		};
		#include "sounds.hpp"
		driverAction="driver_apcwheeled2_out";
		driverInAction="driver_apcwheeled2_in";
		viewDriverInExternal=1;
		gunBeg[]=
		{
			"gun_driver_l",
			"gun_driver_r"
		};
		gunEnd[]=
		{
			"gun_driver_l_2",
			"gun_driver_r_2"
		};
		memoryPointGun[]=
		{
			"gun_driver_l",
			"gun_driver_r"
		};
		selectionFireAnim="zasleh4";
		proxytype="CPDriver";
		proxyIndex=1;
		forcehideDriver=0;
		DriverForceOptics=1;
		weapons[]=
		{
			"442_aat_gmg"
		};
		magazines[]=
		{
			"442_50Rnd_40mm_G_belt",
			"442_50Rnd_40mm_G_belt"
		};
		#include "memorypoints.hpp"
		driver="SWLB_b1_crew_base";
		crew="SWLB_b1_crew_base";
		typicalCargo[]=
		{
			"SWLB_b1_crew_base"
		};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="442_aat_cannon_75mm";
			};
		};
		class Reflectors
		{
		};
		memorypointLRocket="rocketl";
		memorypointRRocket="rocketr";
		memorypointLmissile="rocketl";
		memorypointRmissile="rocketr";
	};
	class 442_aat: 442_aat_base
	{
		displayname="AAT";
		author="kripto202";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"body1",
			"body2",
			"gun"
		};
		hiddenselectionstextures[]=
		{
			"442_aat\data\body1_co.paa",
			"442_aat\data\body2_co.paa",
			"442_aat\data\gun_co.paa"
		};
		class texturesources
		{
			class base
			{
				displayname="Trade Federation";
				author="Legion Studio";
				textures[]=
				{
					"442_aat\data\body1_co.paa",
					"442_aat\data\body2_co.paa",
					"442_aat\data\gun_co.paa"
				};
				factions[]=
				{
					"442_CIS"
				};
			};
			class red: base
			{
				displayname="CIS Red";
				textures[]=
				{
					"442_aat\data\body1_red_co.paa",
					"442_aat\data\body2_red_co.paa",
					"442_aat\data\gun_red_co.paa"
				};
			};
			class black: base
			{
				displayname="CIS Black";
				textures[]=
				{
					"442_aat\data\body1_black_co.paa",
					"442_aat\data\body2_black_co.paa",
					"442_aat\data\gun_black_co.paa"
				};
			};
			class green: base
			{
				displayname="CIS Green";
				textures[]=
				{
					"442_aat\data\body1_green_co.paa",
					"442_aat\data\body2_green_co.paa",
					"442_aat\data\gun_green_co.paa"
				};
			};
			class blue: base
			{
				displayname="CIS Blue";
				textures[]=
				{
					"442_aat\data\body1_blue_co.paa",
					"442_aat\data\body2_blue_co.paa",
					"442_aat\data\gun_blue_co.paa"
				};
			};
			class winter: base
			{
				displayname="CIS Winter";
				textures[]=
				{
					"442_aat\data\body1_base_co.paa",
					"442_aat\data\body2_base_co.paa",
					"442_aat\data\gun_base_co.paa"
				};
			};
		};
	};

	class 442_aat_wreck: Wreck_base_F
	{
		author = "kripto202";
		mapsize = 20;
		editorPreview = "";
		scope = 2;
		scopecurator = 2;
		icon="iconObject_1x2";
		displayname = "AAT (Wrecked)";
		model = "442_aat\aat_wreck.p3d";
		editorCategory = "kobra";
		editorSubcategory = "442_wrecks";
	};
};