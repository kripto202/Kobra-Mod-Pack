    class 442_rx200_base: tank_f
	{
		author="kripto202";
		scope=1;
		scopecurator=1;
		scopearsenal=1;
		displayname="rx200";
		model="\442_g_vehicle\rx200\rx200_2";
		picture="";
		icon="\A3\armor_f_gamma\MBT_02\Data\UI\map_MBT_02_ca.paa";
		side=1;
		faction="kobra";
		editorSubcategory="SWLG_GAR_tanks";
		insideSoundCoef=0.89999998;
		threat[]={0.80000001,1,0.30000001};
		canFloat=1;
		crew = "k_swla_unit_p2_dc15a";
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
			"442_g_vehicle\rx200\data\body1_co.paa",
			"442_g_vehicle\rx200\data\body2_co.paa",
			"442_g_vehicle\rx200\data\turret_co.paa",
			"442_g_vehicle\rx200\data\gun_co.paa"
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
	
	class 442_rx200_wreck: Wreck_base_F
	{
		author = "kripto202";
		mapsize = 20;
		editorPreview = "";
		scope = 2;
		scopecurator = 2;
		icon="iconObject_1x2";
		displayname = "RX200 (Wrecked)";
		model = "442_g_vehicle\rx200\rx200_w.p3d";
		editorCategory = "kobra";
		editorSubcategory = "442_wrecks";
	};