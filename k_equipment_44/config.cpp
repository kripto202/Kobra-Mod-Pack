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
		units[] = {};
        weapons[] = {};
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

    class k_barc_helmet_Kripto_44: k_barc_helmet
    {
        displayname = "[44/K/C] Barc Helmet (Kripto)";
        hiddenselectionsmaterials[] = 
		{
			"kobra\442_equipment\helmets\data\barc_helmet\helmet.rvmat",
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
    class k_clone_uniform_Zeressin_44: k_clone_uniform
    {
        displayname = "[44/K/C] Clone Trooper Armor (Zeressin)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Zeressin_44";
        };
    };

    class k_arf_helmet_Titania_44: k_arf_helmet
	{
        ace_hearing_protection=1;
        ace_hearing_lowervolume=0;
		displayname = "[44/K/C] Arf Helmet (Titania)";
        hiddenselectionsmaterials[] = 
		{
			"kobra\442_equipment\helmets\data\arf_helmet\helmet.rvmat",
			"kobra\442_equipment\helmets\data\unit_designs\44ab\arf_visor.rvmat"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\titania\arf_helmet_co.paa", //helmet
			"kobra\k_equipment_44\data\titania\arf_helmet_co.paa", //visor
			"kobra\k_equipment_44\data\titania\arf_brim_co.paa", //brim
		};
	};
    class k_clone_uniform_Titania_44: k_clone_uniform
    {
        displayname = "[44/K/C] Clone Trooper Armor (Titania)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Titania_44";
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

    class k_p1_helmet_Litch_44: k_p1_helmet
	{
        ace_hearing_protection=1;
        ace_hearing_lowervolume=0;
		displayname = "[44/K/C] P1 Helmet (Litch)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\Litch\p1_helmet_co.paa", //helmet
			"kobra\k_equipment_44\data\Litch\p1_visor_co.paa", //visor
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

    class k_p1_helmet_Garrus_44: k_p1_helmet
	{
		displayname = "[44/K/C] P1 Helmet (Garrus)";
        hiddenselectionsmaterials[] = 
		{
			"kobra\442_equipment\helmets\data\p1_helmet\helmet.rvmat",
			"kobra\442_equipment\helmets\data\unit_designs\44ab\p1_visor.rvmat"
		};
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

    class k_tech_Helmet_Barker_44: k_tech_Helmet
    {
        ace_hearing_protection=1;
        displayname = "[44/K/C] Tech's Helmet (Barker)";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\barker\tech_helmet_co.paa"
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

    class k_clone_basic_vest_base;
    class vestitem;
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
                    armor = 25;
                    PassThrough = 1;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 1;
                };
            };
        };
    };
    class k_clone_vest_garrus_44: k_clone_vest_barker_44
    {
        displayname = "[44/K/C] Clone Vest (Garrus)";
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
        };
    };
    class k_clone_vest_titania_44: k_clone_vest_barker_44
    {
        displayname = "[44/K/C] Clone Vest (Titania)";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\titania\clone_belt_co.paa",
            "kobra\k_equipment_44\data\titania\kama_co.paa",
            "kobra\442_equipment\vests\data\clone\arc_pauldron_co.paa",
        };
        hiddenselections[] = 
        {
            "belt",
            "kama",
            "pauldron"
        };
        class ItemInfo: ItemInfo
        {
            hiddenselections[] = 
            {
                "belt",
                "kama",
                "pauldron"
            };
            uniformmodel = "kobra\k_equipment_44\model\k_titania_vest.p3d";
            containerclass = "Supply200";
            mass = 80;
        };
    };
    class k_clone_vest_rex_44: k_clone_vest_barker_44
    {
        displayname = "[44/K/C] Clone Vest (Rex)";
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
        };
    };
    class k_clone_vest_litch_44: k_clone_vest_barker_44
    {
        displayname = "[44/K/C] Clone Vest (Litch)";
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
        };
    };
    class k_clone_vest_jay_44: k_clone_vest_barker_44
    {
        displayname = "[44/K/C] Clone Vest (Jay)";
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
        };
    };
    class k_clone_vest_kripto_44: k_clone_vest_barker_44
    {
        displayname = "[44/K/C] Clone Vest (Kripto)";
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
        };
    };
    class k_clone_vest_zeressin_44: k_clone_vest_barker_44
    {
        displayname = "[44/K/C] Clone Vest (Zeressin)";
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
        };
    };
};

class CfgVehicles
{
    class k_commando_unit;
    class k_clone_unit;

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
    class k_clone_unit_Titania_44: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Titania_44";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\titania\upper_armor_co.paa",
            "kobra\k_equipment_44\data\titania\lower_armor_co.paa"
        };
    };
    class k_clone_unit_Zeressin_44: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Zeressin_44";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\zeressin\upper_armor_co.paa",
            "kobra\k_equipment_44\data\zeressin\lower_armor_co.paa"
        };
    };
    class k_clone_huge_backpack_rocket_44;
    class k_clone_huge_backpack_rocket_titania_44: k_clone_huge_backpack_rocket_44
	{
		displayname = "[44/K/C] Clone Trooper Huge Backpack w/ Rockets";
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
    class 442_jt12_radio;
    class 442_jt12_radio_garrus_44: 442_jt12_radio
	{
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\garrus\jt12_co.paa",
			"kobra\k_equipment_44\data\garrus\jt12_radio_co.paa"
		};
		maximumload=150;
		displayName="[44/K/C] JT-12 Jumppack (Radio)";
	};
};

class cfgglasses
{

};