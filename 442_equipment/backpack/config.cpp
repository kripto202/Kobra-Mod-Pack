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
            "k_clone_large_backpack",
            "k_clone_large_backpack_pouch",
            "k_clone_large_backpack_medic",
            "k_clone_large_backpack_medic_pouch",
            "k_clone_large_backpack_eod_pouch",
			"k_clone_medium_backpack",
			"k_clone_medium_backpack_rocket",
			"k_clone_huge_backpack",
			"k_clone_huge_backpack_pouches",
			"k_clone_huge_backpack_rocket"
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
		picture = "kobra\kobra_core\kobra.paa";
		displayname = "";
		model = "";
		maximumload = 250;
		hiddenselections[] = {};
	};
	class k_clone_rto_backpack_base: k_clone_backpack_base
	{
		maximumload=100;
		displayName="";
		tf_dialog="SWLB_clone_rto_radio_dialog";
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
        model = "kobra\442_equipment\backpack\small_backpack.p3d";
        maximumload = 100; //100 base | +50 pouches | -50 radio
        picture = "kobra\kobra_core\kobra.paa";
        hiddenselections[] = 
        {
            "backpack",
            "cover",
            "pouches",
            "radio",
            "screen"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\small\small_backpack_co.paa",
            "kobra\442_equipment\backpack\data\small\cover1_co.paa",
            "kobra\442_equipment\backpack\data\small\pouches_co.paa",
            "kobra\442_equipment\backpack\data\small\radio_co.paa",
            "kobra\442_equipment\backpack\data\small\screen_co.paa",
        };
    };
	class k_clone_medium_backpack_base: k_clone_backpack_base
    {
        displayname = "[K] Clone Trooper Backpack";
        scope = 1;
        model = "kobra\442_equipment\backpack\medium_backpack.p3d";
        maximumload = 150; //150 base | +50 pouches | -75 radio | +25 rockets
        picture = "kobra\kobra_core\kobra.paa";
        hiddenselections[] = 
        {
            "backpack",
			"radio",
			"tube",
			"cover",
			"rocket",
			"thermal_det",
			"thermal_det_lights"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\medium\medium_backpack_co.paa", //backpack
			"kobra\442_equipment\backpack\data\medium\medium_backpack_co.paa", //radio
			"kobra\442_equipment\backpack\data\medium\medium_backpack_co.paa", //tube
			"kobra\442_equipment\backpack\data\medium\medium_backpack_co.paa", //cover
			"kobra\442_equipment\backpack\data\huge\huge_backpack_co.paa", //rocket
			"kobra\442_weapons\explosive\data\thermal_det\camo1_co.paa", //thermal_det
			"kobra\442_weapons\explosive\data\thermal_det\lights_co.paa" //thermal_det_lights
        };
    };
    class k_clone_large_backpack_base: k_clone_small_backpack_base
    {
        displayname = "[K] Clone Trooper Large Backpack";
        model = "kobra\442_equipment\backpack\large_backpack.p3d";
        picture = "kobra\kobra_core\kobra.paa";
        maximumload = 225; //225 base | +50 pouches | -75 radio
        hiddenselections[] = 
        {
            "backpack",
            "cover",
            "pouches"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\large\large_backpack_co.paa",
            "kobra\442_equipment\backpack\data\large\cover2_co.paa",
            "kobra\442_equipment\backpack\data\large\pouches2_co.paa",
        };
    };
	class k_clone_huge_backpack_base: k_clone_backpack_base
    {
        displayname = "[K] Clone Trooper Huge Backpack";
        model = "kobra\442_equipment\backpack\huge_backpack.p3d";
        picture = "kobra\kobra_core\kobra.paa";
        maximumload = 325; //400 base | +75 pouches | +240 rockets
        hiddenselections[] = 
        {
            "backpack",
            "rocket",
            "pouches"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\huge\huge_backpack_co.paa", ///backpack
            "kobra\442_equipment\backpack\data\huge\huge_backpack_co.paa", ///rocket
            "kobra\442_equipment\backpack\data\huge\huge_backpack_co.paa", ///pouches
        };
    };

///small backpack///
    class k_clone_small_backpack: k_clone_small_backpack_base
    {
        displayname = "[K] Clone Trooper Small Backpack";
        scope = 2;
        maximumload = 100;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\small\small_backpack_co.paa",
            "kobra\442_equipment\backpack\data\small\cover1_co.paa",
            "",
            "",
            "",
        };
    };
    class k_clone_small_backpack_pouches: k_clone_small_backpack_base
    {
        displayname = "[K] Clone Trooper Small Backpack w/ Pouches";
        scope = 2;
        maximumload = 150;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\small\small_backpack_co.paa",
            "kobra\442_equipment\backpack\data\small\cover1_co.paa",
            "kobra\442_equipment\backpack\data\small\pouches_co.paa",
            "",
            "",
        };
    };

///medium backpack
	class k_clone_medium_backpack: k_clone_medium_backpack_base
	{
		displayname = "[K] Clone Trooper Medium Backpack";
		scope = 2;
		maximumload = 150;
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\medium\medium_backpack_co.paa", //backpack
			"", //radio
			"kobra\442_equipment\backpack\data\medium\medium_backpack_co.paa", //tube
			"kobra\442_equipment\backpack\data\medium\medium_backpack_co.paa", //cover
			"", //rocket
			"", //thermal_det
			"" //thermal_det_lights
		};
	};
	class k_clone_medium_backpack_rocket: k_clone_medium_backpack
	{
		displayname = "[K] Clone Trooper Medium Rocket Backpack";
		maximumload = 175;
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\medium\medium_backpack_co.paa", //backpack
			"", //radio
			"kobra\442_equipment\backpack\data\medium\medium_backpack_co.paa", //tube
			"", //cover
			"kobra\442_equipment\backpack\data\huge\huge_backpack_co.paa", //rocket
			"kobra\442_weapons\explosive\data\thermal_det\camo1_co.paa", //thermal_det
			"kobra\442_weapons\explosive\data\thermal_det\lights_co.paa" //thermal_det_lights
		};
	};

///large backpack///
    class k_clone_large_backpack: k_clone_large_backpack_base
    {
        displayname = "[K] Clone Trooper Large Backpack";
        scope = 2;
        maximumload = 225;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\large\large_backpack_co.paa",
            "kobra\442_equipment\backpack\data\large\cover2_co.paa",
            ""
        };
    };
    class k_clone_large_backpack_pouch: k_clone_large_backpack_base
    {
        displayname = "[K] Clone Trooper Large Backpack w/ Pouches";
        scope = 2;
        maximumload = 275;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\large\large_backpack_co.paa",
            "kobra\442_equipment\backpack\data\large\cover2_co.paa",
            "kobra\442_equipment\backpack\data\large\pouches2_co.paa",
        };
    };
    class k_clone_large_backpack_medic: k_clone_large_backpack_base
    {
        displayname = "[K] Clone Trooper Large Medic Backpack";
        scope = 2;
        maximumload = 225;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\large\large_backpack_medic_co.paa",
            "kobra\442_equipment\backpack\data\large\cover2_co.paa",
            "",
        };
    };
    class k_clone_large_backpack_medic_pouch: k_clone_large_backpack_base
    {
        displayname = "[K] Clone Trooper Large Medic Backpack w/ Pouches";
        scope = 2;
        maximumload = 275;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\large\large_backpack_medic_co.paa",
            "kobra\442_equipment\backpack\data\large\cover2_co.paa",
            "kobra\442_equipment\backpack\data\large\pouches2_co.paa",
        };
    };
    class k_clone_large_backpack_eod_pouch: k_clone_large_backpack_base
    {
        displayname = "[K] Clone Trooper Large EOD Backpack w/ Pouches";
        scope = 2;
        maximumload = 275;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\backpack\data\large\large_backpack_eod_co.paa",
            "kobra\442_equipment\backpack\data\large\cover2_co.paa",
            "kobra\442_equipment\backpack\data\large\pouches2_co.paa",
        };
    };

///huge backpack///
	class k_clone_huge_backpack: k_clone_huge_backpack_base
	{
		displayname = "[K] Clone Trooper Huge Backpack";
		scope = 2;
		maximumload = 325;
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\huge\huge_backpack_co.paa", ///backpack
            "", ///rocket
            "", ///pouches
		};
	};
	class k_clone_huge_backpack_pouches: k_clone_huge_backpack_base
	{
		displayname = "[K] Clone Trooper Huge Backpack w/ Pouches";
		scope = 2;
		maximumload = 400;
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\huge\huge_backpack_co.paa", ///backpack
            "", ///rocket
            "kobra\442_equipment\backpack\data\huge\huge_backpack_co.paa", ///pouches
		};
	};
	class k_clone_huge_backpack_rocket: k_clone_huge_backpack_base
	{
		displayname = "[K] Clone Trooper Huge Backpack w/ Rockets";
		scope = 2;
		maximumload = 565;
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\huge\huge_backpack_co.paa", ///backpack
            "kobra\442_equipment\backpack\data\huge\huge_backpack_co.paa", ///rocket
            "", ///pouches
		};
	};
};