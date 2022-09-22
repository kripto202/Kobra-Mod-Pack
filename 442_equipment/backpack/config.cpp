class cfgpatches
{
    class 442_equipment_backpack
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "k_clone_backpack_base",
			"k_clone_rto_backpack_base",
			"k_clone_small_backpack_base",
			"k_clone_medium_backpack_base",
			"k_clone_large_backpack_base",
			"k_clone_huge_backpack_base",

			"k_clone_small_backpack",
			"k_clone_small_backpack_pouches",
			"k_clone_small_backpack_radio",
			"k_clone_small_backpack_radio_pouches",
			"k_clone_small_backpack_44",
			"k_clone_small_backpack_pouches_44",
			"k_clone_small_backpack_radio_44",
			"k_clone_small_backpack_radio_pouches_44",

			"k_clone_medium_backpack",
			"k_clone_medium_backpack_rocket",
			"k_clone_medium_backpack_radio",
			"k_clone_medium_backpack_44",
			"k_clone_medium_backpack_rocket_44",
			"k_clone_medium_backpack_radio_44",

			"k_clone_large_backpack",
			"k_clone_large_backpack_pouch",
			"k_clone_large_backpack_medic",
			"k_clone_large_backpack_medic_pouch",
			"k_clone_large_backpack_eod_pouch",
			"k_clone_large_backpack_44",
			"k_clone_large_backpack_pouch_44",
			"k_clone_large_backpack_medic_44",
			"k_clone_large_backpack_medic_pouch_44",
			"k_clone_large_backpack_eod_pouch_44",
			"k_clone_huge_backpack",
			"k_clone_huge_backpack_pouches",
			"k_clone_huge_backpack_rocket",
			"k_clone_huge_backpack_44",
			"k_clone_huge_backpack_pouches_44",
			"k_clone_huge_backpack_rocket_44",

			"k_clone_arc_backpack",

			"k_commando_basic_backpack",
			"k_commando_eod_backpack",
			"k_commando_pouches_backpack",
			"k_commando_radio_backpack",
			"k_commando_tech_backpack",
			"k_commando_eod_backpack_44",
			"k_commando_pouches_backpack_44",
			"k_commando_radio_backpack_44",
			"k_commando_tech_backpack_44",

			"k_clone_arf_comms",
			"k_clone_wrist_comms",
			"k_clone_p1_comms",
			"k_clone_p2_comms",
			"k_clone_scout_comms",

			"442_jumppack",
			"442_jumppack_44",
			"442_jt12",
			"442_jt12_single",
			"442_jt12_pj",
			"442_jt12_pj_radio",
			"442_jt12_radio",
			"442_cdv_19",
			"442_cdv_19_radio"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class B_Kitbag_rgr;
    class k_clone_backpack_base: B_Kitbag_rgr
	{
		author = "KOBRA Mod Team";
		scope = 0;
		picture = "\kobra\kobra_core\kobra.paa";
		displayname = "";
		model = "";
		maximumload = 250;
	};
	class k_clone_rto_backpack_base: k_clone_backpack_base
	{
		maximumload=100;
		displayName="";
		tf_dialog = "mr6000l_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
	};
    class k_clone_small_backpack_base: k_clone_backpack_base
    {
        displayname = "[K] Clone Trooper Backpack";
        scope = 1;
        model = "kobra\442_equipment\backpack\model\clone\k_small_backpack.p3d";
        maximumload = 100; //100 base | +50 pouches | -50 radio
        picture = "\kobra\kobra_core\kobra.paa";
		hiddenselections[] = 
		{
			"backpack",
            "cover",
            "pouches",
            "radio",
            "screen"
		};
    };
	class k_clone_medium_backpack_base: k_clone_backpack_base
    {
        displayname = "[K] Clone Trooper Backpack";
        scope = 1;
        model = "kobra\442_equipment\backpack\model\clone\k_medium_backpack.p3d";
        maximumload = 150; //150 base | +50 pouches | -75 radio | +25 rockets
        picture = "\kobra\kobra_core\kobra.paa";
    };
    class k_clone_large_backpack_base: k_clone_small_backpack_base
    {
        displayname = "[K] Clone Trooper Large Backpack";
        model = "kobra\442_equipment\backpack\model\clone\k_large_backpack.p3d";
        picture = "\kobra\kobra_core\kobra.paa";
        maximumload = 225; //225 base | +50 pouches | -75 radio
        hiddenselections[] = 
        {
            "backpack",
            "cover",
            "pouches"
        };
    };
	class k_clone_huge_backpack_base: k_clone_backpack_base
    {
        displayname = "[K] Clone Trooper Huge Backpack";
        picture = "\kobra\kobra_core\kobra.paa";
        maximumload = 325; //400 base | +75 pouches | +240 rockets
    };

///small backpack///
    class k_clone_small_backpack: k_clone_small_backpack_base
    {
        displayname = "[K] Clone Trooper Small Backpack";
        scope = 2;
        maximumload = 100;
		mass = 20;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\small\small_backpack_co.paa",
            "kobra\442_equipment\backpack\data\small\small_backpack_cover_co.paa",
            "",
            "",
            ""
        };
    };
    class k_clone_small_backpack_pouches: k_clone_small_backpack_base
    {
        displayname = "[K] Clone Trooper Small Backpack w/ Pouches";
        maximumload = 150;
		mass = 25;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\small\small_backpack_co.paa",
            "kobra\442_equipment\backpack\data\small\small_backpack_cover_co.paa",
            "kobra\442_equipment\backpack\data\small\small_backpack_pouches_co.paa",
            "",
            ""
        };
    };
	class k_clone_small_backpack_radio: k_clone_small_backpack_base
    {
        displayname = "[K] Clone Trooper Small Radio Backpack";
        scope = 2;
        maximumload = 50;
        tf_dialog = "mr6000l_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=25000;
        tf_subtype="digital_lr";
		mass = 50;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\small\small_backpack_co.paa",
            "",
            "",
            "kobra\442_equipment\backpack\data\small\small_backpack_radio_co.paa",
            "kobra\442_equipment\backpack\data\small\small_backpack_radio_co.paa"
        };
    };
    class k_clone_small_backpack_radio_pouches: k_clone_small_backpack_base
    {
        displayname = "[K] Clone Trooper Small Radio Backpack w/ Pouches";
        scope = 2;
        maximumload = 100;
        tf_dialog = "mr6000l_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=25000;
        tf_subtype="digital_lr";
		mass = 55;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\small\small_backpack_co.paa",
            "",
            "kobra\442_equipment\backpack\data\small\small_backpack_pouches_co.paa",
            "kobra\442_equipment\backpack\data\small\small_backpack_radio_co.paa",
            "kobra\442_equipment\backpack\data\small\small_backpack_radio_co.paa"
        };
    };

	class k_clone_small_backpack_44: k_clone_small_backpack
    {
        displayname = "[44/K] Clone Trooper Small Backpack";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\small\unit_designs\44ab\small_backpack_co.paa",
            "kobra\442_equipment\backpack\data\small\small_backpack_cover_co.paa",
            "",
            "",
            ""
        };
    };
    class k_clone_small_backpack_pouches_44: k_clone_small_backpack_pouches
    {
        displayname = "[44/K] Clone Trooper Small Backpack w/ Pouches";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\small\unit_designs\44ab\small_backpack_co.paa",
            "kobra\442_equipment\backpack\data\small\small_backpack_cover_co.paa",
            "kobra\442_equipment\backpack\data\small\small_backpack_pouches_co.paa",
            "",
            ""
        };
    };
	class k_clone_small_backpack_radio_44: k_clone_small_backpack_radio
    {
        displayname = "[44/K] Clone Trooper Small Radio Backpack";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\small\unit_designs\44ab\small_backpack_co.paa",
            "",
            "",
            "kobra\442_equipment\backpack\data\small\small_backpack_radio_co.paa",
            "kobra\442_equipment\backpack\data\small\small_backpack_radio_co.paa"
        };
    };
    class k_clone_small_backpack_radio_pouches_44: k_clone_small_backpack_radio_pouches
    {
        displayname = "[44/K] Clone Trooper Small Radio Backpack w/ Pouches";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\small\unit_designs\44ab\small_backpack_co.paa",
            "",
            "kobra\442_equipment\backpack\data\small\small_backpack_pouches_co.paa",
            "kobra\442_equipment\backpack\data\small\small_backpack_radio_co.paa",
            "kobra\442_equipment\backpack\data\small\small_backpack_radio_co.paa"
        };
    };

///medium backpack
	class k_clone_medium_backpack: k_clone_medium_backpack_base
	{
		displayname = "[K] Clone Trooper Medium Backpack";
		scope = 2;
		maximumload = 150;
		model = "kobra\442_equipment\backpack\model\clone\k_medium_backpack.p3d";
		mass = 30;
		hiddenselections[] = 
		{
			"backpack",
			"cover"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\medium\medium_backpack_co.paa",
			"kobra\442_equipment\backpack\data\medium\medium_backpack_cover_co.paa"
		};
	};
	class k_clone_medium_backpack_rocket: k_clone_medium_backpack
	{
		displayname = "[K] Clone Trooper Medium Rocket Backpack";
		maximumload = 175;
		model = "kobra\442_equipment\backpack\model\clone\k_medium_backpack_rockets.p3d";
		mass = 70;
		hiddenselections[] = 
		{
			"backpack",
			"rocket"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\medium\medium_backpack_co.paa",
			"kobra\442_equipment\backpack\data\medium\medium_backpack_rockets_co.paa"
		};
	};
	class k_clone_medium_backpack_radio: k_clone_medium_backpack
	{
		displayname = "[K] Clone Trooper Medium Radio Backpack";
		maximumload = 75;
		tf_dialog = "mr6000l_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=25000;
        tf_subtype="digital_lr";
		model = "kobra\442_equipment\backpack\model\clone\k_medium_backpack_radio.p3d";
		mass = 60;
		hiddenselections[] = 
		{
			"backpack",
			"radio"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\medium\medium_backpack_co.paa",
			"kobra\442_equipment\backpack\data\medium\medium_backpack_radio_co.paa"
		};
	};

	class k_clone_medium_backpack_44: k_clone_medium_backpack
	{
		displayname = "[44/K] Clone Trooper Medium Backpack";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\medium\unit_designs\44ab\medium_backpack_co.paa",
			"kobra\442_equipment\backpack\data\medium\medium_backpack_cover_co.paa"
		};
	};
	class k_clone_medium_backpack_rocket_44: k_clone_medium_backpack_rocket
	{
		displayname = "[44/K] Clone Trooper Medium Rocket Backpack";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\medium\unit_designs\44ab\medium_backpack_co.paa",
			"kobra\442_equipment\backpack\data\medium\medium_backpack_rockets_co.paa"
		};
	};
	class k_clone_medium_backpack_radio_44: k_clone_medium_backpack_radio
	{
		displayname = "[44/K] Clone Trooper Medium Radio Backpack";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\medium\unit_designs\44ab\medium_backpack_co.paa",
			"kobra\442_equipment\backpack\data\medium\medium_backpack_radio_co.paa"
		};
	};

///large backpack///
    class k_clone_large_backpack: k_clone_large_backpack_base
    {
        displayname = "[K] Clone Trooper Large Backpack";
        scope = 2;
        maximumload = 225;
		mass = 50;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\large\large_backpack_co.paa",
            "kobra\442_equipment\backpack\data\large\large_backpack_cover_co.paa",
            ""
        };
    };
    class k_clone_large_backpack_pouch: k_clone_large_backpack_base
    {
        displayname = "[K] Clone Trooper Large Backpack w/ Pouches";
        scope = 2;
        maximumload = 275;
		mass = 55;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\large\large_backpack_co.paa",
            "kobra\442_equipment\backpack\data\large\large_backpack_cover_co.paa",
            "kobra\442_equipment\backpack\data\large\large_backpack_pouches_co.paa"
        };
    };
    class k_clone_large_backpack_medic: k_clone_large_backpack_base
    {
        displayname = "[K] Clone Trooper Large Medic Backpack";
        scope = 2;
        maximumload = 225;
		mass = 55;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\large\large_backpack_medic_co.paa",
            "kobra\442_equipment\backpack\data\large\large_backpack_cover_co.paa",
            ""
        };
    };
    class k_clone_large_backpack_medic_pouch: k_clone_large_backpack_base
    {
        displayname = "[K] Clone Trooper Large Medic Backpack w/ Pouches";
        scope = 2;
        maximumload = 275;
		mass = 60;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\large\large_backpack_medic_co.paa",
            "kobra\442_equipment\backpack\data\large\large_backpack_cover_co.paa",
            "kobra\442_equipment\backpack\data\large\large_backpack_pouches_co.paa"
        };
    };
    class k_clone_large_backpack_eod_pouch: k_clone_large_backpack_base
    {
        displayname = "[K] Clone Trooper Large EOD Backpack w/ Pouches";
        scope = 2;
        maximumload = 275;
		mass = 60;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\large\large_backpack_eod_co.paa",
            "kobra\442_equipment\backpack\data\large\large_backpack_cover_co.paa",
            "kobra\442_equipment\backpack\data\large\large_backpack_pouches_co.paa"
        };
    };

	class k_clone_large_backpack_44: k_clone_large_backpack
    {
        displayname = "[44/K] Clone Trooper Large Backpack";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\large\unit_designs\44ab\large_backpack_co.paa",
            "kobra\442_equipment\backpack\data\large\large_backpack_cover_co.paa",
            ""
        };
    };
    class k_clone_large_backpack_pouch_44: k_clone_large_backpack_pouch
    {
        displayname = "[44/K] Clone Trooper Large Backpack w/ Pouches";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\large\unit_designs\44ab\large_backpack_co.paa",
            "kobra\442_equipment\backpack\data\large\large_backpack_cover_co.paa",
            "kobra\442_equipment\backpack\data\large\unit_designs\44ab\large_backpack_pouches_co.paa"
        };
    };
    class k_clone_large_backpack_medic_44: k_clone_large_backpack_medic
    {
        displayname = "[44/K] Clone Trooper Large Medic Backpack";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\large\unit_designs\44ab\large_backpack_medic_co.paa",
            "kobra\442_equipment\backpack\data\large\large_backpack_cover_co.paa",
            ""
        };
    };
    class k_clone_large_backpack_medic_pouch_44: k_clone_large_backpack_medic_pouch
    {
        displayname = "[44/K] Clone Trooper Large Medic Backpack w/ Pouches";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\large\unit_designs\44ab\large_backpack_medic_co.paa",
            "kobra\442_equipment\backpack\data\large\large_backpack_cover_co.paa",
            "kobra\442_equipment\backpack\data\large\unit_designs\44ab\large_backpack_pouches_co.paa"
        };
    };
    class k_clone_large_backpack_eod_pouch_44: k_clone_large_backpack_eod_pouch
    {
        displayname = "[44/K] Clone Trooper Large EOD Backpack w/ Pouches";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\large\unit_designs\44ab\large_backpack_eod_co.paa",
            "kobra\442_equipment\backpack\data\large\large_backpack_cover_co.paa",
            "kobra\442_equipment\backpack\data\large\unit_designs\44ab\large_backpack_pouches_co.paa"
        };
    };

///huge backpack///
	class k_clone_huge_backpack: k_clone_huge_backpack_base
	{
		displayname = "[K] Clone Trooper Huge Backpack";
		model = "kobra\442_equipment\backpack\model\clone\k_huge_backpack.p3d";
		scope = 2;
		maximumload = 325;
		ace_gunbag = 1;
		mass = 90;
		hiddenselections[] = 
		{
			"backpack"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\huge\huge_backpack_co.paa" ///backpack
		};
	};
	class k_clone_huge_backpack_pouches: k_clone_huge_backpack_base
	{
		displayname = "[K] Clone Trooper Huge Backpack w/ Pouches";
		model = "kobra\442_equipment\backpack\model\clone\k_huge_backpack_pouches.p3d";
		scope = 2;
		maximumload = 400;
		mass = 100;
		hiddenselections[] = 
		{
			"backpack",
			"pouches"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\huge\huge_backpack_co.paa", ///backpack
            "kobra\442_equipment\backpack\data\huge\huge_backpack_pouches_co.paa" ///pouches
		};
	};
	class k_clone_huge_backpack_rocket: k_clone_huge_backpack_base
	{
		displayname = "[K] Clone Trooper Huge Backpack w/ Rockets";
		model = "kobra\442_equipment\backpack\model\clone\k_huge_backpack_rockets.p3d";
		scope = 2;
		maximumload = 565;
		mass = 150;
		hiddenselections[] = 
		{
			"backpack",
			"rockets"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\huge\huge_backpack_co.paa", ///backpack
            "kobra\442_equipment\backpack\data\huge\huge_backpack_rockets_co.paa" ///rocket
		};
	};

	class k_clone_huge_backpack_44: k_clone_huge_backpack
	{
		displayname = "[44/K] Clone Trooper Huge Backpack";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\huge\unit_designs\44ab\huge_backpack_co.paa" ///backpack
		};
	};
	class k_clone_huge_backpack_pouches_44: k_clone_huge_backpack_pouches
	{
		displayname = "[44/K] Clone Trooper Huge Backpack w/ Pouches";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\huge\unit_designs\44ab\huge_backpack_co.paa", ///backpack
            "kobra\442_equipment\backpack\data\huge\huge_backpack_pouches_co.paa" ///pouches
		};
	};
	class k_clone_huge_backpack_rocket_44: k_clone_huge_backpack_rocket
	{
		displayname = "[44/K] Clone Trooper Huge Backpack w/ Rockets";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\huge\unit_designs\44ab\huge_backpack_co.paa", ///backpack
            "kobra\442_equipment\backpack\data\huge\unit_designs\44ab\huge_backpack_rockets_co.paa" ///rocket
		};
	};
	
///arc backpack
	class k_clone_arc_backpack: k_clone_medium_backpack
	{
		displayname = "[K] Clone Trooper Arc Backpack";
		scope = 2;
		model = "kobra\442_equipment\backpack\model\clone\k_arc_backpack.p3d";
		mass = 30;
		hiddenselections[] = 
		{
			"backpack"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\arc\arc_backpack_co.paa"
		};
	};
///commando backpack
	class k_commando_basic_backpack: k_clone_medium_backpack
	{
		displayname = "[K] Commando Basic Backpack";
		scope = 2;
		model = "kobra\442_equipment\backpack\model\commando\k_commando_basic.p3d";
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		mass = 1;
		maximumload = 150;
	};
	class k_commando_eod_backpack: k_clone_medium_backpack
	{
		displayname = "[K] Commando EOD Backpack";
		scope = 2;
		model = "kobra\442_equipment\backpack\model\commando\k_commando_eod.p3d";
		maximumload = 200;
		mass = 50;
		hiddenselections[] = 
		{
			"eod"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\commando\backpack_parts_co.paa"
		};
	};
	class k_commando_pouches_backpack: k_clone_medium_backpack
	{
		displayname = "[K] Commando Pouches Backpack";
		scope = 2;
		model = "kobra\442_equipment\backpack\model\commando\k_commando_pouches.p3d";
		maximumload = 225;
		mass = 30;
		hiddenselections[] = 
		{
			"pouches"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\commando\backpack_parts_co.paa"
		};
	};
	class k_commando_radio_backpack: k_clone_medium_backpack
	{
		displayname = "[K] Commando Radio Backpack";
		scope = 2;
		model = "kobra\442_equipment\backpack\model\commando\k_commando_radio.p3d";
		tf_dialog = "mr6000l_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=25000;
        tf_subtype="digital_lr";
		maximumload = 100;
		mass = 10;
		hiddenselections[] = 
		{
			"radio"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\commando\backpack_parts_co.paa"
		};
	};
	class k_commando_tech_backpack: k_clone_medium_backpack
	{
		displayname = "[K] Commando Tech Backpack";
		scope = 2;
		model = "kobra\442_equipment\backpack\model\commando\k_commando_tech.p3d";
		mass = 30;
		hiddenselections[] = 
		{
			"tech"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\commando\backpack_parts_co.paa"
		};
	};

	class k_commando_eod_backpack_44: k_commando_eod_backpack
	{
		displayname = "[44/K] Commando EOD Backpack";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\commando\unit_designs\44ab\backpack_parts_co.paa"
		};
	};
	class k_commando_pouches_backpack_44: k_commando_pouches_backpack
	{
		displayname = "[44/K] Commando Pouches Backpack";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\commando\unit_designs\44ab\backpack_parts_co.paa"
		};
	};
	class k_commando_radio_backpack_44: k_commando_radio_backpack
	{
		displayname = "[44/K] Commando Radio Backpack";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\commando\unit_designs\44ab\backpack_parts_co.paa"
		};
	};
	class k_commando_tech_backpack_44: k_commando_tech_backpack
	{
		displayname = "[44/K] Commando Tech Backpack";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\commando\unit_designs\44ab\backpack_parts_co.paa"
		};
	};

///tfar backpacks///
    class k_clone_arf_comms: k_clone_medium_backpack_radio
    {
        displayname = "[K] Arf Communicator";
		picture="kobra\kobra_core\kobra.paa";
        maximumload = 0;
		scope = 2;
        model = "kobra\442_equipment\backpack\model\clone\k_arf_comms.p3d";
		mass = 1;
        hiddenselections[] = 
        {
            "comms"
        };
        hiddenselectionstextures[] = 
        {
            "Kobra\442_equipment\backpack\data\arf_comms\arf_comms_co.paa"
        };
    };
	class k_clone_wrist_comms: k_clone_arf_comms
	{
		displayname = "[K] Wrist Communicator";
		scope = 2;
		model = "kobra\442_equipment\backpack\model\clone\k_wrist_comm.p3d";
		mass = 1;
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		tf_range=15000;
	};
	class k_clone_p1_comms: k_clone_wrist_comms
	{
		displayname = "[K] P1 Helmet Communicator";
		scope = 2;
		model = "kobra\442_equipment\backpack\model\clone\k_p1_comms.p3d";
		mass = 1;
		tf_range=15000;
	};
	class k_clone_p2_comms: k_clone_wrist_comms
	{
		displayname = "[K] P2 Helmet Communicator";
		scope = 2;
		model = "kobra\442_equipment\backpack\model\clone\k_p2_comms.p3d";
		mass = 1;
		tf_range=15000;
	};
	class k_clone_scout_comms: k_clone_wrist_comms
	{
		displayname = "[K] Scout Communicator";
		scope = 2;
		model = "kobra\442_equipment\backpack\model\clone\k_scout_comms.p3d";
		tf_range=20000;
		mass = 20;
		hiddenselections[] = 
		{
			"backpack"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\scout_comms\scout_comms_co.paa"
		};
	};

    class 442_jumppack: B_Kitbag_rgr
	{
		author = "Kobra Dev Team";
		scope = 2;
		picture = "kobra\kobra_core\kobra.paa";
		displayname = "[K] Jumppack";
		model = "kobra\442_equipment\backpack\model\clone\k_jumppack.p3d";
		maximumload = 150;
		mass = 150;
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\jumppack\jumppack_co.paa"
		};
		NSM_jumppack_is_jumppack=1;
		NSM_jumppack_spam_delay=1;
		NSM_jumppack_energy_capacity=500;
		NSM_jumppack_recharge=10;
		NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = 
		{
			{
				"effect1",
				{0,.6,1} // {side to side , forward, verticle}
			},
			{
				"effect2",
				{0,.6,1}
			}
		};
		NSM_jumppack_sound_ignite[]=
		{
			"NSM_Main\sounds\cdv21Start.ogg"
		};
		NSM_jumppack_sound_land[]=
		{
			"NSM_Main\sounds\cdv21End.ogg"
		};
		NSM_jumppack_sound_idle[]=
		{
			"NSM_Main\sounds\cdv21Idle.ogg"
		};
		NSM_jumppack_jump_types[]=
		{
			{
				"Short Jump",
				{25,7,25,0,1,1}
			},
			{
				"High Jump",
				{50,14,50,0,1,1}
			},
		};
	};
	class 442_jumppack_44: 442_jumppack
	{
		displayname = "[44/K] Jumppack";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\jumppack\unit_designs\44ab\jumppack_co.paa"
		};
	};
	class 442_jt12: 442_jumppack
	{
		maximumload=150;
		picture = "kobra\kobra_core\kobra.paa";
		displayName="[K] JT-12 Jumppack";
		model = "kobra\442_equipment\backpack\model\clone\k_jt12.p3d";
		mass = 120;
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\jt12\jt12_co.paa"
		};
		NSM_jumppack_is_jumppack=1;
		NSM_jumppack_spam_delay=1;
		NSM_jumppack_energy_capacity=200;
		NSM_jumppack_recharge=5;
		NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = 
		{
			{
				"effect1",
				{0,.6,1} // {side to side , forward, verticle}
			},
			{
				"effect2",
				{0,.6,1}
			}
		};
		NSM_jumppack_sound_ignite[]=
		{
			"NSM_Main\sounds\cdv21Start.ogg"
		};
		NSM_jumppack_sound_land[]=
		{
			"NSM_Main\sounds\cdv21End.ogg"
		};
		NSM_jumppack_sound_idle[]=
		{
			"NSM_Main\sounds\cdv21Idle.ogg"
		};
		NSM_jumppack_jump_types[]=
		{	
			{
				"Short Jump",
				{25,7,50,0,1,1}
			}
		};
	};
	class 442_jt12_44: 442_jt12
	{
		displayName="[44/K] JT-12 Jumppack";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\jt12\unit_designs\44ab\jt12_co.paa"
		};
	};
	class 442_jt12_single: 442_jt12
	{
		scope = 2;
		maximumload=0;
		displayname = "[K] JT12 Paradrop (Single, Slow Charge)";
		NSM_jumppack_is_jumppack=1;
		NSM_jumppack_spam_delay=1;
		NSM_jumppack_energy_capacity=100;
		NSM_jumppack_recharge=2;
		NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = 
		{
			{
				"effect1",
				{0,0,0} // {side to side , forward, verticle}
			},
			{
				"effect2",
				{0,0,0}
			}
		};
		NSM_jumppack_sound_ignite[]=
		{
			"NSM_Main\sounds\cdv21Start.ogg"
		};
		NSM_jumppack_sound_land[]=
		{
			"NSM_Main\sounds\cdv21End.ogg"
		};
		NSM_jumppack_sound_idle[]=
		{
			"NSM_Main\sounds\cdv21Idle.ogg"
		};
		NSM_jumppack_jump_types[]=
		{
			{
				"Short Jump",
				{25,7,100,0,1,1}
			}
		};
	};
	class 442_jt12_single_44: 442_jt12_single
	{
		displayName="[44/K] JT12 Paradrop (Single, Slow Charge)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\jt12\unit_designs\44ab\jt12_co.paa"
		};
	};
	class 442_jt12_pj: 442_jt12
	{
		displayname = "[K] JT12 Parajumper";
		maximumload=350;
	};
	class 442_jt12_pj_44: 442_jt12_pj
	{
		displayName="[44/K] JT12 Parajumper";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\jt12\unit_designs\44ab\jt12_co.paa"
		};
	};
	class 442_jt12_radio: 442_jt12
	{
		model = "kobra\442_equipment\backpack\model\clone\k_jt12_radio.p3d";
		scope = 2;
		hiddenselections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\jt12\jt12_co.paa",
			"kobra\442_equipment\backpack\data\jt12\jt12_radio_co.paa"
		};
		maximumload=150;
		displayName="[K] JT-12 Jumppack (Radio)";
		tf_dialog = "mr6000l_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
	};
	class 442_jt12_radio_44: 442_jt12_radio
	{
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\jt12\unit_designs\44ab\jt12_co.paa",
			"kobra\442_equipment\backpack\data\jt12\unit_designs\44ab\jt12_radio_co.paa"
		};
		displayName="[44/K] JT-12 Jumppack (Radio)";
	};
	class 442_jt12_pj_radio: 442_jt12_radio
	{
		displayname = "[K] JT12 Parajumper (Radio)";
		maximumload = 350;
		tf_dialog = "mr6000l_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
	};
	class 442_jt12_pj_radio_44: 442_jt12_pj_radio
	{
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\jt12\unit_designs\44ab\jt12_co.paa",
			"kobra\442_equipment\backpack\data\jt12\unit_designs\44ab\jt12_radio_co.paa"
		};
		displayName="[44/K] JT-12 Parajumper (Radio)";
	};
	class 442_cdv_19: 442_jt12
	{
		displayname = "[K] CDV-19";
		model = "kobra\442_equipment\backpack\model\clone\k_cdv_19.p3d";
		mass = 100;
		hiddenselections[] = 
		{
			"backpack"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\cdv19\cdv_19_co.paa"
		};
	};
	class 442_cdv_19_44: 442_cdv_19
	{
		displayname = "[44/K] CDV-19";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\cdv19\unit_designs\44ab\cdv_19_co.paa"
		};
	};
	class 442_cdv_19_radio: 442_cdv_19
	{
		displayname = "[K] CDV-19 (Radio)";
		tf_dialog = "mr6000l_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
	};
	class 442_cdv_19_radio_44: 442_cdv_19_radio
	{
		displayname = "[44/K] CDV-19 (Radio)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\cdv19\unit_designs\44ab\cdv_19_co.paa"
		};
	};
};