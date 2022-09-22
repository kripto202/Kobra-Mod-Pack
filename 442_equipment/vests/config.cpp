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

            "k_commando_vest1_44",
            "k_commando_vest2_44",
            "k_commando_vest3_44",
            "k_commando_vest4_44",
            "k_commando_vest5_44",
            "k_commando_vest6_44",
            "k_commando_vest7_44",
            "k_commando_vest8_44",
            "k_commando_vest9_44",
            "k_commando_vest10_44",
            "k_commando_vest11_44",
            "k_commando_vest12_44",
            "k_commando_vest13_44",
            "k_commando_vest14_44",
            "k_commando_vest15_44",
            "k_commando_vest16_44",
            "k_commando_vest17_44",
            "k_commando_vest18_44",
            "k_commando_vest19_44",
            "k_commando_vest20_44",

            "k_clone_basic_vest1",
            "k_clone_basic_vest2",
            "k_clone_basic_vest3",
            "k_clone_basic_vest4",
            "k_clone_basic_vest5",
            "k_clone_basic_vest6",
            "k_clone_basic_vest7",
            "k_clone_basic_vest8",
            "k_clone_basic_vest9",
            "k_clone_basic_vest10",

            "k_clone_arc_vest1",
            "k_clone_arc_vest2",
            "k_clone_arc_vest3",
            "k_clone_arc_vest4",
            "k_clone_arc_vest5",
            "k_clone_arc_vest6",
            "k_clone_arc_vest7",
            "k_clone_arc_vest8",
            "k_clone_arc_vest9",
            "k_clone_arc_vest10",

            "k_clone_heavy_vest1",
            "k_clone_heavy_vest2",
            "k_clone_heavy_vest3",
            "k_clone_heavy_vest4",
            "k_clone_heavy_vest5",
            "k_clone_heavy_vest6",
            "k_clone_heavy_vest7",
            "k_clone_heavy_vest8",
            "k_clone_heavy_vest9",
            "k_clone_heavy_vest10",

            "k_clone_kamaL_vest1",
            "k_clone_kamaL_vest2",
            "k_clone_kamaL_vest3",
            "k_clone_kamaL_vest4",
            "k_clone_kamaL_vest5",
            "k_clone_kamaL_vest6",
            "k_clone_kamaL_vest7",
            "k_clone_kamaL_vest8",
            "k_clone_kamaL_vest9",
            "k_clone_kamaL_vest10",

            "k_clone_kamaR_vest1",
            "k_clone_kamaR_vest2",
            "k_clone_kamaR_vest3",
            "k_clone_kamaR_vest4",
            "k_clone_kamaR_vest5",
            "k_clone_kamaR_vest6",
            "k_clone_kamaR_vest7",
            "k_clone_kamaR_vest8",
            "k_clone_kamaR_vest9",
            "k_clone_kamaR_vest10",

            "k_clone_nco_vest1",
            "k_clone_nco_vest2",
            "k_clone_nco_vest3",
            "k_clone_nco_vest4",
            "k_clone_nco_vest5",
            "k_clone_nco_vest6",
            "k_clone_nco_vest7",
            "k_clone_nco_vest8",
            "k_clone_nco_vest9",
            "k_clone_nco_vest10",

            "k_clone_officer_vest1",
            "k_clone_officer_vest2",
            "k_clone_officer_vest3",
            "k_clone_officer_vest4",
            "k_clone_officer_vest5",
            "k_clone_officer_vest6",
            "k_clone_officer_vest7",
            "k_clone_officer_vest8",
            "k_clone_officer_vest9",
            "k_clone_officer_vest10",

            "k_scout_pouches_base",
            "k_scout_pouches_light",
            "k_scout_pouches_medium",
            "k_scout_pouches_heavy",

            "k_commando_vest1_boss",
            "k_commando_vest1_fixer",
            "k_commando_vest1_scorch",
            "k_commando_vest1_sev",
            "k_commando_vest1_omega",

            "k_scout_pouches_light_woodland2",
            "k_scout_pouches_medium_woodland2",
            "k_scout_pouches_heavy_woodland2",
            "k_scout_pouches_light_desert2",
            "k_scout_pouches_medium_desert2",
            "k_scout_pouches_heavy_desert2",
        };
    };
};

class vestitem;

class cfgweapons 
{
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
//clone vests
////vest bases
    class k_clone_basic_vest_base: k_vest_base
	{
		author = "KOBRA Mod Team";
		displayname = "Clone Vest Basic Base";
        model = "kobra\442_equipment\ground\k_crate_vest_gh.p3d";
		hiddenselections[] = 
		{
            "pouch"
        };
		class ItemInfo: ItemInfo
		{
			hiddenselections[] = 
			{
                "pouch"
            };
			containerclass = "Supply100";
			mass = 20;
		};
	};
    class k_clone_arc_vest_base: k_vest_base
    {
		author = "KOBRA Mod Team";
		displayname = "Clone Vest Arc Base";
		hiddenselections[] = 
		{
            "pouch",
			"arc_chest",
			"arc_legs",
			"arc_pouchR",
			"kamaL",
			"kamaR",
			"pauldron_arcC",
			"pauldron_arcL",
			"pauldron_arcR"
        };
		class ItemInfo: ItemInfo
		{
			hiddenselections[] = 
			{
                "pouch",
                "arc_chest",
                "arc_legs",
                "arc_pouchR",
                "kamaL",
                "kamaR",
                "pauldron_arcC",
                "pauldron_arcL",
                "pauldron_arcR"
            };
			containerclass = "Supply100";
			mass = 20;
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
    class k_clone_heavy_vest_base: k_vest_base
    {
		author = "KOBRA Mod Team";
		displayname = "Clone Vest Arc Base";
		hiddenselections[] = 
		{
            "pouch",
			"arc_chest",
			"arc_legs",
			"pauldron_arcC",
			"pauldron_ncoL",
			"pauldron_ncoR",
			"leg_pouchL",
			"leg_pouchR"
        };
		class ItemInfo: ItemInfo
		{
			hiddenselections[] = 
			{
                "pouch",
                "arc_chest",
                "arc_legs",
                "pauldron_arcC",
                "pauldron_ncoL",
                "pauldron_ncoR",
                "leg_pouchL",
                "leg_pouchR"
            };
			containerclass = "Supply100";
			mass = 20;
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
    class k_clone_kamaL_vest_base: k_vest_base
    {
		author = "KOBRA Mod Team";
		displayname = "Clone Vest KamaL Base";
		hiddenselections[] = 
		{
            "pouch",
			"kamaL",
			"leg_pouchL",
			"leg_pouchR"
        };
		class ItemInfo: ItemInfo
		{
			hiddenselections[] = 
			{
                "pouch",
                "kamaL",
                "leg_pouchL",
                "leg_pouchR"
            };
			containerclass = "Supply100";
			mass = 20;
		};
	};
    class k_clone_kamaR_vest_base: k_vest_base
    {
		author = "KOBRA Mod Team";
		displayname = "Clone Vest KamaR Base";
		hiddenselections[] = 
		{
            "pouch",
			"kamaR",
			"leg_pouchL",
			"leg_pouchR"
        };
		class ItemInfo: ItemInfo
		{
			hiddenselections[] = 
			{
                "pouch",
                "kamaR",
                "leg_pouchL",
                "leg_pouchR"
            };
			containerclass = "Supply100";
			mass = 20;
		};
	};
    class k_clone_nco_vest_base: k_vest_base
    {
		author = "KOBRA Mod Team";
		displayname = "Clone Vest NCO Base";
		hiddenselections[] = 
		{
            "pouch",
			"kamaL",
			"kamaR"
        };
		class ItemInfo: ItemInfo
		{
			hiddenselections[] = 
			{
                "pouch",
                "kamaL",
                "kamaR"
            };
			containerclass = "Supply100";
			mass = 20;
		};
	};
    class k_clone_officer_vest_base: k_vest_base
    {
		author = "KOBRA Mod Team";
		displayname = "Clone Vest NCO Base";
		hiddenselections[] = 
		{
            "pouch",
			"kamaL",
			"kamaR",
			"pauldron_arcC",
			"pauldron_arcL",
			"pauldron_ncoR",
        };
		class ItemInfo: ItemInfo
		{
			hiddenselections[] = 
			{
                "pouch",
                "kamaL",
                "kamaR",
                "pauldron_arcC",
                "pauldron_arcL",
                "pauldron_ncoR",
            };
			containerclass = "Supply100";
			mass = 20;
		};
	};
////useable vests
////basic vests
    class k_clone_basic_vest1: k_clone_basic_vest_base
    {
        displayname = "[K] Clone Basic Vest 01";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\clone_belt_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_basic_vest1.p3d";
            containerclass = "Supply100";
			mass = 1;
        };
    };
    class k_clone_basic_vest2: k_clone_basic_vest1
    {
        displayname = "[K] Clone Basic Vest 02";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_basic_vest2.p3d";
			mass = 5;
        };
    };
    class k_clone_basic_vest3: k_clone_basic_vest1
    {
        displayname = "[K] Clone Basic Vest 03";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_basic_vest3.p3d";
			mass = 5;
        };
    };
    class k_clone_basic_vest4: k_clone_basic_vest1
    {
        displayname = "[K] Clone Basic Vest 04";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_basic_vest2.p3d";
			mass = 5;
        };
    };
    class k_clone_basic_vest5: k_clone_basic_vest1
    {
        displayname = "[K] Clone Basic Vest 05";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_basic_vest5.p3d";
			mass = 5;
        };
    };
    class k_clone_basic_vest6: k_clone_basic_vest1
    {
        displayname = "[K] Clone Basic Vest 06";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_basic_vest6.p3d";
			mass = 5;
        };
    };
    class k_clone_basic_vest7: k_clone_basic_vest1
    {
        displayname = "[K] Clone Basic Vest 07";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_basic_vest7.p3d";
			mass = 5;
        };
    };
    class k_clone_basic_vest8: k_clone_basic_vest1
    {
        displayname = "[K] Clone Basic Vest 08";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_basic_vest8.p3d";
			mass = 5;
        };
    };
    class k_clone_basic_vest9: k_clone_basic_vest1
    {
        displayname = "[K] Clone Basic Vest 09";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_basic_vest9.p3d";
			mass = 5;
        };
    };
    class k_clone_basic_vest10: k_clone_basic_vest1
    {
        displayname = "[K] Clone Basic Vest 10";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_basic_vest10.p3d";
			mass = 5;
        };
    };
////arc vests
    class k_clone_arc_vest1: k_clone_basic_vest_base
    {
        displayname = "[K] Clone arc Vest 01";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_plates_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_plates_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_pouch_co.paa",
            "kobra\442_equipment\vests\data\clone\kama_co.paa",
            "kobra\442_equipment\vests\data\clone\kama_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_pauldron_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_pauldron_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_pauldron_co.paa",
        };
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_arc_vest1.p3d";
            containerclass = "Supply200";
			mass = 50;
        };
    };
    class k_clone_arc_vest2: k_clone_arc_vest1
    {
        displayname = "[K] Clone arc Vest 02";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_arc_vest2.p3d";
			mass = 55;
        };
    };
    class k_clone_arc_vest3: k_clone_arc_vest1
    {
        displayname = "[K] Clone arc Vest 03";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_arc_vest3.p3d";
			mass = 55;
        };
    };
    class k_clone_arc_vest4: k_clone_arc_vest1
    {
        displayname = "[K] Clone arc Vest 04";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_arc_vest2.p3d";
			mass = 55;
        };
    };
    class k_clone_arc_vest5: k_clone_arc_vest1
    {
        displayname = "[K] Clone arc Vest 05";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_arc_vest5.p3d";
			mass = 55;
        };
    };
    class k_clone_arc_vest6: k_clone_arc_vest1
    {
        displayname = "[K] Clone arc Vest 06";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_arc_vest6.p3d";
			mass = 53;
        };
    };
    class k_clone_arc_vest7: k_clone_arc_vest1
    {
        displayname = "[K] Clone arc Vest 07";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_arc_vest7.p3d";
			mass = 55;
        };
    };
    class k_clone_arc_vest8: k_clone_arc_vest1
    {
        displayname = "[K] Clone arc Vest 08";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_arc_vest8.p3d";
			mass = 53;
        };
    };
    class k_clone_arc_vest9: k_clone_arc_vest1
    {
        displayname = "[K] Clone arc Vest 09";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_arc_vest9.p3d";
			mass = 55;
        };
    };
    class k_clone_arc_vest10: k_clone_arc_vest1
    {
        displayname = "[K] Clone arc Vest 10";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_arc_vest10.p3d";
			mass = 55;
        };
    };
////heavy vests
    class k_clone_heavy_vest1: k_clone_basic_vest_base
    {
        displayname = "[K] Clone heavy Vest 01";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_plates_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_plates_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_pauldron_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_pauldron_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_pauldron_co.paa",
            "kobra\442_equipment\vests\data\clone\leg_pouch_co.paa",
            "kobra\442_equipment\vests\data\clone\leg_pouch_co.paa",
        };
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_heavy_vest1.p3d";
            containerclass = "Supply120";
			mass = 40;
        };
    };
    class k_clone_heavy_vest2: k_clone_heavy_vest1
    {
        displayname = "[K] Clone heavy Vest 02";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_heavy_vest2.p3d";
			mass = 45;
        };
    };
    class k_clone_heavy_vest3: k_clone_heavy_vest1
    {
        displayname = "[K] Clone heavy Vest 03";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_heavy_vest3.p3d";
			mass = 45;
        };
    };
    class k_clone_heavy_vest4: k_clone_heavy_vest1
    {
        displayname = "[K] Clone heavy Vest 04";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_heavy_vest2.p3d";
			mass = 45;
        };
    };
    class k_clone_heavy_vest5: k_clone_heavy_vest1
    {
        displayname = "[K] Clone heavy Vest 05";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_heavy_vest5.p3d";
			mass = 45;
        };
    };
    class k_clone_heavy_vest6: k_clone_heavy_vest1
    {
        displayname = "[K] Clone heavy Vest 06";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_heavy_vest6.p3d";
			mass = 45;
        };
    };
    class k_clone_heavy_vest7: k_clone_heavy_vest1
    {
        displayname = "[K] Clone heavy Vest 07";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_heavy_vest7.p3d";
			mass = 45;
        };
    };
    class k_clone_heavy_vest8: k_clone_heavy_vest1
    {
        displayname = "[K] Clone heavy Vest 08";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_heavy_vest8.p3d";
			mass = 45;
        };
    };
    class k_clone_heavy_vest9: k_clone_heavy_vest1
    {
        displayname = "[K] Clone heavy Vest 09";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_heavy_vest9.p3d";
			mass = 45;
        };
    };
    class k_clone_heavy_vest10: k_clone_heavy_vest1
    {
        displayname = "[K] Clone heavy Vest 10";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_heavy_vest10.p3d";
			mass = 45;
        };
    };
////kamaL vests
    class k_clone_kamaL_vest1: k_clone_basic_vest_base
    {
        displayname = "[K] Clone kamaL Vest 01";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\kama_co.paa",
            "kobra\442_equipment\vests\data\clone\leg_pouch_co.paa",
            "kobra\442_equipment\vests\data\clone\leg_pouch_co.paa",
        };
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaL_vest1.p3d";
            containerclass = "Supply120";
			mass = 30;
        };
    };
    class k_clone_kamaL_vest2: k_clone_kamaL_vest1
    {
        displayname = "[K] Clone kamaL Vest 02";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaL_vest2.p3d";
			mass = 30;
        };
    };
    class k_clone_kamaL_vest3: k_clone_kamaL_vest1
    {
        displayname = "[K] Clone kamaL Vest 03";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaL_vest3.p3d";
			mass = 30;
        };
    };
    class k_clone_kamaL_vest4: k_clone_kamaL_vest1
    {
        displayname = "[K] Clone kamaL Vest 04";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaL_vest2.p3d";
			mass = 30;
        };
    };
    class k_clone_kamaL_vest5: k_clone_kamaL_vest1
    {
        displayname = "[K] Clone kamaL Vest 05";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaL_vest5.p3d";
			mass = 30;
        };
    };
    class k_clone_kamaL_vest6: k_clone_kamaL_vest1
    {
        displayname = "[K] Clone kamaL Vest 06";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaL_vest6.p3d";
			mass = 30;
        };
    };
    class k_clone_kamaL_vest7: k_clone_kamaL_vest1
    {
        displayname = "[K] Clone kamaL Vest 07";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaL_vest7.p3d";
			mass = 30;
        };
    };
    class k_clone_kamaL_vest8: k_clone_kamaL_vest1
    {
        displayname = "[K] Clone kamaL Vest 08";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaL_vest8.p3d";
			mass = 30;
        };
    };
    class k_clone_kamaL_vest9: k_clone_kamaL_vest1
    {
        displayname = "[K] Clone kamaL Vest 09";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaL_vest9.p3d";
			mass = 30;
        };
    };
    class k_clone_kamaL_vest10: k_clone_kamaL_vest1
    {
        displayname = "[K] Clone kamaL Vest 10";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaL_vest10.p3d";
			mass = 30;
        };
    };
////kamaR vests
    class k_clone_kamaR_vest1: k_clone_basic_vest_base
    {
        displayname = "[K] Clone kamaR Vest 01";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\kama_co.paa",
            "kobra\442_equipment\vests\data\clone\leg_pouch_co.paa",
            "kobra\442_equipment\vests\data\clone\leg_pouch_co.paa",
        };
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaR_vest1.p3d";
            containerclass = "Supply120";
			mass = 30;
        };
    };
    class k_clone_kamaR_vest2: k_clone_kamaR_vest1
    {
        displayname = "[K] Clone kamaR Vest 02";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaR_vest2.p3d";
			mass = 30;
        };
    };
    class k_clone_kamaR_vest3: k_clone_kamaR_vest1
    {
        displayname = "[K] Clone kamaR Vest 03";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaR_vest3.p3d";
			mass = 30;
        };
    };
    class k_clone_kamaR_vest4: k_clone_kamaR_vest1
    {
        displayname = "[K] Clone kamaR Vest 04";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaR_vest2.p3d";
			mass = 30;
        };
    };
    class k_clone_kamaR_vest5: k_clone_kamaR_vest1
    {
        displayname = "[K] Clone kamaR Vest 05";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaR_vest5.p3d";
			mass = 30;
        };
    };
    class k_clone_kamaR_vest6: k_clone_kamaR_vest1
    {
        displayname = "[K] Clone kamaR Vest 06";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaR_vest6.p3d";
			mass = 30;
        };
    };
    class k_clone_kamaR_vest7: k_clone_kamaR_vest1
    {
        displayname = "[K] Clone kamaR Vest 07";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaR_vest7.p3d";
			mass = 30;
        };
    };
    class k_clone_kamaR_vest8: k_clone_kamaR_vest1
    {
        displayname = "[K] Clone kamaR Vest 08";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaR_vest8.p3d";
			mass = 30;
        };
    };
    class k_clone_kamaR_vest9: k_clone_kamaR_vest1
    {
        displayname = "[K] Clone kamaR Vest 09";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaR_vest9.p3d";
			mass = 30;
        };
    };
    class k_clone_kamaR_vest10: k_clone_kamaR_vest1
    {
        displayname = "[K] Clone kamaR Vest 10";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_kamaR_vest10.p3d";
			mass = 30;
        };
    };
////nco vests
    class k_clone_nco_vest1: k_clone_basic_vest_base
    {
        displayname = "[K] Clone nco Vest 01";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\kama_co.paa",
            "kobra\442_equipment\vests\data\clone\kama_co.paa",
        };
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_nco_vest1.p3d";
            containerclass = "Supply100";
			mass = 20;
        };
    };
    class k_clone_nco_vest2: k_clone_nco_vest1
    {
        displayname = "[K] Clone nco Vest 02";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_nco_vest2.p3d";
			mass = 20;
        };
    };
    class k_clone_nco_vest3: k_clone_nco_vest1
    {
        displayname = "[K] Clone nco Vest 03";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_nco_vest3.p3d";
			mass = 20;
        };
    };
    class k_clone_nco_vest4: k_clone_nco_vest1
    {
        displayname = "[K] Clone nco Vest 04";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_nco_vest2.p3d";
			mass = 20;
        };
    };
    class k_clone_nco_vest5: k_clone_nco_vest1
    {
        displayname = "[K] Clone nco Vest 05";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_nco_vest5.p3d";
			mass = 20;
        };
    };
    class k_clone_nco_vest6: k_clone_nco_vest1
    {
        displayname = "[K] Clone nco Vest 06";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_nco_vest6.p3d";
			mass = 20;
        };
    };
    class k_clone_nco_vest7: k_clone_nco_vest1
    {
        displayname = "[K] Clone nco Vest 07";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_nco_vest7.p3d";
			mass = 20;
        };
    };
    class k_clone_nco_vest8: k_clone_nco_vest1
    {
        displayname = "[K] Clone nco Vest 08";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_nco_vest8.p3d";
			mass = 20;
        };
    };
    class k_clone_nco_vest9: k_clone_nco_vest1
    {
        displayname = "[K] Clone nco Vest 09";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_nco_vest9.p3d";
			mass = 20;
        };
    };
    class k_clone_nco_vest10: k_clone_nco_vest1
    {
        displayname = "[K] Clone nco Vest 10";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_nco_vest10.p3d";
			mass = 20;
        };
    };
////officer vests
    class k_clone_officer_vest1: k_clone_basic_vest_base
    {
        displayname = "[K] Clone officer Vest 01";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\kama_co.paa",
            "kobra\442_equipment\vests\data\clone\kama_co.paa",
        };
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_officer_vest1.p3d";
            containerclass = "Supply100";
			mass = 30;
        };
    };
    class k_clone_officer_vest2: k_clone_officer_vest1
    {
        displayname = "[K] Clone officer Vest 02";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_officer_vest2.p3d";
			mass = 30;
        };
    };
    class k_clone_officer_vest3: k_clone_officer_vest1
    {
        displayname = "[K] Clone officer Vest 03";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_officer_vest3.p3d";
			mass = 30;
        };
    };
    class k_clone_officer_vest4: k_clone_officer_vest1
    {
        displayname = "[K] Clone officer Vest 04";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_officer_vest2.p3d";
			mass = 30;
        };
    };
    class k_clone_officer_vest5: k_clone_officer_vest1
    {
        displayname = "[K] Clone officer Vest 05";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_officer_vest5.p3d";
			mass = 30;
        };
    };
    class k_clone_officer_vest6: k_clone_officer_vest1
    {
        displayname = "[K] Clone officer Vest 06";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_officer_vest6.p3d";
			mass = 30;
        };
    };
    class k_clone_officer_vest7: k_clone_officer_vest1
    {
        displayname = "[K] Clone officer Vest 07";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_officer_vest7.p3d";
			mass = 30;
        };
    };
    class k_clone_officer_vest8: k_clone_officer_vest1
    {
        displayname = "[K] Clone officer Vest 08";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_officer_vest8.p3d";
			mass = 30;
        };
    };
    class k_clone_officer_vest9: k_clone_officer_vest1
    {
        displayname = "[K] Clone officer Vest 09";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_officer_vest9.p3d";
			mass = 30;
        };
    };
    class k_clone_officer_vest10: k_clone_officer_vest1
    {
        displayname = "[K] Clone officer Vest 10";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\clone\k_clone_officer_vest10.p3d";
			mass = 30;
        };
    };
//scout vests
//this needs to be redone for the new vests
    class k_scout_pouches_base: k_vest_base
    {
        author = "KOBRA Mod Team";
        displayname = "Scout Pouches";
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
            uniformmodel = "kobra\442_equipment\vests\model\clone\scout_pouches.p3d";
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
            "kobra\442_equipment\vests\data\scout\pouches_co.paa",
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
            "kobra\442_equipment\vests\data\scout\pouches_co.paa",
            "kobra\442_equipment\vests\data\scout\pouches_co.paa",
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
            "kobra\442_equipment\vests\data\scout\pouches_co.paa",
            "kobra\442_equipment\vests\data\scout\pouches_co.paa",
            "kobra\442_equipment\vests\data\scout\pouches_co.paa"
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
        model = "kobra\442_equipment\ground\k_crate_vest_gh.p3d";
        hiddenselections[] = {};
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = {};
            uniformmodel = "";
            containerclass = "Supply200";
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
        displayname = "[K] Commando Vest 01";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
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
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest1.p3d";
        };
    };
    class k_commando_vest1_boss: k_commando_vest1
    {
        displayname = "[K] Commando Vest 01 (Boss)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\lore_designs\delta_boss_backpack_co.paa"
        };
    };
    class k_commando_vest1_fixer: k_commando_vest1
    {
        displayname = "[K] Commando Vest 01 (Fixer)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\lore_designs\delta_fixer_backpack_co.paa"
        };
    };
    class k_commando_vest1_scorch: k_commando_vest1
    {
        displayname = "[K] Commando Vest 01 (Scourch)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\lore_designs\delta_scorch_backpack_co.paa"
        };
    };
    class k_commando_vest1_sev: k_commando_vest1
    {
        displayname = "[K] Commando Vest 01 (Sev)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\lore_designs\delta_sev_backpack_co.paa"
        };
    };
    class k_commando_vest1_omega: k_commando_vest1
    {
        displayname = "[K] Commando Vest 01 (Omega)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\lore_designs\omega_backpack_co.paa"
        };
    };
    class k_commando_vest1_44: k_commando_vest1
    {
        displayname = "[44/K] Commando Vest 01";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa"
        };
    };
    ////backpack, body plates, both kama, both pouches, both shells
    class k_commando_vest2: k_commando_vest_plate_base
    {
        displayname = "[K] Commando Vest 02";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
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
            containerclass = "Supply250";
            hiddenselections[] = 
            {
                "backpack",
                "body_plates",
                "kama",
                "pouches",
                "shells"
            };
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest2.p3d";
        };
    };
    class k_commando_vest2_44: k_commando_vest2
    {
        displayname = "[44/K] Commando Vest 02";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\plates_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
        };
    };
    ////backpack, body plates, both kama
    class k_commando_vest3: k_commando_vest_plate_base
    {
        displayname = "[K] Commando Vest 03";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
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
            mass = 45;
            hiddenselections[] = 
            {
                "backpack",
                "body_plates",
                "kama"
            };
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest3.p3d";
        };
    };
    class k_commando_vest3_44: k_commando_vest3
    {
        displayname = "[44/K] Commando Vest 03";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\plates_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa"
        };
    };
    ////backpack, body plates, both kama, left pouch, both shells
    class k_commando_vest4: k_commando_vest2
    {
        displayname = "[K] Commando Vest 04";
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
            mass = 45;
            containerclass = "Supply230";
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest4.p3d";
        };
    };
    class k_commando_vest4_44: k_commando_vest4
    {
        displayname = "[44/K] Commando Vest 04";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\plates_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
        };
    };
    ////backpack, body plates, both kama, right pouch, both shells
    class k_commando_vest5: k_commando_vest2
    {
        displayname = "[K] Commando Vest 05";
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
            mass = 45;
            containerclass = "Supply230";
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest5.p3d";
        };
    };
    class k_commando_vest5_44: k_commando_vest5
    {
        displayname = "[44/K] Commando Vest 05";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\plates_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
        };
    };
    ////backpack, body plates, both shells
    class k_commando_vest6: k_commando_vest_plate_base
    {
        displayname = "[K] Commando Vest 06";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
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
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            mass = 35;
            hiddenselections[] = 
            {
                "backpack",
                "body_plates",
                "shells"
            };
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest6.p3d";
        };
    };
    class k_commando_vest6_44: k_commando_vest6
    {
        displayname = "[44/K] Commando Vest 06";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\plates_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
    };
    ////backpack, body plates, left kama, right pouch, left shells
    class k_commando_vest7: k_commando_vest2
    {
        displayname = "[K] Commando Vest 07";
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
            mass = 40;
            containerclass = "Supply230";
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest7.p3d";
        };
    };
    class k_commando_vest7_44: k_commando_vest7
    {
        displayname = "[44/K] Commando Vest 07";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\plates_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
        };
    };
    ////backpack, body plates, right kama, left pouch, right shells
    class k_commando_vest8: k_commando_vest2
    {
        displayname = "[K] Commando Vest 08";
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
            mass = 40;
            containerclass = "Supply230";
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest8.p3d";
        };
    };
    class k_commando_vest8_44: k_commando_vest8
    {
        displayname = "[44/K] Commando Vest 08";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\plates_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
        };
    };
    ////backpack, body plates, both kama, both pouch
    class k_commando_vest9: k_commando_vest_plate_base
    {
        displayname = "[K] Commando Vest 09";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
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
            containerclass = "Supply250";
            mass = 40;
            hiddenselections[] = 
            {
                "backpack",
                "body_plates",
                "kama",
                "pouches"
            };
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest9.p3d";
        };
    };
    class k_commando_vest9_44: k_commando_vest9
    {
        displayname = "[44/K] Commando Vest 09";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\plates_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
    };
    ////backpack, body plates, left kama, right pouch
    class k_commando_vest10: k_commando_vest9
    {
        displayname = "[K] Commando Vest 10";
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
            mass = 30;
            containerclass = "Supply230";
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest10.p3d";
        };
    };
    class k_commando_vest10_44: k_commando_vest10
    {
        displayname = "[44/K] Commando Vest 10";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\plates_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
    };
    ////backpack, both kama
    class k_commando_vest11: k_commando_vest_base
    {
        displayname = "[K] Commando Vest 11";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
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
            mass = 30;
            hiddenselections[] = 
            {
                "backpack",
                "kama"
            };
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest11.p3d";
        };
    };
    class k_commando_vest11_44: k_commando_vest11
    {
        displayname = "[44/K] Commando Vest 11";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa"
        };
    };
    ////backpack, left kama
    class k_commando_vest12: k_commando_vest11
    {
        displayname = "[K] Commando Vest 12";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            mass = 25;
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest12.p3d";
        };
    };
    class k_commando_vest12_44: k_commando_vest12
    {
        displayname = "[44/K] Commando Vest 12";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa"
        };
    };
    ////backpack, right kama
    class k_commando_vest13: k_commando_vest11
    {
        displayname = "[K] Commando Vest 13";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            mass = 25;
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest13.p3d";
        };
    };
    class k_commando_vest13_44: k_commando_vest13
    {
        displayname = "[44/K] Commando Vest 13";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa"
        };
    };
    ////backpack, both pouch, both shell
    class k_commando_vest14: k_commando_vest_base
    {
        displayname = "[K] Commando Vest 14";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
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
            mass = 25;
            hiddenselections[] = 
            {
                "backpack",
                "pouches",
                "shells"
            };
            containerclass = "Supply250";
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest14.p3d";
        };
    };
    class k_commando_vest14_44: k_commando_vest14
    {
        displayname = "[44/K] Commando Vest 14";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
    };
    ////backpack, left pouch, left shell
    class k_commando_vest15: k_commando_vest14
    {
        displayname = "[K] Commando Vest 15";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\backpack_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            mass = 23;
            containerclass = "Supply230";
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest15.p3d";
        };
    };
    class k_commando_vest15_44: k_commando_vest15
    {
        displayname = "[44/K] Commando Vest 15";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
    };
    ////backpack, right pouch, right shell
    class k_commando_vest16: k_commando_vest14
    {
        displayname = "[K] Commando Vest 16";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\backpack_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            mass = 23;
            containerclass = "Supply230";
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest16.p3d";
        };
    };
    class k_commando_vest16_44: k_commando_vest16
    {
        displayname = "[44/K] Commando Vest 16";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
    };
    ////backpack, both pouch
    class k_commando_vest17: k_commando_vest_base
    {
        displayname = "[K] Commando Vest 17";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
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
            mass = 25;
            hiddenselections[] = 
            {
                "backpack",
                "pouches"
            };
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest17.p3d";
        };
    };
    class k_commando_vest17_44: k_commando_vest17
    {
        displayname = "[44/K] Commando Vest 17";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
    };
    ////backpack, both kama, left pouch
    class k_commando_vest18: k_commando_vest_base
    {
        displayname = "[K] Commando Vest 18";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
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
            mass = 28;
            containerclass = "Supply230";
            hiddenselections[] = 
            {
                "backpack",
                "kama",
                "pouches"
            };
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest18.p3d";
        };
    };
    class k_commando_vest18_44: k_commando_vest18
    {
        displayname = "[44/K] Commando Vest 18";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
    };
    ////backpack, both kama, right pouch
    class k_commando_vest19: k_commando_vest18
    {
        displayname = "[K] Commando Vest 19";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            mass = 28;
            containerclass = "Supply230";
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest19.p3d";
        };
    };
    class k_commando_vest19_44: k_commando_vest19
    {
        displayname = "[44/K] Commando Vest 19";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa",
            "kobra\442_equipment\vests\data\commando\kama_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest19.p3d";
        };
    };
    ////backpack, both shells
    class k_commando_vest20: k_commando_vest_base
    {
        displayname = "[K] Commando Vest 20";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
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
            mass = 20;
            hiddenselections[] = 
            {
                "backpack",
                "shells"
            };
            uniformmodel = "kobra\442_equipment\vests\model\commando\k_commando_vest20.p3d";
        };
    };
    class k_commando_vest20_44: k_commando_vest20
    {
        displayname = "[44/K] Commando Vest 20";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\commando\unit_designs\44ab\backpack_co.paa",
            "kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
        };
    };

//custom
    

    class k_scout_pouches_light_woodland2: k_scout_pouches_light
    {
        displayname = "[K] Light Scout Pouches (Woodland)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\scout\pouches_woodland_co.paa",
            "",
            ""
        };
    };
    class k_scout_pouches_medium_woodland2: k_scout_pouches_medium
    {
        displayname = "[K] Medium Scout Pouches (Woodland)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\scout\pouches_woodland_co.paa",
            "kobra\442_equipment\vests\data\scout\pouches_woodland_co.paa",
            ""
        };
    };
    class k_scout_pouches_heavy_woodland2: k_scout_pouches_heavy
    {
        displayname = "[K] Heavy Scout Pouches (Woodland)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\scout\pouches_woodland_co.paa",
            "kobra\442_equipment\vests\data\scout\pouches_woodland_co.paa",
            "kobra\442_equipment\vests\data\scout\pouches_woodland_co.paa"
        };
    };
    class k_scout_pouches_light_desert2: k_scout_pouches_light
    {
        displayname = "[K] Light Scout Pouches (Desert)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\scout\pouches_desert_co.paa",
            "",
            ""
        };
    };
    class k_scout_pouches_medium_desert2: k_scout_pouches_medium
    {
        displayname = "[K] Medium Scout Pouches (Desert)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\scout\pouches_desert_co.paa",
            "kobra\442_equipment\vests\data\scout\pouches_desert_co.paa",
            ""
        };
    };
    class k_scout_pouches_heavy_desert2: k_scout_pouches_heavy
    {
        displayname = "[K] Heavy Scout Pouches (Desert)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\scout\pouches_desert_co.paa",
            "kobra\442_equipment\vests\data\scout\pouches_desert_co.paa",
            "kobra\442_equipment\vests\data\scout\pouches_desert_co.paa"
        };
    };
};