class cfgpatches
{
    class 442_misc_sweeper
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
        requiredVersion = 0.1;
        units[] = 
        {
            "442_sweeper",
            "442_sweeper_2",
            "442_sweeper_3"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class Items_base_F;
    class 442_sweeper: Items_base_F
	{
		scope=2;
		scopecurator=2;
		author = "KOBRA Mod Team";
		displayName="Sweeper Droid (green)";
		model="kobra\442_misc\sweeper\sweeper.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		simulation="thingx";
		hiddenselections[]=
		{
			"body",
			"arms"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_misc\sweeper\data\body_co.paa",
			"kobra\442_misc\sweeper\data\arms_co.paa"
		};
	};
	class 442_sweeper_2: 442_sweeper
	{
		displayname="Sweeper Droid (Red)";
		hiddenselectionstextures[]=
		{
			"kobra\442_misc\sweeper\data\body2_co.paa",
			"kobra\442_misc\sweeper\data\arms_co.paa"
		};
	};
	class 442_sweeper_3: 442_sweeper
	{
		displayname="Sweeper Droid (Orange)";
		hiddenselectionstextures[]=
		{
			"kobra\442_misc\sweeper\data\body3_co.paa",
			"kobra\442_misc\sweeper\data\arms_co.paa"
		};
	};
};