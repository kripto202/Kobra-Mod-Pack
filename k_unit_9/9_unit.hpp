	class 9_swla_trooper_clean: k_swla_unit_base
	{
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
		editorpreview = "";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "Kobra Mod Team Team";
		uniformclass = "9_swla_uniform_clean";
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
	class 9_swla_trooper_worn: 9_swla_trooper_clean
	{
		uniformclass = "9_swla_uniform_worn";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_9\data\armor\9_armor_upper_worn_co.paa",
			"kobra\k_unit_9\data\armor\9_armor_lower_worn_co.paa",
			"kobra\k_unit_9\data\armor\undersuit_co.paa",
		};
	};
	class 9_swla_trooper_nco: 9_swla_trooper_clean
	{
		uniformclass = "9_swla_uniform_nco";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_9\data\armor\9_armor_upper_nco_co.paa",
			"kobra\k_unit_9\data\armor\9_armor_lower_nco_co.paa",
			"kobra\k_unit_9\data\armor\undersuit_co.paa",
		};
	};
	class 9_swla_trooper_lt: 9_swla_trooper_clean
	{
		uniformclass = "9_swla_uniform_lt";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_9\data\armor\9_armor_upper_lt_co.paa",
			"kobra\k_unit_9\data\armor\9_armor_lower_nco_co.paa",
			"kobra\k_unit_9\data\armor\undersuit_co.paa",
		};
	};
	class 9_swla_trooper_cpt: 9_swla_trooper_clean
	{
		uniformclass = "9_swla_uniform_cpt";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_9\data\armor\9_armor_upper_cpt_co.paa",
			"kobra\k_unit_9\data\armor\9_armor_lower_nco_co.paa",
			"kobra\k_unit_9\data\armor\undersuit_co.paa",
		};
	};
	class 9_swla_trooper_cmd: 9_swla_trooper_clean
	{
		uniformclass = "9_swla_uniform_cmd";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_9\data\armor\9_armor_upper_cmd_co.paa",
			"kobra\k_unit_9\data\armor\9_armor_lower_nco_co.paa",
			"kobra\k_unit_9\data\armor\undersuit_co.paa",
		};
	};
	#include "9_unit_loadout.hpp"