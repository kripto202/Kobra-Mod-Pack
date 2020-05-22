class 442_swla_deserters_unit_woodland: 442_swla_deserters_unit_base
{
	editorSubCategory = "swla_442_deserters_trooper_woodland";
	scope = 1;
	scopeCurator = 1;
	scopeArnsenal = 1;
	uniformclass = "442_swla_deserters_uniform_woodland";
	displayname = "Trooper";
	hiddenselectionsTextures[] = 
	{
		"\442nd_deserters\data\armor\442_swla_upper_woodland.paa",
		"\442nd_deserters\data\armor\442_swla_lower_woodland.paa",
		"442_clones\data\uniform\mc_uniform\undersuit_co.paa",
	};
	linkedItems[] = 
	{
		"442_swla_p2_helmet_1",
		"442_swla_vest"
	};
	RespawnlinkedItems[] = 
	{
		"442_swla_p2_helmet_1",
		"442_swla_vest"
	};
	items[] = 
	{
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
		"ACE_quikclot",
	};
	respawnitems[] = 
	{
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
		"ACE_quikclot",
	};
};

class 442_swla_deserters_unit_rifleman_dc15a_woodland: 442_swla_deserters_unit_woodland
{
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	displayname = "Rifleman (DC-15A)";
	icon = "442nd_swla\data\ui\icons\icon_rifleman.paa";
	backpack = "";
	attendant = 0;
	engineer = false;
	canDeactivateMines = false;
	Items[] = 
	{
		"442_swla_deserters_visor_1",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_touriquet",
		"ACE_epinephrine",
		"ACE_morphine",
		"adv_aceSplint_splint",
	};
	respawnItems[] = 
	{
		"442_swla_deserters_visor_1",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_touriquet",
		"ACE_epinephrine",
		"ACE_morphine",
		"adv_aceSplint_splint",
	};
	linkedItems[] = 
	{
		"442_swla_deserters_vest",
		"442_swla_deserters_p1_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	respawnlinkedItems[] = 
	{
		"442_swla_deserters_vest",
		"442_swla_deserters_p1_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	weapons[] = 
	{
		"442_DC15A",
		"Throw",
		"Put"
	};
	respawnWeapons[] = 
	{
		"442_DC15A",
		"Throw",
		"Put"
	};
	magazines[] = 
	{
		"442_DC15A_Mag",
		"442_DC15A_Mag",
		"442_DC15A_Mag",
		"442_DC15A_Mag",
		"442_DC15A_Mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
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
	respawnMagazines[] = 
	{
		"442_DC15A_Mag",
		"442_DC15A_Mag",
		"442_DC15A_Mag",
		"442_DC15A_Mag",
		"442_DC15A_Mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
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
};
class 442_swla_deserters_unit_rifleman_dc15s_woodland: 442_swla_deserters_unit_rifleman_dc15a_woodland
{
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	displayname = "Rifleman (DC-15S)";
	icon = "442nd_swla\data\ui\icons\icon_rifleman.paa";
	backpack = "";
	attendant = 0;
	engineer = false;
	canDeactivateMines = false;
	weapons[] = 
	{
		"442_DC15S",
		"Throw",
		"Put"
	};
	respawnWeapons[] = 
	{
		"442_DC15S",
		"Throw",
		"Put"
	};
	magazines[] = 
	{
		"442_DC15s_Mag",
		"442_DC15s_Mag",
		"442_DC15s_Mag",
		"442_DC15s_Mag",
		"442_DC15s_Mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
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
	respawnMagazines[] = 
	{
		"442_DC15s_Mag",
		"442_DC15s_Mag",
		"442_DC15s_Mag",
		"442_DC15s_Mag",
		"442_DC15s_Mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
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
};
class 442_swla_deserters_unit_z6_woodland: 442_swla_deserters_unit_rifleman_dc15a_woodland
{
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	displayname = "Heavy (Z-6)";
	icon = "442nd_swla\data\ui\icons\icon_mg.paa";
	backpack = "";
	attendant = 0;
	engineer = false;
	canDeactivateMines = false;
	Items[] = 
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_touriquet",
		"ACE_epinephrine",
		"ACE_morphine",
		"adv_aceSplint_splint",
	};
	respawnItems[] = 
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_touriquet",
		"ACE_epinephrine",
		"ACE_morphine",
		"adv_aceSplint_splint",
	};
	linkedItems[] = 
	{
		"442_swla_deserters_commander_1",
		"442_swla_deserters_heavy_1",
		"442_swla_deserters_p2_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	respawnlinkedItems[] = 
	{
		"442_swla_deserters_commander_1",
		"442_swla_deserters_heavy_1",
		"442_swla_deserters_p2_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	weapons[] = 
	{
		"442_Z6",
		"Throw",
		"Put"
	};
	respawnWeapons[] = 
	{
		"442_Z6",
		"Throw",
		"Put"
	};
	magazines[] = 
	{
		"442_z6_Mag",
		"442_z6_Mag",
		"442_z6_Mag",
		"442_z6_Mag",
		"442_z6_Mag",
		"442_mag_40mm_3rnd",
		"442_mag_40mm_3rnd",
		"442_mag_40mm_3rnd",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
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
	respawnMagazines[] = 
	{
		"442_z6_Mag",
		"442_z6_Mag",
		"442_z6_Mag",
		"442_z6_Mag",
		"442_z6_Mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
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
};
class 442_swla_deserters_unit_cfr_woodland: 442_swla_deserters_unit_rifleman_dc15s_woodland
{
	displayname = "Clone First Responder";
	backpack = "442_swla_deserters_medic_backpack_woodland_loaded";
	icon = "442nd_swla\data\ui\icons\icon_medic.paa";
	attendant = 1;
	engineer = false;
	canDeactivateMines = false;
	linkeditems[] = 
	{
		"442_swla_deserters_cfr",
		"442_swla_deserters_p2_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	respawnlinkeditems[] = 
	{
		"442_swla_deserters_cfr",
		"442_swla_deserters_p2_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	magazines[] = 
	{
		"442_DC15s_Mag",
		"442_DC15s_Mag",
		"442_DC15s_Mag",
		"442_DC15s_Mag",
		"442_DC15s_Mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
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
	respawnmagazines[] = 
	{
		"442_DC15s_Mag",
		"442_DC15s_Mag",
		"442_DC15s_Mag",
		"442_DC15s_Mag",
		"442_DC15s_Mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
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
};
class 442_swla_deserters_unit_rifleman_dc15s_at_lite_woodland: 442_swla_deserters_unit_rifleman_dc15s_woodland
{
	displayname = "Rifleman AT (Light)";
	icon = "442nd_swla\data\ui\icons\icon_at.paa";
	attendant = 0;
	engineer = false;
	canDeactivateMines = false;
	weapons[] = 
	{
		"442_DC15S",
		"SWLW_rps6_disposable",
		"Throw",
		"Put"
	};
	respawnWeapons[] = 
	{
		"442_DC15S",
		"SWLW_rps6_disposable",
		"Throw",
		"Put"
	};
};
class 442_swla_deserter_unit_rifleman_at_rps6_woodland: 442_swla_deserters_unit_rifleman_dc15s_woodland
{
	displayname = "Rifleman AT (RPS-6)";
	icon = "442nd_swla\data\ui\icons\icon_at.paa";
	attendant = 0;
	engineer = false;
	canDeactivateMines = false;
	linkedItems[] = 
	{
		"442_swla_deserters_leader_1",
		"442_swla_deserters_p1_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	respawnlinkedItems[] = 
	{
		"442_swla_deserters_leader_1",
		"442_swla_deserters_p1_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	weapons[] = 
	{
		"442_DC15S",
		"442_rps6",
		"Throw",
		"Put"
	};
	respawnWeapons[] = 
	{
		"442_DC15S",
		"442_rps6",
		"Throw",
		"Put"
	};
	backpack = "442_swla_deserters_backpack_woodland_rps6_loaded";
};
class 442_swla_deserters_unit_rifleman_at_plx1_woodland: 442_swla_deserters_unit_rifleman_dc15s_woodland
{
	displayname = "Rifleman AT (PLX-1)";
	icon = "442nd_swla\data\ui\icons\icon_at.paa";
	attendant = 0;
	engineer = false;
	canDeactivateMines = false;
	linkedItems[] = 
	{
		"442_swla_deserters_leader_1",
		"442_swla_deserters_p1_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	respawnlinkedItems[] = 
	{
		"442_swla_deserters_leader_1",
		"442_swla_deserters_p1_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	weapons[] = 
	{
		"442_DC15S",
		"SWLW_plx1",
		"Throw",
		"Put"
	};
	respawnWeapons[] = 
	{
		"442_DC15S",
		"SWLW_plx1",
		"Throw",
		"Put"
	};
	backpack = "442_swla_deserters_backpack_woodland_plx1_AT_loaded";
};
class 442_swla_deserters_unit_rifleman_aa_plx1_woodland: 442_swla_deserters_unit_rifleman_dc15s_woodland
{
	displayname = "Rifleman AA (PLX-1)";
	icon = "442nd_swla\data\ui\icons\icon_at.paa";
	attendant = 0;
	engineer = false;
	canDeactivateMines = false;
	linkedItems[] = 
	{
		"442_swla_deserters_leader_1",
		"442_swla_deserters_p1_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	respawnlinkedItems[] = 
	{
		"442_swla_deserters_leader_1",
		"442_swla_deserters_p1_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	weapons[] = 
	{
		"442_DC15S",
		"SWLW_plx1",
		"Throw",
		"Put"
	};
	respawnWeapons[] = 
	{
		"442_DC15S",
		"SWLW_plx1",
		"Throw",
		"Put"
	};
	backpack = "442_swla_deserters_backpack_woodland_plx1_AA_loaded";
};
class 442_swla_deserters_unit_engineer_woodland: 442_swla_deserters_unit_rifleman_dc15s_woodland
{
	displayname = "Engineer";
	backpack = "442_swla_deserters_backpack_woodland_engineer_loaded";
	icon = "442nd_swla\data\ui\icons\icon_engineer.paa";
	attendant = 0;
	engineer = true;
	canDeactivateMines = true;
	linkedItems[] = 
	{
		"442_swla_deserters_engineer_1",
		"442_swla_deserters_p2_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	respawnlinkedItems[] = 
	{
		"442_swla_deserters_engineer_1",
		"442_swla_deserters_p2_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
};
class 442_swla_deserters_unit_grenadier_woodland: 442_swla_deserters_unit_rifleman_dc15a_woodland
{
	displayname = "Grenadier";
	icon = "442nd_swla\data\ui\icons\icon_grenadier.paa";
	backpack = "";
	attendant = 0;
	engineer = false;
	canDeactivateMines = false;
	linkedItems[] = 
	{
		"442_swla_deserters_grenadier_vest",
		"442_swla_deserters_p1_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	respawnlinkedItems[] = 
	{
		"442_swla_deserters_grenadier_vest",
		"442_swla_deserters_p1_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	weapons[] = 
	{
		"442_GL",
		"Throw",
		"Put"
	};
	respawnWeapons[] = 
	{
		"442_GL",
		"Throw",
		"Put"
	};
	magazines[] = 
	{
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
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
	respawnMagazines[] = 
	{
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"442_mag_40mm_6rnd",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
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
};
class 442_swla_deserters_unit_crewman_woodland: 442_swla_deserters_unit_engineer_woodland
{
	displayname = "Crewman";
	icon = "442nd_swla\data\ui\icons\icon_crewman.paa";
	backpack = "";
	attendant = 0;
	engineer = true;
	canDeactivateMines = true;
	Items[] = 
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_touriquet",
		"ACE_epinephrine",
		"ACE_morphine",
		"adv_aceSplint_splint",
	};
	respawnItems[] = 
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_touriquet",
		"ACE_epinephrine",
		"ACE_morphine",
		"adv_aceSplint_splint",
	};
	linkedItems[] = 
	{
		"442_swla_deserters_marksman",
		"442_swla_deserters_commander_1",
		"442_swla_deserters_p2_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	respawnlinkedItems[] = 
	{
		"442_swla_deserters_marksman",
		"442_swla_deserters_commander_1",
		"442_swla_deserters_p2_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
};
class 442_swla_deserters_unit_pilot_woodland: 442_swla_deserters_unit_engineer_woodland
{
	displayname = "Pilot";
	icon = "442nd_swla\data\ui\icons\icon_pilot.paa";
	backpack = "";
	attendant = 1;
	engineer = true;
	canDeactivateMines = true;
	Items[] = 
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_touriquet",
		"ACE_epinephrine",
		"ACE_morphine",
		"adv_aceSplint_splint",
	};
	respawnItems[] = 
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_touriquet",
		"ACE_epinephrine",
		"ACE_morphine",
		"adv_aceSplint_splint",
	};
	linkedItems[] = 
	{
		"442_swla_deserters_vest",
		"442_swla_deserters_pilot_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	respawnlinkedItems[] = 
	{
		"442_swla_deserters_vest",
		"442_swla_deserters_pilot_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
};
class 442_swla_deserters_unit_marksman_woodland: 442_swla_deserters_unit_woodland
{
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	displayname = "Marksman";
	icon = "442nd_swla\data\ui\icons\icon_rifleman.paa";
	backpack = "";
	attendant = 0;
	engineer = false;
	canDeactivateMines = false;
	Items[] = 
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_touriquet",
		"ACE_epinephrine",
		"ACE_morphine",
		"adv_aceSplint_splint",
	};
	respawnItems[] = 
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_touriquet",
		"ACE_epinephrine",
		"ACE_morphine",
		"adv_aceSplint_splint",
	};
	linkedItems[] = 
	{
		"442_swla_deserters_visor_spec_1",
		"442_swla_deserters_marksman",
		"442_swla_deserters_p2_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	respawnlinkedItems[] = 
	{
		"442_swla_deserters_visor_spec_1",
		"442_swla_deserters_marksman",
		"442_swla_deserters_p2_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	weapons[] = 
	{
		"442_DC15X",
		"Throw",
		"Put"
	};
	respawnWeapons[] = 
	{
		"442_DC15X",
		"Throw",
		"Put"
	};
	magazines[] = 
	{
		"442_dc15x_mag",
		"442_dc15x_mag",
		"442_dc15x_mag",
		"442_dc15x_mag",
		"442_dc15x_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
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
	respawnMagazines[] = 
	{
		"442_dc15x_mag",
		"442_dc15x_mag",
		"442_dc15x_mag",
		"442_dc15x_mag",
		"442_dc15x_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
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
};
class 442_swla_deserters_unit_rifleman_dc15a_gl_woodland: 442_swla_deserters_unit_woodland
{
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	displayname = "Grenadier (DC15A)";
	icon = "442nd_swla\data\ui\icons\icon_rifleman.paa";
	backpack = "";
	attendant = 0;
	engineer = false;
	canDeactivateMines = false;
	linkedItems[] = 
	{
		"442_swla_deserters_visor_spec_1",
		"442_swla_deserters_marksman",
		"442_swla_deserters_p2_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	respawnlinkedItems[] = 
	{
		"442_swla_deserters_visor_spec_1",
		"442_swla_deserters_marksman",
		"442_swla_deserters_p2_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	weapons[] = 
	{
		"442_DC15A_UGL",
		"Throw",
		"Put"
	};
	respawnWeapons[] = 
	{
		"442_DC15A_UGL",
		"Throw",
		"Put"
	};
	magazines[] = 
	{
		"442_DC15A_Mag",
		"442_DC15A_Mag",
		"442_DC15A_Mag",
		"442_DC15A_Mag",
		"442_DC15A_Mag",
		"442_DC15A_UGL_Mag",
		"442_DC15A_UGL_Mag",
		"442_DC15A_UGL_Mag",
		"442_DC15A_UGL_Mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
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
		"SmokeShell",
	};
	respawnMagazines[] = 
	{
		"442_DC15A_Mag",
		"442_DC15A_Mag",
		"442_DC15A_Mag",
		"442_DC15A_Mag",
		"442_DC15A_Mag",
		"442_DC15A_UGL_Mag",
		"442_DC15A_UGL_Mag",
		"442_DC15A_UGL_Mag",
		"442_DC15A_UGL_Mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
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
		"SmokeShell",
	};
};

class 442_swla_deserters_ab_unit_rifleman_dc15a_woodland: 442_swla_deserters_unit_rifleman_dc15a_woodland
{
	displayname = "Airborne (DC-15A - woodland)";
	backpack = "";
	attendant = 1;
	engineer = true;
	canDeactivateMines = true;
	Items[] = 
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_touriquet",
		"ACE_epinephrine",
		"ACE_morphine",
		"adv_aceSplint_splint",
	};
	respawnItems[] = 
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_touriquet",
		"ACE_epinephrine",
		"ACE_morphine",
		"adv_aceSplint_splint",
	};
	linkedItems[] = 
	{
		"442_swla_deserters_vest",
		"442_swla_deserters_ab_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	respawnlinkedItems[] = 
	{
		"442_swla_deserters_vest",
		"442_swla_deserters_ab_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
};
class 442_swla_deserters_ab_unit_rifleman_dc15s_woodland: 442_swla_deserters_unit_rifleman_dc15s_woodland
{
	displayname = "Airborne (DC-15S - woodland)";
	backpack = "";
	attendant = 1;
	engineer = true;
	canDeactivateMines = true;
	Items[] = 
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_touriquet",
		"ACE_epinephrine",
		"ACE_morphine",
		"adv_aceSplint_splint",
	};
	respawnItems[] = 
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_touriquet",
		"ACE_epinephrine",
		"ACE_morphine",
		"adv_aceSplint_splint",
	};
	linkedItems[] = 
	{
		"442_swla_deserters_vest",
		"442_swla_deserters_ab_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	respawnlinkedItems[] = 
	{
		"442_swla_deserters_vest",
		"442_swla_deserters_ab_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
};
class 442_swla_deserters_ab_unit_rifleman_spec_woodland: 442_swla_deserters_ab_unit_rifleman_dc15a_woodland
{
	displayname = "Airborne (Spec Op)";
	backpack = "";
	attendant = 1;
	engineer = true;
	canDeactivateMines = true;
	Items[] = 
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_touriquet",
		"ACE_epinephrine",
		"ACE_morphine",
		"adv_aceSplint_splint",
	};
	respawnItems[] = 
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_ElasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_touriquet",
		"ACE_epinephrine",
		"ACE_morphine",
		"adv_aceSplint_splint",
	};
	linkedItems[] = 
	{
		"442_swla_deserters_officer_1",
		"442_swla_deserters_ab_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	respawnlinkedItems[] = 
	{
		"442_swla_deserters_officer_1",
		"442_swla_deserters_ab_helmet_woodland",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch",
	};
	weapons[] = 
	{
		"442_DC15X",
		"Throw",
		"Put"
	};
	respawnWeapons[] = 
	{
		"442_DC15X",
		"Throw",
		"Put"
	};
	magazines[] = 
	{
		"442_dc15x_mag",
		"442_dc15x_mag",
		"442_dc15x_mag",
		"442_dc15x_mag",
		"442_dc15x_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
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
	respawnMagazines[] = 
	{
		"442_dc15x_mag",
		"442_dc15x_mag",
		"442_dc15x_mag",
		"442_dc15x_mag",
		"442_dc15x_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
		"SWLW_beltGrenade_mag",
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
};