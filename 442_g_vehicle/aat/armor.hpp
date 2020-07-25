    damageResistance=0.02;
    crewVulnerable=1;
    armor=500;
    armorStructural=6;
    class Hitpoints: Hitpoints
    {
        class HitHull: HitHull
        {
            armor = 0.75;
            material = -1;
            name = "hull_hit";
            visual = "zbytek";
            passthrough = 0.03;
            minimalhit = 0.14;
            explosionshielding = 2;
            radius = 0.25;
        };
        class HitEngine: HitEngine
        {
            armor=0.75;
            material=-1;
            name="engine_hit";
            passThrough=0.079999998;
            minimalHit=0.23999999;
            explosionShielding=1;
            radius=0.33000001;
        };
        class hitammo_l: HitEngine
        {
            name = "ammo_l_hit";
        };
        class hitammo_r: hitammo_l
        {
            name = "ammo_r_hit";
        };
    };