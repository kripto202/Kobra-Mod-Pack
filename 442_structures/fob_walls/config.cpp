class cfgpatches
{
    class k_structures_fobwalls
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "k_wall1",
			"k_wall1_ramp",
			"k_wall1_corner"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class House_F;
    class k_wall1: House_F
	{
		scope=2;
		scopecurator=2;
		author = "Kobra Mod Team";
		displayName="Fob Wall 1";
		model="\kobra\442_structures\fob_walls\k_wall1.p3d";
		destrType="DestructNo";
		editorcategory="kobra";
		editorsubcategory="442_fob";
		vehicleClass="Structures";
		hiddenselections[]=
		{
			"camo1"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\fob_walls\data\wall1_co.paa"
		};
	};
	class k_wall1_corner: k_wall1
	{
		displayname = "Fob Wall 1 (Corner)";
		model="\kobra\442_structures\fob_walls\k_wall1_corner.p3d";
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\fob_walls\data\wall1_corner_co.paa"
		};
	};
	class k_wall1_ramp: k_wall1
	{
		displayname = "Fob Wall 1 (Ramp)";
		model="\kobra\442_structures\fob_walls\k_wall1_ramp.p3d";
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\fob_walls\data\wall1_ramp_co.paa"
		};
	};
};