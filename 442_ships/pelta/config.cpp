class cfgpatches
{
    class 442_ships_pelta
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_pelta_zeus_landed",
            "442_pelta_zeus"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
	class House_F;
    class 442_pelta_zeus: House_F
	{
		scope=2;
		scopecurator=2;
		author = "Kobra Mod Team";
		displayName="Pelta Class Friget";
		model="\kobra\442_ships\pelta\pelta_zeus.p3d";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		hiddenselections[]=
		{
			"body1",
			"body2",
			"greeble",
			"engine_wing",
			"engine",
			"hatch_open",
			"hatch_closed",
			"landing_gear"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_ships\pelta\data\body1_co.paa",
			"kobra\442_ships\pelta\data\body2_co.paa",
			"kobra\442_ships\pelta\data\greeble_co.paa",
			"kobra\442_ships\pelta\data\engine_wings_co.paa",
			"kobra\442_ships\pelta\data\engine_co.paa",
			"",
			"kobra\442_ships\pelta\data\hatch_co.paa",
			""
		};
	};
	class 442_pelta_zeus_landed: 442_pelta_zeus
	{
		displayName="Pelta Class Friget (Landed)";
		hiddenselectionstextures[]=
		{
			"kobra\442_ships\pelta\data\body1_co.paa",
			"kobra\442_ships\pelta\data\body2_co.paa",
			"kobra\442_ships\pelta\data\greeble_co.paa",
			"kobra\442_ships\pelta\data\engine_wings_co.paa",
			"kobra\442_ships\pelta\data\engine_co.paa",
			"kobra\442_ships\pelta\data\hatch_co.paa",
			"",
			"kobra\442_ships\pelta\data\landing_gear_co.paa"
		};
	};
};