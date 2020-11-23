class cfgpatches
{
    class 442_misc_stimbox
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
        requiredVersion = 0.1;
        units[] = 
        {
            "442_stimbox"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class Items_base_F;
    class 442_stimbox: Items_base_F
	{
		scope=2;
		scopecurator=2;
		author = "KOBRA Mod Team";
		displayName="Stimbox";
		model="442_misc\stimbox\stimbox.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		simulation="thingx";
		hiddenselections[]=
		{
			"body1",
			"body2",
			"screen"
		};
		hiddenselectionstextures[]=
		{
			"442_misc\stimbox\data\body1_co.paa",
			"442_misc\stimbox\data\body2_co.paa",
			"442_misc\stimbox\data\screen_co.paa"
		};
	};
};