    class 442_first_shot: Items_base_F
	{
		scope=2;
		scopecurator=2;
		author="kripto202";
		displayName="First Shot Bottle";
		model="442_misc\bottle\bottle.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item_small";
		simulation="thingx";
		armor=0.1;
		epeImpulsedamagecoef=0.1;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
			init="''";
		};
		class EventHandlers
		{
			hitPart="((_this select 0) select 0) setDamage 1";
			killed="[_this] execVM '\A3\Structures_F_Mark\Items\Sport\Scripts\Balloon_01_water_F_hitPart.sqf';";
		};
		hiddenselections[]=
		{
			"camo1"
		};
		hiddenselectionstextures[]=
		{
			"442_misc\bottle\data\firstshot_co.paa"
		};
	};