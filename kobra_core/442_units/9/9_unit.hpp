///p2
	class 9_swla_p2_unit_trooper: k_swla_unit_base
	{
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "kripto202";
		uniformclass = "9_swla_p2_uniform_dirt";
		faction = "9_ac";
		editorSubCategory = "442_trooper";
		displayname = "Trooper";
		movesFatigue = "CfgMovesFatigueTrooper";
		backpack = "";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\9\data\armor\p2\9_upper_trooper_co.paa",
			"442_units\clones\9\data\armor\p2\9_lower_trooper_co.paa",
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
	class 9_swla_p2_unit_dirt: 9_swla_p2_unit_trooper
	{
		uniformclass = "9_swla_p2_uniform_dirt";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\9\data\armor\p2\9_upper_dirt_co.paa",
			"442_units\clones\9\data\armor\p2\9_lower_dirt_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 9_swla_p2_unit_nco: 9_swla_p2_unit_trooper
	{
		uniformclass = "9_swla_p2_unit_nco";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\9\data\armor\p2\9_upper_NCO_co.paa",
			"442_units\clones\9\data\armor\p2\9_lower_NCO_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 9_swla_p2_unit_shiny: 9_swla_p2_unit_trooper
	{
		uniformclass = "9_swla_p2_unit_shiny";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\9\data\armor\p2\9_upper_Shiny_co.paa",
			"442_units\clones\9\data\armor\p2\9_lower_Shiny_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 9_swla_p2_unit_lt: 9_swla_p2_unit_trooper
	{
		uniformclass = "9_swla_p2_unit_lt";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\9\data\armor\p2\9_upper_LT_co.paa",
			"442_units\clones\9\data\armor\p2\9_lower_trooper_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 9_swla_p2_unit_cpt: 9_swla_p2_unit_trooper
	{
		uniformclass = "9_swla_p2_unit_cpt";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\9\data\armor\p2\9_upper_CPT_co.paa",
			"442_units\clones\9\data\armor\p2\9_lower_trooper_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 9_swla_p2_unit_cmd: 9_swla_p2_unit_trooper
	{
		uniformclass = "9_swla_p2_unit_cmd";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\9\data\armor\p2\9_upper_CMD_co.paa",
			"442_units\clones\9\data\armor\p2\9_lower_trooper_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 9_swla_p2_unit_medic: 9_swla_p2_unit_trooper
	{
		uniformclass = "9_swla_p2_unit_medic";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\9\data\armor\p2\9_upper_Medic_co.paa",
			"442_units\clones\9\data\armor\p2\9_lower_trooper_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 9_swla_p2_unit_eod: 9_swla_p2_unit_trooper
	{
		uniformclass = "9_swla_p2_unit_eod";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\9\data\armor\p2\9_upper_EOD_co.paa",
			"442_units\clones\9\data\armor\p2\9_lower_trooper_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};

///P1 Troopers///
	
	class 9_swla_p1_unit_medic: 9_swla_p2_unit_trooper
	{
		uniformclass = "9_swla_p1_unit_medic";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\9\data\armor\p1\9_upper_Medic_co.paa",
			"442_units\clones\9\data\armor\p1\9_lower_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 9_swla_p1_unit_shiny: 9_swla_p2_unit_trooper
	{
		uniformclass = "9_swla_p1_unit_shiny";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\9\data\armor\p1\9_upper_shiny_co.paa",
			"442_units\clones\9\data\armor\p1\9_lower_shiny_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 9_swla_p1_unit_eod: 9_swla_p2_unit_trooper
	{
		uniformclass = "9_swla_p1_unit_eod";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\9\data\armor\p1\9_upper_EOD_co.paa",
			"442_units\clones\9\data\armor\p1\9_lower_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 9_swla_p1_unit_sgt: 9_swla_p2_unit_trooper
	{
		uniformclass = "9_swla_p1_unit_sgt";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\9\data\armor\p1\9_upper_SGT_co.paa",
			"442_units\clones\9\data\armor\p1\9_lower_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 9_swla_p1_unit_lt: 9_swla_p2_unit_trooper
	{
		uniformclass = "9_swla_p1_unit_lt";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\9\data\armor\p1\9_upper_LT_co.paa",
			"442_units\clones\9\data\armor\p1\9_lower_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 9_swla_p1_unit_cpt: 9_swla_p2_unit_trooper
	{
		uniformclass = "9_swla_p1_unit_cpt";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\9\data\armor\p1\9_upper_CPT_co.paa",
			"442_units\clones\9\data\armor\p1\9_lower_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 9_swla_p1_unit_cmd: 9_swla_p2_unit_trooper
	{
		uniformclass = "9_swla_p1_unit_cmd";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\9\data\armor\p1\9_upper_CMD_co.paa",
			"442_units\clones\9\data\armor\p1\9_lower_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};
	class 9_swla_p1_unit_trooper: 9_swla_p2_unit_trooper
	{
		uniformclass = "9_swla_p1_unit_trooper";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\9\data\armor\p1\9_upper_co.paa",
			"442_units\clones\9\data\armor\p1\9_lower_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
		};
	};