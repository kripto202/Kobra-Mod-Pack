class 442_fa181_plane_fighter: b_plane_fighter_01_f
    {
        displayname = "FA-181";
        faction = "kobra_b";
        editorSubcategory="442_planes";
		crew = "k_swla_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_swla_unit_p2_dc15a"
		};
		scope=2;
		scopecurator=2;
		scopearsenal=2;
        hiddenselectionstextures[]=
		{
			"442_a_vehicle\air\data\fa181\rep_fa181_body.paa",
			"442_a_vehicle\air\data\fa181\rep_fa181_wing.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
		};
        class texturesources
        {
            class base
            {
                displayname = "base";
                author = "Kobra Mod Team";
                textures[] = 
                {
                    "442_a_vehicle\air\data\fa181\rep_fa181_body.paa",
                    "442_a_vehicle\air\data\fa181\rep_fa181_wing.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
                };
                factions[] = 
                {
                    "kobra_b"
                };
            };
            class 442nd: base
            {
                displayname = "442nd";
                textures[] = 
                {
                    "442_a_vehicle\air\data\fa181\442_fa181_body.paa",
                    "442_a_vehicle\air\data\fa181\442_fa181_wing.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
                };
            };
        };
        texturelist[] = 
        {
            "base", 1,
            "442nd", 1
        };
    };
    class 442_fa181_plane_fighter_stealth: b_plane_fighter_01_stealth_f
    {
        displayname = "FA-181";
        faction = "kobra_b";
        editorSubcategory="442_planes";
		crew="k_swla_unit_p2_dc15a";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
        hiddenselectionstextures[]=
		{
			"442_a_vehicle\air\data\fa181\rep_fa181_body.paa",
			"442_a_vehicle\air\data\fa181\rep_fa181_wing.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
		};
        class texturesources
        {
            class base
            {
                displayname = "base";
                author = "Kobra Mod Team";
                textures[] = 
                {
                    "442_a_vehicle\air\data\fa181\rep_fa181_body.paa",
                    "442_a_vehicle\air\data\fa181\rep_fa181_wing.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
                };
                factions[] = 
                {
                    "kobra_b"
                };
            };
            class 442nd: base
            {
                displayname = "442nd";
                textures[] = 
                {
                    "442_a_vehicle\air\data\fa181\442_fa181_body.paa",
                    "442_a_vehicle\air\data\fa181\442_fa181_wing.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
                };
            };
        };
        texturelist[] = 
        {
            "base", 1,
            "442nd", 1
        };
    };