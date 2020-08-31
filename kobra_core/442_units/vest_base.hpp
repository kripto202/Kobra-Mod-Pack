
	class k_swla_vest_base: V_rebreatherB
	{
		author = "KOBRA Mod Team";
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