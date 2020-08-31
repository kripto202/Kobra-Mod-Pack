class 44_swla_unit_dc15a: 44_swla_unit
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "Trooper (DC-15A)";
		//icon = "";
		attendant = 0;
		engineer = false;
		canDeactivateMines="false";
		linkedItems[] = 
		{
			"44_p2_helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"44_p2_helmet",
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
	class 44_swla_unit_dc15s: 44_swla_unit_dc15a
	{
		displayname = "Trooper (DC-15S)";
		weapons[] = 
		{
			"442_DC15s",
			"Throw",
			"Put"
		};
		respawnweapons[] = 
		{
			"442_DC15s",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
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
	class 44_swla_unit_medic: 44_swla_unit_dc15s
	{
		displayname = "Trooper (Medic)";
		attendant = 1;
	};
	class 44_swla_unit_engineer: 44_swla_unit_dc15s
	{
		displayname = "Trooper (Engineer)";
		engineer = 1;
		canDeactivateMines= 1;
	};