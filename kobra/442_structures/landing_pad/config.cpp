class cfgpatches
{
    class 442_structures_landing_pad
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_landingpad_wide"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class House_F;
    class 442_landingpad_wide: House_F
	{
		author = "Kobra Mod Team";
		scope=2;
		scopecurator=2;
		displayname="Landing Pad (Wide)";
		icon="iconObject";
		editorcategory="kobra";
		editorsubcategory="442_item";
		armor=5000;
		model = "442_structures\landing_pad\wide_landing_pad.p3d";
		hiddenselections[] = 
		{
			"body1"
		};
		hiddenselectionstextures[] = 
		{
			"442_structures\landing_pad\data\pad_wide_co.paa"
		};
	};
};