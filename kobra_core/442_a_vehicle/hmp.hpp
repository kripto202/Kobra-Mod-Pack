    class 442_hmp: ls_hmp
	{
		author = "kripto202";
		displayname = "HMP Gunship";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        faction = "442_CIS";
		crew = "SWLB_b1_pilot_base";
		icon = "442_a_vehicle\hmp\data\ui\hmp_icon.paa";
		editorpreview = "442_a_vehicle\hmp\data\ui\hmp_preview.jpg";
		hiddenselections[] = 
		{
			"body",
			"engine",
			"eyes",
			"head",
			"rockets",
			"seats",
			"wings"
		};
		hiddenselectionstextures[] = 
		{
			"442_a_vehicle\hmp\data\body_co.paa",
			"442_a_vehicle\hmp\data\engine_co.paa",
			"442_a_vehicle\hmp\data\eyes_co.paa",
			"442_a_vehicle\hmp\data\head_co.paa",
			"442_a_vehicle\hmp\data\missiles_co.paa",
			"",
			"442_a_vehicle\hmp\data\wings_co.paa",
		};
		class components: components
		{
			class TransportPylonsComponent
			{
				uiPicture="\442_a_vehicle\hmp\data\ui\cis_ui.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "PylonRack_Missile_AMRAAM_D_x1";
						priority = 5;
						hardpoints[] = 
						{
							"SCALPEL_1RND", 
							"B_ASRAAM",
							"B_AMRAAM_D_DUAL_RAIL", 
							"B_SDB_QUAD_RAIL", 
							"B_GBU12",
							"B_AGM65_RAIL"
						};
						turret[] = {};
						UIposition[] = {0.06, 0.4};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.64, 0.4};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName = "Empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "Default";
						attachment[] = 
                        {
                            "PylonMissile_1Rnd_AAA_missiles", 
                            "PylonMissile_1Rnd_AAA_missiles", 
                            "PylonRack_12Rnd_PG_missiles", 
                            "PylonRack_12Rnd_PG_missiles"
                        };
					};
					class AT
					{
						displayName = "AT";
						attachment[] = 
                        {
                            "PylonRack_12Rnd_PG_missiles", 
                            "PylonMissile_1Rnd_LG_scalpel", 
                            "PylonRack_12Rnd_PG_missiles", 
                            "PylonRack_12Rnd_PG_missiles", 
                            "PylonMissile_1Rnd_LG_scalpel", 
                            "PylonRack_12Rnd_PG_missiles"
                        };
					};
					class CAS
					{
						displayName = "CAS";
						attachment[] = 
                        {
                            "PylonRack_12Rnd_missiles", 
                            "PylonMissile_1Rnd_AAA_missiles", 
                            "PylonRack_12Rnd_missiles", 
                            "PylonRack_12Rnd_missiles", 
                            "PylonMissile_1Rnd_AAA_missiles", 
                            "PylonRack_12Rnd_missiles"
                        };
					};
				};
			};
		};
		
		class textureSources
		{
			class base
			{
				displayname = "Base";
				author = "kripto202";
				textures[] = 
				{
					"442_a_vehicle\hmp\data\body_co.paa",
					"442_a_vehicle\hmp\data\engine_co.paa",
					"442_a_vehicle\hmp\data\eyes_co.paa",
					"442_a_vehicle\hmp\data\head_co.paa",
					"442_a_vehicle\hmp\data\missiles_co.paa",
					"",
					"442_a_vehicle\hmp\data\wings_co.paa",
				};
				factions[] = 
				{
					"442_CIS"
				};
			};
			class unmarked: base
			{
				displayname = "Unmarked";
				textures[] = 
				{
					"442_a_vehicle\hmp\data\b_body_co.paa",
					"442_a_vehicle\hmp\data\engine_co.paa",
					"442_a_vehicle\hmp\data\eyes_co.paa",
					"442_a_vehicle\hmp\data\b_head_co.paa",
					"442_a_vehicle\hmp\data\b_missiles_co.paa",
					"",
					"442_a_vehicle\hmp\data\b_wings_co.paa",
				};
			};
		};
	};
	class 442_hmp_transport: 442_test_hmp_base
	{
		author = "kripto202";
		displayname = "HMP Gunship (Transport)";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselections[] = 
		{
			"body",
			"engine",
			"eyes",
			"head",
			"rockets",
			"seats",
			"wings"
		};
		hiddenselectionstextures[] = 
		{
			"442_a_vehicle\hmp\data\body_co.paa",
			"442_a_vehicle\hmp\data\engine_co.paa",
			"442_a_vehicle\hmp\data\eyes_co.paa",
			"442_a_vehicle\hmp\data\head_co.paa",
			"442_a_vehicle\hmp\data\missiles_co.paa",
			"442_a_vehicle\hmp\data\seats_co.paa",
			"442_a_vehicle\hmp\data\wings_co.paa",
		};
		
		transportSoldier = 10;
		cargoAction[] = 
		{
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
			"apctracked2_slot1_in",
		};
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10};
		class textureSources
		{
			class base
			{
				displayname = "Base";
				author = "kripto202";
				textures[] = 
				{
					"442_a_vehicle\hmp\data\body_co.paa",
					"442_a_vehicle\hmp\data\engine_co.paa",
					"442_a_vehicle\hmp\data\eyes_co.paa",
					"442_a_vehicle\hmp\data\head_co.paa",
					"442_a_vehicle\hmp\data\missiles_co.paa",
					"442_a_vehicle\hmp\data\seats_co.paa",
					"442_a_vehicle\hmp\data\wings_co.paa",
				};
				factions[] = 
				{
					"442_CIS"
				};
			};
			class unmarked: base
			{
				displayname = "Unmarked";
				textures[] = 
				{
					"442_a_vehicle\hmp\data\b_body_co.paa",
					"442_a_vehicle\hmp\data\engine_co.paa",
					"442_a_vehicle\hmp\data\eyes_co.paa",
					"442_a_vehicle\hmp\data\b_head_co.paa",
					"442_a_vehicle\hmp\data\b_missiles_co.paa",
					"442_a_vehicle\hmp\data\b_seats_co.paa",
					"442_a_vehicle\hmp\data\b_wings_co.paa",
				};
			};
		};
	};
	
	class 442_hmp_wreck: Wreck_base_F
	{
		author = "kripto202";
		mapsize = 20;
		editorPreview = "";
		scope = 2;
		scopecurator = 2;
		icon="iconObject_1x2";
		displayname = "HMP Gunship (Wrecked)";
		model = "442_a_vehicle\hmp\hmp_gunship_w.p3d";
		editorCategory = "kobra";
		editorSubcategory = "442_wrecks";
	};