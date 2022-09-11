class cfgpatches
{
    class 442_equipment_glasses
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
///helmet interior huds
	class 442_clone_p1_glasses: G_Combat
	{
		author="kripto202";
		ace_Overlay = "kobra\442_equipment\glasses\data\hud\442_p1_hud_ca.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ace_overlaycracked = "kobra\442_equipment\glasses\data\hud\442_p1_hud_damage_ca.paa";
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
		ace_Overlay="kobra\442_equipment\glasses\data\hud\442_p2_hud_ca.paa";
		ace_overlaycracked="kobra\442_equipment\glasses\data\hud\442_p2_hud_damage_ca.paa";
	};
	class 442_clone_ab_barc_glasses: 442_clone_p1_glasses
	{
		displayname = "[K] Airborne/Barc Hud";
		ace_Overlay="kobra\442_equipment\glasses\data\hud\442_ab_barc_hud_ca.paa";
		ace_overlaycracked="kobra\442_equipment\glasses\data\hud\442_ab_barc_hud_damage_ca.paa";
	};
	class 442_clone_arf_glasses: 442_clone_p1_glasses
	{
		displayname = "[K] ARF Hud";
		ace_Overlay="kobra\442_equipment\glasses\data\hud\442_arf_hud_ca.paa";
		ace_overlaycracked="kobra\442_equipment\glasses\data\hud\442_arf_hud_damage_ca.paa";
	};
///helmet attachments
	class 442_n_sensor: 442_clone_p1_glasses
	{
		ace_Overlay = "";
		ace_overlaycracked = "";
		displayname = "[K] N-Type Sensor";
		mass = 1;
		model="kobra\442_equipment\glasses\model\k_n_type_sensor.p3d";
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\n_sensor\ear_sensor_co.paa"
		};
	};
	class 442_n_sensor_44: 442_n_sensor
	{
		displayname = "[44/K] N-Type Sensor";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\n_sensor\unit_designs\44ab\ear_sensor_co.paa"
		};
	};
////p1 helmet attachments
	class 442_p1_clone_glass1: 442_clone_p1_glasses
	{
		displayname = "[K] P1 Clone Helmet Attachments 1";
		model = "kobra\442_equipment\glasses\model\clone\k_p1_clone_glasses1.p3d";
		hiddenselections[] = 
		{
			"macro_visor"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\p1\p1_macro_visor_co.paa"
		};
	};
	class 442_p1_clone_glass2: 442_clone_p1_glasses
	{
		displayname = "[K] P1 Clone Helmet Attachments 1";
		model = "kobra\442_equipment\glasses\model\clone\k_p1_clone_glasses2.p3d";
		hiddenselections[] = 
		{
			"rangefinder"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\rangefinder\rangefinder_co.paa"
		};
	};
	class 442_p1_clone_glass3: 442_clone_p1_glasses
	{
		displayname = "[K] P1 Clone Helmet Attachments 3";
		model = "kobra\442_equipment\glasses\model\clone\k_p1_clone_glasses3.p3d";
		hiddenselections[] = 
		{
			"visor"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\p1\p1_visor_co.paa"
		};
	};
	class 442_p1_clone_glass4: 442_clone_p1_glasses
	{
		displayname = "[K] P1 Clone Helmet Attachments 4";
		model = "kobra\442_equipment\glasses\model\clone\k_p1_clone_glasses4.p3d";
		hiddenselections[] = 
		{
			"visor",
			"rangefinder"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\p1\p1_visor_co.paa",
			"kobra\442_equipment\glasses\data\clone\rangefinder\rangefinder_co.paa"
		};
	};
	class 442_p1_clone_glass5: 442_clone_p1_glasses
	{
		displayname = "[K] P1 Clone Helmet Attachments 5";
		model = "kobra\442_equipment\glasses\model\clone\k_p1_clone_glasses5.p3d";
		hiddenselections[] = 
		{
			"antenna",
			"visor",
			"rangefinder"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\p1\p1_visor_attachments_co.paa",
			"kobra\442_equipment\glasses\data\clone\p1\p1_visor_co.paa",
			"kobra\442_equipment\glasses\data\clone\rangefinder\rangefinder_co.paa"
		};
	};
////44ab
	class 442_p1_clone_glass1_44: 442_p1_clone_glass1
	{
		displayname = "[44/K] P1 Clone Helmet Attachments 1";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\p1\unit_designs\44ab\p1_macro_visor_co.paa"
		};
	};

	class 442_p1_clone_glass1_nh: 442_p1_clone_glass1
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_p1_clone_glass1_44_nh: 442_p1_clone_glass1_44
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_p1_clone_glass2_nh: 442_p1_clone_glass2
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_p1_clone_glass3_nh: 442_p1_clone_glass3
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_p1_clone_glass4_nh: 442_p1_clone_glass4
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_p1_clone_glass5_nh: 442_p1_clone_glass5
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
////p2 helmet attachments
	class 442_p2_clone_glass1: 442_clone_p2_glasses
	{
		displayname = "[K] P2 Clone Helmet Attachments 1";
		model = "kobra\442_equipment\glasses\model\clone\k_p2_clone_glasses1.p3d";
		hiddenselections[] = 
		{
			"macro_visor"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\p2\p2_macro_visor_co.paa"
		};
	};
	class 442_p2_clone_glass2: 442_clone_p2_glasses
	{
		displayname = "[K] P2 Clone Helmet Attachments 2";
		model = "kobra\442_equipment\glasses\model\clone\k_p2_clone_glasses2.p3d";
		hiddenselections[] = 
		{
			"rangefinder"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\rangefinder\rangefinder_co.paa"
		};
	};
	class 442_p2_clone_glass3: 442_clone_p2_glasses
	{
		displayname = "[K] P2 Clone Helmet Attachments 3";
		model = "kobra\442_equipment\glasses\model\clone\k_p2_clone_glasses3.p3d";
		hiddenselections[] = 
		{
			"visor"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\p2\p2_visor_co.paa"
		};
	};
	class 442_p2_clone_glass4: 442_clone_p2_glasses
	{
		displayname = "[K] P2 Clone Helmet Attachments 4";
		model = "kobra\442_equipment\glasses\model\clone\k_p2_clone_glasses4.p3d";
		hiddenselections[] = 
		{
			"visor",
			"plates"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\p2\p2_visor_co.paa",
			"kobra\442_equipment\glasses\data\clone\p2\p2_visor_attachments_co.paa"
		};
	};
	class 442_p2_clone_glass5: 442_clone_p2_glasses
	{
		displayname = "[K] P2 Clone Helmet Attachments 5";
		model = "kobra\442_equipment\glasses\model\clone\k_p2_clone_glasses5.p3d";
		hiddenselections[] = 
		{
			"antenna",
			"visor",
			"plates",
			"sensor"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\p2\p2_visor_attachments_co.paa",
			"kobra\442_equipment\glasses\data\clone\p2\p2_visor_co.paa",
			"kobra\442_equipment\glasses\data\clone\p2\p2_visor_attachments_co.paa",
			"kobra\442_equipment\glasses\data\clone\p2\p2_visor_attachments_co.paa"
		};
	};
	class 442_p2_clone_glass6: 442_clone_p2_glasses
	{
		displayname = "[K] P2 Clone Helmet Attachments 6";
		model = "kobra\442_equipment\glasses\model\clone\k_p2_clone_glasses6.p3d";
		hiddenselections[] = 
		{
			"visor",
			"rangefinder",
		};
		hiddenselectionstextures[] = 
		{
			
			"kobra\442_equipment\glasses\data\clone\p2\p2_visor_co.paa",
			"kobra\442_equipment\glasses\data\clone\rangefinder\rangefinder_co.paa"
		};
	};
	class 442_p2_clone_glass7: 442_clone_p2_glasses
	{
		displayname = "[K] P2 Clone Helmet Attachments 7";
		model = "kobra\442_equipment\glasses\model\clone\k_p2_clone_glasses7.p3d";
		hiddenselections[] = 
		{
			"antenna",
			"visor",
			"sensor",
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\p2\p2_visor_attachments_co.paa",
			"kobra\442_equipment\glasses\data\clone\p2\p2_visor_co.paa",
			"kobra\442_equipment\glasses\data\clone\p2\p2_visor_attachments_co.paa"
		};
	};
	class 442_p2_clone_glass8: 442_clone_p2_glasses
	{
		displayname = "[K] P2 Clone Helmet Attachments 8";
		model = "kobra\442_equipment\glasses\model\clone\k_p2_clone_glasses8.p3d";
		hiddenselections[] = 
		{
			"visor",
			"plates",
			"rangefinder",
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\p2\p2_visor_co.paa",
			"kobra\442_equipment\glasses\data\clone\p2\p2_visor_attachments_co.paa",
			"kobra\442_equipment\glasses\data\clone\rangefinder\rangefinder_co.paa"
		};
	};
////44ab
	class 442_p2_clone_glass1_44ab: 442_p2_clone_glass1
	{
		displayname = "[44/K] P2 Clone Helmet Attachments 1";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\p2\unit_designs\44ab\p2_macro_visor_co.paa"
		};
	};

	class 442_p2_clone_glass1_nh: 442_p2_clone_glass1
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_p2_clone_glass1_44ab_nh: 442_p2_clone_glass1_44ab
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_p2_clone_glass2_nh: 442_p2_clone_glass2
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_p2_clone_glass3_nh: 442_p2_clone_glass3
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_p2_clone_glass4_nh: 442_p2_clone_glass4
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_p2_clone_glass5_nh: 442_p2_clone_glass5
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_p2_clone_glass7_nh: 442_p2_clone_glass7
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_p2_clone_glass8_nh: 442_p2_clone_glass8
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
////arf helmet attachments
	class 442_arf_clone_glass1: 442_clone_arf_glasses
	{
		displayname = "[K] Arf Helmet Attachments 1";
		model = "kobra\442_equipment\glasses\model\clone\k_arf_clone_glasses1.p3d";
		hiddenselections[] = 
		{
			"mask"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\arf\arf_mask_co.paa"
		};
	};
	class 442_arf_clone_glass2: 442_clone_arf_glasses
	{
		displayname = "[K] Arf Helmet Attachments 2";
		model = "kobra\442_equipment\glasses\model\clone\k_arf_clone_glasses2.p3d";
		hiddenselections[] = 
		{
			"plates"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\arf\arf_plates_co.paa"
		};
	};
	class 442_arf_clone_glass3: 442_clone_arf_glasses
	{
		displayname = "[K] Arf Helmet Attachments 3";
		model = "kobra\442_equipment\glasses\model\clone\k_arf_clone_glasses3.p3d";
		hiddenselections[] = 
		{
			"macro_visor"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\arf\arf_visor_co.paa"
		};
	};
	class 442_arf_clone_glass4: 442_clone_arf_glasses
	{
		displayname = "[K] Arf Helmet Attachments 4";
		model = "kobra\442_equipment\glasses\model\clone\k_arf_clone_glasses4.p3d";
		hiddenselections[] = 
		{
			"mask",
			"plates"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\arf\arf_mask_co.paa",
			"kobra\442_equipment\glasses\data\clone\arf\arf_plates_co.paa"
		};
	};
	class 442_arf_clone_glass5: 442_clone_arf_glasses
	{
		displayname = "[K] Arf Helmet Attachments 5";
		model = "kobra\442_equipment\glasses\model\clone\k_arf_clone_glasses5.p3d";
		hiddenselections[] = 
		{
			"macro_visor",
			"mask"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\arf\arf_visor_co.paa",
			"kobra\442_equipment\glasses\data\clone\arf\arf_mask_co.paa"
		};
	};
	class 442_arf_clone_glass6: 442_clone_arf_glasses
	{
		displayname = "[K] Arf Helmet Attachments 6";
		model = "kobra\442_equipment\glasses\model\clone\k_arf_clone_glasses6.p3d";
		hiddenselections[] = 
		{
			"macro_visor",
			"plates"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\arf\arf_visor_co.paa",
			"kobra\442_equipment\glasses\data\clone\arf\arf_plates_co.paa"
		};
	};
	class 442_arf_clone_glass7: 442_clone_arf_glasses
	{
		displayname = "[K] Arf Helmet Attachments 7";
		model = "kobra\442_equipment\glasses\model\clone\k_arf_clone_glasses7.p3d";
		hiddenselections[] = 
		{
			"macro_visor",
			"mask",
			"plates"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\arf\arf_visor_co.paa",
			"kobra\442_equipment\glasses\data\clone\arf\arf_mask_co.paa",
			"kobra\442_equipment\glasses\data\clone\arf\arf_plates_co.paa"
		};
	};
	class 442_arf_clone_glass3_44: 442_arf_clone_glass3
	{
		displayname = "[44/K] Arf Helmet Attachments 3";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\arf\unit_designs\44ab\arf_visor_co.paa"
		};
	};
	class 442_arf_clone_glass5_44: 442_arf_clone_glass5
	{
		displayname = "[44/K] Arf Helmet Attachments 5";
		model = "kobra\442_equipment\glasses\model\clone\k_arf_clone_glasses5.p3d";
		hiddenselections[] = 
		{
			"macro_visor",
			"mask"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\arf\unit_designs\44ab\arf_visor_co.paa",
			"kobra\442_equipment\glasses\data\clone\arf\arf_mask_co.paa"
		};
	};
	class 442_arf_clone_glass7_44: 442_arf_clone_glass7
	{
		displayname = "[44/K] Arf Helmet Attachments 7";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\arf\unit_designs\44ab\arf_visor_co.paa",
			"kobra\442_equipment\glasses\data\clone\arf\arf_mask_co.paa",
			"kobra\442_equipment\glasses\data\clone\arf\arf_plates_co.paa"
		};
	};

	class 442_arf_clone_glass1_nh: 442_arf_clone_glass1
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_arf_clone_glass2_nh: 442_arf_clone_glass2
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_arf_clone_glass3_nh: 442_arf_clone_glass3
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_arf_clone_glass4_nh: 442_arf_clone_glass4
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_arf_clone_glass5_nh: 442_arf_clone_glass5
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_arf_clone_glass6_nh: 442_arf_clone_glass6
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_arf_clone_glass7_nh: 442_arf_clone_glass7
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_arf_clone_glass3_44_nh: 442_arf_clone_glass3_44
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_arf_clone_glass5_44_nh: 442_arf_clone_glass5_44
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_arf_clone_glass7_44_nh: 442_arf_clone_glass7_44
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};


////barc
	class 442_barc_clone_glass1: 442_clone_ab_barc_glasses
	{
		displayname = "[K] Barc Helmet Attachment";
		model = "kobra\442_equipment\glasses\model\clone\k_barc_clone_glasses.p3d";
		hiddenselections[] = 
		{
			"visor"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\barc_visor\barc_visor_co.paa"
		};
	};
	class 442_barc_clone_glass1_44: 442_barc_clone_glass1
	{
		displayname = "[44/K] Barc Helmet Attachment";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\barc_visor\unit_designs\44ab\barc_visor_co.paa"
		};
	};

	class 442_barc_clone_glass1_nh: 442_barc_clone_glass1
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_barc_clone_glass1_44_nh: 442_barc_clone_glass1_44
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};

////tech
	class 442_tech_clone_glass1: 442_clone_ab_barc_glasses
	{
		displayname = "[K] Tech Helmet Attachment (Up)";
		ace_Overlay = "";
		ace_overlaycracked = "";
		model = "kobra\442_equipment\glasses\model\clone\k_tech_clone_glasses1.p3d";
		hiddenselections[] = 
		{
			"visor"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\tech\tech_visor_co.paa"
		};
	};
	class 442_tech_clone_glass2: 442_tech_clone_glass1
	{
		displayname = "[K] Tech Helmet Attachment (Down)";
		model = "kobra\442_equipment\glasses\model\clone\k_tech_clone_glasses2.p3d";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\tech\tech_visor_co.paa"
		};
	};

	class 442_tech_clone_glass1_44: 442_tech_clone_glass1
	{
		displayname = "[44/K] Tech Helmet Attachment (Up)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\tech\unit_designs\44ab\tech_visor_co.paa"
		};
	};
	class 442_tech_clone_glass2_44: 442_tech_clone_glass2
	{
		displayname = "[44/K] Tech Helmet Attachment (Down)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\clone\tech\unit_designs\44ab\tech_visor_co.paa"
		};
	};

////commando helmet attachments
	// helmet parts 1 - visor and sensor
	// helmet parts 2 - camera, comms, filter, rebreather

	class 442_commando_glass1: 442_clone_p2_glasses
	{
		scope = 2; 
		displayname = "[K] Commando Helmet Attachments 1";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses1.p3d";
		hiddenselections[] = 
		{
			"hood",
			"filter"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\hood_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa"
		};
	};
	class 442_commando_glass2: 442_clone_p2_glasses
	{
		scope = 2; 
		displayname = "[K] Commando Helmet Attachments 2";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses2.p3d";
		hiddenselections[] = 
		{
			"hood"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\hood_co.paa"
		};
	};
	class 442_commando_glass3: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 3";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses3.p3d";
		hiddenselections[] = 
		{
			"camera",
			"filter",
			"rebreather",
			"sensor",
			"visor"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
		};
	};
	class 442_commando_glass4: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 4";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses4.p3d";
		hiddenselections[] = 
		{
			"camera",
			"comms",
			"filter",
			"rebreather",
			"visor"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
		};
	};
	class 442_commando_glass5: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 5";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses5.p3d";
		hiddenselections[] = 
		{
			"filter",
			"rebreather"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
		};
	};
	class 442_commando_glass6: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 6";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses6.p3d";
		hiddenselections[] = 
		{
			"filter"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa"
		};
	};
	class 442_commando_glass7: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 7";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses7.p3d";
		hiddenselections[] = 
		{
			"rebreather"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa"
		};
	};
	class 442_commando_glass8: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 8";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses8.p3d";
		hiddenselections[] = 
		{
			"visor"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
		};
	};
	class 442_commando_glass9: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 9";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses9.p3d";
		hiddenselections[] = 
		{
			"camera",
			"sensor"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
		};
	};
	class 442_commando_glass10: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 10";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses10.p3d";
		hiddenselections[] = 
		{
			"camera",
			"comms"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa"
		};
	};
	class 442_commando_glass11: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 11";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses11.p3d";
		hiddenselections[] = 
		{
			"rebreather",
			"visor"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
		};
	};
	class 442_commando_glass12: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 12";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses12.p3d";
		hiddenselections[] = 
		{
			"cover"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\cover_co.paa"
		};
	};
	class 442_commando_glass13: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 13";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses13.p3d";
		hiddenselections[] = 
		{
			"comms",
			"filter"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa"
		};
	};
	class 442_commando_glass14: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 14";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses14.p3d";
		hiddenselections[] = 
		{
			"cover",
			"rebreather"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\cover_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa"
		};
	};
	class 442_commando_glass15: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 15";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses15.p3d";
		hiddenselections[] = 
		{
			"cover",
			"sensor"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\cover_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
		};
	};
	class 442_commando_glass16: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 16";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses16.p3d";
		hiddenselections[] = 
		{
			"comms",
			"cover"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\cover_co.paa"
		};
	};
	class 442_commando_glass17: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 17";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses17.p3d";
		hiddenselections[] = 
		{
			"camera",
			"cover"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\cover_co.paa"
		};
	};
	class 442_commando_glass18: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 18";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses18.p3d";
		hiddenselections[] = 
		{
			"helmet_plates"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\helmet_plates_co.paa"
		};
	};
	class 442_commando_glass19: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 19";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses19.p3d";
		hiddenselections[] = 
		{
			"filter",
			"helmet_plates"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_plates_co.paa"
		};
	};
	class 442_commando_glass20: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 20";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses20.p3d";
		hiddenselections[] = 
		{
			"camera",
			"comms",
			"filter",
			"rebreather"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa"
		};
	};
	class 442_commando_glass21: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 21";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses21.p3d";
		hiddenselections[] = 
		{
			"comms",
			"visor"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
		};
	};
	class 442_commando_glass22: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 22";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses22.p3d";
		hiddenselections[] = 
		{
			"camera",
			"visor"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\helmet_parts_2_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
		};
	};
	class 442_commando_glass23: 442_clone_p2_glasses
	{
		displayname = "[K] Commando Helmet Attachments 23";
		model = "kobra\442_equipment\glasses\model\commando\k_commando_glasses23.p3d";
		hiddenselections[] = 
		{
			"sensor",
			"visor"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa",
			"kobra\442_equipment\glasses\data\commando\helmet_parts_1_co.paa"
		};
	};

	//no huds for jay
	class 442_commando_glass1_nh: 442_commando_glass1
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass2_nh: 442_commando_glass2
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass3_nh: 442_commando_glass3
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass4_nh: 442_commando_glass4
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass5_nh: 442_commando_glass5
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass6_nh: 442_commando_glass6
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass7_nh: 442_commando_glass7
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass8_nh: 442_commando_glass8
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass9_nh: 442_commando_glass9
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass10_nh: 442_commando_glass10
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass11_nh: 442_commando_glass11
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass12_nh: 442_commando_glass12
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass13_nh: 442_commando_glass13
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass14_nh: 442_commando_glass14
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass15_nh: 442_commando_glass15
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass16_nh: 442_commando_glass16
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass17_nh: 442_commando_glass17
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass18_nh: 442_commando_glass18
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass19_nh: 442_commando_glass19
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass20_nh: 442_commando_glass20
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass21_nh: 442_commando_glass21
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass22_nh: 442_commando_glass22
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
	class 442_commando_glass23_nh: 442_commando_glass23
	{
		scope = 1;
		ace_Overlay = "";
		ace_overlaycracked = "";
	};
};