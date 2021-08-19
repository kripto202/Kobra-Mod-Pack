class cfgpatches
{
    class 442_equipment_nvg
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
            "k_clone_arf_brim_base",
            "k_clone_arf_brim",
            "k_clone_arf_brim_clear",
            "k_clone_arf_brim_plates",
            "k_clone_arf_brim_plates_clear",
            "k_clone_arf_brim_visor",
            "k_clone_arf_brim_visor_clear",

            "k_clone_p1_visor",
            "k_clone_p1_visor_clear",
            "k_clone_p1_visor_command",
            "k_clone_p1_visor_command_clear",
            "k_clone_p2_visor",
            "k_clone_p2_visor_clear",
            "k_clone_p2_visor_command",
            "k_clone_p2_visor_command_clear",
            "k_clone_p2_visor_mc",
            "k_clone_p2_visor_mc_clear",
        };
    };
};

class cfgweapons
{
    class NVGoggles;
    class k_clone_arf_brim_base: NVGoggles
	{
		author = "KOBRA Mod Team";
		scope = 0;
		picture = "kobra\kobra_core\kobra.paa";
		displayname = "";
		model = "kobra\442_equipment\attachments\arf_brim.p3d";
		hiddenselections[] = 
        {
            "brim",
            "visor",
            "plates"
        };
        visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
        thermalMode[]={2,3};
        ace_nightvision_border = "kobra\442_equipment\attachments\data\nvg_mask_sw_4096.paa";
        class ItemInfo
		{
			type=616;
			uniformModel="kobra\442_equipment\attachments\arf_brim.p3d";
			modelOff="kobra\442_equipment\attachments\arf_brim.p3d";
			mass=20;
            hiddenselections[] = 
            {
                "brim",
                "visor",
                "plates"
            };
		};
	};
    class k_clone_p1_visor_base: k_clone_arf_brim_base 
    {
        model = "kobra\442_equipment\attachments\p1_visor.p3d";
        hiddenselections[] = 
        {
            "visor",
            "antenna",
            "sensor"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "kobra\442_equipment\attachments\p1_visor.p3d";
            modelOff="kobra\442_equipment\attachments\p1_visor.p3d";
            hiddenselections[] = 
            {
                "visor",
                "antenna",
                "sensor"
            };
        };
    };
    class k_clone_p2_visor_base: k_clone_arf_brim_base 
    {
        model = "kobra\442_equipment\attachments\p2_visor.p3d";
        hiddenselections[] = 
        {
            "visor",
            "plates",
            "antenna",
            "sensor"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "kobra\442_equipment\attachments\p2_visor.p3d";
            modelOff="kobra\442_equipment\attachments\p2_visor.p3d";
            hiddenselections[] = 
            {
                "visor",
                "plates",
                "antenna",
                "sensor"
            };
        };
    };
///arf brim
	class k_clone_arf_brim: k_clone_arf_brim_base
    {
        displayname = "[K] Arf Visor";
        scope = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\attachments\data\arf_brim\arf_brim_co.paa",
            "",
            ""
        };
        visionMode[]= 
        {
            "Normal",
            "NVG"
        };
    };
    class k_clone_arf_brim_clear: k_clone_arf_brim
    {
        displayname = "[K] Arf Visor (Clear NVG)";
        ace_nightvision_border = "";
    };
    class k_clone_arf_brim_plates: k_clone_arf_brim
    {
        displayname = "[K] Arf Plated Visor";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\attachments\data\arf_brim\arf_brim_co.paa",
            "",
            "kobra\442_equipment\attachments\data\arf_brim\arf_brim_co.paa"
        };
    };
    class k_clone_arf_brim_plates_clear: k_clone_arf_brim_plates
    {
        displayname = "[K] Arf Plated Visor (Clear NVG)";
        ace_nightvision_border = "";
    };
    class k_clone_arf_brim_visor: k_clone_arf_brim
    {
        displayname = "[K] Arf Specialist Visor";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\attachments\data\arf_brim\arf_brim_co.paa",
            "kobra\442_equipment\attachments\data\arf_brim\arf_brim_co.paa",
            ""
        };
        visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
    };
    class k_clone_arf_brim_visor_clear: k_clone_arf_brim_visor
    {
        displayname = "[K] Arf Specialist Visor (Clear NVG)";
        ace_nightvision_border = "";
    };
///p1 visor
    class k_clone_p1_visor: k_clone_p1_visor_base
    {
        displayname = "[K] P1 Visor";
        scope = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\attachments\data\p1_visor\p1_visor_co.paa",
            "",
            ""
        };
        visionMode[]=
		{
			"Normal",
			"NVG"
		};
    };
    class k_clone_p1_visor_clear: k_clone_p1_visor
    {
        displayname = "[K] P1 Visor (Clear NVG)";
        ace_nightvision_border = "";
    };
    class k_clone_p1_visor_command: k_clone_p1_visor
    {
        displayname = "[K] P1 Commander Visor";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\attachments\data\p1_visor\p1_visor_co.paa",
            "kobra\442_equipment\attachments\data\p1_visor\p1_visor_co.paa",
            "kobra\442_equipment\attachments\data\p1_visor\p1_visor_co.paa"
        };
    };
    class k_clone_p1_visor_command_clear: k_clone_p1_visor_command
    {
        displayname = "[K] P1 Commander Visor (Clear NVG)";
        ace_nightvision_border = "";
    };
///p2 visor
    class k_clone_p2_visor: k_clone_p2_visor_base
    {
        displayname = "[K] P2 Visor";
        scope = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\attachments\data\p2_visor\p2_visor_co.paa",
            "",
            "",
            ""
        };
        visionMode[]=
		{
			"Normal",
			"NVG"
		};
    };
    class k_clone_p2_visor_clear: k_clone_p2_visor
    {
        displayname = "[K] P2 Visor (Clear NVG)";
        ace_nightvision_border = "";
    };
    class k_clone_p2_visor_command: k_clone_p2_visor
    {
        displayname = "[K] P2 Commander Visor";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\attachments\data\p2_visor\p2_visor_co.paa",
            "kobra\442_equipment\attachments\data\p2_visor\p2_visor_co.paa",
            "",
            ""
        };
    };
    class k_clone_p2_visor_command_clear: k_clone_p2_visor_command
    {
        displayname = "[K] P2 Commander Visor (Clear NVG)";
        ace_nightvision_border = "";
    };
    class k_clone_p2_visor_mc: k_clone_p2_visor
    {
        displayname = "[K] P2 Marshal Commander Visor";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\attachments\data\p2_visor\p2_visor_co.paa",
            "kobra\442_equipment\attachments\data\p2_visor\p2_visor_co.paa",
            "kobra\442_equipment\attachments\data\p2_visor\p2_visor_co.paa",
            "kobra\442_equipment\attachments\data\p2_visor\p2_visor_co.paa"
        };
        visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
    };
    class k_clone_p2_visor_mc_clear: k_clone_p2_visor_mc
    {
        displayname = "[K] P2 Marshal Commander Visor (Clear NVG)";
        ace_nightvision_border = "";
    };
};