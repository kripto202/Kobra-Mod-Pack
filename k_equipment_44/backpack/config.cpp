class cfgpatches
{
    class k_equipment_44_backpack
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "44_clone_small_backpack",
            "44_clone_small_backpack_pouches",
            "44_clone_small_backpack_radio",
            "44_clone_small_backpack_radio_pouches",
            "44_clone_large_backpack",
            "44_clone_large_backpack_pouch",
            "44_clone_large_backpack_medic",
            "44_clone_large_backpack_medic_pouch",
            "44_clone_large_backpack_eod_pouch",
        };
    };
};

class cfgvehicles 
{
    class k_clone_small_backpack_base;
    class k_clone_large_backpack_base;
//////////small backpack
    class 44_clone_small_backpack: k_clone_small_backpack_base
    {
        displayname = "[44] Clone Trooper Small Backpack";
        scope = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\backpack\data\small_backpack_co.paa",
            "kobra\442_equipment\backpack\data\small\cover1_co.paa",
            "",
            "",
            "",
        };
    };
    class 44_clone_small_backpack_pouches: k_clone_small_backpack_base
    {
        displayname = "[44] Clone Trooper Small Backpack w/ Pouches";
        scope = 2;
        maximumload = 200;
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\backpack\data\small_backpack_co.paa",
            "kobra\442_equipment\backpack\data\small\cover1_co.paa",
            "kobra\442_equipment\backpack\data\small\pouches_co.paa",
            "",
            "",
        };
    };
    class 44_clone_small_backpack_radio: k_clone_small_backpack_base
    {
        displayname = "[44] Clone Trooper Small Radio Backpack";
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
            "kobra\k_equipment_44\backpack\data\small_backpack_co.paa",
            "",
            "",
            "kobra\442_equipment\backpack\data\small\radio_co.paa",
            "kobra\442_equipment\backpack\data\small\screen_co.paa",
        };
    };
    class 44_clone_small_backpack_radio_pouches: k_clone_small_backpack_base
    {
        displayname = "[44] Clone Trooper Small Radio Backpack w/ Pouches";
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
            "kobra\k_equipment_44\backpack\data\small_backpack_co.paa",
            "",
            "kobra\442_equipment\backpack\data\small\pouches_co.paa",
            "kobra\442_equipment\backpack\data\small\radio_co.paa",
            "kobra\442_equipment\backpack\data\small\screen_co.paa",
        };
    };
////////////large backpack
    class 44_clone_large_backpack: k_clone_large_backpack_base
    {
        displayname = "[44] Clone Trooper Large Backpack";
        scope = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\backpack\data\large_backpack_co.paa",
            "kobra\442_equipment\backpack\data\large\cover2_co.paa",
            ""
        };
    };
    class 44_clone_large_backpack_pouch: k_clone_large_backpack_base
    {
        displayname = "[44] Clone Trooper Large Backpack w/ Pouches";
        scope = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\backpack\data\large_backpack_co.paa",
            "kobra\442_equipment\backpack\data\large\cover2_co.paa",
            "kobra\442_equipment\backpack\data\large\pouches2_co.paa",
        };
    };
    class 44_clone_large_backpack_medic: k_clone_large_backpack_base
    {
        displayname = "[44] Clone Trooper Large Medic Backpack";
        scope = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\backpack\data\large_backpack_medic_co.paa",
            "kobra\442_equipment\backpack\data\large\cover2_co.paa",
            "",
        };
    };
    class 44_clone_large_backpack_medic_pouch: k_clone_large_backpack_base
    {
        displayname = "[44] Clone Trooper Large Medic Backpack w/ Pouches";
        scope = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\backpack\data\large_backpack_medic_co.paa",
            "kobra\442_equipment\backpack\data\large\cover2_co.paa",
            "kobra\442_equipment\backpack\data\large\pouches2_co.paa",
        };
    };
    class 44_clone_large_backpack_eod_pouch: k_clone_large_backpack_base
    {
        displayname = "[44] Clone Trooper Large Medic Backpack w/ Pouches";
        scope = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\backpack\data\large_backpack_eod_co.paa",
            "kobra\442_equipment\backpack\data\large\cover2_co.paa",
            "kobra\442_equipment\backpack\data\large\pouches2_co.paa",
        };
    };
};