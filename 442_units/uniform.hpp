    class k_scout_uniform: 442_uniform_base
    {
        displayname = "[K] Scout Trooper Armor";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        model = "kobra\442_units\scout_uniform.p3d";
        class ItemInfo: Iteminfo
        {
            ContainerClass = "Supply150";
            mass = 20;
            uniformclass = "k_scout_unit";
        };
    };

/////////designs//////////
    class k_scout_uniform_dukas: k_scout_uniform
    {
        displayname = "[K] Scout Trooper Armor (Dukas)";
        class ItemInfo: Iteminfo
        {
            uniformclass = "k_scout_unit_dukas";
        };
    };
    class k_scout_uniform_camo: k_scout_uniform
    {
        displayname = "[K] Scout Trooper Armor [Camo]";
        class ItemInfo: Iteminfo
        {
            uniformclass = "k_scout_unit_camo";
        };
    };
    class k_scout_uniform_artic: k_scout_uniform
    {
        displayname = "[K] Scout Trooper Armor [Artic]";
        class ItemInfo: Iteminfo
        {
            uniformclass = "k_scout_unit_arctic";
        };
    };
    class k_scout_uniform_desert: k_scout_uniform
    {
        displayname = "[K] Scout Trooper Armor [Desert]";
        class ItemInfo: Iteminfo
        {
            uniformclass = "k_scout_unit_desert";
        };
    };
    class k_scout_uniform_jungle: k_scout_uniform
    {
        displayname = "[K] Scout Trooper Armor [Jungle]";
        class ItemInfo: Iteminfo
        {
            uniformclass = "k_scout_unit_jungle";
        };
    };