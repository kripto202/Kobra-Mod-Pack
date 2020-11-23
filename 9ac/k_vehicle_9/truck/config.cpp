class cfgpatches
{
    class k_vehicle_9_argon
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_argon_transport_9",
            "442_argon_covered_9",
            "442_argon_ammo_9",
            "442_argon_device_9",
            "442_argon_fuel_9",
            "442_argon_repair_9",
            "442_argon_medical_9"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class 442_argon_transport;
    class 442_argon_covered;
    class 442_argon_ammo;
    class 442_argon_device;
    class 442_argon_fuel;
    class 442_argon_repair;
    class 442_argon_medical;

    class 442_argon_transport_9: 442_argon_transport
    {
        faction = "9_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_9\truck\data\9_argon_front.paa",
            "",
            "k_vehicle_9\truck\data\9_argon_back.paa"
        };
    };
    class 442_argon_covered_9: 442_argon_covered
    {
        faction = "9_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_9\truck\data\9_argon_front.paa",
            "",
            "k_vehicle_9\truck\data\9_argon_back.paa",
            "k_vehicle_9\truck\data\9_argon_cover.paa"
        };
    };
    class 442_argon_ammo_9: 442_argon_ammo
    {
        faction = "9_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_9\truck\data\9_argon_front.paa",
            "",
            "k_vehicle_9\truck\data\9_argon_back.paa",
            "\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
        };
    };
    class 442_argon_device_9: 442_argon_device
    {
        faction = "9_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_9\truck\data\9_argon_front.paa",
            "",
            "k_vehicle_9\truck\data\9_argon_back.paa",
            "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
            "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
        };
    };
    class 442_argon_fuel_9: 442_argon_fuel
    {
        faction = "9_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_9\truck\data\9_argon_front.paa",
            "",
            "k_vehicle_9\truck\data\9_argon_fuel.paa"
        };
    };
    class 442_argon_repair_9: 442_argon_repair
    {
        faction = "9_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_9\truck\data\9_argon_front.paa",
            "",
            "k_vehicle_9\truck\data\9_argon_repair.paa"
        };
    };
    class 442_argon_medical_9: 442_argon_medical
    {
        faction = "9_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_9\truck\data\9_argon_front.paa",
            "",
            "k_vehicle_9\truck\data\9_argon_back.paa",
            "k_vehicle_9\truck\data\9_argon_cover_m.paa"
        };
    };
};