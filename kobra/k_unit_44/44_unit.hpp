	class 44_swla_unit: k_swla_unit_base
	{
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "Kobra Mod Team Team";
		uniformclass = "44_swla_uniform";
		faction = "44_ab";
		editorSubCategory = "442_trooper";
		displayname = "Trooper";
		movesFatigue = "CfgMovesFatigueTrooper";
		backpack = "";
		hiddenselectionstextures[] = 
		{
			"k_unit_44\data\armor\44_upper_co.paa",
			"k_unit_44\data\armor\44_lower_co.paa",
			"k_unit_ls\data\uniform\mc_uniform\undersuit_co.paa",
		};
		linkedItems[] = {};
		respawnlinkeditems[] = {};
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
		items[] = {};
		respawnitems[] = {};
	};
	class 44_swla_mc_unit: k_swla_unit_mc_base
	{
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "Kobra Mod Team Team";
		uniformclass = "44_swla_uniform_mc";
		faction = "44_sod";
		editorSubCategory = "swla_44_trooper";
		displayname = "Trooper";
		movesFatigue = "CfgMovesFatigueTrooper";
		backpack = "";
		hiddenselectionstextures[] = 
		{
			"k_unit_44\data\armor\44_mc_upper_co.paa",
			"k_unit_44\data\armor\44_mc_lower_co.paa",
			"k_unit_ls\data\uniform\mc_uniform\undersuit_co.paa",
			"k_unit_ls\data\uniform\mc_uniform\rank_co.paa"
		};
		linkedItems[] = {};
		respawnlinkeditems[] = {};
		weapons[] = 
		{
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"Throw",
			"Put"
		};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};
		respawnitems[] = {};
	};

///custom
	class 44_swla_unit_hollen: 44_swla_unit
	{
		uniformclass = "44_swla_uniform_hollen";
		hiddenselectionstextures[] = 
		{
			"k_unit_44\data\custom\hollen\44_upper_co.paa",
			"k_unit_44\data\custom\hollen\44_lower_co.paa",
			"k_unit_ls\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 44_swla_unit_kripto: 44_swla_unit
	{
		uniformclass = "44_swla_uniform_kripto";
		hiddenselectionstextures[] = 
		{
			"k_unit_44\data\custom\kripto\44_upper_co.paa",
			"k_unit_44\data\custom\kripto\44_lower_co.paa",
			"k_unit_ls\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 44_swla_unit_monty: 44_swla_unit
	{
		uniformclass = "44_swla_uniform_monty";
		hiddenselectionstextures[] = 
		{
			"k_unit_44\data\custom\monty\44_upper_co.paa",
			"k_unit_44\data\custom\monty\44_lower_co.paa",
			"k_unit_ls\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 44_swla_unit_rex: 44_swla_unit
	{
		uniformclass = "44_swla_uniform_rex";
		hiddenselectionstextures[] = 
		{
			"k_unit_44\data\custom\rex\44_upper_co.paa",
			"k_unit_44\data\custom\rex\44_lower_co.paa",
			"k_unit_ls\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 44_swla_unit_delta: 44_swla_unit
	{
		uniformclass = "44_swla_uniform_delta";
		hiddenselectionstextures[] = 
		{
			"k_unit_44\data\custom\delta\44_upper_co.paa",
			"k_unit_44\data\custom\delta\44_lower_co.paa",
			"k_unit_ls\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 44_swla_unit_garrus: 44_swla_unit
	{
		uniformclass = "44_swla_uniform_garrus";
		hiddenselectionstextures[] = 
		{
			"k_unit_44\data\custom\garrus\44_upper_co.paa",
			"k_unit_44\data\custom\garrus\44_lower_co.paa",
			"k_unit_ls\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 44_swla_unit_dishonored: 44_swla_unit
	{
		uniformclass = "44_swla_uniform_dishonored";
		hiddenselectionstextures[] = 
		{
			"k_unit_44\data\custom\dishonored\44_swla_upper.paa",
			"k_unit_44\data\custom\dishonored\44_swla_lower.paa",
			"k_unit_ls\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	#include "44_unit_loadout.hpp"