class cfgpatches
{
    class 442_misc_barrel
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_barrel1",
			"442_barrel1_republic",
			"442_barrel1_cis",
			"442_barrel1_red",
			"442_barrel1_blue",
			"442_barrel1_yellow",
			"442_barrel1_green",
			"k_barrel2",
			"k_barrel2_red",
			"k_barrel2_blue",
			"k_barrel2_green",
			"k_barrel2_orange",
			"k_barrel2_purple",
			"k_barrel2_yellow"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class Items_base_F;
////////barrel 1///////////////
    class 442_barrel1: Items_base_F
	{
		scope=2;
		scopecurator=2;
		author = "KOBRA Mod Team";
		displayName="Barrel 1";
		model="kobra\442_misc\barrel\barrel1.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		simulation="thingx";
		armor=10;
		transportFuel = 600;
		destrType="DestructBuilding";
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
		class DestructionEffects
		{
			class HouseDestr
			{
				intensity=1;
				interval=1;
				lifeTime=0.1;
				position="";
				simulation="destroy";
				type="DelayedDestructionAmmoBox";
			};
		};
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
		hiddenselections[]=
		{
			"camo1"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_misc\barrel\data\barrel1_co.paa"
		};
	};
	class 442_barrel1_republic: 442_barrel1
	{
		displayName="Barrel 1 (Republic)";
		hiddenselectionstextures[]=
		{
			"kobra\442_misc\barrel\data\barrel1_republic_co.paa"
		};
	};
	class 442_barrel1_cis: 442_barrel1
	{
		displayName="Barrel 1 (CIS)";
		hiddenselectionstextures[]=
		{
			"kobra\442_misc\barrel\data\barrel1_cis_co.paa"
		};
	};
	class 442_barrel1_red: 442_barrel1
	{
		displayName="Barrel 1 (Red)";
		hiddenselectionstextures[]=
		{
			"kobra\442_misc\barrel\data\barrel1_red_co.paa"
		};
	};
	class 442_barrel1_blue: 442_barrel1
	{
		displayName="Barrel 1 (Blue)";
		hiddenselectionstextures[]=
		{
			"kobra\442_misc\barrel\data\barrel1_blue_co.paa"
		};
	};
	class 442_barrel1_yellow: 442_barrel1
	{
		displayName="Barrel 1 (Yellow)";
		hiddenselectionstextures[]=
		{
			"kobra\442_misc\barrel\data\barrel1_yellow_co.paa"
		};
	};
	class 442_barrel1_green: 442_barrel1
	{
		displayName="Barrel 1 (Green)";
		hiddenselectionstextures[]=
		{
			"kobra\442_misc\barrel\data\barrel1_green_co.paa"
		};
	};
//////////barrel 2//////////
	class k_barrel2: Items_base_f
	{
		scope=2;
		scopecurator=2;
		author = "KOBRA Mod Team";
		displayName="Barrel 2";
		model="kobra\442_misc\barrel\barrel2.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		simulation="thingx";
		ace_cargo_size = 1;
		ace_cargo_canload = 1;
		ace_dragging_can_drag = 1;
		ace_dragging_dragPosition[] = {0, 1.2, 0};
		ace_dragging_dragDirection = 0;
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 1.2, 0};
		ace_dragging_carryDirection = 0;
		ace_interaction_bodyWidth=3;
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\barrel\data\barrel2_co.paa"
		};
	};
	class k_barrel2_red: k_barrel2
	{
		displayName="Barrel 2 (Red)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\barrel\data\barrel2_red_co.paa"
		};
	};
	class k_barrel2_blue: k_barrel2
	{
		displayName="Barrel 2 (Blue)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\barrel\data\barrel2_blue_co.paa"
		};
	};
	class k_barrel2_green: k_barrel2
	{
		displayName="Barrel 2 (Green)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\barrel\data\barrel2_green_co.paa"
		};
	};
	class k_barrel2_orange: k_barrel2
	{
		displayName="Barrel 2 (Orange)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\barrel\data\barrel2_orange_co.paa"
		};
	};
	class k_barrel2_purple: k_barrel2
	{
		displayName="Barrel 2 (Purple)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\barrel\data\barrel2_purple_co.paa"
		};
	};
	class k_barrel2_yellow: k_barrel2
	{
		displayName="Barrel 2 (Yellow)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\barrel\data\barrel2_yellow_co.paa"
		};
	};
	
};