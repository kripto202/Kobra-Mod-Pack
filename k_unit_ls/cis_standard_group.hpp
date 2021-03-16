class k_ls_cis_infantry
{
    name = "Infantry";
    class k_ls_b1_infantry_group
    {
        name = "Group";
        side = 0;
        faction = "442_CIS";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0
		{
			side = 0;
			vehicle = "k_ls_unit_b1_e5";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 0;
			vehicle = "k_ls_unit_b1_e5";
			rank = "CORPORAL";
			position[] = {5,-5,0};
		};
    };
    class k_ls_b1_infantry_fireteam: k_ls_b1_infantry_group
    {
        name = "Fireteam";
        class Unit0: Unit0
        {
            vehicle = "k_ls_unit_b1_e5";
        };
        class Unit1: Unit1
        {
            vehicle = "k_ls_unit_b1_e5";
        };
        class Unit2
        {
            side = 0;
			vehicle = "k_ls_unit_b1_e5c";
			rank = "PRIVATE";
	    	position[] = {-5,-5,0};
        };
        class Unit3
		{
			side = 0;
			vehicle = "k_ls_unit_b1_e5_rps6";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
    };
    class k_ls_b1_infantry_AT: k_ls_b1_infantry_fireteam
    {
        name = "Anti-Tank";
        class Unit0: Unit0
        {
            vehicle = "k_ls_unit_b1_e5";
        };
        class Unit1: Unit1
        {
            vehicle = "k_ls_unit_b1_e5_rps6";
        };
        class Unit2: Unit2
        {
			vehicle = "k_ls_unit_b1_e5c";
        };
        class Unit3: Unit3
		{
			vehicle = "k_ls_unit_b1_e5_rps6";
		};
    };
    class k_ls_b1_infantry_H_AT: k_ls_b1_infantry_AT
    {
        name = "Heavy Anti-Tank";
        class Unit0: Unit0
        {
            vehicle = "k_ls_unit_b1_e5";
        };
        class Unit1: Unit1
        {
            vehicle = "k_ls_unit_b1_e5_rps6";
        };
        class Unit2: Unit2
        {
			vehicle = "k_ls_unit_b1_e5_e60r_at";
        };
        class Unit3: Unit3
		{
			vehicle = "k_ls_unit_b1_e5_e60r_at";
		};
    };
    class k_ls_b1_infantry_AA: k_ls_b1_infantry_fireteam
    {
        name = "Anti-Air";
        class Unit0: Unit0
        {
            vehicle = "k_ls_unit_b1_e5";
        };
        class Unit1: Unit1
        {
            vehicle = "k_ls_unit_b1_e5_e60r_aa";
        };
        class Unit2: Unit2
        {
			vehicle = "k_ls_unit_b1_e5c";
        };
        class Unit3
		{
			vehicle = "k_ls_unit_b1_e5_e60r_aa";
		};
    };
    class k_ls_b1_infantry_mg: k_ls_b1_infantry_group
    {
        name = "E6Z Group";
        class Unit0: Unit0
		{
			vehicle = "k_ls_unit_b1_e6z";
		};
		class Unit1: Unit1
		{
			vehicle = "k_ls_unit_b1_e6z";
		};
    };
    class k_ls_b1_infantry_marksman: k_ls_b1_infantry_group
    {
        name = "Marksman Group";
        class Unit0: Unit0
		{
			vehicle = "k_ls_unit_b1_dc15x";
		};
		class Unit1: Unit1
		{
			vehicle = "k_ls_unit_b1_dc15x";
		};
    };
    class k_ls_b1_infantry_squad: k_ls_b1_infantry_fireteam
    {
        name = "Squad";
        class Unit0: Unit0
        {
            vehicle = "k_ls_unit_b1_e5";
        };
        class Unit1: Unit1
        {
            vehicle = "k_ls_unit_b1_e5";
        };
        class Unit2: Unit2
        {
            vehicle = "k_ls_unit_b1_e5c";
        };
        class Unit3: Unit3
        {
            vehicle = "k_ls_unit_b1_e5_rps6";
        };
        class Unit4: Unit3
        {
            vehicle = "k_ls_unit_b1_e5";
            position[] = {-10,-10,0};
        };
        class Unit5: Unit3
        {
            vehicle = "k_ls_unit_b1_e6z";
            position[] = {15,-15,0};
        };
        class Unit6: Unit3
        {
            vehicle = "k_ls_unit_b1_e5";
            position[] = {-15,-15,0};
        };
        class Unit7: unit3
        {
            vehicle = "k_ls_unit_b1_e5";
            position[] = {20,-20,0};
        };
    };
};