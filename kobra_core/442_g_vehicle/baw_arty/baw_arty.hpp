	class 442_baw_arty_base: tank_f
	{
		author="kripto202";
		scope=1;
		scopecurator=1;
		scopearsenal=1;
		displayname="BAW Artillery Hover Tank";
		model="\442_g_vehicle\baw_arty\baw_arty_2.p3d";
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
			"442_g_vehicle\baw_arty\data\body_co.paa",
			"442_g_vehicle\baw_arty\data\eyes_co.paa",
			"442_g_vehicle\baw_arty\data\gun_co.paa",
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