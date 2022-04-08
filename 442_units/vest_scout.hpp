    class k_scout_pouches_base: k_vest_base
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
            "kobra\442_units\data\vests\scout_pouches\pouches_co.paa",
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
            "kobra\442_units\data\vests\scout_pouches\pouches_co.paa",
            "kobra\442_units\data\vests\scout_pouches\pouches_co.paa",
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
            "kobra\442_units\data\vests\scout_pouches\pouches_co.paa",
            "kobra\442_units\data\vests\scout_pouches\pouches_co.paa",
            "kobra\442_units\data\vests\scout_pouches\pouches_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            containerclass = "Supply150";
            mass = 20;
        };
    };

///custom
    class k_44ab_scout_pouches_delta: k_scout_pouches_heavy
    {
        displayname = "[K/44] Heavy Scout Pouches (Delta)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\unit_designs\44_attack_battalion\delta\scout_pouches_co.paa",
            "kobra\442_units\data\unit_designs\44_attack_battalion\delta\scout_pouches_co.paa",
            "kobra\442_units\data\unit_designs\44_attack_battalion\delta\scout_pouches_co.paa",
        };
    };

    class k_scout_pouches_light_woodland2: k_scout_pouches_light
    {
        displayname = "[K] Light Scout Pouches (Woodland)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\scout_pouches\pouches_woodland_co.paa",
            "",
            ""
        };
    };
    class k_scout_pouches_medium_woodland2: k_scout_pouches_medium
    {
        displayname = "[K] Medium Scout Pouches (Woodland)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\scout_pouches\pouches_woodland_co.paa",
            "kobra\442_units\data\vests\scout_pouches\pouches_woodland_co.paa",
            ""
        };
    };
    class k_scout_pouches_heavy_woodland2: k_scout_pouches_heavy
    {
        displayname = "[K] Heavy Scout Pouches (Woodland)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\scout_pouches\pouches_woodland_co.paa",
            "kobra\442_units\data\vests\scout_pouches\pouches_woodland_co.paa",
            "kobra\442_units\data\vests\scout_pouches\pouches_woodland_co.paa"
        };
    };
    class k_scout_pouches_light_desert2: k_scout_pouches_light
    {
        displayname = "[K] Light Scout Pouches (Desert)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\scout_pouches\pouches_desert_co.paa",
            "",
            ""
        };
    };
    class k_scout_pouches_medium_desert2: k_scout_pouches_medium
    {
        displayname = "[K] Medium Scout Pouches (Desert)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\scout_pouches\pouches_desert_co.paa",
            "kobra\442_units\data\vests\scout_pouches\pouches_desert_co.paa",
            ""
        };
    };
    class k_scout_pouches_heavy_desert2: k_scout_pouches_heavy
    {
        displayname = "[K] Heavy Scout Pouches (Desert)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\scout_pouches\pouches_desert_co.paa",
            "kobra\442_units\data\vests\scout_pouches\pouches_desert_co.paa",
            "kobra\442_units\data\vests\scout_pouches\pouches_desert_co.paa"
        };
    };