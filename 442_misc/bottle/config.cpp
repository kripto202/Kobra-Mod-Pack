class cfgpatches
{
    class 442_misc_bottle
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_first_shot",
			"442_bottle1"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class Items_base_F;
    class 442_first_shot: Items_base_F
	{
		scope=2;
		scopecurator=2;
		author = "KOBRA Mod Team";
		displayName="First Shot Bottle";
		model="kobra\442_misc\bottle\bottle.p3d";
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
			"kobra\442_misc\bottle\data\firstshot_co.paa"
		};
	};
	class 442_bottle1: 442_first_shot
	{
		displayName="Bottle 1";
		model="kobra\442_misc\bottle\bottle1.p3d";
		hiddenselectionstextures[]=
		{
			"kobra\442_misc\bottle\data\bottle1_co.paa"
		};
	};
};