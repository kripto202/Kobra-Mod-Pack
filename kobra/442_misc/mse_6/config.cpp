class cfgpatches
{
    class 442_misc_mse6
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_mse_6",
            "44_mse_6",
            "bl_mse_6",
            "442_mse_7",
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class Items_base_F;
    class 442_mse_6: Items_base_F
	{
		scope=2;
		scopecurator=2;
		author = "KOBRA Mod Team";
		displayName="MSE-6";
		model="442_misc\mse_6\mse_6.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item_small";
		simulation="thingx";
		hiddenselections[]=
		{
			"camo1"
		};
		hiddenselectionstextures[]=
		{
			"442_misc\mse_6\data\camo1_co.paa"
		};
	};
	class 44_mse_6: 442_mse_6
	{
		displayname="MSE-6 (44th SOD)";
		hiddenselectionstextures[]=
		{
			"442_misc\mse_6\data\camo1_44_co.paa"
		};
	};
	class bl_mse_6: 442_mse_6
	{
		displayname="MSE-6 (Black Legion)";
		hiddenselectionstextures[]=
		{
			"442_misc\mse_6\data\camo1_bl_co.paa"
		};
	};
	class 442_mse_7: 442_mse_6
	{
		displayName="MSE-7";
		model="442_misc\mse_6\mse_7.p3d";
		hiddenselectionstextures[]=
		{
			"442_misc\mse_6\data\camo1_co.paa"
		};
	};
};