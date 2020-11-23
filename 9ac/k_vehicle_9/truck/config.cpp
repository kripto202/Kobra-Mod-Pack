class cfgpatches
{
    class k_vehicle_9_truck
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_argon_transport_44",
            "442_argon_covered_44",
            "442_argon_ammo_44",
            "442_argon_device_44",
            "442_argon_fuel_44",
            "442_argon_repair_44",
            "442_argon_medical_44"
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

    class 442_argon_transport_44: 442_argon_transport
    {
        faction = "9_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_44\truck\data\9_truck_body.paa",
            "",
            "k_vehicle_44\truck\data\9_truck_cargo.paa"
        };
    };
    class 442_argon_covered_44: 442_argon_covered
    {
        faction = "9_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_44\truck\data\9_truck_body.paa",
            "",
            "k_vehicle_44\truck\data\9_truck_cargo.paa",
            "k_vehicle_44\truck\data\9_truck_cover.paa"
        };
    };
    class 442_argon_ammo_44: 442_argon_ammo
    {
        faction = "9_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_44\truck\data\9_truck_body.paa",
            "",
            "k_vehicle_44\truck\data\9_truck_cargo.paa",
            "\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
        };
    };
    class 442_argon_device_44: 442_argon_device
    {
        faction = "9_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_44ab\truck\data\9_truck_body.paa",
            "",
            "k_vehicle_44ab\truck\data\9_truck_cargo.paa",
            "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
            "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
        };
    };
    class 442_argon_fuel_44: 442_argon_fuel
    {
        faction = "9_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_44ab\truck\data\9_truck_body.paa",
            "",
            "k_vehicle_44ab\truck\data\9_truck_fuel.paa"
        };
    };
    class 442_argon_repair_44: 442_argon_repair
    {
        faction = "9_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_44ab\truck\data\9_truck_body.paa",
            "",
            "k_vehicle_44ab\truck\data\9_truck_repair.paa"
        };
    };
    class 442_argon_medical_44: 442_argon_medical
    {
        faction = "9_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_44ab\truck\data\9_truck_body.paa",
            "",
            "k_vehicle_44ab\truck\data\9_truck_cargo.paa",
            "k_vehicle_44ab\truck\data\9_truck_cover_m.paa"
        };
    };
};