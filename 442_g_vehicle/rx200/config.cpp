class cfgpatches
{
    class 442_g_vehicle_rx200
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_rx200_base",
            "442_rx200_arty",
            "442_rx200_aa",
            "442_rx200_wreck"
        };
        weapons[] = {};
    };
};

class SensorTemplatePassiveRadar;
class DefaultVehicleSystemsDisplayManagerLeft
{
    class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
    class components;
};
class VehicleSystemsTemplateLeftPilot : DefaultVehicleSystemsDisplayManagerLeft
{
    class components;
};
class VehicleSystemsTemplateRightPilot : DefaultVehicleSystemsDisplayManagerRight
{
    class components;
};

class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
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
    class 442_rx200_base: tank_f
	{
		author ="Kobra Mod Team";
		scope=1;
		scopecurator=1;
		scopearsenal=1;
		displayname="rx200";
		model="\kobra\442_g_vehicle\rx200\rx200_2";
		picture="kobra\kobra_core\kobra.paa";
		icon="\A3\armor_f_gamma\MBT_02\Data\UI\map_MBT_02_ca.paa";
		side=1;
		faction="kobra_b";
		editorSubcategory="SWLG_GAR_tanks";
		insideSoundCoef=0.89999998;
		threat[]={0.80000001,1,0.30000001};
		canFloat=1;
		crew = "k_ls_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_ls_unit_p2_dc15a"
		};
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
		#include "rx200_physx.hpp"
		cost=1500000;
		#include "rx200_armor.hpp"
		extCameraPosition[]={0,5,-5};
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
		#include "rx200_sounds.hpp"
		#include "rx200_memorypoints.hpp"
		driverAction="driver_apcwheeled2_out";
		driverInAction="driver_apcwheeled2_in";
		viewDriverInExternal=1;
		gunBeg = "";
		gunEnd = "";
		memorypointgun = "";
		weapons[] = {};
		magazines[] = {};

		hiddenselections[]=
		{
			"body1",
			"body2",
			"turret",
			"gun"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_g_vehicle\rx200\data\body1_co.paa",
			"kobra\442_g_vehicle\rx200\data\body2_co.paa",
			"kobra\442_g_vehicle\rx200\data\turret_co.paa",
			"kobra\442_g_vehicle\rx200\data\gun_co.paa"
		};
		class damage
		{
			tex[] = {};
			mat[] = 
			{
				"kobra\442_g_vehicle\rx200\data\body1.rvmat",
				"kobra\442_g_vehicle\rx200\data\body1_damage.rvmat",
				"kobra\442_g_vehicle\rx200\data\body1_destruction.rvmat",
				"kobra\442_g_vehicle\rx200\data\body2.rvmat",
				"kobra\442_g_vehicle\rx200\data\body2_damage.rvmat",
				"kobra\442_g_vehicle\rx200\data\body2_destruction.rvmat",
				"kobra\442_g_vehicle\rx200\data\turret.rvmat",
				"kobra\442_g_vehicle\rx200\data\turret_damage.rvmat",
				"kobra\442_g_vehicle\rx200\data\turret_destruction.rvmat",
				"kobra\442_g_vehicle\rx200\data\gun.rvmat",
				"kobra\442_g_vehicle\rx200\data\gun_damage.rvmat",
				"kobra\442_g_vehicle\rx200\data\gun_destruction.rvmat",
			};
		};

		class simpleobject
		{
			eden = 1;
			verticalOffset=2.4660001;
			verticalOffsetWorld=-0.039999999;
			init="''";
			animate[] = 
			{
				{"maingun", 0},
				{"mainturret", 0},
				{"damagehide", 0},
				{"recoil_source", 0}
			};
		};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="mortar_155mm_AMOS";
			};
		};
	};
	
	class 442_rx200_arty: 442_rx200_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayname = "RX200 (Arty)";
		artilleryScanner=1;
		availableForSupportTypes[]=
		{
			"Artillery"
		};
		#include "rx200_turret.hpp"
	};
	class 442_rx200_aa: 442_rx200_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayname = "RX200 (AA)";
		threat[]={0.80000001,1,1};
		#include "rx200_turret_2.hpp"
	};
	class Wreck_base_F;
	class 442_rx200_wreck: Wreck_base_F
	{
		author = "Kobra Mod Team";
		mapsize = 20;
		editorPreview = "";
		scope = 2;
		scopecurator = 2;
		icon="iconObject_1x2";
		displayname = "RX200 (Wrecked)";
		model = "kobra\442_g_vehicle\rx200\rx200_w.p3d";
		editorCategory = "kobra";
		editorSubcategory = "442_wrecks";
	};
};