//////////clone helmets////////////
    class k_ls_p2_helmet: k_ls_p2_helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        picture = "\kobra\k_unit_ls\data\ui\p2_helmet.paa";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_ls\data\helmet\p2_helmet\camo1_co.paa",
            "kobra\k_unit_ls\data\helmet\p2_helmet\visor_co.paa"
        };
    };
    class k_ls_p15_helmet: k_ls_p15_helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        picture = "\kobra\k_unit_ls\data\ui\p15_helmet.paa";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_ls\data\helmet\p15_helmet\camo1_co.paa",
            "kobra\k_unit_ls\data\helmet\p15_helmet\visor_co.paa",
            "kobra\k_unit_ls\data\helmet\p15_helmet\illum_co.paa"
        };
    };
    class k_ls_airborne_helmet: k_ls_airborne_helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        picture = "\kobra\k_unit_ls\data\ui\ab_helmet.paa";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_ls\data\helmet\ab_helmet\camo1_co.paa",
            "kobra\k_unit_ls\data\helmet\ab_helmet\visor_co.paa"
        };
    };
    class k_ls_p2_pilot_helmet: k_ls_p2_pilot_helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        picture = "\kobra\k_unit_ls\data\ui\pilot_p2_helmet.paa";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_ls\data\helmet\p2_pilot_helmet\camo1_co.paa",
            "kobra\k_unit_ls\data\helmet\p2_pilot_helmet\visor_co.paa" 
        };
    };
    class k_ls_barc_helmet: k_ls_barc_helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        picture = "\kobra\k_unit_ls\data\ui\barc_helmet.paa";
        hiddenselectionstextures[] =
        {
            "kobra\k_unit_ls\data\helmet\barc_helmet\camo1_co.paa",
            "kobra\k_unit_ls\data\helmet\barc_helmet\visor_co.paa"  
        };
    };
    class k_ls_p1_arf_helmet: k_ls_p1_arf_helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        displayname = "[K/LS] ARF Helmet";
        picture = "\kobra\k_unit_ls\data\ui\arf_p1_helmet.paa";
        hiddenselectionsmaterials[] = 
        {
            "kobra\k_unit_ls\data\helmet\arf_helmet\camo1.rvmat",
            "",
            "kobra\k_unit_ls\data\helmet\arf_helmet\visor.rvmat"
        };
        hiddenselectionstextures[] =
        {
            "kobra\k_unit_ls\data\helmet\arf_helmet\camo1_co.paa",
            "",
            "kobra\k_unit_ls\data\helmet\arf_helmet\visor_co.paa"  
        };
    };
    class k_ls_p2_arf_helmet: k_ls_p2_arf_helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        displayname = "[K/LS] ARF Helmet w/ Flaps";
        //model = "442_units\arf_p2_helmet.p3d";
        picture = "\kobra\k_unit_ls\data\ui\arf_p2_helmet.paa";
        hiddenselectionsmaterials[] = 
        {
            "kobra\k_unit_ls\data\helmet\arf_helmet\camo1.rvmat",
            "kobra\k_unit_ls\data\helmet\arf_helmet\camo2.rvmat",
            "kobra\k_unit_ls\data\helmet\arf_helmet\visor.rvmat"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_ls\data\helmet\arf_helmet\camo1_co.paa",
            "kobra\k_unit_ls\data\helmet\arf_helmet\camo2_co.paa",
            "kobra\k_unit_ls\data\helmet\arf_helmet\visor_co.paa"
        };
    };
    class k_ls_eng_helmet: k_ls_eng_helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        picture = "\kobra\k_unit_ls\data\ui\eng_helmet.paa";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_ls\data\helmet\eng_helmet\camo1_co.paa",
            "kobra\k_unit_ls\data\helmet\eng_helmet\light_co.paa",
            "kobra\k_unit_ls\data\helmet\eng_helmet\visor_co.paa"
        };
    };
    class k_ls_p1_helmet: k_ls_p1_helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        picture = "\kobra\k_unit_ls\data\ui\p1_helmet.paa";
        hiddenselectionstextures[] =
        {
            "kobra\k_unit_ls\data\helmet\p1_helmet\camo1_co.paa",
            "kobra\k_unit_ls\data\helmet\p1_helmet\visor_co.paa",
            "kobra\k_unit_ls\data\helmet\p1_helmet\illum_co.paa",
        };
    };
    class k_ls_p1_helmet_sgt: k_ls_p1_helmet
    {
        displayname = "[K/LS] P1 SGT Helmet";
        hiddenselectionstextures[] =
        {
            "kobra\k_unit_ls\data\helmet\p1_helmet\camo1_sgt_co.paa",
            "kobra\k_unit_ls\data\helmet\p1_helmet\visor_co.paa",
            "kobra\k_unit_ls\data\helmet\p1_helmet\illum_co.paa",
        };
    };
    class k_ls_p1_helmet_lt: k_ls_p1_helmet
    {
        displayname = "[K/LS] P1 LT Helmet";
        hiddenselectionstextures[] =
        {
            "kobra\k_unit_ls\data\helmet\p1_helmet\camo1_lt_co.paa",
            "kobra\k_unit_ls\data\helmet\p1_helmet\visor_co.paa",
            "kobra\k_unit_ls\data\helmet\p1_helmet\illum_co.paa",
        };
    };
    class k_ls_p1_helmet_cpt: k_ls_p1_helmet
    {
        displayname = "[K/LS] P1 CPT Helmet";
        hiddenselectionstextures[] =
        {
            "kobra\k_unit_ls\data\helmet\p1_helmet\camo1_cpt_co.paa",
            "kobra\k_unit_ls\data\helmet\p1_helmet\visor_co.paa",
            "kobra\k_unit_ls\data\helmet\p1_helmet\illum_co.paa",
        };
    };
    class k_ls_p1_helmet_cmd: k_ls_p1_helmet
    {
        displayname = "[K/LS] P1 CMD Helmet";
        hiddenselectionstextures[] =
        {
            "kobra\k_unit_ls\data\helmet\p1_helmet\camo1_cmd_co.paa",
            "kobra\k_unit_ls\data\helmet\p1_helmet\visor_co.paa",
            "kobra\k_unit_ls\data\helmet\p1_helmet\illum_co.paa",
        };
    };
    class k_ls_p1_pilot_helmet: k_ls_p1_pilot_helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        picture = "\kobra\k_unit_ls\data\ui\pilot_p1_helmet.paa";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_ls\data\helmet\p1_pilot_helmet\camo1_co.paa",
            "kobra\k_unit_ls\data\helmet\p1_pilot_helmet\camo2_co.paa",
            "kobra\k_unit_ls\data\helmet\p1_pilot_helmet\visor_co.paa",
        };
    };
    class k_ls_p1_specops_helmet: k_ls_p1_specops_helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        picture = "\kobra\k_unit_ls\data\ui\spec_p1_helmet.paa";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_ls\data\helmet\p1_spec_helmet\camo1_co.paa",
            "kobra\k_unit_ls\data\helmet\p1_spec_helmet\visor_co.paa",
        };
    };
    class k_ls_p2_specops_helmet: k_ls_p2_specops_helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        picture = "\kobra\k_unit_ls\data\ui\spec_p2_helmet.paa";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_ls\data\helmet\p2_spec_helmet\camo1_co.paa",
            "kobra\k_unit_ls\data\helmet\p2_spec_helmet\visor_co.paa",
        };
    };
    class k_ls_rex_helmet: k_ls_rex_helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        picture = "\kobra\k_unit_ls\data\ui\rex_helmet.paa";
        hiddenselectionstextures[] =
        {
            "kobra\k_unit_ls\data\helmet\rex_helmet\camo1_co.paa",
            "kobra\k_unit_ls\data\helmet\rex_helmet\visor_co.paa" 
        };
    };

////////b1 helmets//////////
    class k_ls_b1_helmet: k_ls_b1_helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        displayname = "[K/LS] B1 Droid Head";
        picture = "\ls_armor_redfor\uniform\cis\ui\icon_b1_uniform_ca.paa";
        hiddenselectionsmaterials[] = 
        {
            "kobra\k_unit_ls\data\uniform\b1_uniform\camo1.rvmat"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_ls\data\uniform\b1_uniform\b1_upper_co.paa"
        };
    };
    class k_ls_b1_helmet_geonosis: k_ls_b1_helmet
    {
        displayname = "[K/LS] B1 Droid Head (Geonosis)";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_ls\data\uniform\b1_uniform\b1_upper_geonosis_co.paa"
        };
    };
    class k_ls_b1_helmet_cmd: k_ls_b1_helmet
    {
        displayname = "[K/LS] B1 Droid Head (Commander)";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_ls\data\uniform\b1_uniform\b1_upper_cmd_co.paa"
        };
    };
    class k_ls_b1_helmet_woodland: k_ls_b1_helmet
    {
        displayname = "[K/LS] B1 Droid Head (Woodland)";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_ls\data\uniform\b1_uniform\b1_upper_woodland_co.paa"
        };
    };
    class k_ls_b1_helmet_desert: k_ls_b1_helmet
    {
        displayname = "[K/LS] B1 Droid Head (Desert)";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_ls\data\uniform\b1_uniform\b1_upper_desert_co.paa"
        };
    };
    class k_ls_b1_helmet_winter: k_ls_b1_helmet
    {
        displayname = "[K/LS] B1 Droid Head (Winter)";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_ls\data\uniform\b1_uniform\b1_upper_winter_co.paa"
        };
    };