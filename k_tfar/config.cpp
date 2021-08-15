class cfgpatches
{
    class k_tfar
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "k_clone_rto_backpack_base",
            "k_clone_small_backpack_radio",
            "k_clone_small_backpack_radio_pouches",
			"k_clone_medium_backpack_radio"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
	class k_clone_backpack_base;
	class k_clone_small_backpack_base;
	class k_clone_medium_backpack;
	class k_clone_rto_backpack_base: k_clone_backpack_base
	{
		maximumload=100;
		picture="kobra\kobra_core\kobra.paa";
		displayName="";
		tf_dialog="SWLB_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
	};
	class k_clone_small_backpack_radio: k_clone_small_backpack_base
    {
        displayname = "[K] Clone Trooper Small Radio Backpack";
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
            "kobra\442_equipment\backpack\data\small\small_backpack_co.paa",
            "",
            "",
            "kobra\442_equipment\backpack\data\small\radio_co.paa",
            "kobra\442_equipment\backpack\data\small\screen_co.paa",
        };
    };
	class k_clone_small_backpack_radio_pouches: k_clone_small_backpack_base
    {
        displayname = "[K] Clone Trooper Small Radio Backpack w/ Pouches";
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
            "kobra\442_equipment\backpack\data\small\small_backpack_co.paa",
            "",
            "kobra\442_equipment\backpack\data\small\pouches_co.paa",
            "kobra\442_equipment\backpack\data\small\radio_co.paa",
            "kobra\442_equipment\backpack\data\small\screen_co.paa",
        };
    };
	class k_clone_medium_backpack_radio: k_clone_medium_backpack
	{
		displayname = "[K] Clone Trooper Medium Radio Backpack";
		maximumload = 150;
		tf_dialog="SWLB_clone_rto_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=25000;
        tf_subtype="digital_lr";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\backpack\data\medium\medium_backpack_co.paa", //backpack
			"kobra\442_equipment\backpack\data\medium\medium_backpack_co.paa", //radio
			"kobra\442_equipment\backpack\data\medium\medium_backpack_co.paa", //tube
			"", //cover
			"", //rocket
			"", //thermal_det
			"" //thermal_det_lights
		};
	};
};