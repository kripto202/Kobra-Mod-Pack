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

///backpacks with loadouts
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

