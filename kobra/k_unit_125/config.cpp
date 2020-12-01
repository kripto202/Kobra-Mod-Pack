class cfgpatches
{
    class k_unit_125
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "k_headgear_125_p15",
            "k_headgear_125_p1_arf",
            "k_headgear_125_p2_arf",
            "k_headgear_125_barc",
            "k_headgear_125_p2_pilot",
            "k_headgear_125_p2",
            "k_headgear_125_p2_bigsean",
            "k_headgear_125_p2_dao",
            "k_headgear_125_p2_doomer",
            "k_headgear_125_p2_ghostly",
            "k_headgear_125_p2_pilot_ido",
            "k_headgear_125_p2_ithil",
            "k_headgear_125_p2_kyrus",
            "k_headgear_125_p2_lightru",
            "k_headgear_125_p2_piggy",
            "k_headgear_125_p2_rooche",
            "k_headgear_125_p2_tetre",
            "k_headgear_125_p2_thatcher",
            "k_headgear_125_p15_thatcher",
            "k_headgear_125_p2_thor",
            "k_headgear_125_p2_pilot_tim",
            "k_headgear_125_p2_vertigo",
            "125_swla_unit",
            "125_swla_arc_unit",
            "125_swla_medic_unit",
            "125_swla_pilot_unit",
            "125_swla_unit_dao",
            "125_swla_unit_ithil",
            "125_swla_unit_kyrus",
            "125_swla_unit_rooche",
            "125_swla_unit_tetre",
            "125_swla_unit_thatcher",
            "125_swla_arc_unit_thatcher",
            "125_swla_unit_thor",
        };
        weapons[] = 
        {
            "125_p15_helmet",
            "125_p1_arf_helmet",
            "125_p2_arf_helmet",
            "125_barc_helmet",
            "125_p2_pilot_helmet",
            "125_p2_helmet",
            "125_p2_helmet_bigsean",
            "125_p2_helmet_dao",
            "125_p2_helmet_doomer",
            "125_p2_helmet_ghostly",
            "125_p2_pilot_helmet_ido",
            "125_p2_helmet_ithil",
            "125_p2_helmet_kyrus",
            "125_p2_helmet_lightru",
            "125_p2_helmet_piggy",
            "125_p2_helmet_rooche",
            "125_p2_helmet_tetre",
            "125_p2_helmet_thatcher",
            "125_p15_helmet_thatcher",
            "125_p2_helmet_thor",
            "125_p2_pilot_helmet_tim",
            "125_p2_helmet_vertigo",
            "125_swla_uniform",
            "125_swla_arc_uniform",
            "125_swla_medic_uniform",
            "125_swla_pilot_uniform",
            "125_swla_uniform_dao",
            "125_swla_uniform_ithil",
            "125_swla_uniform_kyrus",
            "125_swla_uniform_rooche",
            "125_swla_uniform_tetre",
            "125_swla_uniform_thatcher",
            "125_swla_arc_uniform_thatcher",
            "125_swla_uniform_thor"
        };
    };
};

class cfgvehicles 
{
    class k_swla_unit_base;
    class k_swla_unit_mc_base;
    class k_clone_backpack;
    class k_clone_backpack_med;
    class k_clone_backpack_heavy;
    class k_clone_backpack_medic;
    class k_clone_backpack_medic_med;
    class k_clone_backpack_radio;
    class k_clone_backpack_radio_med;
    class k_clone_backpack_rocket;
    class k_headgear_p2;
    #include "125_unit.hpp"
    #include "125_backpack.hpp"
    #include "placeable_helmet.hpp"
};
class cfgweapons 
{
    class SWLB_clone_ccVisor;
	class SWLB_clone_mcVisor;
	class SWLB_clone_nvg;
	class SWLB_clone_nvg_nco;
	class SWLB_clone_rangefinder;
	class SWLB_clone_nvg_spec;
	class SWLB_clone_nvg_spec_nco;
	class SWLB_clone_commando_nvg_antenna;
	class SWLB_clone_commando_nvg;
	class SWLB_clone_BARC_helmet;
	class SWLB_clone_eng_helmet;
	class SWLB_clone_P1_helmet;
	class SWLB_clone_ARF_P1_helmet;
	class SWLB_clone_ARF_P2_helmet;
	class SWLB_clone_P2_helmet;
	class SWLB_clone_AB_helmet;
	class SWLB_clone_P15_helmet;
	class SWLB_clone_P1_2_helmet;
	class SWLB_clone_pilot_P2_helmet;
	class SWLB_clone_commando_helmet_k1;
	class SWLB_clone_recon_armor;
	class SWLB_clone_recon_officer_armor;
	class SWLB_clone_recon_nco_armor;
	class SWLB_clone_officer_armor;
	class SWLB_clone_medic_armor;
	class SWLB_clone_kama_armor;
	class SWLB_clone_commander_armor;
	class SWLB_clone_cfr_armor;
	class SWLB_clone_airborne_armor;
	class SWLB_clone_commander_armor_rank;
	class SWLB_clone_airborne_nco_armor;
	class SWLB_clone_arc_armor;
	class SWLB_clone_lieutenant_armor;
	class SWLB_clone_commando_eod_armor_k1;
	class SWLB_clone_commando_sniper_armor_k1;
	class SWLB_clone_commando_sl_armor_k1;
	class SWLB_clone_commando_tech_armor_k1;
	class SWLB_clone_uniform;
	class SWLB_clone_marshal_commander_base_P2;
	class SWLB_clone_commando_uniform_k1;
	class SWLB_mando_og_armor;
	class SWLB_mando_og_helmet;
	class SWLB_mando_rangefinder;

    class k_swla_uniform;
    class k_swla_mc_uniform;
    class k_p2_helmet;
    class k_p15_helmet;
    class k_airborne_helmet;
    class k_p2_pilot_helmet;
    class k_barc_helmet;
    class k_p1_arf_helmet;
    class k_p2_arf_helmet;
    class k_eng_helmet;
    class k_p1_helmet;
    class k_p1_pilot_helmet;
    class k_p1_specops_helmet;
    class k_p2_specops_helmet;
    class k_rex_helmet;
    class k_Scout_Helmet;
    class k_hunter_helmet_base;
    class k_crosshair_helmet_base;
    class k_wrecker_helmet_base;
    class k_tech_helmet_base;
    class V_rebreatherB;
    #include "125_uniform.hpp"
    #include "125_helmet.hpp"
    #include "125_vest.hpp"
};