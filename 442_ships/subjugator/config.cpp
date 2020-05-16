class CfgPatches
{
	class 442_subjugator
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_subjugator",
			"subjugator_base",
			"subjugator_hull_base",
			"subjugator_body1",
			"subjugator_body1_1",
			"subjugator_body2",
			"subjugator_body2_1",
			"subjugator_body2_2",
			"subjugator_body2_3",
			"subjugator_body2_4",
			"subjugator_body3",
			"subjugator_body4",
			"subjugator_body4_1",
			"subjugator_body4_2",
			"subjugator_body4_3",
			"subjugator_body4_4",
			"subjugator_body5",
			"subjugator_body5_1",
			"subjugator_body5_2",
			"subjugator_body5_3",
			"subjugator_body5_4",
			"subjugator_bridge",
			"subjugator_emp1",
			"subjugator_emp1_1",
			"subjugator_emp2",
			"subjugator_emp2_1",
			"subjugator_engine"
		};
		author="kripto202";
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
	class 442_subjugator: House_F
	{
		author="kripto202";
		model="\442_ships\subjugator\subjugator.p3d";
		scope=2;
		scopecurator=2;
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		icon="iconObject_1x1";
		displayname="Subjugator (Zeus)";
		hiddenselections[] = 
		{
			"body1",
			"body2",
			"body3",
			"body4",
			"body5",
			"bridge",
			"emp1",
			"emp2",
			"engine"
		};
		hiddenselectionstextures[] = 
		{
			"442_ships\subjugator\data\body1_co.paa",
			"442_ships\subjugator\data\body2_co.paa",
			"442_ships\subjugator\data\body3_co.paa",
			"442_ships\subjugator\data\body4_co.paa",
			"442_ships\subjugator\data\body5_co.paa",
			"442_ships\subjugator\data\bridge_co.paa",
			"442_ships\subjugator\data\emp1_co.paa",
			"442_ships\subjugator\data\emp2_co.paa",
			"442_ships\subjugator\data\engine_co.paa"
		};
	};
	class subjugator_base: StaticShip
	{
		author="kripto202";
		model="\442_ships\subjugator\subjugator_base.p3d";
		reversed=0;
		scope=2;
		scopecurator=1;
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		displayname="Subjugator-Class Heavy Cruiser";
		mapsize=4800;
		destrType=0;
		featureType=2;
		multistructureparts[]=
		{
			
			{
				"subjugator_body1",
				"body1"
			},
			
			{
				"subjugator_body1_1",
				"body1_1"
			},
			
			{
				"subjugator_body2",
				"body2"
			},
			
			{
				"subjugator_body2_1",
				"body2_1"
			},
			
			{
				"subjugator_body2_2",
				"body2_2"
			},
			
			{
				"subjugator_body2_3",
				"body2_3"
			},
			
			{
				"subjugator_body2_4",
				"body2_4"
			},
			
			{
				"subjugator_body3",
				"body3"
			},
			
			{
				"subjugator_body4",
				"body4"
			},
			
			{
				"subjugator_body4_1",
				"body4_1"
			},
			
			{
				"subjugator_body4_2",
				"body4_2"
			},
			
			{
				"subjugator_body4_3",
				"body4_3"
			},
			
			{
				"subjugator_body4_4",
				"body4_4"
			},
			
			{
				"subjugator_body5",
				"body5"
			},
			
			{
				"subjugator_body5_1",
				"body5_1"
			},
			
			{
				"subjugator_body5_2",
				"body5_2"
			},
			
			{
				"subjugator_body5_3",
				"body5_3"
			},
			
			{
				"subjugator_body5_4",
				"body5_4"
			},
			
			{
				"subjugator_emp1",
				"emp1"
			},
			
			{
				"subjugator_emp1_1",
				"emp1_1"
			},
			
			{
				"subjugator_emp2",
				"emp2"
			},
			
			{
				"subjugator_emp2_1",
				"emp2_1"
			},
			
			{
				"subjugator_bridge",
				"bridge"
			},
			
			{
				"subjugator_engine",
				"engine"
			}
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
	class subjugator_hull_base: House_F
	{
		reversed=0;
		scope=1;
		scopeCurator=0;
		author="kripto202";
		displayname="subjugator_hull_base";
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships_parts";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		mapsize=70;
		model="\442_ships\subjugator\hull_1.p3d";
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
	class subjugator_body1: subjugator_hull_base
	{
		displayname="subjugator hull 1";
		scope=2;
		scopeCurator=2;
		editorpreview="";
		model="\442_ships\subjugator\body1.p3d";
		hiddenselections[]=
		{
			"body1"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\subjugator\data\body1_co.paa"
		};
	};
	class subjugator_body1_1: subjugator_body1
	{
		displayname="subjugator hull 1_1";
		model="\442_ships\subjugator\body1_1.p3d";
	};
	class subjugator_body2: subjugator_hull_base
	{
		displayname="subjugator hull 2";
		scope=2;
		scopeCurator=2;
		editorpreview="";
		model="\442_ships\subjugator\body2.p3d";
		hiddenselections[]=
		{
			"body2"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\subjugator\data\body2_co.paa"
		};
	};
	class subjugator_body2_1: subjugator_body2
	{
		displayname="subjugator hull 2_1";
		model="\442_ships\subjugator\body2_1.p3d";
	};
	class subjugator_body2_2: subjugator_body2
	{
		displayname="subjugator hull 2_2";
		model="\442_ships\subjugator\body2_2.p3d";
	};
	class subjugator_body2_3: subjugator_body2
	{
		displayname="subjugator hull 2_3";
		model="\442_ships\subjugator\body2_3.p3d";
	};
	class subjugator_body2_4: subjugator_body2
	{
		displayname="subjugator hull 2_4";
		model="\442_ships\subjugator\body2_4.p3d";
	};
	class subjugator_body3: subjugator_hull_base
	{
		displayname="subjugator hull 3";
		scope=2;
		scopeCurator=2;
		editorpreview="";
		model="\442_ships\subjugator\body3.p3d";
		hiddenselections[]=
		{
			"body3"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\subjugator\data\body3_co.paa"
		};
	};
	class subjugator_body4: subjugator_hull_base
	{
		displayname="subjugator hull 4";
		scope=2;
		scopeCurator=2;
		editorpreview="";
		model="\442_ships\subjugator\body4.p3d";
		hiddenselections[]=
		{
			"body4"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\subjugator\data\body4_co.paa"
		};
	};
	class subjugator_body4_1: subjugator_body4
	{
		displayname="subjugator hull 4_1";
		model="\442_ships\subjugator\body4_1.p3d";
	};
	class subjugator_body4_2: subjugator_body4
	{
		displayname="subjugator hull 4_2";
		model="\442_ships\subjugator\body4_2.p3d";
	};
	class subjugator_body4_3: subjugator_body4
	{
		displayname="subjugator hull 4_3";
		model="\442_ships\subjugator\body4_3.p3d";
	};
	class subjugator_body4_4: subjugator_body4
	{
		displayname="subjugator hull 4_4";
		model="\442_ships\subjugator\body4_4.p3d";
	};
	class subjugator_body5: subjugator_hull_base
	{
		displayname="subjugator hull 5";
		scope=2;
		scopeCurator=2;
		editorpreview="";
		model="\442_ships\subjugator\body5.p3d";
		hiddenselections[]=
		{
			"body5"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\subjugator\data\body5_co.paa"
		};
	};
	class subjugator_body5_1: subjugator_body5
	{
		displayname="subjugator hull 5_1";
		model="\442_ships\subjugator\body5_1.p3d";
	};
	class subjugator_body5_2: subjugator_body5
	{
		displayname="subjugator hull 5_2";
		model="\442_ships\subjugator\body5_2.p3d";
	};
	class subjugator_body5_3: subjugator_body5
	{
		displayname="subjugator hull 5_3";
		model="\442_ships\subjugator\body5_3.p3d";
	};
	class subjugator_body5_4: subjugator_body5
	{
		displayname="subjugator hull 5_4";
		model="\442_ships\subjugator\body5_4.p3d";
	};
	class subjugator_bridge: subjugator_hull_base
	{
		displayname="subjugator bridge";
		scope=2;
		scopeCurator=2;
		editorpreview="";
		model="\442_ships\subjugator\bridge.p3d";
		hiddenselections[]=
		{
			"bridge"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\subjugator\data\bridge_co.paa"
		};
	};
	class subjugator_emp1: subjugator_hull_base
	{
		displayname="subjugator emp 1";
		scope=2;
		scopeCurator=2;
		editorpreview="";
		model="\442_ships\subjugator\emp1.p3d";
		hiddenselections[]=
		{
			"emp1"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\subjugator\data\emp1_co.paa"
		};
	};
	class subjugator_emp1_1: subjugator_emp1
	{
		displayname="subjugator emp 1_1";
		model="\442_ships\subjugator\emp1_1.p3d";
	};
	class subjugator_emp2: subjugator_hull_base
	{
		displayname="subjugator emp 2";
		scope=2;
		scopeCurator=2;
		editorpreview="";
		model="\442_ships\subjugator\emp2.p3d";
		hiddenselections[]=
		{
			"emp2"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\subjugator\data\emp2_co.paa"
		};
	};
	class subjugator_emp2_1: subjugator_emp2
	{
		displayname="subjugator emp 2_1";
		model="\442_ships\subjugator\emp2_1.p3d";
	};
	class subjugator_engine: subjugator_hull_base
	{
		displayname="subjugator engine";
		scope=2;
		scopeCurator=2;
		editorpreview="";
		model="\442_ships\subjugator\engine.p3d";
		hiddenselections[]=
		{
			"engine"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\subjugator\data\engine_co.paa"
		};
	};
};