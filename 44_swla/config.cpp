class CfgPatches
{
	class swla_44
	{
		author = "kripto202";
		requiredAddons[]={};
		requiredVersion = 0.1;
		units[] = 
		{
			"44_swla_unit_rifleman_dc15a",
			"44_swla_unit_engineer_dc15a",
			"44_swla_unit_medic_dc15a",
			
			"44_swla_p2_headgear_1",
		};
		weapons[]={};
	};
};

class CfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class HeadgearItem;
	class UniformItem;
	class VestItem;
	class U_I_CombatUniform;
	
	// class SDT_scout_helmet;
	
	class Integrated_NVG_F;
	class 44_nvg: Integrated_NVG_F
	{
		scope = 1;
		visionMode[] = {"Normal", "NVG"};
		modelOptics = "\SWLB_clones\SWLB_clone_nvg_optic_dummy.p3d";
	};
	class 44_nvg_ti: Integrated_NVG_F
	{
		scope = 1;
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {0};
		modelOptics = "\SWLB_clones\SWLB_clone_nvg_optic_dummy.p3d";
	};
	class 44_ti: Integrated_NVG_F
	{
		scope = 1;
		visionMode[] = {"Normal", "TI"};
		thermalMode[] = {0};
		modelOptics = "\SWLB_clones\SWLB_clone_nvg_optic_dummy.p3d";
	};
	
	class 44_swla_uniform_base: U_I_CombatUniform
	{
		displayname = "Clone Trooper Armor";
		author = "kripto202";
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			containerClass = "Supply200";
			mass = 40;
			uniformType = "Neopren";
			uniformClass = "44_swla_unit_base";
		};
	};
	class 44_swla_uniform_mc_base: U_I_CombatUniform
	{
		author="kripto202";
		scope=0;
		displayName="Clone marshal commander armor";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="44_swla_unit_mc_base";
			containerClass="Supply200";
			uniformType = "Neopren";
			mass=40;
		};
	};
	
	class H_HelmetO_ViperSP_hex_F;
	class 44_swla_p2_helmet_base: H_HelmetO_ViperSP_hex_F
	{
		author = "kripto202";
		displayname = "[44] P2 helmet";
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.2;
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenselections[] = 
		{
			"Camo1"
		};
		model="\SWLB_clones\SWLB_clone_P2_helmet.p3d";
		subItems[]={};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\SWLB_clones\SWLB_clone_P2_helmet.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={0,1,2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=12;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=8;
					passThrough=0.5;
				};
			};
		};
	};
	class 44_swla_p15_helmet_base: 44_swla_p2_helmet_base
	{
		author = "kripto202";
		displayname = "[44] Clone ARC trooper helmet";
		subItems[] = {};
		model="\SWLB_clones\SWLB_clone_P15_helmet.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_P15_helmet.p3d";
		};
	};
	class 44_swla_airborne_helmet_base: 44_swla_p2_helmet_base
	{
		author = "kripto202";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_ab_helmet_ca.paa";
		displayname = "[44] Clone trooper airborne helmet";
		subItems[] = {"44_nvg"};
		model="\SWLB_clones\SWLB_clone_AB_helmet.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_AB_helmet.p3d";
		};
	};
	class 44_swla_pilot_helmet_base: 44_swla_p2_helmet_base
	{
		author = "kripto202";
		displayname = "[44] Clone pilot P2 helmet";
		subItems[] = {"44_nvg"};
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0.5;
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_pilot_P2_helmet_ca.paa";
		class ItemInfo: ItemInfo
		{
			mass = 20;
			uniformModel="\SWLB_clones\SWLB_clone_pilot_P2_helmet.p3d";
		};
	};
	class 44_swla_barc_helmet_base: 44_swla_p2_helmet_base
	{
		author = "kripto202";
		displayname = "[44] Clone trooper BARC helmet";
		model="\SWLB_clones\SWLB_clone_BARC_helmet.p3d";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_barc_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_BARC_helmet.p3d";
		};
	};
	class 44_swla_arf_helmet_base: 44_swla_p2_helmet_base
	{
		author = "kripto202";
		displayname = "[44] Clone trooper ARF helmet";
		subItems[] = {"44_nvg"};
		model="\SWLB_clones\SWLB_clone_ARF_helmet.p3d";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_arf_p1_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_ARF_helmet.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
			};
		};
	};
	class 44_swla_eng_helmet_base: 44_swla_p2_helmet_base
	{
		author = "kripto202";
		displayname = "[44] Clone trooper engineer helmet";
		subItems[] = {"44_nvg"};
		hiddenSelections[]=
		{
			"camo1",
			"illum"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_eng_helmet.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"illum"
			};
		};
	};
	class 44_swla_p1_helmet_base: 44_swla_p2_helmet_base
	{
		author = "kripto202";
		displayname = "[44] Clone trooper P1 helmet";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_p1_ca.paa";
		model="\SWLB_clones\SWLB_clone_P1_helmet.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_P1_helmet.p3d";
		};
	};
	class 44_swla_p1_pilot_helmet_base: 44_swla_p2_helmet_base
	{
		author = "kripto202";
		displayname = "[44] Clone trooper P1 pilot helmet";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_p1_ca.paa";
		model="SWLB_CEE\data\SWLB_P1_Pilot_Helmet.p3d";
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0.5;
		subItems[] = {"44_nvg"};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		class ItemInfo: Iteminfo
		{
			uniformModel="SWLB_CEE\data\SWLB_P1_Pilot_Helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
		};
	};
	class 44_swla_p1_specops_helmet_base: 44_swla_p2_helmet_base
	{
		author = "kripto202";
		displayname = "[44] Clone trooper P1 Special Activities Helmet";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_p1_ca.paa";
		model="SWLB_CEE\data\SWLB_P1_SpecOps_Helmet.p3d";
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0;
		subItems[] = {"44_nvg"};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		class ItemInfo: Iteminfo
		{
			mass = 15;
			uniformModel="SWLB_CEE\data\SWLB_P1_SpecOps_Helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
		};
	};
	class 44_swla_p2_specops_helmet_base: 44_swla_p2_helmet_base
	{
		author = "kripto202";
		displayname = "[44] Clone trooper P1 Special Activities Helmet";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_p1_ca.paa";
		model="SWLB_CEE\data\SWLB_P2_SpecOps_Helmet.p3d";
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0;
		subItems[] = {"44_nvg"};
		hiddenSelections[]=
		{
			"Camo1"
		};
		class ItemInfo: Iteminfo
		{
			mass = 15;
			uniformModel="SWLB_CEE\data\SWLB_P2_SpecOps_Helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
		};
	};
	class 44_swla_rex_helmet_base: 44_swla_p2_helmet_base
	{
		author = "kripto202";
		displayname = "[44] Clone trooper Rex Helmet";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_p1_2_ca.paa";
		model="\SWLB_clones\SWLB_clone_P1_2_helmet.p3d";
		class Iteminfo: Iteminfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_P1_2_helmet.p3d";
		};
	};
	
	class V_PlateCarrier1_rgr;
	class 44_swla_vest_base: V_PlateCarrier1_rgr
	{
		author = "kripto202";
		displayname = "[44] Clone trooper vest";
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_clones\SWLB_clone_basic_armor.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_basic_armor.p3d";
			containerClass="Supply100";
			vesttype = "Rebreather";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
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
	class 44_swla_airborne_vest_base: 44_swla_vest_base
	{
		displayname = "[44] Clone trooper airborne vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_airborne_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_airborne_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"ammo",
			"pauldron"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_airborne_armor.p3d";
			containerclass = "Supply170";
			mass = 100;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"ammo",
				"pauldron"
			};
		};
	};
	class 44_swla_medic_vest_base: 44_swla_vest_base
	{
		displayName = "[44] Clone trooper medic vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_medic_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_medic_armor.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_medic_armor.p3d";
			conatinerclass = "Supply150";
			mass = 80;
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class 44_swla_cfr_vest_base: 44_swla_vest_base
	{
		displayname = "[44] Clone trooper CFR vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_cfr_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_cfr_armor.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		class Iteminfo: Iteminfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_cfr_armor.p3d";
			containerClass="Supply120";
			hiddenSelections[] = 
			{
				"camo1"
			};
			mass = 80;
		};
	};
	class 44_swla_recon_vest_base: 44_swla_vest_base
	{
		displayname = "[44] Clone trooper Recon vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_recon_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_recon_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"holster",
			"pauldron"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_recon_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"holster",
				"pauldron"
			};
		};
	};
	class 44_swla_arc_vest_base: 44_swla_vest_base
	{
		displayname = "[44] Clone ARC trooper vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_arc_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_arc_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
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
	class 44_swla_assault_vest_base: 44_swla_vest_base
	{
		displayName = "[44] Clone trooper assault vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_assault_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\SWLB_clones\SWLB_clone_assault_armor.p3d";
			containerClass="Supply110";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class 44_swla_grenadier_vest_base: 44_swla_vest_base
	{
		displayName="[44] Clone trooper grenadier vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_grenadier_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class ItemInfo: Iteminfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_grenadier_armor.p3d";
			containerClass="Supply110";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class 44_swla_specialist_vest_base: 44_swla_vest_base
	{
		displayName="[44] Clone trooper specialist vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_specialist_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class Iteminfo: Iteminfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_specialist_armor.p3d";
			containerClass="Supply110";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class 44_swla_kama_vest_base: 44_swla_vest_base
	{
		displayName="[44] Clone trooper kama";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_kama_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_kama_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"rank"
		};
		class Iteminfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_kama_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"rank"
			};
		};
	};
	class 44_swla_officer_vest_base: 44_swla_vest_base
	{
		displayName="Clone trooper officer vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_officer_armor.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_officer_armor.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class 44_swla_commander_vest_base: 44_swla_vest_base
	{
		displayName="[44] Clone trooper commander vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_commander_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_commander_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"rank"
		};
		class Iteminfo: Iteminfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_commander_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"rank"
			};
		};
	};
	class 44_swla_airborne_cfr_vest_base: 44_swla_vest_base
	{
		displayname = "[44] Clone airborne CFR vest";
		model="\SWLB_CEE\data\SWLB_CEE_Airborne_CFR.p3d";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_airborne_armor_ca.paa";
		hiddenSelections[]=
		{
			"ammo",
			"camo1",
			"camo2",
			"pauldron"
		};
		class Iteminfo: Iteminfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Airborne_CFR.p3d";
			containerclass = "Supply150";
			hiddenSelections[]=
			{
				"ammo",
				"camo1",
				"camo2",
				"pauldron"
			};
		};
	};
	class 44_swla_airborne_light_vest_base: 44_swla_vest_base
	{
		displayname = "[44] Clone airborne light vest";
		model="\SWLB_CEE\data\SWLB_CEE_Airborne_Light.p3d";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_airborne_armor_ca.paa";
		hiddenSelections[]=
		{
			"ammo",
			"camo1",
			"camo2",
			"pauldron"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Airborne_Light.p3d";
			containerClass="Supply150";
			hiddenSelections[]=
			{
				"ammo",
				"camo1",
				"camo2",
				"pauldron"
			};
		};
	};
	class 44_swla_airborne_officer_vest_base: 44_swla_vest_base
	{
		displayName="[44] Clone airborne officer vest";
		model="\SWLB_CEE\data\SWLB_CEE_Airborne_Officer.p3d";
		hiddenSelections[]=
		{
			"ammo",
			"camo1",
			"camo2",
			"camo3",
			"pauldron"
		};
		class Iteminfo: Iteminfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Airborne_Officer.p3d";
			containerclass = "Supply150";
			hiddenSelections[]=
			{
				"ammo",
				"camo1",
				"camo2",
				"camo3",
				"pauldron"
			};
		};
	};
	class 44_swla_arf_vest_base: 44_swla_vest_base
	{
		displayName="Clone ARF vest";
		model="\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		class Iteminfo: Iteminfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
			containerClass="Supply120";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
			};
		};
	};
	class 44_swla_heavy_vest_base: 44_swla_vest_base
	{
		displayName="Clone heavy vest";
		model="\SWLB_CEE\data\SWLB_CEE_Heavy_Vest.p3d";
		hiddenSelections[]=
		{
			"ammo",
			"camo1",
			"camo2",
			"camo3",
			"pauldron"
		};
		class Iteminfo: Iteminfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Heavy_Vest.p3d";
			containerClass="Supply120";
			hiddenSelections[]=
			{
				"ammo",
				"camo1",
				"camo2",
				"camo3",
				"pauldron"
			};
		};
	};
	class 44_swla_heavy_gunner_vest_base: 44_swla_vest_base
	{
		displayName="Clone heavy gunner vest";
		model="\SWLB_CEE\data\SWLB_CEE_Heavy_Gunner_Vest.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"ammo"
		};
		class Iteminfo: Iteminfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Heavy_Gunner_Vest.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"ammo"
			};
		};
	};
	class 44_swla_recon_survival_vest_base: 44_swla_vest_base
	{
		displayName="Clone recon survival vest";
		model="\SWLB_CEE\data\SWLB_CEE_Recon_Survival.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		class Iteminfo: Iteminfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Recon_Survival.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"
			};
		};
	};
	class 44_swla_force_recon_vest_base: 44_swla_vest_base
	{
		displayName="Clone force recon vest";
		model="\SWLB_CEE\data\SWLB_CEE_Force_Recon.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class Iteminfo: Iteminfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Force_Recon.p3d";
			containerclass = "Supply120";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class 44_swla_force_recon_nco_vest_base: 44_swla_vest_base
	{
		displayName="Clone force recon nco vest";
		model="\SWLB_CEE\data\SWLB_CEE_Recon_Force_Officer.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		class ItemInfo: Iteminfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Recon_Force_Officer.p3d";
			containerclass = "Supply120";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class 44_swla_force_recon_commander_vest_base: 44_swla_vest_base
	{
		displayName="Clone force recon Commander vest";
		model="\SWLB_CEE\data\SWLB_CEE_Recon_Force_Commander.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		class ItemInfo: Iteminfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Recon_Force_Commander.p3d";
			containerclass = "Supply120";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"
			};
		};
	};
	
	class NVGoggles;
	class 44_clone_nvg_base: NVGoggles
	{
		ace_nightvision_bluRadius = 0.15;
		ace_nightvision_generation = 4;
		scope = 0;
		author = "kripto202";
		displayname = "[44] Clone Trooper NV Visor";
		modeloptics = "\SWLB_clones\SWLB_clone_nvg_optic_dummy.p3d";
		model="\SWLB_clones\SWLB_clone_nvg_on.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_nvg_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		thermalMode[]={0};
		class ItemInfo
		{
			type=616;
			uniformModel="\SWLB_clones\SWLB_clone_nvg_on.p3d";
			modelOff="\SWLB_clones\SWLB_clone_nvg_off.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class 44_clone_rangefinder_base: 44_clone_nvg_base
	{
		displayname = "[44] Clone trooper rangefinder";
		model="\SWLB_clones\SWLB_clone_rangefinder_off.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_rangefinder_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_rangefinder_on.p3d";
			modelOff="\SWLB_clones\SWLB_clone_rangefinder_off.p3d";
			mass = 10;
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class 44_clone_commander_visor_base: 44_clone_nvg_base
	{
		displayName="[44] Clone trooper commander visor";
		model="\SWLB_clones\SWLB_clone_ccVisor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_ccVisor_ca.paa";
		class Iteminfo: Iteminfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_ccVisor.p3d";
			modelOff="\SWLB_clones\SWLB_clone_ccVisor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class 44_clone_p1_nvg_base: 44_clone_nvg_base
	{
		displayname = "[44] Clone Trooper P1 NV Visor";
		model="\SWLB_CEE\data\SWLB_CEE_P1_Visor_On.p3d";
		class Iteminfo: Iteminfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_P1_Visor_On.p3d";
			modelOff="\SWLB_CEE\data\SWLB_CEE_P1_Visor_Off.p3d";
		};
	};
	class 44_clone_p1_rangefinder_base: 44_clone_rangefinder_base
	{
		displayname = "[44] Clone trooper rangefinder";
		model="\SWLB_CEE\data\SWLB_CEE_P1_Rangefinder_Off.p3d";
		class Iteminfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_P1_Rangefinder_On.p3d";
			modelOff="\SWLB_CEE\data\SWLB_CEE_P1_Rangefinder_Off.p3d";
		};
	};
	
	
	#include "vest.hpp"
	#include "helmet.hpp"
	#include "uniform.hpp"
	#include "attachment.hpp"
	//#include "scout_helmet.hpp"
	
};
class CfgVehicles
{
	class SWLB_clone_base_P2;
	/* class 44_swla_unit_base: SWLB_clone_base_P2
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		model = "\SWLB_clones\SWLB_clone_uniform.p3d";
		author = "kripto202";
		uniformclass = "44_swla_uniform_base";
		faction = "44_sod";
		editorSubCategory = "swla_44_trooper";
		displayname = "Trooper";
		movesFatigue = "CfgMovesFatigueTrooper";
		backpack = "";
		hiddenselections[] = 
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenselectionsTextures[]=
		{
			"",
			""
		};
		linkedItems[] = 
		{
			"<helmet>",
			"<vest>",
			"<NVG>",
			"tf_anprc152",
			"44_clones_hud_white"
		};
		RespawnlinkedItems[] = 
		{
			"<helmet>",
			"<vest>",
			"<NVG>",
			"tf_anprc152",
			"44_clones_hud_white"
		};
		weapons[]=
		{
			"442_DC15S",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"442_DC15S",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = 
		{
			"ACE_EarPlugs",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_elsasticBandage",
			"ACE_elsasticBandage",
			"ACE_elsasticBandage",
			"ACE_elsasticBandage",
			"ACE_elsasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot"
		};
		respawnitems[] = 
		{
			"ACE_EarPlugs",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_elsasticBandage",
			"ACE_elsasticBandage",
			"ACE_elsasticBandage",
			"ACE_elsasticBandage",
			"ACE_elsasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot"
		};
		class HitPoints
		{
			class ACE_HDBracket
			{
				armor = 1;
				depends = "HitHead";
				explosionShielding = 1;
				minimalhit = 0;
				material = -1;
				name = "head";
				passthrough = 0;
				radius = 1;
				visual = "";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0 )) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passthrough = 1;
				radius = 0;
				visual = "";
			};
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 3;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 3;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 3;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name = "leg_r";
			};
		};
		armor = 2;
		armorStructural = 3;
		explosionShielding = 0.3;
		minTotalDamageThreshold = 0.001;
		impactDamageMultiplier = 0.5;
	}; */
	class B_Soldier_base_F;
	class B_Soldier_02_f;
	class 44_swla_unit_base: B_Soldier_02_f
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		model = "\SWLB_clones\SWLB_clone_uniform.p3d";
		
		editorPreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		
		author = "kripto202";
		uniformclass = "44_swla_uniform_base";
		faction = "44_sod";
		editorSubCategory = "swla_44_trooper";
		displayname = "Trooper";
		movesFatigue = "CfgMovesFatigueTrooper";
		backpack = "";
		hiddenselections[] = 
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenselectionsTextures[]=
		{
			"",
			""
		};
		linkedItems[] = 
		{
			"<helmet>",
			"<vest>",
			"<NVG>",
			"tf_anprc152",
			"44_clones_hud_white"
		};
		RespawnlinkedItems[] = 
		{
			"<helmet>",
			"<vest>",
			"<NVG>",
			"tf_anprc152",
			"44_clones_hud_white"
		};
		weapons[]=
		{
			"442_DC15S",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"442_DC15S",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"442_DC15S_Mag",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = 
		{
			"ACE_EarPlugs",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_elsasticBandage",
			"ACE_elsasticBandage",
			"ACE_elsasticBandage",
			"ACE_elsasticBandage",
			"ACE_elsasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot"
		};
		respawnitems[] = 
		{
			"ACE_EarPlugs",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_elsasticBandage",
			"ACE_elsasticBandage",
			"ACE_elsasticBandage",
			"ACE_elsasticBandage",
			"ACE_elsasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot"
		};
		armor = 5;
		armorStructural = 8;
		explosionShielding = 0.5;
		minTotalDamageThreshold = 0.001;
		impactDamageMultiplier = 0.5;
	};
	class 44_swla_mc_unit_base: 44_swla_unit_base
	{
		model="\SWLB_clones\SWLB_clone_mc_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"biceps",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\mc_camo1_co.paa",
			"SWLB_clones\data\camo2_co.paa",
			"SWLB_clones\data\mc_camo1_co.paa",
			"SWLB_clones\data\rank_co.paa"
		};
		editorPreview="\SWLB_clones\data\ui\editorPreviews\SWLB_clone_marshal_commander_base_P2.jpg";
		uniformClass="44_swla_uniform_mc_base";
	};
	
	class B_Kitbag_rgr;
	class 44_swla_clone_backpack_base: B_Kitbag_rgr
	{
		author = "kripto202";
		scope = 0;
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		displayName="[44] Clone trooper backpack";
		model="\SWLB_equipment\backpacks\SWLB_clone_backpack.p3d";
		maximumload = 200;
		hiddenSelections[]=
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO"
		};
	};
	class 44_swla_clone_rto_backpack_base: 44_swla_clone_backpack_base
	{
		maximumload = 100;
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_RTO_ca.paa";
		displayName="[44] Clone trooper RTO backpack";
		tf_dialog="SWLB_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
	};
	class 44_swla_clone_bag_base: 44_swla_clone_backpack_base
	{
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_bag_ca.paa";
		displayName="[44] Clone trooper bags";
		model="\SWLB_equipment\backpacks\SWLB_clone_bag.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		maximumload = 100;
	};
	
	#include "p2_unit.hpp"
	// #include "p1_unit.hpp"
	#include "backpack.hpp"
	#include "item_helmet.hpp"
};
