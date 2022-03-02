class cfgpatches
{
    class 442_misc_glasses
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core",
			"442_units"
        };
		requiredVersion = 0.1;
		units[] = {};
        weapons[] = {};
    };
};

class cfgglasses
{
	class G_Combat;
	class 442_clone_p1_glasses: G_Combat
	{
		author="kripto202";
		ace_Overlay = "\kobra\442_misc\glasses\data\442_p1_hud_ca.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ace_overlaycracked = "\kobra\442_misc\glasses\data\442_p1_hud_damage_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ACE_Resistance=1;
		ACE_Protection=1;
		ACE_TintAmount=0;
		displayname = "[K] P1 Hud";
		identityTypes[]={};
		mass=1;
		model="\A3\Weapons_f\DummyNVG";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class 442_clone_p2_glasses: 442_clone_p1_glasses
	{
		displayname = "[K] P2 Hud";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_Overlay="\kobra\442_misc\glasses\data\442_p2_hud_ca.paa";
		ace_overlaycracked="\kobra\442_misc\glasses\data\442_p2_hud_damage_ca.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
	};
	class 442_clone_ab_barc_glasses: 442_clone_p1_glasses
	{
		displayname = "[K] Airborne/Barc Hud";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_Overlay="\kobra\442_misc\glasses\data\442_ab_barc_hud_ca.paa";
		ace_overlaycracked="\kobra\442_misc\glasses\data\442_ab_barc_hud_damage_ca.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
	};
	class 442_clone_arf_glasses: 442_clone_p1_glasses
	{
		displayname = "[K] ARF Hud";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_Overlay="\kobra\442_misc\glasses\data\442_arf_hud_ca.paa";
		ace_overlaycracked="\kobra\442_misc\glasses\data\442_arf_hud_damage_ca.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
	};
	class 442_n_sensor: 442_clone_p1_glasses
	{
		ace_Overlay = "";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ace_overlaycracked = "";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		displayname = "[K] N-Type Sensor";
		mass = 1;
		model="kobra\442_misc\glasses\k_n_type_sensor.p3d";
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\glasses\data\sensor_co.paa"
		};
	};
	class 442_arf_brim: 442_n_sensor
	{
		displayname = "[K] Arf Brim";
		model="kobra\442_misc\glasses\k_arf_brim.p3d";
		hiddenselections[] = 
		{
			"brim",
			"plates",
			"macro_visor"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa",
			"",
			""
		};
	};
	class 442_arf_brim_plate: 442_arf_brim
	{
		displayname = "[K] Arf Brim w/ Plates";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa",
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa",
			""
		};
	};
	class 442_arf_brim_macro: 442_arf_brim
	{
		displayname = "[K] Arf Brim w/ Macro Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa",
			"",
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa"
		};
	};
	class 442_arf_brim_plate_macro: 442_arf_brim
	{
		displayname = "[K] Arf Brim w/ Plates, Macro Visor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa",
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa",
			"kobra\442_units\data\helmet\arf_helmet\arf_brim_co.paa"
		};
	};

	///custom
	class 442_n_sensor_44: 442_n_sensor
	{
		displayname = "[K/44] N-Type Sensor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\glasses\data\44_sensor_co.paa"
		};
	};
};