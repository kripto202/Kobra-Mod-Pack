class cfgpatches
{
    class 442_structures_platforms
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_5x5",
            "442_10x10",
            "442_10x25",
            "442_25x25",
            "442_50x25",
            "442_50x50"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class House_F;
    class 442_5x5: House_F
	{
		scope=2;
		scopecurator=2;
		author = "Kobra Mod Team";
		displayName="Platform (5x5)";
		model="\kobra\442_structures\platforms\5x5.p3d";
		editorcategory="kobra";
		editorsubcategory="442_Platforms";
		vehicleClass="Structures";
		hiddenselections[]=
		{
			"camo1"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\platforms\data\5x5_co.paa"
		};
	};
	class 442_10x10: 442_5x5
	{
		displayName="Platform (10x10)";
		model="\kobra\442_structures\platforms\10x10.p3d";
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\platforms\data\10x10_co.paa"
		};
	};
	class 442_10x25: 442_5x5
	{
		displayName="Platform (10x25)";
		model="\kobra\442_structures\platforms\10x25.p3d";
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\platforms\data\10x25_co.paa"
		};
	};
	class 442_25x25: 442_5x5
	{
		displayName="Platform (25x25)";
		model="\kobra\442_structures\platforms\25x25.p3d";
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\platforms\data\25x25_co.paa"
		};
	};
	class 442_50x25: 442_5x5
	{
		displayName="Platform (50x25)";
		model="\kobra\442_structures\platforms\50x25.p3d";
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\platforms\data\50x25_co.paa"
		};
	};
	class 442_50x50: 442_5x5
	{
		displayName="Platform (50x50)";
		model="\kobra\442_structures\platforms\50x50.p3d";
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\platforms\data\50x50_co.paa"
		};
	};
};