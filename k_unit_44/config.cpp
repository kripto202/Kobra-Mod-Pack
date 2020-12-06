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
            "k_headgear_44_p2",
            "k_headgear_44_p15",
            "k_headgear_44_ab",
            "k_headgear_44_p2_pilot",
            "k_headgear_44_barc",
            "k_headgear_44_p1_arf",
            "k_headgear_44_p2_arf",
            "k_headgear_44_eng",
            "k_headgear_44_p1",
            "k_headgear_44_p1_pilot",
            "k_headgear_44_p1_specops",
            "k_headgear_44_p2_specops",
            "k_headgear_44_hunter",
            "k_headgear_44_crosshair",
            "k_headgear_44_wrecker",
            "k_headgear_44_tech",
            "k_headgear_44_rex",
            "k_headgear_44_scout",
            "k_headgear_44_dukas",
            "k_headgear_44_hollen",
            "k_headgear_44_kripto",
            "k_headgear_44_monty",
            "k_headgear_44_dishonored",
            "k_headgear_44_azarael",
            "k_headgear_44_nico",
            "k_headgear_44_sexton",
            "k_headgear_44_steele",
            "k_headgear_44_delta",
            "k_headgear_44_euda",

            "44_swla_unit",
            "44_swla_mc_unit",
            "44_swla_unit_hollen",
            "44_swla_unit_kripto",
            "44_swla_unit_monty",
            "44_swla_unit_rex",
            "44_swla_unit_delta",
            "44_swla_unit_garrus",
            "44_swla_unit_dishonored",
            "44_swla_unit_azarael",
            "44_swla_unit_nico",
            "44_swla_unit_sexton",
            "44_swla_unit_steele",
            "44_swla_unit_euda",
            "44_swla_unit_dc15a",
            "44_swla_unit_dc15s",
            "44_swla_unit_medic",
            "44_swla_unit_engineer"
        };
        weapons[] = 
        {
            "44_p2_helmet",
            "44_p15_helmet",
            "44_airborne_helmet",
            "44_p2_pilot_helmet",
            "44_barc_helmet",
            "44_p1_arf_helmet",
            "44_p2_arf_helmet",
            "44_eng_helmet",
            "44_p1_helmet",
            "44_p1_pilot_helmet",
            "44_p1_specop_helmet",
            "44_p2_specop_helmet",
            "44_rex_helmet",
            "44_scout_helmet",
            "44_hunter_helmet",
            "44_crosshair_helmet",
            "44_wrecker_helmet",
            "44_tech_helmet",
            "44_p2_helmet_Hollen",
            "44_p1_arf_helmet_monty",
            "44_barc_helmet_kripto",
            "44_p2_pilot_helmet_delta",
            "44_p1_specop_helmet_garrus",
            "44_p15_helmet_dishonored",
            "44_p1_arf_helmet_azarael",
            "44_airborne_helmet_nico",
            "44_eng_helmet_sexton",
            "44_p1_helmet_steele",
            "44_p1_pilot_helmet_euda",

            "44_swla_uniform",
            "44_swla_uniform_mc",
            "44_swla_uniform_hollen",
            "44_swla_uniform_kripto",
            "44_swla_uniform_monty",
            "44_swla_uniform_rex",
            "44_swla_uniform_delta",
            "44_swla_uniform_garrus",
            "44_swla_uniform_dishonored",
            "44_swla_uniform_azarael",
            "44_swla_uniform_nico",
            "44_swla_uniform_sexton",
            "44_swla_uniform_steele",
            "44_swla_uniform_euda",
            "",
            "",
            "",
            "",
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
    #include "44_unit.hpp"
    #include "44_backpack.hpp"
    #include "placeable_helmet.hpp"
};
class cfgweapons 
{
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
    #include "44_uniform.hpp"
    #include "44_helmet.hpp"
    #include "44_vest.hpp"
};