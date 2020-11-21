class cfgpatches
{
    class 442_misc_data_pad
    {
        author = "KOBRA Mod Team";
        requiredAddons[]={};
		requiredVersion = 0.1;
		units[] = 
        {
            "442_data_pad",
            "442_data_pad_rep",
            "442_data_pad_cis",
            "442_data_pad_pinup1",
            "442_data_pad_pinup_atago1",
            "442_data_pad_pinup_atago2",
            "442_data_pad_pinup_belfast1",
            "442_data_pad_pinup_belfast2",
            "442_data_pad_pinup_cleveland1",
            "442_data_pad_pinup_cleveland2",
            "442_data_pad_pinup_enty1",
            "442_data_pad_pinup_enty2",
            "442_data_pad_pinup_helena1",
            "442_data_pad_pinup_helena2",
            "442_data_pad_pinup_prinz1",
            "442_data_pad_pinup_prinz2",
            "442_data_pad_pinup_spee1",
            "442_data_pad_pinup_spee2",
            "442_data_pad_pinup_takao1",
            "442_data_pad_pinup_takao2",
            "442_data_pad_text",
            "442_data_pad_eod",
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class Items_base_F;
//////////////data pads//////////////
    class 442_data_pad: Items_base_F
	{
		scope=2;
		scopecurator=2;
		author = "KOBRA Mod Team";
		displayName="Data Pad";
		model="442_misc\data_pad\data_pad.p3d";
		editorcategory="kobra";
		editorsubcategory="442_data_pad";
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
	
/////////////dukas submissions//////////////
	class 442_data_pad_pinup_atago1: 442_data_pad
	{
		displayname = "Data Pad (Pin Up Atago 1)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\screen_co_atago1.paa"
		};
	};
	class 442_data_pad_pinup_atago2: 442_data_pad
	{
		displayname = "Data Pad (Pin Up Atago 2)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\screen_co_atago2.paa"
		};
	};
	class 442_data_pad_pinup_belfast1: 442_data_pad
	{
		displayname = "Data Pad (Pin Up Belfast 1)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\screen_co_belfast1.paa"
		};
	};
	class 442_data_pad_pinup_belfast2: 442_data_pad
	{
		displayname = "Data Pad (Pin Up Belfast 2)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\screen_co_belfast2.paa"
		};
	};
	class 442_data_pad_pinup_cleveland1: 442_data_pad
	{
		displayname = "Data Pad (Pin Up Cleveland 1)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\screen_co_cleveland1.paa"
		};
	};
	class 442_data_pad_pinup_cleveland2: 442_data_pad
	{
		displayname = "Data Pad (Pin Up Cleveland 2)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\screen_co_cleveland2.paa"
		};
	};
	class 442_data_pad_pinup_enty1: 442_data_pad
	{
		displayname = "Data Pad (Pin Up Enty 1)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\screen_co_enty1.paa"
		};
	};
	class 442_data_pad_pinup_enty2: 442_data_pad
	{
		displayname = "Data Pad (Pin Up Enty 2)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\screen_co_enty2.paa"
		};
	};
	class 442_data_pad_pinup_helena1: 442_data_pad
	{
		displayname = "Data Pad (Pin Up Helena 1)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\screen_co_helena1.paa"
		};
	};
	class 442_data_pad_pinup_helena2: 442_data_pad
	{
		displayname = "Data Pad (Pin Up Helena 2)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\screen_co_helena2.paa"
		};
	};
	class 442_data_pad_pinup_prinz1: 442_data_pad
	{
		displayname = "Data Pad (Pin Up Prinz 1)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\screen_co_prinz1.paa"
		};
	};
	class 442_data_pad_pinup_prinz2: 442_data_pad
	{
		displayname = "Data Pad (Pin Up Prinz 2)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\screen_co_prinz2.paa"
		};
	};
	class 442_data_pad_pinup_spee1: 442_data_pad
	{
		displayname = "Data Pad (Pin Up Spee 1)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\screen_co_spee1.paa"
		};
	};
	class 442_data_pad_pinup_spee2: 442_data_pad
	{
		displayname = "Data Pad (Pin Up Spee 2)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\screen_co_spee2.paa"
		};
	};
	class 442_data_pad_pinup_takao1: 442_data_pad
	{
		displayname = "Data Pad (Pin Up Takao 1)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\screen_co_takao1.paa"
		};
	};
	class 442_data_pad_pinup_takao2: 442_data_pad
	{
		displayname = "Data Pad (Pin Up Takao 2)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\screen_co_takao2.paa"
		};
	};
	
/////////////rush submissions/////////////////
	class 442_data_pad_text: 442_data_pad
	{
		displayname = "Data Pad (Text 1)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\screan_1.paa"
		};
	};
	class 442_data_pad_eod: 442_data_pad
	{
		displayname = "Data Pad (Bomb Defusal Manual)";
		hiddenselectionstextures[] = 
		{
			"442_misc\data_pad\data\camo1_co.paa",
			"442_misc\data_pad\data\screan_2.paa"
		};
	};
	
};