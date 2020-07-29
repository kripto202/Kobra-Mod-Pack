    class 442_sweeper: Items_base_F
	{
		scope=2;
		scopecurator=2;
		author="kripto202";
		displayName="Sweeper Droid (green)";
		model="442_misc\sweeper\sweeper.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		simulation="thingx";
		hiddenselections[]=
		{
			"body",
			"arms"
		};
		hiddenselectionstextures[]=
		{
			"442_misc\sweeper\data\body_co.paa",
			"442_misc\sweeper\data\arms_co.paa"
		};
	};
	class 442_sweeper_2: 442_sweeper
	{
		displayname="Sweeper Droid (Red)";
		hiddenselectionstextures[]=
		{
			"442_misc\sweeper\data\body2_co.paa",
			"442_misc\sweeper\data\arms_co.paa"
		};
	};
	class 442_sweeper_3: 442_sweeper
	{
		displayname="Sweeper Droid (Orange)";
		hiddenselectionstextures[]=
		{
			"442_misc\sweeper\data\body3_co.paa",
			"442_misc\sweeper\data\arms_co.paa"
		};
	};