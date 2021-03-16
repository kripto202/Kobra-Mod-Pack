class cfgpatches
{
    class k_unit_9
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = {};
        weapons[] = {};
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
    #include "9_unit.hpp"
    #include "9_backpack.hpp"
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
    #include "9_uniform.hpp"
    #include "9_helmet.hpp"
    #include "9_vest.hpp"
};