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
            "442_laat_125_ab",
			
			"442_laat_125_hei_hei",
			"442_laat_125_Womble",
			"442_laat_125_ab_hei_hei",
			"442_laat_125_ab_womble"
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
        hiddenselections[]=
		{
			"body",
			"body_2",
			"door_1",
			"door_2",
			"door_3",
			"wings",
			"missiles",
			"cockpits",
			"glass",
			"clan",
			"zasleh_l",
			"zasleh_r",
			"zasleh_b"
		};
        hiddenselectionstextures[] = 
        {
            "kobra\k_a_vehicle_125\data\laat\body_co.paa",
            "kobra\442_a_vehicle\laat\data\body_2_co.paa",
			"kobra\442_a_vehicle\laat\data\door_1_co.paa",
			"kobra\442_a_vehicle\laat\data\door_2_co.paa",
			"kobra\442_a_vehicle\laat\data\door_3_co.paa",
			"kobra\k_a_vehicle_125\data\laat\wings_co.paa",
			"kobra\442_a_vehicle\laat\data\missiles_co.paa",
			"kobra\442_a_vehicle\laat\data\cockpits_co.paa",
			"kobra\442_a_vehicle\laat\data\glass_ca.paa"
        };
    };
	class 442_laat_125_hei_hei: 442_laat_125
	{
		displayname="LAAT/I Gunship (Hei Hei)";
		hiddenselectionstextures[] = 
        {
            "kobra\k_a_vehicle_125\data\laat\Hei_hei_body_co.paa",
            "kobra\442_a_vehicle\laat\data\body_2_co.paa",
			"kobra\442_a_vehicle\laat\data\door_1_co.paa",
			"kobra\442_a_vehicle\laat\data\door_2_co.paa",
			"kobra\442_a_vehicle\laat\data\door_3_co.paa",
			"kobra\k_a_vehicle_125\data\laat\wings_co.paa",
			"kobra\442_a_vehicle\laat\data\missiles_co.paa",
			"kobra\442_a_vehicle\laat\data\cockpits_co.paa",
			"kobra\442_a_vehicle\laat\data\glass_ca.paa"
        };
	};
	class 442_laat_125_Womble: 442_laat_125
	{
		displayname="LAAT/I Gunship (Womble)";
		hiddenselectionstextures[] = 
        {
            "kobra\k_a_vehicle_125\data\laat\Womble_body_co.paa",
            "kobra\442_a_vehicle\laat\data\body_2_co.paa",
			"kobra\442_a_vehicle\laat\data\door_1_co.paa",
			"kobra\442_a_vehicle\laat\data\door_2_co.paa",
			"kobra\442_a_vehicle\laat\data\door_3_co.paa",
			"kobra\k_a_vehicle_125\data\laat\wings_co.paa",
			"kobra\442_a_vehicle\laat\data\missiles_co.paa",
			"kobra\442_a_vehicle\laat\data\cockpits_co.paa",
			"kobra\442_a_vehicle\laat\data\glass_ca.paa"
        };
	};
    class 442_laat_125_ab: 442_laat_2_ab
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        faction = "125_ac";
        hiddenselections[]=
		{
			"body",
			"body_2",
			"door_1",
			"door_2",
			"door_3",
			"wings",
			"missiles",
			"cockpits",
			"glass",
			"clan",
			"zasleh_l",
			"zasleh_r",
			"zasleh_b"
		};
        hiddenselectionstextures[] = 
        {
            "kobra\k_a_vehicle_125\data\laat\body_co.paa",
            "kobra\442_a_vehicle\laat\data\body_2_co.paa",
			"kobra\442_a_vehicle\laat\data\door_1_co.paa",
			"kobra\442_a_vehicle\laat\data\door_2_co.paa",
			"kobra\442_a_vehicle\laat\data\door_3_co.paa",
			"kobra\k_a_vehicle_125\data\laat\wings_co.paa",
			"kobra\442_a_vehicle\laat\data\missiles_co.paa",
			"kobra\442_a_vehicle\laat\data\cockpits_co.paa",
			"kobra\442_a_vehicle\laat\data\glass_ca.paa"
        };
    };
	class 442_laat_125_ab_hei_hei: 442_laat_125
	{
		displayname="LAAT/I Gunship (Airborne) (Hei Hei)";
		hiddenselectionstextures[] = 
        {
            "kobra\k_a_vehicle_125\data\laat\Hei_hei_body_co.paa",
            "kobra\442_a_vehicle\laat\data\body_2_co.paa",
			"kobra\442_a_vehicle\laat\data\door_1_co.paa",
			"kobra\442_a_vehicle\laat\data\door_2_co.paa",
			"kobra\442_a_vehicle\laat\data\door_3_co.paa",
			"kobra\k_a_vehicle_125\data\laat\wings_co.paa",
			"kobra\442_a_vehicle\laat\data\missiles_co.paa",
			"kobra\442_a_vehicle\laat\data\cockpits_co.paa",
			"kobra\442_a_vehicle\laat\data\glass_ca.paa"
        };
	};
	class 442_laat_125_ab_womble: 442_laat_125
	{
		displayname="LAAT/I Gunship (Airborne) (Womble)";
		hiddenselectionstextures[] = 
        {
            "kobra\k_a_vehicle_125\data\laat\womble_body_co.paa",
            "kobra\442_a_vehicle\laat\data\body_2_co.paa",
			"kobra\442_a_vehicle\laat\data\door_1_co.paa",
			"kobra\442_a_vehicle\laat\data\door_2_co.paa",
			"kobra\442_a_vehicle\laat\data\door_3_co.paa",
			"kobra\k_a_vehicle_125\data\laat\wings_co.paa",
			"kobra\442_a_vehicle\laat\data\missiles_co.paa",
			"kobra\442_a_vehicle\laat\data\cockpits_co.paa",
			"kobra\442_a_vehicle\laat\data\glass_ca.paa"
        };
	};
};