class cfgpatches
{
    class k_equipment_44
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

class CfgWeapons
{
    #include "vest_clone_custom.hpp"
    #include "helmet_custom.hpp"
};