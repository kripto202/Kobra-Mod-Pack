    class k_clone_vest_base: k_vest_base
	{
		author = "KOBRA Mod Team";
		displayname = "Clone Vest Base";
		model = "kobra\442_units\clone_vest.p3d";
		hiddenselections[] = 
		{
			"kamaL",
			"kamaR",
            
            "LF_pouch1",
            "LC_pouch1",
            "LB_pouch1",
            "RF_pouch1",
            "RC_pouch1",
            "RB_pouch1",

            "LF_pouch2",
            "LC_pouch2",
            "LB_pouch2",
            "RF_pouch2",
            "RC_pouch2",
            "RB_pouch2",

            "LF_pouch3",
            "LC_pouch3",
            "LB_pouch3",
            "RF_pouch3",
            "RC_pouch3",
            "RB_pouch3",

            "LF_pouch4",
            "LC_pouch4",
            "LB_pouch4",
            "RF_pouch4",
            "RC_pouch4",
            "RB_pouch4",

            "LF_pouch5",
            "LC_pouch5",
            "LB_pouch5",
            "RF_pouch5",
            "RC_pouch5",
            "RB_pouch5",

            "holster",
            "leg_pouchL",
            "leg_pouchR",
            
            "pauldron_arcC",
            "pauldron_arcL",
            "pauldron_arcR",
            "pauldron_ncoL",
            "pauldron_ncoR",
            "arc_chest",
            "arc_legs",
            "arc_pouchL",
            "arc_pouchR"
		};
		class ItemInfo: ItemInfo
		{
			hiddenselections[] = 
			{
				"kamaL",
                "kamaR",
                
                "LF_pouch1",
                "LC_pouch1",
                "LB_pouch1",
                "RF_pouch1",
                "RC_pouch1",
                "RB_pouch1",

                "LF_pouch2",
                "LC_pouch2",
                "LB_pouch2",
                "RF_pouch2",
                "RC_pouch2",
                "RB_pouch2",

                "LF_pouch3",
                "LC_pouch3",
                "LB_pouch3",
                "RF_pouch3",
                "RC_pouch3",
                "RB_pouch3",

                "LF_pouch4",
                "LC_pouch4",
                "LB_pouch4",
                "RF_pouch4",
                "RC_pouch4",
                "RB_pouch4",

                "LF_pouch5",
                "LC_pouch5",
                "LB_pouch5",
                "RF_pouch5",
                "RC_pouch5",
                "RB_pouch5",

                "holster",
                "leg_pouchL",
                "leg_pouchR",
                
                "pauldron_arcC",
                "pauldron_arcL",
                "pauldron_arcR",
                "pauldron_ncoL",
                "pauldron_ncoR",
                "arc_chest",
                "arc_legs",
                "arc_pouchL",
                "arc_pouchR"
			};
			uniformmodel = "kobra\442_units\clone_vest.p3d";
			containerclass = "Supply100";
			mass = 20;
		};
	};

///belt pouches
    class k_clone_vest_basic1: k_clone_vest_base
	{
		displayname = "[K] Basic Clone Vest 1";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionstextures[] = 
		{
			"", //kama left
			"", //kama right
            //pouch1
            "", //Left front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left center
            "", //left back

            "", //right front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right center
            "", //right back

            //pouch2
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
        class ItemInfo: ItemInfo
        {
            containerclass = "Supply100";
			mass = 10;
        };
	};
    class k_clone_vest_basic2: k_clone_vest_basic1
    {
        displayname = "[K] Basic Clone Vest 2";
        hiddenselectionstextures[] = 
		{
			"",
			"",
            //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //Left front
            "", //left center
            "", //left back

            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right front
            "", //right center
            "", //right back

            //pouch2
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
    };
    class k_clone_vest_medium: k_clone_vest_basic1
	{
		displayname = "[K] Medium Clone Vest";
		hiddenselectionstextures[] = 
		{
			"",
			"",
            
            //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left center
            "", //left back

            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right center
            "", //right back

            //pouch2
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
        class ItemInfo: ItemInfo
        {
            containerclass = "Supply120";
			mass = 15;
        };
	};
    class k_clone_vest_heavy: k_clone_vest_basic1
	{
		displayname = "[K] Heavy Clone Vest";
		hiddenselectionstextures[] = 
		{
			"", //kama left
			"", //kama right
            
            //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left back

            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right back

            //pouch2
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
        class ItemInfo: ItemInfo
        {
            containerclass = "Supply150";
			mass = 20;
        };
	};

    class k_clone_vest_heavy_medic: k_clone_vest_basic1
	{
		displayname = "[K] Medic Clone Vest";
		hiddenselectionstextures[] = 
		{
			"",
			"",
            
            //pouch1
            "", //left front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left center
            "", //left back

            "", //right front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right center
            "", //right back

            //pouch2
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "", //left back

            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right front
            "", //right center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch5
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left front
            "", //left center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left back

            "", //right front
            "", //right center
            "", //right back

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
        class ItemInfo: ItemInfo
        {
            containerclass = "Supply200";
			mass = 20;
        };
	};

    class k_clone_vest_display: k_clone_vest_basic1
    {
        displayname = "[K] Basic Clone Vest display";
        hiddenselectionstextures[] = 
		{
			"",
			"",
            //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //Left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch2
            "", //left front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right center
            "", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right front
            "", //right center
            "", //right back

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
    };
	
//base kama
    class k_clone_kama_full_vest: k_clone_vest_base
	{
		displayname = "[K] Kama (Full)";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\vests\clone_vest\kama_co.paa",
			"kobra\442_units\data\vests\clone_vest\kama_co.paa",
            
            //pouch1
            "", //left front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left center
            "", //left back

            "", //right front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right center
            "", //right back
            
            //pouch2
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back
            
            //pouch3
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back
            
            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back
            
            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
        class ItemInfo: ItemInfo
        {
            containerclass = "Supply100";
			mass = 20;
        };
	};
	class k_clone_kamaL_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Left Kama";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\vests\clone_vest\kama_co.paa",
			"",
            //pouch1
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right center
            "", //right back

            //pouch2
            "", //left front
            "", //left center
            "", //left back

            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
        class ItemInfo: ItemInfo
        {
            containerclass = "Supply100";
			mass = 15;
        };
	};
	class k_clone_kamaR_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Right Kama";
		hiddenselectionstextures[] = 
		{
			"",
			"kobra\442_units\data\vests\clone_vest\kama_co.paa",

            //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left back
            "", //right front
            "", //right center
            "", //right back

            //pouch2
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
        class ItemInfo: ItemInfo
        {
            containerclass = "Supply100";
			mass = 15;
        };
	};
//dirty kama
    class k_clone_kama_dirt_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Kama Dirty";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\vests\clone_vest\kama_dirt_co.paa",
			"kobra\442_units\data\vests\clone_vest\kama_dirt_co.paa",
            
            "", //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",
            "",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",

            "", //pouch2
            "",
            "",
            "",
            "",
            "",

            "", //pouch3
            "",
            "",
            "",
            "",
            "",

            "", //pouch4
            "",
            "",
            "",
            "",
            "",

            "", //pouch5
            "",
            "",
            "",
            "",
            "",

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};
	class k_clone_kama_dirtL_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Left Kama Dirty";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\vests\clone_vest\kama_dirt_co.paa",
			"",
             
            "", //pouch1
            "",
            "",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",

            "", //pouch2
            "",
            "",
            "",
            "",
            "",

            "", //pouch3
            "",
            "",
            "",
            "",
            "",

            "", //pouch4
            "",
            "",
            "",
            "",
            "",

            "", //pouch5
            "",
            "",
            "",
            "",
            "",

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};
	class k_clone_kama_dirtR_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Right Kama Dirty";
		hiddenselectionstextures[] = 
		{
			"",
			"kobra\442_units\data\vests\clone_vest\kama_dirt_co.paa",
            
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",
            "",
            "",

            "", //pouch2
            "",
            "",
            "",
            "",
            "",

            "", //pouch3
            "",
            "",
            "",
            "",
            "",

            "", //pouch4
            "",
            "",
            "",
            "",
            "",

            "", //pouch5
            "",
            "",
            "",
            "",
            "",

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};
//kama design 1	
	class k_clone_kama_1_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Kama 1";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\vests\clone_vest\kama1_co.paa",
			"kobra\442_units\data\vests\clone_vest\kama1_co.paa",
            
            "", //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",
            "",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",

            "", //pouch2
            "",
            "",
            "",
            "",
            "",

            "", //pouch3
            "",
            "",
            "",
            "",
            "",

            "", //pouch4
            "",
            "",
            "",
            "",
            "",

            "", //pouch5
            "",
            "",
            "",
            "",
            "",

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};
	class k_clone_kama_1L_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Left Kama 1";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\vests\clone_vest\kama1_co.paa",
			"",
             
            "", //pouch1
            "",
            "",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",

            "", //pouch2
            "",
            "",
            "",
            "",
            "",

            "", //pouch3
            "",
            "",
            "",
            "",
            "",

            "", //pouch4
            "",
            "",
            "",
            "",
            "",

            "", //pouch5
            "",
            "",
            "",
            "",
            "",

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};
	class k_clone_kama_1R_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Right Kama 1";
		hiddenselectionstextures[] = 
		{
			"",
			"kobra\442_units\data\vests\clone_vest\kama1_co.paa",
            
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",
            "",
            "",

            "", //pouch2
            "",
            "",
            "",
            "",
            "",

            "", //pouch3
            "",
            "",
            "",
            "",
            "",

            "", //pouch4
            "",
            "",
            "",
            "",
            "",

            "", //pouch5
            "",
            "",
            "",
            "",
            "",

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};
//kama design 2	
	class k_clone_kama_2_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Kama 2";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\vests\clone_vest\kama2_co.paa",
			"kobra\442_units\data\vests\clone_vest\kama2_co.paa",
            
            "", //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",
            "",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",

            "", //pouch2
            "",
            "",
            "",
            "",
            "",

            "", //pouch3
            "",
            "",
            "",
            "",
            "",

            "", //pouch4
            "",
            "",
            "",
            "",
            "",

            "", //pouch5
            "",
            "",
            "",
            "",
            "",

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};
	class k_clone_kama_2L_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Left Kama 2";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\vests\clone_vest\kama2_co.paa",
			"",
             
            "", //pouch1
            "",
            "",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",

            "", //pouch2
            "",
            "",
            "",
            "",
            "",

            "", //pouch3
            "",
            "",
            "",
            "",
            "",

            "", //pouch4
            "",
            "",
            "",
            "",
            "",

            "", //pouch5
            "",
            "",
            "",
            "",
            "",

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};
	class k_clone_kama_2R_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Right Kama 2";
		hiddenselectionstextures[] = 
		{
			"",
			"kobra\442_units\data\vests\clone_vest\kama2_co.paa",
            
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",
            "",
            "",

            "", //pouch2
            "",
            "",
            "",
            "",
            "",

            "", //pouch3
            "",
            "",
            "",
            "",
            "",

            "", //pouch4
            "",
            "",
            "",
            "",
            "",

            "", //pouch5
            "",
            "",
            "",
            "",
            "",

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};
//kama design 5	
	class k_clone_kama_5_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Kama 5";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\vests\clone_vest\kama5_co.paa",
			"kobra\442_units\data\vests\clone_vest\kama5_co.paa",
            
            "", //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",
            "",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",

            "", //pouch2
            "",
            "",
            "",
            "",
            "",

            "", //pouch3
            "",
            "",
            "",
            "",
            "",

            "", //pouch4
            "",
            "",
            "",
            "",
            "",

            "", //pouch5
            "",
            "",
            "",
            "",
            "",

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};
	class k_clone_kama_5L_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Left Kama 5";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\vests\clone_vest\kama5_co.paa",
			"",
             
            "", //pouch1
            "",
            "",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",

            "", //pouch2
            "",
            "",
            "",
            "",
            "",

            "", //pouch3
            "",
            "",
            "",
            "",
            "",

            "", //pouch4
            "",
            "",
            "",
            "",
            "",

            "", //pouch5
            "",
            "",
            "",
            "",
            "",

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};
	class k_clone_kama_5R_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Right Kama 5";
		hiddenselectionstextures[] = 
		{
			"",
			"kobra\442_units\data\vests\clone_vest\kama5_co.paa",
            
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",
            "",
            "",

            "", //pouch2
            "",
            "",
            "",
            "",
            "",

            "", //pouch3
            "",
            "",
            "",
            "",
            "",

            "", //pouch4
            "",
            "",
            "",
            "",
            "",

            "", //pouch5
            "",
            "",
            "",
            "",
            "",

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};
//kama design 6
	class k_clone_kama_6_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Kama 6";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\vests\clone_vest\kama6_co.paa",
			"kobra\442_units\data\vests\clone_vest\kama6_co.paa",
            
            "", //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",
            "",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",

            "", //pouch2
            "",
            "",
            "",
            "",
            "",

            "", //pouch3
            "",
            "",
            "",
            "",
            "",

            "", //pouch4
            "",
            "",
            "",
            "",
            "",

            "", //pouch5
            "",
            "",
            "",
            "",
            "",

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};
	class k_clone_kama_6L_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Left Kama 6";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\vests\clone_vest\kama6_co.paa",
			"",
             
            "", //pouch1
            "",
            "",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",

            "", //pouch2
            "",
            "",
            "",
            "",
            "",

            "", //pouch3
            "",
            "",
            "",
            "",
            "",

            "", //pouch4
            "",
            "",
            "",
            "",
            "",

            "", //pouch5
            "",
            "",
            "",
            "",
            "",

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};
	class k_clone_kama_6R_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Right Kama 6";
		hiddenselectionstextures[] = 
		{
			"",
			"kobra\442_units\data\vests\clone_vest\kama6_co.paa",
            
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",
            "",
            "",

            "", //pouch2
            "",
            "",
            "",
            "",
            "",

            "", //pouch3
            "",
            "",
            "",
            "",
            "",

            "", //pouch4
            "",
            "",
            "",
            "",
            "",

            "", //pouch5
            "",
            "",
            "",
            "",
            "",

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};
//kama design 7
	class k_clone_kama_7_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Kama 7";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\vests\clone_vest\kama7_co.paa",
			"kobra\442_units\data\vests\clone_vest\kama7_co.paa",
            
            "", //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",
            "",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",

            "", //pouch2
            "",
            "",
            "",
            "",
            "",

            "", //pouch3
            "",
            "",
            "",
            "",
            "",

            "", //pouch4
            "",
            "",
            "",
            "",
            "",

            "", //pouch5
            "",
            "",
            "",
            "",
            "",

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};
	class k_clone_kama_7L_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Left Kama 7";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\vests\clone_vest\kama7_co.paa",
			"",
             
            "", //pouch1
            "",
            "",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",

            "", //pouch2
            "",
            "",
            "",
            "",
            "",

            "", //pouch3
            "",
            "",
            "",
            "",
            "",

            "", //pouch4
            "",
            "",
            "",
            "",
            "",

            "", //pouch5
            "",
            "",
            "",
            "",
            "",

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};
	class k_clone_kama_7R_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Right Kama 7";
		hiddenselectionstextures[] = 
		{
			"",
			"kobra\442_units\data\vests\clone_vest\kama7_co.paa",
            
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",
            "",
            "",

            "", //pouch2
            "",
            "",
            "",
            "",
            "",

            "", //pouch3
            "",
            "",
            "",
            "",
            "",

            "", //pouch4
            "",
            "",
            "",
            "",
            "",

            "", //pouch5
            "",
            "",
            "",
            "",
            "",

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "", //pauldron_arcC
            "", //pauldron_arcL
            "", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};

//arc vests
    class k_clone_arc_vest: k_clone_vest_basic1
    {
        displayname = "[K] ARC Clone Vest 1";
        hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\vests\clone_vest\kama_co.paa",
			"kobra\442_units\data\vests\clone_vest\kama_co.paa",
            //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //Left front
            "", //left center
            "", //left back

            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right front
            "", //right center
            "", //right back

            //pouch2
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcC
            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcL
            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcR

            "", //pauldron_ncoL
            "", //pauldron_ncoR

            "kobra\442_units\data\vests\clone_vest\arc_plates_co.paa", //arc_chest
            "kobra\442_units\data\vests\clone_vest\arc_plates_co.paa", //arc_legs

            "", //arc_pouchL
            "kobra\442_units\data\vests\clone_vest\arc_pouch_co.paa", //arc_pouchR
		};
        class itemInfo: ItemInfo
        {
            containerclass = "supply200";
            mass = 50;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.1;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.3;
                };
                class legs
                {
                    hitpointName = "HitLegs";
                    armor = 20;
                    passthrough = 0.3;
                };
            };
        };
    };

    class k_clone_arc_vest2: k_clone_arc_vest
    {
        displayname = "[K] ARC Clone Vest 2";
        hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\vests\clone_vest\kama_co.paa",
			"kobra\442_units\data\vests\clone_vest\kama_co.paa",
            //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //Left front
            "", //left center
            "", //left back

            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right front
            "", //right center
            "", //right back

            //pouch2
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcC
            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcL
            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcR

            "", //pauldron_ncoL
            "", //pauldron_ncoR

            "kobra\442_units\data\vests\clone_vest\arc_plates_co.paa", //arc_chest
            "kobra\442_units\data\vests\clone_vest\arc_plates_co.paa", //arc_legs

            "kobra\442_units\data\vests\clone_vest\arc_pouch_co.paa", //arc_pouchL
            "", //arc_pouchR
		};
    };

    class k_clone_arc_vest3: k_clone_arc_vest
    {
        displayname = "[K] ARC Clone Vest 3";
        hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\vests\clone_vest\kama_co.paa",
			"kobra\442_units\data\vests\clone_vest\kama_co.paa",
            //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //Left front
            "", //left center
            "", //left back

            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right front
            "", //right center
            "", //right back

            //pouch2
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcC
            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcL
            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcR

            "", //pauldron_ncoL
            "", //pauldron_ncoR

            "kobra\442_units\data\vests\clone_vest\arc_plates_co.paa", //arc_chest
            "kobra\442_units\data\vests\clone_vest\arc_plates_co.paa", //arc_legs

            "kobra\442_units\data\vests\clone_vest\arc_pouch_co.paa", //arc_pouchL
            "kobra\442_units\data\vests\clone_vest\arc_pouch_co.paa", //arc_pouchR
		};
    };
//commander vests
	class k_clone_commander_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Commander Vest";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\vests\clone_vest\kama_co.paa",
			"kobra\442_units\data\vests\clone_vest\kama_co.paa",
            
            "", //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",
            "",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",

            "", //pouch2
            "",
            "",
            "",
            "",
            "",

            "", //pouch3
            "",
            "",
            "",
            "",
            "",

            "", //pouch4
            "",
            "",
            "",
            "",
            "",

            "", //pouch5
            "",
            "",
            "",
            "",
            "",

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcC
            "", //pauldron_arcL
            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcR
            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};