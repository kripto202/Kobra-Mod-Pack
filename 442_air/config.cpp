class CfgPatches
{
	class 442_air
	{
		author="kripto202";
		requiredAddons[]={};
		requiredVersion=0.1;
		units[]=
		{
			"442_lb_heli_trans",
			"442_lb_heli_cas",
			"rep_lb_heli_trans",
			"rep_lb_heli_cas",
			"442_gh_heli_trans",
			"rep_gh_heli_trans",
			"huey_gh_heli_trans",
			"442_com_heli_cas",
			"rep_com_heli_cas",
			"442_a10_plane_cas",
			"rep_a10_plane_cas",
			"442_fa181_plane_fighter",
			"442_fa181_plane_fighter_stealth",
			"rep_fa181_plane_fighter",
			"rep_fa181_plane_fighter_stealth"
		};
		weapons[]={};
	};
};
class cfgvehicles
{
	class B_heli_transport_01_f;
	class b_heli_attack_01_dynamicloadout_f;
	class b_heli_light_01_f;
	class b_heli_light_01_dynamicloadout_f;
	class b_plane_fighter_01_stealth_f;
	class b_plane_fighter_01_f;
	class b_plane_cas_01_dynamicloadout_f;
	class 442_lb_heli_trans: b_heli_light_01_f
	{
		displayname="[442] Little Bird (Transport)";
		faction="442_siege_bat";
		editorSubcategory="442_planes";
		crew="442_swla_unit_pilot";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		hiddenselectionstextures[]=
		{
			"442_air\data\littlebird\442_littlebird_body.paa"
		};
	};
	class 442_lb_heli_cas: b_heli_light_01_dynamicloadout_f
	{
		displayname="[442] Little Bird (CAS)";
		faction="442_siege_bat";
		editorSubcategory="442_planes";
		crew="442_swla_unit_pilot";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		hiddenselectionstextures[]=
		{
			"442_air\data\littlebird\442_littlebird_body.paa"
		};
	};
	class rep_lb_heli_trans: b_heli_light_01_f
	{
		displayname="Little Bird (Transport)";
		faction="SWLB_GAR";
		editorSubcategory="442_planes";
		crew="SWLB_clone_pilot_base_P2";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		hiddenselectionstextures[]=
		{
			"442_air\data\littlebird\rep_littlebird_body.paa"
		};
	};
	class rep_lb_heli_cas: b_heli_light_01_dynamicloadout_f
	{
		displayname="Little Bird (CAS)";
		faction="SWLB_GAR";
		editorSubcategory="442_planes";
		crew="SWLB_clone_pilot_base_P2";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		hiddenselectionstextures[]=
		{
			"442_air\data\littlebird\rep_littlebird_body.paa"
		};
	};
	class 442_gh_heli_trans: B_heli_transport_01_f
	{
		displayname="[442] Ghosthawk";
		faction="442_siege_bat";
		editorSubcategory="442_planes";
		crew="442_swla_unit_pilot";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		hiddenselectionstextures[]=
		{
			"442_air\data\ghosthawk\442_ghosthawk_body.paa",
			"442_air\data\ghosthawk\442_ghosthawk_tail.paa"
		};
	};
	class rep_gh_heli_trans: B_heli_transport_01_f
	{
		displayname="Ghosthawk";
		faction="SWLB_GAR";
		editorSubcategory="442_planes";
		crew="SWLB_clone_pilot_base_P2";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		hiddenselectionstextures[]=
		{
			"442_air\data\ghosthawk\rep_ghosthawk_body.paa",
			"442_air\data\ghosthawk\rep_ghosthawk_tail.paa"
		};
	};
	class huey_gh_heli_trans: B_heli_transport_01_f
	{
		displayname="Misfit 1-2 (Dukas)";
		faction="442_siege_bat";
		editorSubcategory="442_planes";
		crew="442_swla_unit_pilot";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		hiddenselectionstextures[]=
		{
			"442_air\data\ghosthawk\huey_ghosthawk_body.paa",
			"442_air\data\ghosthawk\huey_ghosthawk_tail.paa"
		};
	};
	class 442_com_heli_cas: b_heli_attack_01_dynamicloadout_f
	{
		Displayname="[442] Comanche";
		faction="442_siege_bat";
		editorSubcategory="442_planes";
		crew="442_swla_unit_pilot";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		hiddenselectionstextures[]=
		{
			"442_air\data\comanche\442_comanche_body.paa"
		};
	};
	class rep_com_heli_cas: b_heli_attack_01_dynamicloadout_f
	{
		Displayname="Comanche";
		faction="SWLB_GAR";
		editorSubcategory="442_planes";
		crew="SWLB_clone_pilot_base_P2";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		hiddenselectionstextures[]=
		{
			"442_air\data\comanche\rep_comanche_body.paa"
		};
	};
	class 442_a10_plane_cas: b_plane_cas_01_dynamicloadout_f
	{
		Displayname="[442] Warthog";
		faction="442_siege_bat";
		editorSubcategory="442_planes";
		crew="442_swla_unit_pilot";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		hiddenselectionstextures[]=
		{
			"442_air\data\a10\442_a10_body.paa",
			"442_air\data\a10\442_a10_wing.paa"
		};
	};
	class rep_a10_plane_cas: b_plane_cas_01_dynamicloadout_f
	{
		Displayname="Warthog";
		faction="SWLB_GAR";
		editorSubcategory="442_planes";
		crew="SWLB_clone_pilot_base_P2";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		hiddenselectionstextures[]=
		{
			"442_air\data\a10\rep_a10_body.paa",
			"442_air\data\a10\rep_a10_wing.paa"
		};
	};
	class 442_fa181_plane_fighter: b_plane_fighter_01_f
	{
		Displayname="[442] FA-181";
		faction="442_siege_bat";
		editorSubcategory="442_planes";
		crew="442_swla_unit_pilot";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		hiddenselectionstextures[]=
		{
			"442_air\data\fa181\442_fa181_body.paa",
			"442_air\data\fa181\442_fa181_wing.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
		};
	};
	class 442_fa181_plane_fighter_stealth: b_plane_fighter_01_stealth_f
	{
		Displayname="[442] FA-181 (Stealth)";
		faction="442_siege_bat";
		editorSubcategory="442_planes";
		crew="442_swla_unit_pilot";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		hiddenselectionstextures[]=
		{
			"442_air\data\fa181\442_fa181_body.paa",
			"442_air\data\fa181\442_fa181_wing.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
		};
	};
	class rep_fa181_plane_fighter: b_plane_fighter_01_f
	{
		Displayname="FA-181";
		faction="SWLB_GAR";
		editorSubcategory="442_planes";
		crew="SWLB_clone_pilot_base_P2";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		hiddenselectionstextures[]=
		{
			"442_air\data\fa181\rep_fa181_body.paa",
			"442_air\data\fa181\rep_fa181_wing.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
		};
	};
	class rep_fa181_plane_fighter_stealth: b_plane_fighter_01_stealth_f
	{
		Displayname="FA-181 (Stealth)";
		faction="SWLB_GAR";
		editorSubcategory="442_planes";
		crew="SWLB_clone_pilot_base_P2";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		hiddenselectionstextures[]=
		{
			"442_air\data\fa181\rep_fa181_body.paa",
			"442_air\data\fa181\rep_fa181_wing.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa"
		};
	};
};