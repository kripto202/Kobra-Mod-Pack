class cfgpatches
{
	class 442_lucrehulk
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_lucrehulk",
			"lucrehulk_base",
			"back_1",
			"bottom_1",
			"bottom_2",
			"bottom_3",
			"bottom_4",
			"core_1",
			"core_2",
			"core_3",
			"engine_1",
			"front_1",
			"front_2",
			"front_3",
			"front_4",
			"gate_1",
			"inner_1",
			"inner_2",
			"inner_3",
			"inner_4",
			"radar_1",
			"radar_2",
			"radar_3",
			"radar_4",
			"top_1",
			"top_2",
			"top_3",
			"top_4"
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
	class 442_lucrehulk: House_F
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
	};
	class lucrehulk_base: StaticShip
	{
		author="kripto202";
		model="\442_ships\lucrehulk\lucrehulk_base.p3d";
		reversed=0;
		scope=2;
		scopecurator=1;
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		displayname="Lucrehulk";
		mapsize=3000;
		destrType=0;
		featureType=2;
		multistructureparts[]=
		{
			
			{
				"back_1",
				"back_1"
			},
			
			{
				"bottom_1",
				"bottom_1"
			},
			
			{
				"bottom_2",
				"bottom_2"
			},
			
			{
				"bottom_3",
				"bottom_3"
			},
			
			{
				"bottom_4",
				"bottom_4"
			},
			
			{
				"core_1",
				"core_1"
			},
			
			{
				"core_2",
				"core_2"
			},
			
			{
				"core_3",
				"core_3"
			},
			
			{
				"engine_1",
				"engine_1"
			},
			
			{
				"front_1",
				"front_1"
			},
			
			{
				"front_2",
				"front_2"
			},
			
			{
				"front_3",
				"front_3"
			},
			
			{
				"front_4",
				"front_4"
			},
			
			{
				"gate_1",
				"gate_1"
			},
			
			{
				"inner_1",
				"inner_1"
			},
			
			{
				"inner_2",
				"inner_2"
			},
			
			{
				"inner_3",
				"inner_3"
			},
			
			{
				"inner_4",
				"inner_4"
			},
			
			{
				"radar_1",
				"radar_1"
			},
			
			{
				"radar_2",
				"radar_2"
			},
			
			{
				"radar_3",
				"radar_3"
			},
			
			{
				"radar_4",
				"radar_4"
			},
			
			{
				"top_1",
				"top_1"
			},
			
			{
				"top_2",
				"top_2"
			},
			
			{
				"top_3",
				"top_3"
			},
			
			{
				"top_4",
				"top_4"
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
	class luc_hull_base: House_F
	{
		reversed=0;
		scope=1;
		scopeCurator=0;
		author="kripto202";
		displayname="luc_hull_base";
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
	class back_1: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 1";
		editorpreview="";
		model="\442_ships\lucrehulk\back_1.p3d";
		hiddenselections[]=
		{
			"back"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\back_co.paa"
		};
	};
	class bottom_1: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 2";
		editorpreview="";
		model="\442_ships\lucrehulk\bottom_1.p3d";
		hiddenselections[]=
		{
			"bottom"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\bottom_co.paa"
		};
	};
	class bottom_2: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 3";
		editorpreview="";
		model="\442_ships\lucrehulk\bottom_2.p3d";
		hiddenselections[]=
		{
			"bottom"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\bottom_co.paa"
		};
	};
	class bottom_3: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 4";
		editorpreview="";
		model="\442_ships\lucrehulk\bottom_3.p3d";
		hiddenselections[]=
		{
			"bottom"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\bottom_co.paa"
		};
	};
	class bottom_4: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 5";
		editorpreview="";
		model="\442_ships\lucrehulk\bottom_4.p3d";
		hiddenselections[]=
		{
			"bottom"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\bottom_co.paa"
		};
	};
	class core_1: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 6";
		editorpreview="";
		model="\442_ships\lucrehulk\core_1.p3d";
		hiddenselections[]=
		{
			"core"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\core_co.paa"
		};
	};
	class core_2: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 7";
		editorpreview="";
		model="\442_ships\lucrehulk\core_2.p3d";
		hiddenselections[]=
		{
			"core"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\core_co.paa"
		};
	};
	class core_3: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 8";
		editorpreview="";
		model="\442_ships\lucrehulk\core_3.p3d";
		hiddenselections[]=
		{
			"core"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\core_co.paa"
		};
	};
	class engine_1: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 9";
		editorpreview="";
		model="\442_ships\lucrehulk\engine_1.p3d";
		hiddenselections[]=
		{
			"engine"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\engine_co.paa"
		};
	};
	class front_1: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 10";
		editorpreview="";
		model="\442_ships\lucrehulk\front_1.p3d";
		hiddenselections[]=
		{
			"front"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\front_co.paa"
		};
	};
	class front_2: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 11";
		editorpreview="";
		model="\442_ships\lucrehulk\front_2.p3d";
		hiddenselections[]=
		{
			"front"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\front_co.paa"
		};
	};
	class front_3: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 12";
		editorpreview="";
		model="\442_ships\lucrehulk\front_3.p3d";
		hiddenselections[]=
		{
			"front"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\front_co.paa"
		};
	};
	class front_4: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 13";
		editorpreview="";
		model="\442_ships\lucrehulk\front_4.p3d";
		hiddenselections[]=
		{
			"front"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\front_co.paa"
		};
	};
	class gate_1: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 14";
		editorpreview="";
		model="\442_ships\lucrehulk\gate_1.p3d";
		hiddenselections[]=
		{
			"gate"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\gate_co.paa"
		};
	};
	class inner_1: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 15";
		editorpreview="";
		model="\442_ships\lucrehulk\inner_1.p3d";
		hiddenselections[]=
		{
			"inner"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\inner_co.paa"
		};
	};
	class inner_2: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 16";
		editorpreview="";
		model="\442_ships\lucrehulk\inner_2.p3d";
		hiddenselections[]=
		{
			"inner"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\inner_co.paa"
		};
	};
	class inner_3: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 17";
		editorpreview="";
		model="\442_ships\lucrehulk\inner_3.p3d";
		hiddenselections[]=
		{
			"inner"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\inner_co.paa"
		};
	};
	class inner_4: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 18";
		editorpreview="";
		model="\442_ships\lucrehulk\inner_4.p3d";
		hiddenselections[]=
		{
			"inner"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\inner_co.paa"
		};
	};
	class radar_1: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 19";
		editorpreview="";
		model="\442_ships\lucrehulk\radar_1.p3d";
		hiddenselections[]=
		{
			"radar"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\radar_co.paa"
		};
	};
	class radar_2: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 20";
		editorpreview="";
		model="\442_ships\lucrehulk\radar_2.p3d";
		hiddenselections[]=
		{
			"radar"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\radar_co.paa"
		};
	};
	class radar_3: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 21";
		editorpreview="";
		model="\442_ships\lucrehulk\radar_3.p3d";
		hiddenselections[]=
		{
			"radar"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\radar_co.paa"
		};
	};
	class radar_4: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 22";
		editorpreview="";
		model="\442_ships\lucrehulk\radar_4.p3d";
		hiddenselections[]=
		{
			"radar"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\radar_co.paa"
		};
	};
	class top_1: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 23";
		editorpreview="";
		model="\442_ships\lucrehulk\top_1.p3d";
		hiddenselections[]=
		{
			"top"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\top_co.paa"
		};
	};
	class top_2: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 24";
		editorpreview="";
		model="\442_ships\lucrehulk\top_2.p3d";
		hiddenselections[]=
		{
			"top"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\top_co.paa"
		};
	};
	class top_3: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 25";
		editorpreview="";
		model="\442_ships\lucrehulk\top_3.p3d";
		hiddenselections[]=
		{
			"top"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\top_co.paa"
		};
	};
	class top_4: luc_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="luc hull 26";
		editorpreview="";
		model="\442_ships\lucrehulk\top_4.p3d";
		hiddenselections[]=
		{
			"top"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\lucrehulk\data\top_co.paa"
		};
	};
};