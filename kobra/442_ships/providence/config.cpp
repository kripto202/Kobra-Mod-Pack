class cfgpatches
{
    class 442_ships_hardcell
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_providence",
            "442_providence_2",
            "442_providence_d",
            "442_providence_d_2",
            "442_providence_hull_base",
            "442_providence_body1",
            "442_providence_body1_d",
            "442_providence_body2",
            "442_providence_body2_d",
            "442_providence_body3",
            "442_providence_body3_d",
            "442_providence_bridge",
            "442_providence_bridge_d",
            "442_providence_engine",
            "442_providence_engine_d",
            "442_providence_interior",
            "442_providence_interior_d",
            "442_providence_zeus",
            "442_providence_d_zeus"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class StaticShip;
    class House_F;
    class 442_providence: House_F
	{
		scope=2;
		scopecurator=1;
		author ="Kobra Mod Team";
		displayName="Providence-class";
		model="\kobra\442_ships\providence\base.p3d";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		multistructureparts[]=
		{
			
			{
				"442_providence_body1",
				"body1"
			},
			
			{
				"442_providence_body2",
				"body2"
			},
			
			{
				"442_providence_body3",
				"body3"
			},
			
			{
				"442_providence_bridge",
				"bridge"
			},
			
			{
				"442_providence_engine",
				"engine"
			},
			
			{
				"442_providence_interior",
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
	class 442_providence_2: 442_providence
		{
			displayname = "Providence-class (Hollowed)";
			multistructureparts[]=
			{
				
				{
					"442_providence_body1",
					"body1"
				},
				
				{
					"442_providence_body2",
					"body2"
				},
				
				{
					"442_providence_body3",
					"body3"
				},
				
				{
					"442_providence_bridge",
					"bridge"
				},
				
				{
					"442_providence_engine",
					"engine"
				}
			};
		};
	class 442_providence_d: House_F
	{
		scope=2;
		scopecurator=1;
		author ="Kobra Mod Team";
		displayName="Providence-class Dreadnought";
		model="\kobra\442_ships\providence\base_d.p3d";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		multistructureparts[]=
		{
			
			{
				"442_providence_body1_d",
				"body1"
			},
			
			{
				"442_providence_body2_d",
				"body2"
			},
			
			{
				"442_providence_body3_d",
				"body3"
			},
			
			{
				"442_providence_bridge_d",
				"bridge"
			},
			
			{
				"442_providence_engine_d",
				"engine"
			},
			
			{
				"442_providence_interior_d",
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
	class 442_providence_d_2: 442_providence_d
	{
		displayName="Providence-class Dreadnought (Hollowed)";
		multistructureparts[]=
		{
			
			{
				"442_providence_body1_d",
				"body1"
			},
			
			{
				"442_providence_body2_d",
				"body2"
			},
			
			{
				"442_providence_body3_d",
				"body3"
			},
			
			{
				"442_providence_bridge_d",
				"bridge"
			},
			
			{
				"442_providence_engine_d",
				"engine"
			}
		};
	};
	class 442_providence_hull_base: House_F
	{
		reversed=0;
		scope=1;
		scopeCurator=0;
		author ="Kobra Mod Team";
		displayname="core_hull_base";
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships_parts";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		mapsize=70;
		model="\kobra\442_ships\providence\body1.p3d";
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
	class 442_providence_body1: 442_providence_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="providence body1";
		editorpreview="";
		model="\kobra\442_ships\providence\body1.p3d";
		hiddenselections[]=
		{
			"body1"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_ships\providence\data\body1_co.paa"
		};
	};
	class 442_providence_body1_d: 442_providence_body1
	{
		displayname="providence dreadnought body1";
		model="\kobra\442_ships\providence\body1_d.p3d";
		hiddenselectionstextures[]=
		{
			"kobra\442_ships\providence\data\body1_d_co.paa"
		};
	};
	class 442_providence_body2: 442_providence_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="providence body2";
		editorpreview="";
		model="\kobra\442_ships\providence\body2.p3d";
		hiddenselections[]=
		{
			"body2"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_ships\providence\data\body2_co.paa"
		};
	};
	class 442_providence_body2_d: 442_providence_body2
	{
		displayname="providence dreadnought body2";
		model="\kobra\442_ships\providence\body2_d.p3d";
	};
	class 442_providence_body3: 442_providence_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="providence body3";
		editorpreview="";
		model="\kobra\442_ships\providence\body3.p3d";
		hiddenselections[]=
		{
			"body3"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_ships\providence\data\body3_co.paa"
		};
	};
	class 442_providence_body3_d: 442_providence_body3
	{
		displayname="providence dreadnought body3";
		model="\kobra\442_ships\providence\body3_d.p3d";
	};
	class 442_providence_bridge: 442_providence_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="providence bridge";
		editorpreview="";
		model="\kobra\442_ships\providence\bridge.p3d";
		hiddenselections[]=
		{
			"bridge"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_ships\providence\data\bridge_co.paa"
		};
	};
	class 442_providence_bridge_d: 442_providence_bridge
	{
		displayname="providence dreadnought bridge";
		model="\kobra\442_ships\providence\bridge_d.p3d";
	};
	class 442_providence_engine: 442_providence_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="providence engine";
		editorpreview="";
		model="\kobra\442_ships\providence\engine.p3d";
		hiddenselections[]=
		{
			"engine"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_ships\providence\data\engine_co.paa"
		};
	};
	class 442_providence_engine_d: 442_providence_engine
	{
		displayname="providence dreadnought engine";
		model="\kobra\442_ships\providence\engine_d.p3d";
	};
	class 442_providence_interior: 442_providence_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="providence interior";
		editorpreview="";
		model="\kobra\442_ships\providence\interior.p3d";
		hiddenselections[]=
		{
			"interior"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_ships\providence\data\interior_co.paa"
		};
	};
	class 442_providence_interior_d: 442_providence_interior
	{
		displayname="providence dreadnought interior";
		model="\kobra\442_ships\providence\interior_d.p3d";
	};
	class 442_providence_zeus: House_F
	{
		author ="Kobra Mod Team";
		model="\kobra\442_ships\providence\providence.p3d";
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
			"kobra\442_ships\providence\data\body1_co.paa",
			"kobra\442_ships\providence\data\body2_co.paa",
			"kobra\442_ships\providence\data\body3_co.paa",
			"kobra\442_ships\providence\data\bridge_co.paa",
			"kobra\442_ships\providence\data\engine_co.paa",
			"kobra\442_ships\providence\data\interior_co.paa"
		};
	};
	class 442_providence_d_zeus: 442_providence_zeus
	{
		model="\kobra\442_ships\providence\providence_d.p3d";
		displayname="Providence Dreadnought (Zeus)";
		hiddenselectionstextures[]=
		{
			"kobra\442_ships\providence\data\body1_d_co.paa",
			"kobra\442_ships\providence\data\body2_co.paa",
			"kobra\442_ships\providence\data\body3_co.paa",
			"kobra\442_ships\providence\data\bridge_co.paa",
			"kobra\442_ships\providence\data\engine_co.paa",
			"kobra\442_ships\providence\data\interior_co.paa"
		};
	};
};