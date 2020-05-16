class 442_swla_deserters_backpack_black: SWLB_clone_backpack
{
	author = "kripto202";
	displayname = "Deserter Clone Backpack Black";
	maximumload = 200;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\backpacks\442_backpack_black.paa",
		"442nd_deserters\data\backpacks\442_backpack_black.paa",
		"",
		"",
		"",
	};
};
class 442_swla_deserters_backpack_woodland: SWLB_clone_backpack
{
	author = "kripto202";
	displayname = "Deserter Clone Backpack Woodland";
	maximumload = 200;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\backpacks\442_backpack_woodland.paa",
		"442nd_deserters\data\backpacks\442_backpack_woodland.paa",
		"",
		"",
		"",
	};
};
class 442_swla_deserters_backpack_tan: SWLB_clone_backpack
{
	author = "kripto202";
	displayname = "Deserter Clone Backpack Tan";
	maximumload = 200;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\backpacks\442_backpack_Tan.paa",
		"442nd_deserters\data\backpacks\442_backpack_Tan.paa",
		"",
		"",
		"",
	};
};
class 442_swla_deserters_heavy_backpack_black: 442_swla_deserters_backpack_black
{
	displayname = "Deserter Clone Heavy Backpack black";
	maximumload = 400;
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\backpacks\442_backpack_black.paa",
		"442nd_deserters\data\backpacks\442_backpack_black.paa",
		"442nd_deserters\data\backpacks\442_backpack_black.paa",
		"",
		"",
	};
};
class 442_swla_deserters_heavy_backpack_tan: 442_swla_deserters_backpack_black
{
	displayname = "Deserter Clone Heavy Backpack Tan";
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\backpacks\442_backpack_Tan.paa",
		"442nd_deserters\data\backpacks\442_backpack_Tan.paa",
		"442nd_deserters\data\backpacks\442_backpack_Tan.paa",
		"",
		"",
	};
};
class 442_swla_deserters_heavy_backpack_woodland: 442_swla_deserters_backpack_black
{
	displayname = "Deserter Clone Heavy Backpack Woodland";
	hiddenselectionstextures[] = 
	{
		"442nd_deserters\data\backpacks\442_backpack_woodland.paa",
		"442nd_deserters\data\backpacks\442_backpack_woodland.paa",
		"442nd_deserters\data\backpacks\442_backpack_woodland.paa",
		"",
		"",
	};
};

//loaded backpacks
//black backpacks

class 442_swla_deserters_backpack_black_loaded: 442_swla_deserters_backpack_black
{
	scope = 1;
	scopearsenal = 1;
	scopecurator = 1;
	class transportitems
	{
		class _xx_ACE_fieldDressing
		{
			name = "ACE_fieldDressing";
			count = 8;
		};
		class _xx_ACE_ElasticBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_ElasticBandage";
		};
		class _xx_ACE_quikclot: _xx_ACE_fieldDressing
		{
			name = "ACE_quikclot";
		};
		class _xx_ACE_packingBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_packingBandage";
		};
		class _xx_ACE_touriquet: _xx_ACE_fieldDressing
		{
			name = "ACE_touriquet";
		};
		class _xx_ACE_epinephrine
		{
			name = "ACE_epinephrine";
			count = 2;
		};
		class _xx_ACE_morphine: _xx_ACE_epinephrine
		{
			name = "ACE_morphine";
		};
		class _xx_adv_aceSplint_splint
		{
			name = "adv_aceSplint_splint";
			count = 8;
		};
	};
};
class 442_swla_deserters_medic_backpack_black_loaded: 442_swla_deserters_heavy_backpack_black
{
	scope = 1;
	scopearsenal = 1;
	scopecurator = 1;
	class transportitems
	{
		class _xx_ACE_fieldDressing
		{
			name = "ACE_fieldDressing";
			count = 20;
		};
		class _xx_ACE_ElasticBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_ElasticBandage";
		};
		class _xx_ACE_quikclot: _xx_ACE_fieldDressing
		{
			name = "ACE_quikclot";
		};
		class _xx_ACE_packingBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_packingBandage";
		};
		class _xx_ACE_touriquet: _xx_ACE_fieldDressing
		{
			name = "ACE_touriquet";
		};
		class _xx_ACE_epinephrine
		{
			name = "ACE_epinephrine";
			count = 10;
		};
		class _xx_ACE_morphine: _xx_ACE_epinephrine
		{
			name = "ACE_morphine";
		};
		class _xx_adv_aceSplint_splint: _xx_ACE_fieldDressing
		{
			name = "adv_aceSplint_splint";
		};
		class _xx_ACE_surgicalKit
		{
			name = "ACE_surgicalKit";
			count = 1;
		};
		class _xx_adv_aceCPR_AED
		{
			name = "adv_aceCPR_AED";
			count = 1;
		};
		class _xx_ACE_blood_IV
		{
			name = "ACE_blood_IV";
			count = 5;
		};
		class _xx_ACE_blood_IV_500
		{
			name = "ACE_blood_IV_500";
			count = 10;
		};
		class _xx_ACE_blood_IV_250
		{
			name = "ACE_blood_IV_250";
			count = 15;
		};
	};
};
class 442_swla_deserters_backpack_black_rps6_loaded: 442_swla_deserters_heavy_backpack_black
{
	scope = 1;
	scopearsenal = 1;
	scopecurator = 1;
	class transportitems
	{
		class _xx_ACE_fieldDressing
		{
			count = 8;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_ElasticBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_ElasticBandage";
		};
		class _xx_ACE_quikclot: _xx_ACE_fieldDressing
		{
			name = "ACE_quikclot";
		};
		class _xx_ACE_packingBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_packingBandage";
		};
		class _xx_ACE_touriquet: _xx_ACE_fieldDressing
		{
			name = "ACE_touriquet";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_morphine: _xx_ACE_epinephrine
		{
			name = "ACE_morphine";
		};
		class _xx_adv_aceSplint_splint
		{
			count = 8;
			name = "adv_aceSplint_splint";
		};
	};
	class TransportMagazines
	{
		class _xx_SWLW_rps6_mag
		{
			magazine = "SWLW_rps6_mag";
			count = 2;
		};
	};
};
class 442_swla_deserters_backpack_black_plx1_AT_loaded: 442_swla_deserters_heavy_backpack_black
{
	scope = 1;
	scopearsenal = 1;
	scopecurator = 1;
	class transportitems
	{
		class _xx_ACE_fieldDressing
		{
			name = "ACE_fieldDressing";
			count = 8;
		};
		class _xx_ACE_ElasticBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_ElasticBandage";
		};
		class _xx_ACE_quikclot: _xx_ACE_fieldDressing
		{
			name = "ACE_quikclot";
		};
		class _xx_ACE_packingBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_packingBandage";
		};
		class _xx_ACE_touriquet: _xx_ACE_fieldDressing
		{
			name = "ACE_touriquet";
		};
		class _xx_ACE_epinephrine
		{
			name = "ACE_epinephrine";
			count = 2;
		};
		class _xx_ACE_morphine: _xx_ACE_epinephrine
		{
			name = "ACE_morphine";
		};
		class _xx_adv_aceSplint_splint
		{
			name = "adv_aceSplint_splint";
			count = 8;
		};
	};
	class transportmagazines
	{
		class _xx_SWLW_plx1_at_mag
		{
			magazine = "SWLW_plx1_at_mag";
			count = 2;
		};
	};
};
class 442_swla_deserters_backpack_black_plx1_AA_loaded: 442_swla_deserters_heavy_backpack_black
{
	scope = 1;
	scopearsenal = 1;
	scopecurator = 1;
	class transportitems
	{
		class _xx_ACE_fieldDressing
		{
			name = "ACE_fieldDressing";
			count = 8;
		};
		class _xx_ACE_ElasticBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_ElasticBandage";
		};
		class _xx_ACE_quikclot: _xx_ACE_fieldDressing
		{
			name = "ACE_quikclot";
		};
		class _xx_ACE_packingBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_packingBandage";
		};
		class _xx_ACE_touriquet: _xx_ACE_fieldDressing
		{
			name = "ACE_touriquet";
		};
		class _xx_ACE_epinephrine
		{
			name = "ACE_epinephrine";
			count = 2;
		};
		class _xx_ACE_morphine: _xx_ACE_epinephrine
		{
			name = "ACE_morphine";
		};
		class _xx_adv_aceSplint_splint
		{
			name = "adv_aceSplint_splint";
			count = 8;
		};
	};
	class transportmagazines
	{
		class _xx_SWLW_plx1_aa_mag
		{
			magazine = "SWLW_plx1_aa_mag";
			count = 2;
		};
	};
};
class 442_swla_deserters_backpack_black_engineer_loaded: 442_swla_deserters_medic_backpack_black_loaded
{
	class transportitems: transportitems
	{
		class _xx_toolkit
		{
			name = "toolkit";
			count = 1;
		};
	};
};

//tan backpacks

class 442_swla_deserters_backpack_tan_loaded: 442_swla_deserters_backpack_tan
{
	scope = 1;
	scopearsenal = 1;
	scopecurator = 1;
	class transportitems
	{
		class _xx_ACE_fieldDressing
		{
			name = "ACE_fieldDressing";
			count = 8;
		};
		class _xx_ACE_ElasticBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_ElasticBandage";
		};
		class _xx_ACE_quikclot: _xx_ACE_fieldDressing
		{
			name = "ACE_quikclot";
		};
		class _xx_ACE_packingBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_packingBandage";
		};
		class _xx_ACE_touriquet: _xx_ACE_fieldDressing
		{
			name = "ACE_touriquet";
		};
		class _xx_ACE_epinephrine
		{
			name = "ACE_epinephrine";
			count = 2;
		};
		class _xx_ACE_morphine: _xx_ACE_epinephrine
		{
			name = "ACE_morphine";
		};
		class _xx_adv_aceSplint_splint
		{
			name = "adv_aceSplint_splint";
			count = 8;
		};
	};
};
class 442_swla_deserters_medic_backpack_tan_loaded: 442_swla_deserters_heavy_backpack_tan
{
	scope = 1;
	scopearsenal = 1;
	scopecurator = 1;
	class transportitems
	{
		class _xx_ACE_fieldDressing
		{
			name = "ACE_fieldDressing";
			count = 20;
		};
		class _xx_ACE_ElasticBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_ElasticBandage";
		};
		class _xx_ACE_quikclot: _xx_ACE_fieldDressing
		{
			name = "ACE_quikclot";
		};
		class _xx_ACE_packingBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_packingBandage";
		};
		class _xx_ACE_touriquet: _xx_ACE_fieldDressing
		{
			name = "ACE_touriquet";
		};
		class _xx_ACE_epinephrine
		{
			name = "ACE_epinephrine";
			count = 10;
		};
		class _xx_ACE_morphine: _xx_ACE_epinephrine
		{
			name = "ACE_morphine";
		};
		class _xx_adv_aceSplint_splint: _xx_ACE_fieldDressing
		{
			name = "adv_aceSplint_splint";
		};
		class _xx_ACE_surgicalKit
		{
			name = "ACE_surgicalKit";
			count = 1;
		};
		class _xx_adv_aceCPR_AED
		{
			name = "adv_aceCPR_AED";
			count = 1;
		};
		class _xx_ACE_blood_IV
		{
			name = "ACE_blood_IV";
			count = 5;
		};
		class _xx_ACE_blood_IV_500
		{
			name = "ACE_blood_IV_500";
			count = 10;
		};
		class _xx_ACE_blood_IV_250
		{
			name = "ACE_blood_IV_250";
			count = 15;
		};
	};
};
class 442_swla_deserters_backpack_tan_rps6_loaded: 442_swla_deserters_heavy_backpack_tan
{
	scope = 1;
	scopearsenal = 1;
	scopecurator = 1;
	class transportitems
	{
		class _xx_ACE_fieldDressing
		{
			count = 8;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_ElasticBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_ElasticBandage";
		};
		class _xx_ACE_quikclot: _xx_ACE_fieldDressing
		{
			name = "ACE_quikclot";
		};
		class _xx_ACE_packingBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_packingBandage";
		};
		class _xx_ACE_touriquet: _xx_ACE_fieldDressing
		{
			name = "ACE_touriquet";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_morphine: _xx_ACE_epinephrine
		{
			name = "ACE_morphine";
		};
		class _xx_adv_aceSplint_splint
		{
			count = 8;
			name = "adv_aceSplint_splint";
		};
	};
	class TransportMagazines
	{
		class _xx_SWLW_rps6_mag
		{
			magazine = "SWLW_rps6_mag";
			count = 2;
		};
	};
};
class 442_swla_deserters_backpack_tan_plx1_AT_loaded: 442_swla_deserters_heavy_backpack_tan
{
	scope = 1;
	scopearsenal = 1;
	scopecurator = 1;
	class transportitems
	{
		class _xx_ACE_fieldDressing
		{
			name = "ACE_fieldDressing";
			count = 8;
		};
		class _xx_ACE_ElasticBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_ElasticBandage";
		};
		class _xx_ACE_quikclot: _xx_ACE_fieldDressing
		{
			name = "ACE_quikclot";
		};
		class _xx_ACE_packingBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_packingBandage";
		};
		class _xx_ACE_touriquet: _xx_ACE_fieldDressing
		{
			name = "ACE_touriquet";
		};
		class _xx_ACE_epinephrine
		{
			name = "ACE_epinephrine";
			count = 2;
		};
		class _xx_ACE_morphine: _xx_ACE_epinephrine
		{
			name = "ACE_morphine";
		};
		class _xx_adv_aceSplint_splint
		{
			name = "adv_aceSplint_splint";
			count = 8;
		};
	};
	class transportmagazines
	{
		class _xx_SWLW_plx1_at_mag
		{
			magazine = "SWLW_plx1_at_mag";
			count = 2;
		};
	};
};
class 442_swla_deserters_backpack_tan_plx1_AA_loaded: 442_swla_deserters_heavy_backpack_tan
{
	scope = 1;
	scopearsenal = 1;
	scopecurator = 1;
	class transportitems
	{
		class _xx_ACE_fieldDressing
		{
			name = "ACE_fieldDressing";
			count = 8;
		};
		class _xx_ACE_ElasticBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_ElasticBandage";
		};
		class _xx_ACE_quikclot: _xx_ACE_fieldDressing
		{
			name = "ACE_quikclot";
		};
		class _xx_ACE_packingBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_packingBandage";
		};
		class _xx_ACE_touriquet: _xx_ACE_fieldDressing
		{
			name = "ACE_touriquet";
		};
		class _xx_ACE_epinephrine
		{
			name = "ACE_epinephrine";
			count = 2;
		};
		class _xx_ACE_morphine: _xx_ACE_epinephrine
		{
			name = "ACE_morphine";
		};
		class _xx_adv_aceSplint_splint
		{
			name = "adv_aceSplint_splint";
			count = 8;
		};
	};
	class transportmagazines
	{
		class _xx_SWLW_plx1_aa_mag
		{
			magazine = "SWLW_plx1_aa_mag";
			count = 2;
		};
	};
};
class 442_swla_deserters_backpack_tan_engineer_loaded: 442_swla_deserters_medic_backpack_tan_loaded
{
	class transportitems: transportitems
	{
		class _xx_toolkit
		{
			name = "toolkit";
			count = 1;
		};
	};
};
//woodland backpacks

class 442_swla_deserters_backpack_woodland_loaded: 442_swla_deserters_backpack_woodland
{
	scope = 1;
	scopearsenal = 1;
	scopecurator = 1;
	class transportitems
	{
		class _xx_ACE_fieldDressing
		{
			name = "ACE_fieldDressing";
			count = 8;
		};
		class _xx_ACE_ElasticBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_ElasticBandage";
		};
		class _xx_ACE_quikclot: _xx_ACE_fieldDressing
		{
			name = "ACE_quikclot";
		};
		class _xx_ACE_packingBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_packingBandage";
		};
		class _xx_ACE_touriquet: _xx_ACE_fieldDressing
		{
			name = "ACE_touriquet";
		};
		class _xx_ACE_epinephrine
		{
			name = "ACE_epinephrine";
			count = 2;
		};
		class _xx_ACE_morphine: _xx_ACE_epinephrine
		{
			name = "ACE_morphine";
		};
		class _xx_adv_aceSplint_splint
		{
			name = "adv_aceSplint_splint";
			count = 8;
		};
	};
};
class 442_swla_deserters_medic_backpack_woodland_loaded: 442_swla_deserters_heavy_backpack_woodland
{
	scope = 1;
	scopearsenal = 1;
	scopecurator = 1;
	class transportitems
	{
		class _xx_ACE_fieldDressing
		{
			name = "ACE_fieldDressing";
			count = 20;
		};
		class _xx_ACE_ElasticBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_ElasticBandage";
		};
		class _xx_ACE_quikclot: _xx_ACE_fieldDressing
		{
			name = "ACE_quikclot";
		};
		class _xx_ACE_packingBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_packingBandage";
		};
		class _xx_ACE_touriquet: _xx_ACE_fieldDressing
		{
			name = "ACE_touriquet";
		};
		class _xx_ACE_epinephrine
		{
			name = "ACE_epinephrine";
			count = 10;
		};
		class _xx_ACE_morphine: _xx_ACE_epinephrine
		{
			name = "ACE_morphine";
		};
		class _xx_adv_aceSplint_splint: _xx_ACE_fieldDressing
		{
			name = "adv_aceSplint_splint";
		};
		class _xx_ACE_surgicalKit
		{
			name = "ACE_surgicalKit";
			count = 1;
		};
		class _xx_adv_aceCPR_AED
		{
			name = "adv_aceCPR_AED";
			count = 1;
		};
		class _xx_ACE_blood_IV
		{
			name = "ACE_blood_IV";
			count = 5;
		};
		class _xx_ACE_blood_IV_500
		{
			name = "ACE_blood_IV_500";
			count = 10;
		};
		class _xx_ACE_blood_IV_250
		{
			name = "ACE_blood_IV_250";
			count = 15;
		};
	};
};
class 442_swla_deserters_backpack_woodland_rps6_loaded: 442_swla_deserters_heavy_backpack_woodland
{
	scope = 1;
	scopearsenal = 1;
	scopecurator = 1;
	class transportitems
	{
		class _xx_ACE_fieldDressing
		{
			count = 8;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_ElasticBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_ElasticBandage";
		};
		class _xx_ACE_quikclot: _xx_ACE_fieldDressing
		{
			name = "ACE_quikclot";
		};
		class _xx_ACE_packingBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_packingBandage";
		};
		class _xx_ACE_touriquet: _xx_ACE_fieldDressing
		{
			name = "ACE_touriquet";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_morphine: _xx_ACE_epinephrine
		{
			name = "ACE_morphine";
		};
		class _xx_adv_aceSplint_splint
		{
			count = 8;
			name = "adv_aceSplint_splint";
		};
	};
	class TransportMagazines
	{
		class _xx_SWLW_rps6_mag
		{
			magazine = "SWLW_rps6_mag";
			count = 2;
		};
	};
};
class 442_swla_deserters_backpack_woodland_plx1_AT_loaded: 442_swla_deserters_heavy_backpack_woodland
{
	scope = 1;
	scopearsenal = 1;
	scopecurator = 1;
	class transportitems
	{
		class _xx_ACE_fieldDressing
		{
			name = "ACE_fieldDressing";
			count = 8;
		};
		class _xx_ACE_ElasticBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_ElasticBandage";
		};
		class _xx_ACE_quikclot: _xx_ACE_fieldDressing
		{
			name = "ACE_quikclot";
		};
		class _xx_ACE_packingBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_packingBandage";
		};
		class _xx_ACE_touriquet: _xx_ACE_fieldDressing
		{
			name = "ACE_touriquet";
		};
		class _xx_ACE_epinephrine
		{
			name = "ACE_epinephrine";
			count = 2;
		};
		class _xx_ACE_morphine: _xx_ACE_epinephrine
		{
			name = "ACE_morphine";
		};
		class _xx_adv_aceSplint_splint
		{
			name = "adv_aceSplint_splint";
			count = 8;
		};
	};
	class transportmagazines
	{
		class _xx_SWLW_plx1_at_mag
		{
			magazine = "SWLW_plx1_at_mag";
			count = 2;
		};
	};
};
class 442_swla_deserters_backpack_woodland_plx1_AA_loaded: 442_swla_deserters_heavy_backpack_woodland
{
	scope = 1;
	scopearsenal = 1;
	scopecurator = 1;
	class transportitems
	{
		class _xx_ACE_fieldDressing
		{
			name = "ACE_fieldDressing";
			count = 8;
		};
		class _xx_ACE_ElasticBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_ElasticBandage";
		};
		class _xx_ACE_quikclot: _xx_ACE_fieldDressing
		{
			name = "ACE_quikclot";
		};
		class _xx_ACE_packingBandage: _xx_ACE_fieldDressing
		{
			name = "ACE_packingBandage";
		};
		class _xx_ACE_touriquet: _xx_ACE_fieldDressing
		{
			name = "ACE_touriquet";
		};
		class _xx_ACE_epinephrine
		{
			name = "ACE_epinephrine";
			count = 2;
		};
		class _xx_ACE_morphine: _xx_ACE_epinephrine
		{
			name = "ACE_morphine";
		};
		class _xx_adv_aceSplint_splint
		{
			name = "adv_aceSplint_splint";
			count = 8;
		};
	};
	class transportmagazines
	{
		class _xx_SWLW_plx1_aa_mag
		{
			magazine = "SWLW_plx1_aa_mag";
			count = 2;
		};
	};
};
class 442_swla_deserters_backpack_woodland_engineer_loaded: 442_swla_deserters_medic_backpack_woodland_loaded
{
	class transportitems: transportitems
	{
		class _xx_toolkit
		{
			name = "toolkit";
			count = 1;
		};
	};
};