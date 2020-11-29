class cfgpatches
{
    class k_a_vehicle_bl
    {
        author = "KOBRA Mod Team";
        requiredaddons[] = 
        {
            "kobra_core"
        };
        requiredversion = 0.1;
        units[] = 
        {
            "442_laat_bl",
            "442_laat_bl_ab"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class 442_laat_2;
    class 442_laat_2_ab;
    class 442_laat_bl: 442_laat_2
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        faction = "black_legion";
        hiddenselectionstextures[] = 
        {
            "k_a_vehicle_bl\data\laat\body_1_co.paa",
			"442_a_vehicle\laat\data\body_2_co.paa",
			"k_a_vehicle_bl\data\laat\door_1_co.paa",
			"k_a_vehicle_bl\data\laat\door_2_co.paa",
			"k_a_vehicle_bl\data\laat\door_3_co.paa",
			"k_a_vehicle_bl\data\laat\wings_co.paa",
			"442_a_vehicle\laat\data\missiles_co.paa",
			"442_a_vehicle\laat\data\cockpits_co.paa",
			"442_a_vehicle\laat\data\glass_ca.paa"
        };
    };
    class 442_laat_bl_ab: 442_laat_2_ab
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        faction = "black_legion";
        hiddenselectionstextures[] = 
        {
            "k_a_vehicle_bl\data\laat\body_1_co.paa",
			"442_a_vehicle\laat\data\body_2_co.paa",
			"k_a_vehicle_bl\data\laat\door_1_co.paa",
			"k_a_vehicle_bl\data\laat\door_2_co.paa",
			"k_a_vehicle_bl\data\laat\door_3_co.paa",
			"k_a_vehicle_bl\data\laat\wings_co.paa",
			"442_a_vehicle\laat\data\missiles_co.paa",
			"442_a_vehicle\laat\data\cockpits_co.paa",
			"442_a_vehicle\laat\data\glass_ca.paa"
        };
    };
};