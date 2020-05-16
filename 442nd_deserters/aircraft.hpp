class B_heli_transport_01_f;
class b_heli_attack_01_dynamicloadout_f;
class b_heli_light_01_f;
class b_heli_light_01_dynamicloadout_f;
class b_plane_fighter_01_stealth_f;
class b_plane_fighter_01_f;
class b_plane_cas_01_dynamicloadout_f;

class deserter_lb_heli_trans_w: b_heli_light_01_f
{
	displayname = "[Deserter] Little Bird (Transport)";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_woodland";
	crew = "442_swla_deserters_unit_pilot_woodland";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\littlebird\deserter_littlebird_body_w.paa",
	};
};
class deserter_lb_heli_cas_w: b_heli_light_01_dynamicloadout_f
{
	displayname = "[Deserter] Little Bird (CAS)";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_woodland";
	crew = "442_swla_deserters_unit_pilot_woodland";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\littlebird\deserter_littlebird_body_w.paa",
	};
};

class deserter_gh_heli_trans_w: B_heli_transport_01_f
{
	displayname = "[Deserter] Ghosthawk";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_woodland";
	crew = "442_swla_deserters_unit_pilot_woodland";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\ghosthawk\deserter_ghosthawk_body_w.paa",
		"442nd_deserters\data\ghosthawk\deserter_ghosthawk_tail_w.paa",
	};
};

class deserter_com_heli_cas_w: b_heli_attack_01_dynamicloadout_f
{
	Displayname = "[Deserter] Comanche";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_woodland";
	crew = "442_swla_deserters_unit_pilot_woodland";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\comanche\deserter_comanche_body_w.paa",
	};
};

class deserter_a10_plane_cas_w: b_plane_cas_01_dynamicloadout_f
{
	Displayname = "[Deserter] Warthog";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_woodland";
	crew = "442_swla_deserters_unit_pilot_woodland";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\a10\deserter_a10_body_w.paa",
		"442nd_deserters\data\a10\deserter_a10_wing_w.paa",
	};
};

class deserter_fa181_plane_fighter_w: b_plane_fighter_01_f
{
	Displayname = "[Deserter] FA-181";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_woodland";
	crew = "442_swla_deserters_unit_pilot_woodland";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\fa181\deserter_fa181_body_w.paa",
		"442nd_deserters\data\fa181\deserter_fa181_wing_w.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa", 
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
	};
};
class deserter_fa181_plane_fighter_stealth_w: b_plane_fighter_01_stealth_f
{
	Displayname = "[Deserter] FA-181 (Stealth)";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_woodland";
	crew = "442_swla_deserters_unit_pilot_woodland";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\fa181\deserter_fa181_body_w.paa",
		"442nd_deserters\data\fa181\deserter_fa181_wing_w.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa", 
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
	};
};



class deserter_lb_heli_trans_d: b_heli_light_01_f
{
	displayname = "[Deserter] Little Bird (Transport)";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_desert";
	crew = "442_swla_deserters_unit_pilot_tan";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\littlebird\deserter_littlebird_body_d.paa",
	};
};
class deserter_lb_heli_cas_d: b_heli_light_01_dynamicloadout_f
{
	displayname = "[Deserter] Little Bird (CAS)";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_desert";
	crew = "442_swla_deserters_unit_pilot_tan";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\littlebird\deserter_littlebird_body_d.paa",
	};
};

class deserter_gh_heli_trans_d: B_heli_transport_01_f
{
	displayname = "[Deserter] Ghosthawk";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_desert";
	crew = "442_swla_deserters_unit_pilot_tan";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\ghosthawk\deserter_ghosthawk_body_d.paa",
		"442nd_deserters\data\ghosthawk\deserter_ghosthawk_tail_d.paa",
	};
};

class deserter_com_heli_cas_d: b_heli_attack_01_dynamicloadout_f
{
	Displayname = "[Deserter] Comanche";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_desert";
	crew = "442_swla_deserters_unit_pilot_tan";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\comanche\deserter_comanche_body_d.paa",
	};
};

class deserter_a10_plane_cas_d: b_plane_cas_01_dynamicloadout_f
{
	Displayname = "[Deserter] Warthog";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_desert";
	crew = "442_swla_deserters_unit_pilot_tan";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\a10\deserter_a10_body_d.paa",
		"442nd_deserters\data\a10\deserter_a10_wing_d.paa",
	};
};

class deserter_fa181_plane_fighter_d: b_plane_fighter_01_f
{
	Displayname = "[Deserter] FA-181";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_desert";
	crew = "442_swla_deserters_unit_pilot_tan";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\fa181\deserter_fa181_body_d.paa",
		"442nd_deserters\data\fa181\deserter_fa181_wing_d.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa", 
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
	};
};
class deserter_fa181_plane_fighter_stealth_d: b_plane_fighter_01_stealth_f
{
	Displayname = "[Deserter] FA-181 (Stealth)";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_desert";
	crew = "442_swla_deserters_unit_pilot_tan";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\fa181\deserter_fa181_body_d.paa",
		"442nd_deserters\data\fa181\deserter_fa181_wing_d.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa", 
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
	};
};



class deserter_lb_heli_trans_b: b_heli_light_01_f
{
	displayname = "[Deserter] Little Bird (Transport)";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_black";
	crew = "442_swla_deserters_unit_pilot_black";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\littlebird\deserter_littlebird_body_b.paa",
	};
};
class deserter_lb_heli_cas_b: b_heli_light_01_dynamicloadout_f
{
	displayname = "[Deserter] Little Bird (CAS)";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_black";
	crew = "442_swla_deserters_unit_pilot_black";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\littlebird\deserter_littlebird_body_b.paa",
	};
};

class deserter_gh_heli_trans_b: B_heli_transport_01_f
{
	displayname = "[Deserter] Ghosthawk";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_black";
	crew = "442_swla_deserters_unit_pilot_black";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\ghosthawk\deserter_ghosthawk_body_b.paa",
		"442nd_deserters\data\ghosthawk\deserter_ghosthawk_tail_b.paa",
	};
};

class deserter_com_heli_cas_b: b_heli_attack_01_dynamicloadout_f
{
	Displayname = "[Deserter] Comanche";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_black";
	crew = "442_swla_deserters_unit_pilot_black";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\comanche\deserter_comanche_body_b.paa",
	};
};

class deserter_a10_plane_cas_b: b_plane_cas_01_dynamicloadout_f
{
	Displayname = "[Deserter] Warthog";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_black";
	crew = "442_swla_deserters_unit_pilot_black";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\a10\deserter_a10_body_b.paa",
		"442nd_deserters\data\a10\deserter_a10_wing_b.paa",
	};
};

class deserter_fa181_plane_fighter_b: b_plane_fighter_01_f
{
	Displayname = "[Deserter] FA-181";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_black";
	crew = "442_swla_deserters_unit_pilot_black";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\fa181\deserter_fa181_body_b.paa",
		"442nd_deserters\data\fa181\deserter_fa181_wing_b.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa", 
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
	};
};
class deserter_fa181_plane_fighter_stealth_b: b_plane_fighter_01_stealth_f
{
	Displayname = "[Deserter] FA-181 (Stealth)";
	faction = "swla_442_deserters_f";
	editorSubcategory = "442_deserters_air_veh_black";
	crew = "442_swla_deserters_unit_pilot_black";
	scope = 2;
	scopecurator = 2;
	scopearsenal = 2;
	side = 2;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\fa181\deserter_fa181_body_b.paa",
		"442nd_deserters\data\fa181\deserter_fa181_wing_b.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa", 
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
		"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
	};
};