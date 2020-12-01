class cfgpatches
{
    class 442_ships_munificent
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_munificent"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class StaticShip;
    class House_F;
    class 442_munificent: House_F
	{
		scope=2;
		scopecurator=2;
		author ="Kobra Mod Team";
		displayName="Munificent";
		model="\kobra\442_ships\munificent\munificent.p3d";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		hiddenselections[]=
		{
			"body1",
			"body2",
			"body3",
			"body4",
			"engine"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_ships\munificent\data\body1_co.paa",
			"kobra\442_ships\munificent\data\body2_co.paa",
			"kobra\442_ships\munificent\data\body3_co.paa",
			"kobra\442_ships\munificent\data\body4_co.paa",
			"kobra\442_ships\munificent\data\engine_co.paa"
		};
	};
};