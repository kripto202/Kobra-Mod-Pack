    class k_ls_198_ct_unit: k_ls_unit_base
    {
        scope = 1;
        scopecurator = 1;
        scopearsenal = 1;
        editorpreview = "";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "Kobra Mod Team Team";
		uniformclass = "k_ls_198_ct_uniform";
		faction = "198_ab";
		editorSubCategory = "442_trooper";
		displayname = "Trooper";
		movesFatigue = "CfgMovesFatigueTrooper";
		backpack = "";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_198\data\armor\198th_ct_upper_co.paa",
			"kobra\k_unit_198\data\armor\198th_ct_lower_co.paa",
			"kobra\k_unit_198\data\armor\undersuit_co.paa",
		};
		linkedItems[] = {};
		respawnlinkeditems[] = {};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]={};
		respawnMagazines[]={};
		items[] = {};
		respawnitems[] = {};
    };

    class k_ls_198_clc_unit: k_ls_198_ct_unit
    {
        uniformclass = "k_ls_198_clc_uniform";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_198\data\armor\198th_clc_upper_co.paa",
			"kobra\k_unit_198\data\armor\198th_clc_lower_co.paa",
			"kobra\k_unit_198\data\armor\undersuit_co.paa",
        };
    };
    class k_ls_198_sct_unit: k_ls_198_ct_unit
    {
        uniformclass = "k_ls_198_sct_uniform";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_198\data\armor\198th_sct_upper_co.paa",
			"kobra\k_unit_198\data\armor\198th_sct_lower_co.paa",
			"kobra\k_unit_198\data\armor\undersuit_co.paa",
        };
    };
    class k_ls_198_vct_unit: k_ls_198_ct_unit
    {
        uniformclass = "k_ls_198_vct_uniform";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_198\data\armor\198th_vct_upper_co.paa",
			"kobra\k_unit_198\data\armor\198th_vct_lower_co.paa",
			"kobra\k_unit_198\data\armor\undersuit_co.paa",
        };
    };
    class k_ls_198_medic_unit: k_ls_198_ct_unit
    {
        uniformclass = "k_ls_198_clc_uniform";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_198\data\armor\198th_medic_upper_co.paa",
			"kobra\k_unit_198\data\armor\198th_ct_lower_co.paa",
			"kobra\k_unit_198\data\armor\undersuit_co.paa",
        };
    };
    class k_ls_198_pilot_unit: k_ls_198_ct_unit
    {
        uniformclass = "k_ls_198_pilot_uniform";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_198\data\armor\198th_pilot_upper_co.paa",
			"kobra\k_unit_198\data\armor\198th_pilot_lower_co.paa",
			"kobra\k_unit_198\data\armor\undersuit_co.paa",
        };
    };
    class k_ls_198_arf_unit: k_ls_198_ct_unit
    {
        uniformclass = "k_ls_198_arf_uniform";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_198\data\armor\198th_arf_upper_co.paa",
			"kobra\k_unit_198\data\armor\198th_arf_lower_co.paa",
			"kobra\k_unit_198\data\armor\undersuit_co.paa",
        };
    };

    class k_ls_198_kermit_unit: k_ls_198_ct_unit
    {
        uniformclass = "k_ls_198_kermit_uniform";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_198\data\custom\kermit\198th_kermit_upper_co.paa",
			"kobra\k_unit_198\data\custom\kermit\198th_kermit_lower_co.paa",
			"kobra\k_unit_198\data\armor\undersuit_co.paa",
        };
    };
    class k_ls_198_mickey_unit: k_ls_198_ct_unit
    {
        uniformclass = "k_ls_198_mickey_uniform";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_198\data\custom\mickey\198th_mickey_upper_co.paa",
			"kobra\k_unit_198\data\custom\mickey\198th_mickey_lower_co.paa",
			"kobra\k_unit_198\data\armor\undersuit_co.paa",
        };
    };
    class k_ls_198_murk_unit: k_ls_198_ct_unit
    {
        uniformclass = "k_ls_198_murk_uniform";
        hiddenselectionstextures[] = 
        {
            "kobra\k_unit_198\data\custom\murk\198th_murk_upper_co.paa",
			"kobra\k_unit_198\data\custom\murk\198th_murk_lower_co.paa",
			"kobra\k_unit_198\data\armor\undersuit_co.paa",
        };
    };