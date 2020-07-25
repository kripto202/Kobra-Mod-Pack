class CfgPatches
{
	class 442_mtt
	{
		requiredAddons[]=
		{
			"442_aat",
			"A3_Armor_F_Beta",
			"kobra_core"
		};
		weapons[]={};
		units[]=
		{
			"442_mtt_static",
			"442_mtt",
			"442_mtt_wreck"
		};
		author="kripto202";
	};
};
#include "cfgweapons.hpp"
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
	class Wreck_base_f;
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
	class 442_mtt_static: House_F
	{
		scope=2;
		scopecurator=2;
		author="kripto202";
		displayName="MTT (Static)";
		model="\442_mtt\mtt.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		vehicleClass="Structures";
		hiddenselections[]=
		{
			"body1",
			"body2",
			"door"
		};
		hiddenselectionstextures[]=
		{
			"442_mtt\data\body1_co.paa",
			"442_mtt\data\body2_co.paa",
			"442_mtt\data\door_co.paa"
		};
	};
	class 442_mtt: Tank_F
	{
		author="kripto202";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		displayname="MTT";
		model="\442_mtt\mtt_2.p3d";
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
		cargoaction[] = 
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
			"442_mtt\data\body1_co.paa",
			"442_mtt\data\body2_co.paa",
			"442_mtt\data\door_co.paa"
		};
		#include "physx.hpp"
		cost=1500000;
		#include "armor.hpp"
		#include "turrets.hpp"
		class RenderTargets
		{
		};
		#include "sounds.hpp"
		driverAction="driver_apcwheeled2_out";
		driverInAction="driver_apcwheeled2_in";
		viewDriverInExternal=1;
		selectionFireAnim="zasleh4";
		proxytype="CPDriver";
		proxyIndex=1;
		forcehideDriver=1;
		DriverForceOptics=1;
		#include "memorypoints.hpp"
		driver="SWLB_b1_crew_base";
		crew="SWLB_b1_crew_base";
		typicalCargo[]=
		{
			"SWLB_b1_crew_base"
		};
		class Reflectors
		{
		};
	};
	
	class 442_mtt_wreck: Wreck_base_F
	{
		author = "kripto202";
		mapsize = 20;
		editorPreview = "";
		scope = 2;
		scopecurator = 2;
		icon="iconObject_1x2";
		displayname = "MTT (Wrecked)";
		model = "442_mtt\mtt_wreck.p3d";
		editorCategory = "kobra";
		editorSubcategory = "442_wrecks";
	};
};