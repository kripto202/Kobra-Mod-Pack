	class VestItem;
	class k_ls_44_vest_base: V_rebreatherB
	{
		author = "Kobra Mod Team";
		displayname = "[44/LS] Clone trooper vest";
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		picture="kobra\kobra_core\kobra.paa";
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
	class k_ls_44_airborne_vest_base: k_ls_44_vest_base
	{
		displayname = "[44/LS] Clone trooper airborne vest";
		picture="kobra\kobra_core\kobra.paa";
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
	class k_ls_44_medic_vest_base: k_ls_44_vest_base
	{
		displayName = "[44/LS] Clone trooper medic vest";
		picture="kobra\kobra_core\kobra.paa";
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
	class k_ls_44_cfr_vest_base: k_ls_44_vest_base
	{
		displayname = "[44/LS] Clone trooper CFR vest";
		picture="kobra\kobra_core\kobra.paa";
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
	class k_ls_44_recon_vest_base: k_ls_44_vest_base
	{
		displayname = "[44/LS] Clone trooper Recon vest";
		picture="kobra\kobra_core\kobra.paa";
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
	class k_ls_44_arc_vest_base: k_ls_44_vest_base
	{
		displayname = "[44/LS] Clone ARC trooper vest";
		picture="kobra\kobra_core\kobra.paa";
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
	class k_ls_44_assault_vest_base: k_ls_44_vest_base
	{
		displayName = "[44/LS] Clone trooper assault vest";
		picture="kobra\kobra_core\kobra.paa";
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
	class k_ls_44_grenadier_vest_base: k_ls_44_vest_base
	{
		displayName="[44/LS] Clone trooper grenadier vest";
		picture="kobra\kobra_core\kobra.paa";
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
	class k_ls_44_specialist_vest_base: k_ls_44_vest_base
	{
		displayName="[44/LS] Clone trooper specialist vest";
		picture="kobra\kobra_core\kobra.paa";
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
	class k_ls_44_kama_vest_base: k_ls_44_vest_base
	{
		displayName="[44/LS] Clone trooper kama";
		picture="kobra\kobra_core\kobra.paa";
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
	class k_ls_44_officer_vest_base: k_ls_44_vest_base
	{
		displayName="[44/LS] Clone trooper officer vest";
		picture="kobra\kobra_core\kobra.paa";
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
	class k_ls_44_commander_vest_base: k_ls_44_vest_base
	{
		displayName="[44/LS] Clone trooper commander vest";
		picture="kobra\kobra_core\kobra.paa";
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
	class k_ls_44_airborne_cfr_vest_base: k_ls_44_vest_base
	{
		displayname = "[44/LS] Clone airborne CFR vest";
		model="\SWLB_CEE\data\SWLB_CEE_Airborne_CFR.p3d";
		picture="kobra\kobra_core\kobra.paa";
		hiddenSelections[]=
		{
			"ammo",
			"camo1",
			"camo2",
			"pauldron"
		};
		hiddenselectionstextures[] = 
		{
			
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
	class k_ls_44_airborne_light_vest_base: k_ls_44_vest_base
	{
		displayname = "[44/LS] Clone airborne light vest";
		model="\SWLB_CEE\data\SWLB_CEE_Airborne_Light.p3d";
		picture="kobra\kobra_core\kobra.paa";
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
	class k_ls_44_airborne_officer_vest_base: k_ls_44_vest_base
	{
		displayName="[44/LS] Clone airborne officer vest";
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
	class k_ls_44_arf_vest_base: k_ls_44_vest_base
	{
		displayName="[44/LS] Clone ARF vest";
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
	class k_ls_44_heavy_vest_base: k_ls_44_vest_base
	{
		displayName="[44/LS] Clone heavy vest";
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
	class k_ls_44_heavy_gunner_vest_base: k_ls_44_vest_base
	{
		displayName="[44/LS] Clone heavy gunner vest";
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
	class k_ls_44_recon_survival_vest_base: k_ls_44_vest_base
	{
		displayName="[44/LS] Clone recon survival vest";
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
	class k_ls_44_force_recon_vest_base: k_ls_44_vest_base
	{
		displayName="[44/LS] Clone force recon vest";
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
	class k_ls_44_force_recon_nco_vest_base: k_ls_44_vest_base
	{
		displayName="[44/LS] Clone force recon nco vest";
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
	class k_ls_44_force_recon_commander_vest_base: k_ls_44_vest_base
	{
		displayName="[44/LS] Clone force recon Commander vest";
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
	class k_ls_44_vest: k_ls_44_vest_base
	{
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
	};

	class k_ls_44_airborne_vest_1: k_ls_44_airborne_vest_base
	{
		displayname = "[44/LS] Clone trooper airborne vest 1";
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
		};
	};
	class k_ls_44_airborne_vest_2: k_ls_44_airborne_vest_1
	{
		displayname = "[44/LS] Clone trooper airborne vest 2";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
			"",
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
		};
	};
	class k_ls_44_airborne_nco_vest_1: k_ls_44_airborne_vest_1
	{
		displayname = "[44/LS] Clone trooper airborne NCO vest 1";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
		};
	};
	class k_ls_44_airborne_nco_vest_2: k_ls_44_airborne_vest_1
	{
		displayname = "[44/LS] Clone trooper airborne NCO vest 2";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
			"",
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
		};
	};

	class k_ls_44_medic_vest: k_ls_44_medic_vest_base
	{
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\vests\44_vest_2_m.paa"
		};
	};

	class k_ls_44_cfr_vest: k_ls_44_cfr_vest_base
	{
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa"
		};
	};

	class k_ls_44_recon_vest_1: k_ls_44_recon_vest_base
	{
		displayname = "[44/LS] Clone trooper Recon vest 1";
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
		};
	};

	class k_ls_44_arc_plate: k_ls_44_arc_vest_base
	{
		displayname = "[44/LS] Clone trooper arc plates";
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\vests\44_arc_vest.paa",
		};
	};

	class k_ls_44_assault_vest_1: k_ls_44_assault_vest_base
	{
		displayname = "[44/LS] Clone trooper assault vest 1";
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
		hiddenselectionstextures[] = 
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
		};
	};

	class k_ls_44_grenadier_vest_1: k_ls_44_grenadier_vest_base
	{
		displayname = "[44/LS] Clone trooper grenadier vest 1";
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
		hiddenselectionstextures[] = 
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
		};
	};

	class k_ls_44_specialist_vest_1: k_ls_44_specialist_vest_base
	{
		displayname = "[44/LS] Clone trooper specialist vest 1";
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
		hiddenselectionstextures[] = 
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
		};
	};

	class k_ls_44_airborne_cfr_vest_1: k_ls_44_airborne_cfr_vest_base
	{
		displayname = "[44/LS] Clone airborne CFR vest 1";
		scope = 1;
		scopearsenal = 1;
		scopeCurator = 1;
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
		};
	};
	class k_ls_44_airborne_cfr_vest_2: k_ls_44_airborne_cfr_vest_base
	{
		displayname = "[44/LS] Clone airborne CFR vest 2";
		scope = 1;
		scopearsenal = 1;
		scopeCurator = 1;
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
		};
	};

	class k_ls_44_airborne_light_vest_1: k_ls_44_airborne_light_vest_base
	{
		displayname = "[44/LS] Clone airborne light vest 1";
		scope = 1;
		scopearsenal = 1;
		scopeCurator = 1;
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
		};
	};
	class k_ls_44_airborne_light_vest_2: k_ls_44_airborne_light_vest_base
	{
		displayname = "[44/LS] Clone airborne light vest 2";
		scope = 1;
		scopearsenal = 1;
		scopeCurator = 1;
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
		};
	};

	class k_ls_44_arf_vest_1: k_ls_44_arf_vest_base
	{
		displayname = "[44/LS] Clone arf vest 1";
		scope = 1;
		scopearsenal = 1;
		scopeCurator = 1;
		hiddenselectionstextures[] = 
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"kobra\k_unit_44\data\vests\44_vest_3_1.paa",
		};
	};

	class k_ls_44_heavy_vest_1: k_ls_44_heavy_vest_base
	{
		displayname = "[44/LS] Clone heavy vest 1";
		scope = 1;
		scopearsenal = 1;
		scopeCurator = 1;
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
		};
	};
	class k_ls_44_heavy_vest_2: k_ls_44_heavy_vest_base
	{
		displayname = "[44/LS] Clone heavy vest 2";
		scope = 1;
		scopearsenal = 1;
		scopeCurator = 1;
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
			"",
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
		};
	};

	class k_ls_44_heavy_gunner_vest_1: k_ls_44_heavy_gunner_vest_base
	{
		displayname = "[44/LS] Clone heavy gunner vest 1";
		scope = 1;
		scopearsenal = 1;
		scopeCurator = 1;
		hiddenselectionstextures[] = 
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"SWLB_equipment\backpacks\data\bag_co.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
		};
	};
	class k_ls_44_heavy_gunner_vest_2: k_ls_44_heavy_gunner_vest_base
	{
		displayname = "[44/LS] Clone heavy gunner vest 2";
		scope = 1;
		scopearsenal = 1;
		scopeCurator = 1;
		hiddenselectionstextures[] = 
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
			"SWLB_equipment\backpacks\data\bag_co.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
		};
	};

	class k_ls_44_recon_survival_vest_1: k_ls_44_recon_survival_vest_base
	{
		displayName="[44/LS] Clone recon survival vest 1";
		scope = 1;
		scopearsenal = 1;
		scopeCurator = 1;
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"SWLB_clones\data\light_accessories_co.paa",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"kobra\k_unit_44\data\armor\44_mc_upper_co.paa"
		};
	};

	class k_ls_44_force_recon_vest_1: k_ls_44_force_recon_vest_base
	{
		displayName="[44/LS] Clone force recon vest 1";
		scope = 1;
		scopearsenal = 1;
		scopeCurator = 1;
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
			"SWLB_clones\data\light_accessories_co.paa",
		};
	};
	class k_ls_44_force_recon_vest_2: k_ls_44_force_recon_vest_base
	{
		displayName="[44/LS] Clone force recon vest 2";
		scope = 1;
		scopearsenal = 1;
		scopeCurator = 1;
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\vests\44_vest_2_2.paa",
			"SWLB_clones\data\light_accessories_co.paa",
		};
	};

	class k_ls_44_force_recon_nco_vest_1: k_ls_44_force_recon_nco_vest_base
	{
		displayName="[44/LS] Clone force recon nco vest 1";
		scope = 1;
		scopearsenal = 1;
		scopeCurator = 1;
		hiddenselectionstextures[] = 
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"",
			"kobra\k_unit_44\data\vests\44_vest_2_1.paa",
		};
	};