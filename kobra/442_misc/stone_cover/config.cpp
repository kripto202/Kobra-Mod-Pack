class cfgpatches
{
    class 442_misc_stone_cover
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
        requiredVersion = 0.1;
        units[] = 
        {
            "442_stone_cover"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class House_F;
    class 442_stone_cover: House_F
	{
		scope=2;
		scopecurator=2;
		author = "KOBRA Mod Team";
		displayName="Stone Cover";
		model="\kobra\442_misc\stone_cover\cover.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		vehicleClass="Structures";
		hiddenselections[]=
		{
			"camo1"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_misc\stone_cover\data\cover_co.paa"
		};
	};
};