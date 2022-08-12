///10, 20, 8

class 442_shotgun_8rnd_blue_mag: 442_mag_base
{
    scope = 2;
    displayname = "Scatter Shot Plasma Cell (8rnd)";
    ammo = "442_ammo_shotgun_blue";
    mass=6;
    count = 8;
    initspeed = 400;
    picture="\kobra\kobra_core\kobra.paa";
};
class 442_shotgun_10rnd_blue_mag: 442_shotgun_8rnd_blue_mag
{
    displayname = "Scatter Shot Plasma Cell (10rnd)";
    mass=6.5;
    count = 10;
};
class 442_shotgun_20rnd_blue_mag: 442_shotgun_8rnd_blue_mag
{
    displayname = "Scatter Shot Plasma Cell (20rnd)";
    mass=13;
    count = 20;
};