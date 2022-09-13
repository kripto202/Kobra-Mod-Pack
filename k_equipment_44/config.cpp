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

    class k_barc_helmet_Kripto: k_barc_helmet
    {
        displayname = "[44/K] Barc Helmet (Kripto)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\kripto\barc_helmet_co.paa", //helmet
			"kobra\k_equipment_44\data\kripto\barc_helmet_co.paa", //visor
		};
    };

    class k_clone_uniform_Kripto: k_clone_uniform
    {
        displayname = "[44/K] Clone Trooper Armor (Kripto)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Kripto";
        };
    };

    class k_barc_helmet_Zeressin: k_barc_helmet
    {
        ace_hearing_protection=1;
        ace_hearing_lowervolume=0;
        displayname = "[44/K] Barc Helmet (Zeressin)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\zeressin\barc_helmet_co.paa", //helmet
			"kobra\k_equipment_44\data\zeressin\barc_helmet_co.paa", //visor
		};
    };

    class k_clone_uniform_Zeressin: k_clone_uniform
    {
        displayname = "[44/K] Clone Trooper Armor (Zeressin)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Zeressin";
        };
    };

    class k_arf_helmet_Titania: k_arf_helmet
	{
        ace_hearing_protection=1;
        ace_hearing_lowervolume=0;
		displayname = "[44/K] Arf Helmet (Titania)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\titania\arf_helmet_co.paa", //helmet
			"kobra\k_equipment_44\data\titania\arf_helmet_co.paa", //visor
			"kobra\k_equipment_44\data\titania\arf_brim_co.paa", //brim
		};
	};

    class k_clone_uniform_Titania: k_clone_uniform
    {
        displayname = "[44/K] Clone Trooper Armor (Titania)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Titania";
        };
    };

    class k_p1_helmet_Rex: k_p1_helmet
	{
		displayname = "[44/K] P1 Helmet (Rex)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\rex\p1_helmet_co.paa", //helmet
			"kobra\k_equipment_44\data\rex\p1_helmet_co.paa", //visor
		};
	};

    class k_clone_uniform_Rex: k_clone_uniform
    {
        displayname = "[44/K] Clone Trooper Armor (Rex)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Rex";
        };
    };

    class k_p1_helmet_Litch: k_p1_helmet
	{
        ace_hearing_protection=1;
        ace_hearing_lowervolume=0;
		displayname = "[44/K] P1 Helmet (Litch)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\Litch\p1_helmet_co.paa", //helmet
			"kobra\k_equipment_44\data\Litch\p1_visor_co.paa", //visor
		};
	};

    class k_clone_uniform_Litch: k_clone_uniform
    {
        displayname = "[44/K] Clone Trooper Armor (Litch)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Litch";
        };
    };

    class k_p1_helmet_Garrus: k_p1_helmet
	{
		displayname = "[44/K] P1 Helmet (Garrus)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\garrus\p1_helmet_co.paa", //helmet
			"kobra\k_equipment_44\data\garrus\p1_helmet_co.paa", //visor
		};
	};

    class k_clone_uniform_Garrus: k_clone_uniform
    {
        displayname = "[44/K] Clone Trooper Armor (Garrus)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Garrus";
        };
    };

    class k_p2_helmet_Jay: k_p2_helmet
	{
        ace_hearing_protection=1;
        ace_hearing_lowervolume=0;
		displayname = "[44/K] P2 Helmet (Jay)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\jay\p2_helmet_co.paa", //helmet
			"kobra\k_equipment_44\data\jay\p2_helmet_co.paa", //visor
		};
	};

    class k_clone_uniform_Jay: k_clone_uniform
    {
        displayname = "[44/K] Clone Trooper Armor (Jay)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Jay";
        };
    };

    class k_tech_Helmet_Barker: k_tech_Helmet
    {
        ace_hearing_protection=1;
        displayname = "[44/K] Tech's Helmet (Barker)";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\barker\tech_helmet_co.paa"
        };
    };

    class k_clone_uniform_Barker: k_clone_uniform
    {
        displayname = "[44/K] Clone Trooper Armor (Barker)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_Barker";
        };
    };

    class k_commando_mk1_helmet_Azarael: k_commando_mk1_helmet
	{
        ace_hearing_protection=1;
        ace_hearing_lowervolume=0;
		displayname = "[44/K] Commando Helmet Mk1 (Azarael)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_equipment_44\data\azarael\helmet1_co.paa",
			"kobra\k_equipment_44\data\azarael\helmet1_co.paa",
		};
	};

    class k_commando_uniform_Azarael: k_commando_uniform
    {
        displayname = "[44/K] Commando Armor (Azarael)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_commando_unit_Azarael";
        };
    };
};

class CfgVehicles
{
    class k_commando_unit;
    class k_clone_unit;

    class k_commando_unit_Azarael: k_commando_unit
    {
        displayname = "Clone Commando";
        uniformclass = "k_commando_uniform_Azarael";
        hiddenselectionstextures[]=
        {
            "kobra\k_equipment_44\data\azarael\chest_co.paa",
            "kobra\k_equipment_44\data\azarael\arm_co.paa",
            "kobra\k_equipment_44\data\azarael\leg_co.paa",
            "kobra\k_equipment_44\data\azarael\undersuit_co.paa"
        };
	};

    class k_clone_unit_Barker: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Barker";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\barker\upper_armor_co.paa",
            "kobra\k_equipment_44\data\barker\lower_armor_co.paa"
        };
    };

    class k_clone_unit_Garrus: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Garrus";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\garrus\upper_armor_co.paa",
            "kobra\k_equipment_44\data\garrus\lower_armor_co.paa"
        };
    };

    class k_clone_unit_Jay: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Jay";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\jay\upper_armor_co.paa",
            "kobra\k_equipment_44\data\jay\lower_armor_co.paa"
        };
    };

    class k_clone_unit_Kripto: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Kripto";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\kripto\upper_armor_co.paa",
            "kobra\k_equipment_44\data\kripto\lower_armor_co.paa"
        };
    };

    class k_clone_unit_Litch: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Litch";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\litch\upper_armor_co.paa",
            "kobra\k_equipment_44\data\litch\lower_armor_co.paa"
        };
    };

    class k_clone_unit_Rex: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Rex";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\rex\upper_armor_co.paa",
            "kobra\k_equipment_44\data\rex\lower_armor_co.paa"
        };
    };

    class k_clone_unit_Titania: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Titania";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\titania\upper_armor_co.paa",
            "kobra\k_equipment_44\data\titania\lower_armor_co.paa"
        };
    };

    class k_clone_unit_Zeressin: k_clone_unit
    {
        displayname = "Clone Trooper";
        uniformclass = "k_clone_uniform_Zeressin";
        hiddenselectionstextures[] = 
        {
            "kobra\k_equipment_44\data\zeressin\upper_armor_co.paa",
            "kobra\k_equipment_44\data\zeressin\lower_armor_co.paa"
        };
    };
};

class cfgglasses
{

};