class CfgMagazines
{

	class CA_Magazine;
	class VehicleMagazine;
//Side Guns
	class 500Rnd_127x99_mag: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		count = 500;
		ammo = "B_127x99_Ball";
		initSpeed = 910;
		maxLeadSpeed = 36.1111;
		tracersEvery = 4;
		nameSound = "mgun";
		displayName = "$STR_A3_CfgMagazines_500Rnd_127x99_mag0";
		descriptionShort = "$STR_A3_CfgMagazines_500Rnd_127x99_mag1";
		muzzleImpulseFactor[] = {0.05,0.05};
	};

//Main Cannon
	class 30Rnd_120mm_HE_shells: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_30Rnd_120mm_HE_shells0";
		displayNameShort = "$STR_A3_CfgMagazines_30Rnd_120mm_HE_shells_dns";
		ammo = "Sh_120mm_HE";
		count = 30;
		initSpeed = 1410;
		maxLeadSpeed = 25;
		tracersEvery = 0;
		nameSound = "cannon";
		muzzleImpulseFactor[] = {1.0,6};
	};
	class 30Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_120MMHE";
		displayNameShort = "$STR_A3_CFGMAGAZINES_120MMHE_DNS";
		displayNameMFDFormat = "HE";
		ammo = "Sh_120mm_HE_Tracer_Red";
		tracersEvery = 1;
	};
	class 30Rnd_120mm_APFSDS_shells: 30Rnd_120mm_HE_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_120MMAPFSDS";
		displayNameShort = "$STR_A3_CFGMAGAZINES_APFSD0";
		ammo = "Sh_120mm_APFSDS";
		initSpeed = 1680;
		muzzleImpulseFactor[] = {0.5,3};
	};
	class 30Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_120MMAPFSDST";
		displayNameShort = "$STR_A3_CFGMAGAZINES_APFSD_T0";
		displayNameMFDFormat = "APDS";
		ammo = "Sh_120mm_APFSDS_Tracer_Red";
		tracersEvery = 1;
	};

//Driver Guns	
	class 200Rnd_20mm_G_belt: VehicleMagazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		ammo = "G_20mm_HE";
		initSpeed = 400;
		maxLeadSpeed = 25;
		nameSound = "";
		count = 200;
		displayName = "$STR_A3_CfgMagazines_200Rnd_20mm_G_belt0";
		descriptionShort = "$STR_A3_CfgMagazines_200Rnd_20mm_G_belt1";
		muzzleImpulseFactor[] = {0.1,0.1};
	};




};