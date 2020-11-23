class cfgpatches
{
    class 442_ships_quasar
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_quasar"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class StaticShip;
    class House_F;
    class 442_quasar: House_F
	{
		scope=2;
		scopecurator=2;
		author ="Kobra Mod Team";
		displayName="Quasar Fire Class Cruiser/Carrier";
		model="\442_ships\quasar\quasar.p3d";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		hiddenselections[]=
		{
			"body1",
			"body2",
			"engine",
			"guns",
			"interior1",
			"interior2",
			"interior3",
			"interior4",
			"door1",
			"door2",
			"frame"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\quasar\data\body1_co.paa",
			"442_ships\quasar\data\body2_co.paa",
			"442_ships\quasar\data\engine_co.paa",
			"442_ships\quasar\data\guns_co.paa",
			"442_ships\quasar\data\interior1_co.paa",
			"442_ships\quasar\data\interior2_co.paa",
			"442_ships\quasar\data\interior3_co.paa",
			"442_ships\quasar\data\interior4_co.paa",
			"442_structures\hallway\data\doors_co.paa",
			"442_structures\hallway\data\doors_co.paa",
			"442_structures\hallway\data\frame_co.paa",
		};
	};
};