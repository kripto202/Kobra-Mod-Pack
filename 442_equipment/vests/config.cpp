class cfgpatches
{
    class 442_equipment_vest
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = {};
        weapons[] = 
        {
            "k_commando_vest_base",
            "k_commando_vest_plate_base",
            "k_commando_vest1",
            "k_commando_vest2",
            "k_commando_vest3",
            "k_commando_vest4",
            "k_commando_vest5",
            "k_commando_vest6",
            "k_commando_vest7",
            "k_commando_vest8",
            "k_commando_vest9",
            "k_commando_vest10",
            "k_commando_vest11",
            "k_commando_vest12",
            "k_commando_vest13",
            "k_commando_vest14",
            "k_commando_vest15",
            "k_commando_vest16",
            "k_commando_vest17",
            "k_commando_vest18",
            "k_commando_vest19",
            "k_commando_vest20",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
        };
    };
};

class cfgweapons 
{
    class vestitem;
	class V_rebreatherB;

///base
	class k_vest_base: V_rebreatherB
    {
        author = "Kobra Mod Team";
        displayname = "vest base";
        scope = 0;
        scopecurator = 0;
        scopearsenal = 0;
        allowedSlots[] = {901};
        picture = "\kobra\kobra_core\kobra.paa";
		icon = "\kobra\kobra_core\kobra.paa";
        class ItemInfo: vestitem
        {
            uniformmodel = "";
            containerclass = "Supply200";
            mass = 80;
            vesttype = "Rebreather";
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 1;
                    PassThrough = 1;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 0;
                    PassThrough = 1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 0;
                    passThrough = 1;
                };
            };
        };
    };
};
//clone vests
//this needs to be redone for the new vests
    class k_clone_vest_base: k_vest_base
	{
		author = "KOBRA Mod Team";
		displayname = "Clone Vest Base";
		model = "kobra\442_equipment\vests\model\clone\clone_vest.p3d";
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
			uniformmodel = "kobra\442_equipment\vests\model\clone\clone_vest.p3d";
			containerclass = "Supply100";
			mass = 20;
		};
	};

////belt pouches
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
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //left center
            "", //left back

            "", //right front
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //right center
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
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //Left front
            "", //left center
            "", //left back

            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //right front
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
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //left front
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //left center
            "", //left back

            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //right front
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //right center
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
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //left front
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //left center
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //left back

            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //right front
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //right center
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //right back

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
            containerclass = "Supply200";
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
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //left center
            "", //left back

            "", //right front
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //right center
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

            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //right front
            "", //right center
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch5
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //left front
            "", //left center
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //left back

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
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //Left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch2
            "", //left front
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //right center
            "", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //right front
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
	
////base kama
    class k_clone_kama_full_vest: k_clone_vest_base
	{
		displayname = "[K] Kama (Full)";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\vests\data\clone\clone_vest\kama_co.paa",
			"kobra\442_equipment\vests\data\clone\clone_vest\kama_co.paa",
            
            //pouch1
            "", //left front
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //left center
            "", //left back

            "", //right front
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //right center
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
			"kobra\442_equipment\vests\data\clone\clone_vest\kama_co.paa",
			"",
            //pouch1
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //right center
            "", //right back

            //pouch2
            "", //left front
            "", //left center
            "", //left back

            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //right back

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
			"kobra\442_equipment\vests\data\clone\clone_vest\kama_co.paa",

            //pouch1
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //left front
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //left center
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //left back
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
////dirty kama
    class k_clone_kama_dirt_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Kama Dirty";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\vests\data\clone\clone_vest\kama_dirt_co.paa",
			"kobra\442_equipment\vests\data\clone\clone_vest\kama_dirt_co.paa",
            
            "", //pouch1
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "",
            "",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
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
			"kobra\442_equipment\vests\data\clone\clone_vest\kama_dirt_co.paa",
			"",
             
            "", //pouch1
            "",
            "",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",

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
			"kobra\442_equipment\vests\data\clone\clone_vest\kama_dirt_co.paa",
            
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //pouch1
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
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
////kama design 1	
	class k_clone_kama_1_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Kama 1";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\vests\data\clone\clone_vest\kama1_co.paa",
			"kobra\442_equipment\vests\data\clone\clone_vest\kama1_co.paa",
            
            "", //pouch1
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "",
            "",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
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
			"kobra\442_equipment\vests\data\clone\clone_vest\kama1_co.paa",
			"",
             
            "", //pouch1
            "",
            "",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",

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
			"kobra\442_equipment\vests\data\clone\clone_vest\kama1_co.paa",
            
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //pouch1
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
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
////kama design 2	
	class k_clone_kama_2_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Kama 2";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\vests\data\clone\clone_vest\kama2_co.paa",
			"kobra\442_equipment\vests\data\clone\clone_vest\kama2_co.paa",
            
            "", //pouch1
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "",
            "",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
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
			"kobra\442_equipment\vests\data\clone\clone_vest\kama2_co.paa",
			"",
             
            "", //pouch1
            "",
            "",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",

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
			"kobra\442_equipment\vests\data\clone\clone_vest\kama2_co.paa",
            
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //pouch1
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
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
////kama design 5	
	class k_clone_kama_5_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Kama 5";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\vests\data\clone\clone_vest\kama5_co.paa",
			"kobra\442_equipment\vests\data\clone\clone_vest\kama5_co.paa",
            
            "", //pouch1
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "",
            "",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
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
			"kobra\442_equipment\vests\data\clone\clone_vest\kama5_co.paa",
			"",
             
            "", //pouch1
            "",
            "",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",

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
			"kobra\442_equipment\vests\data\clone\clone_vest\kama5_co.paa",
            
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //pouch1
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
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
////kama design 6
	class k_clone_kama_6_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Kama 6";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\vests\data\clone\clone_vest\kama6_co.paa",
			"kobra\442_equipment\vests\data\clone\clone_vest\kama6_co.paa",
            
            "", //pouch1
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "",
            "",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
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
			"kobra\442_equipment\vests\data\clone\clone_vest\kama6_co.paa",
			"",
             
            "", //pouch1
            "",
            "",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",

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
			"kobra\442_equipment\vests\data\clone\clone_vest\kama6_co.paa",
            
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //pouch1
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
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
////kama design 7
	class k_clone_kama_7_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Kama 7";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\vests\data\clone\clone_vest\kama7_co.paa",
			"kobra\442_equipment\vests\data\clone\clone_vest\kama7_co.paa",
            
            "", //pouch1
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "",
            "",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
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
			"kobra\442_equipment\vests\data\clone\clone_vest\kama7_co.paa",
			"",
             
            "", //pouch1
            "",
            "",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",

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
			"kobra\442_equipment\vests\data\clone\clone_vest\kama7_co.paa",
            
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //pouch1
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
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

////arc vests
    class k_clone_arc_vest: k_clone_vest_basic1
    {
        displayname = "[K] ARC Clone Vest 1";
        hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\vests\data\clone\clone_vest\kama_co.paa",
			"kobra\442_equipment\vests\data\clone\clone_vest\kama_co.paa",
            //pouch1
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //Left front
            "", //left center
            "", //left back

            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //right front
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

            "kobra\442_equipment\vests\data\clone\clone_vest\arc_pauldron_co.paa", //pauldron_arcC
            "kobra\442_equipment\vests\data\clone\clone_vest\arc_pauldron_co.paa", //pauldron_arcL
            "kobra\442_equipment\vests\data\clone\clone_vest\arc_pauldron_co.paa", //pauldron_arcR

            "", //pauldron_ncoL
            "", //pauldron_ncoR

            "kobra\442_equipment\vests\data\clone\clone_vest\arc_plates_co.paa", //arc_chest
            "kobra\442_equipment\vests\data\clone\clone_vest\arc_plates_co.paa", //arc_legs

            "", //arc_pouchL
            "kobra\442_equipment\vests\data\clone\clone_vest\arc_pouch_co.paa", //arc_pouchR
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
                    armor = 12;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 12;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 12;
                    passThrough = 0.3;
                };
                class legs
                {
                    hitpointName = "HitLegs";
                    armor = 12;
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
			"kobra\442_equipment\vests\data\clone\clone_vest\kama_co.paa",
			"kobra\442_equipment\vests\data\clone\clone_vest\kama_co.paa",
            //pouch1
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //Left front
            "", //left center
            "", //left back

            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //right front
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

            "kobra\442_equipment\vests\data\clone\clone_vest\arc_pauldron_co.paa", //pauldron_arcC
            "kobra\442_equipment\vests\data\clone\clone_vest\arc_pauldron_co.paa", //pauldron_arcL
            "kobra\442_equipment\vests\data\clone\clone_vest\arc_pauldron_co.paa", //pauldron_arcR

            "", //pauldron_ncoL
            "", //pauldron_ncoR

            "kobra\442_equipment\vests\data\clone\clone_vest\arc_plates_co.paa", //arc_chest
            "kobra\442_equipment\vests\data\clone\clone_vest\arc_plates_co.paa", //arc_legs

            "kobra\442_equipment\vests\data\clone\clone_vest\arc_pouch_co.paa", //arc_pouchL
            "", //arc_pouchR
		};
    };

    class k_clone_arc_vest3: k_clone_arc_vest
    {
        displayname = "[K] ARC Clone Vest 3";
        hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\vests\data\clone\clone_vest\kama_co.paa",
			"kobra\442_equipment\vests\data\clone\clone_vest\kama_co.paa",
            //pouch1
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //Left front
            "", //left center
            "", //left back

            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa", //right front
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

            "kobra\442_equipment\vests\data\clone\clone_vest\arc_pauldron_co.paa", //pauldron_arcC
            "kobra\442_equipment\vests\data\clone\clone_vest\arc_pauldron_co.paa", //pauldron_arcL
            "kobra\442_equipment\vests\data\clone\clone_vest\arc_pauldron_co.paa", //pauldron_arcR

            "", //pauldron_ncoL
            "", //pauldron_ncoR

            "kobra\442_equipment\vests\data\clone\clone_vest\arc_plates_co.paa", //arc_chest
            "kobra\442_equipment\vests\data\clone\clone_vest\arc_plates_co.paa", //arc_legs

            "kobra\442_equipment\vests\data\clone\clone_vest\arc_pouch_co.paa", //arc_pouchL
            "kobra\442_equipment\vests\data\clone\clone_vest\arc_pouch_co.paa", //arc_pouchR
		};
    };
////commander vests
	class k_clone_commander_vest: k_clone_kama_full_vest
	{
		displayname = "[K] Commander Vest";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\vests\data\clone\clone_vest\kama_co.paa",
			"kobra\442_equipment\vests\data\clone\clone_vest\kama_co.paa",
            
            "", //pouch1
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
            "",
            "",
            "kobra\442_equipment\vests\data\clone\clone_vest\clone_belt_co.paa",
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

            "kobra\442_equipment\vests\data\clone\clone_vest\arc_pauldron_co.paa", //pauldron_arcC
            "", //pauldron_arcL
            "kobra\442_equipment\vests\data\clone\clone_vest\arc_pauldron_co.paa", //pauldron_arcR
            "kobra\442_equipment\vests\data\clone\clone_vest\arc_pauldron_co.paa", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
	};
//scout vests
//this needs to be redone for the new vests
    class k_scout_pouches_base: k_vest_base
    {
        author = "KOBRA Mod Team";
        displayname = "Scout Pouches";
        model = "kobra\442_equipment\scout_pouches.p3d";
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
            uniformmodel = "kobra\442_equipment\scout_pouches.p3d";
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
            "kobra\442_equipment\vests\data\scout\scout_pouches\pouches_co.paa",
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
            "kobra\442_equipment\vests\data\scout\scout_pouches\pouches_co.paa",
            "kobra\442_equipment\vests\data\scout\scout_pouches\pouches_co.paa",
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
            "kobra\442_equipment\vests\data\scout\scout_pouches\pouches_co.paa",
            "kobra\442_equipment\vests\data\scout\scout_pouches\pouches_co.paa",
            "kobra\442_equipment\vests\data\scout\scout_pouches\pouches_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            containerclass = "Supply150";
            mass = 20;
        };
    };

//commando vests
    ////helmet_parts_1 is for pouches and shells
    class k_commando_vest_base: k_vest_base
    {
        author = "KOBRA Mod Team";
        displayname = "Commando Vest Base";
        model = "";
        hiddenselections[] = {};
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = {};
            uniformmodel = "";
            containerclass = "Supply100";
            mass = 20;
        };
    };
    class k_commando_vest_plate_base: k_commando_vest_base
    {
        displayname = "Commando Vest Base Plated";
        class ItemInfo: ItemInfo
        {
            mass = 50;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 12;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 12;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 12;
                    passThrough = 0.3;
                };
                class legs
                {
                    hitpointName = "HitLegs";
                    armor = 12;
                    passthrough = 0.3;
                };
            };
        };
    };
    ////backpack
    class k_commando_vest1: k_commando_vest_base
    {
        displayname = "Commando Vest 1";
        model = "kobra\442_equipment\vests\commando\k_commando_vest1.p3d";
        hiddenselections[] = 
        {
            "backpack"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\backpack_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "backpack"
            };
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest1.p3d";
        };
    };
    ////backpack, body plates, both kama, both pouches, both shells
    class k_commando_vest2: k_commando_vest_plate_base
    {
        displayname = "Commando Vest 2";
        model = "kobra\442_equipment\vests\commando\k_commando_vest2.p3d";
        hiddenselections[] = 
        {
            "backpack",
			"body_plates",
			"kama",
			"pouches",
			"shells"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\plates_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "backpack",
                "body_plates",
                "kama",
                "pouches",
                "shells"
            };
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest2.p3d";
        };
    };
    ////backpack, body plates, both kama
    class k_commando_vest3: k_commando_vest_plate_base
    {
        displayname = "Commando Vest 3";
        model = "kobra\442_equipment\vests\commando\k_commando_vest3.p3d";
        hiddenselections[] = 
        {
            "backpack",
			"body_plates",
			"kama"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\plates_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "backpack",
                "body_plates",
                "kama"
            };
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest3.p3d";
        };
    };
    ////backpack, body plates, both kama, left pouch, both shells
    class k_commando_vest4: k_commando_vest2
    {
        displayname = "Commando Vest 4";
        model = "kobra\442_equipment\vests\commando\k_commando_vest4.p3d";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest4.p3d";
        };
    };
    ////backpack, body plates, both kama, right pouch, both shells
    class k_commando_vest5: k_commando_vest2
    {
        displayname = "Commando Vest 5";
        model = "kobra\442_equipment\vests\commando\k_commando_vest5.p3d";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest5.p3d";
        };
    };
    ////backpack, body plates, both shells
    class k_commando_vest6: k_commando_vest_plate_base
    {
        displayname = "Commando Vest 6";
        model = "kobra\442_equipment\vests\commando\k_commando_vest6.p3d";
        hiddenselections[] = 
        {
            "backpack",
			"body_plates",
			"shells"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\plates_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "backpack",
                "body_plates",
                "shells"
            };
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest6.p3d";
        };
    };
    ////backpack, body plates, left kama, right pouch, left shells
    class k_commando_vest7: k_commando_vest2
    {
        displayname = "Commando Vest 7";
        model = "kobra\442_equipment\vests\commando\k_commando_vest7.p3d";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest7.p3d";
        };
    };
    ////backpack, body plates, right kama, left pouch, right shells
    class k_commando_vest8: k_commando_vest2
    {
        displayname = "Commando Vest 8";
        model = "kobra\442_equipment\vests\commando\k_commando_vest8.p3d";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest8.p3d";
        };
    };
    ////backpack, body plates, both kama, both pouch
    class k_commando_vest9: k_commando_vest_plate_base
    {
        displayname = "Commando Vest 9";
        model = "kobra\442_equipment\vests\commando\k_commando_vest9.p3d";
        hiddenselections[] = 
        {
            "backpack",
			"body_plates",
			"kama",
			"pouches"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\plates_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "backpack",
                "body_plates",
                "kama",
                "pouches"
            };
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest9.p3d";
        };
    };
    ////backpack, body plates, left kama, right pouch
    class k_commando_vest10: k_commando_vest9
    {
        displayname = "Commando Vest 10";
        model = "kobra\442_equipment\vests\commando\k_commando_vest10.p3d";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest10.p3d";
        };
    };
    ////backpack, both kama
    class k_commando_vest11: k_commando_vest_base
    {
        displayname = "Commando Vest 11";
        model = "kobra\442_equipment\vests\commando\k_commando_vest11.p3d";
        hiddenselections[] = 
        {
            "backpack",
            "kama"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "backpack",
                "kama"
            };
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest11.p3d";
        };
    };
    ////backpack, left kama
    class k_commando_vest12: k_commando_vest11
    {
        displayname = "Commando Vest 12";
        model = "kobra\442_equipment\vests\commando\k_commando_vest12.p3d";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest12.p3d";
        };
    };
    ////backpack, right kama
    class k_commando_vest13: k_commando_vest11
    {
        displayname = "Commando Vest 13";
        model = "kobra\442_equipment\vests\commando\k_commando_vest13.p3d";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest13.p3d";
        };
    };
    ////backpack, both pouch, both shell
    class k_commando_vest14: k_commando_vest_base
    {
        displayname = "Commando Vest 14";
        model = "kobra\442_equipment\vests\commando\k_commando_vest14.p3d";
        hiddenselections[] = 
        {
            "backpack",
			"pouches",
			"shells"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\backpack_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "backpack",
                "pouches",
                "shells"
            };
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest14.p3d";
        };
    };
    ////backpack, left pouch, left shell
    class k_commando_vest15: k_commando_vest14
    {
        displayname = "Commando Vest 15";
        model = "kobra\442_equipment\vests\commando\k_commando_vest15.p3d";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest15.p3d";
        };
    };
    ////backpack, right pouch, right shell
    class k_commando_vest16: k_commando_vest14
    {
        displayname = "Commando Vest 16";
        model = "kobra\442_equipment\vests\commando\k_commando_vest16.p3d";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest16.p3d";
        };
    };
    ////backpack, both pouch
    class k_commando_vest17: k_commando_vest_base
    {
        displayname = "Commando Vest 17";
        model = "kobra\442_equipment\vests\commando\k_commando_vest17.p3d";
        hiddenselections[] = 
        {
            "backpack",
			"pouches"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\backpack_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "backpack",
                "pouches"
            };
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest17.p3d";
        };
    };
    ////backpack, both kama, left pouch
    class k_commando_vest18: k_commando_vest_base
    {
        displayname = "Commando Vest 18";
        model = "kobra\442_equipment\vests\commando\k_commando_vest18.p3d";
        hiddenselections[] = 
        {
            "backpack",
			"kama",
			"pouches"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "backpack",
                "kama",
                "pouches"
            };
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest18.p3d";
        };
    };
    ////backpack, both kama, right pouch
    class k_commando_vest19: k_commando_vest18
    {
        displayname = "Commando Vest 19";
        model = "kobra\442_equipment\vests\commando\k_commando_vest19.p3d";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest19.p3d";
        };
    };
    ////backpack, both shells
    class k_commando_vest20: k_commando_vest_base
    {
        displayname = "Commando Vest 20";
        model = "kobra\442_equipment\vests\commando\k_commando_vest20.p3d";
        hiddenselections[] = 
        {
            "backpack",
			"kama",
			"pouches"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\backpack_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "backpack",
                "shells"
            };
            uniformmodel = "kobra\442_equipment\vests\commando\k_commando_vest20.p3d";
        };
    };

//custom
    class k_44ab_scout_pouches_delta: k_scout_pouches_heavy
    {
        displayname = "[K/44] Heavy Scout Pouches (Delta)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\data\unit_designs\44_attack_battalion\delta\scout_pouches_co.paa",
            "kobra\442_equipment\data\unit_designs\44_attack_battalion\delta\scout_pouches_co.paa",
            "kobra\442_equipment\data\unit_designs\44_attack_battalion\delta\scout_pouches_co.paa",
        };
    };

    class k_scout_pouches_light_woodland2: k_scout_pouches_light
    {
        displayname = "[K] Light Scout Pouches (Woodland)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\scout\scout_pouches\pouches_woodland_co.paa",
            "",
            ""
        };
    };
    class k_scout_pouches_medium_woodland2: k_scout_pouches_medium
    {
        displayname = "[K] Medium Scout Pouches (Woodland)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\scout\scout_pouches\pouches_woodland_co.paa",
            "kobra\442_equipment\vests\data\scout\scout_pouches\pouches_woodland_co.paa",
            ""
        };
    };
    class k_scout_pouches_heavy_woodland2: k_scout_pouches_heavy
    {
        displayname = "[K] Heavy Scout Pouches (Woodland)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\scout\scout_pouches\pouches_woodland_co.paa",
            "kobra\442_equipment\vests\data\scout\scout_pouches\pouches_woodland_co.paa",
            "kobra\442_equipment\vests\data\scout\scout_pouches\pouches_woodland_co.paa"
        };
    };
    class k_scout_pouches_light_desert2: k_scout_pouches_light
    {
        displayname = "[K] Light Scout Pouches (Desert)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\scout\scout_pouches\pouches_desert_co.paa",
            "",
            ""
        };
    };
    class k_scout_pouches_medium_desert2: k_scout_pouches_medium
    {
        displayname = "[K] Medium Scout Pouches (Desert)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\scout\scout_pouches\pouches_desert_co.paa",
            "kobra\442_equipment\vests\data\scout\scout_pouches\pouches_desert_co.paa",
            ""
        };
    };
    class k_scout_pouches_heavy_desert2: k_scout_pouches_heavy
    {
        displayname = "[K] Heavy Scout Pouches (Desert)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\scout\scout_pouches\pouches_desert_co.paa",
            "kobra\442_equipment\vests\data\scout\scout_pouches\pouches_desert_co.paa",
            "kobra\442_equipment\vests\data\scout\scout_pouches\pouches_desert_co.paa"
        };
    };