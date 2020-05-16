class CfgPatches
{
	class 442_coreship
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_coreship",
			"core_control_tower",
			"core_core1",
			"core_core2",
			"core_core3",
			"core_core4",
			"core_platform1",
			"core_platform2",
			"core_platform3",
			"core_platform4",
			"core_radar"
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
	class 442_coreship: House_F
	{
		scope=2;
		scopecurator=1;
		author="kripto202";
		displayName="Core Ship";
		model="\442_ships\coreship\coreship_base.p3d";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		multistructureparts[]=
		{
			
			{
				"core_control_tower",
				"control_tower"
			},
			
			{
				"core_core1",
				"core1"
			},
			
			{
				"core_core2",
				"core2"
			},
			
			{
				"core_core3",
				"core3"
			},
			
			{
				"core_core4",
				"core4"
			},
			
			{
				"core_platform1",
				"platform1"
			},
			
			{
				"core_platform2",
				"platform2"
			},
			
			{
				"core_platform3",
				"platform3"
			},
			
			{
				"core_platform4",
				"platform4"
			},
			
			{
				"core_radar",
				"radar"
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
	class core_hull_base: House_F
	{
		reversed=0;
		scope=1;
		scopeCurator=0;
		author="kripto202";
		displayname="core_hull_base";
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships_parts";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		mapsize=70;
		model="\442_ships\coreship\core1.p3d";
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
	class core_control_tower: core_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="coreship control_tower";
		editorpreview="";
		model="\442_ships\coreship\control_tower.p3d";
		hiddenselections[]=
		{
			"control_tower"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\coreship\data\control_tower_co.paa"
		};
	};
	class core_core1: core_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="coreship core1";
		editorpreview="";
		model="\442_ships\coreship\core1.p3d";
		hiddenselections[]=
		{
			"core"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\coreship\data\core_co.paa"
		};
	};
	class core_core2: core_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="coreship core2";
		editorpreview="";
		model="\442_ships\coreship\core2.p3d";
		hiddenselections[]=
		{
			"core"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\coreship\data\core_co.paa"
		};
	};
	class core_core3: core_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="coreship core3";
		editorpreview="";
		model="\442_ships\coreship\core3.p3d";
		hiddenselections[]=
		{
			"core"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\coreship\data\core_co.paa"
		};
	};
	class core_core4: core_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="coreship core4";
		editorpreview="";
		model="\442_ships\coreship\core4.p3d";
		hiddenselections[]=
		{
			"core"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\coreship\data\core_co.paa"
		};
	};
	class core_platform1: core_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="coreship platform1";
		editorpreview="";
		model="\442_ships\coreship\platform1.p3d";
		hiddenselections[]=
		{
			"platform"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\coreship\data\platform_co.paa"
		};
	};
	class core_platform2: core_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="coreship platform2";
		editorpreview="";
		model="\442_ships\coreship\platform2.p3d";
		hiddenselections[]=
		{
			"platform"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\coreship\data\platform_co.paa"
		};
	};
	class core_platform3: core_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="coreship platform3";
		editorpreview="";
		model="\442_ships\coreship\platform3.p3d";
		hiddenselections[]=
		{
			"platform"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\coreship\data\platform_co.paa"
		};
	};
	class core_platform4: core_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="coreship platform4";
		editorpreview="";
		model="\442_ships\coreship\platform4.p3d";
		hiddenselections[]=
		{
			"platform"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\coreship\data\platform_co.paa"
		};
	};
	class core_radar: core_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="coreship radar";
		editorpreview="";
		model="\442_ships\coreship\radar.p3d";
		hiddenselections[]=
		{
			"radar"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\coreship\data\radar_co.paa"
		};
	};
};