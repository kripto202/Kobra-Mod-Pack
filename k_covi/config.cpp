class cfgpatches
{
    class k_covi
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
		{
			"k_covi_ship"
		};
        weapons[] = {};
    };
};

class CfgVehicles
{
	class House_f;
	class k_covi_ship: House_f
	{
		scope = 2;
		scopecurator = 2;
		author = "kripto202";
		displayname = "Covi Ship";
		model = "kobra\k_covi\battle_cruiser.p3d";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
	};
};