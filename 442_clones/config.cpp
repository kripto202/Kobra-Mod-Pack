class CfgPatches{
	class 442_clone{
		author="kripto202";
		requriedaddons[] = {};
		units[]={};
		weapons[]={
			"k_p2_helmet",
			"k_p15_helmet",
			"k_airborne_helmet",
			"k_p2_pilot_helmet",
			"k_barc_helmet",
			"k_arf_p1_helmet",
			"k_arf_p2_helmet",
			"k_eng_helmet",
			"k_p1_helmet",
			"k_p1_pilot_helmet",
			"k_p1_specops_helmet",
			"k_p2_specops_helmet",
			"k_rex_helmet",
			"k_Scout_Helmet"
		};
	};
};
class CfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class HeadgearItem;
	class UniformItem;
	class VestItem;
	class V_rebreatherB;
	class U_I_CombatUniform;
	class Integrated_NVG_F;
	class H_HelmetO_ViperSP_hex_F;
////////////integrated helmet attachments////////////
	class k_nvg: Integrated_NVG_F
	{
		scope=1;
		visionMode[]={
			"Normal",
			"NVG"
		};
		modelOptics="\SWLB_clones\SWLB_clone_nvg_optic_dummy.p3d";
	};
	class k_nvg_ti: Integrated_NVG_F
	{
		scope=1;
		visionMode[]={
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0};
		modelOptics="\SWLB_clones\SWLB_clone_nvg_optic_dummy.p3d";
	};
	class k_ti: Integrated_NVG_F
	{
		scope=1;
		visionMode[] = {
			"Normal",
			"TI"
		};
		thermalMode[]={0};
		modelOptics="\SWLB_clones\SWLB_clone_nvg_optic_dummy.p3d";
	};
//////////uniforms///////////////////
	class k_swla_uniform_base: U_I_CombatUniform
	{
		displayname="Clone Trooper Armor";
		author="kripto202";
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		picture="";
		model="442_clones\base_body_gh"; //model for the ground
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			containerClass="Supply200";
			mass=40;
			uniformType="Neopren";
			uniformClass="k_swla_unit_base";
		};
	};
	class k_swla_uniform_mc_base: U_I_CombatUniform
	{
		author="kripto202";
		scope=0;
		displayName="Clone marshal commander armor";
		picture="";
		model="442_clones\base_body_gh";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="k_swla_mc_unit_base"; //link to unit
			containerClass="Supply200";
			uniformType="Neopren";
			mass=40;
		};
	};

	#include "uniform.hpp"
/////////////helmets////////////////
	class k_helmet_base: H_HelmetO_ViperSP_hex_F
	{
		author = "kripto202";
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
		model = "442_clones\p2_helmet.p3d"; //needs the new model
		class Iteminfo: Iteminfo
		{
			uniformModel = "442_clones\p2_helmet.p3d"; //needs the new model
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
		model = "442_clones\p15_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor",
			"illum"
		};
		class Iteminfo: Iteminfo
		{
			UniformModel = "442_clones\p15_helmet.p3d";
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
		model = "442_clones\ab_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_clones\ab_helmet.p3d";
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
		model = "442_clones\pilot_p2_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_clones\pilot_p2_helmet.p3d";
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
		model = "442_clones\barc_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_clones\barc_helmet.p3d";
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
		model = "442_clones\arf_p1_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};
		class Iteminfo: ItemInfo
		{
			uniformModel = "442_clones\arf_p1_helmet.p3d";
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
		model = "442_clones\arf_p2_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"camo2",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_clones\arf_p2_helmet.p3d";
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
		model = "442_clones\eng_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"illum",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_clones\eng_helmet.p3d";
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
		model = "442_clones\p1_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor",
			"illum"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_clones\p1_helmet.p3d";
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
		model = "442_clones\pilot_p1_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"camo2",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_clones\pilot_p1_helmet.p3d";
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
		model = "442_clones\spec_p1_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_clones\spec_p1_helmet.p3d";
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
		model = "442_clones\spec_p2_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_clones\spec_p2_helmet.p3d";
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
		model = "442_clones\rex_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "442_clones\rex_helmet.p3d";
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
		model="442_clones\scout_helmet.p3d";
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
			uniformModel="442_clones\scout_helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"visor"
			};
		};
	};

	#include "helmet.hpp"
///////////////nvg///////////////

////////////vests//////////////
//relook over the armor values
	class k_swla_vest_base: V_rebreatherB
	{
		author="kripto202";
		displayname="[44] Clone trooper vest";
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_clones\SWLB_clone_basic_armor.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_basic_armor.p3d";
			containerClass="Supply100";
			vesttype="Rebreather";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class k_swla_airborne_vest_base: k_swla_vest_base
	{
		displayname="[K] Clone trooper airborne vest";
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
			containerclass="Supply170";
			mass=100;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"ammo",
				"pauldron"
			};
		};
	};
	class k_swla_medic_vest_base: k_swla_vest_base
	{
		displayName="[K] Clone trooper medic vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_medic_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_medic_armor.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_medic_armor.p3d";
			conatinerclass="Supply150";
			mass=80;
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class k_swla_cfr_vest_base: k_swla_vest_base
	{
		displayname="[K] Clone trooper CFR vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_cfr_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_cfr_armor.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		class Iteminfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_cfr_armor.p3d";
			containerClass="Supply120";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
		};
	};
	class k_swla_recon_vest_base: k_swla_vest_base
	{
		displayname="[K] Clone trooper Recon vest";
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
	class k_swla_arc_vest_base: k_swla_vest_base
	{
		displayname="[K] Clone ARC trooper vest";
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
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class k_swla_assault_vest_base: k_swla_vest_base
	{
		displayName="[K] Clone trooper assault vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_assault_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_assault_armor.p3d";
			containerClass="Supply110";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class k_swla_grenadier_vest_base: k_swla_vest_base
	{
		displayName="[K] Clone trooper grenadier vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_grenadier_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class ItemInfo: ItemInfo
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
	class k_swla_specialist_vest_base: k_swla_vest_base
	{
		displayName="[K] Clone trooper specialist vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_specialist_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class Iteminfo: ItemInfo
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
	class k_swla_kama_vest_base: k_swla_vest_base
	{
		displayName="[K] Clone trooper kama";
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
	class k_swla_lieutenant_vest_base: k_swla_vest_base
	{
		displayname = "[K] Clone Trooper Lieutenant Vest";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";
		model = "\SWLB_clones\SWLB_clone_lieutenant_armor.p3d";
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"\SWLB_clones\data\officer_accessories_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_lieutenant_armor.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=5;
					passThrough=0.30000001;
				};
			};
		};
	};
	class k_swla_officer_vest_base: k_swla_vest_base
	{
		displayName="[K] Clone trooper officer vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_officer_armor.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_officer_armor.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class k_swla_commander_vest_base: k_swla_vest_base
	{
		displayName="[K] Clone trooper commander vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_commander_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_commander_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"rank"
		};
		class Iteminfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_commander_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"rank"
			};
		};
	};
	
	class k_swla_airborne_cfr_vest_base: k_swla_vest_base
	{
		displayname="[K] Clone airborne CFR vest";
		model="\SWLB_CEE\data\SWLB_CEE_Airborne_CFR.p3d";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_airborne_armor_ca.paa";
		hiddenSelections[]=
		{
			"ammo",
			"camo1",
			"camo2",
			"pauldron"
		};
		class Iteminfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Airborne_CFR.p3d";
			containerclass="Supply150";
			hiddenSelections[]=
			{
				"ammo",
				"camo1",
				"camo2",
				"pauldron"
			};
		};
	};
	class k_swla_airborne_light_vest_base: k_swla_vest_base
	{
		displayname="[K] Clone airborne light vest";
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
	class k_swla_airborne_officer_vest_base: k_swla_vest_base
	{
		displayName="[K] Clone airborne officer vest";
		model="\SWLB_CEE\data\SWLB_CEE_Airborne_Officer.p3d";
		hiddenSelections[]=
		{
			"ammo",
			"camo1",
			"camo2",
			"camo3",
			"pauldron"
		};
		class Iteminfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Airborne_Officer.p3d";
			containerclass="Supply150";
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
	class k_swla_arf_vest_base: k_swla_vest_base
	{
		displayName="[K] Clone ARF vest";
		model="\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		class Iteminfo: ItemInfo
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
	class k_swla_heavy_vest_base: k_swla_vest_base
	{
		displayName="[K] Clone heavy vest";
		model="\SWLB_CEE\data\SWLB_CEE_Heavy_Vest.p3d";
		hiddenSelections[]=
		{
			"ammo",
			"camo1",
			"camo2",
			"camo3",
			"pauldron"
		};
		class Iteminfo: ItemInfo
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
	class k_swla_heavy_gunner_vest_base: k_swla_vest_base
	{
		displayName="[K] Clone heavy gunner vest";
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
		class Iteminfo: ItemInfo
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
	class k_swla_eng_vest_base: k_swla_vest_base
	{
		displayName="[K] Clone engineer vest";
		model="\SWLB_CEE\data\SWLB_CEE_Engineer_Vest.p3d";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_Engineer_Vest.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Engineer_Vest.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
		};
	};
	class k_swla_eng_nco_vest_base: k_swla_vest_base
	{
		displayName="Clone engineer NCO vest";
		model="\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_NCO.p3d";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_NCO.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
			"SWLB_clones\data\officer_accessories_co.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
			"SWLB_CEE\data\SWLB_CEE_Engineer_Base.paa",
			"SWLB_clones\data\arc_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_NCO.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
			    "camo3",
			    "camo4",
			    "camo5",
			    "camo6",
			};
			mass=80;
		};
	};
	class k_swla_eng_officer_vest_base: k_swla_vest_base
	{
		displayName="Clone engineer officer vest";
		model="\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_Officer.p3d";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_Officer.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_Officer.p3d";
			containerClass="Supply100";
			mass=80;
		    hiddenSelections[]=
		    {
				"camo1",
				"camo2",
		    };
		};
	};
	class k_swla_hazard_vest_base: k_swla_vest_base
	{
		displayName="[K] Clone hazard vest";
		model="\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
		};
	};
	class k_swla_tactical_officer_vest_base: k_swla_vest_base
	{
		displayName="[K] Clone tactical officer vest";
		model="\SWLB_CEE\data\SWLB_CEE_Officer_Tactical.p3d";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_Officer_Tactical.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class Iteminfo: Iteminfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Officer_Tactical.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
		};
	};
	class k_swla_tactical_commander_vest_base: k_swla_vest_base
	{
		displayName="[K] Clone tactical commander vest";
		model="\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
		    "pauldron",
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\officer_accessories_co.paa",
			"SWLB_clones\data\light_accessories_co.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
			containerClass="Supply100";
			mass = 80;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"pauldron",
			};
		};
	};
	class k_swla_recon_survival_vest_base: k_swla_vest_base
	{
		displayName="[K] Clone recon survival vest";
		model="\SWLB_CEE\data\SWLB_CEE_Recon_Survival.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		class Iteminfo: ItemInfo
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
	class k_swla_force_recon_vest_base: k_swla_vest_base
	{
		displayName="[K] Clone force recon vest";
		model="\SWLB_CEE\data\SWLB_CEE_Force_Recon.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class Iteminfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Force_Recon.p3d";
			containerclass="Supply120";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class k_swla_force_recon_nco_vest_base: k_swla_vest_base
	{
		displayName="[K] Clone force recon nco vest";
		model="\SWLB_CEE\data\SWLB_CEE_Recon_Force_Officer.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Recon_Force_Officer.p3d";
			containerclass="Supply120";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class k_swla_force_recon_officer_vest_base: k_swla_vest_base
	{
		displayname = "[K] Clone Force Recon Officer Vest";
		model = "\SWLB_CEE\data\SWLB_CEE_Recon_Force_Officer.p3d";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_Recon_Force_Officer.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\SWLB_CEE\data\SWLB_CEE_Recon_Force_Officer.p3d";
			containerclass = "Supply100";
			mass = 80;
			hiddenselections[] = 
			{
				"camo1",
				"camo2"
			};
		};
	};
	class k_swla_force_recon_commander_vest_base: k_swla_vest_base
	{
		displayName="[K] Clone force recon Commander vest";
		model="\SWLB_CEE\data\SWLB_CEE_Recon_Force_Commander.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Recon_Force_Commander.p3d";
			containerclass="Supply120";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"
			};
		};
	};
	#include "vest.hpp"
};

class CfgVehicles
{
	class SWLB_clone_base_P2;
	class B_Soldier_base_F;
	class B_Soldier_02_f;
//////////////////units///////////////////////
	class k_swla_unit_base: B_Soldier_02_f
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		model="442_clones\base_body.p3d";
		editorPreview="";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		role="Rifleman";
		author="kripto202";
		uniformclass="k_swla_uniform_base";
		faction="kobra";
		editorSubCategory="swla_44_trooper";
		displayname="Trooper";
		movesFatigue="CfgMovesFatigueTrooper";
		backpack="";
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"undersuit",
			"insignia"
		};
		hiddenselectionsTextures[]=
		{
			"442_clones\data\uniform\uniform\camo1_co.paa",
			"442_clones\data\uniform\uniform\camo2_co.paa",
			"442_clones\data\uniform\mc_uniform\undersuit_co.paa",
		};
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
	class k_swla_unit_mc_base: k_swla_unit_base
	{
		model="442_clones\base_body_mc.p3d";
		uniformclass="k_swla_uniform_mc_base";
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"undersuit",
			"rank",
			"insignia"
		};
		hiddenselectionsTextures[]=
		{
			"442_clones\data\uniform\mc_uniform\camo1_co.paa",
			"442_clones\data\uniform\mc_uniform\camo2_co.paa",
			"442_clones\data\uniform\mc_uniform\undersuit_co.paa",
			"442_clones\data\uniform\mc_uniform\rank_co.paa",
		};
	};
/////////////backpacks//////////////////
	class B_Kitbag_rgr;
	class k_swla_clone_bag_base;
	class k_clone_backpack_base: B_Kitbag_rgr
	{
		author = "kripto202";
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
	class k_swla_bag_base: k_clone_backpack_base
	{
		picture = "";
		displayname = "";
		model = "";
		hiddenselections[] = {};
		maximumload = 100;
	};
	#include "backpack.hpp"
};