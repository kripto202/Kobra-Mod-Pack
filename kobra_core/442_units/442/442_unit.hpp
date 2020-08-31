class 442_swla_unit_1: k_swla_unit_base
	{
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "KOBRA Mod Team";
		uniformclass = "442_swla_uniform_1";
		faction = "442_siege_bat";
		editorSubCategory = "442_trooper";
		displayname = "Trooper";
		movesFatigue = "CfgMovesFatigueTrooper";
		backpack = "";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\442\data\armor\442_armor1_upper_co.paa",
			"442_units\clones\442\data\armor\442_armor1_lower_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa"
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
	class 442_swla_unit_2: 442_swla_unit_1
	{
		uniformclass = "442_swla_uniform_2";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\442\data\armor\442_armor2_upper_co.paa",
			"442_units\clones\442\data\armor\442_armor2_lower_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa"
		};
	};
	class 442_swla_unit_3: 442_swla_unit_1
	{
		uniformclass = "442_swla_uniform_3";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\442\data\armor\442_armor3_upper_co.paa",
			"442_units\clones\442\data\armor\442_armor3_lower_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa"
		};
	};
	class 442_swla_unit_4: 442_swla_unit_1
	{
		uniformclass = "442_swla_uniform_4";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\442\data\armor\442_armor4_upper_co.paa",
			"442_units\clones\442\data\armor\442_armor4_lower_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa"
		};
	};
	class 442_swla_unit_5: 442_swla_unit_1
	{
		uniformclass = "442_swla_uniform_5";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\442\data\armor\442_armor5_upper_co.paa",
			"442_units\clones\442\data\armor\442_armor5_lower_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa"
		};
	};
	#include "442_unit_loadout.hpp"