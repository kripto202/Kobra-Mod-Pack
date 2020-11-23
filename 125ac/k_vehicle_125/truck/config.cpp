class cfgpatches
{
    class k_vehicle_125ac_truck
    {
        author = "KOBRA Mod Team";
        requiredAddons[]={};
		requiredVersion = 0.1;
		units[] = 
        {
            "442_argon_transport_125",
            "442_argon_covered_125",
            "442_argon_ammo_125",
            "442_argon_device_125",
            "442_argon_fuel_125",
            "442_argon_repair_125",
            "442_argon_medical_125"
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

    class 442_argon_transport_125: 442_argon_transport
    {
        faction = "125_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_125ac\truck\data\125_truck_body.paa",
            "",
            "k_vehicle_125ac\truck\data\125_truck_cargo.paa"
        };
    };
    class 442_argon_covered_125: 442_argon_covered
    {
        faction = "125_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_125ac\truck\data\125_truck_body.paa",
            "",
            "k_vehicle_125ac\truck\data\125_truck_cargo.paa",
            "k_vehicle_125ac\truck\data\125_truck_cover.paa"
        };
    };
    class 442_argon_ammo_125: 442_argon_ammo
    {
        faction = "125_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_125ac\truck\data\125_truck_body.paa",
            "",
            "k_vehicle_125ac\truck\data\125_truck_cargo.paa",
            "\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
        };
    };
    class 442_argon_device_125: 442_argon_device
    {
        faction = "125_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_125ac\truck\data\125_truck_body.paa",
            "",
            "k_vehicle_125ac\truck\data\125_truck_cargo.paa",
            "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
            "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
        };
    };
    class 442_argon_fuel_125: 442_argon_fuel
    {
        faction = "125_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_125ac\truck\data\125_truck_body.paa",
            "",
            "k_vehicle_125ac\truck\data\125_truck_fuel.paa"
        };
    };
    class 442_argon_repair_125: 442_argon_repair
    {
        faction = "125_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_125ac\truck\data\125_truck_body.paa",
            "",
            "k_vehicle_125ac\truck\data\125_truck_repair.paa"
        };
    };
    class 442_argon_medical_125: 442_argon_medical
    {
        faction = "125_ac";
        hiddenselectionstextures[] = 
        {
            "k_vehicle_125ac\truck\data\125_truck_body.paa",
            "",
            "k_vehicle_125ac\truck\data\125_truck_cargo.paa",
            "k_vehicle_125ac\truck\data\125_truck_cover_m.paa"
        };
    };
};