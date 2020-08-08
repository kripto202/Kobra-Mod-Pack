	class 442_a10_plane_cas: b_plane_cas_01_dynamicloadout_f
    {
        Displayname="A-10";
		faction="kobra";
		editorSubcategory="442_planes";
		crew="442_swla_unit_pilot";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
        hiddenselectionstextures[]=
		{
			"442_a_vehicle\air\data\a10\rep_a10_body.paa",
			"442_a_vehicle\air\data\a10\rep_a10_wing.paa"
		};
        class texturesources
        {
            class base
            {
                displayname = "Base";
                author = "kripto202";
                textures[] = 
                {
                    "442_a_vehicle\air\data\a10\rep_a10_body.paa",
			        "442_a_vehicle\air\data\a10\rep_a10_wing.paa"
                };
                factions[] = 
                {
                    "kobra"
                };
            };
            class 442nd: base
            {
                displayname = "442nd";
                textures[] = 
                {
                    "442_air\data\a10\442_a10_body.paa",
		        	"442_air\data\a10\442_a10_wing.paa"
                };
            };
        };
        texturelist[] = 
        {
            "base", 1,
            "442nd", 1
        };
    };