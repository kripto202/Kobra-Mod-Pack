class CfgPatches
{
	class swla_44
	{
		author = "kripto202";
		requiredAddons[]={};
		requiredVersion = 0.1;
		units[] = 
		{
			"44_unit",
			"44_mc_unit",
			"44_swla_unit_rifleman_dc15a",
			"44_swla_unit_engineer_dc15a",
			"44_swla_unit_medic_dc15a"

		};
		weapons[]={};
	};
};

class cfgweapons
{
/////////////////uniforms////////////////////
	class k_swla_uniform;
	class UniformItem;
	class k_swla_mc_uniform;
	class 44_swla_uniform: k_swla_uniform
	{
		displayname = "[44] Clone Trooper Uniform";
		scope = 2;
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			containerClass="Supply200";
			mass=40;
			uniformType="Neopren";
			uniformClass="44_swla_unit";
		};
	};
	class 44_swla_uniform_mc: k_swla_mc_uniform
	{
		displayname = "[44] Clone Marshall Commander Uniform";
		scope = 2;
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			containerClass="Supply200";
			mass=40;
			uniformType="Neopren";
			uniformClass="44_swla_mc_unit";
		};
	};

//////////////////helmets//////////////////////
	class k_p2_helmet;
	class k_p15_helmet;
	class k_airborne_helmet;
	class k_p2_pilot_helmet;
	class k_barc_helmet;
	class k_p1_arf_helmet;
	class k_p2_arf_helmet;
	class k_eng_helmet;
	class k_p1_helmet;
	class k_p1_pilot_helmet;
	class k_p1_specops_helmet;
	class k_p2_specops_helmet;
	class k_rex_helmet;
	class k_Scout_Helmet;

	class 44_p2_helmet: k_p2_helmet
	{
		displayname = "[44] P2 Helmet";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionsmaterials[] = 
		{
			"442_clones\data\helmet\p2_helmet\camo1.rvmat",
			"44_swla\data\helmets\p2_helmet_visor.rvmat"
		};
		hiddenselectionstextures[] = 
		{
			"44_swla\data\helmets\44_swla_p2_helmet.paa",
			"442_clones\data\helmet\p2_helmet\visor_co.paa"
		};
	};
	class 44_p15_helmet: k_p15_helmet
	{
		displayname = "[44] P1.5 Helmet";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionsmaterials[] = 
		{
			"442_clones\data\helmet\p15_helmet\camo1.rvmat",
			"44_swla\data\helmets\p15_helmet_visor.rvmat",
			"442_clones\data\helmet\p15_helmet\illum.rvmat"
		};
		hiddenselectionstextures[]=
		{
			"44_swla\data\helmets\44_swla_p15_helmet.paa",
			"442_clones\data\helmet\p15_helmet\visor_co.paa",
			"442_clones\data\helmet\p15_helmet\illum_co.paa"
		};
	};
	class 44_airborne_helmet: k_airborne_helmet
	{
		displayname = "[44] Airborne Helmet";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionstextures[]=
		{
			"44_swla\data\helmets\44_swla_airborne_helmet.paa",
			"442_clones\data\helmet\ab_helmet\visor_co.paa"
		};
		hiddenselectionsmaterials[] = 
		{
			"442_clones\data\helmet\ab_helmet\camo1.rvmat",
			"44_swla\data\helmets\ab_helmet_visor.rvmat"
		};
	};
	class 44_p2_pilot_helmet: k_p2_pilot_helmet
	{
		displayname = "[44] P2 Pilot Helmet";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionsmaterials[] = 
		{
			"442_clones\data\helmet\p2_pilot_helmet\camo1.rvmat",
			"44_swla\data\helmets\p2_pilot_helmet_visor.rvmat"
		};
		hiddenselectionstextures[]=
		{
			"44_swla\data\helmets\44_swla_pilot_helmet.paa",
			"442_clones\data\helmet\p2_pilot_helmet\visor_co.paa"
		};
	};
	class 44_barc_helmet: k_barc_helmet
	{
		displayname = "[44] BARC Helmet";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionstextures[]=
		{
			"44_swla\data\helmets\44_swla_barc_helmet.paa",
			"442_clones\data\helmet\barc_helmet\visor_co.paa"
		};
		hiddenselectionsmaterials[] = 
		{
			"442_clones\data\helmet\barc_helmet\camo1.rvmat",
			"44_swla\data\helmets\barc_helmet_visor.rvmat"
		};
	};
	class 44_p1_arf_helmet: k_p1_arf_helmet
	{
		displayname = "[44] P1 ARF Helmet";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionstextures[]=
		{
			"44_swla\data\helmets\44_swla_arf_helmet.paa",
			"442_clones\data\helmet\arf_helmet\visor_co.paa"
		};
		hiddenselectionsmaterials[] = 
		{
			"442_clones\data\helmet\arf_helmet\camo1.rvmat",
			"44_swla\data\helmets\arf_helmet_visor.rvmat"
		};
	};
	class 44_p2_arf_helmet: k_p2_arf_helmet
	{
		displayname = "[44] P2 ARF Helmet";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\helmets\44_swla_arf_helmet.paa",
			"442_clones\data\helmet\arf_helmet\camo2_co.paa",
			"442_clones\data\helmet\arf_helmet\visor_co.paa"
		};
		hiddenselectionsmaterials[] = 
		{
			"442_clones\data\helmet\arf_helmet\camo1.rvmat",
			"442_clones\data\helmet\arf_helmet\camo2.rvmat",
			"44_swla\data\helmets\arf_helmet_visor.rvmat"
		};
	};
	class 44_eng_helmet: k_eng_helmet
	{
		displayname = "[44] Engineer Helmet";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\helmets\44_swla_engineer_helmet.paa",
			"442_clones\data\helmet\eng_helmet\light_co.paa",
			"442_clones\data\helmet\eng_helmet\visor_co.paa"
		};
		hiddenselectionsmaterials[] = 
		{
			"442_clones\data\helmet\eng_helmet\camo1.rvmat",
			"442_clones\data\helmet\eng_helmet\light.rvmat",
			"44_swla\data\helmets\eng_helmet_visor.rvmat"
		};
	};
	class 44_p1_helmet: k_p1_helmet
	{
		displayname = "[44] P1 Helmet";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\helmets\44_swla_p1_helmet.paa",
			"442_clones\data\helmet\p1_helmet\visor_co.paa",
			"442_clones\data\helmet\p1_helmet\illum_co.paa"
		};
		hiddenselectionsmaterials[] = 
		{
			"442_clones\data\helmet\p1_helmet\camo1.rvmat",
			"44_swla\data\helmets\p1_helmet_visor.rvmat",
			"442_clones\data\helmet\p1_helmet\illum.rvmat"
		};
	};
	class 44_p1_pilot_helmet: k_p1_pilot_helmet
	{
		displayname = "[44] P1 Pilot Helmet";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\helmets\44_swla_p1_pilot_helmet.paa",
			"44_swla\data\helmets\44_swla_p1_pilot_lifesupport.paa",
			"442_clones\data\helmet\p1_pilot_helmet\visor_co.paa"
		};
		hiddenselectionsmaterials[] = 
		{
			"442_clones\data\helmet\p1_pilot_helmet\camo1.rvmat",
			"442_clones\data\helmet\p1_pilot_helmet\camo2.rvmat",
			"44_swla\data\helmets\p1_pilot_helmet_visor.rvmat"
		};
	};
	class 44_p1_specop_helmet: k_p1_specops_helmet
	{
		displayname = "[44] P1 SpecOp Helmet";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\helmets\44_swla_p1_spec_helmet.paa",
			"442_clones\data\helmet\p1_spec_helmet\visor_co.paa"
		};
		hiddenselectionsmaterials[] = 
		{
			"442_clones\data\helmet\p1_spec_helmet\camo1.rvmat",
			"44_swla\data\helmets\p1_spec_helmet_visor.rvmat"
		};
	};
	class 44_p2_specop_helmet: k_p2_specops_helmet
	{
		displayname = "[44] P2 SpecOp Helmet";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\helmets\44_swla_p2_spec_helmet.paa",
			"442_clones\data\helmet\p2_spec_helmet\visor_co.paa"
		};
		hiddenselectionsmaterials[] = 
		{
			"442_clones\data\helmet\p2_spec_helmet\camo1.rvmat",
			"44_swla\data\helmets\p2_spec_helmet_visor.rvmat"
		};
	};
	class 44_rex_helmet: k_rex_helmet
	{
		displayname = "[44] P2 Rex Helmet";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\helmets\44_swla_rex_helmet.paa",
			"442_clones\data\helmet\rex_helmet\visor_co.paa"
		};
		hiddenselectionsmaterials[] = 
		{
			"442_clones\data\helmet\rex_helmet\camo1.rvmat",
			"44_swla\data\helmets\rex_helmet_visor.rvmat"
		};
	};
	class 44_scout_helmet: k_Scout_Helmet
	{
		displayname = "[44] Scout Helmet";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\helmets\44_scout_helmet.paa",
			"442_clones\data\helmet\scout_helmet\visor_co.paa"
		};
		hiddenselectionsmaterials[] = 
		{
			"442_clones\data\helmet\scout_helmet\camo1.rvmat",
			"44_swla\data\helmets\scout_helmet_visor.rvmat"
		};
	};
	class 44_scout_helmet_dukas: 44_scout_helmet
	{
		displayname = "[44] Dukas Scout Helmet";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionstextures[] =
		{
			"44_swla\data\helmets\dukas_scout_helmet.paa",
			"442_clones\data\helmet\scout_helmet\visor_co.paa",
		};
	};
/////////vests/////////
	class V_rebreatherB;
	class 44_swla_vest_base: V_rebreatherB
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
	class 44_swla_vest: 44_swla_vest_base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
	};

	class 44_swla_airborne_vest_1: 44_swla_airborne_vest_base
	{
		displayname = "[44] Clone trooper airborne vest 1";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\vests\44_vest_2_1.paa",
			"",
			"44_swla\data\vests\44_vest_2_1.paa",
		};
	};
	class 44_swla_airborne_vest_2: 44_swla_airborne_vest_1
	{
		displayname = "[44] Clone trooper airborne vest 2";
		hiddenselectionstextures[] = 
		{
			"44_swla\data\vests\44_vest_2_2.paa",
			"",
			"44_swla\data\vests\44_vest_2_2.paa",
		};
	};
	class 44_swla_airborne_nco_vest_1: 44_swla_airborne_vest_1
	{
		displayname = "[44] Clone trooper airborne NCO vest 1";
		hiddenselectionstextures[] = 
		{
			"44_swla\data\vests\44_vest_2_1.paa",
			"",
			"44_swla\data\vests\44_vest_2_1.paa",
			"44_swla\data\vests\44_vest_2_1.paa",
		};
	};
	class 44_swla_airborne_nco_vest_2: 44_swla_airborne_vest_1
	{
		displayname = "[44] Clone trooper airborne NCO vest 2";
		hiddenselectionstextures[] = 
		{
			"44_swla\data\vests\44_vest_2_2.paa",
			"",
			"44_swla\data\vests\44_vest_2_2.paa",
			"44_swla\data\vests\44_vest_2_2.paa",
		};
	};

	class 44_swla_medic_vest: 44_swla_medic_vest_base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\vests\44_vest_2_m.paa"
		};
	};

	class 44_swla_cfr_vest: 44_swla_cfr_vest_base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\vests\44_vest_2_1.paa"
		};
	};

	class 44_swla_recon_vest_1: 44_swla_recon_vest_base
	{
		displayname = "[44] Clone trooper Recon vest 1";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\vests\44_vest_2_1.paa",
			"",
			"44_swla\data\vests\44_vest_2_1.paa",
		};
	};

	class 44_swla_arc_plate: 44_swla_arc_vest_base
	{
		displayname = "[44] Clone trooper arc plates";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\vests\44_arc_vest.paa",
		};
	};

	class 44_swla_assault_vest_1: 44_swla_assault_vest_base
	{
		displayname = "[44] Clone trooper assault vest 1";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenselectionstextures[] = 
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"44_swla\data\vests\44_vest_2_1.paa",
		};
	};

	class 44_swla_grenadier_vest_1: 44_swla_grenadier_vest_base
	{
		displayname = "[44] Clone trooper grenadier vest 1";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenselectionstextures[] = 
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"44_swla\data\vests\44_vest_2_1.paa",
		};
	};

	class 44_swla_specialist_vest_1: 44_swla_specialist_vest_base
	{
		displayname = "[44] Clone trooper specialist vest 1";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenselectionstextures[] = 
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"44_swla\data\vests\44_vest_2_1.paa",
		};
	};

	class 44_swla_airborne_cfr_vest_1: 44_swla_airborne_cfr_vest_base
	{
		displayname = "[44] Clone airborne CFR vest 1";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\vests\44_vest_2_1.paa",
			"44_swla\data\vests\44_vest_2_1.paa",
			"44_swla\data\vests\44_vest_2_1.paa",
			"44_swla\data\vests\44_vest_2_1.paa",
		};
	};
	class 44_swla_airborne_cfr_vest_2: 44_swla_airborne_cfr_vest_base
	{
		displayname = "[44] Clone airborne CFR vest 2";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\vests\44_vest_2_2.paa",
			"44_swla\data\vests\44_vest_2_2.paa",
			"44_swla\data\vests\44_vest_2_2.paa",
			"44_swla\data\vests\44_vest_2_2.paa",
		};
	};

	class 44_swla_airborne_light_vest_1: 44_swla_airborne_light_vest_base
	{
		displayname = "[44] Clone airborne light vest 1";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\vests\44_vest_2_1.paa",
			"44_swla\data\vests\44_vest_2_1.paa",
			"44_swla\data\vests\44_vest_2_1.paa",
			"44_swla\data\vests\44_vest_2_1.paa",
		};
	};
	class 44_swla_airborne_light_vest_2: 44_swla_airborne_light_vest_base
	{
		displayname = "[44] Clone airborne light vest 2";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\vests\44_vest_2_2.paa",
			"44_swla\data\vests\44_vest_2_2.paa",
			"44_swla\data\vests\44_vest_2_2.paa",
			"44_swla\data\vests\44_vest_2_2.paa",
		};
	};

	class 44_swla_arf_vest_1: 44_swla_arf_vest_base
	{
		displayname = "[44] Clone arf vest 1";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"44_swla\data\vests\44_vest_2_1.paa",
			"44_swla\data\vests\44_vest_3_1.paa",
		};
	};

	class 44_swla_heavy_vest_1: 44_swla_heavy_vest_base
	{
		displayname = "[44] Clone heavy vest 1";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\vests\44_vest_2_1.paa",
			"44_swla\data\vests\44_vest_2_1.paa",
			"44_swla\data\vests\44_vest_2_1.paa",
			"",
			"44_swla\data\vests\44_vest_2_1.paa",
		};
	};
	class 44_swla_heavy_vest_2: 44_swla_heavy_vest_base
	{
		displayname = "[44] Clone heavy vest 2";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\vests\44_vest_2_2.paa",
			"44_swla\data\vests\44_vest_2_2.paa",
			"44_swla\data\vests\44_vest_2_2.paa",
			"",
			"44_swla\data\vests\44_vest_2_2.paa",
		};
	};

	class 44_swla_heavy_gunner_vest_1: 44_swla_heavy_gunner_vest_base
	{
		displayname = "[44] Clone heavy gunner vest 1";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"44_swla\data\vests\44_vest_2_1.paa",
			"44_swla\data\vests\44_vest_2_1.paa",
			"SWLB_equipment\backpacks\data\bag_co.paa",
			"44_swla\data\vests\44_vest_2_1.paa",
			"44_swla\data\vests\44_vest_2_1.paa",
		};
	};
	class 44_swla_heavy_gunner_vest_2: 44_swla_heavy_gunner_vest_base
	{
		displayname = "[44] Clone heavy gunner vest 2";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"44_swla\data\vests\44_vest_2_2.paa",
			"44_swla\data\vests\44_vest_2_2.paa",
			"SWLB_equipment\backpacks\data\bag_co.paa",
			"44_swla\data\vests\44_vest_2_2.paa",
			"44_swla\data\vests\44_vest_2_2.paa",
		};
	};

	class 44_swla_recon_survival_vest_1: 44_swla_recon_survival_vest_base
	{
		displayName="[44] Clone recon survival vest 1";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\vests\44_vest_2_1.paa",
			"44_swla\data\vests\44_vest_2_1.paa",
			"SWLB_clones\data\light_accessories_co.paa",
			"44_swla\data\vests\44_vest_2_1.paa",
			"44_swla\data\armor\44_swla_mc_upper"
		};
	};

	class 44_swla_force_recon_vest_1: 44_swla_force_recon_vest_base
	{
		displayName="[44] Clone force recon vest 1";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\vests\44_vest_2_1.paa",
			"SWLB_clones\data\light_accessories_co.paa",
		};
	};
	class 44_swla_force_recon_vest_2: 44_swla_force_recon_vest_base
	{
		displayName="[44] Clone force recon vest 2";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\vests\44_vest_2_2.paa",
			"SWLB_clones\data\light_accessories_co.paa",
		};
	};

	class 44_swla_force_recon_nco_vest_1: 44_swla_force_recon_nco_vest_base
	{
		displayName="[44] Clone force recon nco vest 1";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"",
			"44_swla\data\vests\44_vest_2_1.paa",
		};
	};
/////////////////helmet attachaments/////////////////////
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
	class SWLB_clone_nvg;
	class SWLB_clone_nvg_spec;
	class SWLB_clone_nvg_nco;
	class SWLB_clone_nvg_spec_nco;
	class SWLB_clone_rangefinder;
	class SWLB_clone_ccVisor;
	class SWLB_clone_mcVisor;

	class 44_swla_visor_1: 44_clone_nvg_base
	{
		displayname = "[44] Clone NV Visor (NVG)";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\attachments\44_attachments.paa"
		};
	};
	class 44_swla_visor_2: 44_swla_visor_1
	{
		displayname = "[44] Clone NV Visor (TI)";
		visionMode[] = {"Normal", "TI"};
	};

	class 44_swla_visor_nco_1: SWLB_clone_nvg_nco
	{
		displayname = "[44] Clone NCO NV Visor (NVG)";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\attachments\44_attachments.paa",
			"44_swla\data\attachments\44_attachments.paa"
		};
	};
	class 44_swla_visor_nco_2: 44_swla_visor_nco_1
	{
		displayname = "[44] Clone NCO NV Visor (TI)";
		visionMode[] = {"Normal", "TI"};
	};

	class 44_swla_rangefinder_1: 44_clone_rangefinder_base
	{
		displayname = "[44] Clone Rangefinder (NVG)";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\attachments\44_attachments.paa"
		};
	};
	class 44_swla_rangefinder_2: 44_swla_rangefinder_1
	{
		displayname = "[44] Clone Rangefinder (TI)";
		visionMode[] = {"Normal", "TI"};
	};

	class 44_swla_commander_1: 44_clone_commander_visor_base
	{
		displayname = "[44] Clone Commander Visor (NVG)";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\attachments\44_attachments.paa"
		};
	};
	class 44_swla_commander_2: 44_swla_commander_1
	{
		displayname = "[44] Clone Commander Visor (TI)";
		visionMode[] = {"Normal", "TI"};
	};

	class 44_swla_marshal_commander_1: 44_clone_commander_visor_base
	{
		displayname = "[44] Clone Marshal Commander Visor (NVG)";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\attachments\44_attachments.paa",
			"44_swla\data\attachments\44_attachments.paa"
		};
	};
	class 44_swla_marshal_commander_2: 44_swla_marshal_commander_1
	{
		displayname = "[44] Clone Marshal Commander Visor (TI)";
		visionMode[] = {"Normal", "TI"};
	};

	class 44_clone_p1_nvg_1: 44_clone_p1_nvg_base
	{
		displayname = "[44] Clone P1 NV Visor (NVG)";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\attachments\44_attachments.paa"
		};
	};
	class 44_clone_p1_nvg_2: 44_clone_p1_nvg_1
	{
		displayname = "[44] Clone P1 NV Visor (TI)";
		visionMode[] = {"Normal", "TI"};
	};

	class 44_clone_p1_rangefinder_1: 44_clone_p1_rangefinder_base
	{
		displayname = "[44] Clone trooper P1 rangefinder (NVG)";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\attachments\44_attachments.paa"
		};
	};
	class 44_clone_p1_rangefinder_2: 44_clone_p1_rangefinder_1
	{
		displayname = "[44] Clone trooper P1 rangefinder (TI)";
		visionMode[] = {"Normal", "TI"};
	};

};
class cfgvehicles
{
	class k_swla_unit_base;
	class k_swla_unit_mc_base;
	class 44_swla_unit: k_swla_unit_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "kripto202";
		uniformclass = "44_swla_uniform";
		faction = "44_sod";
		editorSubCategory = "swla_44_trooper";
		displayname = "Trooper";
		movesFatigue = "CfgMovesFatigueTrooper";
		backpack = "";
		hiddenselectionstextures[] = 
		{
			"44_swla\data\armor\44_swla_upper",
			"44_swla\data\armor\44_swla_lower",
			"442_clones\data\uniform\mc_uniform\undersuit_co.paa",
		};
		linkedItems[] = 
		{
			"44_p2_helmet",
			"k_swla_vest",
			"tf_anprc152",
			"44_clones_hud_white"
		};
		respawnlinkeditems[] = 
		{
			"44_p2_helmet",
			"k_swla_vest",
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
	};
	class 44_swla_mc_unit: k_swla_unit_mc_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "kripto202";
		uniformclass = "44_swla_uniform_mc";
		faction = "44_sod";
		editorSubCategory = "swla_44_trooper";
		displayname = "Trooper";
		movesFatigue = "CfgMovesFatigueTrooper";
		backpack = "";
		hiddenselectionstextures[] = 
		{
			"44_swla\data\armor\44_swla_mc_upper.paa",
			"44_swla\data\armor\44_swla_mc_lower.paa",
			"442_clones\data\uniform\mc_uniform\undersuit_co.paa",
			"442_clones\data\uniform\mc_uniform\rank_co.paa"
		};
		linkedItems[] = 
		{
			"44_p2_helmet",
			"k_swla_vest",
			"tf_anprc152",
			"44_clones_hud_white"
		};
		respawnlinkeditems[] = 
		{
			"44_p2_helmet",
			"k_swla_vest",
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
	};
	
	class 44_swla_unit_rifleman_dc15a: 44_swla_unit
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "Rifleman (DC-15A)";
		icon = "44_swla\data\ui\icons\icon_rifleman.paa";
		attendant = 0;
		engineer = false;
		canDeactivateMines = false;
		linkedItems[] = 
		{
			"44_swla_vest",
			"44_p2_helmet",
			"442_clones_hud_white",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"44_swla_vest",
			"44_p2_helmet",
			"442_clones_hud_white",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[] = 
		{
			"442_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"442_DC15A",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_DC15A_Mag",
			"442_DC15A_Mag",
			"442_DC15A_Mag",
			"442_DC15A_Mag",
			"442_DC15A_Mag",
			"SWLW_beltGrenade_mag",
			"SWLW_beltGrenade_mag",
			"SWLW_beltGrenade_mag",
			"SWLW_beltGrenade_mag",
			"SWLW_beltGrenade_mag",
			"SWLW_beltGrenade_mag",
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
		respawnMagazines[] = 
		{
			"442_DC15A_Mag",
			"442_DC15A_Mag",
			"442_DC15A_Mag",
			"442_DC15A_Mag",
			"442_DC15A_Mag",
			"SWLW_beltGrenade_mag",
			"SWLW_beltGrenade_mag",
			"SWLW_beltGrenade_mag",
			"SWLW_beltGrenade_mag",
			"SWLW_beltGrenade_mag",
			"SWLW_beltGrenade_mag",
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
		Items[] = 
		{
			"442_swla_visor_1",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_ElasticBandage",
			"ACE_ElasticBandage",
			"ACE_ElasticBandage",
			"ACE_ElasticBandage",
			"ACE_ElasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_touriquet",
			"ACE_epinephrine",
			"ACE_morphine"
		};
		respawnItems[] = 
		{
			"442_swla_visor_1",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_ElasticBandage",
			"ACE_ElasticBandage",
			"ACE_ElasticBandage",
			"ACE_ElasticBandage",
			"ACE_ElasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_touriquet",
			"ACE_epinephrine",
			"ACE_morphine"
		};
	};

	class 44_swla_unit_engineer_dc15a: 44_swla_unit_rifleman_dc15a
	{
		displayname = "Engineer (DC15A)";
		icon = "44_swla\data\ui\icons\icon_engineer.paa";
		engineer = true;
		candeactivatemine = true;
	};
	class 44_swla_unit_medic_dc15a: 44_swla_unit_rifleman_dc15a
	{
		displayname = "Medic (DC15A)";
		icon = "44_swla\data\ui\icons\icon_medic.paa";
		attendant = 1;
	};

	class k_clone_backpack;
	class k_clone_backpack_med;
	class k_clone_backpack_heavy;
	class k_clone_backpack_medic;
	class k_clone_backpack_medic_med;
	class k_clone_backpack_radio;
	class k_clone_backpack_radio_med;
	class k_clone_backpack_rocket;

	class 44_clone_backpack: k_clone_backpack
	{
		displayname = "[44] Clone Trooper Backpack";
		scope = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\backpacks\44_swla_backpack.paa",
			"442_clones\data\backpack\cover_co.paa",
		};
	};
	class 44_clone_backpack_med: k_clone_backpack_med
	{
		displayname = "[44] Clone Trooper Medium Backpack";
		scope = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\backpacks\44_swla_backpack.paa",
			"442_clones\data\backpack\cover_co.paa",
			"442_clones\data\backpack\pouches_co.paa",
		};
	};
	class 44_clone_backpack_heavy: k_clone_backpack_heavy
	{
		displayname = "[44] Clone Trooper Heavy Backpack";
		scope = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\backpacks\44_swla_backpack.paa",
			"442_clones\data\backpack\cover_co.paa",
			"442_clones\data\backpack\pouches_co.paa",
			"442_clones\data\backpack\tube_co.paa",
		};
	};
	class 44_clone_backpack_medic: k_clone_backpack_medic
	{
		displayname = "[44] Clone Trooper Medic Backpack";
		scope = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\backpacks\44_swla_backpack.paa",
			"442_clones\data\backpack\cover_co.paa",
			"442_clones\data\backpack\medic_co.paa",
			"442_clones\data\backpack\medic_co.paa",
		};
	};
	class 44_clone_backpack_medic_med: k_clone_backpack_medic_med
	{
		displayname = "[44] Clone Trooper Medic Medium Backpack";
		scope = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\backpacks\44_swla_backpack.paa",
			"442_clones\data\backpack\cover_co.paa",
			"442_clones\data\backpack\pouches_co.paa",
			"442_clones\data\backpack\medic_co.paa",
			"442_clones\data\backpack\medic_co.paa",
		};
	};
	class 44_clone_backpack_radio: k_clone_backpack_radio
	{
		displayname = "[44] Clone Trooper Radio Backpack";
		scope = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\backpacks\44_swla_backpack.paa",
			"442_clones\data\backpack\radio_co.paa",
			"442_clones\data\backpack\screen_co.paa",
		};
	};
	class 44_clone_backpack_radio_med: k_clone_backpack_radio_med
	{
		displayname = "[44] Clone Trooper Radio Medium Backpack";
		scope = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\backpacks\44_swla_backpack.paa",
			"442_clones\data\backpack\radio_co.paa",
			"442_clones\data\backpack\screen_co.paa",
			"442_clones\data\backpack\pouches_co.paa",
		};
	};
	class 44_clone_backpack_rocket: k_clone_backpack_rocket
	{
		displayname = "[44] Clone Trooper Rocket Backpack";
		scope = 2;
		hiddenselectionstextures[] = 
		{
			"44_swla\data\backpacks\44_swla_backpack.paa",
			"442_clones\data\backpack\holder_co.paa",
			"442_clones\data\backpack\rocket_co.paa",
			"442_clones\data\backpack\light_co.paa",
			"442_clones\data\backpack\pouches_co.paa",
		};
	};

};
