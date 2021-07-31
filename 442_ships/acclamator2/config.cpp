class cfgpatches
{
    class k_ships_acclamator2
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "k_acclamator2_zeus",
			"k_acclamator2_engine"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
	class House_F;
    class k_acclamator2_zeus: House_F
	{
		scope=2;
		scopecurator=2;
		author = "Kobra Mod Team";
		displayName="Acclamator (Zeus)(WIP)";
		model="\kobra\442_ships\acclamator2\k_acclamator_zeus.p3d";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		hiddenselections[]=
		{
			"main_hull1",
			"main_hull2",
			"main_hull3",
			"main_hull4",
			"main_hull5",
			"door_hull",
			"front_greebles",
			"greeble1",
			"greeble2",
			"greeble3",
			"greeble5",
			"greeble5_pipes_large",
			"greeble5_pipes_small",
			"greeble6",
			"greeble7",
			"grills",
			"torpedo_tube"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_ships\acclamator2\data\main_hull1_co.paa",
			"kobra\442_ships\acclamator2\data\main_hull2_co.paa",
			"kobra\442_ships\acclamator2\data\main_hull3_co.paa",
			"kobra\442_ships\acclamator2\data\main_hull4_co.paa",
			"kobra\442_ships\acclamator2\data\main_hull5_co.paa",
			"kobra\442_ships\acclamator2\data\door_hull_co.paa",
			"kobra\442_ships\acclamator2\data\front_greebles_co.paa",
			"kobra\442_ships\acclamator2\data\greeble1_co.paa",
			"kobra\442_ships\acclamator2\data\greeble2_co.paa",
			"kobra\442_ships\acclamator2\data\greeble3_co.paa",
			"kobra\442_ships\acclamator2\data\greeble5_co.paa",
			"kobra\442_ships\acclamator2\data\greeble5_pipes_large_co.paa",
			"kobra\442_ships\acclamator2\data\greeble5_pipes_small_co.paa",
			"kobra\442_ships\acclamator2\data\greeble6_co.paa",
			"kobra\442_ships\acclamator2\data\greeble7_co.paa",
			"kobra\442_ships\acclamator2\data\grills_co.paa",
			"kobra\442_ships\acclamator2\data\torpedo_tube_co.paa",
		};
	};
	class k_acclamator2_engine: k_acclamator2_zeus
	{
		displayName="Acclamator Engine (Zeus)(WIP)";
		model="\kobra\442_ships\acclamator2\k_acclamator_engine.p3d";
		editorsubcategory="442_ships_parts";
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
	};
};