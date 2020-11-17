class cfgpatches
{
    class 442_misc_escape_pod
    {
        author = "KOBRA Mod Team";
        requiredAddons[]={};
		requiredVersion = 0.1;
		units[] = 
        {
            "442_escape_pod"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class House_F;
    class 442_escape_pod: House_F
	{
		scope=2;
		scopecurator=2;
		author = "KOBRA Mod Team";
		displayName="Escape Pod";
		model="\442_misc\escape_pod\escape_pod.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		vehicleClass="Structures";
		hiddenselections[]=
		{
			"body1",
			"body2",
			"chairs",
			"engine",
			"glass",
			"interior",
			"lights"
		};
		hiddenselectionstextures[]=
		{
			"442_misc\escape_pod\data\body1_co.paa",
			"442_misc\escape_pod\data\body2_co.paa",
			"442_misc\escape_pod\data\chairs_co.paa",
			"442_misc\escape_pod\data\engine_co.paa",
			"442_misc\escape_pod\data\glass_ca.paa",
			"442_misc\escape_pod\data\interior_co.paa",
			"442_misc\escape_pod\data\lights_co.paa",
		};
	};
};