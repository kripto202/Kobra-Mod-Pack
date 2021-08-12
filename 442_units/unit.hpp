    class k_scout_unit: 442_unit_base
    {
        displayname = "Scout Trooper";
        model = "kobra\442_units\scout_uniform.p3d";
        uniformclass = "k_scout_uniform";
        faction = "kobra_b";
        editorSubCategory = "442_trooper";
        hiddenselections[] = 
        {
            "armor",
            "gloves",
            "undersuit"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\uniform\scout_uniform\armor_co.paa",
            "kobra\442_units\data\uniform\scout_uniform\gloves_co.paa",
            "kobra\442_units\data\uniform\scout_uniform\undersuit_co.paa"
        };
    };
    class k_clone_unit: k_scout_unit
    {
        displayname = "Clone Trooper";
        model = "kobra\442_units\clone_uniform.p3d";
        uniformclass = "k_clone_uniform";
        hiddenselections[] = 
        {
            "upper",
            "lower",
            "clan",
			"insignia"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\uniform\clone_uniform\upper_armor_co.paa",
            "kobra\442_units\data\uniform\clone_uniform\lower_armor_co.paa"
        };
    };

////////////designs/////////////
    /*class k_scout_unit_dukas: k_scout_unit
    {
        displayname = "Scout Trooper (Dukas)";
        uniformclass = "k_scout_uniform_dukas";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\uniform\scout_uniform\armor_dukas_co.paa",
            "kobra\442_units\data\uniform\scout_uniform\gloves_dukas_co.paa",
            "kobra\442_units\data\uniform\scout_uniform\undersuit_dukas_co.paa"
        };
    };
    class k_scout_unit_camo: k_scout_unit
    {
        displayname = "Scout Trooper [Camo]";
        uniformclass = "k_scout_uniform_camo";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\uniform\scout_uniform\armor_camo_co.paa",
            "kobra\442_units\data\uniform\scout_uniform\gloves_co.paa",
            "kobra\442_units\data\uniform\scout_uniform\undersuit_camo_co.paa"
        };
    };
    class k_scout_unit_arctic: k_scout_unit
    {
        displayname = "Scout Trooper [Arctic]";
        uniformclass = "k_scout_uniform_arctic";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\uniform\scout_uniform\armor_arctic_co.paa",
            "kobra\442_units\data\uniform\scout_uniform\gloves_co.paa",
            "kobra\442_units\data\uniform\scout_uniform\undersuit_co.paa"
        };
    };
    class k_scout_unit_jungle: k_scout_unit
    {
        displayname = "Scout Trooper [Jungle]";
        uniformclass = "k_scout_uniform_jungle";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\uniform\scout_uniform\armor_jungle_co.paa",
            "kobra\442_units\data\uniform\scout_uniform\gloves_co.paa",
            "kobra\442_units\data\uniform\scout_uniform\undersuit_camo_co.paa"
        };
    };
    class k_scout_unit_desert: k_scout_unit
    {
        displayname = "Scout Trooper [Desert]";
        uniformclass = "k_scout_uniform_desert";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\uniform\scout_uniform\armor_desert_co.paa",
            "kobra\442_units\data\uniform\scout_uniform\gloves_co.paa",
            "kobra\442_units\data\uniform\scout_uniform\undersuit_camo_co.paa"
        };
    };*/