class k_swla_backpack: k_swla_clone_backpack_base
	{
		scope=2;
		author="kripto202";
		displayname="[K] Clone Backpack";
		hiddenselectionstextures[]=
		{
			"44_swla\data\backpacks\swla_backpack_44.paa",
			"44_swla\data\backpacks\swla_backpack_44.paa",
			"",
			"",
			""
		};
	};
	class k_swla_heavy_backpack: k_swla_clone_backpack_base
	{
		scope=2;
		displayname="[K] Clone Heavy Backpack";
		maximumload=400;
		hiddenselectionstextures[]=
		{
			"44_swla\data\backpacks\swla_backpack_44.paa",
			"44_swla\data\backpacks\swla_backpack_44.paa",
			"44_swla\data\backpacks\swla_backpack_44.paa",
			"",
			""
		};
	};
	class k_swla_rto_backpack: k_swla_clone_rto_backpack_base
	{
		scope=2;
		displayname="[K] Clone rto Backpack";
		hiddenselectionstextures[]=
		{
			"44_swla\data\backpacks\swla_backpack_44.paa",
			"",
			"",
			"",
			"44_swla\data\backpacks\swla_backpack_44.paa"
		};
	};
	class k_swla_medic_backpack: k_swla_clone_backpack_base
	{
		scope=2;
		displayname="[K] Clone medic Backpack";
		maximumload=400;
		hiddenselectionstextures[]=
		{
			"44_swla\data\backpacks\swla_backpack_44.paa",
			"44_swla\data\backpacks\swla_backpack_44.paa",
			"",
			"44_swla\data\backpacks\swla_backpack_44.paa",
			""
		};
	};
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