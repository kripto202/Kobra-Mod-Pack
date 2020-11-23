class cfgpatches
{
    class 442_ships_sds_stealth_ship
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_sds_stealth_ship"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class StaticShip;
    class House_F;
    class 442_sds_stealth_ship: House_F
	{
		scope=2;
		scopecurator=2;
		author = "Kobra Mod Team";
		displayName="SDS-Stealth Ship";
		model="\442_ships\sds_stealth\sds_stealth.p3d";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		hiddenselections[]=
		{
			"body1",
			"body2",
			"body3",
			"body4",
			"engine"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\sds_stealth\data\body1_co.paa",
			"442_ships\sds_stealth\data\body2_co.paa",
			"442_ships\sds_stealth\data\body3_co.paa",
			"442_ships\sds_stealth\data\body4_co.paa",
			"442_ships\sds_stealth\data\engine_co.paa"
		};
	};
};