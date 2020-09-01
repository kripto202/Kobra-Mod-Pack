class k_vest_base: V_PlateCarrier1_rgr
{
    author = "kripto202";
    displayname = "vest base";
    scope = 0;
    scopecurator = 0;
    scopearsenal = 0;
    allowedSlots[] = {901};
    picture = "\442_equipment\vests\data\ui\icon_swlb_clone_uniform_ca.paa";
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
            };
        };
    };
};
class k_vest_basic: k_vest_base
{
    scope = 2;
    scopecurator = 2;
    scopearsenal = 2;
    displayname = "[K] Vest Basic";
    model = "442_equipment\vests\clone_basic_armor.p3d";
    class ItemInfo: ItemInfo
    {
        uniformModel = "442_equipment\vests\clone_basic_armor.p3d";
        containerClass = "Supply100";
        mass = 10;
    };
};
class k_vest_arc_1: k_vest_base
{
    scope = 2;
    scopecurator = 2;
    scopearsenal = 2;
    displayname = "[K] Arc Armor (Black)";
    model = "442_equipment\vests\clone_arc_armor.p3d";
    hiddenselections[] = 
    {
        "arc_kama_pauldron",
		"arc_plate"
    };
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_1_b.paa",
        "442_equipment\vests\data\442_arc_vest.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenselections[] = 
        {
            "arc_kama_pauldron",
            "arc_plate"
        };
        containerclass = "Supply200";
        mass = 150;
        uniformmodel = "442_equipment\vests\clone_arc_armor.p3d";
        class HitpointsProtectionInfo
        {
            class Chest
            {
                HitpointName = "HitChest";
                armor = 20;
                PassThrough = 0.1;
            };
            class Diaphragm
            {
                HitpointName = "HitDiaphragm";
                armor = 20;
                PassThrough = 0.1;
            };
            class Abdomen
            {
                hitpointName = "HitAbdomen";
                armor = 20;
                passThrough = 0.1;
            };
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
            };
        };
    };
};
class k_vest_arc_2: k_vest_arc_1
{
    scope = 2;
    scopecurator = 2;
    scopearsenal = 2;
    displayname = "[K] Arc Armor (Grey)";
    model = "442_equipment\vests\clone_arc_armor.p3d";
    hiddenselections[] = 
    {
        "arc_kama_pauldron",
		"arc_plate"
    };
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_1_g.paa",
        "442_equipment\vests\data\442_arc_vest.paa"
    };
};
class k_vest_arc_plate: k_vest_arc_1
{
    scope = 2;
    scopecurator = 2;
    scopearsenal = 2;
    displayname = "[K] Arc Plates";
    model = "442_equipment\vests\clone_arc_armor.p3d";
    hiddenselections[] = 
    {
        "arc_kama_pauldron",
		"arc_plate"
    };
    hiddenselectionstextures[] = 
    {
        "",
        "442_equipment\vests\data\442_arc_vest.paa"
    };
};

class k_vest_airborne_1: k_vest_base
{
    scope = 2;
    scopecurator = 2;
    scopearsenal = 2;
    displayname = "[K] Airborne Vest (Black)";
    hiddenselections[] = 
    {
        "ammo",
        "bag",
        "kama",
        "pauldron"
    };
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_2_b.paa",
        "442_equipment\vests\data\442_vest_2_b.paa",
        "442_equipment\vests\data\442_vest_1_b.paa",
        ""
    };
    model = "442_equipment\vests\clone_airborne_armor.p3d";
    class ItemInfo: ItemInfo
    {
        hiddenselections[] = 
        {
            "ammo",
            "bag",
            "kama",
            "pauldron"
        };
        containerclass = "Supply250";
        mass = 70;
        uniformmodel = "442_equipment\vests\clone_airborne_armor.p3d";
    };
};
class k_vest_airborne_2: k_vest_airborne_1
{
    displayname = "[K] Airborne Vest (Grey)";
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_2_g.paa",
        "442_equipment\vests\data\442_vest_2_g.paa",
        "442_equipment\vests\data\442_vest_1_g.paa",
        ""
    };
};
class k_vest_airborne_medic: k_vest_airborne_1
{
    displayname = "[K] Airborne Vest (Medic)";
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_2_m.paa",
        "442_equipment\vests\data\442_vest_2_m.paa",
        "442_equipment\vests\data\442_vest_1_g.paa",
        ""
    };
};
class k_vest_airborne_nco_1: k_vest_airborne_1
{
    displayname = "[K] Airborne NCO Vest (Black)";
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_2_b.paa",
        "442_equipment\vests\data\442_vest_2_b.paa",
        "442_equipment\vests\data\442_vest_1_b.paa",
        "442_equipment\vests\data\442_vest_2_b.paa"
    };
};
class k_vest_airborne_nco_2: k_vest_airborne_1
{
    displayname = "[K] Airborne NCO Vest (Grey)";
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_2_g.paa",
        "442_equipment\vests\data\442_vest_2_g.paa",
        "442_equipment\vests\data\442_vest_1_g.paa",
        "442_equipment\vests\data\442_vest_2_g.paa"
    };
};

class k_vest_assault: k_vest_base
{
    scope = 2;
    scopecurator = 2;
    scopearsenal = 2;
    displayname = "[K] Clone Assault Vest";
    hiddenselections[] = 
    {
        "straps",
        "holster"
    };
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_3_b.paa",
        "442_equipment\vests\data\442_vest_2_b.paa",
    };
    model = "442_equipment\vests\clone_assault_armor.p3d";
    class ItemInfo: ItemInfo
    {
        hiddenselections[] = 
        {
            "straps",
            "holster"
        };
        containerclass = "Supply150";
        mass = 30;
        uniformmodel = "442_equipment\vests\clone_assault_armor.p3d";
    };
};

class k_vest_cfr: k_vest_base
{
    scope = 2;
    scopecurator = 2;
    scopearsenal = 2;
    displayname = "[K] Clone First Responder Vest";
    hiddenselections[] = 
    {
        "holster"
    };
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_2_b.paa"
    };
    model = "442_equipment\vests\clone_cfr_armor.p3d";
    class ItemInfo: ItemInfo
    {
        hiddenselections[] = 
        {
            "holster"
        };
        containerclass = "Supply180";
        mass = 35;
        uniformmodel = "442_equipment\vests\clone_cfr_armor.p3d";
    };
};

class k_vest_commander_armor_1: k_vest_base
{
    scope = 2;
    scopecurator = 2;
    scopearsenal = 2;
    displayname = "[K] Clone Marshall Commander Vest (Black)";
    hiddenselections[] = 
    {
        "kama_pauldron",
        "rank"
    };
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_1_b.paa",
        "442_equipment\vests\data\rank_co.paa"
    };
    model = "442_equipment\vests\clone_commander_armor.p3d";
    class ItemInfo: ItemInfo
    {
        hiddenselections[] = 
        {
            "kama_pauldron",
			"rank"
        };
        containerclass = "Supply200";
        mass = 35;
        uniformmodel = "442_equipment\vests\clone_commander_armor.p3d";
    };
};
class k_vest_commander_armor_2: k_vest_commander_armor_1
{
    displayname = "[K] Clone Marshall Commander Vest (Grey)";
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_1_g.paa",
        "442_equipment\vests\data\rank_co.paa"
    };
};
class k_vest_commander_armor_3: k_vest_commander_armor_1
{
    displayname = "[K] Clone Commander Vest (Black)";
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_1_b.paa"
    };
};
class k_vest_commander_armor_4: k_vest_commander_armor_1
{
    displayname = "[K] Clone Commander Vest (Grey)";
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_1_g.paa"
    };
};

class k_vest_grenadier: k_vest_base
{
    scope = 2;
    scopecurator = 2;
    scopearsenal = 2;
    displayname = "[K] Clone Grenadier Vest (Black)";
    hiddenselections[] = 
    {
        "straps",
        "holster"
    };
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_3_b.paa",
        "442_equipment\vests\data\442_vest_2_b.paa"
    };
    model = "442_equipment\vests\clone_grenadier_armor.p3d";
    class ItemInfo: ItemInfo
    {
        hiddenselections[] = 
        {
            "straps",
			"holster"
        };
        containerclass = "Supply180";
        mass = 40;
        uniformmodel = "442_equipment\vests\clone_grenadier_armor.p3d";
    };
};

class k_vest_kama_1: k_vest_base
{
    scope = 2;
    scopecurator = 2;
    scopearsenal = 2;
    displayname = "[K] Clone Kama (Black)";
    hiddenselections[] = 
    {
        "kama"
    };
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_1_b.paa"
    };
    model = "442_equipment\vests\clone_kama_armor.p3d";
    class ItemInfo: ItemInfo
    {
        hiddenselections[] = 
        {
            "kama"
        };
        containerclass = "Supply120";
        mass = 40;
        uniformmodel = "442_equipment\vests\clone_kama_armor.p3d";
    };
};
class k_vest_kama_2: k_vest_kama_1
{  
    displayname = "[K] Clone Kama (Grey)";
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_1_g.paa"
    };
};

class k_vest_pauldron_1: k_vest_base
{
    scope = 2;
    scopecurator = 2;
    scopearsenal = 2;
    displayname = "[K] Clone Pauldron (Black)";
    hiddenselections[] = 
    {
        "pauldron"
    };
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_1_b.paa"
    };
    model = "442_equipment\vests\clone_lieutenant_armor.p3d";
    class ItemInfo: ItemInfo
    {
        hiddenselections[] = 
        {
            "pauldron"
        };
        containerclass = "Supply120";
        mass = 40;
        uniformmodel = "442_equipment\vests\clone_lieutenant_armor.p3d";
    };
};
class k_vest_pauldron_2: k_vest_pauldron_1
{
    scope = 2;
    scopecurator = 2;
    scopearsenal = 2;
    displayname = "[K] Clone Pauldron (Grey)";
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_1_g.paa"
    };
};

class k_vest_light: k_vest_base
{
    scope = 2;
    scopecurator = 2;
    scopearsenal = 2;
    displayname = "[K] Clone Light Armor (Black)";
    hiddenselections[] = 
    {
        "straps",
        "ammo",
        "boxes",
        "grenade",
        "holster",
        "pouch_1",
        "pouch_2",
        "pouch_belt",
        "thermal"
    };
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_3_b.paa",
        "",
        "442_equipment\vests\data\442_vest_3_b.paa",
        "",
        "442_equipment\vests\data\442_vest_3_b.paa",
        "442_equipment\vests\data\442_vest_3_b.paa",
        "442_equipment\vests\data\442_vest_3_b.paa",
        "442_equipment\vests\data\442_vest_3_b.paa",
        "",
    };
    model = "442_equipment\vests\clone_light_armor.p3d";
    class ItemInfo: ItemInfo
    {
        hiddenselections[] = 
        {
            "straps",
            "ammo",
            "boxes",
            "grenade",
            "holster",
            "pouch_1",
            "pouch_2",
            "pouch_belt",
            "thermal"
        };
        containerclass = "Supply200";
        mass = 30;
        uniformmodel = "442_equipment\vests\clone_light_armor.p3d";
    };
};

class k_vest_medic: k_vest_base
{
    scope = 2;
    scopecurator = 2;
    scopearsenal = 2;
    displayname = "[K] Clone Medic Vest";
    hiddenselections[] = 
    {
        "camo1"
    };
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_2_m.paa"
    };
    model = "442_equipment\vests\clone_medic_armor.p3d";
    class ItemInfo: ItemInfo
    {
        hiddenselections[] = 
        {
            "camo1"
        };
        containerclass = "Supply250";
        mass = 40;
        uniformmodel = "442_equipment\vests\clone_medic_armor.p3d";
    };
};

class k_vest_recon_1: k_vest_base
{
    scope = 2;
    scopecurator = 2;
    scopearsenal = 2;
    displayname = "[K] Clone Recon Vest (Black)";
    hiddenselections[] = 
    {
        "strap",
        "pauldron",
        "holster"
    };
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_2_b.paa",
		"442_equipment\vests\data\442_vest_2_b.paa",
		"442_equipment\vests\data\442_vest_2_b.paa"
    };
    model = "442_equipment\vests\clone_recon_armor.p3d";
    class ItemInfo: ItemInfo
    {
        hiddenselections[] = 
        {
            "strap",
            "pauldron",
            "holster"
        };
        containerclass = "Supply150";
        mass = 30;
        uniformmodel = "442_equipment\vests\clone_recon_armor.p3d";
    };
};
class k_vest_recon_2: k_vest_recon_1
{
    displayname = "[K] Clone Recon Vest (Grey)";
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_2_g.paa",
		"442_equipment\vests\data\442_vest_2_g.paa",
		"442_equipment\vests\data\442_vest_2_g.paa"
    };
};

class k_vest_recon_officer_1: k_vest_base
{
    scope = 2;
    scopecurator = 2;
    scopearsenal = 2;
    displayname = "[K] Clone Recon Officer Vest (Black)";
    hiddenselections[] = 
    {
        "kama",
	    "strap"
    };
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_1_b.paa",
		"442_equipment\vests\data\442_vest_2_b.paa"
    };
    model = "442_equipment\vests\clone_recon_officer_armor.p3d";
    class ItemInfo: ItemInfo
    {
        hiddenselections[] = 
        {
            "kama",
	    	"strap"
        };
        containerclass = "Supply150";
        mass = 60;
        uniformmodel = "442_equipment\vests\clone_recon_officer_armor.p3d";
    };
};
class k_vest_recon_officer_2: k_vest_recon_officer_1
{
    displayname = "[K] Clone Recon Officer Vest (Grey)";
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_1_g.paa",
		"442_equipment\vests\data\442_vest_2_g.paa"
    };
};

class k_vest_specialist: k_vest_base
{
    scope = 2;
    scopecurator = 2;
    scopearsenal = 2;
    displayname = "[K] Clone Recon Specialist Vest (Black)";
    hiddenselections[] = 
    {
        "strap",
		"holster"
    };
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_3_b.paa",
		"442_equipment\vests\data\442_vest_2_b.paa"
    };
    model = "442_equipment\vests\clone_specialist_armor.p3d";
    class ItemInfo: ItemInfo
    {
        hiddenselections[] = 
        {
            "strap",
		    "holster"
        };
        containerclass = "Supply150";
        mass = 40;
        uniformmodel = "442_equipment\vests\clone_specialist_armor.p3d";
    };
};

class 9_vest_arc_foe: k_vest_arc_1
{
    displayname = "[9] Arc Armor (Foe)";
    hiddenselectionstextures[] = 
    {
        "442_equipment\vests\data\442_vest_1_b.paa",
        "442_units\clones\9\data\vests\foe_arc_vest.paa"
    };
};