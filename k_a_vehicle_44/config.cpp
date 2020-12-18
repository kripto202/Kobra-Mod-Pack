class cfgpatches
{
    class k_a_vehicle_44
    {
        author = "KOBRA Mod Team";
        requiredaddons[] = 
        {
            "kobra_core"
        };
        requiredversion = 0.1;
        units[] = 
        {
            "442_laat_44",
            "442_laat_44_ab",
			"442_laat_44_delta",
			"442_laat_44_ab_delta",
			"442_laat_44_euda",
			"442_laat_44_ab_euda"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class 442_laat_2;
    class 442_laat_2_ab;
    class 442_laat_44: 442_laat_2
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        faction = "44_ab";
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
            "kobra\k_a_vehicle_44\data\laat\body_1_co.paa",
            "kobra\442_a_vehicle\laat\data\body_2_co.paa",
			"kobra\k_a_vehicle_44\data\laat\door_1_co.paa",
			"kobra\k_a_vehicle_44\data\laat\door_2_co.paa",
			"kobra\k_a_vehicle_44\data\laat\door_3_co.paa",
			"kobra\k_a_vehicle_44\data\laat\wings_co.paa",
			"kobra\442_a_vehicle\laat\data\missiles_co.paa",
			"kobra\442_a_vehicle\laat\data\cockpits_co.paa",
			"kobra\442_a_vehicle\laat\data\glass_ca.paa"
        };
    };
    class 442_laat_44_ab: 442_laat_2_ab
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        faction = "44_ab";
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
            "kobra\k_a_vehicle_44\data\laat\body_1_co.paa",
            "kobra\442_a_vehicle\laat\data\body_2_co.paa",
			"kobra\k_a_vehicle_44\data\laat\door_1_co.paa",
			"kobra\k_a_vehicle_44\data\laat\door_2_co.paa",
			"kobra\k_a_vehicle_44\data\laat\door_3_co.paa",
			"kobra\k_a_vehicle_44\data\laat\wings_co.paa",
			"kobra\442_a_vehicle\laat\data\missiles_co.paa",
			"kobra\442_a_vehicle\laat\data\cockpits_co.paa",
			"kobra\442_a_vehicle\laat\data\glass_ca.paa"
        };
    };

////////////delta/////////////
	class 442_laat_44_delta: 442_laat_44
	{
		displayname = "LAAT (Delta)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_a_vehicle_44\data\laat\body_1_Delta_co.paa",
            "kobra\442_a_vehicle\laat\data\body_2_co.paa",
			"kobra\k_a_vehicle_44\data\laat\door_1_co.paa",
			"kobra\k_a_vehicle_44\data\laat\door_2_co.paa",
			"kobra\k_a_vehicle_44\data\laat\door_3_co.paa",
			"kobra\k_a_vehicle_44\data\laat\wings_co.paa",
			"kobra\442_a_vehicle\laat\data\missiles_co.paa",
			"kobra\442_a_vehicle\laat\data\cockpits_co.paa",
			"kobra\442_a_vehicle\laat\data\glass_ca.paa"
		};
	};
	class 442_laat_44_ab_delta: 442_laat_44_ab
	{
		displayname = "LAAT AB (Delta)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_a_vehicle_44\data\laat\body_1_Delta_co.paa",
            "kobra\442_a_vehicle\laat\data\body_2_co.paa",
			"kobra\k_a_vehicle_44\data\laat\door_1_co.paa",
			"kobra\k_a_vehicle_44\data\laat\door_2_co.paa",
			"kobra\k_a_vehicle_44\data\laat\door_3_co.paa",
			"kobra\k_a_vehicle_44\data\laat\wings_co.paa",
			"kobra\442_a_vehicle\laat\data\missiles_co.paa",
			"kobra\442_a_vehicle\laat\data\cockpits_co.paa",
			"kobra\442_a_vehicle\laat\data\glass_ca.paa"
		};
	};

////////////euda//////////////
	class 442_laat_44_euda: 442_laat_44
	{
		displayname = "LAAT (Euda)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_a_vehicle_44\data\laat\body_1_euda_co.paa",
            "kobra\442_a_vehicle\laat\data\body_2_co.paa",
			"kobra\k_a_vehicle_44\data\laat\door_1_co.paa",
			"kobra\k_a_vehicle_44\data\laat\door_2_co.paa",
			"kobra\k_a_vehicle_44\data\laat\door_3_co.paa",
			"kobra\k_a_vehicle_44\data\laat\wings_co.paa",
			"kobra\442_a_vehicle\laat\data\missiles_co.paa",
			"kobra\442_a_vehicle\laat\data\cockpits_co.paa",
			"kobra\442_a_vehicle\laat\data\glass_ca.paa"
		};
	};
	class 442_laat_44_ab_euda: 442_laat_44_ab
	{
		displayname = "LAAT AB (Euda)";
		hiddenselectionstextures[] = 
		{
			"kobra\k_a_vehicle_44\data\laat\body_1_euda_co.paa",
            "kobra\442_a_vehicle\laat\data\body_2_co.paa",
			"kobra\k_a_vehicle_44\data\laat\door_1_co.paa",
			"kobra\k_a_vehicle_44\data\laat\door_2_co.paa",
			"kobra\k_a_vehicle_44\data\laat\door_3_co.paa",
			"kobra\k_a_vehicle_44\data\laat\wings_co.paa",
			"kobra\442_a_vehicle\laat\data\missiles_co.paa",
			"kobra\442_a_vehicle\laat\data\cockpits_co.paa",
			"kobra\442_a_vehicle\laat\data\glass_ca.paa"
		};
	};
};