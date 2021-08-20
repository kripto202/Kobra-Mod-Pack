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