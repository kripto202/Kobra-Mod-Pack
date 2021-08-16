class cfgpatches
{
    class k_tfar_ls
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
            "k_clone_small_backpack_radio_pouches"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
	class ls_gar_radio_backpack;
	class k_ls_b1_backpack;
	
	class k_ls_clone_backpack_radio: ls_gar_radio_backpack
	{
		displayname = "[K/LS] Clone Trooper Radio Backpack";
		scope = 2;
		model = "ls_equipment_bluefor\backpack\gar\backpack\ls_gar_radio_backpack.p3d";
		picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		maximumload=150;
		hiddenselections[] = 
		{
			"backpack",
			"radio",
			"screen"
		};
		hiddenselectionsmaterials[] = 
		{
			"kobra\k_unit_ls\data\backpack\clone\backpack.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\radio.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\screen.rvmat",
		};
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\clone\backpack_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\radio_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\screen_co.paa",
		};
	};
	class k_ls_clone_backpack_radio_med: ls_gar_radio_backpack
	{
		displayname = "[K/LS] Clone Trooper Radio Medium Backpack";
		scope = 2;
		model = "ls_equipment_bluefor\backpack\gar\mediumBackpack\ls_gar_mediumRadio_backpack.p3d";
		picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		maximumload = 200;
		hiddenselections[] = 
		{
			"backpack",
			"radio",
			"screen",
			"pouches"
		};
		hiddenselectionsmaterials[] = 
		{
			"kobra\k_unit_ls\data\backpack\clone\backpack.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\radio.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\screen.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\bags.rvmat",
		};
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\clone\backpack_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\radio_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\screen_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\pouches_co.paa",
		};
	};
	
	class k_ls_b1_backpack_rto: k_ls_b1_backpack
	{
		displayname = "[K/LS] B1 RTO Backpack";
		maximumload = 100;
		tf_dialog="SWLB_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
	};
	class k_ls_b1_backpack_rto_geonosis: k_ls_b1_backpack_rto
	{
		displayname = "[K/LS] B1 RTO Backpack Geonosis";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\b1\b1_backpack_geonosis_co.paa"
		};
	};
	class k_ls_b1_backpack_rto_woodland: k_ls_b1_backpack_rto
	{
		displayname = "[K/LS] B1 RTO Backpack Woodland";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\b1\b1_backpack_woodland_co.paa"
		};
	};
	class k_ls_b1_backpack_rto_desert: k_ls_b1_backpack_rto
	{
		displayname = "[K/LS] B1 RTO Backpack Desert";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\b1\b1_backpack_desert_co.paa"
		};
	};
	class k_ls_b1_backpack_rto_winter: k_ls_b1_backpack_rto
	{
		displayname = "[K/LS] B1 RTO Backpack Winter";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\b1\b1_backpack_winter_co.paa"
		};
	};
};