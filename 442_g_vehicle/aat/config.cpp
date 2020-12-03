class cfgpatches
{
    class 442_g_vehicle_aat
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_aat_base",
            "442_aat",
            "442_aat_red",
            "442_aat_black",
            "442_aat_green",
            "442_aat_blue",
            "442_aat_white",
            "442_aat_wreck"
        };
        weapons[] = {};
    };
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
    class 442_aat_base: Tank_F
	{
		author = "Kobra Mod Team";
		scope=1;
		scopecurator=1;
		scopearsenal=1;
		displayname="AAT";
		model="\kobra\442_g_vehicle\aat\aat.p3d";
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
		rudderForceCoefAtMaxSpeed=100;
		waterPPInVehicle=0;
		waterResistanceCoef=0;
		waterSpeedFactor=3000;
		maxFordingDepth=0.5;
		waterResistance=1;
		turnCoef=0.5;
		engineEffectSpeed=5;
		#include "aat_physx.hpp"
		cost=1500000;
		#include "aat_armor.hpp"
		#include "aat_turret.hpp"
		class RenderTargets
		{
		};
		#include "aat_sounds.hpp"
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
			"442_40_50rnd_he_red_mag",
			"442_40_50rnd_he_red_mag"
		};
		#include "aat_memorypoints.hpp"
		driver="k_swla_unit_b1_pilot_e5";
		crew = "k_swla_unit_b1_e5";
		typicalCargo[]=
		{
			"k_swla_unit_b1_e5"
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
		author = "Kobra Mod Team";
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
			"kobra\442_g_vehicle\aat\data\body1_co.paa",
			"kobra\442_g_vehicle\aat\data\body2_co.paa",
			"kobra\442_g_vehicle\aat\data\gun_co.paa"
		};
		class texturesources
		{
			class base
			{
				displayname="Trade Federation";
				author = "KOBRA Mod Team";
				textures[]=
				{
					"kobra\442_g_vehicle\aat\data\body1_co.paa",
					"kobra\442_g_vehicle\aat\data\body2_co.paa",
					"kobra\442_g_vehicle\aat\data\gun_co.paa"
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
					"kobra\442_g_vehicle\aat\data\body1_red_co.paa",
					"kobra\442_g_vehicle\aat\data\body2_red_co.paa",
					"kobra\442_g_vehicle\aat\data\gun_red_co.paa"
				};
			};
			class black: base
			{
				displayname="CIS Black";
				textures[]=
				{
					"kobra\442_g_vehicle\aat\data\body1_black_co.paa",
					"kobra\442_g_vehicle\aat\data\body2_black_co.paa",
					"kobra\442_g_vehicle\aat\data\gun_black_co.paa"
				};
			};
			class green: base
			{
				displayname="CIS Green";
				textures[]=
				{
					"kobra\442_g_vehicle\aat\data\body1_green_co.paa",
					"kobra\442_g_vehicle\aat\data\body2_green_co.paa",
					"kobra\442_g_vehicle\aat\data\gun_green_co.paa"
				};
			};
			class blue: base
			{
				displayname="CIS Blue";
				textures[]=
				{
					"kobra\442_g_vehicle\aat\data\body1_blue_co.paa",
					"kobra\442_g_vehicle\aat\data\body2_blue_co.paa",
					"kobra\442_g_vehicle\aat\data\gun_blue_co.paa"
				};
			};
			class winter: base
			{
				displayname="CIS Winter";
				textures[]=
				{
					"kobra\442_g_vehicle\aat\data\body1_base_co.paa",
					"kobra\442_g_vehicle\aat\data\body2_base_co.paa",
					"kobra\442_g_vehicle\aat\data\gun_base_co.paa"
				};
			};
		};
	};
	class 442_aat_red: 442_aat
	{
		displayname = "AAT (Red)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_g_vehicle\aat\data\body1_red_co.paa",
			"kobra\442_g_vehicle\aat\data\body2_red_co.paa",
			"kobra\442_g_vehicle\aat\data\gun_red_co.paa"
		};
	};
	class 442_aat_black: 442_aat
	{
		displayname = "AAT (Black)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_g_vehicle\aat\data\body1_black_co.paa",
			"kobra\442_g_vehicle\aat\data\body2_black_co.paa",
			"kobra\442_g_vehicle\aat\data\gun_black_co.paa"
		};
	};
	class 442_aat_green: 442_aat
	{
		displayname = "AAT (Green)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_g_vehicle\aat\data\body1_green_co.paa",
			"kobra\442_g_vehicle\aat\data\body2_green_co.paa",
			"kobra\442_g_vehicle\aat\data\gun_green_co.paa"
		};
	};
	class 442_aat_blue: 442_aat
	{
		displayname = "AAT (Blue)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_g_vehicle\aat\data\body1_blue_co.paa",
			"kobra\442_g_vehicle\aat\data\body2_blue_co.paa",
			"kobra\442_g_vehicle\aat\data\gun_blue_co.paa"
		};
	};
	class 442_aat_white: 442_aat
	{
		displayname = "AAT (Winter)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_g_vehicle\aat\data\body1_base_co.paa",
			"kobra\442_g_vehicle\aat\data\body2_base_co.paa",
			"kobra\442_g_vehicle\aat\data\gun_base_co.paa"
		};
	};
	class Wreck_base_F;
	class 442_aat_wreck: Wreck_base_F
	{
		author = "Kobra Mod Team";
		mapsize = 20;
		editorPreview = "";
		scope = 2;
		scopecurator = 2;
		icon="iconObject_1x2";
		displayname = "AAT (Wrecked)";
		model = "kobra\442_g_vehicle\aat\aat_wreck.p3d";
		editorCategory = "kobra";
		editorSubcategory = "442_wrecks";
	};
};