///scout helmet
    class k_Scout_Helmet: k_Scout_Helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        //picture = "\kobra\442_units\data\ui\scout_helmet.paa";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\helmet\scout_helmet\helmet_co.paa",
            "kobra\442_units\data\helmet\scout_helmet\visor_co.paa",
        };
		subItems[] = {"k_nvg_ti"};
    };
///hunter helmet
    class k_hunter_Helmet: k_hunter_Helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\helmet\hunter_helmet\helmet_co.paa",
            "kobra\442_units\data\helmet\hunter_helmet\visor_co.paa",
        };
    };
///crosshair helmet
    class k_crosshair_Helmet: k_crosshair_helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\helmet\crosshair_helmet\helmet_co.paa",
            "kobra\442_units\data\helmet\crosshair_helmet\visor_co.paa",
        };
    };
///wrecker helmet
    class k_wrecker_Helmet: k_wrecker_helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\helmet\wrecker_helmet\helmet_co.paa",
            "kobra\442_units\data\helmet\wrecker_helmet\visor_co.paa",
        };
    };
///tech helmet
    class k_tech_Helmet: k_tech_helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\helmet\tech_helmet\tech_helmet_co.paa"
        };
    };
    class k_tech_Helmet_down: k_tech_helmet1_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\helmet\tech_helmet\tech_helmet_co.paa"
        };
    };
///cadet helmet
    class k_cadet_Helmet: k_cadet_helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\helmet\cadet_helmet\cadet_helmet_co.paa"
        };
    };
///p2 helmet
	class k_p2_helmet: k_p2_helmet_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "[K] P2 Helmet";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p2_helmet\p2_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p2_helmet\p2_helmet_co.paa", //visor
			"", //helmet visor
			"", //plates
			"", //sensor
			"", //antenna
			"", //macro visor
		};
	};
	class k_p2_helmet1: k_p2_helmet
	{
		displayname = "[K] P2 Helmet w/ Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p2_helmet\p2_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p2_helmet\p2_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //helmet visor
			"", //plates
			"", //sensor
			"", //antenna
			"", //micro visor
		};
	};
	class k_p2_helmet2: k_p2_helmet
	{
		displayname = "[K] P2 Helmet w/ Plated Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p2_helmet\p2_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p2_helmet\p2_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //helmet visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //plates
			"", //sensor
			"", //antenna
			"", //micro visor
		};
	};
	class k_p2_helmet3: k_p2_helmet
	{
		displayname="[K] P2 Helmet w/ Plated Visor, Antenna";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p2_helmet\p2_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p2_helmet\p2_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //helmet visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //plates
			"", //sensor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //antenna
			"", //micro visor
		};
	};
	class k_p2_helmet4: k_p2_helmet
	{
		displayname = "[K] P2 Helmet w/ Commander Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p2_helmet\p2_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p2_helmet\p2_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //helmet visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //plates
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //sensor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //antenna
			"", //micro visor
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_p2_helmet5: k_p2_helmet
	{
		displayname = "[K] P2 Helmet w/ Specialist Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p2_helmet\p2_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p2_helmet\p2_helmet_co.paa", //visor
			"", //helmet visor
			"", //plates
			"", //sensor
			"", //antenna
			"kobra\442_units\data\helmet\p2_attachments\p2_macro_visor_co.paa", //micro visor
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_p2_helmet6: k_p2_helmet
	{
		displayname = "[K] P2 Helmet w/ Specialist Visor, Antenna";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p2_helmet\p2_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p2_helmet\p2_helmet_co.paa", //visor
			"", //helmet visor
			"", //plates
			"", //sensor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //antenna
			"kobra\442_units\data\helmet\p2_attachments\p2_macro_visor_co.paa", //micro visor
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_p2_helmet7: k_p2_helmet
	{
		displayname = "[K] P2 Helmet w/ Antenna";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p2_helmet\p2_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p2_helmet\p2_helmet_co.paa", //visor
			"", //helmet visor
			"", //plates
			"", //sensor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //antenna
			"", //micro visor
		};
	};
///p1 helmet
	class k_p1_helmet: k_p1_helmet_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "[K] P1 Helmet";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p1_helmet\p1_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p1_helmet\p1_helmet_co.paa", //visor
			"", //helmet visor
			"", //sensor
			"", //antenna
			"", //macro visor
		};
	};
	class k_p1_helmet1: k_p1_helmet
	{
		displayname = "[K] P1 Helmet w/ Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p1_helmet\p1_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p1_helmet\p1_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\p1_attachments\p1_visor_co.paa", //helmet visor
			"", //sensor
			"", //antenna
			"", //macro visor
		};
	};
	class k_p1_helmet2: k_p1_helmet
	{
		displayname = "[K] P1 Helmet w/ Commander Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p1_helmet\p1_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p1_helmet\p1_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\p1_attachments\p1_visor_co.paa", //helmet visor
			"kobra\442_units\data\helmet\p1_attachments\p1_visor_co.paa", //sensor
			"kobra\442_units\data\helmet\p1_attachments\p1_visor_co.paa", //antenna
			"", //macro visor
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_p1_helmet3: k_p1_helmet
	{
		displayname = "[K] P1 Helmet w/ Antenna";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p1_helmet\p1_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p1_helmet\p1_helmet_co.paa", //visor
			"", //helmet visor
			"", //sensor
			"kobra\442_units\data\helmet\p1_attachments\p1_visor_co.paa", //antenna
			"", //macro visor
		};
	};
	class k_p1_helmet4: k_p1_helmet
	{
		displayname = "[K] P1 Helmet w/ Specialist Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p1_helmet\p1_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p1_helmet\p1_helmet_co.paa", //visor
			"", //helmet visor
			"", //sensor
			"", //antenna
			"kobra\442_units\data\helmet\p1_attachments\p1_macro_visor_co.paa", //macro visor
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_p1_helmet5: k_p1_helmet
	{
		displayname = "[K] P1 Helmet w/ Specialist Visor, Antenna";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p1_helmet\p1_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p1_helmet\p1_helmet_co.paa", //visor
			"", //helmet visor
			"", //sensor
			"kobra\442_units\data\helmet\p1_attachments\p1_visor_co.paa", //antenna
			"kobra\442_units\data\helmet\p1_attachments\p1_macro_visor_co.paa", //macro visor
		};
		subItems[] = {"k_nvg_ti"};
	};
///p1 pilot helmeet
	class k_p1_pilot_helmet: k_p1_pilot_helmet_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "[K] P1 Pilot Helmet";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p1_pilot_helmet\p1_pilot_helmet_co.paa",
			"kobra\442_units\data\helmet\p1_pilot_helmet\p1_pilot_helmet_co.paa",
		};
	};
///arf helmet
    class k_arf_helmet: k_arf_helmet_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "[K] Arf Helmet";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\arf_helmet\arf_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\arf_helmet\arf_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa", //brim
			"", //plates
			"", //macro_visor
			"", //mask
		};
	};
	class k_arf_helmet1: k_arf_helmet
	{
		displayname = "[K] Arf Helmet w/ Plates";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\arf_helmet\arf_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\arf_helmet\arf_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa", //brim
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa", //plates
			"", //macro_visor
			"", //mask
		};
	};
	class k_arf_helmet2: k_arf_helmet
	{
		displayname = "[K] Arf Helmet w/ Specialist Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\arf_helmet\arf_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\arf_helmet\arf_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa", //brim
			"", //plates
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa", //macro_visor
			"", //mask
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_arf_helmet3: k_arf_helmet
	{
		displayname = "[K] Arf Helmet w/ Specialist Visor, Plates";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\arf_helmet\arf_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\arf_helmet\arf_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa", //brim
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa", //plates
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa", //macro_visor
			"", //mask
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_arf_helmet4: k_arf_helmet
	{
		displayname = "[K] Arf Helmet w/ Flaps";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\arf_helmet\arf_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\arf_helmet\arf_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa", //brim
			"", //plates
			"", //macro_visor
			"kobra\442_units\data\helmet\arf_helmet\arf_mask_co.paa", //mask
		};
	};
	class k_arf_helmet5: k_arf_helmet
	{
		displayname = "[K] Arf Helmet w/ Flaps, Plates";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\arf_helmet\arf_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\arf_helmet\arf_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa", //brim
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa", //plates
			"", //macro_visor
			"kobra\442_units\data\helmet\arf_helmet\arf_mask_co.paa", //mask
		};
	};
	class k_arf_helmet6: k_arf_helmet
	{
		displayname = "[K] Arf Helmet w/ Flaps, Specialist Visor, Flaps";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\arf_helmet\arf_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\arf_helmet\arf_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa", //brim
			"", //plates
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa", //macro_visor
			"kobra\442_units\data\helmet\arf_helmet\arf_mask_co.paa", //mask
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_arf_helmet7: k_arf_helmet
	{
		displayname = "[K] Arf Helmet w/ Flaps, Specialist Visor, Plates, Flaps";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\arf_helmet\arf_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\arf_helmet\arf_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa", //brim
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa", //plates
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa", //macro_visor
			"kobra\442_units\data\helmet\arf_helmet\arf_mask_co.paa", //mask
		};
		subItems[] = {"k_nvg_ti"};
	};
///p1 airborne helmet
    class k_p1_airborne_helmet: k_p1_airborne_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "[K] P1 Airborne Helmet";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p1_airborne_helmet\p1_airborne_helmet_co.paa",
			"kobra\442_units\data\helmet\p1_airborne_helmet\p1_airborne_helmet_co.paa",
		};
	};
///barc helmet
	class k_barc_helmet: k_barc_helmet_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "[K] Barc Helmet";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\barc_helmet\barc_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\barc_helmet\barc_helmet_co.paa", //visor
			"", //helmet_visor
			"", //plates
			"", //sensor
			"", //antenna
		};
	};
	class k_barc_helmet1: k_barc_helmet
	{
		displayname = "[K] Barc Helmet w/ Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\barc_helmet\barc_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\barc_helmet\barc_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //helmet_visor
			"", //plates
			"", //sensor
			"", //antenna
		};
	};
	class k_barc_helmet2: k_barc_helmet
	{
		displayname = "[K] Barc Helmet w/ Visor, Plates";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\barc_helmet\barc_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\barc_helmet\barc_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //helmet_visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //plates
			"", //sensor
			"", //antenna
		};
	};
	class k_barc_helmet3: k_barc_helmet
	{
		displayname = "[K] Barc Helmet w/ Commander Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\barc_helmet\barc_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\barc_helmet\barc_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //helmet_visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //plates
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //sensor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //antenna
		};
	};
	class k_barc_helmet4: k_barc_helmet
	{
		displayname = "[K] Barc Helmet w/ Antenna";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\barc_helmet\barc_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\barc_helmet\barc_helmet_co.paa", //visor
			"", //helmet_visor
			"", //plates
			"", //sensor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //antenna
		};
	};
///p1.5 helmet
	class k_p15_helmet: k_p15_helmet_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "[K] P1.5 Helmet";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p15_helmet\p15_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p15_helmet\p15_helmet_co.paa", //visor
			"", //helmet_visor
			"", //plates
			"", //sensor
			"", //antenna
			"", //macro_visor
		};
	};
	class k_p15_helmet1: k_p15_helmet
	{
		displayname = "[K] P1.5 Helmet w/ Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p15_helmet\p15_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p15_helmet\p15_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //helmet_visor
			"", //plates
			"", //sensor
			"", //antenna
			"", //macro_visor
		};
	};
	class k_p15_helmet2: k_p15_helmet
	{
		displayname = "[K] P1.5 Helmet w/ Visor, Plates";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p15_helmet\p15_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p15_helmet\p15_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //helmet_visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //plates
			"", //sensor
			"", //antenna
			"", //macro_visor
		};
	};
	class k_p15_helmet3: k_p15_helmet
	{
		displayname = "[K] P1.5 Helmet w/ Commander Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p15_helmet\p15_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p15_helmet\p15_helmet_co.paa", //visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //helmet_visor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //plates
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //sensor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //antenna
			"", //macro_visor
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_p15_helmet4: k_p15_helmet
	{
		displayname = "[K] P1.5 Helmet w/ Antenna";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p15_helmet\p15_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p15_helmet\p15_helmet_co.paa", //visor
			"", //helmet_visor
			"", //plates
			"", //sensor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //antenna
			"", //macro_visor
		};
	};
	class k_p15_helmet5: k_p15_helmet
	{
		displayname = "[K] P1.5 Helmet w/ Specialist Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p15_helmet\p15_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p15_helmet\p15_helmet_co.paa", //visor
			"", //helmet_visor
			"", //plates
			"", //sensor
			"", //antenna
			"kobra\442_units\data\helmet\p2_attachments\p2_macro_visor_co.paa", //macro_visor
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_p15_helmet6: k_p15_helmet
	{
		displayname = "[K] P1.5 Helmet w/ Specialist Visor, Antenna";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p15_helmet\p15_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p15_helmet\p15_helmet_co.paa", //visor
			"", //helmet_visor
			"", //plates
			"", //sensor
			"kobra\442_units\data\helmet\p2_attachments\p2_visor_co.paa", //antenna
			"kobra\442_units\data\helmet\p2_attachments\p2_macro_visor_co.paa", //macro_visor
		};
		subItems[] = {"k_nvg_ti"};
	};
//airborne helmet
	class k_p2_ab_helmet: k_p2_ab_helmet_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "[K] P2 Airborne Helmet";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p2_ab_helmet\ab_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p2_ab_helmet\ab_helmet_co.paa", //visor
		};
	};
//p2 pilot helmet
	class k_p2_pilot_helmet: k_p2_pilot_helmet_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "[K] P2 Pilot Helmet";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\p2_pilot_helmet\p2_pilot_helmet_co.paa", //helmet
			"kobra\442_units\data\helmet\p2_pilot_helmet\p2_pilot_helmet_co.paa", //visor
		};
	};