class cfgpatches
{
    class 442_units
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "k_barracks_unit"
        };
        weapons[] = 
        {
            "k_Scout_Helmet",
            "k_hunter_Helmet",
            "k_crosshair_Helmet",
            "k_wrecker_Helmet",
            "k_tech_Helmet",
            "k_cadet_Helmet",
            "k_desert_Helmet",
            "k_helmet_base",
            "k_Scout_Helmet_base",
            "k_hunter_helmet_base",
            "k_crosshair_helmet_base",
            "k_wrecker_helmet_base",
            "k_tech_helmet_base",
            "k_cadet_helmet_base",
            "k_desert_helmet_base",
        };
    };
};

class cfgvehicles 
{
    class B_Kitbag_rgr;
    class O_officer_F;
    class B_Soldier_02_f;
    class 442_unit_base: B_Soldier_02_f
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		model = "";
		editorPreview="";
		picture = "kobra\kobra_core\kobra.paa"; //this needs to be changed
		//icon = "kobra_core\icons\data\icon_rifleman.paa";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		role="Rifleman";
		side = 1;
		author = "KOBRA Mod Team";
		uniformclass="";
		faction="";
		editorSubCategory="";
		displayname="Trooper";
		movesFatigue="CfgMovesFatigueTrooper";
		backpack="";
		hiddenselections[]={};
		hiddenselectionsTextures[]={};
		hiddenselectionsMaterials[]={};

		linkedItems[]={};
		RespawnlinkedItems[]={};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]={};
		respawnMagazines[]={};
		items[]={};
		respawnitems[]={};
		armor=5;
		armorStructural=8;
		explosionShielding=0.5;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
    class k_clone_backpack_base: B_Kitbag_rgr
	{
		author = "KOBRA Mod Team";
		scope = 0;
		picture = "";
		displayname = "";
		model = "";
		maximumload = 200;
		hiddenselections[] = {};
	};
	class k_clone_rto_backpack_base: k_clone_backpack_base
	{
		maximumload=100;
		picture="";
		displayName="";
		tf_dialog="SWLB_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
	};
    class k_barracks_unit: O_officer_F
	{
		scope = 2;
		displayname = "Trooper (Barracks)";
		//editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		//icon = "kobra_core\icons\data\icon_rifleman.paa";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		uniformclass = "k_barracks_uniform";
		side = 1;
		faction="kobra_b";
		editorSubCategory="442_trooper";
		movesFatigue="CfgMovesFatigueTrooper";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\uniform\Barracks.paa"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		linkedItems[] = 
		{
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
	};
	#include "unit.hpp"
};
class cfgweapons 
{
    class HeadgearItem;
    class H_HelmetO_ViperSP_hex_F;
    class UniformItem;
    class U_I_CombatUniform;
    class vestitem;
	class V_rebreatherB;
	class U_O_OfficerUniform_ocamo;
    class 442_uniform_base: U_I_CombatUniform
	{
		displayname="Clone Trooper Armor";
		author = "KOBRA Mod Team";
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		picture = "kobra\kobra_core\kobra.paa";
		model=""; //model for the ground
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			containerClass="Supply200";
			mass=40;
			uniformType="Neopren";
			uniformClass="";
		};
	};
	class k_barracks_uniform: U_O_OfficerUniform_ocamo
	{
		displayname = "[K] Barracks Uniform";
		author = "KOBRA Mod Team";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		picture = "kobra\kobra_core\kobra.paa";
		class ItemInfo: UniformItem
		{
			uniformmodel = "";
			containerClass = "Supply40";
			mass = 10;
			uniformclass = "k_barracks_unit";
		};
	};
    class 442_vest_base: V_rebreatherB
    {
        author = "Kobra Mod Team";
        displayname = "vest base";
        scope = 0;
        scopecurator = 0;
        scopearsenal = 0;
        allowedSlots[] = {901};
        picture = "";
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
    class k_helmet_base: H_HelmetO_ViperSP_hex_F
	{
		author = "KOBRA Mod Team";
		displayname = "helmet base config";
		picture = "kobra\kobra_core\kobra.paa";
		scope = 0;
		scopecurator = 0;
		scopearsenal = 0;
		ace_hearing_protection = 0.8500002;
		ace_hearing_lowervolume = 0.2;
		//picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenselections[] = {};
		//model = "swlb_clones\swlb_clone_p2_helmet.p3d";
		subItems[] = {};
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
			"Camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="kobra\442_units\hunter_helmet.p3d";
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
		model="kobra\442_units\crosshair_helmet.p3d";
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
			uniformModel="kobra\442_units\crosshair_helmet.p3d";
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
		model="kobra\442_units\wrecker_helmet.p3d";
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
			uniformModel="kobra\442_units\wrecker_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
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
			"Camo1"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="kobra\442_units\tech_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
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
			"Camo1",
			"visor"
		};		
		class ItemInfo: ItemInfo
		{
			uniformModel="kobra\442_units\cadet_helmet.p3d";
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
		model="kobra\442_units\desert_helmet.p3d";
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
			uniformModel="kobra\442_units\desert_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"visor"
			};
		};
	};
    #include "helmet.hpp"
	#include "uniform.hpp"
	#include "vest.hpp"
};