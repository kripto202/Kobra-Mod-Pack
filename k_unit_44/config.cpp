class cfgpatches
{
    class k_unit_44
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "k_ls_headgear_44_p2",
            "k_ls_headgear_44_p15",
            "k_ls_headgear_44_ab",
            "k_ls_headgear_44_p2_pilot",
            "k_ls_headgear_44_barc",
            "k_ls_headgear_44_p1_arf",
            "k_ls_headgear_44_p2_arf",
            "k_ls_headgear_44_eng",
            "k_ls_headgear_44_p1",
            "k_ls_headgear_44_p1_pilot",
            "k_ls_headgear_44_p1_specops",
            "k_ls_headgear_44_p2_specops",
            "k_headgear_44_hunter",
            "k_headgear_44_crosshair",
            "k_headgear_44_wrecker",
            "k_headgear_44_tech",
            "k_ls_headgear_44_rex",
            "k_headgear_44_scout",
            //"k_headgear_44_hollen",
            "k_ls_headgear_44_kripto",
            "k_ls_headgear_44_monty",
            "k_ls_headgear_44_dishonored",
            "k_ls_headgear_44_azarael",
            "k_ls_headgear_44_nico",
            "k_ls_headgear_44_sexton",
            "k_ls_headgear_44_steele",
            "k_ls_headgear_44_delta",
            "k_ls_headgear_44_euda",

            "k_ls_44_unit",
            "k_ls_44_mc_unit",
            "k_ls_44_unit_hollen",
            "k_ls_44_unit_kripto",
            "k_ls_44_unit_monty",
            "k_ls_44_unit_rex",
            "k_ls_44_unit_delta",
            "k_ls_44_unit_garrus",
            "k_ls_44_unit_dishonored",
            "k_ls_44_unit_azarael",
            "k_ls_44_unit_nico",
            "k_ls_44_unit_sexton",
            "k_ls_44_unit_steele",
            "k_ls_44_unit_euda",
            "k_ls_44_unit_dc15a",
            "k_ls_44_unit_dc15s",
            "k_ls_44_unit_medic",
            "k_ls_44_unit_engineer"
        };
        weapons[] = 
        {
            "k_ls_44_p2_helmet",
            "k_ls_44_p15_helmet",
            "k_ls_44_airborne_helmet",
            "k_ls_44_p2_pilot_helmet",
            "k_ls_44_barc_helmet",
            "k_ls_44_p1_arf_helmet",
            "k_ls_44_p2_arf_helmet",
            "k_ls_44_eng_helmet",
            "k_ls_44_p1_helmet",
            "k_ls_44_p1_pilot_helmet",
            "k_ls_44_p1_specop_helmet",
            "k_ls_44_p2_specop_helmet",
            "k_ls_44_rex_helmet",

            "k_44_scout_helmet",
            "k_44_hunter_helmet",
            "k_44_crosshair_helmet",
            "k_44_wrecker_helmet",
            "k_44_tech_helmet",
            
            "k_ls_44_p2_helmet_Hollen",
            "k_ls_44_p1_arf_helmet_monty",
            "k_ls_44_barc_helmet_kripto",
            "k_ls_44_p2_pilot_helmet_delta",
            "k_ls_44_p1_specop_helmet_garrus",
            "k_ls_44_p15_helmet_dishonored",
            "k_ls_44_p1_arf_helmet_azarael",
            "k_ls_44_airborne_helmet_nico",
            "k_ls_44_eng_helmet_sexton",
            "k_ls_44_p1_helmet_steele",
            "k_ls_44_p1_pilot_helmet_euda",

            "k_ls_44_uniform",
            "k_ls_44_uniform_mc",
            "k_ls_44_uniform_hollen",
            "k_ls_44_uniform_kripto",
            "k_ls_44_uniform_monty",
            "k_ls_44_uniform_rex",
            "k_ls_44_uniform_delta",
            "k_ls_44_uniform_garrus",
            "k_ls_44_uniform_dishonored",
            "k_ls_44_uniform_azarael",
            "k_ls_44_uniform_nico",
            "k_ls_44_uniform_sexton",
            "k_ls_44_uniform_steele",
            "k_ls_44_uniform_euda",
            "",
            "",
            "",
            "",
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
    #include "44_unit.hpp"
    #include "44_backpack.hpp"
    #include "placeable_helmet.hpp"
};
class cfgweapons 
{
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
    #include "44_uniform.hpp"
    #include "44_helmet.hpp"
    //#include "44_vest.hpp"
};