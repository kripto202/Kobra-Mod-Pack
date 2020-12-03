	class 44_swla_unit: k_swla_unit_base
	{
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
		editorpreview = "";
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
			"kobra\k_unit_44\data\armor\44_upper_co.paa",
			"kobra\k_unit_44\data\armor\44_lower_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
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
			"kobra\k_unit_44\data\armor\44_mc_upper_co.paa",
			"kobra\k_unit_44\data\armor\44_mc_lower_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
			""
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
			"kobra\k_unit_44\data\custom\hollen\44_upper_co.paa",
			"kobra\k_unit_44\data\custom\hollen\44_lower_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class 44_swla_unit_kripto: 44_swla_unit
	{
		uniformclass = "44_swla_uniform_kripto";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\kripto\44_upper_co.paa",
			"kobra\k_unit_44\data\custom\kripto\44_lower_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class 44_swla_unit_monty: 44_swla_unit
	{
		uniformclass = "44_swla_uniform_monty";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\monty\44_upper_co.paa",
			"kobra\k_unit_44\data\custom\monty\44_lower_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class 44_swla_unit_rex: 44_swla_unit
	{
		uniformclass = "44_swla_uniform_rex";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\rex\44_upper_co.paa",
			"kobra\k_unit_44\data\custom\rex\44_lower_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class 44_swla_unit_delta: 44_swla_unit
	{
		uniformclass = "44_swla_uniform_delta";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\delta\44_upper_co.paa",
			"kobra\k_unit_44\data\custom\delta\44_lower_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class 44_swla_unit_garrus: 44_swla_unit
	{
		uniformclass = "44_swla_uniform_garrus";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\garrus\44_upper_co.paa",
			"kobra\k_unit_44\data\custom\garrus\44_lower_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class 44_swla_unit_dishonored: 44_swla_unit
	{
		uniformclass = "44_swla_uniform_dishonored";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\dishonored\44_swla_upper.paa",
			"kobra\k_unit_44\data\custom\dishonored\44_swla_lower.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class 44_swla_unit_azarael: 44_swla_unit
	{
		uniformclass = "44_swla_uniform_azarael";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\azarael\camo1_co.paa",
			"kobra\k_unit_44\data\custom\azarael\camo2_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class 44_swla_unit_nico: 44_swla_unit
	{
		uniformclass = "44_swla_uniform_nico";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\nico\camo1_co.paa",
			"kobra\k_unit_44\data\custom\nico\camo2_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class 44_swla_unit_sexton: 44_swla_unit
	{
		uniformclass = "44_swla_uniform_sexton";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\sexton\camo1_co.paa",
			"kobra\k_unit_44\data\custom\sexton\camo2_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class 44_swla_unit_steele: 44_swla_unit
	{
		uniformclass = "44_swla_uniform_nico";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\steele\camo1_co.paa",
			"kobra\k_unit_44\data\custom\steele\camo2_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	#include "44_unit_loadout.hpp"