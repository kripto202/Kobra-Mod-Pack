class cfgpatches
{
    class 442_misc_dby_827
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_dby_827"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class House_F;
    class 442_dby_827: House_F
	{
		scope=2;
		scopecurator=2;
		author = "KOBRA Mod Team";
		displayName="DBY-827 Heavy Turbolaser (Static)";
		model="442_misc\dby_827\dby_827.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		hiddenselections[]=
		{
			"base",
			"body1",
			"body2",
			"body3",
			"gear",
			"gun"
		};
		hiddenselectionstextures[]=
		{
			"442_misc\dby_827\data\base_co.paa",
			"442_misc\dby_827\data\body1_co.paa",
			"442_misc\dby_827\data\body2_co.paa",
			"442_misc\dby_827\data\body3_co.paa",
			"442_misc\dby_827\data\gear_co.paa",
			"442_misc\dby_827\data\gun_co.paa"
		};
	};
};