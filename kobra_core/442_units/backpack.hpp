class k_clone_backpack: k_clone_backpack_base
{
	displayname = "[K] Clone Trooper Backpack";
	scope = 2;
	model = "442_units\clones\backpack.p3d";
	maximumload = 150;
	picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
	hiddenselections[] = 
	{
		"backpack",
		"cover"
	};
	hiddenselectionstextures[] = 
	{
		"442_units\clones\data\backpack\backpack_co.paa",
		"442_units\clones\data\backpack\cover_co.paa",
	};
};
class k_clone_backpack_med: k_clone_backpack_base
{
	displayname = "[K] Clone Trooper Medium Backpack";
	scope = 2;
	model = "442_units\clones\backpack_med.p3d";
	maximumload = 200;
	picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
	hiddenselections[] = 
	{
		"backpack",
		"cover",
		"pouches"
	};
	hiddenselectionstextures[] = 
	{
		"442_units\clones\data\backpack\backpack_co.paa",
		"442_units\clones\data\backpack\cover_co.paa",
		"442_units\clones\data\backpack\pouches_co.paa",
	};
};
class k_clone_backpack_heavy: k_clone_backpack_base
{
	displayname = "[K] Clone Trooper Heavy Backpack";
	scope = 2;
	model = "442_units\clones\backpack_heavy.p3d";
	maximumload = 250;
	picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
	hiddenselections[] = 
	{
		"backpack",
		"cover",
		"pouches",
		"tube"
	};
	hiddenselectionstextures[] = 
	{
		"442_units\clones\data\backpack\backpack_co.paa",
		"442_units\clones\data\backpack\cover_co.paa",
		"442_units\clones\data\backpack\pouches_co.paa",
		"442_units\clones\data\backpack\tube_co.paa",
	};
};
class k_clone_backpack_medic: k_clone_backpack_base
{
	displayname = "[K] Clone Trooper Medic Backpack";
	scope = 2;
	model = "442_units\clones\backpack_medic.p3d";
	maximumload = 200;
	picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
	hiddenselections[] = 
	{
		"backpack",
		"cover",
		"medic1",
		"medic2"
	};
	hiddenselectionstextures[] = 
	{
		"442_units\clones\data\backpack\backpack_medic_co.paa",
		"442_units\clones\data\backpack\cover_co.paa",
		"442_units\clones\data\backpack\medic_co.paa",
		"442_units\clones\data\backpack\medic_co.paa",
	};
};
class k_clone_backpack_medic_med: k_clone_backpack_base
{
	displayname = "[K] Clone Trooper Medic Medium Backpack";
	scope = 2;
	model = "442_units\clones\backpack_medic_med.p3d";
	maximumload = 250;
	picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
	hiddenselections[] = 
	{
		"backpack",
		"cover",
		"pouches",
		"medic1",
		"medic2"
	};
	hiddenselectionstextures[] = 
	{
		"442_units\clones\data\backpack\backpack_medic_co.paa",
		"442_units\clones\data\backpack\cover_co.paa",
		"442_units\clones\data\backpack\pouches_co.paa",
		"442_units\clones\data\backpack\medic_co.paa",
		"442_units\clones\data\backpack\medic_co.paa",
	};
};
class k_clone_backpack_radio: k_clone_rto_backpack_base
{
	displayname = "[K] Clone Trooper Radio Backpack";
	scope = 2;
	model = "442_units\clones\backpack_radio.p3d";
	picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
	hiddenselections[] = 
	{
		"backpack",
		"radio",
		"screen"
	};
	hiddenselectionstextures[] = 
	{
		"442_units\clones\data\backpack\backpack_co.paa",
		"442_units\clones\data\backpack\radio_co.paa",
		"442_units\clones\data\backpack\screen_co.paa",
	};
};
class k_clone_backpack_radio_med: k_clone_rto_backpack_base
{
	displayname = "[K] Clone Trooper Radio Medium Backpack";
	scope = 2;
	model = "442_units\clones\backpack_radio_med.p3d";
	picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
	maximumload = 150;
	hiddenselections[] = 
	{
		"backpack",
		"radio",
		"screen",
		"pouches"
	};
	hiddenselectionstextures[] = 
	{
		"442_units\clones\data\backpack\backpack_co.paa",
		"442_units\clones\data\backpack\radio_co.paa",
		"442_units\clones\data\backpack\screen_co.paa",
		"442_units\clones\data\backpack\pouches_co.paa",
	};
};
class k_clone_backpack_rocket: k_clone_backpack_base
{
	displayname = "[K] Clone Trooper Rocket Backpack";
	scope = 2;
	model = "442_units\clones\backpack_rocket.p3d";
	maximumload = 300;
	picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
	hiddenselections[] = 
	{
		"backpack",
		"holder",
		"rocket",
		"light",
		"pouches"
	};
	hiddenselectionstextures[] = 
	{
		"442_units\clones\data\backpack\backpack_eod_co.paa",
		"442_units\clones\data\backpack\holder_co.paa",
		"442_units\clones\data\backpack\rocket_co.paa",
		"442_units\clones\data\backpack\light_co.paa",
		"442_units\clones\data\backpack\pouches_co.paa",
	};
};


class k_b1_backpack: k_clone_backpack_base
{
	displayname = "[K] B1 Backpack";
	scope = 2;
	model = "442_units\cis_droids\swlb_b1_backpack.p3d";
	maximumload = 150;
	picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
	hiddenselectionsmaterials[] = 
    {
        "442_units\cis_droids\data\backpack.rvmat"
    };
	hiddenselections[] = 
	{
		"camo1"
	};
	hiddenselectionstextures[] = 
	{
		"442_units\cis_droids\data\b1_backpack_co.paa"
	};
};
class k_b1_backpack_heavy: k_b1_backpack
{
	displayname = "[K] B1 Heavy Backpack";
	maximumload = 250;
};
class k_b1_backpack_rto: k_b1_backpack
{
	displayname = "[K] B1 RTO Backpack";
	maximumload = 100;
	tf_dialog="SWLB_clone_rto_radio_dialog";
	tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode="tf_west_radio_code";
	tf_hasLRradio=1;
	tf_range=25000;
	tf_subtype="digital_lr";
};

class k_b1_backpack_geonosis: k_b1_backpack
{
	displayname = "[K] B1 Backpack Geonosis";
	hiddenselectionstextures[] = 
	{
		"442_units\cis_droids\data\b1_backpack_geonosis_co.paa"
	};
};
class k_b1_backpack_heavy_geonosis: k_b1_backpack_heavy
{
	displayname = "[K] B1 Heavy Backpack Geonosis";
	hiddenselectionstextures[] = 
	{
		"442_units\cis_droids\data\b1_backpack_geonosis_co.paa"
	};
};
class k_b1_backpack_rto_geonosis: k_b1_backpack_rto
{
	displayname = "[K] B1 RTO Backpack Geonosis";
	hiddenselectionstextures[] = 
	{
		"442_units\cis_droids\data\b1_backpack_geonosis_co.paa"
	};
};

class k_b1_backpack_woodland: k_b1_backpack
{
	displayname = "[K] B1 Backpack Woodland";
	hiddenselectionstextures[] = 
	{
		"442_units\cis_droids\data\b1_backpack_woodland_co.paa"
	};
};
class k_b1_backpack_heavy_woodland: k_b1_backpack_heavy
{
	displayname = "[K] B1 Heavy Backpack Woodland";
	hiddenselectionstextures[] = 
	{
		"442_units\cis_droids\data\b1_backpack_woodland_co.paa"
	};
};
class k_b1_backpack_rto_woodland: k_b1_backpack_rto
{
	displayname = "[K] B1 RTO Backpack Woodland";
	hiddenselectionstextures[] = 
	{
		"442_units\cis_droids\data\b1_backpack_woodland_co.paa"
	};
};

class k_b1_backpack_desert: k_b1_backpack
{
	displayname = "[K] B1 Backpack Desert";
	hiddenselectionstextures[] = 
	{
		"442_units\cis_droids\data\b1_backpack_desert_co.paa"
	};
};
class k_b1_backpack_heavy_desert: k_b1_backpack_heavy
{
	displayname = "[K] B1 Heavy Backpack Desert";
	hiddenselectionstextures[] = 
	{
		"442_units\cis_droids\data\b1_backpack_desert_co.paa"
	};
};
class k_b1_backpack_rto_desert: k_b1_backpack_rto
{
	displayname = "[K] B1 RTO Backpack Desert";
	hiddenselectionstextures[] = 
	{
		"442_units\cis_droids\data\b1_backpack_desert_co.paa"
	};
};

class k_b1_backpack_winter: k_b1_backpack
{
	displayname = "[K] B1 Backpack Winter";
	hiddenselectionstextures[] = 
	{
		"442_units\cis_droids\data\b1_backpack_winter_co.paa"
	};
};
class k_b1_backpack_heavy_winter: k_b1_backpack_heavy
{
	displayname = "[K] B1 Heavy Backpack Winter";
	hiddenselectionstextures[] = 
	{
		"442_units\cis_droids\data\b1_backpack_winter_co.paa"
	};
};
class k_b1_backpack_rto_winter: k_b1_backpack_rto
{
	displayname = "[K] B1 RTO Backpack Winter";
	hiddenselectionstextures[] = 
	{
		"442_units\cis_droids\data\b1_backpack_winter_co.paa"
	};
};

///backpacks with loadouts
///clones
class k_clone_backpack_medic_med_load: k_clone_backpack_medic_med
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
class k_b1_backpack_rps6_load: k_b1_backpack_heavy
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
class k_b1_backpack_e60r_at_load: k_b1_backpack_heavy
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
class k_b1_backpack_e60r_aa_load: k_b1_backpack_heavy
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

class k_b1_backpack_geonosis_rps6_load: k_b1_backpack_heavy_geonosis
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
class k_b1_backpack_geonosis_e60r_at_load: k_b1_backpack_heavy_geonosis
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
class k_b1_backpack_geonosis_e60r_aa_load: k_b1_backpack_heavy_geonosis
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

class k_b1_backpack_woodland_rps6_load: k_b1_backpack_heavy_woodland
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
class k_b1_backpack_woodland_e60r_at_load: k_b1_backpack_heavy_woodland
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
class k_b1_backpack_woodland_e60r_aa_load: k_b1_backpack_heavy_woodland
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

class k_b1_backpack_desert_rps6_load: k_b1_backpack_heavy_desert
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
class k_b1_backpack_desert_e60r_at_load: k_b1_backpack_heavy_desert
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
class k_b1_backpack_desert_e60r_aa_load: k_b1_backpack_heavy_desert
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

class k_b1_backpack_winter_rps6_load: k_b1_backpack_heavy_winter
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
class k_b1_backpack_winter_e60r_at_load: k_b1_backpack_heavy_winter
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
class k_b1_backpack_winter_e60r_aa_load: k_b1_backpack_heavy_winter
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