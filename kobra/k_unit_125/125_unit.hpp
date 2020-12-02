    class 125_swla_unit: k_swla_unit_base
	{
		scope = 1;
		scopeCurator = 1;
		scopearsenal = 1;
		editorpreview = "";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "Kobra Mod Team Team";
		uniformclass = "125_swla_uniform";
		faction = "125_ac";
		editorSubCategory = "442_trooper";
		displayname = "Trooper";
		movesFatigue = "CfgMovesFatigueTrooper";
		backpack = "";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_125\data\armor\125th_bodyupper_co.paa",
			"kobra\k_unit_125\data\armor\125th_bodylower_co.paa",
			"kobra\k_unit_125\data\armor\undersuit_co.paa",
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
    class 125_swla_arc_unit: 125_swla_unit
    {
        uniformclass = "125_swla_arc_uniform";
        hiddenselectionstextures[] = 
		{
			"kobra\k_unit_125\data\armor\125th_arc_bodyupper_co.paa",
			"kobra\k_unit_125\data\armor\125th_arc_bodylower_co.paa",
			"kobra\k_unit_125\data\armor\undersuit_co.paa",
		};
    };
    class 125_swla_medic_unit: 125_swla_unit
    {
        uniformclass = "125_swla_medic_uniform";
        hiddenselectionstextures[] = 
		{
			"kobra\k_unit_125\data\armor\125th_medic_bodyupper_co.paa",
			"kobra\k_unit_125\data\armor\125th_medic_bodylower_co.paa",
			"kobra\k_unit_125\data\armor\undersuit_co.paa",
		};
    };
    class 125_swla_pilot_unit: 125_swla_unit
    {
        uniformclass = "125_swla_arc_uniform";
        hiddenselectionstextures[] = 
		{
			"kobra\k_unit_125\data\armor\125th_pilot_bodyupper_co.paa",
			"kobra\k_unit_125\data\armor\125th_pilot_bodylower_co.paa",
			"kobra\k_unit_125\data\armor\undersuit_co.paa",
		};
    };
///////////custom
    class 125_swla_unit_dao: 125_swla_unit
    {
        uniformclass = "125_swla_uniform_dao";
        hiddenselectionstextures[] = 
		{
			"kobra\k_unit_125\data\custom\dao\125th_dao_bodyupper_co.paa",
			"kobra\k_unit_125\data\custom\dao\125th_dao_bodylower_co.paa",
			"kobra\k_unit_125\data\armor\undersuit_co.paa",
		};
    };
    class 125_swla_unit_ithil: 125_swla_unit
    {
        uniformclass = "125_swla_uniform_ithil";
        hiddenselectionstextures[] = 
		{
			"kobra\k_unit_125\data\custom\ithil\125th_ithil_bodyupper_co.paa",
			"kobra\k_unit_125\data\custom\ithil\125th_ithil_bodylower_co.paa",
			"kobra\k_unit_125\data\armor\undersuit_co.paa",
		};
    };
    class 125_swla_unit_kyrus: 125_swla_unit
    {
        uniformclass = "125_swla_uniform_kyrus";
        hiddenselectionstextures[] = 
		{
			"kobra\k_unit_125\data\custom\kyrus\125th_kyrus_bodyupper_co.paa",
			"kobra\k_unit_125\data\custom\kyrus\125th_kyrus_bodylower_co.paa",
			"kobra\k_unit_125\data\armor\undersuit_co.paa",
		};
    };
    class 125_swla_unit_rooche: 125_swla_unit
    {
        uniformclass = "125_swla_uniform_rooche";
        hiddenselectionstextures[] = 
		{
			"kobra\k_unit_125\data\custom\rooche\125th_rooche_bodyupper_co.paa",
			"kobra\k_unit_125\data\custom\rooche\125th_rooche_bodylower_co.paa",
			"kobra\k_unit_125\data\armor\undersuit_co.paa",
		};
    };
    class 125_swla_unit_tetre: 125_swla_unit
    {
        uniformclass = "125_swla_uniform_tetre";
        hiddenselectionstextures[] = 
		{
			"kobra\k_unit_125\data\custom\tetre\125th_tetre_bodyupper_co.paa",
			"kobra\k_unit_125\data\custom\tetre\125th_tetre_bodylower_co.paa",
			"kobra\k_unit_125\data\armor\undersuit_co.paa",
		};
    };
    class 125_swla_unit_thatcher: 125_swla_unit
    {
        uniformclass = "125_swla_uniform_thatcher";
        hiddenselectionstextures[] = 
		{
			"kobra\k_unit_125\data\custom\thatcher\125th_thatcher_bodyupper_co.paa",
			"kobra\k_unit_125\data\custom\thatcher\125th_thatcher_bodylower_co.paa",
			"kobra\k_unit_125\data\armor\undersuit_co.paa",
		};
    };
    class 125_swla_unit_thor: 125_swla_unit
    {
        uniformclass = "125_swla_uniform_thor";
        hiddenselectionstextures[] = 
		{
			"kobra\k_unit_125\data\custom\thor\125th_thor_bodyupper_co.paa",
			"kobra\k_unit_125\data\custom\thor\125th_thor_bodylower_co.paa",
			"kobra\k_unit_125\data\armor\undersuit_co.paa",
		};
    };