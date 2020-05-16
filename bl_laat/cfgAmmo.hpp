//ivan's first attempt to make a new weapon, starts with new ammo maybe?
class CfgAmmo
{

	class Cannon_30mm_HE_Plane_CAS_02_F;
	class SWLW_ammo_mini_blue;
	class 442_LAAT_he_green: Cannon_30mm_HE_Plane_CAS_02_F
	{
		model="SWLW_main\Effects\laser_green.p3d";
		effectfly="SWLW_plasma_green";
		flaresize=3;
		tracerscale=3;
		hit = 150;
		indirectHit = 10;
		indirectHitRange = 1;
		caliber = 6;
		explosive = 0.65;
		tracerStartTime = 0;
		tracerEndTime = 10;
		allowAgainstInfantry = 1;
	};
	class 442_LAAT_apfsds_green: Cannon_30mm_HE_Plane_CAS_02_F
	{
		model="SWLW_main\Effects\laser_green.p3d";
		effectfly="SWLW_plasma_green";
		flaresize=3;
		tracerscale=3;
		hit = 240;
		indirectHit = 5;
		indirectHitRange = 0.2;
		caliber = 10;
		explosive = 0;
		tracerStartTime = 0;
		tracerEndTime = 10;
		allowAgainstInfantry = 1;
	};
	class 442_z6_ammo_green: SWLW_ammo_mini_blue
	{
		model="SWLW_main\Effects\laser_green.p3d";
		effectfly="SWLW_plasma_green";
		allowAgainstInfantry = 1;
	};
};