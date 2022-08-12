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
	class Helicopter_Base_H;
	class 442_laat_2_ab;

	class 442_laat_2_base: Helicopter_Base_H
	{
		class TextureSources
		{};
	};

    class 442_laat_2: 442_laat_2_base
	{
		class TextureSources
		{
			class base;
			class 44th_texture: base
			{
				displayname="44th";
				textures[]=
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

			class 44th_Delta_texture: base
			{
				displayname="44th Delta";
				textures[]=
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

			class 44th_Euda_texture: base
			{
				displayname="44th Euda";
				textures[]=
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

			class 44th_Bantha_pinup: base
			{
				displayname="44th (Bantha)";
				textures[]=
				{
					"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_bantha_co.paa",
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

			class 44th_Crosshair_pinup: base
			{
				displayname="44th (Crosshair)";
				textures[]=
				{
					"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_crosshair_co.paa",
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

			class 44th_DroidHead_pinup: base
			{
				displayname="44th (Droid Head)";
				textures[]=
				{
					"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_droidhead_co.paa",
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

			class 44th_Stormtrooper_pinup: base
			{
				displayname="44th (Stormtrooper)";
				textures[]=
				{
					"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_pinup1_co.paa",
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

			class 44th_BombsAway_pinup: base
			{
				displayname="44th (Bombs Away)";
				textures[]=
				{
					"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_pinup2_co.paa",
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

			class 44th_Naboo_pinup: base
			{
				displayname="44th (Naboo)";
				textures[]=
				{
					"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_pinup4_co.paa",
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

			class 44th_Reaper_pinup: base
			{
				displayname="44th (Reaper)";
				textures[]=
				{
					"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_pinup5_co.paa",
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

			class 44th_Trooper_pinup: base
			{
				displayname="44th (Trooper)";
				textures[]=
				{
					"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_pinup6_co.paa",
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

			class 44th_TwiLek_pinup: base
			{
				displayname="44th (Twi'lek)";
				textures[]=
				{
					"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_pinup7_co.paa",
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
	};

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
		displayname = "LAAT/I Gunship (Delta)";
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
		displayname = "LAAT/I Gunship (Airborne (Delta))";
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
		displayname = "LAAT/I Gunship (Euda)";
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
		displayname = "LAAT/I Gunship (Airborne (Euda))";
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

	class 442_laat_44_Pinup_Bantha: 442_laat_44
	{
		displayname="LAAT/I Gunship (Pinup Bantha)";
		hiddenselectionstextures[]=
		{
			"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_bantha_co.paa",
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

	class 442_laat_44_Pinup_Bantha_ab: 442_laat_44_ab
	{
		displayname="LAAT/IA Gunship (Pinup Bantha)";
		hiddenselectionstextures[]=
		{
			"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_bantha_co.paa",
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

	class 442_laat_44_Pinup_Crosshair: 442_laat_44
	{
		displayname="LAAT/I Gunship (Pinup Crosshair)";
		hiddenselectionstextures[]=
		{
			"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_crosshair_co.paa",
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

	class 442_laat_44_Pinup_Crosshair_ab: 442_laat_44_ab
	{
		displayname="LAAT/IA Gunship (Pinup Crosshair)";
		hiddenselectionstextures[]=
		{
			"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_crosshair_co.paa",
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

	class 442_laat_44_Pinup_Droidhead: 442_laat_44
	{
		displayname="LAAT/I Gunship (Pinup Droidhead)";
		hiddenselectionstextures[]=
		{
			"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_droidhead_co.paa",
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

	class 442_laat_44_Pinup_Droidhead_ab: 442_laat_44_ab
	{
		displayname="LAAT/IA Gunship (Pinup Droidhead)";
		hiddenselectionstextures[]=
		{
			"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_droidhead_co.paa",
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

	class 442_laat_44_Pinup_StormTrooper: 442_laat_44
	{
		displayname="LAAT/I Gunship (Pinup Storm Trooper)";
		hiddenselectionstextures[]=
		{
			"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_pinup1_co.paa",
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

	class 442_laat_44_Pinup_StormTrooper_ab: 442_laat_44_ab
	{
		displayname="LAAT/IA Gunship (Pinup Storm Trooper)";
		hiddenselectionstextures[]=
		{
			"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_pinup1_co.paa",
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

	class 442_laat_44_Pinup_BombsAway: 442_laat_44
	{
		displayname="LAAT/I Gunship (Pinup Bombs Away)";
		hiddenselectionstextures[]=
		{
			"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_pinup2_co.paa",
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

	class 442_laat_44_Pinup_BombsAway_ab: 442_laat_44_ab
	{
		displayname="LAAT/IA Gunship (Pinup Storm Trooper)";
		hiddenselectionstextures[]=
		{
			"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_pinup2_co.paa",
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

	class 442_laat_44_Pinup_Naboo: 442_laat_44
	{
		displayname="LAAT/I Gunship (Pinup Naboo)";
		hiddenselectionstextures[]=
		{
			"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_pinup4_co.paa",
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

	class 442_laat_44_Pinup_Naboo_ab: 442_laat_44_ab
	{
		displayname="LAAT/IA Gunship (Pinup Naboo)";
		hiddenselectionstextures[]=
		{
			"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_pinup4_co.paa",
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

	class 442_laat_44_Pinup_Reaper: 442_laat_44
	{
		displayname="LAAT/I Gunship (Pinup Reaper)";
		hiddenselectionstextures[]=
		{
			"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_pinup5_co.paa",
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

	class 442_laat_44_Pinup_Reaper_ab: 442_laat_44_ab
	{
		displayname="LAAT/IA Gunship (Pinup Reaper)";
		hiddenselectionstextures[]=
		{
			"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_pinup5_co.paa",
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

	class 442_laat_44_Pinup_Trooper_Twilek: 442_laat_44
	{
		displayname="LAAT/I Gunship (Pinup Trooper Twi'Lek)";
		hiddenselectionstextures[]=
		{
			"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_pinup6_co.paa",
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

	class 442_laat_44_Pinup_Trooper_Twilek_ab: 442_laat_44_ab
	{
		displayname="LAAT/IA Gunship (Pinup Trooper Twi'Lek)";
		hiddenselectionstextures[]=
		{
			"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_pinup6_co.paa",
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

	class 442_laat_44_Pinup_Twilek: 442_laat_44
	{
		displayname="LAAT/I Gunship (Pinup Twi'Lek)";
		hiddenselectionstextures[]=
		{
			"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_pinup7_co.paa",
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

	class 442_laat_44_Pinup_Twilek_ab: 442_laat_44_ab
	{
		displayname="LAAT/IA Gunship (Pinup Twi'Lek)";
		hiddenselectionstextures[]=
		{
			"kobra\k_a_vehicle_44\data\laat\LAAT_Nose_Art\body_1_pinup7_co.paa",
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