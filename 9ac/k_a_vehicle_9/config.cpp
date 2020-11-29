class cfgpatches
{
    class k_a_vehicle_9
    {
        author = "KOBRA Mod Team";
        requiredaddons[] = 
        {
            "kobra_core"
        };
        requiredversion = 0.1;
        units[] = 
        {
            "442_laat_9",
            "442_laat_9_ab",
            "442_laat_9_doc",
            "442_laat_9_doc_ab"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class 442_laat_2;
    class 442_laat_2_ab;
    class 442_laat_9: 442_laat_2
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        faction = "9_ac";
        hiddenselectionstextures[] = 
        {
            "k_a_vehicle_9\data\laat\body_1_co.paa",
			"442_a_vehicle\laat\data\body_2_co.paa",
			"442_a_vehicle\laat\data\door_1_co.paa",
			"442_a_vehicle\laat\data\door_2_co.paa",
			"442_a_vehicle\laat\data\door_3_co.paa",
			"k_a_vehicle_9\data\laat\wings_co.paa",
			"442_a_vehicle\laat\data\missiles_co.paa",
			"442_a_vehicle\laat\data\cockpits_co.paa",
			"442_a_vehicle\laat\data\glass_ca.paa"
        };
    };
    class 442_laat_9_doc: 442_laat_9
    {
        displayname="LAAT/I Gunship (Doc)";
        hiddenselectionstextures[] = 
		{
			"k_a_vehicle_9\data\laat\body_1_doc_co.paa",
			"442_a_vehicle\laat\data\body_2_co.paa",
			"442_a_vehicle\laat\data\door_1_co.paa",
			"442_a_vehicle\laat\data\door_2_co.paa",
			"442_a_vehicle\laat\data\door_3_co.paa",
			"k_a_vehicle_9\data\laat\wings_co.paa",
			"442_a_vehicle\laat\data\missiles_co.paa",
			"442_a_vehicle\laat\data\cockpits_co.paa",
			"442_a_vehicle\laat\data\glass_ca.paa"
		};
    };
    class 442_laat_9_ab: 442_laat_2_ab
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        faction = "9_ac";
        hiddenselectionstextures[] = 
        {
            "k_a_vehicle_9\data\laat\body_1_co.paa",
			"442_a_vehicle\laat\data\body_2_co.paa",
			"442_a_vehicle\laat\data\door_1_co.paa",
			"442_a_vehicle\laat\data\door_2_co.paa",
			"442_a_vehicle\laat\data\door_3_co.paa",
			"k_a_vehicle_9\data\laat\wings_co.paa",
			"442_a_vehicle\laat\data\missiles_co.paa",
			"442_a_vehicle\laat\data\cockpits_co.paa",
			"442_a_vehicle\laat\data\glass_ca.paa"
        };
    };
    class 442_laat_9_doc_ab: 442_laat_9_ab
    {
        displayname="LAAT/I Gunship (Doc)";
        hiddenselectionstextures[] = 
		{
			"k_a_vehicle_9\data\laat\body_1_doc_co.paa",
			"442_a_vehicle\laat\data\body_2_co.paa",
			"442_a_vehicle\laat\data\door_1_co.paa",
			"442_a_vehicle\laat\data\door_2_co.paa",
			"442_a_vehicle\laat\data\door_3_co.paa",
			"k_a_vehicle_9\data\laat\wings_co.paa",
			"442_a_vehicle\laat\data\missiles_co.paa",
			"442_a_vehicle\laat\data\cockpits_co.paa",
			"442_a_vehicle\laat\data\glass_ca.paa"
		};
    };
};