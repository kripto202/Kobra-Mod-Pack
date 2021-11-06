    class k_scout_pouches_base: k_vest_base
    {
        author = "KOBRA Mod Team";
        displayname = "Scout Pouches";
        model = "kobra\442_units\scout_pouches.p3d";
        hiddenselections[] = 
        {
            "pouch1",
            "pouch2",
            "pouch3",
        };
        class ItemInfo: VestItem
        {
            hiddenselections[] = 
            {
                "pouch1",
                "pouch2",
                "pouch3"
            };
            uniformmodel = "kobra\442_units\scout_pouches.p3d";
            containerclass = "Supply150";
            mass = 50;
            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 1;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };
    class k_scout_pouches_light: k_scout_pouches_base
    {
        displayname = "[K] Light Scout Pouches";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\scout_pouches\pouches_co.paa",
            "",
            ""
        };
        class ItemInfo: ItemInfo
        {
            containerclass = "Supply50";
            mass = 10;
        };
    };
    class k_scout_pouches_medium: k_scout_pouches_light
    {
        displayname = "[K] Medium Scout Pouches";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\scout_pouches\pouches_co.paa",
            "kobra\442_units\data\vests\scout_pouches\pouches_co.paa",
            ""
        };
        class ItemInfo: ItemInfo
        {
            containerclass = "Supply100";
            mass = 15;
        };
    };
    class k_scout_pouches_heavy: k_scout_pouches_light
    {
        displayname = "[K] Heavy Scout Pouches";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\scout_pouches\pouches_co.paa",
            "kobra\442_units\data\vests\scout_pouches\pouches_co.paa",
            "kobra\442_units\data\vests\scout_pouches\pouches_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            containerclass = "Supply150";
            mass = 20;
        };
    };
	
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
		};
		class ItemInfo: VestItem
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
			};
			uniformmodel = "kobra\442_units\clone_vest.p3d";
			containerclass = "Supply100";
			mass = 20;
			class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 1;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
		};
	};
	
	class k_kama_full: k_clone_vest_base
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
		};
        class ItemInfo: ItemInfo
        {
            containerclass = "Supply100";
			mass = 20;
        };
	};
	class k_kama_L: k_kama_full
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
		};
        class ItemInfo: ItemInfo
        {
            containerclass = "Supply100";
			mass = 15;
        };
	};
	class k_kama_R: k_kama_full
	{
		displayname = "[K] Right Kama";
		hiddenselectionstextures[] = 
		{
			"",
			"kobra\442_units\data\vests\clone_vest\kama_co.paa",

            //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", 
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa",
            "",
            "",
            "",

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
		};
        class ItemInfo: ItemInfo
        {
            containerclass = "Supply100";
			mass = 15;
        };
	};

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
			"",
			"",
            
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
		};
    };
	
	class k_kama_dirt: k_kama_full
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
		};
	};
	class k_kama_dirtL: k_kama_full
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
		};
	};
	class k_kama_dirtR: k_kama_full
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
		};
	};
	
	class k_kama_1: k_kama_full
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
		};
	};
	class k_kama_1L: k_kama_full
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
		};
	};
	class k_kama_1R: k_kama_full
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
		};
	};
	
	class k_kama_2: k_kama_full
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
		};
	};
	class k_kama_2L: k_kama_full
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
		};
	};
	class k_kama_2R: k_kama_full
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
		};
	};
	
	class k_kama_5: k_kama_full
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
		};
	};
	class k_kama_5L: k_kama_full
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
		};
	};
	class k_kama_5R: k_kama_full
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
		};
	};
	
	class k_kama_6: k_kama_full
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
		};
	};
	class k_kama_6L: k_kama_full
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
		};
	};
	class k_kama_6R: k_kama_full
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
		};
	};
	
	class k_kama_7: k_kama_full
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
		};
	};
	class k_kama_7L: k_kama_full
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
		};
	};
	class k_kama_7R: k_kama_full
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
		};
	};