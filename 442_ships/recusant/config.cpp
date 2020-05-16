class CfgPatches
{
	class 442_recusant
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"recusant_zeus",
			"recusant_zeus_d",
			"rec_body1",
			"rec_body2",
			"rec_engine",
			"rec_body1_d",
			"rec_body2_d",
			"rec_engine_d"
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
	class recusant_zeus: House_F
	{
		author="kripto202";
		model="\442_ships\recusant\rec_zeus.p3d";
		scope=2;
		scopecurator=2;
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		icon="iconObject_1x1";
		displayname="Recusant (Zeus)";
		hiddenselections[]=
		{
			"body1",
			"body2",
			"engine"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\recusant\data\body1_co.paa",
			"442_ships\recusant\data\body2_co.paa",
			"442_ships\recusant\data\engine_co.paa"
		};
	};
	class recusant_zeus_d: recusant_zeus
	{
		displayname="Recusant Dreadnought (Zeus)";
	};
	class recusant_base: StaticShip
	{
		author="kripto202";
		model="\442_ships\recusant\base.p3d";
		reversed=0;
		scope=2;
		scopecurator=1;
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		displayname="Recusant";
		mapsize=1326;
		destrType=0;
		featureType=2;
		multistructureparts[]=
		{
			
			{
				"rec_body1",
				"body1"
			},
			
			{
				"rec_body2",
				"body2"
			},
			
			{
				"rec_engine",
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
	class recusant_base_d: recusant_base
	{
		displayname="Recusant Dreadnought";
		model="\442_ships\recusant\base_d.p3d";
		multistructureparts[]=
		{
			
			{
				"rec_body1_d",
				"body1"
			},
			
			{
				"rec_body2_d",
				"body2"
			},
			
			{
				"rec_engine_d",
				"engine"
			}
		};
	};
	class rec_hull_base: House_F
	{
		reversed=0;
		scope=1;
		scopeCurator=0;
		author="kripto202";
		displayname="rec_hull_base";
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships_parts";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		mapsize=70;
		model="\442_ships\recusant\rec_body1.p3d";
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
	class rec_body1: rec_hull_base
	{
		displayname="rec body1";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\recusant\rec_body1.p3d";
		hiddenselections[]=
		{
			"body1"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\recusant\data\body1_co.paa"
		};
	};
	class rec_body1_d: rec_body1
	{
		model="\442_ships\recusant\rec_body1_d.p3d";
	};
	class rec_body2: rec_hull_base
	{
		displayname="rec body2";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\recusant\rec_body2.p3d";
		hiddenselections[]=
		{
			"body2"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\recusant\data\body2_co.paa"
		};
	};
	class rec_body2_d: rec_body2
	{
		model="\442_ships\recusant\rec_body2_d.p3d";
	};
	class rec_engine: rec_hull_base
	{
		displayname="rec engine";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\recusant\rec_engine.p3d";
		hiddenselections[]=
		{
			"engine"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\recusant\data\engine_co.paa"
		};
	};
	class rec_engine_d: rec_engine
	{
		model="\442_ships\recusant\rec_engine_d.p3d";
	};
};
class cfgMods
{
	author="kripto202";
	timepacked="1587464916";
};
