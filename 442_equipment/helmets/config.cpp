class cfgpatches
{
    class 442_equipment_helmets
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

class cfgweapons
{
    class HeadgearItem;
    class H_HelmetO_ViperSP_hex_F;
///base classes
    class k_helmet_base: H_HelmetO_ViperSP_hex_F
	{
		author = "KOBRA Mod Team";
		displayname = "helmet base config";
		picture = "\kobra\kobra_core\kobra.paa";
		icon = "\kobra\kobra_core\kobra.paa";
		scope = 0;
		scopecurator = 0;
		scopearsenal = 0;
		ace_hearing_protection = 0.8500002;
		ace_hearing_lowervolume = 0.2;
		//picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenselections[] = {};
		//model = "swlb_clones\swlb_clone_p2_helmet.p3d";
		subItems[] = {"k_nvg"};
		class Iteminfo: HeadgearItem
		{
			mass = 10;
			//uniformModel = "\swlb_clones\swlb_clone_p2_helmet.p3d";
			hiddenselections[] = {};
			allowedSlots[] = {801,901,701,605};
			modelsides[] = {0,1,2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointname = "HitHead";
					armor = 12;
					passThrough = 0.5;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};

	class k_Scout_Helmet_base: k_helmet_base
	{
		displayName="[K] Scout Helmet";
		model="kobra\442_equipment\helmets\model\clone\k_scout_helmet.p3d";
		subItems[]=
		{
			"k_nvg_ti"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="kobra\442_equipment\helmets\model\clone\k_scout_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"visor"
			};
		};
	};
	class k_hunter_helmet_base: k_helmet_base
	{
		displayName="[K] Hunter Helmet";
		model="kobra\442_equipment\helmets\model\clone\k_hunter_helmet.p3d";
		subItems[]=
		{
			"k_nvg"
		};
		hiddenSelections[]=
		{
			"helmet",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="kobra\442_equipment\helmets\model\clone\k_hunter_helmet.p3d";
			hiddenSelections[]=
			{
				"helmet",
				"visor"
			};
		};
	};
	class k_crosshair_helmet_base: k_helmet_base
	{
		displayName="[K] Crosshair Helmet";
		model="kobra\442_equipment\helmets\model\clone\k_crosshair_helmet.p3d";
		subItems[]=
		{
			"k_nvg"
		};
		hiddenSelections[]=
		{
			"helmet",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="kobra\442_equipment\helmets\model\clone\k_crosshair_helmet.p3d";
			hiddenSelections[]=
			{
				"helmet",
				"visor"
			};
		};
	};
	class k_wrecker_helmet_base: k_helmet_base
	{
		displayName="[K] Wrecker Helmet";
		model="kobra\442_equipment\helmets\model\clone\k_wrecker_helmet.p3d";
		subItems[]=
		{
			"k_nvg"
		};
		hiddenSelections[]=
		{
			"helmet",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="kobra\442_equipment\helmets\model\clone\k_wrecker_helmet.p3d";
			hiddenSelections[]=
			{
				"helmet",
				"visor"
			};
		};
	};
	class k_tech_helmet_base: k_helmet_base
	{
		displayName="[K] Tech Helmet";
		model="kobra\442_equipment\helmets\model\clone\k_tech_helmet.p3d";
		subItems[]=
		{
			"k_nvg"
		};
		hiddenSelections[]=
		{
			"helmet"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="kobra\442_equipment\helmets\model\clone\k_tech_helmet.p3d";
			hiddenSelections[]=
			{
				"helmet"
			};
		};
	};
	class k_cadet_helmet_base: k_helmet_base
	{
		displayName="[K] Cadet Helmet";
		model="kobra\442_equipment\helmets\model\clone\k_cadet_helmet.p3d";
		subItems[]=
		{
			"k_nvg"
		};
		hiddenSelections[]=
		{
			"helmet"
		};		
		class ItemInfo: ItemInfo
		{
			uniformModel="kobra\442_equipment\helmets\model\clone\k_cadet_helmet.p3d";
			hiddenSelections[]=
			{
				"helmet"
			};
		};
	};
	class k_commando_helmet_mk1_base: k_helmet_base
	{
		displayname = "[K] Commando Helmet Mk1";
		model = "kobra\442_equipment\helmets\model\commando\k_commando_helmet_mk1.p3d";
		subItems[]=
		{
			"k_nvg"
		};
		hiddenselections[] = 
		{
			"helmet",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "kobra\442_equipment\helmets\model\commando\k_commando_helmet_mk1.p3d";
			hiddenselections[] = 
			{
				"helmet",
				"visor"
			};
		};
	};
	class k_commando_helmet_mk2_base: k_commando_helmet_mk1_base
	{
		displayname = "[K] Commando Helmet Mk2";
		model = "kobra\442_equipment\helmets\model\commando\k_commando_helmet_mk2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "kobra\442_equipment\helmets\model\commando\k_commando_helmet_mk2.p3d";
		};
	};
	class k_commando_helmet_mk3_base: k_commando_helmet_mk1_base
	{
		displayname = "[K] Commando Helmet Mk3";
		model = "kobra\442_equipment\helmets\model\commando\k_commando_helmet_mk3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "kobra\442_equipment\helmets\model\commando\k_commando_helmet_mk3.p3d";
		};
	};

	class k_p2_helmet_base: k_helmet_base
	{
		displayname = "[K] P2 Helmet";
		model = "kobra\442_equipment\helmets\model\clone\k_p2_helmet.p3d";
		hiddenselections[] = 
		{
			"helmet",
			"visor",
            "helmet_visor",
            "plates",
            "sensor",
            "antenna",
            "macro_visor"
		};
		class iteminfo: Iteminfo
		{
			uniformmodel = "kobra\442_equipment\helmets\model\clone\k_p2_helmet.p3d";
			hiddenselections[] = 
			{
				"helmet",
				"visor",
				"helmet_visor",
				"plates",
				"sensor",
				"antenna",
				"macro_visor"
			};
		};
	};
	class k_p1_helmet_base: k_helmet_base
	{
		displayname = "[K] P1 Helmet";
		model = "kobra\442_equipment\helmets\model\clone\k_p1_helmet.p3d";
		hiddenselections[] = 
		{
			"helmet",
			"visor",
            "helmet_visor",
            "sensor",
            "antenna",
            "macro_visor"
		};
		class iteminfo: Iteminfo
		{
			uniformmodel = "kobra\442_equipment\helmets\model\clone\k_p1_helmet.p3d";
			hiddenselections[] = 
			{
				"helmet",
				"visor",
				"helmet_visor",
				"sensor",
				"antenna",
				"macro_visor"
			};
		};
	};
	class k_p1_pilot_helmet_base: k_helmet_base
	{
		displayname = "[K] P1 Pilot Helmet";
		model = "kobra\442_equipment\helmets\model\clone\k_p1_pilot_helmet.p3d";
		hiddenselections[] = 
		{
			"helmet",
			"visor"
		};
		subItems[] = {"k_nvg_ti"};
		class iteminfo: Iteminfo
		{
			uniformmodel = "kobra\442_equipment\helmets\model\clone\k_p1_pilot_helmet.p3d";
			hiddenselections[] = 
			{
				"helmet",
				"visor"
			};
		};
	};
	class k_p1_airborne_helmet_base: k_helmet_base
	{
		displayname = "[K] P1 Airborne Helmet";
		model = "kobra\442_equipment\helmets\model\clone\k_p1_airborne_helmet.p3d";
		hiddenselections[] = 
		{
			"helmet",
			"visor"
		};
		class iteminfo: Iteminfo
		{
			uniformmodel = "kobra\442_equipment\helmets\model\clone\k_p1_airborne_helmet.p3d";
			hiddenselections[] = 
			{
				"helmet",
				"visor"
			};
		};
	};
	class k_arf_helmet_base: k_helmet_base
	{
		displayname = "[K] Arf Helmet";
		model = "kobra\442_equipment\helmets\model\clone\k_arf_helmet.p3d";
		hiddenselections[] = 
		{
			"helmet",
            "visor",
            "brim",
            "plates",
            "macro_visor",
            "mask"
		};
		class iteminfo: Iteminfo
		{
			uniformmodel = "kobra\442_equipment\helmets\model\clone\k_arf_helmet.p3d";
			hiddenselections[] = 
			{
				"helmet",
				"visor",
				"brim",
				"plates",
				"macro_visor",
				"mask"
			};
		};
	};
	class k_p1_airborne_base: k_helmet_base
	{
		displayname = "[K] P1 Airborne Helmet";
		model = "kobra\442_equipment\helmets\model\clone\k_p1_airborne_helmet.p3d";
		hiddenselections[] = 
		{
			"helmet",
			"visor"
		};
		class iteminfo: Iteminfo
		{
			uniformmodel = "kobra\442_equipment\helmets\model\clone\k_p1_airborne_helmet.p3d";
			hiddenselections[] = 
			{
				"helmet",
				"visor"
			};
		};
	};
	class k_barc_helmet_base: k_helmet_base
	{
		displayname = "[K] Barc Helmet";
		model = "kobra\442_equipment\helmets\model\clone\k_barc_helmet.p3d";
		hiddenselections[] = 
		{
			"helmet",
			"visor",
            "helmet_visor",
            "plates",
            "sensor",
            "antenna"
		};
		class itemInfo: ItemInfo
		{
			uniformmodel = "kobra\442_equipment\helmets\model\clone\k_barc_helmet.p3d";
			hiddenselections[] = 
			{
				"helmet",
				"visor",
				"helmet_visor",
				"plates",
				"sensor",
				"antenna"
			};
		};
	};
	class k_p15_helmet_base: k_helmet_base
	{
		displayname = "[K] P1.5 Helmet";
		model = "kobra\442_equipment\helmets\model\clone\k_p15_helmet.p3d";
		hiddenselections[] = 
		{
			"helmet",
			"visor",
            "helmet_visor",
            "plates",
            "sensor",
            "antenna",
            "macro_visor"
		};
		class itemInfo: ItemInfo
		{
			uniformmodel = "kobra\442_equipment\helmets\model\clone\k_p15_helmet.p3d";
			hiddenselections[] = 
			{
				"helmet",
				"visor",
				"helmet_visor",
				"plates",
				"sensor",
				"antenna",
				"macro_visor"
			};
		};
	};
	class k_p2_pilot_helmet_base: k_helmet_base
	{
		displayname = "[K] P2 Pilot Helmet";
		model = "kobra\442_equipment\helmets\model\clone\k_p2_pilot_helmet.p3d";
		hiddenselections[] = 
		{
			"helmet",
			"visor"
		};
		class itemInfo: ItemInfo
		{
			uniformmodel = "kobra\442_equipment\helmets\model\clone\k_p2_pilot_helmet.p3d";
			hiddenselections[] = 
			{
				"helmet",
				"visor"
			};
		};
	};
	class k_p2_ab_helmet_base: k_helmet_base
	{
		displayname = "[K] P2 Airborne Helmet";
		model = "kobra\442_equipment\helmets\model\clone\k_p2_ab_helmet.p3d";
		hiddenselections[] = 
		{
			"helmet",
			"visor"
		};
		class itemInfo: ItemInfo
		{
			uniformmodel = "kobra\442_equipment\helmets\model\clone\k_p2_ab_helmet.p3d";
			hiddenselections[] = 
			{
				"helmet",
				"visor"
			};
		};
	};

///scout helmet
    class k_Scout_Helmet: k_Scout_Helmet_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        //picture = "\kobra\442_equipment\data\ui\scout_helmet.paa";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\helmets\data\scout_helmet\helmet_co.paa",
            "kobra\442_equipment\helmets\data\scout_helmet\visor_co.paa",
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
            "kobra\442_equipment\helmets\data\hunter_helmet\hunter_helmet_co.paa",
            "kobra\442_equipment\helmets\data\hunter_helmet\hunter_helmet_co.paa",
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
            "kobra\442_equipment\helmets\data\crosshair_helmet\crosshair_helmet_co.paa",
            "kobra\442_equipment\helmets\data\crosshair_helmet\crosshair_helmet_co.paa",
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
            "kobra\442_equipment\helmets\data\wrecker_helmet\wrecker_helmet_co.paa",
            "kobra\442_equipment\helmets\data\wrecker_helmet\wrecker_helmet_co.paa",
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
            "kobra\442_equipment\helmets\data\tech_helmet\tech_helmet_co.paa"
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
            "kobra\442_equipment\helmets\data\cadet_helmet\cadet_helmet_co.paa"
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
			"kobra\442_equipment\helmets\data\p2_helmet\p2_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p2_helmet\p2_helmet_co.paa", //visor
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
			"kobra\442_equipment\helmets\data\p2_helmet\p2_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p2_helmet\p2_helmet_co.paa", //visor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //helmet visor
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
			"kobra\442_equipment\helmets\data\p2_helmet\p2_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p2_helmet\p2_helmet_co.paa", //visor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //helmet visor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //plates
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
			"kobra\442_equipment\helmets\data\p2_helmet\p2_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p2_helmet\p2_helmet_co.paa", //visor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //helmet visor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //plates
			"", //sensor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //antenna
			"", //micro visor
		};
	};
	class k_p2_helmet4: k_p2_helmet
	{
		displayname = "[K] P2 Helmet w/ Commander Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\p2_helmet\p2_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p2_helmet\p2_helmet_co.paa", //visor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //helmet visor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //plates
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //sensor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //antenna
			"", //micro visor
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_p2_helmet5: k_p2_helmet
	{
		displayname = "[K] P2 Helmet w/ Specialist Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\p2_helmet\p2_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p2_helmet\p2_helmet_co.paa", //visor
			"", //helmet visor
			"", //plates
			"", //sensor
			"", //antenna
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_macro_visor_co.paa", //micro visor
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_p2_helmet6: k_p2_helmet
	{
		displayname = "[K] P2 Helmet w/ Specialist Visor, Antenna";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\p2_helmet\p2_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p2_helmet\p2_helmet_co.paa", //visor
			"", //helmet visor
			"", //plates
			"", //sensor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //antenna
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_macro_visor_co.paa", //micro visor
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_p2_helmet7: k_p2_helmet
	{
		displayname = "[K] P2 Helmet w/ Antenna";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\p2_helmet\p2_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p2_helmet\p2_helmet_co.paa", //visor
			"", //helmet visor
			"", //plates
			"", //sensor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //antenna
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
			"kobra\442_equipment\helmets\data\p1_helmet\p1_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p1_helmet\p1_helmet_co.paa", //visor
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
			"kobra\442_equipment\helmets\data\p1_helmet\p1_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p1_helmet\p1_helmet_co.paa", //visor
			"kobra\442_equipment\glasses\data\clone\p1_attachments\p1_visor_co.paa", //helmet visor
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
			"kobra\442_equipment\helmets\data\p1_helmet\p1_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p1_helmet\p1_helmet_co.paa", //visor
			"kobra\442_equipment\glasses\data\clone\p1_attachments\p1_visor_co.paa", //helmet visor
			"kobra\442_equipment\glasses\data\clone\p1_attachments\p1_visor_co.paa", //sensor
			"kobra\442_equipment\glasses\data\clone\p1_attachments\p1_visor_co.paa", //antenna
			"", //macro visor
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_p1_helmet3: k_p1_helmet
	{
		displayname = "[K] P1 Helmet w/ Antenna";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\p1_helmet\p1_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p1_helmet\p1_helmet_co.paa", //visor
			"", //helmet visor
			"", //sensor
			"kobra\442_equipment\glasses\data\clone\p1_attachments\p1_visor_co.paa", //antenna
			"", //macro visor
		};
	};
	class k_p1_helmet4: k_p1_helmet
	{
		displayname = "[K] P1 Helmet w/ Specialist Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\p1_helmet\p1_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p1_helmet\p1_helmet_co.paa", //visor
			"", //helmet visor
			"", //sensor
			"", //antenna
			"kobra\442_equipment\glasses\data\clone\p1_attachments\p1_macro_visor_co.paa", //macro visor
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_p1_helmet5: k_p1_helmet
	{
		displayname = "[K] P1 Helmet w/ Specialist Visor, Antenna";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\p1_helmet\p1_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p1_helmet\p1_helmet_co.paa", //visor
			"", //helmet visor
			"", //sensor
			"kobra\442_equipment\glasses\data\clone\p1_attachments\p1_visor_co.paa", //antenna
			"kobra\442_equipment\glasses\data\clone\p1_attachments\p1_macro_visor_co.paa", //macro visor
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
			"kobra\442_equipment\helmets\data\p1_pilot_helmet\p1_pilot_helmet_co.paa",
			"kobra\442_equipment\helmets\data\p1_pilot_helmet\p1_pilot_helmet_co.paa",
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
			"kobra\442_equipment\helmets\data\arf_helmet\arf_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\arf_helmet\arf_helmet_co.paa", //visor
			"kobra\442_equipment\helmets\data\arf_helmet\arf_brim_co.paa", //brim
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
			"kobra\442_equipment\helmets\data\arf_helmet\arf_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\arf_helmet\arf_helmet_co.paa", //visor
			"kobra\442_equipment\helmets\data\arf_helmet\arf_brim_co.paa", //brim
			"kobra\442_equipment\helmets\data\arf_helmet\arf_brim_co.paa", //plates
			"", //macro_visor
			"", //mask
		};
	};
	class k_arf_helmet2: k_arf_helmet
	{
		displayname = "[K] Arf Helmet w/ Specialist Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\arf_helmet\arf_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\arf_helmet\arf_helmet_co.paa", //visor
			"kobra\442_equipment\helmets\data\arf_helmet\arf_brim_co.paa", //brim
			"", //plates
			"kobra\442_equipment\helmets\data\arf_helmet\arf_brim_co.paa", //macro_visor
			"", //mask
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_arf_helmet3: k_arf_helmet
	{
		displayname = "[K] Arf Helmet w/ Specialist Visor, Plates";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\arf_helmet\arf_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\arf_helmet\arf_helmet_co.paa", //visor
			"kobra\442_equipment\helmets\data\arf_helmet\arf_brim_co.paa", //brim
			"kobra\442_equipment\helmets\data\arf_helmet\arf_brim_co.paa", //plates
			"kobra\442_equipment\helmets\data\arf_helmet\arf_brim_co.paa", //macro_visor
			"", //mask
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_arf_helmet4: k_arf_helmet
	{
		displayname = "[K] Arf Helmet w/ Flaps";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\arf_helmet\arf_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\arf_helmet\arf_helmet_co.paa", //visor
			"kobra\442_equipment\helmets\data\arf_helmet\arf_brim_co.paa", //brim
			"", //plates
			"", //macro_visor
			"kobra\442_equipment\helmets\data\arf_helmet\arf_mask_co.paa", //mask
		};
	};
	class k_arf_helmet5: k_arf_helmet
	{
		displayname = "[K] Arf Helmet w/ Flaps, Plates";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\arf_helmet\arf_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\arf_helmet\arf_helmet_co.paa", //visor
			"kobra\442_equipment\helmets\data\arf_helmet\arf_brim_co.paa", //brim
			"kobra\442_equipment\helmets\data\arf_helmet\arf_brim_co.paa", //plates
			"", //macro_visor
			"kobra\442_equipment\helmets\data\arf_helmet\arf_mask_co.paa", //mask
		};
	};
	class k_arf_helmet6: k_arf_helmet
	{
		displayname = "[K] Arf Helmet w/ Flaps, Specialist Visor, Flaps";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\arf_helmet\arf_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\arf_helmet\arf_helmet_co.paa", //visor
			"kobra\442_equipment\helmets\data\arf_helmet\arf_brim_co.paa", //brim
			"", //plates
			"kobra\442_equipment\helmets\data\arf_helmet\arf_brim_co.paa", //macro_visor
			"kobra\442_equipment\helmets\data\arf_helmet\arf_mask_co.paa", //mask
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_arf_helmet7: k_arf_helmet
	{
		displayname = "[K] Arf Helmet w/ Flaps, Specialist Visor, Plates, Flaps";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\arf_helmet\arf_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\arf_helmet\arf_helmet_co.paa", //visor
			"kobra\442_equipment\helmets\data\arf_helmet\arf_brim_co.paa", //brim
			"kobra\442_equipment\helmets\data\arf_helmet\arf_brim_co.paa", //plates
			"kobra\442_equipment\helmets\data\arf_helmet\arf_brim_co.paa", //macro_visor
			"kobra\442_equipment\helmets\data\arf_helmet\arf_mask_co.paa", //mask
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
			"kobra\442_equipment\helmets\data\p1_airborne_helmet\p1_airborne_helmet_co.paa",
			"kobra\442_equipment\helmets\data\p1_airborne_helmet\p1_airborne_helmet_co.paa",
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
			"kobra\442_equipment\helmets\data\barc_helmet\barc_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\barc_helmet\barc_helmet_co.paa", //visor
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
			"kobra\442_equipment\helmets\data\barc_helmet\barc_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\barc_helmet\barc_helmet_co.paa", //visor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //helmet_visor
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
			"kobra\442_equipment\helmets\data\barc_helmet\barc_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\barc_helmet\barc_helmet_co.paa", //visor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //helmet_visor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //plates
			"", //sensor
			"", //antenna
		};
	};
	class k_barc_helmet3: k_barc_helmet
	{
		displayname = "[K] Barc Helmet w/ Commander Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\barc_helmet\barc_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\barc_helmet\barc_helmet_co.paa", //visor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //helmet_visor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //plates
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //sensor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //antenna
		};
	};
	class k_barc_helmet4: k_barc_helmet
	{
		displayname = "[K] Barc Helmet w/ Antenna";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\barc_helmet\barc_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\barc_helmet\barc_helmet_co.paa", //visor
			"", //helmet_visor
			"", //plates
			"", //sensor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //antenna
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
			"kobra\442_equipment\helmets\data\p15_helmet\p15_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p15_helmet\p15_helmet_co.paa", //visor
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
			"kobra\442_equipment\helmets\data\p15_helmet\p15_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p15_helmet\p15_helmet_co.paa", //visor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //helmet_visor
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
			"kobra\442_equipment\helmets\data\p15_helmet\p15_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p15_helmet\p15_helmet_co.paa", //visor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //helmet_visor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //plates
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
			"kobra\442_equipment\helmets\data\p15_helmet\p15_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p15_helmet\p15_helmet_co.paa", //visor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //helmet_visor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //plates
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //sensor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //antenna
			"", //macro_visor
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_p15_helmet4: k_p15_helmet
	{
		displayname = "[K] P1.5 Helmet w/ Antenna";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\p15_helmet\p15_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p15_helmet\p15_helmet_co.paa", //visor
			"", //helmet_visor
			"", //plates
			"", //sensor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //antenna
			"", //macro_visor
		};
	};
	class k_p15_helmet5: k_p15_helmet
	{
		displayname = "[K] P1.5 Helmet w/ Specialist Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\p15_helmet\p15_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p15_helmet\p15_helmet_co.paa", //visor
			"", //helmet_visor
			"", //plates
			"", //sensor
			"", //antenna
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_macro_visor_co.paa", //macro_visor
		};
		subItems[] = {"k_nvg_ti"};
	};
	class k_p15_helmet6: k_p15_helmet
	{
		displayname = "[K] P1.5 Helmet w/ Specialist Visor, Antenna";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\p15_helmet\p15_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p15_helmet\p15_helmet_co.paa", //visor
			"", //helmet_visor
			"", //plates
			"", //sensor
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_visor_co.paa", //antenna
			"kobra\442_equipment\glasses\data\clone\p2_attachments\p2_macro_visor_co.paa", //macro_visor
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
			"kobra\442_equipment\helmets\data\p2_ab_helmet\p2_airborne_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p2_ab_helmet\p2_airborne_helmet_co.paa", //visor
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
			"kobra\442_equipment\helmets\data\p2_pilot_helmet\p2_pilot_helmet_co.paa", //helmet
			"kobra\442_equipment\helmets\data\p2_pilot_helmet\p2_pilot_helmet_co.paa", //visor
		};
	};
//commando helmet
	class k_commando_mk1_helmet: k_commando_helmet_mk1_base
	{
		displayname = "[K] Commando Helmet Mk1";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\commando_helmet\helmet1_co.paa",
			"kobra\442_equipment\helmets\data\commando_helmet\helmet1_co.paa",
		};
	};
	class k_commando_mk2_helmet: k_commando_helmet_mk2_base
	{
		displayname = "[K] Commando Helmet Mk2";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\commando_helmet\helmet2_co.paa",
			"kobra\442_equipment\helmets\data\commando_helmet\helmet2_co.paa",
		};
	};
	class k_commando_mk3_helmet: k_commando_helmet_mk3_base
	{
		displayname = "[K] Commando Helmet Mk3";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\helmets\data\commando_helmet\helmet3_co.paa",
			"kobra\442_equipment\helmets\data\commando_helmet\helmet3_co.paa",
		};
	};
};