	class k_helmet_base: H_HelmetO_ViperSP_hex_F
	{
		author = "KOBRA Mod Team";
		displayname = "helmet base config";
		scope = 0;
		scopecurator = 0;
		scopearsenal = 0;
		ace_hearing_protection = 0.8500002;
		ace_hearing_lowervolume = 0.2;
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenselections[] = {};
		model = "swlb_clones\swlb_clone_p2_helmet.p3d";
		subItems[] = {};
		class Iteminfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\swlb_clones\swlb_clone_p2_helmet.p3d";
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
	class k_p2_helmet_base: k_helmet_base
	{
		displayname = "[K] P2 Helmet";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};
		model = "442_units\clones\p2_helmet.p3d"; //needs the new model
		class Iteminfo: Iteminfo
		{
			uniformModel = "442_units\clones\p2_helmet.p3d"; //needs the new model
			hiddenselections[] = 
			{
				"camo1",
				"visor"
			};
		};
	};
	class k_p15_helmet_base: k_helmet_base
	{
		displayname = "[K] P1.5 Helmet";
		picture = "";
		subItems[] = {};
		model = "442_units\clones\p15_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor",
			"illum"
		};
		class Iteminfo: Iteminfo
		{
			UniformModel = "442_units\clones\p15_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"visor",
				"illum"
			};
		};
	};
	class k_airborne_helmet_base: k_helmet_base
	{
		displayname = "[K] Airborne Helmet";
		picture = "";
		subItems[] = 
		{
			"k_nvg"
		};
		model = "442_units\clones\ab_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_units\clones\ab_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"visor"
			};
		};
	};
	class k_p2_pilot_helmet_base: k_helmet_base
	{
		displayname = "[K] P2 Pilot Helmet";
		ace_hearing_protection = 1;
		ace_hearing_lowervolume = 0.5;
		subItems[] = 
		{
			"k_nvg"
		};
		picture = "";
		model = "442_units\clones\pilot_p2_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_units\clones\pilot_p2_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"visor"
			};
		};
	};
	class k_barc_helmet_base: k_helmet_base
	{
		displayname = "[K] Barc Helmet";
		picture = "";
		subItems[] = {};
		model = "442_units\clones\barc_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_units\clones\barc_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"visor"
			};
		};
	};
	class k_p1_arf_helmet_base: k_helmet_base
	{
		displayname = "[K] P1 ARF Helmet";
		picture = "";
		subitems[] = {
			"k_nvg_ti"
		};
		model = "442_units\clones\arf_p1_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};
		class Iteminfo: ItemInfo
		{
			uniformModel = "442_units\clones\arf_p1_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"visor"
			};
		};
	};
	class k_p2_arf_helmet_base: k_p1_arf_helmet_base
	{
		displayname = "[K] P2 ARF Helmet";
		model = "442_units\clones\arf_p2_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"camo2",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_units\clones\arf_p2_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"camo2",
				"visor"
			};
		};
	};
	class k_eng_helmet_base: k_helmet_base
	{
		displayname = "[K] Engineer Helmet";
		picture = "";
		subItems[] = {
			"k_nvg"
		};
		model = "442_units\clones\eng_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"illum",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_units\clones\eng_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"illum",
				"visor"
			};
		};
	};
	class k_p1_helmet_base: k_helmet_base
	{
		displayname = "[K] P1 Helmet";
		picture = "";
		subItems[] = {};
		model = "442_units\clones\p1_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor",
			"illum"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_units\clones\p1_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"visor",
				"illum"
			};
		};
	};
	class k_p1_pilot_helmet_base: k_helmet_base
	{
		displayname = "[K] P1 Pilot Helmet";
		picture = "";
		subItems[] = 
		{
			"k_nvg"
		};
		model = "442_units\clones\pilot_p1_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"camo2",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_units\clones\pilot_p1_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"camo2",
				"visor"
			};
		};
	};
	class k_p1_specops_helmet_base: k_helmet_base
	{
		displayname = "[K] P1 Specops Helmet";
		picture = "";
		subItems[] = 
		{
			"k_nvg"
		};
		model = "442_units\clones\spec_p1_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_units\clones\spec_p1_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"visor"
			};
		};
	};
	class k_p2_specops_helmet_base: k_helmet_base
	{
		displayname = "[K] P2 Specops Helmet";
		picture = "";
		subItems[] = 
		{
			"k_nvg"
		};
		model = "442_units\clones\spec_p2_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_units\clones\spec_p2_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"visor"
			};
		};
	};
	class k_rex_helmet_base: k_helmet_base
	{
		displayname = "[K] Rex Helmet";
		picture = "";
		subItems[] = {};
		model = "442_units\clones\rex_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_units\clones\rex_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"visor"
			};
		};
	};
	class k_Scout_Helmet_base: k_helmet_base
	{
		displayName="[K] Scout Helmet";
		model="442_units\clones\scout_helmet.p3d";
		picture="";
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
			uniformModel="442_units\clones\scout_helmet.p3d";
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
		model="442_units\clones\hunter_helmet.p3d";
		picture="";
		subItems[]=
		{
			"k_nvg"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="442_units\clones\hunter_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"visor"
			};
		};
	};
	class k_crosshair_helmet_base: k_helmet_base
	{
		displayName="[K] Crosshair Helmet";
		model="442_units\clones\crosshair_helmet.p3d";
		picture="";
		subItems[]=
		{
			"k_nvg"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="442_units\clones\crosshair_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"visor"
			};
		};
	};
	class k_wrecker_helmet_base: k_helmet_base
	{
		displayName="[K] Wrecker Helmet";
		model="442_units\clones\wrecker_helmet.p3d";
		picture="";
		subItems[]=
		{
			"k_nvg"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="442_units\clones\wrecker_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"visor"
			};
		};
	};
	class k_teck_helmet_base: k_helmet_base
	{
		displayName="[K] Tech Helmet";
		model="442_units\clones\tech_helmet.p3d";
		picture="";
		subItems[]=
		{
			"k_nvg"
		};
		hiddenSelections[]=
		{
			"Camo1"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="442_units\clones\tech_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
		};
	};
	class k_cadet_helmet_base: k_helmet_base
	{
		displayName="[K] Cadet Helmet";
		model="442_units\clones\cadet_helmet.p3d";
		picture="";
		subItems[]=
		{
			"k_nvg"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="442_units\clones\cadet_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"visor"
			};
		};
	};
	class k_desert_helmet_base: k_helmet_base
	{
		displayName="[K] Desert Helmet";
		model="442_units\clones\desert_helmet.p3d";
		picture="";
		subItems[]=
		{
			"k_nvg"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="442_units\clones\desert_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"visor"
			};
		};
	};

	class k_b1_helmet_base: k_helmet_base
	{
		model = "442_units\cis_droids\b1_head_gh.p3d";
		subItems[] = {"k_nvg"};
		hiddenselections[] = 
		{
			"camo1"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_units\cis_droids\b1_head.p3d";
			hiddenselections[] = 
			{
				"camo1"
			};
		};
	};