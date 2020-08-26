	class 44_swla_unit: k_swla_unit_base
	{
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "kripto202";
		uniformclass = "44_swla_uniform";
		faction = "44_ab";
		editorSubCategory = "swla_44_trooper";
		displayname = "Trooper";
		movesFatigue = "CfgMovesFatigueTrooper";
		backpack = "";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\44\data\armor\44_upper_co.paa",
			"442_units\clones\44\data\armor\44_lower_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
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
		author = "kripto202";
		uniformclass = "44_swla_uniform_mc";
		faction = "44_sod";
		editorSubCategory = "swla_44_trooper";
		displayname = "Trooper";
		movesFatigue = "CfgMovesFatigueTrooper";
		backpack = "";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\44\data\armor\44_mc_upper_co.paa",
			"442_units\clones\44\data\armor\44_mc_lower_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
			"442_units\clones\data\uniform\mc_uniform\rank_co.paa"
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