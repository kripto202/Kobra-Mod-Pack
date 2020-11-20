
	class k_clone_backpack_base: B_Kitbag_rgr
	{
		author = "KOBRA Mod Team";
		scope = 0;
		picture = "";
		displayname = "";
		model = "";
		maximumload = 200;
		hiddenselections[] = {};
	};
	class k_clone_rto_backpack_base: k_clone_backpack_base
	{
		maximumload=100;
		picture="";
		displayName="";
		tf_dialog="SWLB_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
	};

	