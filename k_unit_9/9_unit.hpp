	class k_ls_9_trooper_clean: k_ls_unit_base
	{
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
		editorpreview = "";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "Kobra Mod Team Team";
		uniformclass = "k_ls_9_uniform_clean";
		faction = "9_ac";
		editorSubCategory = "442_trooper";
		displayname = "Trooper";
		movesFatigue = "CfgMovesFatigueTrooper";
		backpack = "";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_9\data\armor\9_armor_upper_clean_co.paa",
			"kobra\k_unit_9\data\armor\9_armor_lower_clean_co.paa",
			"kobra\k_unit_9\data\armor\undersuit_co.paa",
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
	class k_ls_9_trooper_worn: k_ls_9_trooper_clean
	{
		uniformclass = "k_ls_9_uniform_worn";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_9\data\armor\9_armor_upper_worn_co.paa",
			"kobra\k_unit_9\data\armor\9_armor_lower_worn_co.paa",
			"kobra\k_unit_9\data\armor\undersuit_co.paa",
		};
	};
	class k_ls_9_trooper_nco: k_ls_9_trooper_clean
	{
		uniformclass = "k_ls_9_uniform_nco";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_9\data\armor\9_armor_upper_nco_co.paa",
			"kobra\k_unit_9\data\armor\9_armor_lower_nco_co.paa",
			"kobra\k_unit_9\data\armor\undersuit_co.paa",
		};
	};
	class k_ls_9_trooper_lt: k_ls_9_trooper_clean
	{
		uniformclass = "k_ls_9_uniform_lt";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_9\data\armor\9_armor_upper_lt_co.paa",
			"kobra\k_unit_9\data\armor\9_armor_lower_nco_co.paa",
			"kobra\k_unit_9\data\armor\undersuit_co.paa",
		};
	};
	class k_ls_9_trooper_cpt: k_ls_9_trooper_clean
	{
		uniformclass = "k_ls_9_uniform_cpt";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_9\data\armor\9_armor_upper_cpt_co.paa",
			"kobra\k_unit_9\data\armor\9_armor_lower_nco_co.paa",
			"kobra\k_unit_9\data\armor\undersuit_co.paa",
		};
	};
	class k_ls_9_trooper_cmd: k_ls_9_trooper_clean
	{
		uniformclass = "k_ls_9_uniform_cmd";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_9\data\armor\9_armor_upper_cmd_co.paa",
			"kobra\k_unit_9\data\armor\9_armor_lower_nco_co.paa",
			"kobra\k_unit_9\data\armor\undersuit_co.paa",
		};
	};
	#include "9_unit_loadout.hpp"