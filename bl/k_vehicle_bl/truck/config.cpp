class cfgpatches
{
    class k_vehicle_bl_truck
    {
        author = "KOBRA Mod Team";
        requiredAddons[]={};
		requiredVersion = 0.1;
		units[] = 
        {
            "442_argon_transport_bl",
            "442_argon_covered_bl",
            "442_argon_ammo_bl",
            "442_argon_device_bl",
            "442_argon_fuel_bl",
            "442_argon_repair_bl",
            "442_argon_medical_bl"
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

    class 442_argon_transport_bl: 442_argon_transport
    {
        faction = "black_legion";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_bl\truck\data\bl_truck_body.paa",
            "",
            "k_vehicle_bl\truck\data\bl_truck_cargo.paa"
        };
    };
    class 442_argon_covered_bl: 442_argon_covered
    {
        faction = "black_legion";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_bl\truck\data\bl_truck_body.paa",
            "",
            "k_vehicle_bl\truck\data\bl_truck_cargo.paa",
            "k_vehicle_bl\truck\data\bl_truck_cover.paa"
        };
    };
    class 442_argon_ammo_bl: 442_argon_ammo
    {
        faction = "black_legion";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_bl\truck\data\bl_truck_body.paa",
            "",
            "k_vehicle_bl\truck\data\bl_truck_cargo.paa",
            "\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
        };
    };
    class 442_argon_device_bl: 442_argon_device
    {
        faction = "black_legion";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_bl\truck\data\bl_truck_body.paa",
            "",
            "k_vehicle_bl\truck\data\bl_truck_cargo.paa",
            "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
            "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
        };
    };
    class 442_argon_fuel_bl: 442_argon_fuel
    {
        faction = "black_legion";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_bl\truck\data\bl_truck_body.paa",
            "",
            "k_vehicle_bl\truck\data\bl_truck_fuel.paa"
        };
    };
    class 442_argon_repair_bl: 442_argon_repair
    {
        faction = "black_legion";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_bl\truck\data\bl_truck_body.paa",
            "",
            "k_vehicle_bl\truck\data\bl_truck_repair.paa"
        };
    };
    class 442_argon_medical_bl: 442_argon_medical
    {
        faction = "black_legion";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_bl\truck\data\bl_truck_body.paa",
            "",
            "k_vehicle_bl\truck\data\bl_truck_cargo.paa",
            "k_vehicle_bl\truck\data\bl_truck_cover_m.paa"
        };
    };
};