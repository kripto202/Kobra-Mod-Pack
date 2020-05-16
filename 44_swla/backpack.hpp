class 44_swla_backpack: 44_swla_clone_backpack_base
{
	scope = 2;
	author = "kripto202";
	displayname = "[44] Clone Backpack";
	hiddenselectionstextures[] = 
	{
		"44_swla\data\backpacks\swla_backpack_44.paa",
		"44_swla\data\backpacks\swla_backpack_44.paa",
		"",
		"",
		""
	};
};
class 44_swla_heavy_backpack: 44_swla_clone_backpack_base
{
	scope = 2;
	displayname = "[44] Clone Heavy Backpack";
	maximumload = 400;
	hiddenselectionstextures[] = 
	{
		"44_swla\data\backpacks\swla_backpack_44.paa",
		"44_swla\data\backpacks\swla_backpack_44.paa",
		"44_swla\data\backpacks\swla_backpack_44.paa",
		"",
		""
	};
};
class 44_swla_rto_backpack: 44_swla_clone_rto_backpack_base
{
	scope = 2;
	displayname = "[44] Clone rto Backpack";
	hiddenselectionstextures[] = 
	{
		"44_swla\data\backpacks\swla_backpack_44.paa",
		"",
		"",
		"",
		"44_swla\data\backpacks\swla_backpack_44.paa"
	};
};
class 44_swla_medic_backpack: 44_swla_clone_backpack_base
{
	scope = 2;
	displayname = "[44] Clone medic Backpack";
	maximumload = 400;
	hiddenselectionstextures[] = 
	{
		"44_swla\data\backpacks\swla_backpack_44.paa",
		"44_swla\data\backpacks\swla_backpack_44.paa",
		"",
		"44_swla\data\backpacks\swla_backpack_44.paa",
		""
	};
};

class 44_swla_clone_bag: 44_swla_clone_bag_base
{
	displayName="[44] Clone trooper bags";
	scope = 2;
	hiddenSelectionstextures[]=
	{
		"\SWLB_equipment\backpacks\data\bag_co.paa",
		"\SWLB_equipment\backpacks\data\bag_co.paa"
	};
};
class 44_swla_clone_bag_belt: 44_swla_clone_bag_base
{
	displayName="[44] Clone trooper bags (belt)";
	scope = 2;
	maximumload = 50;
	hiddenSelectionstextures[]=
	{
		"\SWLB_equipment\backpacks\data\bag_co.paa",
		""
	};
};
class 44_swla_clone_bag_leg: 44_swla_clone_bag_base
{
	displayName="[44] Clone trooper bags (leg)";
	scope = 2;
	maximumload = 50;
	hiddenSelectionstextures[]=
	{
		"",
		"\SWLB_equipment\backpacks\data\bag_co.paa"
	};
};

/* class 44_arc_backpack: SWLB_clone_arc_backpack
{
	displayname = "[44] Arc Backpack";
	tf_dialog="SWLB_clone_rto_radio_dialog";
	tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode="tf_west_radio_code";
	tf_hasLRradio=1;
	tf_range=25000;
	tf_subtype="digital_lr";
}; */

/* class 44_swla_backpack_1_loaded: 44_swla_backpack_1
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
	};
};
class 44_swla_medic_backpack_1_loaded: 44_swla_medic_backpack_1
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
		class _xx_ACE_surgicalKit
		{
			name = "ACE_surgicalKit";
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
class 44_swla_backpack_1_rps6_loaded: 44_swla_heavy_backpack_1
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
	};
	class TransportMagazines
	{
		class _xx_44_rps6_mag
		{
			magazine = "44_rps6_heat_mag";
			count = 2;
		};
	};
};
class 44_swla_backpack_1_plx1_AT_loaded: 44_swla_heavy_backpack_1
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
class 44_swla_backpack_1_plx1_AA_loaded: 44_swla_heavy_backpack_1
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
class 44_swla_backpack_1_engineer_loaded: 44_swla_medic_backpack_1_loaded
{
	hiddenselectionstextures[] = 
	{
		"44_swla\data\backpacks\swla_backpack_44.paa",
		"44_swla\data\backpacks\swla_backpack_44.paa",
		"",
		"",
		""
	};
	class transportitems: transportitems
	{
		class _xx_toolkit
		{
			name = "toolkit";
			count = 1;
		};
	};
};
class 44_swla_backpack_1_rto_loaded: 44_swla_rto_backpack_1
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
	};
}; */
/* class 44_swla_backpack_1_arc_loaded: 44_arc_backpack
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
	};
}; */
