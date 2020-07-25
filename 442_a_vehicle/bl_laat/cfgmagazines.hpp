class cfgMagazines
{
	class VehicleMagazine;
	class CA_Magazine;
	class Default;
	class laat_proton_torpedo;
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
	
	class 442_laat_proton_torpedo: laat_proton_torpedo
	{
		count = 24;
		missileKeepLockedCone = 180;
		missileLockCone = 180;
		missileLockMaxDistance = 13000;
		missileLockMaxSpeed = 0;
		missileLockMinDistance = 50;
		lockSeekRadius = 180;
		maxLeadSpeed = 200;
	};
	class 200rnd_saber_he_mag_green: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		author = "kripto202";
		displayname = "50mm HE";
		displaynameMagazine = "50mm Cannons HE";
		shortNameMagazine = "50mm Cannons HE";
		ammo = "442_LAAT_he_green";
		count = 200;
	};
	class 200rnd_saber_apfsds_mag_green: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		author = "kripto202";
		displayname = "50mm APFSDS";
		displaynameMagazine = "50mm Cannons APFSDS";
		shortNameMagazine = "50mm Cannons APFSDS";
		ammo = "442_LAAT_apfsds_green";
		count = 200;
	};
	class 1000rnd_laat_ball_mag_green: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		author = "kripto202";
		displaynameshort = "Laser Turret";
		displayname = "Laser Turret";
		displaynameMagazine = "Laser Turret";
		shortNameMagazine = "Laser Turret";
		ammo = "442_z6_ammo_green";
		count = 1000;
	};
};