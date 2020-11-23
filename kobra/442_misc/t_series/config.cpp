class cfgpatches
{
    class 442_misc_tseries
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
        requiredVersion = 0.1;
        units[] = 
        {
            "442_tseries_head"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class Items_base_F;
    class 442_tseries_head: Items_base_F
	{
		scope=2;
		scopecurator=2;
		author = "KOBRA Mod Team";
		displayName="T-Series Head";
		model="\442_misc\t_series\t_series_head.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item_small";
		simulation="thingx";
		hiddenselections[]=
		{
			"camo1",
			"lights"
		};
		hiddenselectionstextures[]=
		{
			"\442_misc\t_series\data\camo1_co.paa",
			"\442_misc\t_series\data\lights_co.paa",
		};
	};
};