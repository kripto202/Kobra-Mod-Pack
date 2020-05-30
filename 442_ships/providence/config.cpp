class CfgPatches
{
	class 442_providence
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_providence",
			"442_providence_d",
			"providence_hull_base",
			"providence_body1",
			"providence_body1_d",
			"providence_body2",
			"providence_body2_d",
			"providence_body3",
			"providence_body3_d",
			"providence_bridge",
			"providence_bridge_d",
			"providence_engine",
			"providence_engine_d",
			"providence_interior",
			"providence_interior_d",
			"442_providence_zeus",
			"442_providence_d_zeus"
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
	class 442_providence: House_F
	{
		scope=2;
		scopecurator=1;
		author="kripto202";
		displayName="Providence-class";
		model="\442_ships\providence\base.p3d";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		multistructureparts[]=
		{
			
			{
				"providence_body1",
				"body1"
			},
			
			{
				"providence_body2",
				"body2"
			},
			
			{
				"providence_body3",
				"body3"
			},
			
			{
				"providence_bridge",
				"bridge"
			},
			
			{
				"providence_engine",
				"engine"
			},
			
			{
				"providence_interior",
				"interior"
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
	class 442_providence_d: House_F
	{
		scope=2;
		scopecurator=1;
		author="kripto202";
		displayName="Providence-class Dreadnought";
		model="\442_ships\providence\base_d.p3d";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		multistructureparts[]=
		{
			
			{
				"providence_body1_d",
				"body1"
			},
			
			{
				"providence_body2_d",
				"body2"
			},
			
			{
				"providence_body3_d",
				"body3"
			},
			
			{
				"providence_bridge_d",
				"bridge"
			},
			
			{
				"providence_engine_d",
				"engine"
			},
			
			{
				"providence_interior_d",
				"interior"
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
	class providence_hull_base: House_F
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
		model="\442_ships\providence\body1.p3d";
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
	class providence_body1: providence_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="providence body1";
		editorpreview="";
		model="\442_ships\providence\body1.p3d";
		hiddenselections[]=
		{
			"body1"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\providence\data\body1_co.paa"
		};
	};
	class providence_body1_d: providence_body1
	{
		displayname="providence dreadnought body1";
		model="\442_ships\providence\body1_d.p3d";
		hiddenselectionstextures[]=
		{
			"442_ships\providence\data\body1_d_co.paa"
		};
	};
	class providence_body2: providence_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="providence body2";
		editorpreview="";
		model="\442_ships\providence\body2.p3d";
		hiddenselections[]=
		{
			"body2"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\providence\data\body2_co.paa"
		};
	};
	class providence_body2_d: providence_body2
	{
		displayname="providence dreadnought body2";
		model="\442_ships\providence\body2_d.p3d";
	};
	class providence_body3: providence_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="providence body3";
		editorpreview="";
		model="\442_ships\providence\body3.p3d";
		hiddenselections[]=
		{
			"body3"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\providence\data\body3_co.paa"
		};
	};
	class providence_body3_d: providence_body3
	{
		displayname="providence dreadnought body3";
		model="\442_ships\providence\body3_d.p3d";
	};
	class providence_bridge: providence_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="providence bridge";
		editorpreview="";
		model="\442_ships\providence\bridge.p3d";
		hiddenselections[]=
		{
			"bridge"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\providence\data\bridge_co.paa"
		};
	};
	class providence_bridge_d: providence_bridge
	{
		displayname="providence dreadnought bridge";
		model="\442_ships\providence\bridge_d.p3d";
	};
	class providence_engine: providence_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="providence engine";
		editorpreview="";
		model="\442_ships\providence\engine.p3d";
		hiddenselections[]=
		{
			"engine"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\providence\data\engine_co.paa"
		};
	};
	class providence_engine_d: providence_engine
	{
		displayname="providence dreadnought engine";
		model="\442_ships\providence\engine_d.p3d";
	};
	class providence_interior: providence_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="providence interior";
		editorpreview="";
		model="\442_ships\providence\interior.p3d";
		hiddenselections[]=
		{
			"interior"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\providence\data\interior_co.paa"
		};
	};
	class providence_interior_d: providence_interior
	{
		displayname="providence dreadnought interior";
		model="\442_ships\providence\interior_d.p3d";
	};
	class 442_providence_zeus: House_F
	{
		author="kripto202";
		model="\442_ships\providence\providence.p3d";
		scope=2;
		scopecurator=2;
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		icon="iconObject_1x1";
		displayname="Providence (Zeus)";
		hiddenselections[]=
		{
			"body1",
			"body2",
			"body3",
			"bridge",
			"engine",
			"interior"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\providence\data\body1_co.paa",
			"442_ships\providence\data\body2_co.paa",
			"442_ships\providence\data\body3_co.paa",
			"442_ships\providence\data\bridge_co.paa",
			"442_ships\providence\data\engine_co.paa",
			"442_ships\providence\data\interior_co.paa"
		};
	};
	class 442_providence_d_zeus: 442_providence_zeus
	{
		model="\442_ships\providence\providence_d.p3d";
		displayname="Providence Dreadnought (Zeus)";
		hiddenselectionstextures[]=
		{
			"442_ships\providence\data\body1_d_co.paa",
			"442_ships\providence\data\body2_co.paa",
			"442_ships\providence\data\body3_co.paa",
			"442_ships\providence\data\bridge_co.paa",
			"442_ships\providence\data\engine_co.paa",
			"442_ships\providence\data\interior_co.paa"
		};
	};
};