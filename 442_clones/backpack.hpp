class k_clone_backpack: k_clone_backpack_base
{
	displayname = "[K] Clone Trooper Backpack";
	scope = 2;
	model = "442_clones\backpack.p3d";
	hiddenselections[] = 
	{
		"backpack",
		"cover"
	};
	hiddenselectionstextures[] = 
	{
		"442_clones\data\backpack\backpack_co.paa",
		"442_clones\data\backpack\cover_co.paa",
	};
};
class k_clone_backpack_med: k_clone_backpack_base
{
	displayname = "[K] Clone Trooper Medium Backpack";
	scope = 2;
	model = "442_clones\backpack_med.p3d";
	hiddenselections[] = 
	{
		"backpack",
		"cover",
		"pouches"
	};
	hiddenselectionstextures[] = 
	{
		"442_clones\data\backpack\backpack_co.paa",
		"442_clones\data\backpack\cover_co.paa",
		"442_clones\data\backpack\pouches_co.paa",
	};
};
class k_clone_backpack_heavy: k_clone_backpack_base
{
	displayname = "[K] Clone Trooper Heavy Backpack";
	scope = 2;
	model = "442_clones\backpack_heavy.p3d";
	hiddenselections[] = 
	{
		"backpack",
		"cover",
		"pouches",
		"tube"
	};
	hiddenselectionstextures[] = 
	{
		"442_clones\data\backpack\backpack_co.paa",
		"442_clones\data\backpack\cover_co.paa",
		"442_clones\data\backpack\pouches_co.paa",
		"442_clones\data\backpack\tube_co.paa",
	};
};
class k_clone_backpack_medic: k_clone_backpack_base
{
	displayname = "[K] Clone Trooper Medic Backpack";
	scope = 2;
	model = "442_clones\backpack_medic.p3d";
	hiddenselections[] = 
	{
		"backpack",
		"cover",
		"medic1",
		"medic2"
	};
	hiddenselectionstextures[] = 
	{
		"442_clones\data\backpack\backpack_medic_co.paa",
		"442_clones\data\backpack\cover_co.paa",
		"442_clones\data\backpack\medic_co.paa",
		"442_clones\data\backpack\medic_co.paa",
	};
};
class k_clone_backpack_medic_med: k_clone_backpack_base
{
	displayname = "[K] Clone Trooper Medic Medium Backpack";
	scope = 2;
	model = "442_clones\backpack_medic_med.p3d";
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
		"442_clones\data\backpack\backpack_medic_co.paa",
		"442_clones\data\backpack\cover_co.paa",
		"442_clones\data\backpack\pouches_co.paa",
		"442_clones\data\backpack\medic_co.paa",
		"442_clones\data\backpack\medic_co.paa",
	};
};
class k_clone_backpack_radio: k_clone_rto_backpack_base
{
	displayname = "[K] Clone Trooper Radio Backpack";
	scope = 2;
	model = "442_clones\backpack_radio.p3d";
	hiddenselections[] = 
	{
		"backpack",
		"radio",
		"screen"
	};
	hiddenselectionstextures[] = 
	{
		"442_clones\data\backpack\backpack_co.paa",
		"442_clones\data\backpack\radio_co.paa",
		"442_clones\data\backpack\screen_co.paa",
	};
};
class k_clone_backpack_radio_med: k_clone_rto_backpack_base
{
	displayname = "[K] Clone Trooper Radio Medium Backpack";
	scope = 2;
	model = "442_clones\backpack_radio_med.p3d";
	hiddenselections[] = 
	{
		"backpack",
		"radio",
		"screen",
		"pouches"
	};
	hiddenselectionstextures[] = 
	{
		"442_clones\data\backpack\backpack_co.paa",
		"442_clones\data\backpack\radio_co.paa",
		"442_clones\data\backpack\screen_co.paa",
		"442_clones\data\backpack\pouches_co.paa",
	};
};
class k_clone_backpack_rocket: k_clone_backpack_base
{
	displayname = "[K] Clone Trooper Rocket Backpack";
	scope = 2;
	model = "442_clones\backpack_rocket.p3d";
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
		"442_clones\data\backpack\backpack_eod_co.paa",
		"442_clones\data\backpack\holder_co.paa",
		"442_clones\data\backpack\rocket_co.paa",
		"442_clones\data\backpack\light_co.paa",
		"442_clones\data\backpack\pouches_co.paa",
	};
};

/////////////legion bags///////////

class k_swla_clone_bag: k_swla_clone_bag_base
{
	displayName="[K] Clone trooper bags";
	scope=2;
	hiddenSelectionstextures[]=
	{
		"\SWLB_equipment\backpacks\data\bag_co.paa",
		"\SWLB_equipment\backpacks\data\bag_co.paa"
	};
};
class k_swla_clone_bag_belt: k_swla_clone_bag_base
{
	displayName="[K] Clone trooper bags (belt)";
	scope=2;
	maximumload=50;
	hiddenSelectionstextures[]=
	{
		"\SWLB_equipment\backpacks\data\bag_co.paa",
		""
	};
};
class k_swla_clone_bag_leg: k_swla_clone_bag_base
{
	displayName="[K] Clone trooper bags (leg)";
	scope=2;
	maximumload=50;
	hiddenSelectionstextures[]=
	{
		"",
		"\SWLB_equipment\backpacks\data\bag_co.paa"
	};
};