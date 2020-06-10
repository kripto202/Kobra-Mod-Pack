class CfgMagazines
{

	class CA_Magazine;
	class VehicleMagazine;
	class 40Rnd_105mm_APFSDS_T_Green;
//Side Guns
	class 442_500Rnd_127x99_mag_red: VehicleMagazine
	{
		displayname = "12.7x99mm 500Rnd plasma (Red)";
		displaynameshort = "12.7x99mm";
		scope = 2;
		count = 500;
		ammo = "442_127x99_red";
		initSpeed = 910;
		maxLeadSpeed = 36.1111;
		tracersEvery = 1;
		nameSound = "mgun";
		muzzleImpulseFactor[] = {0.05,0.05};
	};

//Main Cannon
	class 442_30Rnd_75mm_HE_mag_red: 40Rnd_105mm_APFSDS_T_Green
	{
		scope = 2;
		displayName = "75mm 30Rnd HE Plasma Rod Magazine (Red)";
		displayNameShort = "75mm HE";
		ammo = "442_75mm_red_he";
		count = 30;
		tracersEvery = 1;
		muzzleImpulseFactor[] = {1.0,6};
	};
	class 442_30Rnd_75mm_AP_mag_red: 442_30Rnd_75mm_HE_mag_red
	{
		displayName = "75mm 30Rnd AP Plasma Rod Magazine (Red)";
		displayNameShort = "75mm AP";
		ammo = "442_75mm_red_ap";
	};

//Driver Guns	
	class 442_50Rnd_40mm_G_belt: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		ammo = "442_40mm_HE";
		initSpeed = 400;
		maxLeadSpeed = 25;
		nameSound = "";
		count = 50;
		displayName = "40mm 50Rnd HE Plasma Grenades";
		descriptionShort = "40mm HE";
		muzzleImpulseFactor[] = {0.1,0.1};
	};




};