    class k_scout_pouches_base: 442_vest_base
    {
        author = "KOBRA Mod Team";
        displayname = "Scout Pouches";
        model = "kobra\442_units\scout_pouches.p3d";
        hiddenselections[] = 
        {
            "pouch1",
            "pouch2",
            "pouch3",
        };
        class ItemInfo: VestItem
        {
            hiddenselections[] = 
            {
                "pouch1",
                "pouch2",
                "pouch3"
            };
            uniformmodel = "kobra\442_units\scout_pouches.p3d";
            containerclass = "Supply150";
            mass = 50;
            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 1;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };
    class k_scout_pouches_light: k_scout_pouches_base
    {
        displayname = "[K] Light Scout Pouches";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\pouches_co.paa",
            "",
            ""
        };
        class ItemInfo: ItemInfo
        {
            containerclass = "Supply50";
            mass = 10;
        };
    };
    class k_scout_pouches_medium: k_scout_pouches_light
    {
        displayname = "[K] Medium Scout Pouches";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\pouches_co.paa",
            "kobra\442_units\data\vests\pouches_co.paa",
            ""
        };
        class ItemInfo: ItemInfo
        {
            containerclass = "Supply100";
            mass = 15;
        };
    };
    class k_scout_pouches_heavy: k_scout_pouches_light
    {
        displayname = "[K] Heavy Scout Pouches";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\pouches_co.paa",
            "kobra\442_units\data\vests\pouches_co.paa",
            "kobra\442_units\data\vests\pouches_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            containerclass = "Supply150";
            mass = 20;
        };
    };

////////////designs///////////
    class k_scout_pouches_light_dukas: k_scout_pouches_light
    {
        displayname = "[K] Light Scout Pouches (Dukas)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\pouches_dukas_co.paa",
            "",
            ""
        };
    };
    class k_scout_pouches_light_camo: k_scout_pouches_light
    {
        displayname = "[K] Light Scout Pouches [Camo]";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\pouches_camo_co.paa",
            "",
            ""
        };
    };
    class k_scout_pouches_light_arctic: k_scout_pouches_light
    {
        displayname = "[K] Light Scout Pouches [Arctic]";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\pouches_arctic_co.paa",
            "",
            ""
        };
    };
    class k_scout_pouches_light_jungle: k_scout_pouches_light
    {
        displayname = "[K] Light Scout Pouches [Jungle]";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\pouches_jungle_co.paa",
            "",
            ""
        };
    };
    class k_scout_pouches_light_desert: k_scout_pouches_light
    {
        displayname = "[K] Light Scout Pouches [Desert]";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\pouches_desert_co.paa",
            "",
            ""
        };
    };

    class k_scout_pouches_medium_dukas: k_scout_pouches_medium
    {
        displayname = "[K] Medium Scout Pouches (Dukas)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\pouches_dukas_co.paa",
            "kobra\442_units\data\vests\pouches_dukas_co.paa",
            ""
        };
    };
    class k_scout_pouches_medium_camo: k_scout_pouches_medium
    {
        displayname = "[K] Medium Scout Pouches [Camo]";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\pouches_camo_co.paa",
            "kobra\442_units\data\vests\pouches_camo_co.paa",
            ""
        };
    };
    class k_scout_pouches_medium_arctic: k_scout_pouches_medium
    {
        displayname = "[K] Medium Scout Pouches [Arctic]";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\pouches_arctic_co.paa",
            "kobra\442_units\data\vests\pouches_arctic_co.paa",
            ""
        };
    };
    class k_scout_pouches_medium_jungle: k_scout_pouches_medium
    {
        displayname = "[K] Medium Scout Pouches [Jungle]";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\pouches_jungle_co.paa",
            "kobra\442_units\data\vests\pouches_jungle_co.paa",
            ""
        };
    };
    class k_scout_pouches_medium_desert: k_scout_pouches_medium
    {
        displayname = "[K] Medium Scout Pouches [Desert]";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\pouches_desert_co.paa",
            "kobra\442_units\data\vests\pouches_desert_co.paa",
            ""
        };
    };

    class k_scout_pouches_heavy_dukas: k_scout_pouches_heavy
    {
        displayname = "[K] Heavy Scout Pouches (Dukas)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\pouches_dukas_co.paa",
            "kobra\442_units\data\vests\pouches_dukas_co.paa",
            "kobra\442_units\data\vests\pouches_dukas_co.paa"
        };
    };
    class k_scout_pouches_heavy_camo: k_scout_pouches_heavy
    {
        displayname = "[K] Heavy Scout Pouches [Camo]";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\pouches_camo_co.paa",
            "kobra\442_units\data\vests\pouches_camo_co.paa",
            "kobra\442_units\data\vests\pouches_camo_co.paa"
        };
    };
    class k_scout_pouches_heavy_arctic: k_scout_pouches_heavy
    {
        displayname = "[K] Heavy Scout Pouches [Arctic]";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\pouches_arctic_co.paa",
            "kobra\442_units\data\vests\pouches_arctic_co.paa",
            "kobra\442_units\data\vests\pouches_arctic_co.paa"
        };
    };
    class k_scout_pouches_heavy_jungle: k_scout_pouches_heavy
    {
        displayname = "[K] Heavy Scout Pouches [Jungle]";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\pouches_jungle_co.paa",
            "kobra\442_units\data\vests\pouches_jungle_co.paa",
            "kobra\442_units\data\vests\pouches_jungle_co.paa"
        };
    };
    class k_scout_pouches_heavy_desert: k_scout_pouches_heavy
    {
        displayname = "[K] Heavy Scout Pouches [Desert]";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\pouches_desert_co.paa",
            "kobra\442_units\data\vests\pouches_desert_co.paa",
            "kobra\442_units\data\vests\pouches_desert_co.paa"
        };
    };