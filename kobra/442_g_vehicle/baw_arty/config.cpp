class cfgpatches
{
    class 442_g_vehicle_baw_arty
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_baw_arty_base",
            "442_baw_arty",
            "442_baw_arty_wreck"
        };
        weapons[] = {};
    };
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

class cfgvehicles 
{
    class Land;
    class LandVehicle: Land
	{
		class NewTurret;
	};
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
				class Components;
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class CargoTurret;
		class RCWSOptics;
		class ViewGunner;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
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

    class 442_baw_arty_base: tank_f
	{
		author = "Kobra Mod Team";
		scope=1;
		scopecurator=1;
		scopearsenal=1;
		displayname="BAW Artillery Hover Tank";
		model="\kobra\442_g_vehicle\baw_arty\baw_arty_2.p3d";
		picture="kobra\kobra_core\kobra.paa";
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
		#include "baw_arty_physx.hpp"
		cost=1500000;
		#include "baw_arty_armor.hpp"
		#include "baw_arty_turret.hpp"
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
		#include "baw_arty_sounds.hpp"
		#include "baw_arty_memorypoints.hpp"
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
		typicalCargo[]=
		{
			"O_UAV_AI"
		};

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
			"kobra\442_g_vehicle\baw_arty\data\body_co.paa",
			"kobra\442_g_vehicle\baw_arty\data\eyes_co.paa",
			"kobra\442_g_vehicle\baw_arty\data\gun_co.paa",
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
		author = "Kobra Mod Team";
		mapsize = 20;
		editorPreview = "";
		scope = 2;
		scopecurator = 2;
		icon="iconObject_1x2";
		displayname = "BAW Artillery Hover Tank (Wrecked)";
		model = "kobra\442_g_vehicle\baw_arty\baw_arty_w.p3d";
		editorCategory = "kobra";
		editorSubcategory = "442_wrecks";
	};
};