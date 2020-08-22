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
    class 442_nvg_rangefinder: 442_nvg_base
    {
        scope = 2;
        displayname = "[K] Clone Rangefinder";
        model = "442_equipment\attachments\clone_rangefinder_off.p3d";
        visionmode[] = {"Normal", "NVG"};
        hiddenselections[] = 
        {
            "rangefinder",
            "nco"
        };
        hiddenselectionstextures[] = 
        {
            "442_equipment\attachments\data\attachments_co.paa",
            ""
        };
        class Iteminfo
        {
            type = 616;
            uniformModel = "442_equipment\attachments\clone_rangefinder_on.p3d";
            modeloff = "442_equipment\attachments\clone_rangefinder_off.p3d";
            mass = 20;
            hiddenselections[] = 
            {
                "rangefinder",
                "nco"
            };
        };
    };
    class 442_nvg_rangefinder_nco: 442_nvg_rangefinder
    {
        displayname = "[K] Clone Rangefinder NCO";
        hiddenselectionstextures[] = 
        {
            "442_equipment\attachments\data\attachments_co.paa",
            "442_equipment\attachments\data\attachments_co.paa"
        };
    };

    class 442_nvg_clone_visor: 442_nvg_base
    {
        scope = 2;
        displayname = "[K] Clone NVG Visor";
        model = "442_equipment\attachments\clone_nvg_on.p3d";
        visionmode[] = {"Normal", "NVG"};
        hiddenselections[] = 
        {
            "nvg_visor",
            "nco"
        };
        hiddenselectionstextures[] = 
        {
            "442_equipment\attachments\data\attachments_co.paa",
            ""
        };
        class Iteminfo
        {
            type = 616;
            uniformmodel = "442_equipment\attachments\clone_nvg_on.p3d";
            modeloff = "442_equipment\attachments\clone_nvg_off.p3d";
            mass = 20;
            hiddenselections[] = 
            {
                "nvg_visor",
                "nco"
            };
        };
    };
    class 442_nvg_clone_visor_nco: 442_nvg_clone_visor
    {
        displayname = "[K] Clone NVG Visor NCO";
        hiddenselectionstextures[] = 
        {
            "442_equipment\attachments\data\attachments_co.paa",
            "442_equipment\attachments\data\attachments_co.paa"
        };
    };

    class 442_nvg_clone_visor_command: 442_nvg_base
    {
        scope = 2;
        displayname = "[K] Clone Visor";
        model = "442_equipment\attachments\clone_visor.p3d";
        visionmode[] = {"Normal", "NVG"};
        hiddenselections[] = 
        {
            "visor",
            "heavy",
            "nco",
            "antenna",
            "sensor"
        };
        hiddenselectionstextures[] = 
        {
            "442_equipment\attachments\data\attachments_co.paa",
            "",
            "",
            "",
            ""
        };
        class ItemInfo
        {
            type = 616;
            uniformmodel = "442_equipment\attachments\clone_visor.p3d";
            modeloff = "442_equipment\attachments\clone_visor.p3d";
            mass = 20;
            hiddenselections[] = 
            {
                "visor",
                "heavy",
                "nco",
                "antenna",
                "sensor"
            };
        };
    };
 
    class 442_nvg_clone_visor_heavy: 442_nvg_clone_visor_command
    {
        displayname = "[K] Clone Visor Heavy";
        hiddenselectionstextures[] = 
        {
            "442_equipment\attachments\data\attachments_co.paa",
            "442_equipment\attachments\data\attachments_co.paa",
            "",
            "",
            ""
        };
    };

    class 442_nvg_clone_visor_nco2: 442_nvg_clone_visor_command
    {
        displayname = "[K] Clone Visor NCO";
        hiddenselectionstextures[] = 
        {
            "442_equipment\attachments\data\attachments_co.paa",
            "",
            "442_equipment\attachments\data\attachments_co.paa",
            "",
            ""
        };
    };
   
    class 442_nvg_clone_visor_heavy_nco: 442_nvg_clone_visor_command
    {
        displayname = "[K] Clone Visor Heavy NCO";
        hiddenselectionstextures[] = 
        {
            "442_equipment\attachments\data\attachments_co.paa",
            "442_equipment\attachments\data\attachments_co.paa",
            "442_equipment\attachments\data\attachments_co.paa",
            "",
            ""
        };
    };

    class 442_nvg_clone_visor_cc: 442_nvg_clone_visor_command
    {
        displayname = "[K] Clone Visor Commander";
        hiddenselectionstextures[] = 
        {
            "442_equipment\attachments\data\attachments_co.paa",
            "442_equipment\attachments\data\attachments_co.paa",
            "442_equipment\attachments\data\attachments_co.paa",
            "442_equipment\attachments\data\attachments_co.paa",
            "442_equipment\attachments\data\attachments_co.paa"
        };
    };

///P1 attachments///

    class 442_nvg_p1_rangefinder: 442_nvg_rangefinder
    {
        displayname = "[K] Clone P1 Rangefinder";
        model = "442_equipment\attachments\clone_p1_rangefinder_off.p3d";
        hiddenselections[] = 
        {
            "rangefinder"
        };
        hiddenselectionstextures[] = 
        {
            "442_equipment\attachments\data\attachments_co.paa"
        };
        class iteminfo: iteminfo
        {
            uniformModel = "442_equipment\attachments\clone_p1_rangefinder_on.p3d";
            modeloff = "442_equipment\attachments\clone_p1_rangefinder_off.p3d";
            hiddenselections[] = 
            {
                "rangefinder"
            };
        };
    };
    class 442_nvg_clone_p1_visor: 442_nvg_clone_visor
    {
        displayname = "[K] Clone P1 NVG Visor";
        model = "442_equipment\attachments\clone_p1_visor_on.p3d";
        hiddenselectionstextures[] = 
        {
            "442_equipment\attachments\data\attachments_co.paa",
            ""
        };
        class Iteminfo: iteminfo
        {
            uniformmodel = "442_equipment\attachments\clone_p1_visor_on.p3d";
            modeloff = "442_equipment\attachments\clone_p1_visor_off.p3d";
        };
    };
    class 442_nvg_clone_p1_visor_nco: 442_nvg_clone_visor_nco
    {
        displayname = "[K] Clone P1 NVG Visor NCO";
        model = "442_equipment\attachments\clone_p1_visor_on.p3d";
        class Iteminfo: iteminfo
        {
            uniformmodel = "442_equipment\attachments\clone_p1_visor_on.p3d";
            modeloff = "442_equipment\attachments\clone_p1_visor_off.p3d";
        };
    };
    class 442_nvg_clone_p1_visor_command: 442_nvg_clone_visor_command
    {
        displayname = "[K] Clone P1 Visor";
        model = "442_equipment\attachments\clone_p1_visor.p3d";
        class iteminfo: iteminfo
        {
            uniformmodel = "442_equipment\attachments\clone_p1_visor.p3d";
            modeloff = "442_equipment\attachments\clone_p1_visor.p3d";
        };
    };
    class 442_nvg_clone_p1_visor_heavy: 442_nvg_clone_visor_heavy
    {
        displayname = "[K] Clone P1 Visor Heavy";
        model = "442_equipment\attachments\clone_p1_visor.p3d";
        class iteminfo: iteminfo
        {
            uniformmodel = "442_equipment\attachments\clone_p1_visor.p3d";
            modeloff = "442_equipment\attachments\clone_p1_visor.p3d";
        };
    };
    class 442_nvg_clone_p1_visor_nco2: 442_nvg_clone_visor_nco2
    {
        displayname = "[K] Clone P1 Visor NCO";
        model = "442_equipment\attachments\clone_p1_visor.p3d";
        class iteminfo: iteminfo
        {
            uniformmodel = "442_equipment\attachments\clone_p1_visor.p3d";
            modeloff = "442_equipment\attachments\clone_p1_visor.p3d";
        };
    };
    class 442_nvg_clone_p1_visor_heavy_nco: 442_nvg_clone_visor_heavy_nco
    {
        displayname = "[K] Clone P1 Visor Heavy NCO";
        model = "442_equipment\attachments\clone_p1_visor.p3d";
        class iteminfo: iteminfo
        {
            uniformmodel = "442_equipment\attachments\clone_p1_visor.p3d";
            modeloff = "442_equipment\attachments\clone_p1_visor.p3d";
        };
    };
    class 442_nvg_clone_p1_visor_cc: 442_nvg_clone_visor_cc
    {
        displayname = "[K] Clone P1 Visor Commander";
        model = "442_equipment\attachments\clone_p1_visor.p3d";
        class iteminfo: iteminfo
        {
            uniformmodel = "442_equipment\attachments\clone_p1_visor.p3d";
            modeloff = "442_equipment\attachments\clone_p1_visor.p3d";
        };
    };