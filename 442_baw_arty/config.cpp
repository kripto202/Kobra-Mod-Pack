class cfgpatches
{
	class 442_baw_arty
	{
		requiredAddons[]=
		{
			"A3_Armor_F_Beta",
			"442_aat"
		};
		weapons[]={};
		units[]=
		{
			"442_baw_arty",
			"442_baw_arty_static",
			"442_baw_arty_wreck"
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
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Eventhandlers;
class CfgVehicles
{
	class NonStrategic;
	class StaticShip;
	class Ship;
	class Building;
	class House_F;
	class FloatingStructure_F;
	class thingx;
	class LandVehicle;
	class Motorcycle;
	class FlagCarrier;
	class Items_base_F;
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
	class 442_baw_arty_static: Items_base_F
	{
		author="kripto202";
		model="\442_baw_arty\baw_arty.p3d";
		reversed=0;
		scope=2;
		scopecurator=2;
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_item";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		displayname="BAW Artillery Hovery Tank (Static)";
		mapsize=3000;
		destrType=0;
		featureType=2;
		hiddenselections[] = 
		{
			"body",
			"eyes",
			"gun"
		};
		hiddenselectionstextures[] = 
		{
			"442_baw_arty\data\body_co.paa",
			"442_baw_arty\data\eyes_co.paa",
			"442_baw_arty\data\gun_co.paa",
		};
	};

	class 442_baw_arty_base: tank_f
	{
		author="kripto202";
		scope=1;
		scopecurator=1;
		scopearsenal=1;
		displayname="BAW Artillery Hover Tank";
		model="\442_baw_arty\baw_arty_2.p3d";
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
		forceHideDriver=1;
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

		weaponsGroup1=2;
		weaponsGroup2="1 + 4";
		weaponsGroup3="8 + 16 +	32";
		weaponsGroup4="64 + 128";

		class RenderTargets
		{
		};
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG",
				"TI"
			};
			initFov=0.85000002;
			minFov=0.85000002;
			maxFov=0.85000002;
		};
		#include "sounds.hpp"
		#include "memorypoints.hpp"
		driverAction="Disabled";
		driverInAction="Disabled";
		viewDriverInExternal=1;
		gunBeg = "";
		gunEnd = "";
		memorypointgun = "";
		weapons[] = {};
		magazines[] = {};

		isUav=1;
		uavCameraDriverPos="driver_view";
		uavCameraDriverDir="driver_view_dir";
		crew="O_UAV_AI";

		artilleryScanner=1;
		availableForSupportTypes[]=
		{
			"Artillery"
		};

		hiddenselections[] = 
		{
			"body",
			"eyes",
			"gun"
		};
		hiddenselectionstextures[] = 
		{
			"442_baw_arty\data\body_co.paa",
			"442_baw_arty\data\eyes_co.paa",
			"442_baw_arty\data\gun_co.paa",
		};

		class simpleobject
		{
			animate[] = 
			{
				{"maingun", 0},
				{"mainturret", 0},
				{"damagehide", 0}
			};
		};
	};

	class 442_baw_arty: 442_baw_arty_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
	};

	class Wreck_base_F;
	class 442_baw_arty_wreck: Wreck_base_F
	{
		author = "kripto202";
		mapsize = 20;
		editorPreview = "";
		scope = 2;
		scopecurator = 2;
		icon="iconObject_1x2";
		displayname = "BAW Artillery Hover Tank (Wrecked)";
		model = "442_baw_arty\baw_arty_w.p3d";
		editorCategory = "kobra";
		editorSubcategory = "442_wrecks";
	};
};