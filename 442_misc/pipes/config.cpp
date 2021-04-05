class cfgpatches
{
    class 442_misc_pipes
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "k_pipes1",
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
	class house_small_f;
	class k_pipes1: house_small_f
	{
		author = "KOBRA Mod Team";
		mapsize=1;
		scope=2;
		scopecurator=2;
		displayname="pipes 1";
		model="kobra\442_misc\pipes\pipes1.p3d";
		icon="iconObject";
		editorcategory="kobra";
		editorsubcategory="442_item";
		armor=500;
		cost=1000;
		armorlights=1;
		islockingdisabled=1;
	};
};