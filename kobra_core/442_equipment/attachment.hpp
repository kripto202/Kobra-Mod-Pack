    class 442_nvg_base: nvgoggles
    {
        scope = 1;
        ace_nightvision_border = "442_equipment\attachments\data\nvg_mask_sw_4096.paa";
        displayname = "nvg_visor_base";
        model = "";
        modeloptics = "";
        visionmode[] = {"Normal", "NVG", "TI"};
        thermalMode[] = {0};
    };
    class SWLB_clone_rangefinder;
    class 442_nvg_rangefinder: SWLB_clone_rangefinder
    {
        scope = 2;
        displayname = "[K] Clone Rangefinder";
        visionmode[] = {"Normal", "NVG"};
        ace_nightvision_border = "442_equipment\attachments\data\nvg_mask_sw_4096.paa";
        modeloptics = "";
    };
    class SWLB_clone_nvg;
    class 442_nvg_clone_visor: SWLB_clone_nvg
    {
        scope = 2;
        displayname = "[K] Clone NVG Visor";
        visionmode[] = {"Normal", "NVG"};
        ace_nightvision_border = "442_equipment\attachments\data\nvg_mask_sw_4096.paa";
        modeloptics = "";
    };
    class SWLB_clone_nvg_nco;
    class 442_nvg_clone_visor_nco: SWLB_clone_nvg_nco
    {
        displayname = "[K] Clone NVG Visor NCO";
        visionmode[] = {"Normal", "NVG"};
        ace_nightvision_border = "442_equipment\attachments\data\nvg_mask_sw_4096.paa";
        modeloptics = "";
    };
    class SWLB_clone_ccVisor;
    class 442_nvg_clone_visor_command: SWLB_clone_ccVisor
    {
        scope = 2;
        displayname = "[K] Clone Visor";
        visionmode[] = {"Normal", "NVG"};
        ace_nightvision_border = "442_equipment\attachments\data\nvg_mask_sw_4096.paa";
        modeloptics = "";
    };
    class SWLB_clone_mcVisor;
    class 442_nvg_clone_visor_cc: SWLB_clone_mcVisor
    {
        displayname = "[K] Clone Visor Commander";
        visionmode[] = {"Normal", "NVG"};
        ace_nightvision_border = "442_equipment\attachments\data\nvg_mask_sw_4096.paa";
        modeloptics = "";
    };

///P1 attachments///

    class swlb_cee_p1_rangefinder;
    class 442_nvg_p1_rangefinder: swlb_cee_p1_rangefinder
    {
        displayname = "[K] Clone P1 Rangefinder";
        visionmode[] = {"Normal", "NVG"};
        ace_nightvision_border = "442_equipment\attachments\data\nvg_mask_sw_4096.paa";
        modeloptics = "";
    };
    class SWLB_CEE_P1_Visor;
    class 442_nvg_clone_p1_visor: SWLB_CEE_P1_Visor
    {
        displayname = "[K] Clone P1 NVG Visor";
        visionmode[] = {"Normal", "NVG"};
        ace_nightvision_border = "442_equipment\attachments\data\nvg_mask_sw_4096.paa";
        modeloptics = "";
    };
    class SWLB_CEE_P1_MC_Visor;
    class 442_nvg_clone_p1_visor_cc: SWLB_CEE_P1_MC_Visor
    {
        displayname = "[K] Clone P1 Visor Commander";
        visionmode[] = {"Normal", "NVG"};
        ace_nightvision_border = "442_equipment\attachments\data\nvg_mask_sw_4096.paa";
        modeloptics = "";
    };