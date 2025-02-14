	class ls_gar_standard_backpack;
	class ls_gar_radio_backpack;
	class k_ls_clone_backpack: ls_gar_standard_backpack
	{
		displayname = "[K/LS] Clone Trooper Backpack";
		scope = 1;
		model = "ls_equipment_bluefor\backpack\gar\backpack\ls_gar_standard_backpack.p3d";
		maximumload = 225;
		picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		hiddenselections[] = 
		{
			"backpack",
			"cover"
		};
		hiddenselectionsmaterials[] = 
		{
			"kobra\k_unit_ls\data\backpack\clone\backpack.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\cover.rvmat"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\clone\backpack_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\cover_co.paa",
		};
	};
	class k_ls_clone_backpack_med: ls_gar_standard_backpack
	{
		displayname = "[K/LS] Clone Trooper Medium Backpack";
		scope = 1;
		model = "ls_equipment_bluefor\backpack\gar\mediumBackpack\ls_gar_medium_backpack.p3d";
		maximumload = 275;
		picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		hiddenselections[] = 
		{
			"backpack",
			"cover",
			"pouches"
		};
		hiddenselectionsmaterials[] = 
		{
			"kobra\k_unit_ls\data\backpack\clone\backpack.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\cover.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\bags.rvmat",
		};
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\clone\backpack_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\cover_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\pouches_co.paa",
		};
	};
	class k_ls_clone_backpack_heavy: ls_gar_standard_backpack
	{
		displayname = "[K/LS] Clone Trooper Heavy Backpack";
		scope = 1;
		model = "ls_equipment_bluefor\backpack\gar\heavyBackpack\ls_gar_heavy_backpack.p3d";
		maximumload = 290;
		picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		hiddenselections[] = 
		{
			"backpack",
			"cover",
			"pouches",
			"tube"
		};
		hiddenselectionsmaterials[] = 
		{
			"kobra\k_unit_ls\data\backpack\clone\backpack.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\cover.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\bags.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\tube.rvmat",
		};
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\clone\backpack_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\cover_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\pouches_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\tube_co.paa",
		};
	};
	class k_ls_clone_backpack_medic: ls_gar_standard_backpack
	{
		displayname = "[K/LS] Clone Trooper Medic Backpack";
		scope = 1;
		model = "ls_equipment_bluefor\backpack\gar\backpack\ls_gar_medic_backpack.p3d";
		maximumload = 240;
		picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		hiddenselections[] = 
		{
			"backpack",
			"cover",
			"medic1",
			"medic2"
		};
		hiddenselectionsmaterials[] = 
		{
			"kobra\k_unit_ls\data\backpack\clone\backpack.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\cover.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\medic1.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\medic2.rvmat",
		};
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\clone\backpack_medic_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\cover_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\medic_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\medic_co.paa",
		};
	};
	class k_ls_clone_backpack_medic_med: ls_gar_standard_backpack
	{
		displayname = "[K/LS] Clone Trooper Medic Medium Backpack";
		scope = 1;
		model = "ls_equipment_bluefor\backpack\gar\heavyBackpack\ls_gar_heavyMedic_backpack.p3d";
		maximumload = 290;
		picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		hiddenselections[] = 
		{
			"backpack",
			"cover",
			"pouches",
			"medic1",
			"medic2"
		};
		hiddenselectionsmaterials[] = 
		{
			"kobra\k_unit_ls\data\backpack\clone\backpack.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\cover.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\bags.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\medic1.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\medic2.rvmat",
		};
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\clone\backpack_medic_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\cover_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\pouches_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\medic_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\medic_co.paa",
		};
	};

	class k_ls_clone_backpack_rocket: ls_gar_standard_backpack
	{
		displayname = "[K/LS] Clone Trooper Rocket Backpack";
		scope = 1;
		model = "ls_equipment_bluefor\backpack\gar\backpack\ls_gar_rocket_backpack.p3d";
		maximumload = 265;
		picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		hiddenselections[] = 
		{
			"backpack",
			"holder",
			"rocket",
			"light",
			"pouches"
		};
		hiddenselectionsmaterials[] = 
		{
			"kobra\k_unit_ls\data\backpack\clone\backpack.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\holder.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\rocket.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\lights.rvmat",
			"kobra\k_unit_ls\data\backpack\clone\bags.rvmat",
		};
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\clone\backpack_eod_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\holder_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\rocket_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\light_co.paa",
			"kobra\k_unit_ls\data\backpack\clone\pouches_co.paa",
		};
	};


	class k_ls_b1_backpack: ls_gar_standard_backpack
	{
		displayname = "[K/LS] B1 Backpack";
		scope = 1;
		model = "lsd_equipment_redfor\backpack\cis\standard\lsd_cis_standard_backpack.p3d";
		maximumload = 150;
		picture = "lsd_equipment_redfor\backpack\cis\_ui\icon_b1_backpack_ca.paa";
		hiddenselectionsmaterials[] = 
		{
			"kobra\k_unit_ls\data\backpack\b1\backpack.rvmat"
		};
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\b1\b1_backpack_co.paa"
		};
	};
	class k_ls_b1_backpack_heavy: k_ls_b1_backpack
	{
		displayname = "[K/LS] B1 Heavy Backpack";
		maximumload = 250;
	};

	class k_ls_b1_backpack_geonosis: k_ls_b1_backpack
	{
		displayname = "[K/LS] B1 Backpack Geonosis";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\b1\b1_backpack_geonosis_co.paa"
		};
	};
	class k_ls_b1_backpack_heavy_geonosis: k_ls_b1_backpack_heavy
	{
		displayname = "[K/LS] B1 Heavy Backpack Geonosis";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\b1\b1_backpack_geonosis_co.paa"
		};
	};

	class k_ls_b1_backpack_woodland: k_ls_b1_backpack
	{
		displayname = "[K/LS] B1 Backpack Woodland";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\b1\b1_backpack_woodland_co.paa"
		};
	};
	class k_ls_b1_backpack_heavy_woodland: k_ls_b1_backpack_heavy
	{
		displayname = "[K/LS] B1 Heavy Backpack Woodland";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\b1\b1_backpack_woodland_co.paa"
		};
	};
	

	class k_ls_b1_backpack_desert: k_ls_b1_backpack
	{
		displayname = "[K/LS] B1 Backpack Desert";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\b1\b1_backpack_desert_co.paa"
		};
	};
	class k_ls_b1_backpack_heavy_desert: k_ls_b1_backpack_heavy
	{
		displayname = "[K/LS] B1 Heavy Backpack Desert";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\b1\b1_backpack_desert_co.paa"
		};
	};
	

	class k_ls_b1_backpack_winter: k_ls_b1_backpack
	{
		displayname = "[K/LS] B1 Backpack Winter";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\b1\b1_backpack_winter_co.paa"
		};
	};
	class k_ls_b1_backpack_heavy_winter: k_ls_b1_backpack_heavy
	{
		displayname = "[K/LS] B1 Heavy Backpack Winter";
		hiddenselectionstextures[] = 
		{
			"kobra\k_unit_ls\data\backpack\b1\b1_backpack_winter_co.paa"
		};
	};
	

	///backpacks with loadouts
	///clones
	class k_ls_clone_backpack_medic_med_load: k_ls_clone_backpack_medic_med
	{
		scope = 1;
		scopearsenal = 1;
		scopecurator = 1;
		class transportitems
		{
			class _xx_ace_fielddressing
			{
				name = "ACE_fieldDressing";
				count = 20;
			};
			class _xx_ace_elasticbandage: _xx_ace_fielddressing
			{
				name = "ACE_ElasticBandage";
			};
			class _xx_ace_quickclot: _xx_ace_fielddressing
			{
				name = "ACE_quikclot";
			};
			class _xx_ACE_packingBandage: _xx_ace_fielddressing
			{
				name = "ACE_packingBandage";
			};
			class _xx_ace_epinephrine
			{
				name = "ACE_epinephrine";
				count = 5;
			};
			class _xx_ACE_morphine
			{
				name = "ACE_morphine";
				count = 5;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count = 12;
			};
			class _xx_ACE_blood_IV
			{
				name="ACE_blood_IV";
				count=4;
			};
			class _xx_ACE_blood_IV_500
			{
				name="ACE_blood_IV_500";
				count=4;
			};
			class _xx_ACE_blood_IV_250
			{
				name="ACE_blood_IV_250";
				count=4;
			};
			class _xx_ACE_touriquet
			{
				name="ACE_touriquet";
				count = 6;
			};
			class _xx_ACE_surgicalKit
			{
				name="ACE_surgicalKit";
				count=1;
			};
		};
	};

	///droids
	class k_ls_b1_backpack_rps6_load: k_ls_b1_backpack_heavy
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		class transportmagazines
		{
			class _xx_442_rps6_heat_mag
			{
				magazine = "442_rps6_heat_mag";
				count = 2;
			};
		};
	};
	class k_ls_b1_backpack_e60r_at_load: k_ls_b1_backpack_heavy
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		class transportmagazines
		{
			class _xx_SWLW_e60r_at_mag
			{
				magazine = "SWLW_e60r_at_mag";
				count = 2;
			};
		};
	};
	class k_ls_b1_backpack_e60r_aa_load: k_ls_b1_backpack_heavy
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		class transportmagazines
		{
			class _xx_SWLW_e60r_aa_mag
			{
				magazine = "SWLW_e60r_aa_mag";
				count = 2;
			};
		};
	};

	class k_ls_b1_backpack_geonosis_rps6_load: k_ls_b1_backpack_heavy_geonosis
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		class transportmagazines
		{
			class _xx_442_rps6_heat_mag
			{
				magazine = "442_rps6_heat_mag";
				count = 2;
			};
		};
	};
	class k_ls_b1_backpack_geonosis_e60r_at_load: k_ls_b1_backpack_heavy_geonosis
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		class transportmagazines
		{
			class _xx_SWLW_e60r_at_mag
			{
				magazine = "SWLW_e60r_at_mag";
				count = 2;
			};
		};
	};
	class k_ls_b1_backpack_geonosis_e60r_aa_load: k_ls_b1_backpack_heavy_geonosis
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		class transportmagazines
		{
			class _xx_SWLW_e60r_aa_mag
			{
				magazine = "SWLW_e60r_aa_mag";
				count = 2;
			};
		};
	};

	class k_ls_b1_backpack_woodland_rps6_load: k_ls_b1_backpack_heavy_woodland
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		class transportmagazines
		{
			class _xx_442_rps6_heat_mag
			{
				magazine = "442_rps6_heat_mag";
				count = 2;
			};
		};
	};
	class k_ls_b1_backpack_woodland_e60r_at_load: k_ls_b1_backpack_heavy_woodland
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		class transportmagazines
		{
			class _xx_SWLW_e60r_at_mag
			{
				magazine = "SWLW_e60r_at_mag";
				count = 2;
			};
		};
	};
	class k_ls_b1_backpack_woodland_e60r_aa_load: k_ls_b1_backpack_heavy_woodland
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		class transportmagazines
		{
			class _xx_SWLW_e60r_aa_mag
			{
				magazine = "SWLW_e60r_aa_mag";
				count = 2;
			};
		};
	};

	class k_ls_b1_backpack_desert_rps6_load: k_ls_b1_backpack_heavy_desert
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		class transportmagazines
		{
			class _xx_442_rps6_heat_mag
			{
				magazine = "442_rps6_heat_mag";
				count = 2;
			};
		};
	};
	class k_ls_b1_backpack_desert_e60r_at_load: k_ls_b1_backpack_heavy_desert
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		class transportmagazines
		{
			class _xx_SWLW_e60r_at_mag
			{
				magazine = "SWLW_e60r_at_mag";
				count = 2;
			};
		};
	};
	class k_ls_b1_backpack_desert_e60r_aa_load: k_ls_b1_backpack_heavy_desert
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		class transportmagazines
		{
			class _xx_SWLW_e60r_aa_mag
			{
				magazine = "SWLW_e60r_aa_mag";
				count = 2;
			};
		};
	};

	class k_ls_b1_backpack_winter_rps6_load: k_ls_b1_backpack_heavy_winter
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		class transportmagazines
		{
			class _xx_442_rps6_heat_mag
			{
				magazine = "442_rps6_heat_mag";
				count = 2;
			};
		};
	};
	class k_ls_b1_backpack_winter_e60r_at_load: k_ls_b1_backpack_heavy_winter
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		class transportmagazines
		{
			class _xx_SWLW_e60r_at_mag
			{
				magazine = "SWLW_e60r_at_mag";
				count = 2;
			};
		};
	};
	class k_ls_b1_backpack_winter_e60r_aa_load: k_ls_b1_backpack_heavy_winter
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		class transportmagazines
		{
			class _xx_SWLW_e60r_aa_mag
			{
				magazine = "SWLW_e60r_aa_mag";
				count = 2;
			};
		};
	};