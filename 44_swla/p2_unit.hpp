class 44_swla_unit: 44_swla_unit_base
{
	scope = 1;
	scopeCurator = 1;
	scopeArnsenal = 1;
	uniformclass = "44_swla_uniform";
	displayname = "[44] Trooper";
	hiddenselectionsTextures[] = 
	{
		"\44_swla\data\armor\44_swla_upper.paa",
		"\44_swla\data\armor\44_swla_lower.paa"
	};
	linkedItems[] = 
	{
		"44_swla_p2_helmet",
		"44_swla_vest"
	};
	RespawnlinkedItems[] = 
	{
		"44_swla_p2_helmet",
		"44_swla_vest"
	};
};
class 44_swla_mc_unit: 44_swla_mc_unit_base
{
	scope = 1;
	scopeCurator = 1;
	scopeArnsenal = 1;
	uniformclass = "44_swla_uniform";
	displayname = "[44] Commander";
	hiddenselectionsTextures[] = 
	{
		"\44_swla\data\armor\44_swla_mc_upper.paa",
		"\44_swla\data\armor\44_swla_lower.paa",
		"\44_swla\data\armor\44_swla_mc_upper.paa",
		""
	};
	linkedItems[] = 
	{
		"44_swla_p2_helmet",
		"44_swla_vest"
	};
	RespawnlinkedItems[] = 
	{
		"44_swla_p2_helmet",
		"44_swla_vest"
	};
};


class 44_swla_unit_rifleman_dc15a: 44_swla_unit
{
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	displayname = "Rifleman (DC-15A)";
	icon = "44_swla\data\ui\icons\icon_rifleman.paa";
	attendant = 0;
	engineer = false;
	canDeactivateMines = false;
	linkedItems[] = 
	{
		"44_swla_vest",
		"44_swla_p2_helmet",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch"
	};
	respawnlinkedItems[] = 
	{
		"44_swla_vest",
		"44_swla_p2_helmet",
		"442_clones_hud_white",
		"ItemMap",
		"ItemGPS",
		"ItemRadio",
		"ItemCompass",
		"ItemWatch"
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
	Items[] = 
	{
		"442_swla_visor_1",
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
		"ACE_morphine"
	};
	respawnItems[] = 
	{
		"442_swla_visor_1",
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
		"ACE_morphine"
	};
};

class 44_swla_unit_engineer_dc15a: 44_swla_unit_rifleman_dc15a
{
	displayname = "Engineer (DC15A)";
	icon = "44_swla\data\ui\icons\icon_engineer.paa";
	engineer = true;
	candeactivatemine = true;
};
class 44_swla_unit_medic_dc15a: 44_swla_unit_rifleman_dc15a
{
	displayname = "Medic (DC15A)";
	icon = "44_swla\data\ui\icons\icon_medic.paa";
	attendant = 1;
};