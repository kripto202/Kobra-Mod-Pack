class cfgpatches
{
    class 442_ships_arquintens
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_arquitens"          
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
	class House_F;
    class 442_arquitens: House_F
	{
		scope=2;
		scopecurator=2;
		author = "Kobra Mod Team";
		displayName="Arquintens";
		model="\kobra\442_ships\arquintens\arquintens.p3d";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		hiddenselections[]=
		{
			"body1",
			"body2",
			"engine"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_ships\arquintens\data\body1_co.paa",
			"kobra\442_ships\arquintens\data\body2_co.paa",
			"kobra\442_ships\arquintens\data\engine_co.paa"
		};
	};
};