class cfgpatches
{
    class k_vehicle_44_argon
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_argon_transport_44",
            "442_argon_covered_44",
            "442_argon_ammo_44",
            "442_argon_device_44",
            "442_argon_fuel_44",
            "442_argon_repair_44",
            "442_argon_medical_44"
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
    class 442_warthog_unarmed;
    class 442_warthog_aa;
    class 442_warthog_gauss;
    class 442_warthog_mg;
    class 442_warthog_at;
    class 442_warthog_apc;
    class 442_warthog_repair;
    class 442_warthog_tt;

    class 442_argon_transport_44: 442_argon_transport
    {
        faction = "44_ab";
        hiddenselectionstextures[] = 
        {
            "kobra\k_vehicle_44\truck\data\44_argon_front.paa",
            "",
            "kobra\k_vehicle_44\truck\data\44_argon_back.paa"
        };
    };
    class 442_argon_covered_44: 442_argon_covered
    {
        faction = "44_ab";
        hiddenselectionstextures[] = 
        {
            "kobra\k_vehicle_44\truck\data\44_argon_front.paa",
            "",
            "kobra\k_vehicle_44\truck\data\44_argon_back.paa",
            "kobra\k_vehicle_44\truck\data\44_argon_cover.paa"
        };
    };
    class 442_argon_ammo_44: 442_argon_ammo
    {
        faction = "44_ab";
        hiddenselectionstextures[] = 
        {
            "kobra\k_vehicle_44\truck\data\44_argon_front.paa",
            "",
            "kobra\k_vehicle_44\truck\data\44_argon_back.paa",
            "\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
        };
    };
    class 442_argon_device_44: 442_argon_device
    {
        faction = "44_ab";
        hiddenselectionstextures[] = 
        {
            "kobra\k_vehicle_44\truck\data\44_argon_front.paa",
            "",
            "kobra\k_vehicle_44\truck\data\44_argon_back.paa",
            "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
            "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
        };
    };
    class 442_argon_fuel_44: 442_argon_fuel
    {
        faction = "44_ab";
        hiddenselectionstextures[] = 
        {
            "kobra\k_vehicle_44\truck\data\44_argon_front.paa",
            "",
            "kobra\k_vehicle_44\truck\data\44_argon_fuel.paa"
        };
    };
    class 442_argon_repair_44: 442_argon_repair
    {
        faction = "44_ab";
        hiddenselectionstextures[] = 
        {
            "kobra\k_vehicle_44\truck\data\44_argon_front.paa",
            "",
            "kobra\k_vehicle_44\truck\data\44_argon_repair.paa"
        };
    };
    class 442_argon_medical_44: 442_argon_medical
    {
        faction = "44_ab";
        hiddenselectionstextures[] = 
        {
            "kobra\k_vehicle_44\truck\data\44_argon_front.paa",
            "",
            "kobra\k_vehicle_44\truck\data\44_argon_back.paa",
            "kobra\k_vehicle_44\truck\data\44_argon_cover_m.paa"
        };
    };

    class 442_44ab_warthog_unarmed: 442_warthog_unarmed
	{
        faction="44_ab";
        hiddenSelectionsTextures[]=
		{
            "kobra\k_vehicle_optre\warthog\data\extupper_44_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa"
        };
    };

    class 442_44ab_warthog_aa: 442_warthog_aa
    {
        faction="44_ab";
        hiddenSelectionsTextures[]=
		{
            "kobra\k_vehicle_optre\warthog\data\extupper_44_co.paa",
            "\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa"
        };
    };

    class 442_44ab_warthog_gauss: 442_warthog_gauss
    {
        faction="44_ab";
        hiddenSelectionsTextures[]=
		{
            "kobra\k_vehicle_optre\warthog\data\extupper_44_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa"
        };
    };

    class 442_44ab_warthog_mg: 442_warthog_mg
    {
        faction="44_ab";
        hiddenSelectionsTextures[]=
		{
            "kobra\k_vehicle_optre\warthog\data\extupper_44_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa"
        };
    };

    class 442_44ab_warthog_at: 442_warthog_at
    {
        faction="44_ab";
        hiddenSelectionsTextures[]=
		{
            "kobra\k_vehicle_optre\warthog\data\extupper_44_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa"
        };
    };

    class 442_44ab_warthog_apc: 442_warthog_apc
    {
        faction="44_ab";
        hiddenSelectionsTextures[]=
		{
            "kobra\k_vehicle_optre\warthog\data\extupper_44_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa"
        };
    };

    class 442_44ab_warthog_repair: 442_warthog_repair
    {
        faction="44_ab";
        hiddenSelectionsTextures[]=
		{
            "kobra\k_vehicle_optre\warthog\data\extupper_44_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa"
        };
    };

    class 442_44ab_warthog_tt: 442_warthog_tt
    {
        faction="44_ab";
        hiddenSelectionsTextures[]=
		{
            "kobra\k_vehicle_optre\warthog\data\extupper_44_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa"
        };
    };
};