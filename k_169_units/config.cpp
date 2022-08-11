class cfgpatches
{
    class k_169_units
    {
        author = "Kobra Mod Team and Tex";
        requiredAddons[] = 
        {
            "kobra_core",
            "442_units"
        };
        reqiuredversion = 0.1;
        units[] = 
        {
            "k_169_clone_trooper_unit",
            "k_169_clone_rct_unit",
            "k_169_clone_tex_unit",
            "k_169_clone_blood_unit",
            "k_169_clone_xray_unit",
        };
        weapons[] = 
        {
            "k_169_clone_trooper_uniform",
            "k_169_clone_rct_uniform",
            "k_169_clone_tex_uniform",
            "k_169_clone_blood_uniform",
            "k_169_clone_xray_uniform",

            "k_169_clone_arc_tex_vest",
            "k_169_clone_arc_xray_vest",
            
            "k_169_p15_tex_helmet",
            "k_169_p15_xray_helmet",
            "k_169_p15_blood_helmet",
            "k_169_p15_trooper_helmet",
            "k_169_p2_rct_helmet",
        };
    };
};

class cfgvehicles
{
    class k_clone_unit;

    class k_169_clone_trooper_unit: k_clone_unit
    {
        scope = 1;
        displayname = "169th Trooper";
        uniformclass = "k_169_clone_trooper_uniform";
        hiddenselectionstextures[] = 
        {
            "kobra\k_169_units\data\trooper\upper_armor_co.paa",
            "kobra\k_169_units\data\trooper\lower_armor_co.paa",
        };
    };
    class k_169_clone_rct_unit: k_169_clone_trooper_unit
    {
        displayname = "169th Recruit";
        uniformclass = "k_169_clone_rct_uniform";
        hiddenselectionstextures[] = 
        {
            "kobra\k_169_units\data\rct\upper_armor_co.paa",
            "kobra\k_169_units\data\rct\lower_armor_co.paa",
        };
    };
    class k_169_clone_tex_unit: k_169_clone_trooper_unit
    {
        displayname = "169th Tex";
        uniformclass = "k_169_clone_tex_uniform";
        hiddenselectionstextures[] = 
        {
            "kobra\k_169_units\data\tex\upper_armor_co.paa",
            "kobra\k_169_units\data\tex\lower_armor_co.paa",
        };
    };
    class k_169_clone_blood_unit: k_169_clone_trooper_unit
    {
        displayname = "169th Blood";
        uniformclass = "k_169_clone_blood_uniform";
        hiddenselectionstextures[] = 
        {
            "kobra\k_169_units\data\blood\upper_armor_co.paa",
            "kobra\k_169_units\data\blood\lower_armor_co.paa",
        };
    };
    class k_169_clone_xray_unit: k_169_clone_trooper_unit
    {
        displayname = "169th Xray";
        uniformclass = "k_169_clone_xray_uniform";
        hiddenselectionstextures[] = 
        {
            "kobra\k_169_units\data\xray\upper_armor_co.paa",
            "kobra\k_169_units\data\xray\lower_armor_co.paa",
        };
    };
};

class cfgweapons
{
    class U_I_CombatUniform;
    class UniformItem;
    class k_clone_uniform;

    class k_169_clone_trooper_uniform: k_clone_uniform
    {
        displayname = "[k/169th] Clone Trooper Armor (Trooper)";
        author = "Kobra Mod Team and Tex";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        class ItemInfo: UniformItem
        {
            uniformModel = "";
			containerClass="Supply200";
			mass=40;
			uniformType="Neopren";
            uniformClass="k_169_clone_trooper_unit";
        };
    };
    class k_169_clone_rct_uniform: k_169_clone_trooper_uniform
    {
        displayname = "[k/169th] Clone Trooper Armor (Recruit)";
        class ItemInfo: ItemInfo
        {
            uniformClass="k_169_clone_rct_unit";
        };
    };
    class k_169_clone_tex_uniform: k_169_clone_trooper_uniform
    {
        displayname = "[k/169th] Clone Trooper Armor (Tex)";
        class ItemInfo: ItemInfo
        {
            uniformClass="k_169_clone_tex_unit";
        };
    };
    class k_169_clone_blood_uniform: k_169_clone_trooper_uniform
    {
        displayname = "[k/169th] Clone Trooper Armor (Blood)";
        class ItemInfo: ItemInfo
        {
            uniformClass="k_169_clone_blood_unit";
        };
    };
    class k_169_clone_xray_uniform: k_169_clone_trooper_uniform
    {
        displayname = "[k/169th] Clone Trooper Armor (Xray)";
        class ItemInfo: ItemInfo
        {
            uniformClass="k_169_clone_xray_unit";
        };
    };

    class k_clone_arc_vest;

    class k_169_clone_arc_tex_vest: k_clone_arc_vest
    {
        displayname = "[K/169] ARC Clone Vest (Tex)";
        hiddenselectionstextures[] = 
        {
            "kobra\k_169_units\data\tex\kama_co.paa",
			"kobra\k_169_units\data\tex\kama_co.paa",
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

            "kobra\k_169_units\data\tex\arc_pauldron_co.paa", //pauldron_arcC
            "kobra\k_169_units\data\tex\arc_pauldron_co.paa", //pauldron_arcL
            "kobra\k_169_units\data\tex\arc_pauldron_co.paa", //pauldron_arcR

            "", //pauldron_ncoL
            "", //pauldron_ncoR

            "kobra\k_169_units\data\tex\arc_plates_co.paa", //arc_chest
            "kobra\k_169_units\data\tex\arc_plates_co.paa", //arc_legs

            "", //arc_pouchL
            "kobra\442_units\data\vests\clone_vest\arc_pouch_co.paa", //arc_pouchR
        };
    };
    class k_169_clone_arc_xray_vest: k_clone_arc_vest
    {
        displayname = "[K/169] ARC Clone Vest (Xray)";
        hiddenselectionstextures[] = 
        {
            "kobra\k_169_units\data\xray\kama_co.paa",
			"kobra\k_169_units\data\xray\kama_co.paa",
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

            "kobra\k_169_units\data\xray\arc_pauldron_co.paa", //pauldron_arcC
            "kobra\k_169_units\data\xray\arc_pauldron_co.paa", //pauldron_arcL
            "kobra\k_169_units\data\xray\arc_pauldron_co.paa", //pauldron_arcR

            "", //pauldron_ncoL
            "", //pauldron_ncoR

            "kobra\k_169_units\data\xray\arc_plates_co.paa", //arc_chest
            "kobra\k_169_units\data\xray\arc_plates_co.paa", //arc_legs

            "", //arc_pouchL
            "kobra\442_units\data\vests\clone_vest\arc_pouch_co.paa", //arc_pouchR
        };
    };

    class k_p15_helmet;
    class k_169_p15_tex_helmet: k_p15_helmet
	{
		displayname = "[K/169] P1.5 Helmet (Tex)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_169_units\data\tex\p15_helmet_co.paa", //helmet
			"kobra\k_169_units\data\tex\p15_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //helmet_visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //plates
			"", //sensor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //antenna
			"", //macro_visor
		};
        subItems[] = {"k_nvg_ti"};
	};
    class k_169_p15_xray_helmet: k_169_p15_tex_helmet
	{
		displayname = "[K/169] P1.5 Helmet (Xray)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_169_units\data\xray\p15_helmet_co.paa", //helmet
			"kobra\k_169_units\data\xray\p15_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //helmet_visor
			"", //plates
			"", //sensor
			"", //antenna
			"", //macro_visor
		};
	};
    class k_169_p15_blood_helmet: k_169_p15_tex_helmet
	{
		displayname = "[K/169] P1.5 Helmet (Blood)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_169_units\data\blood\p15_helmet_co.paa", //helmet
			"kobra\k_169_units\data\blood\p15_helmet_co.paa", //visor
			"", //helmet_visor
			"", //plates
			"", //sensor
			"", //antenna
			"", //macro_visor
		};
	};
    class k_169_p15_trooper_helmet: k_169_p15_tex_helmet
	{
		displayname = "[K/169] P1.5 Helmet (Trooper)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_169_units\data\trooper\p15_helmet_co.paa", //helmet
			"kobra\k_169_units\data\trooper\p15_helmet_co.paa", //visor
			"", //helmet_visor
			"", //plates
			"", //sensor
			"", //antenna
			"", //macro_visor
		};
	};
    class k_p2_helmet;
    class k_169_p2_rct_helmet: k_p2_helmet
    {
        displayname = "[K/169] P2 Helmet (Recruit)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_169_units\data\rct\p2_helmet_co.paa", //helmet
			"kobra\k_169_units\data\rct\p2_helmet_co.paa", //visor
			"", //helmet visor
			"", //plates
			"", //sensor
			"", //antenna
			"", //macro visor
		};
    };
};