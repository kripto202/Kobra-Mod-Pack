class cfgpatches
{
    class 442_w_vehicle
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_boat_armed"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class Boat_F;
    class Boat_Armed_01_base_F: Boat_F
	{
		class Hitpoints;
		class Turrets;
	};
	class Boat_Armed_01_minigun_base_F: Boat_Armed_01_base_F
	{
		class Hitpoints: Hitpoints {};
		class Turrets: Turrets
		{
			class FrontTurret;
			class RearTurret;
		};
	};
    class 442_boat_armed: Boat_Armed_01_minigun_base_F
	{
		author = "Kobra Mod Team Team";
		scope = 2;
		accuracy = 1.5;
		displayname = "Assault Boat";
		crew = "k_swla_unit_p2_dc15a";
		faction = "kobra_b";
		editorsubcategory = "442_boat";
		side = 1;
		typicalCargo[] = {"44_swla_unit"};
		hiddenselectionstextures[] = 
		{
			"\kobra\442_w_vehicle\boat\data\rep_boat_hull.paa",
			"\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_co.paa",
			"\kobra\442_w_vehicle\boat\data\rep_boat_crow.paa",
		};
        class texturesources
        {
            class default
            {
                displayname = "Republic";
                author = "KOBRA Mod Team";
                textures[] = 
                {
                    "\kobra\442_w_vehicle\boat\data\rep_boat_hull.paa",
                    "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_co.paa",
                    "\kobra\442_w_vehicle\boat\data\rep_boat_crow.paa",
                };
                factions[] = 
                {
                    "kobra_b"
                };
            };
            class 442: default
            {
                displayname = "442nd Siege Battalion";
                textures[] = 
                {
                    "\kobra\442_w_vehicle\boat\data\442_boat_hull.paa",
                    "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_co.paa",
                    "\kobra\442_w_vehicle\boat\data\442_boat_crow.paa",
                };
            };
            class black_legion: default
            {
                displayname = "Black Legion";
                textures[] = 
                {
                    "\kobra\442_w_vehicle\boat\data\bl_boat_hull.paa",
                    "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_co.paa",
                    "\kobra\442_w_vehicle\boat\data\bl_boat_crow.paa",
                };
            };
        };
		class Turrets: Turrets
		{
			class FrontTurret: FrontTurret
			{
				weapons[] = {"442_gmg"};
				Magazines[] = 
                {
                    "442_40_50rnd_he_blue_mag",
                    "442_40_50rnd_he_blue_mag",
                    "442_40_50rnd_he_blue_mag",
                    "442_40_50rnd_he_blue_mag",
                };
			};
			class RearTurret: RearTurret
			{
				weapons[] = {"442_minigun"};
				Magazines[] = 
				{
					"442_127x99_500rnd_blue_mag",
					"442_127x99_500rnd_blue_mag",
				};
			};
		};
	};
};