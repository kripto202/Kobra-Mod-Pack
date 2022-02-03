class cfgpatches
{
    class 442_misc_forklift
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "k_forklift_droid"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class House_F;
    class k_forklift_droid: House_F
	{
		scope=2;
		scopecurator=2;
		author = "KOBRA Mod Team";
		displayName="Forklift Droid";
		model="\kobra\442_misc\forklift\forklift_droid.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		vehicleClass="Structures";
		hiddenselections[]=
		{
			"body"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_misc\forklift\data\forklift1_body_co.paa"
		};
	};
};