class cfgpatches
{
	class 442_mandator
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"mandator_base",
			"mandator_body1_1",
			"mandator_body2_1",
			"mandator_body2_2",
			"mandator_body3_1",
			"mandator_body3_2",
			"mandator_body4_1",
			"mandator_body4_2",
			"mandator_body4_3",
			"mandator_body4_4",
			"mandator_body4_5",
			"mandator_body4_6",
			"mandator_body4_7",
			"mandator_body4_8",
			"mandator_engine_1",
			"mandator_engine_2",
			"mandator_engine_3",
			"mandator_hanger1_1",
			"mandator_hanger2_1",
			"mandator_hanger2_2",
			"mandator_hanger3_1",
			"mandator_hanger3_2",
			"mandator_hanger4",
		};
	};
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
	/* class 442_lucrehulk: House_F
	{
		author="kripto202";
		model="\442_ships\lucrehulk\lucrehulk.p3d";
		scope=2;
		scopecurator=2;
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		icon="iconObject_1x1";
		displayname="Lucrehulk (Zeus)";
		hiddenselections[] = 
		{
			"top",
			"radar",
			"inner",
			"front",
			"gate",
			"core",
			"bottom",
			"engine",
			"back"
		};
		hiddenselectionstextures[] = 
		{
			"442_ships\lucrehulk\data\top_co.paa",
			"442_ships\lucrehulk\data\radar_co.paa",
			"442_ships\lucrehulk\data\inner_co.paa",
			"442_ships\lucrehulk\data\front_co.paa",
			"442_ships\lucrehulk\data\gate_co.paa",
			"442_ships\lucrehulk\data\core_co.paa",
			"442_ships\lucrehulk\data\bottom_co.paa",
			"442_ships\lucrehulk\data\engine_co.paa",
			"442_ships\lucrehulk\data\back_co.paa"
		};
	}; */
	class mandator_base: StaticShip
	{
		author="kripto202";
		model="\442_ships\mandator\base.p3d";
		reversed=0;
		scope=2;
		scopecurator=1;
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		displayname="Mandator II";
		mapsize=3000;
		destrType=0;
		featureType=2;
		multistructureparts[]=
		{
			
			{
				"mandator_body1_1",
				"body1_1"
			},
			{
				"mandator_body2_1",
				"body2_1"
			},
			{
				"mandator_body2_2",
				"body2_2"
			},
			{
				"mandator_body3_1",
				"body3_1"
			},
			{
				"mandator_body3_2",
				"body3_2"
			},
			{
				"mandator_body4_1",
				"body4_1"
			},
			{
				"mandator_body4_2",
				"body4_2"
			},
			{
				"mandator_body4_3",
				"body4_3"
			},
			{
				"mandator_body4_4",
				"body4_4"
			},
			{
				"mandator_body4_5",
				"body4_5"
			},
			{
				"mandator_body4_6",
				"body4_6"
			},
			{
				"mandator_body4_7",
				"body4_7"
			},
			{
				"mandator_body4_8",
				"body4_8"
			},
			{
				"mandator_engine_1",
				"engine_1"
			},
			{
				"mandator_engine_2",
				"engine_2"
			},
			{
				"mandator_engine_3",
				"engine_3"
			},
			{
				"mandator_hanger1_1",
				"hanger1_1"
			},
			{
				"mandator_hanger2_1",
				"hanger2_1"
			},
			{
				"mandator_hanger2_2",
				"hanger2_2"
			},
			{
				"mandator_hanger3_1",
				"hanger3_1"
			},
			{
				"mandator_hanger3_2",
				"hanger3_2"
			},
			{
				"mandator_hanger4",
				"hanger4"
			},
		};
		class Eventhandlers
		{
			init="_this call BIS_fnc_Destroyer01Init;";
			attributesChanged3DEN="_this call BIS_fnc_Destroyer01PosUpdate;";
			dragged3DEN="_this call BIS_fnc_Destroyer01PosUpdate;";
			registeredToWorld3DEN="_this call BIS_fnc_Destroyer01EdenInit;";
			unregisteredFromWorld3DEN="_this call BIS_fnc_Destroyer01EdenDelete;";
		};
	};
	class mandator_hull_base: House_F
	{
		reversed=0;
		scope=1;
		scopeCurator=0;
		author="kripto202";
		displayname="mandator_hull_base";
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships_parts";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		mapsize=70;
		model="\442_ships\lucrehulk\1.p3d";
		armor=1000000000000000000;
		hideUnitInfo=1;
		nameSound="ship";
		featureType=2;
		class Hitpoints
		{
		};
		class DestructionEffects
		{
		};
		class Damage
		{
			tex[]={};
			mat[]={};
		};
		class AnimationSources
		{
		};
		class UserActions
		{
		};
	};
	class mandator_body1_1: mandator_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="mandator body1_1";
		editorpreview="";
		model="\442_ships\mandator\body1_1.p3d";
		hiddenselections[]=
		{
			"body1"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\mandator\data\body1_co.paa"
		};
	};
	class mandator_body2_1: mandator_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="mandator body2_1";
		editorpreview="";
		model="\442_ships\mandator\body2_1.p3d";
		hiddenselections[]=
		{
			"body2"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\mandator\data\body2_co.paa"
		};
	};
	class mandator_body2_2: mandator_body2_1
	{
		displayname = "mandator body2_2";
		model="\442_ships\mandator\body2_2.p3d";
	};
	class mandator_body3_1: mandator_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="mandator body3_1";
		editorpreview="";
		model="\442_ships\mandator\body3_1.p3d";
		hiddenselections[]=
		{
			"body3"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\mandator\data\body3_co.paa"
		};
	};
	class mandator_body3_2: mandator_body3_1
	{
		displayname = "mandator body3_2";
		model="\442_ships\mandator\body3_2.p3d";
	};
	class mandator_body4_1: mandator_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="mandator body4_1";
		editorpreview="";
		model="\442_ships\mandator\body4_1.p3d";
		hiddenselections[]=
		{
			"body4"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\mandator\data\body4_co.paa"
		};
	};
	class mandator_body4_2: mandator_body4_1
	{
		displayname = "mandator body4_2";
		model="\442_ships\mandator\body4_2.p3d";
	};
	class mandator_body4_3: mandator_body4_1
	{
		displayname = "mandator body4_3";
		model="\442_ships\mandator\body4_3.p3d";
	};
	class mandator_body4_4: mandator_body4_1
	{
		displayname = "mandator body4_4";
		model="\442_ships\mandator\body4_4.p3d";
	};
	class mandator_body4_5: mandator_body4_1
	{
		displayname = "mandator body4_5";
		model="\442_ships\mandator\body4_5.p3d";
	};
	class mandator_body4_6: mandator_body4_1
	{
		displayname = "mandator body4_6";
		model="\442_ships\mandator\body4_6.p3d";
	};
	class mandator_body4_7: mandator_body4_1
	{
		displayname = "mandator body4_7";
		model="\442_ships\mandator\body4_7.p3d";
	};
	class mandator_body4_8: mandator_body4_1
	{
		displayname = "mandator body4_8";
		model="\442_ships\mandator\body4_8.p3d";
	};
	class mandator_engine_1: mandator_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="mandator engine_1";
		editorpreview="";
		model="\442_ships\mandator\engine_1.p3d";
		hiddenselections[]=
		{
			"engine"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\mandator\data\engine_co.paa"
		};
	};
	class mandator_engine_2: mandator_engine_1
	{
		displayname = "mandator engine_2";
		model="\442_ships\mandator\engine_2.p3d";
	};
	class mandator_engine_3: mandator_engine_1
	{
		displayname = "mandator engine_3";
		model="\442_ships\mandator\engine_3.p3d";
	};
	class mandator_hanger1_1: mandator_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="mandator hanger1_1";
		editorpreview="";
		model="\442_ships\mandator\hanger1_1.p3d";
		hiddenselections[]=
		{
			"hanger1"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\mandator\data\hanger1_co.paa"
		};
	};
	class mandator_hanger2_1: mandator_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="mandator hanger2_1";
		editorpreview="";
		model="\442_ships\mandator\hanger2_1.p3d";
		hiddenselections[]=
		{
			"hanger2"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\mandator\data\hanger2_co.paa"
		};
	};
	class mandator_hanger2_2: mandator_hanger2_1
	{
		displayname = "mandator hanger2_2";
		model="\442_ships\mandator\hanger2_2.p3d";
	};
	class mandator_hanger3_1: mandator_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="mandator hanger3_1";
		editorpreview="";
		model="\442_ships\mandator\hanger3_1.p3d";
		hiddenselections[]=
		{
			"hanger3"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\mandator\data\hanger3_co.paa"
		};
	};
	class mandator_hanger3_2: mandator_hanger3_1
	{
		displayname = "mandator hanger3_2";
		model="\442_ships\mandator\hanger3_2.p3d";
	};
	class mandator_hanger4: mandator_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="mandator hanger4";
		editorpreview="";
		model="\442_ships\mandator\hanger4.p3d";
		hiddenselections[]=
		{
			"hanger4"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\mandator\data\hanger4_co.paa"
		};
	};
	
};