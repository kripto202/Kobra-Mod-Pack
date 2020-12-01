class cfgpatches
{
    class 442_misc_bullet
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_blue_tracer",
            "442_blue_tracer_05",
            "442_blue_tracer_025",
            "442_blue_tracer_b",
            "442_blue_tracer_b_05",
            "442_blue_tracer_025",
            "442_red_tracer",
            "442_red_tracer_05",
            "442_red_tracer_025",
            "442_red_tracer_b",
            "442_red_tracer_b_05",
            "442_red_tracer_b_025",
            "442_green_tracer",
            "442_green_tracer_05",
            "442_green_tracer_025",
            "442_green_tracer_b",
            "442_green_tracer_b_05",
            "442_green_tracer_b_05",
            "442_orange_tracer",
            "442_orange_tracer_05",
            "442_orange_tracer_025",
            "442_orange_tracer_b",
            "442_orange_tracer_b_05",
            "442_orange_tracer_b_025",
            "442_pink_tracer",
            "442_pink_tracer_05",
            "442_pink_tracer_025",
            "442_pink_tracer_b",
            "442_pink_tracer_b_05",
            "442_pink_tracer_b_025",
            "442_purple_tracer",
            "442_purple_tracer_05",
            "442_purple_tracer_025",
            "442_purple_tracer_b",
            "442_purple_tracer_b_05",
            "442_purple_tracer_b_025",
            "442_black_tracer",
            "442_black_tracer_05",
            "442_black_tracer_025",
            "442_white_tracer_b",
            "442_white_tracer_b_05",
            "442_white_tracer_b_025",
            "442_yellow_tracer",
            "442_yellow_tracer_05",
            "442_yellow_tracer_025",
            "442_yellow_tracer_b",
            "442_yellow_tracer_b_05",
            "442_yellow_tracer_b_025",
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class House_F;
////////////blue tracer////////////
    class 442_blue_tracer: house_f
    {
        scope = 2;
        scopecurator = 1;
        displayname = "Plasma Bolt (Blue)";
        model = "kobra\442_weapons\ammo\blue_tracer.p3d";
        editorcategory="kobra";
		editorsubcategory="442_props";
    };
    class 442_blue_tracer_05: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Blue - Medium)";
        model = "kobra\442_weapons\ammo\blue_tracer_05.p3d";
    };
    class 442_blue_tracer_025: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Blue - Small)";
        model = "kobra\442_weapons\ammo\blue_tracer_025.p3d";
    };
    
    class 442_blue_tracer_b: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Blue/B)";
        model = "kobra\442_weapons\ammo\blue_b_tracer.p3d";
    };
    class 442_blue_tracer_b_05: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Blue/B - Medium)";
        model = "kobra\442_weapons\ammo\blue_b_tracer_05.p3d";
    };
    class 442_blue_tracer_b_025: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Blue/B - Small)";
        model = "kobra\442_weapons\ammo\blue_b_tracer_025.p3d";
    };
////////////red tracer////////////////
	class 442_red_tracer: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Red)";
        model = "kobra\442_weapons\ammo\red_tracer.p3d";
    };
    class 442_red_tracer_05: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Red - Medium)";
        model = "kobra\442_weapons\ammo\red_tracer_05.p3d";
    };
    class 442_red_tracer_025: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Red - Small)";
        model = "kobra\442_weapons\ammo\red_tracer_025.p3d";
    };

	class 442_red_tracer_b: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Red/B)";
        model = "kobra\442_weapons\ammo\red_b_tracer.p3d";
    };
    class 442_red_tracer_b_05: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Red/B - Medium)";
        model = "kobra\442_weapons\ammo\red_b_tracer_05.p3d";
    };
    class 442_red_tracer_b_025: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Red/B - Small)";
        model = "kobra\442_weapons\ammo\red_b_tracer_025.p3d";
    };
////////////green tracer////////////
	class 442_green_tracer: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Green)";
        model = "kobra\442_weapons\ammo\green_tracer.p3d";
    };
    class 442_green_tracer_05: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Green - Medium)";
        model = "kobra\442_weapons\ammo\green_tracer_05.p3d";
    };
    class 442_green_tracer_025: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Green - Small)";
        model = "kobra\442_weapons\ammo\green_tracer_025.p3d";
    };

	class 442_green_tracer_b: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Green/B)";
        model = "kobra\442_weapons\ammo\green_b_tracer.p3d";
    };
    class 442_green_tracer_b_05: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Green/B - Medium)";
        model = "kobra\442_weapons\ammo\green_b_tracer_05.p3d";
    };
    class 442_green_tracer_b_025: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Green/B - Small)";
        model = "kobra\442_weapons\ammo\green_b_tracer_025.p3d";
    };
////////////orange tracer///////////////
	class 442_orange_tracer: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Orange)";
        model = "kobra\442_weapons\ammo\orange_tracer.p3d";
    };
    class 442_orange_tracer_05: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Orange - Medium)";
        model = "kobra\442_weapons\ammo\orange_tracer_05.p3d";
    };
    class 442_orange_tracer_025: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Orange - Small)";
        model = "kobra\442_weapons\ammo\orange_tracer_025.p3d";
    };

	class 442_orange_tracer_b: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Orange/B)";
        model = "kobra\442_weapons\ammo\orange_b_tracer.p3d";
    };
    class 442_orange_tracer_b_05: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Orange/B - Medium)";
        model = "kobra\442_weapons\ammo\orange_b_tracer_05.p3d";
    };
    class 442_orange_tracer_b_025: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Orange/B - Small)";
        model = "kobra\442_weapons\ammo\orange_b_tracer_025.p3d";
    };
////////////pink tracer//////////////
	class 442_pink_tracer: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Pink)";
        model = "kobra\442_weapons\ammo\pink_tracer.p3d";
    };
    class 442_pink_tracer_05: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Pink - Medium)";
        model = "kobra\442_weapons\ammo\pink_tracer_05.p3d";
    };
    class 442_pink_tracer_025: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Pink - Small)";
        model = "kobra\442_weapons\ammo\pink_tracer_025.p3d";
    };

	class 442_pink_tracer_b: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Pink/B)";
        model = "kobra\442_weapons\ammo\pink_b_tracer.p3d";
    };
    class 442_pink_tracer_b_05: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Pink/B - Medium)";
        model = "kobra\442_weapons\ammo\pink_b_tracer_05.p3d";
    };
    class 442_pink_tracer_b_025: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Pink/B - Small)";
        model = "kobra\442_weapons\ammo\pink_b_tracer_025.p3d";
    };
////////////purple tracer////////////
	class 442_purple_tracer: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Purple)";
        model = "kobra\442_weapons\ammo\purple_tracer.p3d";
    };
    class 442_purple_tracer_05: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Purple - Medium)";
        model = "kobra\442_weapons\ammo\purple_tracer_05.p3d";
    };
    class 442_purple_tracer_025: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Purple - Small)";
        model = "kobra\442_weapons\ammo\purple_tracer_025.p3d";
    };

	class 442_purple_tracer_b: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Purple/B)";
        model = "kobra\442_weapons\ammo\purple_b_tracer.p3d";
    };
    class 442_purple_tracer_b_05: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Purple/B - Medium)";
        model = "kobra\442_weapons\ammo\purple_tracer_b_05.p3d";
    };
    class 442_purple_tracer_b_025: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Purple/B - Small)";
        model = "kobra\442_weapons\ammo\purple_tracer_b_025.p3d";
    };
////////////black tracer////////////
	class 442_black_tracer: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Black)";
        model = "kobra\442_weapons\ammo\black_tracer.p3d";
    };
    class 442_black_tracer_05: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Black - Medium)";
        model = "kobra\442_weapons\ammo\black_tracer_05.p3d";
    };
    class 442_black_tracer_025: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Black - Small)";
        model = "kobra\442_weapons\ammo\black_tracer_025.p3d";
    };
////////////white tracer////////////
	class 442_white_tracer_b: 442_blue_tracer
    {
        displayname = "Plasma Bolt (White/B)";
        model = "kobra\442_weapons\ammo\white_b_tracer.p3d";
    };
    class 442_white_tracer_b_05: 442_blue_tracer
    {
        displayname = "Plasma Bolt (White/B - Medium)";
        model = "kobra\442_weapons\ammo\white_b_tracer_05.p3d";
    };
    class 442_white_tracer_b_025: 442_blue_tracer
    {
        displayname = "Plasma Bolt (White/B - Small)";
        model = "kobra\442_weapons\ammo\white_b_tracer_025.p3d";
    };
////////////yellow tracer/////////////
	class 442_yellow_tracer: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Yellow)";
        model = "kobra\442_weapons\ammo\yellow_tracer.p3d";
    };
    class 442_yellow_tracer_05: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Yellow - Medium)";
        model = "kobra\442_weapons\ammo\yellow_tracer_05.p3d";
    };
    class 442_yellow_tracer_025: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Yellow - Small)";
        model = "kobra\442_weapons\ammo\yellow_tracer_025.p3d";
    };

	class 442_yellow_tracer_b: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Yellow/B)";
        model = "kobra\442_weapons\ammo\yellow_b_tracer.p3d";
    };
    class 442_yellow_tracer_b_05: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Yellow/B - Medium)";
        model = "kobra\442_weapons\ammo\yellow_tracer_b_05.p3d";
    };
    class 442_yellow_tracer_b_025: 442_blue_tracer
    {
        displayname = "Plasma Bolt (Yellow/B - Small)";
        model = "kobra\442_weapons\ammo\yellow_tracer_b_025.p3d";
    };
};