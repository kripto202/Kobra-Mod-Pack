class cfgpatches
{
    class k_unit_44
    {
        author = "KOBRA Mod Team";
        requiredAddons[]={};
		requiredVersion = 0.1;
		units[] = {};
        weapons[] = {};
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