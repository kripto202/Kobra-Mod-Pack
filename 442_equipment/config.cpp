class cfgpatches
{
    class 442_equipment
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
    class vestitem;
	class V_rebreatherB;
    
    
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
		model="kobra\442_units\scout_helmet.p3d";
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
			uniformModel="kobra\442_units\scout_helmet.p3d";
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
		model="kobra\442_units\hunter_helmet.p3d";
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
			uniformModel="kobra\442_units\hunter_helmet.p3d";
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
		model="kobra\442_units\crosshair_helmet.p3d";
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
			uniformModel="kobra\442_units\crosshair_helmet.p3d";
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
		model="kobra\442_units\wrecker_helmet.p3d";
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
			uniformModel="kobra\442_units\wrecker_helmet.p3d";
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
		model="kobra\442_units\tech_helmet.p3d";
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
			uniformModel="kobra\442_units\tech_helmet.p3d";
			hiddenSelections[]=
			{
				"helmet"
			};
		};
	};
	class k_tech_helmet1_base: k_tech_helmet_base
	{
		model="kobra\442_units\tech_helmet1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="kobra\442_units\tech_helmet1.p3d";
		};
	};
	class k_cadet_helmet_base: k_helmet_base
	{
		displayName="[K] Cadet Helmet";
		model="kobra\442_units\cadet_helmet.p3d";
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
			uniformModel="kobra\442_units\cadet_helmet.p3d";
			hiddenSelections[]=
			{
				"helmet"
			};
		};
	};
	class k_commando_helmet_mk1_base: k_helmet_base
	{
		displayname = "[K] Commando Helmet Mk1";
		model = "kobra\442_units\commando_helmet_mk1.p3d";
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
			uniformModel = "kobra\442_units\commando_helmet_mk1.p3d";
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
		model = "kobra\442_units\commando_helmet_mk2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "kobra\442_units\commando_helmet_mk2.p3d";
		};
	};
	class k_commando_helmet_mk3_base: k_commando_helmet_mk1_base
	{
		displayname = "[K] Commando Helmet Mk3";
		model = "kobra\442_units\commando_helmet_mk3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "kobra\442_units\commando_helmet_mk3.p3d";
		};
	};

	class k_p2_helmet_base: k_helmet_base
	{
		displayname = "[K] P2 Helmet";
		model = "kobra\442_units\p2_helmet.p3d";
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
			uniformmodel = "kobra\442_units\p2_helmet.p3d";
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
		model = "kobra\442_units\p1_helmet.p3d";
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
			uniformmodel = "kobra\442_units\p1_helmet.p3d";
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
		model = "kobra\442_units\p1_pilot_helmet.p3d";
		hiddenselections[] = 
		{
			"helmet",
			"visor"
		};
		subItems[] = {"k_nvg_ti"};
		class iteminfo: Iteminfo
		{
			uniformmodel = "kobra\442_units\p1_pilot_helmet.p3d";
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
		model = "kobra\442_units\p1_airborne_helmet.p3d";
		hiddenselections[] = 
		{
			"helmet",
			"visor"
		};
		class iteminfo: Iteminfo
		{
			uniformmodel = "kobra\442_units\p1_airborne_helmet.p3d";
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
		model = "kobra\442_units\arf_helmet.p3d";
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
			uniformmodel = "kobra\442_units\arf_helmet.p3d";
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
		model = "kobra\442_units\p1_airborne_helmet.p3d";
		hiddenselections[] = 
		{
			"helmet",
			"visor"
		};
		class iteminfo: Iteminfo
		{
			uniformmodel = "kobra\442_units\p1_airborne_helmet.p3d";
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
		model = "kobra\442_units\barc_helmet.p3d";
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
			uniformmodel = "kobra\442_units\barc_helmet.p3d";
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
		model = "kobra\442_units\p15_helmet.p3d";
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
			uniformmodel = "kobra\442_units\p15_helmet.p3d";
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
		model = "kobra\442_units\p2_pilot_helmet.p3d";
		hiddenselections[] = 
		{
			"helmet",
			"visor"
		};
		class itemInfo: ItemInfo
		{
			uniformmodel = "kobra\442_units\p2_pilot_helmet.p3d";
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
		model = "kobra\442_units\p2_ab_helmet.p3d";
		hiddenselections[] = 
		{
			"helmet",
			"visor"
		};
		class itemInfo: ItemInfo
		{
			uniformmodel = "kobra\442_units\p2_ab_helmet.p3d";
			hiddenselections[] = 
			{
				"helmet",
				"visor"
			};
		};
	};
    #include "helmet.hpp"

///vests
	class k_vest_base: V_rebreatherB
    {
        author = "Kobra Mod Team";
        displayname = "vest base";
        scope = 0;
        scopecurator = 0;
        scopearsenal = 0;
        allowedSlots[] = {901};
        picture = "\kobra\kobra_core\kobra.paa";
		icon = "\kobra\kobra_core\kobra.paa";
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
                    armor = 1;
                    PassThrough = 1;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 0;
                    PassThrough = 1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 0;
                    passThrough = 1;
                };
            };
        };
    };
	#include "vest_clone.hpp"
	#include "vest_scout.hpp"
};