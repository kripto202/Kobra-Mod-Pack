class cfgpatches
{
    class k_misc_44_personal_locker
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "44_personal_locker",
            "44_personal_locker_kripto",
            "44_personal_locker_azarael",
            "44_personal_locker_delta",
            "44_personal_locker_dishonored",
            "44_personal_locker_hollen",
            "44_personal_locker_monty",
            "44_personal_locker_nico",
            "44_personal_locker_sexton",
            "44_personal_locker_steele",
            "44_personal_locker_euda",
            "44_personal_locker_piercer",
            "44_personal_locker_ivanov",
            "44_personal_locker_kyram",
            "44_personal_locker_rex",
            "44_personal_locker_wumbo"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class k_personal_locker;
    class 44_personal_locker: k_personal_locker
    {
        displayname = "Personal Locker [44th AB]";
        hiddenselectionstextures[] = 
        {
            "kobra\k_misc_44\personal_locker\data\44_body_co.paa",
			"kobra\442_misc\personal_locker\data\screen_co.paa",
			"kobra\442_misc\personal_locker\data\picture1_co.paa"
        };
        multistructureparts[] = 
        {
            {
                "",
                "helmet"
            }
        };
    };

    class 44_personal_locker_kripto: k_personal_locker
    {
        displayname = "Personal Locker (Kripto)";
        hiddenselectionstextures[]=
		{
			"kobra\k_misc_44\personal_locker\data\44_body_co.paa",
			"kobra\k_misc_44\personal_locker\data\screen_kripto_co.paa",
			"kobra\442_misc\personal_locker\data\picture1_co.paa"
		};
        multistructureparts[] = 
        {
            {
                "k_ls_headgear_44_kripto",
                "helmet"
            }
        };
    };
    class 44_personal_locker_azarael: k_personal_locker
    {
        displayname = "Personal Locker (Azarael)";
        hiddenselectionstextures[]=
		{
			"kobra\k_misc_44\personal_locker\data\44_body_co.paa",
			"kobra\k_misc_44\personal_locker\data\screen_azarael_co.paa",
			"kobra\k_misc_44\personal_locker\data\picture_azarael_co.paa"
		};
        multistructureparts[] = 
        {
            {
                "k_ls_headgear_44_azarael",
                "helmet"
            }
        };
    };
    class 44_personal_locker_delta: k_personal_locker
    {
        displayname = "Personal Locker (Delta)";
        hiddenselectionstextures[]=
		{
			"kobra\k_misc_44\personal_locker\data\44_body_co.paa",
			"kobra\k_misc_44\personal_locker\data\screen_delta_co.paa",
			"kobra\k_misc_44\personal_locker\data\picture_delta_co.paa"
		};
        multistructureparts[] = 
        {
            {
                "k_ls_headgear_44_delta",
                "helmet"
            }
        };
    };
    class 44_personal_locker_dishonored: k_personal_locker
    {
        displayname = "Personal Locker (Dishonored)";
        hiddenselectionstextures[]=
		{
			"kobra\k_misc_44\personal_locker\data\44_body_co.paa",
			"kobra\k_misc_44\personal_locker\data\screen_dishonored_co.paa",
			"kobra\k_misc_44\personal_locker\data\picture_dishonored_co.paa"
		};
        multistructureparts[] = 
        {
            {
                "k_ls_headgear_44_dishonored",
                "helmet"
            }
        };
    };
    /*class 44_personal_locker_hollen: k_personal_locker
    {
        displayname = "Personal Locker (Hollen)";
        hiddenselectionstextures[]=
		{
			"kobra\k_misc_44\personal_locker\data\44_body_co.paa",
			"kobra\k_misc_44\personal_locker\data\screen_hollen_co.paa",
			"kobra\k_misc_44\personal_locker\data\picture_hollen_co.paa"
		};
        multistructureparts[] = 
        {
            {
                "k_ls_headgear_44_hollen",
                "helmet"
            }
        };
    };*/
    class 44_personal_locker_monty: k_personal_locker
    {
        displayname = "Personal Locker (Monty)";
        hiddenselectionstextures[]=
		{
			"kobra\k_misc_44\personal_locker\data\44_body_co.paa",
			"kobra\k_misc_44\personal_locker\data\screen_monty_co.paa",
			"kobra\k_misc_44\personal_locker\data\picture_monty_co.paa"
		};
        multistructureparts[] = 
        {
            {
                "k_ls_headgear_44_monty",
                "helmet"
            }
        };
    };
    class 44_personal_locker_nico: k_personal_locker
    {
        displayname = "Personal Locker (Nico)";
        hiddenselectionstextures[]=
		{
			"kobra\k_misc_44\personal_locker\data\44_body_co.paa",
			"kobra\k_misc_44\personal_locker\data\screen_nico_co.paa",
			"kobra\k_misc_44\personal_locker\data\picture_nico_co.paa"
		};
        multistructureparts[] = 
        {
            {
                "k_ls_headgear_44_nico",
                "helmet"
            }
        };
    };
    class 44_personal_locker_sexton: k_personal_locker
    {
        displayname = "Personal Locker (Sexton)";
        hiddenselectionstextures[]=
		{
			"kobra\k_misc_44\personal_locker\data\44_body_co.paa",
			"kobra\k_misc_44\personal_locker\data\screen_sexton_co.paa",
			"kobra\k_misc_44\personal_locker\data\picture_sexton_co.paa"
		};
        multistructureparts[] = 
        {
            {
                "k_ls_headgear_44_sexton",
                "helmet"
            }
        };
    };
    class 44_personal_locker_steele: k_personal_locker
    {
        displayname = "Personal Locker (Steele)";
        hiddenselectionstextures[]=
		{
			"kobra\k_misc_44\personal_locker\data\44_body_co.paa",
			"kobra\k_misc_44\personal_locker\data\screen_steele_co.paa",
			"kobra\k_misc_44\personal_locker\data\picture_steele_co.paa"
		};
        multistructureparts[] = 
        {
            {
                "k_ls_headgear_44_steele",
                "helmet"
            }
        };
    };
    class 44_personal_locker_euda: k_personal_locker
    {
        displayname = "Personal Locker (Euda)";
        hiddenselectionstextures[]=
		{
			"kobra\k_misc_44\personal_locker\data\44_body_co.paa",
			"kobra\k_misc_44\personal_locker\data\screen_euda_co.paa",
			"kobra\k_misc_44\personal_locker\data\picture_euda_co.paa"
		};
        multistructureparts[] = 
        {
            {
                "k_ls_headgear_44_euda",
                "helmet"
            }
        };
    };
    class 44_personal_locker_piercer: k_personal_locker
    {
        displayname = "Personal Locker (Piercer)";
        hiddenselectionstextures[]=
		{
			"kobra\k_misc_44\personal_locker\data\44_body_co.paa",
			"kobra\442_misc\personal_locker\data\screen_co.paa",
			"kobra\442_misc\personal_locker\data\picture1_co.paa"
		};
        multistructureparts[] = 
        {
            {
                "k_ls_headgear_44_piercer",
                "helmet"
            }
        };
    };
    class 44_personal_locker_ivanov: k_personal_locker
    {
        displayname = "Personal Locker (Ivanov)";
        hiddenselectionstextures[]=
		{
			"kobra\k_misc_44\personal_locker\data\44_body_co.paa",
			"kobra\442_misc\personal_locker\data\screen_co.paa",
			"kobra\442_misc\personal_locker\data\picture1_co.paa"
		};
        multistructureparts[] = 
        {
            {
                "k_ls_headgear_44_ivanov",
                "helmet"
            }
        };
    };
    class 44_personal_locker_kyram: k_personal_locker
    {
        displayname = "Personal Locker (Kyram)";
        hiddenselectionstextures[]=
		{
			"kobra\k_misc_44\personal_locker\data\44_body_co.paa",
			"kobra\442_misc\personal_locker\data\screen_co.paa",
			"kobra\442_misc\personal_locker\data\picture1_co.paa"
		};
        multistructureparts[] = 
        {
            {
                "k_ls_headgear_44_kyram",
                "helmet"
            }
        };
    };
    class 44_personal_locker_rex: k_personal_locker
    {
        displayname = "Personal Locker (Rex)";
        hiddenselectionstextures[]=
		{
			"kobra\k_misc_44\personal_locker\data\44_body_co.paa",
			"kobra\442_misc\personal_locker\data\screen_co.paa",
			"kobra\442_misc\personal_locker\data\picture1_co.paa"
		};
        multistructureparts[] = 
        {
            {
                "k_ls_headgear_44_rex_rex",
                "helmet"
            }
        };
    };
    class 44_personal_locker_wumbo: k_personal_locker
    {
        displayname = "Personal Locker (Wumbo)";
        hiddenselectionstextures[]=
		{
			"kobra\k_misc_44\personal_locker\data\44_body_co.paa",
			"kobra\442_misc\personal_locker\data\screen_co.paa",
			"kobra\442_misc\personal_locker\data\picture1_co.paa"
		};
        multistructureparts[] = 
        {
            {
                "k_ls_headgear_44_wumbo",
                "helmet"
            }
        };
    };
};