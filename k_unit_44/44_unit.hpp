	class k_ls_44_unit: k_ls_unit_base
	{
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
		editorpreview = "";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "Kobra Mod Team Team";
		uniformclass = "k_ls_44_uniform";
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
	class k_ls_44_mc_unit: k_ls_unit_mc_base
	{
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "Kobra Mod Team Team";
		uniformclass = "k_ls_44_uniform_mc";
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
	/*class k_ls_44_unit_hollen: k_ls_44_unit
	{
		uniformclass = "k_ls_44_uniform_hollen";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\hollen\44_upper_co.paa",
			"kobra\k_unit_44\data\custom\hollen\44_lower_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};*/
	class k_ls_44_unit_kripto: k_ls_44_unit
	{
		uniformclass = "k_ls_44_uniform_kripto";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\kripto\44_upper_co.paa",
			"kobra\k_unit_44\data\custom\kripto\44_lower_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class k_ls_44_unit_monty: k_ls_44_unit
	{
		uniformclass = "k_ls_44_uniform_monty";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\monty\44_upper_co.paa",
			"kobra\k_unit_44\data\custom\monty\44_lower_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class k_ls_44_unit_rex: k_ls_44_unit
	{
		uniformclass = "k_ls_44_uniform_rex";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\rex\44_upper_co.paa",
			"kobra\k_unit_44\data\custom\rex\44_lower_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class k_ls_44_unit_delta: k_ls_44_unit
	{
		uniformclass = "k_ls_44_uniform_delta";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\delta\44_upper_co.paa",
			"kobra\k_unit_44\data\custom\delta\44_lower_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class k_ls_44_unit_garrus: k_ls_44_unit
	{
		uniformclass = "k_ls_44_uniform_garrus";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\garrus\44_upper_co.paa",
			"kobra\k_unit_44\data\custom\garrus\44_lower_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class k_ls_44_unit_dishonored: k_ls_44_unit
	{
		uniformclass = "k_ls_44_uniform_dishonored";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\dishonored\44_upper.paa",
			"kobra\k_unit_44\data\custom\dishonored\44_lower.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class k_ls_44_unit_azarael: k_ls_44_unit
	{
		uniformclass = "k_ls_44_uniform_azarael";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\azarael\camo1_co.paa",
			"kobra\k_unit_44\data\custom\azarael\camo2_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class k_ls_44_unit_nico: k_ls_44_unit
	{
		uniformclass = "k_ls_44_uniform_nico";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\nico\camo1_co.paa",
			"kobra\k_unit_44\data\custom\nico\camo2_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class k_ls_44_unit_sexton: k_ls_44_unit
	{
		uniformclass = "k_ls_44_uniform_sexton";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\sexton\camo1_co.paa",
			"kobra\k_unit_44\data\custom\sexton\camo2_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class k_ls_44_unit_steele: k_ls_44_unit
	{
		uniformclass = "k_ls_44_uniform_steele";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\steele\camo1_co.paa",
			"kobra\k_unit_44\data\custom\steele\camo2_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class k_ls_44_unit_euda: k_ls_44_unit
	{
		uniformclass = "k_ls_44_uniform_euda";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\euda\camo1_co.paa",
			"kobra\k_unit_44\data\custom\euda\camo2_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class k_ls_44_unit_piercer: k_ls_44_unit
	{
		uniformclass = "k_ls_44_uniform_piercer";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\piercer\44_upper_co.paa",
			"kobra\k_unit_44\data\custom\piercer\44_lower_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class k_ls_44_unit_ivanov: k_ls_44_unit
	{
		uniformclass = "k_ls_44_uniform_ivanov";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\ivanov\44_upper_co.paa",
			"kobra\k_unit_44\data\custom\ivanov\44_lower_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class k_ls_44_unit_kyram: k_ls_44_unit
	{
		uniformclass = "k_ls_44_uniform_kyram";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\kyram\44_upper_co.paa",
			"kobra\k_unit_44\data\custom\kyram\44_lower_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	class k_ls_44_unit_wumbo: k_ls_44_unit
	{
		uniformclass = "k_ls_44_uniform_kyram";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_44\data\custom\wumbo\44_upper_co.paa",
			"kobra\k_unit_44\data\custom\wumbo\44_lower_co.paa",
			"kobra\k_unit_44\data\armor\undersuit_co.paa",
		};
	};
	
	#include "44_unit_loadout.hpp"