class cfgpatches
{
    class 442_misc_radio
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
        requiredVersion = 0.1;
        units[] = 
        {
            "442_radio"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class Items_base_F;
    class 442_radio: Items_base_F
	{
		scope=2;
		scopecurator=2;
		author = "KOBRA Mod Team";
		displayName="Radio";
		model="442_misc\radio\radio.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item_small";
		simulation="thing";
		hiddenselections[]=
		{
			"body",
			"lights"
		};
		hiddenselectionstextures[]=
		{
			"442_misc\radio\data\radio_body_co.paa",
			"442_misc\radio\data\radio_lights_co.paa"
		};
	};
};