class cfgpatches
{
    class k_equipment_44
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "k_commando_unit_Azarael_44",
            "k_clone_unit_Barker_44",
            "k_clone_unit_Garrus_44",
            "k_clone_unit_Jay_44",
            "k_clone_unit_Kripto_44",
            "k_clone_unit_Litch_44",
            "k_clone_unit_Rex_44",
            "k_clone_unit_Titania_44",
            "k_clone_unit_Zeressin_44",
            "k_clone_unit_Ivanov_44",
            "k_clone_unit_Ditch_44",
            "k_clone_unit_Smith_44",
            "k_clone_unit_Green_44",
            "k_clone_unit_Neko_44",
            "k_clone_unit_Monty_44",
            "k_clone_unit_Zion_44",

            "k_commando_unit_Lore_44",

            "k_clone_huge_backpack_rocket_titania_44",
            "k_clone_large_backpack_pouches_smith_44",
            "k_clone_large_backpack_pouches_neko_44",
            "k_jt12_radio_garrus_44",
            "k_jt12_radio_ivanov_44"
        };
        weapons[] = 
        {
            "k_barc_helmet_Kripto_44",
            "k_clone_uniform_Kripto_44",
            "k_clone_vest_kripto_44",

            "k_barc_helmet_Zeressin_44",
            "k_clone_uniform_Zeressin_44",
            "k_clone_vest_zeressin_44",

            "k_arf_helmet_Titania_44",
            "k_clone_uniform_Titania_44",
            "k_clone_vest_titania_44",

            "k_p1_helmet_Rex_44",
            "k_clone_uniform_Rex_44",
            "k_clone_vest_rex_44",

            "k_p1_helmet_Litch_44",
            "k_clone_uniform_Litch_44",
            "k_clone_vest_litch_44",

            "k_p1_helmet_Garrus_44",
            "k_clone_uniform_Garrus_44",
            "k_clone_vest_garrus_44",

            "k_p2_helmet_Jay_44",
            "k_clone_uniform_Jay_44",
            "k_clone_vest_jay_44",

            "k_tech_Helmet_Barker_44",
            "k_clone_uniform_Barker_44",
            "k_clone_vest_barker_44",

            "k_commando_mk1_helmet_Azarael_44",
            "k_commando_uniform_Azarael_44",
            "k_clone_uniform_Azarael_44",
            "k_arf_helmet_azarael_44",
            "k_clone_arc_vest5_azarael_44",

            "k_barc_helmet_Ivanov_44",
            "k_clone_uniform_Ivanov_44",
            "k_clone_vest_Ivanov_44",

            "k_commando_mk1_helmet_Lore_44",
            "k_commando_uniform_Lore_44",
            "k_commando_vest19_Lore_44",

            "k_hunter_Helmet_ditch_44",
            "k_clone_basic_vest7_ditch_44",
            "k_clone_uniform_ditch_44",

            "k_clone_uniform_Neko_44",
            "k_clone_basic_vest10_Neko_44",
            "k_crosshair_Helmet_Neko_44",

            "k_p2_helmet_Green_44",
            "k_clone_uniform_Green_44",

            "k_clone_uniform_Monty_44",
            "k_arf_helmet_Monty_44",
            "k_clone_arc_vest9_Monty_44",

            "k_p2_helmet_Zion_44",
            "k_clone_heavy_vest10_Zion",
            "k_clone_uniform_Zion_44",
        };
    };
};

class UniformItem;
class ItemInfo;

class CfgWeapons
{
    //ace_hearing_protection=1;
    //ace_hearing_lowervolume=0;

    class k_barc_helmet;
    class k_arf_helmet;
    class k_p1_helmet;
    class k_p2_helmet;
    class k_tech_Helmet;
    class k_commando_mk1_helmet;
    class k_commando_uniform;
    class k_clone_uniform;
    class k_clone_basic_vest_base;
    class vestitem;
    class k_clone_kamaL_vest8;
    class k_commando_vest19_44;
    class k_hunter_Helmet;
    class k_clone_basic_vest7;
    class k_clone_heavy_vest_base;
    class k_clone_heavy_vest1;
    class k_crosshair_Helmet;
    class k_clone_basic_vest10;
    class k_clone_f_uniform;
    class k_clone_arc_vest5;
    class k_p15_helmet;
    class k_clone_arc_vest9;
    class k_clone_heavy_vest10;

    class k_barc_helmet_Kripto_44: k_barc_helmet
    {
        displayname = "[44/K/C] Barc Helmet (Kripto)";
        hiddenselectionsmaterials[] = 
		{
			"kobra\k_equipment_44\data\kripto\helmet.rvmat",
			"kobra\442_equipment\helmets\data\unit_designs\44ab\barc_visor.rvmat"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\kripto\barc_helmet_co.paa", //helmet
			"kobra\k_equipment_44\data\kripto\barc_helmet_co.paa", //visor
		};
    };
    class k_clone_uniform_Kripto_44: k_clone_uniform
    {
        displayname = "[44/K/C] Clone Trooper Armor (Kripto)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Kripto_44";
        };
    };
    class k_clone_vest_kripto_44: k_clone_basic_vest_base
    {
        displayname = "[44/K/C] Clone Vest (Kripto)";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselections[] = 
        {
            "belt",
            "kama",
            "pauldron",
            "leg_pouch"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\unit_designs\44ab\clone_belt_co.paa",
            "kobra\k_equipment_44\data\kripto\kama_co.paa",
            "kobra\k_equipment_44\data\kripto\arc_pauldron_co.paa",
            "kobra\442_equipment\vests\data\clone\leg_pouch_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "belt",
                "kama",
                "pauldron",
                "leg_pouch"
            };
            uniformmodel = "kobra\k_equipment_44\model\k_kripto_vest.p3d";
            containerclass = "Supply200";
            mass = 80;
            vesttype = "Rebreather";
        };
    };

    class k_barc_helmet_Zeressin_44: k_barc_helmet
    {
        ace_hearing_protection=1;
        ace_hearing_lowervolume=0;
        displayname = "[44/K/C] Barc Helmet (Zeressin)";
        hiddenselectionsmaterials[] = 
		{
			"kobra\442_equipment\helmets\data\barc_helmet\helmet.rvmat",
			"kobra\442_equipment\helmets\data\unit_designs\44ab\barc_visor.rvmat"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\zeressin\barc_helmet_co.paa", //helmet
			"kobra\k_equipment_44\data\zeressin\barc_helmet_co.paa", //visor
		};
    };
    class k_clone_uniform_Zeressin_44: k_clone_f_uniform
    {
        displayname = "[44/K/C] Clone Trooper Armor (Zeressin)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Zeressin_44";
        };
    };
    class k_clone_vest_zeressin_44: k_clone_basic_vest_base
    {
        displayname = "[44/K/C] Clone Vest (Zeressin)";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\unit_designs\44ab\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\kama_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_pauldron_co.paa",
            "kobra\442_equipment\vests\data\clone\leg_pouch_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_pouch_co.paa"
        };
        hiddenselections[] = 
        {
            "belt",
            "kama",
            "pauldron",
            "leg_pouch",
            "arc_pouch"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "belt",
                "kama",
                "pauldron",
                "leg_pouch",
                "arc_pouch"
            };
            uniformmodel = "kobra\k_equipment_44\model\k_zeressin_vest.p3d";
            containerclass = "Supply200";
            mass = 80;
            vesttype = "Rebreather";
        };
    };

    class k_barc_helmet_Titania_44: k_barc_helmet
	{
        ace_hearing_protection=1;
        ace_hearing_lowervolume=0;
		displayname = "[44/K/C] Barc Helmet (Titania)";
        hiddenselectionsmaterials[] = 
		{
			"kobra\442_equipment\helmets\data\barc_helmet\helmet.rvmat",
			"kobra\k_equipment_44\data\titania\visor.rvmat"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\titania\barc_helmet_co.paa", //helmet
			"kobra\k_equipment_44\data\titania\barc_helmet_co.paa", //visor
		};
	};
    class k_clone_uniform_Titania_44: k_clone_f_uniform
    {
        displayname = "[44/K/C] Clone Trooper Armor (Titania)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Titania_44";
        };
    };
    class k_clone_vest_titania_44: k_clone_basic_vest_base
    {
        displayname = "[44/K/C] Clone Vest (Titania)";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\titania\clone_belt_co.paa",
            "kobra\k_equipment_44\data\titania\arc_plates_co.paa",
            "kobra\k_equipment_44\data\titania\kama_co.paa",
            "kobra\k_equipment_44\data\titania\arc_pauldron_co.paa",
            "kobra\442_equipment\vests\data\clone\leg_pouch_co.paa"
        };
        hiddenselectionsmaterials[] = 
        {
            "kobra\442_equipment\vests\data\clone\clone_belt.rvmat",
            "Kobra\442_equipment\vests\data\clone\arc_plates.rvmat",
            "kobra\k_equipment_44\data\titania\kama.rvmat",
            "kobra\442_equipment\vests\data\clone\arc_pauldron.rvmat",
            "kobra\442_equipment\vests\data\clone\leg_pouch.rvmat"
        };
        hiddenselections[] = 
        {
            "belt",
            "arc_plates",
			"kama",
			"pauldron",
			"leg_pouch"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "belt",
                "arc_plates",
                "kama",
                "pauldron",
                "leg_pouch"
            };
            uniformmodel = "kobra\k_equipment_44\model\k_titania_vest.p3d";
            containerclass = "Supply200";
            mass = 80;
            vesttype = "Rebreather";
        };
    };

    class k_p1_helmet_Rex_44: k_p1_helmet
	{
		displayname = "[44/K/C] P1 Helmet (Rex)";
        hiddenselectionsmaterials[] = 
		{
			"kobra\442_equipment\helmets\data\p1_helmet\helmet.rvmat",
			"kobra\442_equipment\helmets\data\unit_designs\44ab\p1_visor.rvmat"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\rex\p1_helmet_co.paa", //helmet
			"kobra\k_equipment_44\data\rex\p1_helmet_co.paa", //visor
		};
	};
    class k_clone_uniform_Rex_44: k_clone_uniform
    {
        displayname = "[44/K/C] Clone Trooper Armor (Rex)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Rex_44";
        };
    };
    class k_clone_vest_rex_44: k_clone_basic_vest_base
    {
        displayname = "[44/K/C] Clone Vest (Rex)";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselections[] = 
        {
            "belt",
            "arc_plates",
            "kama",
            "pauldron",
            "leg_pouch",
            "arc_pouch"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\unit_designs\44ab\clone_belt_co.paa",
            "kobra\k_equipment_44\data\rex\arc_plates_co.paa",
            "kobra\k_equipment_44\data\rex\kama_co.paa",
            "kobra\k_equipment_44\data\rex\arc_pauldron_co.paa",
            "kobra\442_equipment\vests\data\clone\leg_pouch_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_pouch_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "belt",
                "arc_plates",
                "kama",
                "pauldron",
                "leg_pouch",
                "arc_pouch"
            };
            uniformmodel = "kobra\k_equipment_44\model\k_rex_vest.p3d";
            containerclass = "Supply200";
            mass = 80;
            vesttype = "Rebreather";
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

    class k_p1_helmet_Litch_44: k_p1_helmet
	{
        ace_hearing_protection=1;
        ace_hearing_lowervolume=0;
		displayname = "[44/K/C] P1 Helmet (Litch)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\Litch\p1_helmet_co.paa", //helmet
			"kobra\k_equipment_44\data\Litch\p1_helmet_co.paa", //visor
		};
	};
    class k_clone_uniform_Litch_44: k_clone_uniform
    {
        displayname = "[44/K/C] Clone Trooper Armor (Litch)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Litch_44";
        };
    };
    class k_clone_vest_litch_44: k_clone_basic_vest_base
    {
        displayname = "[44/K/C] Clone Vest (Litch)";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\unit_designs\44ab\clone_belt_co.paa",
            "kobra\k_equipment_44\data\litch\arc_plates_co.paa",
            "kobra\k_equipment_44\data\litch\kama_co.paa",
            "kobra\k_equipment_44\data\litch\arc_pauldron_co.paa",
            "kobra\442_equipment\vests\data\clone\leg_pouch_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_pouch_co.paa"
        };
        hiddenselections[] = 
        {
            "belt",
            "arc_plates",
            "kama",
            "pauldron",
            "leg_pouch",
            "arc_pouch"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "belt",
                "arc_plates",
                "kama",
                "pauldron",
                "leg_pouch",
                "arc_pouch"
            };
            uniformmodel = "kobra\k_equipment_44\model\k_litch_vest.p3d";
            containerclass = "Supply200";
            mass = 80;
            vesttype = "Rebreather";
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

    class k_p1_helmet_Garrus_44: k_p1_helmet
	{
		displayname = "[44/K/C] P1 Helmet (Garrus)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\garrus\p1_helmet_co.paa", //helmet
			"kobra\k_equipment_44\data\garrus\p1_helmet_co.paa", //visor
		};
	};
    class k_clone_uniform_Garrus_44: k_clone_uniform
    {
        displayname = "[44/K/C] Clone Trooper Armor (Garrus)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Garrus_44";
        };
    };
    class k_clone_vest_garrus_44: k_clone_basic_vest_base
    {
        displayname = "[44/K/C] Clone Vest (Garrus)";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\unit_designs\44ab\clone_belt_co.paa",
            "kobra\k_equipment_44\data\garrus\arc_plates_co.paa",
            "kobra\k_equipment_44\data\garrus\kama_co.paa",
            "kobra\k_equipment_44\data\garrus\arc_pauldron_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_pouch_co.paa"
        };
        hiddenselections[] = 
        {
            "belt",
            "arc_plates",
            "kama",
            "pauldron",
            "arc_pouch"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "belt",
                "arc_plates",
                "kama",
                "pauldron",
                "arc_pouch"
            };
            uniformmodel = "kobra\k_equipment_44\model\k_garrus_vest.p3d";
            containerclass = "Supply200";
            mass = 80;
            vesttype = "Rebreather";
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

    class k_p2_helmet_Jay_44: k_p2_helmet
	{
        ace_hearing_protection=1;
        ace_hearing_lowervolume=0;
		displayname = "[44/K/C] P2 Helmet (Jay)";
        hiddenselectionsmaterials[] = 
		{
			"kobra\442_equipment\helmets\data\p2_helmet\helmet.rvmat",
			"kobra\442_equipment\helmets\data\unit_designs\44ab\p2_visor.rvmat"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\jay\p2_helmet_co.paa", //helmet
			"kobra\k_equipment_44\data\jay\p2_helmet_co.paa", //visor
		};
	};
    class k_clone_uniform_Jay_44: k_clone_uniform
    {
        displayname = "[44/K/C] Clone Trooper Armor (Jay)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Jay_44";
        };
    };
    class k_clone_vest_jay_44: k_clone_basic_vest_base
    {
        displayname = "[44/K/C] Clone Vest (Jay)";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\unit_designs\44ab\clone_belt_co.paa",
            "kobra\k_equipment_44\data\jay\arc_plates_co.paa",
            "kobra\k_equipment_44\data\jay\kama_co.paa",
            "kobra\442_equipment\vests\data\clone\leg_pouch_co.paa"
        };
        hiddenselections[] = 
        {
            "belt",
            "arc_plates",
            "kama",
            "leg_pouch"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "belt",
                "arc_plates",
                "kama",
                "leg_pouch"
            };
            uniformmodel = "kobra\k_equipment_44\model\k_jay_vest.p3d";
            containerclass = "Supply200";
            mass = 80;
            vesttype = "Rebreather";
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

    class k_tech_Helmet_Barker_44: k_tech_Helmet
    {
        ace_hearing_protection=1;
        displayname = "[44/K/C] Tech's Helmet (Barker)";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\barker\tech_helmet_co.paa"
        };
    };
    class k_p15_Helmet_Barker_44: k_p15_helmet
    {
        ace_hearing_protection=1;
        displayname = "[44/K/C] P1.5 Helmet (Barker)";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\barker\p15_helmet_co.paa",
            "kobra\k_equipment_44\data\barker\p15_helmet_co.paa",
        };
        hiddenselectionsmaterials[] = 
		{
			"kobra\442_equipment\helmets\data\p15_helmet\helmet.rvmat",
			"kobra\442_equipment\helmets\data\unit_designs\44ab\p15_visor.rvmat"
		};
    };
    class k_clone_uniform_Barker_44: k_clone_uniform
    {
        displayname = "[44/K/C] Clone Trooper Armor (Barker)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Barker_44";
        };
    };
    class k_clone_vest_barker_44: k_clone_basic_vest_base
    {
        displayname = "[44/K/C] Clone Vest (Barker)";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\unit_designs\44ab\clone_belt_co.paa",
            "kobra\k_equipment_44\data\barker\arc_plates_co.paa",
            "kobra\442_equipment\vests\data\clone\leg_pouch_co.paa"
        };
        hiddenselections[] = 
        {
            "belt",
            "arc_plates",
            "leg_pouch"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "belt",
                "arc_plates",
                "leg_pouch"
            };
            uniformmodel = "kobra\k_equipment_44\model\k_barker_vest.p3d";
            containerclass = "Supply200";
            mass = 80;
            vesttype = "Rebreather";
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

    class k_commando_mk1_helmet_Azarael_44: k_commando_mk1_helmet
	{
        ace_hearing_protection=1;
        ace_hearing_lowervolume=0;
		displayname = "[44/K/C] Commando Helmet Mk1 (Azarael)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\azarael\helmet1_co.paa",
			"kobra\k_equipment_44\data\azarael\helmet1_co.paa",
		};
	};
    class k_commando_uniform_Azarael_44: k_commando_uniform
    {
        displayname = "[44/K/C] Commando Armor (Azarael)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_commando_unit_Azarael_44";
        };
    };
    class k_clone_uniform_Azarael_44: k_clone_uniform
    {
        displayname = "[44/K/C] Clone Trooper Armor (Azarael)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Azarael_44";
        };
    };
    class k_arf_helmet_azarael_44: k_arf_helmet
    {
        displayname = "[44/K/C] Arf Helmet (Azarael)";
		hiddenselectionstextures[] = 
		{
			"Kobra\k_equipment_44\data\azarael\arf_helmet_co.paa", //helmet
			"Kobra\k_equipment_44\data\azarael\arf_helmet_co.paa", //visor
			"Kobra\k_equipment_44\data\azarael\arf_brim_co.paa", //brim
		};
    };
    class k_clone_arc_vest5_azarael_44: k_clone_arc_vest5
    {
        displayname = "[44/K/C] Clone arc Vest 05 (Azarael)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\clone_belt_co.paa",
            "Kobra\k_equipment_44\data\azarael\arc_plates_co.paa",
            "Kobra\k_equipment_44\data\azarael\arc_plates_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_pouch_co.paa",
            "Kobra\k_equipment_44\data\azarael\kama_co.paa",
            "Kobra\k_equipment_44\data\azarael\kama_co.paa",
            "Kobra\k_equipment_44\data\azarael\arc_pauldron_co.paa",
            "Kobra\k_equipment_44\data\azarael\arc_pauldron_co.paa",
            "Kobra\k_equipment_44\data\azarael\arc_pauldron_co.paa",
        };
    };

    class k_barc_helmet_Ivanov_44: k_barc_helmet
    {
        ace_hearing_protection=1;
        ace_hearing_lowervolume=0;
        displayname = "[44/K/C] Barc Helmet (Ivanov)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\ivanov\barc_helmet_co.paa", //helmet
			"kobra\k_equipment_44\data\ivanov\barc_helmet_co.paa", //visor
		};
    };
    class k_clone_uniform_Ivanov_44: k_clone_uniform
    {
        displayname = "[44/K/C] Clone Trooper Armor (Ivanov)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Ivanov_44";
        };
    };
    class k_clone_vest_Ivanov_44: k_clone_kamaL_vest8
    {
        displayname = "[44/K/C] Clone Vest (Ivanov)";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\unit_designs\44ab\clone_belt_co.paa",
            "kobra\k_equipment_44\data\ivanov\kama_co.paa",
            "kobra\442_equipment\vests\data\clone\leg_pouch_co.paa",
            "kobra\442_equipment\vests\data\clone\leg_pouch_co.paa",
        };
    };

    class k_commando_mk1_helmet_Lore_44: k_commando_mk1_helmet
	{
        ace_hearing_protection=1;
        ace_hearing_lowervolume=0;
		displayname = "[44/K/C] Commando Helmet Mk1 (Lore)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\lore\helmet1_co.paa",
			"kobra\k_equipment_44\data\lore\helmet1_co.paa",
		};
	};
    class k_commando_uniform_Lore_44: k_commando_uniform
    {
        displayname = "[44/K/C] Commando Armor (Lore)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_commando_unit_Lore_44";
        };
    };
    class k_commando_vest19_Lore_44: k_commando_vest19_44
    {
        displayname = "[44/K/C] Commando Vest (Lore)";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\lore\backpack_co.paa",
            "kobra\k_equipment_44\data\lore\kama_co.paa",
            "kobra\k_equipment_44\data\lore\helmet_parts_1_co.paa",
        };
    };

    class k_hunter_Helmet_Ditch_44: k_hunter_Helmet
    {
        displayname = "[44/K/C] Hunter's Helmet (Ditch)";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\ditch\hunter_helmet_co.paa",
            "kobra\k_equipment_44\data\ditch\hunter_helmet_co.paa",
        };
    };
    class k_clone_basic_vest7_Ditch_44: k_clone_basic_vest7
    {
        displayname = "[44/K/C] Clone Basic Vest (Ditch)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\unit_designs\44ab\clone_belt_co.paa"
        };
    };
    class k_clone_uniform_Ditch_44: k_clone_uniform
    {
        displayname = "[44/K/C] Clone Trooper Armor (Ditch)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Ditch_44";
        };
    };

    class k_hunter_Helmet_Smith_44: k_hunter_Helmet
    {
        displayname = "[44/K/C] Hunter's Helmet (Smith)";
        hiddenselectionsmaterials[] = 
		{
			"kobra\442_equipment\helmets\data\hunter_helmet\helmet.rvmat",
			"kobra\442_equipment\helmets\data\unit_designs\44ab\hunter_visor.rvmat"
		};
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\smith\hunter_helmet_co.paa",
            "kobra\k_equipment_44\data\smith\hunter_helmet_co.paa",
        };
    };
    class k_clone_basic_vest_Smith_44: k_clone_heavy_vest_base
    {
        displayname = "[44/K/C] Clone Vest (Smith)";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselections[] = 
        {
            "belt",
            "arc_plates",
			"kama",
			"pauldron",
			"leg_pouch",
			"arc_pouch"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\unit_designs\44ab\clone_belt_co.paa",
            "kobra\k_equipment_44\data\smith\arc_plates_co.paa",
            "kobra\k_equipment_44\data\smith\kama_co.paa",
            "kobra\k_equipment_44\data\smith\arc_pauldron_co.paa",
            "kobra\442_equipment\vests\data\clone\leg_pouch_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_pouch_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "belt",
                "arc_plates",
                "kama",
                "pauldron",
                "leg_pouch",
                "arc_pouch"
            };
            containerclass = "Supply120";
            mass = 40;
            uniformmodel = "kobra\k_equipment_44\model\k_smith_vest.p3d";
        };
    };
    class k_clone_uniform_Smith_44: k_clone_uniform
    {
        displayname = "[44/K/C] Clone Trooper Armor (Smith)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Smith_44";
        };
    };

    class k_clone_uniform_Green_44: k_clone_uniform
    {
        displayname = "[44/K/C] Clone Trooper Armor (Green)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Green_44";
        };
    };
    class k_p2_helmet_Green_44: k_p2_helmet
	{
        ace_hearing_protection=1;
        ace_hearing_lowervolume=0;
		displayname = "[44/K/C] P2 Helmet (Green)";
        hiddenselectionsmaterials[] = 
		{
			"kobra\442_equipment\helmets\data\p2_helmet\helmet.rvmat",
			"kobra\442_equipment\helmets\data\unit_designs\44ab\p2_visor.rvmat"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\green\p2_helmet_co.paa", //helmet
			"kobra\k_equipment_44\data\green\p2_helmet_co.paa", //visor
		};
	};

    class k_clone_uniform_Neko_44: k_clone_f_uniform
    {
        displayname = "[44/K/C] Clone Trooper Armor (Neko)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Neko_44";
        };
    };
    class k_crosshair_Helmet_Neko_44: k_crosshair_Helmet
    {
        displayname = "[44/K/C] Crosshair's Helmet (Neko)";
        hiddenselectionstextures[] = 
        {
            "Kobra\k_equipment_44\data\neko\crosshair_helmet_co.paa",
            "Kobra\k_equipment_44\data\neko\crosshair_helmet_co.paa",
        };
    };
    class k_clone_basic_vest10_Neko_44: k_clone_basic_vest10
    {
        displayname = "[44/K/C] Clone Basic Vest 01 (Neko)";
        hiddenselectionstextures[] = 
        {
            "Kobra\k_equipment_44\data\neko\clone_belt_co.paa"
        };
    };

    class k_clone_uniform_Monty_44: k_clone_uniform
    {
        displayname = "[44/K/C] Clone Trooper Armor (Monty)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Monty_44";
        };
    };
    class k_arf_helmet_Monty_44: k_arf_helmet
    {
        displayname = "[44/K/C] Arf Helmet (Monty)";
		hiddenselectionstextures[] = 
		{
			"Kobra\k_equipment_44\data\monty\arf_helmet_co.paa", //helmet
			"Kobra\k_equipment_44\data\monty\arf_helmet_co.paa", //visor
			"Kobra\k_equipment_44\data\monty\arf_brim_co.paa", //brim
		};
        hiddenselectionsmaterials[] = 
		{
			"kobra\442_equipment\helmets\data\arf_helmet\helmet.rvmat",
			"kobra\442_equipment\helmets\data\unit_designs\44ab\arf_visor.rvmat",
            "kobra\442_equipment\helmets\data\arf_helmet\arf_brim.rvmat"
		};
    };
    class k_clone_arc_vest9_Monty_44: k_clone_arc_vest9
    {
        displayname = "[44/K/C] Clone arc Vest 05 (Monty)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\clone_belt_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_plates_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_plates_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_pouch_co.paa",
            "Kobra\k_equipment_44\data\monty\kama_co.paa",
            "Kobra\k_equipment_44\data\monty\kama_co.paa",
            "Kobra\k_equipment_44\data\monty\arc_pauldron_co.paa",
            "Kobra\k_equipment_44\data\monty\arc_pauldron_co.paa",
            "Kobra\k_equipment_44\data\monty\arc_pauldron_co.paa",
        };
    };

    class k_p2_helmet_Zion_44: k_p2_helmet
	{
        ace_hearing_protection=1;
        ace_hearing_lowervolume=0;
		displayname = "[44/K/C] P2 Helmet (Zion)";
        hiddenselectionsmaterials[] = 
		{
			"kobra\442_equipment\helmets\data\p2_helmet\helmet.rvmat",
			"kobra\442_equipment\helmets\data\unit_designs\44ab\p2_visor.rvmat"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\zion\p2_helmet_co.paa", //helmet
			"kobra\k_equipment_44\data\zion\p2_helmet_co.paa", //visor
		};
	};
    class k_clone_heavy_vest_Zion: k_clone_heavy_vest10
    {
        displayname = "[44/K/C] Clone Vest (Zion)";
        
        hiddenselections[] = 
		{
			"belt",
            "arc_plates",
			"kama",
			"pauldron",
			"leg_pouch"
		};
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\vests\data\clone\clone_belt_co.paa",
            "kobra\k_equipment_44\data\zion\arc_plates_co.paa",
            "kobra\k_equipment_44\data\zion\kama_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_pauldron_co.paa",
            "kobra\442_equipment\vests\data\clone\leg_pouch_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "belt",
                "arc_plates",
                "kama",
                "pauldron",
                "leg_pouch"
            };
            containerclass = "Supply120";
            mass = 40;
            uniformmodel = "kobra\k_equipment_44\model\k_zion_vest.p3d";
        };
    };
    class k_clone_uniform_Zion_44: k_clone_uniform
    {
        displayname = "[44/K/C] Clone Trooper Armor (Zion)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Zion_44";
        };
    };
};

class CfgVehicles
{
    class k_commando_unit;
    class k_clone_unit;
    class 442_jt12_radio;
    class k_clone_huge_backpack_rocket_44;
    class k_clone_f_unit;

    class k_commando_unit_Azarael_44: k_commando_unit
    {
        displayname = "Clone Commando";
        uniformclass = "k_commando_uniform_Azarael_44";
        hiddenselectionstextures[]=
        {
            "kobra\k_equipment_44\data\azarael\chest_co.paa",
            "kobra\k_equipment_44\data\azarael\arm_co.paa",
            "kobra\k_equipment_44\data\azarael\leg_co.paa",
            "kobra\442_equipment\uniform\data\commando_uniform\undersuit_co.paa"
        };
	};
    class k_clone_unit_Azarael_44: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Azarael_44";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\azarael\upper_armor_co.paa",
            "kobra\k_equipment_44\data\azarael\lower_armor_co.paa"
        };
    };
    class k_clone_unit_Barker_44: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Barker_44";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\barker\upper_armor_co.paa",
            "kobra\k_equipment_44\data\barker\lower_armor_co.paa"
        };
    };
    class k_clone_unit_Garrus_44: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Garrus_44";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\garrus\upper_armor_co.paa",
            "kobra\k_equipment_44\data\garrus\lower_armor_co.paa"
        };
    };
    class k_clone_unit_Jay_44: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Jay_44";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\jay\upper_armor_co.paa",
            "kobra\k_equipment_44\data\jay\lower_armor_co.paa"
        };
    };
    class k_clone_unit_Kripto_44: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Kripto_44";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\kripto\upper_armor_co.paa",
            "kobra\k_equipment_44\data\kripto\lower_armor_co.paa"
        };
    };
    class k_clone_unit_Litch_44: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Litch_44";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\litch\upper_armor_co.paa",
            "kobra\k_equipment_44\data\litch\lower_armor_co.paa"
        };
    };
    class k_clone_unit_Rex_44: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Rex_44";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\rex\upper_armor_co.paa",
            "kobra\k_equipment_44\data\rex\lower_armor_co.paa"
        };
    };
    class k_clone_unit_Titania_44: k_clone_f_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Titania_44";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\titania\upper_armor_co.paa",
            "kobra\k_equipment_44\data\titania\lower_armor_co.paa"
        };
    };
    class k_clone_unit_Zeressin_44: k_clone_f_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Zeressin_44";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\zeressin\upper_armor_co.paa",
            "kobra\k_equipment_44\data\zeressin\lower_armor_co.paa"
        };
    };
    class k_clone_unit_Ivanov_44: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Ivanov_44";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\ivanov\upper_armor_co.paa",
            "kobra\k_equipment_44\data\ivanov\lower_armor_co.paa"
        };
    };
    class k_commando_unit_Lore_44: k_commando_unit
    {
        displayname = "Clone Commando";
        uniformclass = "k_commando_uniform_Lore_44";
        hiddenselectionstextures[]=
        {
            "kobra\k_equipment_44\data\lore\chest_co.paa",
            "kobra\k_equipment_44\data\lore\arm_co.paa",
            "kobra\k_equipment_44\data\lore\leg_co.paa",
            "kobra\442_equipment\uniform\data\commando_uniform\undersuit_co.paa"
        };
	};
    class k_clone_unit_Ditch_44: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Ditch_44";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\ditch\upper_armor_co.paa",
            "kobra\k_equipment_44\data\ditch\lower_armor_co.paa"
        };
    };
    class k_clone_unit_Smith_44: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Smith_44";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\smith\upper_armor_co.paa",
            "kobra\k_equipment_44\data\smith\lower_armor_co.paa"
        };
    };
    class k_clone_unit_Green_44: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Green_44";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\green\upper_armor_co.paa",
            "kobra\k_equipment_44\data\green\lower_armor_co.paa"
        };
    };
    class k_clone_unit_Neko_44: k_clone_f_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Neko_44";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\neko\upper_armor_co.paa",
            "kobra\k_equipment_44\data\neko\lower_armor_co.paa"
        };
    };
    class k_clone_unit_Monty_44: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Monty_44";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\monty\upper_armor_co.paa",
            "kobra\k_equipment_44\data\monty\lower_armor_co.paa"
        };
    };
    class k_clone_unit_Zion_44: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Zion_44";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\zion\upper_armor_co.paa",
            "kobra\k_equipment_44\data\zion\lower_armor_co.paa"
        };
    };

    class k_clone_huge_backpack_rocket_titania_44: k_clone_huge_backpack_rocket_44
	{
		displayname = "[44/K/C] Clone Trooper Huge Backpack w/ Rockets (Titania)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\titania\huge_backpack_co.paa", ///backpack
            "kobra\442_equipment\backpack\data\huge\unit_designs\44ab\huge_backpack_rockets_co.paa" ///rocket
		};
        model = "kobra\k_equipment_44\model\k_huge_backpack_rockets_comms.p3d";
        tf_dialog = "mr6000l_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=20000;
        tf_subtype="digital_lr";
	};
    class k_clone_large_backpack_pouch;
    class k_clone_large_backpack_pouches_smith_44: k_clone_large_backpack_pouch 
    {
        displayname = "[44/K/C] Clone Troopoer Large Backpack w/ Pouches (Smith)";
        model = "kobra\k_equipment_44\model\k_large_backpack_comms.p3d";
        mass = 56;
        hiddenselections[] = 
        {
            "backpack",
            "cover",
            "pouches"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\smith\large_backpack_co.paa",
            "kobra\442_equipment\backpack\data\large\large_backpack_cover_co.paa",
            "kobra\k_equipment_44\data\smith\large_backpack_pouches_co.paa"
        };
        tf_dialog = "mr6000l_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=20000;
        tf_subtype="digital_lr";
    };
    class k_clone_large_backpack_pouches_neko_44: k_clone_large_backpack_pouch 
    {
        displayname = "[44/K/C] Clone Troopoer Large Backpack w/ Pouches (Neko)";
        model = "kobra\k_equipment_44\model\k_large_backpack_comms.p3d";
        mass = 56;
        hiddenselections[] = 
        {
            "backpack",
            "cover",
            "pouches"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\neko\large_backpack_co.paa",
            "kobra\442_equipment\backpack\data\large\large_backpack_cover_co.paa",
            "kobra\k_equipment_44\data\neko\large_backpack_pouches_co.paa"
        };
        tf_dialog = "mr6000l_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=20000;
        tf_subtype="digital_lr";
    };

    class k_jt12_radio_garrus_44: 442_jt12_radio
	{
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\garrus\jt12_co.paa",
			"kobra\k_equipment_44\data\garrus\jt12_radio_co.paa"
		};
		maximumload=150;
		displayName="[44/K/C] JT-12 Jumppack (Garrus)";
	};
    class k_jt12_radio_ivanov_44: k_jt12_radio_garrus_44
    {
        displayName="[44/K/C] JT-12 Parajumper (Ivanov)";
        hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\ivanov\jt12_co.paa",
			"kobra\k_equipment_44\data\garrus\jt12_radio_co.paa"
		};
        maximumload=350;
    };
};

class cfgglasses
{
    class 442_p2_clone_glass7;
    class 442_p1_clone_glass5;
    class 442_clone_p2_glasses;
    class 442_commando_glass23;
    class 442_commando_glass20;
    class 442_arf_clone_glass2;
    class k_p2_clone_glass7_kripto: 442_p2_clone_glass7
	{
		displayname = "[44/K/C] P2 Clone Commander Visor (Kripto)";
		model = "kobra\442_equipment\glasses\model\clone\k_p2_clone_glasses7.p3d";
		hiddenselections[] = 
		{
			"antenna",
			"visor",
			"sensor",
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\p2\p2_visor_attachments_co.paa",
			"kobra\k_equipment_44\data\kripto\p2_visor_co.paa",
			"kobra\442_equipment\glasses\data\clone\p2\p2_visor_attachments_co.paa"
		};
	};
    class k_p1_clone_glass5_litch: 442_p1_clone_glass5
	{
		displayname = "[44/K/C] P1 Clone Commander Visor (Litch)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\litch\p1_visor_attachments_co.paa",
			"kobra\k_equipment_44\data\litch\p1_visor_co.paa",
			"kobra\442_equipment\glasses\data\clone\rangefinder\unit_designs\44ab\rangefinder_co.paa"
		};
	};
    class k_p2_clone_comm_jay: 442_clone_p2_glasses
	{
		displayname = "[44/K/C] P2 Clone Comm (Jay)";
		model = "kobra\k_equipment_44\model\k_jay_glasses.p3d";
		hiddenselections[] = 
		{
			"antenna"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\p2\p2_visor_attachments_co.paa"
		};
	};
    class k_commando_glass23_lore: 442_commando_glass23
	{
		displayname = "[44/K/C] Commando Helmet Attachments (Lore)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\lore\helmet_parts_1_co.paa",
			"kobra\k_equipment_44\data\lore\helmet_parts_1_co.paa"
		};
	};
    class k_commando_glass20_azarael: 442_commando_glass20
	{
		displayname = "[44/K/C] Commando Helmet Attachments (Azerael)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\azarael\helmet_parts_2_co.paa",
			"kobra\k_equipment_44\data\azarael\helmet_parts_2_co.paa",
			"kobra\k_equipment_44\data\azarael\helmet_parts_2_co.paa",
			"kobra\k_equipment_44\data\azarael\helmet_parts_2_co.paa"
		};
	};
    class k_arf_clone_glass2_azarael: 442_arf_clone_glass2
    {
        displayname = "[44/K/C] Arf Helmet Plated (Azarael)";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\azarael\arc_plates_co.paa"
        };
    };
    class k_p1_clone_glass5_neko: 442_p1_clone_glass5
    {
        displayname = "[44/K/C] P1 Clone Commander Visor (Neko)";
        hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\neko\p1_visor_attachments_co.paa",
			"kobra\k_equipment_44\data\neko\p1_visor_co.paa",
			"kobra\k_equipment_44\data\neko\p1_visor_attachments_co.paa"
		};
    };

    class k_p2_clone_glass7_kripto_nh: k_p2_clone_glass7_kripto
    {
		scope = 2;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
    class k_p1_clone_glass5_litch_nh: k_p1_clone_glass5_litch
    {
		scope = 2;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
    class k_p2_clone_comm_jay_nh: k_p2_clone_comm_jay
    {
		scope = 2;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
    class 442_commando_glass23_nh: 442_commando_glass23
    {
		scope = 2;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
    class k_arf_clone_glass2_azarael_nh: k_arf_clone_glass2_azarael
    {
        scope = 2;
		ace_Overlay = "";
		ace_overlaycracked = "";
    };
    class k_p1_clone_glass5_neko_nh: k_p1_clone_glass5_neko
    {
        scope = 2;
		ace_Overlay = "";
		ace_overlaycracked = "";
    };
};