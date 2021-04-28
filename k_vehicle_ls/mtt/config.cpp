class cfgpatches
{
    class k_vehicle_ls_mtt
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_mtt",
            "442_mtt_wreck"
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
	class Wreck_base_F;
    class 442_mtt: Tank_F
	{
		author ="Kobra Mod Team";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		displayname="MTT";
		model="\ls_vehicles_ground\mtt\ls_ground_mtt.p3d";
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
		extCameraPosition[]={0,10,-23};

		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		transportSoldier = 36;
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36};
		cargoactions[] = 
		{
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
		};

		hiddenselections[]=
		{
			"body1",
			"body2",
			"door"
		};
		hiddenselectionstextures[]=
		{
			"kobra\k_vehicle_ls\mtt\data\body1_co.paa",
			"kobra\k_vehicle_ls\mtt\data\body2_co.paa",
			"kobra\k_vehicle_ls\mtt\data\door_co.paa"
		};
		hiddenselectionsmaterials[]=
		{
			"kobra\k_vehicle_ls\mtt\data\body1.rvmat",
			"kobra\k_vehicle_ls\mtt\data\body2.rvmat",
			"kobra\k_vehicle_ls\mtt\data\door.rvmat"
		};

		#include "mtt_physx.hpp"
		cost=1500000;
		#include "mtt_armor.hpp"
		#include "mtt_turrets.hpp"
		class RenderTargets
		{
		};
		#include "mtt_sounds.hpp"
		driverAction="driver_apcwheeled2_out";
		driverInAction="driver_apcwheeled2_in";
		viewDriverInExternal=1;
		selectionFireAnim="zasleh4";
		proxytype="CPDriver";
		proxyIndex=1;
		forcehideDriver=1;
		DriverForceOptics=1;
		#include "mtt_memorypoints.hpp"
		driver="k_ls_unit_b1_e5";
		crew="k_ls_unit_b1_e5";
		typicalCargo[]=
		{
			"k_ls_unit_b1_e5"
		};
		class Reflectors
		{
		};
	};
	class 442_mtt_wreck: Wreck_base_F
	{
		author = "Kobra Mod Team";
		mapsize = 20;
		editorPreview = "";
		scope = 2;
		scopecurator = 2;
		icon="iconObject_1x2";
		displayname = "MTT (Wrecked)";
		model="\ls_vehicles_ground\mtt\ls_ground_mtt_wreck.p3d";
		editorCategory = "kobra";
		editorSubcategory = "442_wrecks";
	};
};