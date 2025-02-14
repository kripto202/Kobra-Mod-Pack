class cfgpatches
{
    class 442_misc_barricade
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_barricade1",
			"442_barricade1_rep",
			"442_barricade1_cis",
			"442_barricade1_empire",
			"442_barricade2",
			"442_barricade3",
			"442_barricade4",
			"442_barricade5",
			"442_barricade6",
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class house_f;
    class 442_barricade1: house_f
	{
		displayName="Barricade 1";
		model="\kobra\442_misc\barricade\barricade1.p3d";
		destrType="DestructNo";
		editorcategory="kobra";
		editorsubcategory="442_barricade";
		scope=2;
		scopecurator=2;
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\barricade\data\barricade1_co.paa"
		};
	};
	class 442_barricade1_rep: 442_barricade1
	{
		displayname = "Barricade 1 (Republic)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\barricade\data\barricade1_rep_co.paa"
		};
	};
	class 442_barricade1_cis: 442_barricade1
	{
		displayname = "Barricade 1 (CIS)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\barricade\data\barricade1_cis_co.paa"
		};
	};
	class 442_barricade1_empire: 442_barricade1
	{
		displayname = "Barricade 1 (Empire)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\barricade\data\barricade1_empire_co.paa"
		};
	};
	class 442_barricade2: 442_barricade1
	{
		displayname = "Barricade 2";
		model="\kobra\442_misc\barricade\barricade2.p3d";
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\barricade\data\barricade2_co.paa"
		};
	};
	class 442_barricade3: 442_barricade1
	{
		displayname = "Barricade 3";
		model="\kobra\442_misc\barricade\barricade3.p3d";
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\barricade\data\barricade3_co.paa"
		};
	};
	class 442_barricade4: 442_barricade1
	{
		displayname = "Barricade 4";
		model="\kobra\442_misc\barricade\barricade4.p3d";
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\barricade\data\barricade4_co.paa"
		};
	};
	class 442_barricade5: 442_barricade1
	{
		displayname = "Barricade 5";
		model="\kobra\442_misc\barricade\barricade5.p3d";
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\barricade\data\barricade5_co.paa"
		};
	};
	class 442_barricade6: 442_barricade1
	{
		displayname = "Barricade 6";
		model="\kobra\442_misc\barricade\barricade6.p3d";
		hiddenselectionstextures[] = 
		{
			"kobra\442_misc\barricade\data\barricade6_co.paa"
		};
	};
};