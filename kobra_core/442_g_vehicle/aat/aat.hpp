	class 442_aat_base: Tank_F
	{
		author="kripto202";
		scope=1;
		scopecurator=1;
		scopearsenal=1;
		displayname="AAT";
		model="\442_g_vehicle\aat\aat.p3d";
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
		crew="k_swla_unit_b1_pilot_e5";
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
			"442_g_vehicle\aat\data\body1_co.paa",
			"442_g_vehicle\aat\data\body2_co.paa",
			"442_g_vehicle\aat\data\gun_co.paa"
		};
		class texturesources
		{
			class base
			{
				displayname="Trade Federation";
				author="kripto202";
				textures[]=
				{
					"442_g_vehicle\aat\data\body1_co.paa",
					"442_g_vehicle\aat\data\body2_co.paa",
					"442_g_vehicle\aat\data\gun_co.paa"
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
					"442_g_vehicle\aat\data\body1_red_co.paa",
					"442_g_vehicle\aat\data\body2_red_co.paa",
					"442_g_vehicle\aat\data\gun_red_co.paa"
				};
			};
			class black: base
			{
				displayname="CIS Black";
				textures[]=
				{
					"442_g_vehicle\aat\data\body1_black_co.paa",
					"442_g_vehicle\aat\data\body2_black_co.paa",
					"442_g_vehicle\aat\data\gun_black_co.paa"
				};
			};
			class green: base
			{
				displayname="CIS Green";
				textures[]=
				{
					"442_g_vehicle\aat\data\body1_green_co.paa",
					"442_g_vehicle\aat\data\body2_green_co.paa",
					"442_g_vehicle\aat\data\gun_green_co.paa"
				};
			};
			class blue: base
			{
				displayname="CIS Blue";
				textures[]=
				{
					"442_g_vehicle\aat\data\body1_blue_co.paa",
					"442_g_vehicle\aat\data\body2_blue_co.paa",
					"442_g_vehicle\aat\data\gun_blue_co.paa"
				};
			};
			class winter: base
			{
				displayname="CIS Winter";
				textures[]=
				{
					"442_g_vehicle\aat\data\body1_base_co.paa",
					"442_g_vehicle\aat\data\body2_base_co.paa",
					"442_g_vehicle\aat\data\gun_base_co.paa"
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
		model = "442_g_vehicle\aat\aat_wreck.p3d";
		editorCategory = "kobra";
		editorSubcategory = "442_wrecks";
	};