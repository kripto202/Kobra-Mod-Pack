class cfgpatches
{
    class k_equipment_9_backpack
    {
        author = "KOBRA Mod Team";
        requiredAddons[]={};
		requiredVersion = 0.1;
		units[] = 
        {
            "9_clone_small_backpack",
            "9_clone_small_backpack_pouches",
            "9_clone_small_backpack_radio",
            "9_clone_small_backpack_radio_pouches",
            "9_clone_large_backpack",
            "9_clone_large_backpack_pouch",
            "9_clone_large_backpack_medic",
            "9_clone_large_backpack_medic_pouch",
            "9_clone_large_backpack_eod_pouch",
        };
    };
};

class cfgvehicles 
{
    class k_clone_small_backpack_base;
    class k_clone_large_backpack_base;

    class 9_clone_small_backpack: k_clone_small_backpack_base
    {
        displayname = "[9] Clone Trooper Small Backpack";
        scope = 2;
        hiddenselectionstextures[] = 
        {
            "442_equipment\backpack\9\small_backpack_co.paa",
            "442_equipment\backpack\data\cover1_co.paa",
            "",
            "",
            "",
        };
    };
    class 9_clone_small_backpack_pouches: k_clone_small_backpack_base
    {
        displayname = "[9] Clone Trooper Small Backpack w/ Pouches";
        scope = 2;
        maximumload = 200;
        hiddenselectionstextures[] = 
        {
            "442_equipment\backpack\9\small_backpack_co.paa",
            "442_equipment\backpack\data\cover1_co.paa",
            "442_equipment\backpack\data\pouches_co.paa",
            "",
            "",
        };
    };
    class 9_clone_small_backpack_radio: k_clone_small_backpack_base
    {
        displayname = "[9] Clone Trooper Small Radio Backpack";
        scope = 2;
        maximumload = 100;
        tf_dialog="SWLB_clone_rto_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=25000;
        tf_subtype="digital_lr";
        hiddenselectionstextures[] = 
        {
            "442_equipment\backpack\9\small_backpack_co.paa",
            "",
            "",
            "442_equipment\backpack\data\radio_co.paa",
            "442_equipment\backpack\data\screen_co.paa",
        };
    };
    class 9_clone_small_backpack_radio_pouches: k_clone_small_backpack_base
    {
        displayname = "[9] Clone Trooper Small Radio Backpack w/ Pouches";
        scope = 2;
        maximumload = 150;
        tf_dialog="SWLB_clone_rto_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=25000;
        tf_subtype="digital_lr";
        hiddenselectionstextures[] = 
        {
            "442_equipment\backpack\9\small_backpack_co.paa",
            "",
            "442_equipment\backpack\data\pouches_co.paa",
            "442_equipment\backpack\data\radio_co.paa",
            "442_equipment\backpack\data\screen_co.paa",
        };
    };

    class 9_clone_large_backpack: k_clone_large_backpack_base
    {
        displayname = "[9] Clone Trooper Large Backpack";
        scope = 2;
        hiddenselectionstextures[] = 
        {
            "442_equipment\backpack\9\large_backpack_co.paa",
            "442_equipment\backpack\data\cover2_co.paa",
            ""
        };
    };
    class 9_clone_large_backpack_pouch: k_clone_large_backpack_base
    {
        displayname = "[9] Clone Trooper Large Backpack w/ Pouches";
        scope = 2;
        hiddenselectionstextures[] = 
        {
            "442_equipment\backpack\9\large_backpack_co.paa",
            "442_equipment\backpack\data\cover2_co.paa",
            "442_equipment\backpack\data\pouches2_co.paa",
        };
    };
    class 9_clone_large_backpack_medic: k_clone_large_backpack_base
    {
        displayname = "[9] Clone Trooper Large Medic Backpack";
        scope = 2;
        hiddenselectionstextures[] = 
        {
            "442_equipment\backpack\9\large_backpack_medic_co.paa",
            "442_equipment\backpack\data\cover2_co.paa",
            "",
        };
    };
    class 9_clone_large_backpack_medic_pouch: k_clone_large_backpack_base
    {
        displayname = "[9] Clone Trooper Large Medic Backpack w/ Pouches";
        scope = 2;
        hiddenselectionstextures[] = 
        {
            "442_equipment\backpack\9\large_backpack_medic_co.paa",
            "442_equipment\backpack\data\cover2_co.paa",
            "442_equipment\backpack\data\pouches2_co.paa",
        };
    };
    class 9_clone_large_backpack_eod_pouch: k_clone_large_backpack_base
    {
        displayname = "[9] Clone Trooper Large EOD Backpack w/ Pouches";
        scope = 2;
        hiddenselectionstextures[] = 
        {
            "442_equipment\backpack\9\large_backpack_eod_co.paa",
            "442_equipment\backpack\data\cover2_co.paa",
            "442_equipment\backpack\data\pouches2_co.paa",
        };
    };
};