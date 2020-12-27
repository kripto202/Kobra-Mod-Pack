class cfgpatches
{
    class 442_misc_mine_cart
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
        requiredVersion = 0.1;
        units[] = 
        {
            "442_mine_cart"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class Items_base_F;
    class 442_mine_cart: Items_base_F
	{
		scope=2;
		scopecurator=2;
		author = "KOBRA Mod Team";
		displayName="Mining Cart";
		model="kobra\442_misc\mine_cart\miningcart.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		simulation="thingx";
		hiddenselections[]=
		{
			"camo1"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_misc\mine_cart\data\mining_cart_co.paa"
		};
		ace_cargo_size = 1;
		ace_cargo_canload = 1;
		ace_dragging_can_drag = 0;
		ace_dragging_dragPosition[] = {0, 1.2, 0};
		ace_dragging_dragDirection = 0;
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 2, 0};
		ace_dragging_carryDirection = 0;
	};
};