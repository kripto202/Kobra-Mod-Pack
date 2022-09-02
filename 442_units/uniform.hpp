    class k_scout_uniform: 442_uniform_base
    {
        displayname = "[K] Scout Trooper Armor";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        model = "kobra\442_equipment\scout_uniform.p3d";
        class ItemInfo: Iteminfo
        {
            ContainerClass = "Supply150";
            mass = 20;
            uniformclass = "k_scout_unit";
        };
    };

    class k_clone_uniform: k_scout_uniform
    {
        displayname = "[K] Clone Trooper Armor";
        model = "kobra\442_equipment\clone_uniform.p3d";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit";
        };
    };

    class k_commando_uniform: k_scout_uniform
    {
        displayname = "[K] Commando Armor";
        model = "kobra\442_equipment\commando_uniform.p3d";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_commando_unit";
        };
    };