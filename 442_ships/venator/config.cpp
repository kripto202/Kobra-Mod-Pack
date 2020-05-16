class CfgPatches
{
	class 442_venator
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"venator_zeus",
			"venator_base",
			"venator_base_2",
			"venator_base_3",
			"venator_base_4",
			"ven_body1_1",
			"ven_body1_2",
			"ven_body2_1",
			"ven_body2_2",
			"ven_body2_3",
			"ven_body3",
			"ven_body4",
			"ven_body5",
			"ven_body6",
			"ven_body7",
			"ven_body8",
			"ven_body9",
			"ven_body10",
			"ven_door",
			"ven_door2",
			"ven_engine",
			"ven_interior1",
			"ven_interior2",
			"ven_interior3",
			"ven_interior4",
			"ven_interior5",
			"ven_interior6",
			"ven_interior7",
			"ven_interior8",
			"ven_bridge"
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
	class venator_zeus: house_f
	{
		author="kripto202";
		model="\442_ships\venator\venator.p3d";
		scope=2;
		scopecurator=2;
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		icon="iconObject_1x1";
		displayname="Venator (Zeus)";
		hiddenselections[] = 
		{
			"body1",
			"body2",
			"body3",
			"body4",
			"body5",
			"body6",
			"body7",
			"body8",
			"body9",
			"body10",
			"door1",
			"engine",
			"interior1",
			"interior2",
			"interior3",
			"interior4",
			"interior5",
			"interior6",
			"interior7",
			"interior8",
			"bridge"
		};
		hiddenselectionstextures[] = 
		{
			"442_ships\venator\data\body1_co.paa",
			"442_ships\venator\data\body2_co.paa",
			"442_ships\venator\data\body3_co.paa",
			"442_ships\venator\data\body4_co.paa",
			"442_ships\venator\data\body5_co.paa",
			"442_ships\venator\data\body6_co.paa",
			"442_ships\venator\data\body7_co.paa",
			"442_ships\venator\data\body8_co.paa",
			"442_ships\venator\data\body9_co.paa",
			"442_ships\venator\data\body10_co.paa",
			"442_ships\venator\data\door_co.paa",
			"442_ships\venator\data\engine_co.paa",
			"442_ships\venator\data\interior1_co.paa",
			"442_ships\venator\data\interior2_co.paa",
			"442_ships\venator\data\interior3_co.paa",
			"442_ships\venator\data\interior4_co.paa",
			"442_ships\venator\data\interior5_co.paa",
			"442_ships\venator\data\interior6_co.paa",
			"442_ships\venator\data\interior7_co.paa",
			"442_ships\venator\data\interior8_co.paa",
			"442_ships\venator\data\bridge_co.paa",
		};
	};
	class venator_base: StaticShip
	{
		author="kripto202";
		model="\442_ships\venator\venator_base.p3d";
		reversed=0;
		scope=2;
		scopecurator=1;
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		displayname="Venator";
		mapsize=1326;
		destrType=0;
		featureType=2;
		multistructureparts[]=
		{
			
			{
				"ven_body1_1",
				"body1_1"
			},
			
			{
				"ven_body1_2",
				"body1_2"
			},
			
			{
				"ven_body2_1",
				"body2_1"
			},
			
			{
				"ven_body2_2",
				"body2_2"
			},
			
			{
				"ven_body2_3",
				"body2_3"
			},
			
			{
				"ven_body3",
				"body3"
			},
			
			{
				"ven_body4",
				"body4"
			},
			
			{
				"ven_body5",
				"body5"
			},
			
			{
				"ven_body6",
				"body6"
			},
			
			{
				"ven_body7",
				"body7"
			},
			
			{
				"ven_body8",
				"body8"
			},
			
			{
				"ven_body9",
				"body9"
			},
			
			{
				"ven_body10",
				"body10"
			},
			
			{
				"ven_door",
				"door"
			},
			
			{
				"ven_engine",
				"engine"
			},
			
			{
				"ven_interior1",
				"interior1"
			},
			
			{
				"ven_interior2",
				"interior2"
			},
			
			{
				"ven_interior3",
				"interior3"
			},
			
			{
				"ven_interior4",
				"interior4"
			},
			
			{
				"ven_interior5",
				"interior5"
			},
			
			{
				"ven_interior6",
				"interior6"
			},
			
			{
				"ven_interior7",
				"interior7"
			},
			
			{
				"ven_interior8",
				"interior8"
			},
			
			{
				"ven_bridge",
				"bridge"
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
	class venator_base_2: venator_base
	{
		displayname="Venator (Open)";
		multistructureparts[]=
		{
			
			{
				"ven_body1_1",
				"body1_1"
			},
			
			{
				"ven_body1_2",
				"body1_2"
			},
			
			{
				"ven_body2_1",
				"body2_1"
			},
			
			{
				"ven_body2_2",
				"body2_2"
			},
			
			{
				"ven_body2_3",
				"body2_3"
			},
			
			{
				"ven_body3",
				"body3"
			},
			
			{
				"ven_body4",
				"body4"
			},
			
			{
				"ven_body5",
				"body5"
			},
			
			{
				"ven_body6",
				"body6"
			},
			
			{
				"ven_body7",
				"body7"
			},
			
			{
				"ven_body8",
				"body8"
			},
			
			{
				"ven_body9",
				"body9"
			},
			
			{
				"ven_body10",
				"body10"
			},
			
			{
				"ven_door2",
				"door"
			},
			
			{
				"ven_engine",
				"engine"
			},
			
			{
				"ven_interior1",
				"interior1"
			},
			
			{
				"ven_interior2",
				"interior2"
			},
			
			{
				"ven_interior3",
				"interior3"
			},
			
			{
				"ven_interior4",
				"interior4"
			},
			
			{
				"ven_interior5",
				"interior5"
			},
			
			{
				"ven_interior6",
				"interior6"
			},
			
			{
				"ven_interior7",
				"interior7"
			},
			
			{
				"ven_interior8",
				"interior8"
			},
			
			{
				"ven_bridge",
				"bridge"
			}
		};
	};
	class venator_base_3: venator_base
	{
		displayname="Venator (Hollowed)";
		multistructureparts[]=
		{
			
			{
				"ven_body1_1",
				"body1_1"
			},
			
			{
				"ven_body1_2",
				"body1_2"
			},
			
			{
				"ven_body2_1",
				"body2_1"
			},
			
			{
				"ven_body2_2",
				"body2_2"
			},
			
			{
				"ven_body2_3",
				"body2_3"
			},
			
			{
				"ven_body3",
				"body3"
			},
			
			{
				"ven_body4",
				"body4"
			},
			
			{
				"ven_body5",
				"body5"
			},
			
			{
				"ven_body6",
				"body6"
			},
			
			{
				"ven_body7",
				"body7"
			},
			
			{
				"ven_body8",
				"body8"
			},
			
			{
				"ven_body9",
				"body9"
			},
			
			{
				"ven_body10",
				"body10"
			},
			
			{
				"ven_door",
				"door"
			},
			
			{
				"ven_engine",
				"engine"
			},
			
			{
				"ven_interior1",
				"interior1"
			},
			
			{
				"ven_interior2",
				"interior2"
			},
			
			{
				"ven_interior3",
				"interior3"
			},
			
			{
				"ven_interior5",
				"interior5"
			},
			
			{
				"ven_interior6",
				"interior6"
			},
			
			{
				"ven_interior7",
				"interior7"
			},
			
			{
				"ven_interior8",
				"interior8"
			},
			
			{
				"ven_bridge",
				"bridge"
			}
		};
	};
	class venator_base_4: venator_base
	{
		displayname="Venator (Open Hollowed)";
		multistructureparts[]=
		{
			
			{
				"ven_body1_1",
				"body1_1"
			},
			
			{
				"ven_body1_2",
				"body1_2"
			},
			
			{
				"ven_body2_1",
				"body2_1"
			},
			
			{
				"ven_body2_2",
				"body2_2"
			},
			
			{
				"ven_body2_3",
				"body2_3"
			},
			
			{
				"ven_body3",
				"body3"
			},
			
			{
				"ven_body4",
				"body4"
			},
			
			{
				"ven_body5",
				"body5"
			},
			
			{
				"ven_body6",
				"body6"
			},
			
			{
				"ven_body7",
				"body7"
			},
			
			{
				"ven_body8",
				"body8"
			},
			
			{
				"ven_body9",
				"body9"
			},
			
			{
				"ven_body10",
				"body10"
			},
			
			{
				"ven_door2",
				"door"
			},
			
			{
				"ven_engine",
				"engine"
			},
			
			{
				"ven_interior1",
				"interior1"
			},
			
			{
				"ven_interior2",
				"interior2"
			},
			
			{
				"ven_interior3",
				"interior3"
			},
			
			{
				"ven_interior5",
				"interior5"
			},
			
			{
				"ven_interior6",
				"interior6"
			},
			
			{
				"ven_interior7",
				"interior7"
			},
			
			{
				"ven_interior8",
				"interior8"
			},
			
			{
				"ven_bridge",
				"bridge"
			}
		};
	};
	class ven_hull_base: House_F
	{
		reversed=0;
		scope=1;
		scopeCurator=0;
		author="kripto202";
		displayname="ven_hull_base";
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships_parts";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		mapsize=70;
		model="\442_ships\venator\ven_1.p3d";
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
	class ven_body1_1: ven_hull_base
	{
		displayname="ven body1_1";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\body1_1.p3d";
		hiddenselections[]=
		{
			"body1"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\body1_co.paa"
		};
	};
	class ven_body1_2: ven_hull_base
	{
		displayname="ven body1_2";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\body1_2.p3d";
		hiddenselections[]=
		{
			"body1"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\body1_co.paa"
		};
	};
	class ven_body2_1: ven_hull_base
	{
		displayname="ven body2_1";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\body2_1.p3d";
		hiddenselections[]=
		{
			"body2"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\body2_co.paa"
		};
	};
	class ven_body2_2: ven_hull_base
	{
		displayname="ven body2_2";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\body2_2.p3d";
		hiddenselections[]=
		{
			"body2"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\body2_co.paa"
		};
	};
	class ven_body2_3: ven_hull_base
	{
		displayname="ven body2_3";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\body2_3.p3d";
		hiddenselections[]=
		{
			"body2"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\body2_co.paa"
		};
	};
	class ven_body3: ven_hull_base
	{
		displayname="ven body_3";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\body3.p3d";
		hiddenselections[]=
		{
			"body3"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\body3_co.paa"
		};
	};
	class ven_body4: ven_hull_base
	{
		displayname="ven body4";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\body4.p3d";
		hiddenselections[]=
		{
			"body4"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\body4_co.paa"
		};
	};
	class ven_body5: ven_hull_base
	{
		displayname="ven body5";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\body5.p3d";
		hiddenselections[]=
		{
			"body5"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\body5_co.paa"
		};
	};
	class ven_body6: ven_hull_base
	{
		displayname="ven body6";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\body6.p3d";
		hiddenselections[]=
		{
			"body6"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\body6_co.paa"
		};
	};
	class ven_body7: ven_hull_base
	{
		displayname="ven body7";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\body7.p3d";
		hiddenselections[]=
		{
			"body7"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\body7_co.paa"
		};
	};
	class ven_body8: ven_hull_base
	{
		displayname="ven body8";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\body8.p3d";
		hiddenselections[]=
		{
			"body8"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\body8_co.paa"
		};
	};
	class ven_body9: ven_hull_base
	{
		displayname="ven body9";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\body9.p3d";
		hiddenselections[]=
		{
			"body9"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\body9_co.paa"
		};
	};
	class ven_body10: ven_hull_base
	{
		displayname="ven body10";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\body10.p3d";
		hiddenselections[]=
		{
			"body10"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\body10_co.paa"
		};
	};
	class ven_door: ven_hull_base
	{
		displayname="ven door";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\door.p3d";
		hiddenselections[]=
		{
			"door1",
			"door2"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\door_co.paa",
			""
		};
	};
	class ven_door2: ven_hull_base
	{
		displayname="ven door";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\door.p3d";
		hiddenselections[]=
		{
			"door1",
			"door2"
		};
		hiddenselectionstextures[]=
		{
			"",
			"442_ships\venator\data\door_co.paa"
		};
	};
	class ven_engine: ven_hull_base
	{
		displayname="ven engine";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\engine.p3d";
		hiddenselections[]=
		{
			"engine"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\engine_co.paa"
		};
	};
	class ven_interior1: ven_hull_base
	{
		displayname="ven interior1";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\interior1.p3d";
		hiddenselections[]=
		{
			"interior1"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\interior1_co.paa"
		};
	};
	class ven_interior2: ven_hull_base
	{
		displayname="ven interior2";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\interior2.p3d";
		hiddenselections[]=
		{
			"interior2"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\interior2_co.paa"
		};
	};
	class ven_interior3: ven_hull_base
	{
		displayname="ven interior3";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\interior3.p3d";
		hiddenselections[]=
		{
			"interior3"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\interior3_co.paa"
		};
	};
	class ven_interior4: ven_hull_base
	{
		displayname="ven interior4";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\interior4.p3d";
		hiddenselections[]=
		{
			"interior4"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\interior4_co.paa"
		};
	};
	class ven_interior5: ven_hull_base
	{
		displayname="ven interior5";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\interior5.p3d";
		hiddenselections[]=
		{
			"interior5"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\interior5_co.paa"
		};
	};
	class ven_interior6: ven_hull_base
	{
		displayname="ven interior6";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\interior6.p3d";
		hiddenselections[]=
		{
			"interior6"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\interior6_co.paa"
		};
	};
	class ven_interior7: ven_hull_base
	{
		displayname="ven interior7";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="442_ships\venator\interior7.p3d";
		hiddenselections[]=
		{
			"interior7"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\interior7_co.paa"
		};
	};
	class ven_interior8: ven_hull_base
	{
		displayname="ven interior8";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\interior8.p3d";
		hiddenselections[]=
		{
			"interior8"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\interior8_co.paa"
		};
	};
	class ven_bridge: ven_hull_base
	{
		displayname="ven bridge";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\venator\bridge.p3d";
		hiddenselections[]=
		{
			"bridge"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\venator\data\bridge_co.paa"
		};
	};
};