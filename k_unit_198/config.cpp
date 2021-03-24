class cfgpatches
{
    class k_unit_198
    {
        author = "KOBRA Mod Team";
        requiredaddons[] = 
        {
            "kobra_core"
        };
        requiredversion = 0.1;
        units[] = 
        {
            "k_ls_198_ct_unit",
            "k_ls_198_clc_unit",
            "k_ls_198_sct_unit",
            "k_ls_198_vct_unit",
            "k_ls_198_medic_unit",
            "k_ls_198_pilot_unit",
            "k_ls_198_arf_unit",
            "k_ls_198_kermit_unit",
            "k_ls_198_mickey_unit",
            "k_ls_198_murk_unit",

            "k_ls_headgear_198_p2",
            "k_ls_headgear_198_p2_m",
            "k_ls_headgear_198_p1_pilot1",
            "k_ls_headgear_198_p1_pilot2",
            "k_ls_headgear_198_p2_pilot",
            "k_ls_headgear_198_eng",
            "k_ls_headgear_198_arf_p1",
            "k_ls_headgear_198_arf_p2",
            "k_ls_headgear_198_p2_frost",
            "k_ls_headgear_198_p2_kermit",
            "k_ls_headgear_198_p2_pilot_meatball",
            "k_ls_headgear_198_p2_mickey",
            "k_ls_headgear_198_p2_murk",
            "k_ls_headgear_198_p2_o",
            "k_ls_headgear_198_p2_salamander",
            "k_ls_headgear_198_p2_snowy",
        };
        weapons[] = 
        {
            "k_ls_198_ct_uniform",
            "k_ls_198_clc_uniform",
            "k_ls_198_sct_uniform",
            "k_ls_198_vct_uniform",
            "k_ls_198_medic_uniform",
            "k_ls_198_pilot_uniform",
            "k_ls_198_arf_uniform",
            "k_ls_198_kermit_uniform",
            "k_ls_198_mickey_uniform",
            "k_ls_198_murk_uniform",
            
            "k_ls_198_p2_helmet",
            "k_ls_198_p2_helmet_m",
            "k_ls_198_p1_pilot_helmet1",
            "k_ls_198_p1_pilot_helmet2",
            "k_ls_198_p2_pilot_helmet",
            "k_ls_198_eng_helmet",
            "k_ls_198_p1_arf_helmet",
            "k_ls_198_p2_arf_helmet",
            "k_ls_198_frost_p2_helmet",
            "k_ls_198_meatball_p2_pilot_helmet",
            "k_ls_198_mickey_p2_helmet",
            "k_ls_198_murk_p2_helmet",
            "k_ls_198_o_p2_helmet",
            "k_ls_198_salamander_p2_helmet",
            "k_ls_198_snowy_p2_helmet"
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
    #include "198_unit.hpp"
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
    #include "198_helmet.hpp"
    #include "198_uniform.hpp"
};