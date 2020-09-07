	class 442_data_pad: Items_base_F
	{
		scope=2;
		scopecurator=2;
		author = "KOBRA Mod Team";
		displayName="Data Pad";
		model="442_misc\data_pad\data_pad.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item_small";
		simulation="thing";
		hiddenselections[]=
		{
			"camo1",
			"screen"
		};
		hiddenselectionstextures[]=
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\screen_co.paa"
		};
	};
	class 442_data_pad_rep: 442_data_pad
	{
		displayname = "Data Pad (Republic)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\rep_screen_co.paa"
		};
	};
	class 442_data_pad_cis: 442_data_pad
	{
		displayname = "Data Pad (CIS)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\cis_screen_co.paa"
		};
	};
	class 442_data_pad_pinup1: 442_data_pad
	{
		displayname = "Data Pad (Pin Up 1)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\pinup1_screen_co.paa"
		};
	};