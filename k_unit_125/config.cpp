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
            "k_ls_headgear_125_p15",
            "k_ls_headgear_125_p1_arf",
            "k_ls_headgear_125_p2_arf",
            "k_ls_headgear_125_barc",
            "k_ls_headgear_125_p2_pilot",
            "k_ls_headgear_125_p2",
            "k_ls_headgear_125_p2_bigsean",
            "k_ls_headgear_125_p2_dao",
            "k_ls_headgear_125_p2_doomer",
            "k_ls_headgear_125_p2_ghostly",
            "k_ls_headgear_125_p2_pilot_ido",
            "k_ls_headgear_125_p2_ithil",
            "k_ls_headgear_125_p2_kyrus",
            "k_ls_headgear_125_p2_lightru",
            "k_ls_headgear_125_p2_piggy",
            "k_ls_headgear_125_p2_rooche",
            "k_ls_headgear_125_p2_tetre",
            "k_ls_headgear_125_p2_thatcher",
            "k_ls_headgear_125_p15_thatcher",
            "k_ls_headgear_125_p2_thor",
            "k_ls_headgear_125_p2_pilot_tim",
            "k_ls_headgear_125_p2_vertigo",
            "k_ls_125_unit",
            "k_ls_125_arc_unit",
            "k_ls_125_medic_unit",
            "k_ls_125_pilot_unit",
            "k_ls_125_unit_dao",
            "k_ls_125_unit_ithil",
            "k_ls_125_unit_kyrus",
            "k_ls_125_unit_rooche",
            "k_ls_125_unit_tetre",
            "k_ls_125_unit_thatcher",
            "k_ls_125_arc_unit_thatcher",
            "k_ls_125_unit_thor",
        };
        weapons[] = 
        {
            "k_ls_125_p15_helmet",
            "k_ls_125_p1_arf_helmet",
            "k_ls_125_p2_arf_helmet",
            "k_ls_125_barc_helmet",
            "k_ls_125_p2_pilot_helmet",
            "k_ls_125_p2_helmet",
            "k_ls_125_p2_helmet_bigsean",
            "k_ls_125_p2_helmet_dao",
            "k_ls_125_p2_helmet_doomer",
            "k_ls_125_p2_helmet_ghostly",
            "k_ls_125_p2_pilot_helmet_ido",
            "k_ls_125_p2_helmet_ithil",
            "k_ls_125_p2_helmet_kyrus",
            "k_ls_125_p2_helmet_lightru",
            "k_ls_125_p2_helmet_piggy",
            "k_ls_125_p2_helmet_rooche",
            "k_ls_125_p2_helmet_tetre",
            "k_ls_125_p2_helmet_thatcher",
            "k_ls_125_p15_helmet_thatcher",
            "k_ls_125_p2_helmet_thor",
            "k_ls_125_p2_pilot_helmet_tim",
            "k_ls_125_p2_helmet_vertigo",
            "k_ls_125_uniform",
            "k_ls_125_arc_uniform",
            "k_ls_125_medic_uniform",
            "k_ls_125_pilot_uniform",
            "k_ls_125_uniform_dao",
            "k_ls_125_uniform_ithil",
            "k_ls_125_uniform_kyrus",
            "k_ls_125_uniform_rooche",
            "k_ls_125_uniform_tetre",
            "k_ls_125_uniform_thatcher",
            "k_ls_125_arc_uniform_thatcher",
            "k_ls_125_uniform_thor"
        };
    };
};

class cfgvehicles 
{
    class k_ls_unit_base;
    class k_ls_unit_mc_base;
    class k_ls_clone_backpack;
    class k_ls_clone_backpack_med;
    class k_ls_clone_backpack_heavy;
    class k_ls_clone_backpack_medic;
    class k_ls_clone_backpack_medic_med;
    class k_ls_clone_backpack_radio;
    class k_ls_clone_backpack_radio_med;
    class k_ls_clone_backpack_rocket;
    class k_ls_headgear_p2;
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

    class k_ls_uniform;
    class k_ls_mc_uniform;
    class k_ls_p2_helmet;
    class k_ls_p15_helmet;
    class k_ls_airborne_helmet;
    class k_ls_p2_pilot_helmet;
    class k_ls_barc_helmet;
    class k_ls_p1_arf_helmet;
    class k_ls_p2_arf_helmet;
    class k_ls_eng_helmet;
    class k_ls_p1_helmet;
    class k_ls_p1_pilot_helmet;
    class k_ls_p1_specops_helmet;
    class k_ls_p2_specops_helmet;
    class k_ls_rex_helmet;
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