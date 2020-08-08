class 442_40_50rnd_he_blue_mag: 442_mag_base
{
    scope = 1;
    displayname = "40mm HE Plasma Cell (50rnd Blue)";
    ammo = "442_ammo_40mm_blue";
    mass = 0;
    displaynamemagazine = "40mm GL HE";
    shortnamemagazine = "40mm HE";
    count = 50;
    initspeed = 400;
	maxLeadSpeed = 25;
	nameSound = "";
	descriptionShort = "40mm HE";
	muzzleImpulseFactor[] = {0.1,0.1};
};
class 442_40_6rnd_he_blue_mag: 442_40_50rnd_he_blue_mag
{
    scope= 2;
    displayname = "40mm He Plasma Cell (6rnd Blue)";
    mass = 30;
    count = 6;
};