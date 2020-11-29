class cfgpatches
{
    class k_a_vehicle_125
    {
        author = "KOBRA Mod Team";
        requiredaddons[] = 
        {
            "kobra_core"
        };
        requiredversion = 0.1;
        units[] = 
        {
            "442_laat_125",
            "442_laat_125_ab"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class 442_laat_2;
    class 442_laat_2_ab;
    class 442_laat_125: 442_laat_2
    {
        scope = 2;
        faction = "125_ac";
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselectionstextures[] = 
        {
            "k_a_vehicle_125\data\laat\body_co.paa",
            "442_a_vehicle\laat\data\body_2_co.paa",
			"442_a_vehicle\laat\data\door_1_co.paa",
			"442_a_vehicle\laat\data\door_2_co.paa",
			"442_a_vehicle\laat\data\door_3_co.paa",
			"k_a_vehicle_125\data\laat\wings_co.paa",
			"442_a_vehicle\laat\data\missiles_co.paa",
			"442_a_vehicle\laat\data\cockpits_co.paa",
			"442_a_vehicle\laat\data\glass_ca.paa"
        };
    };
    class 442_laat_125_ab: 442_laat_2_ab
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        faction = "125_ac";
        hiddenselectionstextures[] = 
        {
            "k_a_vehicle_125\data\laat\body_co.paa",
            "442_a_vehicle\laat\data\body_2_co.paa",
			"442_a_vehicle\laat\data\door_1_co.paa",
			"442_a_vehicle\laat\data\door_2_co.paa",
			"442_a_vehicle\laat\data\door_3_co.paa",
			"k_a_vehicle_125\data\laat\wings_co.paa",
			"442_a_vehicle\laat\data\missiles_co.paa",
			"442_a_vehicle\laat\data\cockpits_co.paa",
			"442_a_vehicle\laat\data\glass_ca.paa"
        };
    };
};