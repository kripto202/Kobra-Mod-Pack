class cfgpatches
{
    class 442_misc_terminal
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_terminal1",
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class house_f;
    class 442_terminal1: house_f
	{
		displayName="Terminal 1";
		model="\kobra\442_misc\terminal\terminal1.p3d";
		destrType="DestructNo";
		editorcategory="kobra";
		editorsubcategory="442_terminal";
		scope=2;
		scopecurator=2;
		hiddenselections[] = 
		{
			"camo1",
			"screen"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\terminal\data\terminal1_co.paa",
			"kobra\442_misc\terminal\data\terminal1_screen_co.paa",
		};
	};
};