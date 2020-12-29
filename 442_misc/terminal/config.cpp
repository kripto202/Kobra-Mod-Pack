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
			"screens"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\terminal\data\terminal1_co.paa",
			"kobra\442_misc\terminal\data\terminal1_screen_co.paa",
		};
	};
	class 442_terminal2: 442_terminal1
	{
		displayname = "Terminal 2";
		model="\kobra\442_misc\terminal\terminal2.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"screens"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\terminal\data\terminal2_co.paa",
			"kobra\442_misc\terminal\data\terminal2_screen_co.paa",
		};
	};
	class 442_terminal3: 442_terminal1
	{
		displayname = "Terminal 3";
		model="\kobra\442_misc\terminal\terminal3.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"screens"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\terminal\data\terminal3_co.paa",
			"kobra\442_misc\terminal\data\terminal3_screen_co.paa",
		};
	};
	class 442_terminal4: 442_terminal1
	{
		displayname = "Terminal 4";
		model="\kobra\442_misc\terminal\terminal4.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"lights"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\terminal\data\terminal4_co.paa",
			"kobra\442_misc\terminal\data\terminal4_lights_co.paa",
		};
	};
};