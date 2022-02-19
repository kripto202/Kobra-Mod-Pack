class cfgpatches
{
    class 442_misc_barrel2
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "k_barrel1",
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class Items_base_F;
////////barrel 1///////////////
    class k_barrel1: Items_base_F
	{
		scope=2;
		scopecurator=2;
		author = "KOBRA Mod Team";
		displayName="Small Barrel";
		model="kobra\442_misc\barrel2\k_barrel1.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		simulation="thingx";
		armor=10;
		destrType="DestructNo";
		ace_cargo_size = 1;
		ace_cargo_canload = 1;
		ace_dragging_can_drag = 1;
		ace_dragging_dragPosition[] = {0, 1.2, 0};
		ace_dragging_dragDirection = 0;
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 1.2, 0};
		ace_dragging_carryDirection = 0;
		ace_interaction_bodyWidth=3;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
			init="''";
		};
		hiddenselections[]=
		{
			"camo1"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_misc\barrel2\data\barrel1_co.paa"
		};
	};
};