///clones
	class k_ls_unit_p2_dc15a: k_ls_unit_base
	{
		scope = 1;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "Trooper (DC-15A)";
		//icon = "";
		attendant = 0;
		engineer = false;
		canDeactivateMines="false";
		linkedItems[] = 
		{
			"k_ls_p2_helmet",
			"k_ls_vest_basic",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"k_ls_p2_helmet",
			"k_ls_vest_basic",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[] = 
		{
			"442_DC15A",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_DC15A",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"442_762_30rnd_blue_mag",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
	};
	class k_ls_unit_p2_dc15s: k_ls_unit_p2_dc15a
	{
		displayname = "Trooper (DC-15S)";
		weapons[] = 
		{
			"442_DC15s",
			"k_ls_vest_basic",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_DC15s",
			"k_ls_vest_basic",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"442_556_30rnd_blue_mag",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
	};
	class k_ls_unit_p2_medic: k_ls_unit_p2_dc15s
	{
		displayname = "Trooper (Medic)";
		attendant = 1;
	};
	class k_ls_unit_p2_engineer: k_ls_unit_p2_dc15s
	{
		displayname = "Trooper (Engineer)";
		engineer = 1;
		canDeactivateMines= 1;
	};

///b1
    class k_ls_unit_b1_e5: k_ls_unit_b1_base
    {
        scope = 1;
		scopecurator = 2;
		scopearsenal = 2;
        backpack = "k_ls_b1_backpack";
		displayname = "B1 Battledroid";
        editorSubCategory="442_battledroid_inf";
		//icon = "";
		attendant = 0;
		engineer = false;
		canDeactivateMines="false";
        linkedItems[] = 
		{
			"k_ls_b1_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"k_ls_b1_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[] = 
		{
			"442_E5",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };
    class k_ls_unit_b1_e5_rps6: k_ls_unit_b1_e5
    {
        displayname = "B1 Battledroid (RPS6)";
        backpack = "k_ls_b1_backpack_rps6_load";
        weapons[] = 
		{
			"442_E5",
            "442_RPS6",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
            "442_RPS6",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };
	class k_ls_unit_b1_dc15x: k_ls_unit_b1_e5
    {
        displayname = "B1 Battledroid (Marksman)";
        backpack = "k_ls_b1_backpack";
        weapons[] = 
		{
			"442_DC15X",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_DC15X",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };
	class k_ls_unit_b1_e5c: k_ls_unit_b1_e5
    {
		displayname = "B1 Battledroid (AutoRifleman)";
        backpack = "k_ls_b1_backpack";
        linkedItems[] = 
		{
			"k_ls_b1_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"k_ls_b1_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[] = 
		{
			"442_E5C",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5C",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };
	class k_ls_unit_b1_e6z: k_ls_unit_b1_e5
    {
		displayname = "B1 Battledroid (Support)";
        backpack = "k_ls_b1_backpack";
        linkedItems[] = 
		{
			"k_ls_b1_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"k_ls_b1_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[] = 
		{
			"442_E6Z",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E6Z",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };
	class k_ls_unit_b1_e5_e60r_at: k_ls_unit_b1_e5
    {
        displayname = "B1 Battledroid (E60R AT)";
        backpack = "k_ls_b1_backpack_e60r_at_load";
        weapons[] = 
		{
			"442_E5",
            "swlw_e60r",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
            "swlw_e60r",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };
	class k_ls_unit_b1_e5_e60r_aa: k_ls_unit_b1_e5
    {
        displayname = "B1 Battledroid (E60R AA)";
        backpack = "k_ls_b1_backpack_e60r_aa_load";
        weapons[] = 
		{
			"442_E5",
            "swlw_e60r_aa",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
            "swlw_e60r_aa",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };

    class k_ls_unit_b1_security_e5: k_ls_unit_b1_security_base
    {
        scope = 1;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "B1 Battledroid (Security)";
        editorSubCategory="442_battledroid_inf";
        backpack = "k_ls_b1_backpack";
		attendant = 0;
		engineer = false;
		canDeactivateMines="false";
        linkedItems[] = 
		{
			"k_ls_b1_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"k_ls_b1_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[] = 
		{
			"442_E5",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };
	class k_ls_unit_b1_security_e5_rps6: k_ls_unit_b1_security_e5
    {
        displayname = "B1 Battledroid [Security(RPS6)]";
        backpack = "k_ls_b1_backpack_rps6_load";
        weapons[] = 
		{
			"442_E5",
            "442_RPS6",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
            "442_RPS6",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };
	class k_ls_unit_b1_security_dc15x: k_ls_unit_b1_security_e5
    {
        displayname = "B1 Battledroid [Securty(Marksman)]";
        backpack = "k_ls_b1_backpack";
        weapons[] = 
		{
			"442_DC15X",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_DC15X",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };
	class k_ls_unit_b1_security_e5c: k_ls_unit_b1_security_e5
    {
		displayname = "B1 Battledroid [Security(AutoRifleman)]";
        backpack = "k_ls_b1_backpack";
        linkedItems[] = 
		{
			"k_ls_b1_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"k_ls_b1_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[] = 
		{
			"442_E5C",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5C",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };
	class k_ls_unit_b1_security_e6z: k_ls_unit_b1_security_e5
    {
		displayname = "B1 Battledroid [Security(Support)]";
        backpack = "k_ls_b1_backpack";
        linkedItems[] = 
		{
			"k_ls_b1_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"k_ls_b1_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[] = 
		{
			"442_E6Z",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E6Z",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };
	class k_ls_unit_b1_security_e5_e60r_at: k_ls_unit_b1_security_e5
    {
        displayname = "B1 Battledroid [Security(E60R AT)]";
        backpack = "k_ls_b1_backpack_e60r_at_load";
        weapons[] = 
		{
			"442_E5",
            "swlw_e60r",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
            "swlw_e60r",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };
	class k_ls_unit_b1_security_e5_e60r_aa: k_ls_unit_b1_security_e5
    {
        displayname = "B1 Battledroid [Security(E60R AA)]";
        backpack = "k_ls_b1_backpack_e60r_aa_load";
        weapons[] = 
		{
			"442_E5",
            "swlw_e60r_aa",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
            "swlw_e60r_aa",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };

    class k_ls_unit_b1_pilot_e5: k_ls_unit_b1_pilot_base
    {
        scope = 1;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "B1 Battledroid (Pilot)";
        editorSubCategory="442_battledroid_inf";
        backpack = "k_ls_b1_backpack";
		//icon = "";
		attendant = 0;
		engineer = false;
		canDeactivateMines="false";
        linkedItems[] = 
		{
			"k_ls_b1_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"k_ls_b1_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[] = 
		{
			"442_E5",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };
    class k_ls_unit_b1_cmd_e5: k_ls_unit_b1_cmd_base
    {
        scope = 1;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "B1 Battledroid (Commander)";
        editorSubCategory="442_battledroid_inf";
        backpack = "k_ls_b1_backpack";
		//icon = "";
		attendant = 0;
		engineer = false;
		canDeactivateMines="false";
        linkedItems[] = 
		{
			"k_ls_b1_helmet_cmd",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"k_ls_b1_helmet_cmd",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[] = 
		{
			"442_E5",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };

    class k_ls_unit_b1_geonosis_e5: k_ls_unit_b1_geonosis_base
    {
        scope = 1;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "B1 Battledroid";
        editorSubCategory="442_battledroid_inf_geonosis";
        backpack = "k_ls_b1_backpack_geonosis";
		//icon = "";
		attendant = 0;
		engineer = false;
		canDeactivateMines="false";
        linkedItems[] = 
		{
			"k_ls_b1_helmet_geonosis",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"k_ls_b1_helmet_geonosis",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[] = 
		{
			"442_E5",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };
	class k_ls_unit_b1_geonosis_e5_rps6: k_ls_unit_b1_geonosis_e5
    {
        displayname = "B1 Battledroid [Geonosis(RPS6)]";
        backpack = "k_ls_b1_backpack_geonosis_rps6_load";
        weapons[] = 
		{
			"442_E5",
            "442_RPS6",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
            "442_RPS6",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };
	class k_ls_unit_b1_geonosis_dc15x: k_ls_unit_b1_geonosis_e5
    {
        displayname = "B1 Battledroid [Geonosis(Marksman)]";
        backpack = "k_ls_b1_backpack_geonosis";
        weapons[] = 
		{
			"442_DC15X",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_DC15X",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };
	class k_ls_unit_b1_geonosis_e5c: k_ls_unit_b1_geonosis_e5
    {
		displayname = "B1 Battledroid [Geonosis(AutoRifleman)]";
        backpack = "k_ls_b1_backpack_geonosis";
        linkedItems[] = 
		{
			"k_ls_b1_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"k_ls_b1_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[] = 
		{
			"442_E5C",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5C",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };
	class k_ls_unit_b1_geonosis_e6z: k_ls_unit_b1_geonosis_e5
    {
		displayname = "B1 Battledroid [Geonosis(Support)]";
        backpack = "k_ls_b1_backpack_geonosis";
        linkedItems[] = 
		{
			"k_ls_b1_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"k_ls_b1_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[] = 
		{
			"442_E6Z",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E6Z",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };
	class k_ls_unit_b1_geonosis_e5_e60r_at: k_ls_unit_b1_geonosis_e5
    {
        displayname = "B1 Battledroid [Geonosis(E60R AT)]";
        backpack = "k_ls_b1_backpack_geonosis_e60r_at_load";
        weapons[] = 
		{
			"442_E5",
            "swlw_e60r",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
            "swlw_e60r",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };
	class k_ls_unit_b1_geonosis_e5_e60r_aa: k_ls_unit_b1_geonosis_e5
    {
        displayname = "B1 Battledroid [Geonosis(E60R AA)]";
        backpack = "k_ls_b1_backpack_geonosis_e60r_aa_load";
        weapons[] = 
		{
			"442_E5",
            "swlw_e60r_aa",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
            "swlw_e60r_aa",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };

    class k_ls_unit_b1_woodland_e5: k_ls_unit_b1_woodland_base
    {
        scope = 1;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "B1 Battledroid";
		backpack = "k_ls_b1_backpack_woodland";
        editorSubCategory="442_battledroid_inf_woodland";
		//icon = "";
		attendant = 0;
		engineer = false;
		canDeactivateMines="false";
        linkedItems[] = 
		{
			"k_ls_b1_helmet_woodland",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"k_ls_b1_helmet_woodland",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[] = 
		{
			"442_E5",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };
	class k_ls_unit_b1_woodland_e5_rps6: k_ls_unit_b1_woodland_e5
    {
        displayname = "B1 Battledroid [Woodland(RPS6)]";
        backpack = "k_ls_b1_backpack_woodland_rps6_load";
        weapons[] = 
		{
			"442_E5",
            "442_RPS6",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
            "442_RPS6",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };
	class k_ls_unit_b1_woodland_dc15x: k_ls_unit_b1_woodland_e5
    {
        displayname = "B1 Battledroid [Woodland(Marksman)]";
        backpack = "k_ls_b1_backpack_woodland";
        weapons[] = 
		{
			"442_DC15X",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_DC15X",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };
	class k_ls_unit_b1_woodland_e5c: k_ls_unit_b1_woodland_e5
    {
		displayname = "B1 Battledroid [Woodland(AutoRifleman)]";
        backpack = "k_ls_b1_backpack_woodland";
		weapons[] = 
		{
			"442_E5C",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5C",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };
	class k_ls_unit_b1_woodland_e6z: k_ls_unit_b1_woodland_e5
    {
		displayname = "B1 Battledroid [Woodland(Support)]";
        backpack = "k_ls_b1_backpack_woodland";
		weapons[] = 
		{
			"442_E6Z",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E6Z",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };
	class k_ls_unit_b1_woodland_e5_e60r_at: k_ls_unit_b1_woodland_e5
    {
        displayname = "B1 Battledroid [Woodland(E60R AT)]";
        backpack = "k_ls_b1_backpack_woodland_e60r_at_load";
        weapons[] = 
		{
			"442_E5",
            "swlw_e60r",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
            "swlw_e60r",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };
	class k_ls_unit_b1_woodland_e5_e60r_aa: k_ls_unit_b1_woodland_e5
    {
        displayname = "B1 Battledroid [Woodland(E60R AA)]";
        backpack = "k_ls_b1_backpack_woodland_e60r_aa_load";
        weapons[] = 
		{
			"442_E5",
            "swlw_e60r_aa",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
            "swlw_e60r_aa",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };

    class k_ls_unit_b1_desert_e5: k_ls_unit_b1_desert_base
    {
        scope = 1;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "B1 Battledroid";
		backpack = "k_ls_b1_backpack_desert";
        editorSubCategory="442_battledroid_inf_desert";
		//icon = "";
		attendant = 0;
		engineer = false;
		canDeactivateMines="false";
        linkedItems[] = 
		{
			"k_ls_b1_helmet_desert",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"k_b1_helmet_desert",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[] = 
		{
			"442_E5",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };
	class k_ls_unit_b1_desert_e5_rps6: k_ls_unit_b1_desert_e5
    {
        displayname = "B1 Battledroid [Desert(RPS6)]";
        backpack = "k_ls_b1_backpack_desert_rps6_load";
        weapons[] = 
		{
			"442_E5",
            "442_RPS6",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
            "442_RPS6",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };
	class k_ls_unit_b1_desert_dc15x: k_ls_unit_b1_desert_e5
    {
        displayname = "B1 Battledroid [Desert(Marksman)]";
        backpack = "";
        weapons[] = 
		{
			"442_DC15X",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_DC15X",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };
	class k_ls_unit_b1_desert_e5c: k_ls_unit_b1_desert_e5
    {
		displayname = "B1 Battledroid [Desert(AutoRifleman)]";
		weapons[] = 
		{
			"442_E5C",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5C",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };
	class k_ls_unit_b1_desert_e6z: k_ls_unit_b1_desert_e5
    {
		displayname = "B1 Battledroid [Desert(Support)]";
		weapons[] = 
		{
			"442_E6Z",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E6Z",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };
	class k_ls_unit_b1_desert_e5_e60r_at: k_ls_unit_b1_desert_e5
    {
        displayname = "B1 Battledroid [Desert(E60R AT)]";
        backpack = "k_ls_b1_backpack_desert_e60r_at_load";
        weapons[] = 
		{
			"442_E5",
            "swlw_e60r",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
            "swlw_e60r",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };
	class k_ls_unit_b1_desert_e5_e60r_aa: k_ls_unit_b1_desert_e5
    {
        displayname = "B1 Battledroid [Desert(E60R AA)]";
        backpack = "k_ls_b1_backpack_desert_e60r_aa_load";
        weapons[] = 
		{
			"442_E5",
            "swlw_e60r_aa",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
            "swlw_e60r_aa",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };

    class k_ls_unit_b1_winter_e5: k_ls_unit_b1_winter_base
    {
        scope = 1;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "B1 Battledroid";
		backapck = "k_ls_b1_backpack_winter";
        editorSubCategory="442_battledroid_inf_winter";
		//icon = "";
		attendant = 0;
		engineer = false;
		canDeactivateMines="false";
        linkedItems[] = 
		{
			"k_ls_b1_helmet_winter",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"k_ls_b1_helmet_winter",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[] = 
		{
			"442_E5",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };
	class k_ls_unit_b1_winter_e5_rps6: k_ls_unit_b1_winter_e5
    {
        displayname = "B1 Battledroid [Winter(RPS6)]";
        backpack = "k_ls_b1_backpack_winter_rps6_load";
        weapons[] = 
		{
			"442_E5",
            "442_RPS6",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
            "442_RPS6",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };
	class k_ls_unit_b1_winter_dc15x: k_ls_unit_b1_winter_e5
    {
        displayname = "B1 Battledroid [Winter(Marksman)]";
        backapck = "k_ls_b1_backpack_winter";
        weapons[] = 
		{
			"442_DC15X",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_DC15X",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_408_10rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };
	class k_ls_unit_b1_winter_e5c: k_ls_unit_b1_winter_e5
    {
		displayname = "B1 Battledroid [Winter(AutoRifleman)]";
		backapck = "k_ls_b1_backpack_winter";
		weapons[] = 
		{
			"442_E5C",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5C",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_65_60rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };
	class k_ls_unit_b1_winter_e6z: k_ls_unit_b1_winter_e5
    {
		displayname = "B1 Battledroid [Winter(Support)]";
		backapck = "k_ls_b1_backpack_winter";
		weapons[] = 
		{
			"442_E6Z",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E6Z",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_556_200rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
        items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
    };
	class k_ls_unit_b1_winter_e5_e60r_at: k_ls_unit_b1_winter_e5
    {
        displayname = "B1 Battledroid [Winter(E60R AT)]";
        backpack = "k_ls_b1_backpack_winter_e60r_at_load";
        weapons[] = 
		{
			"442_E5",
            "swlw_e60r",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
            "swlw_e60r",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };
	class k_ls_unit_b1_winter_e5_e60r_aa: k_ls_unit_b1_winter_e5
    {
        displayname = "B1 Battledroid [Winter(E60R AA)]";
        backpack = "k_ls_b1_backpack_winter_e60r_aa_load";
        weapons[] = 
		{
			"442_E5",
            "swlw_e60r_aa",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_E5",
            "swlw_e60r_aa",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_65_30rnd_red_mag",
			"442_thermal_det_mag",
			"smokeShellBlue",
			"smokeShellBlue",
			"smokeShellRed",
			"smokeShellRed",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
    };