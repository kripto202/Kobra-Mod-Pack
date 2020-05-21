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
	class 44_uniform: k_swla_uniform
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
			uniformClass="44_unit";
		};
	};
	class 44_mc_uniform: k_swla_mc_uniform
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
			uniformClass="44_mc_unit";
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
};
class cfgvehicles
{
	class k_swla_unit_base;
	class k_swla_unit_mc_base;
	class 44_unit: k_swla_unit_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "kripto202";
		uniformclass = "44_uniform";
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
	class 44_mc_unit: k_swla_unit_mc_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "kripto202";
		uniformclass = "44_mc_uniform";
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
