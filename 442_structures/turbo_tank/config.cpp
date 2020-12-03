class cfgpatches
{
    class 442_structures_
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_turbotank",
            "442_turbotank_m"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class House_F;
    class 442_turbotank: House_F 
    {
		scope = 2;
		scopecurator = 2;
		author = "Kobra Mod Team";
		displayName = "Turbo Tank";
		model = "\kobra\442_structures\turbo_tank\turbotank.p3d";
		editorcategory = "kobra";
		editorsubcategory = "442_item";
		vehicleClass = Structures;
		hiddenselections[] = 
		{
			"armor",
			"axel",
			"body",
			"catwalk",
			"interior1",
			"interior2",
			"interior3",
			"wheel"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_structures\turbo_tank\data\armor_CO.paa",
			"kobra\442_structures\turbo_tank\data\axel_CO.paa",
			"kobra\442_structures\turbo_tank\data\body_CO.paa",
			"kobra\442_structures\turbo_tank\data\catwalk_CO.paa",
			"kobra\442_structures\turbo_tank\data\interior_1_CO.paa",
			"kobra\442_structures\turbo_tank\data\interior_2_CO.paa",
			"kobra\442_structures\turbo_tank\data\interior_3_CO.paa",
			"kobra\442_structures\turbo_tank\data\wheel_CO.paa",
		};
	};
	class 442_turbotank_m: 442_turbotank
	{
		displayName = "Turbo Tank (Captured)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_structures\turbo_tank\data\armor_CO.paa",
			"kobra\442_structures\turbo_tank\data\axel_CO.paa",
			"kobra\442_structures\turbo_tank\data\body_m_CO.paa",
			"kobra\442_structures\turbo_tank\data\catwalk_m_CO.paa",
			"kobra\442_structures\turbo_tank\data\interior_1_m_CO.paa",
			"kobra\442_structures\turbo_tank\data\interior_2_m_CO.paa",
			"kobra\442_structures\turbo_tank\data\interior_3_CO.paa",
			"kobra\442_structures\turbo_tank\data\wheel_CO.paa",
		};
	};
};