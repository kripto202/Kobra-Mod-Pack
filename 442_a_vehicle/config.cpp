class cfgpatches
{
    class 442_laat_2
    {
        units[] =
            {
                "442_laat_2",
                "442_laat_2_ab",
                "442_laat_wreck",
                "442_laat_door_1",
                "442_laat_door_2",
                "442_laat_door_3",
                "442_laat_door_4",
            };
        weapons[] = {};
        requiredversion = 0.1;
        requiredaddons[] = {"ls_laat_2"};
    };
};

class SensorTemplatePassiveRadar;
class DefaultVehicleSystemsDisplayManagerLeft
{
    class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
    class components;
};
class VehicleSystemsTemplateLeftPilot : DefaultVehicleSystemsDisplayManagerLeft
{
    class components;
};
class VehicleSystemsTemplateRightPilot : DefaultVehicleSystemsDisplayManagerRight
{
    class components;
};

class CfgAmmo
{
    class Cannon_30mm_HE_Plane_CAS_02_F;
    class 442_50mm_he : Cannon_30mm_HE_Plane_CAS_02_F
    {
        model = "SWLW_main\Effects\laser_blue.p3d";
        effectfly = "SWLW_plasma_blue";
        flaresize = 3;
        tracerscale = 3;
        hit = 150;
        indirectHit = 10;
        indirectHitRange = 4;
        caliber = 6;
        explosive = 0.65;
        tracerStartTime = 0;
        tracerEndTime = 10;
        allowAgainstInfantry = 1;
    };
    class 442_50mm_apfsds : Cannon_30mm_HE_Plane_CAS_02_F
    {
        model = "SWLW_main\Effects\laser_blue.p3d";
        effectfly = "SWLW_plasma_blue";
        flaresize = 3;
        tracerscale = 3;
        hit = 240;
        indirectHit = 5;
        indirectHitRange = 0.2;
        caliber = 10;
        explosive = 0;
        tracerStartTime = 0;
        tracerEndTime = 10;
        allowAgainstInfantry = 1;
    };
    class 442_50mm_laat_he : 442_50mm_he
    {
        model = "SWLW_main\Effects\laser_green.p3d";
        effectfly = "swlw_plasma_green";
        flaresize = 3;
        tracerscale = 3;
    };
    class 442_50mm_laat_apfsds : 442_50mm_apfsds
    {
        model = "SWLW_main\Effects\laser_green.p3d";
        effectfly = "swlw_plasma_green";
        flaresize = 3;
        tracerscale = 3;
    };
};
class CfgMagazines
{
    class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
    class 200rnd_saber_he_mag : 1000Rnd_Gatling_30mm_Plane_CAS_01_F
    {
        author = "kripto202";
        displayname = "50mm HE";
        displaynameMagazine = "50mm Cannons HE";
        shortNameMagazine = "50mm Cannons HE";
        ammo = "442_50mm_he";
        count = 200;
    };
    class 200rnd_saber_apfsds_mag : 1000Rnd_Gatling_30mm_Plane_CAS_01_F
    {
        author = "kripto202";
        displayname = "50mm APFSDS";
        displaynameMagazine = "50mm Cannons APFSDS";
        shortNameMagazine = "50mm Cannons APFSDS";
        ammo = "442_50mm_apfsds";
        count = 200;
    };
    class 200rnd_laat_he_mag : 200rnd_saber_he_mag
    {
        ammo = "442_50mm_laat_he";
        displayNameShort = "50mm HE";
    };
    class 200rnd_laat_apfsds_mag : 200rnd_laat_he_mag
    {
        ammo = "442_50mm_laat_apfsds";
        displayNameShort = "50mm AP";
        displayname = "50mm APFSDS";
        displaynameMagazine = "50mm Cannons APFSDS";
        shortNameMagazine = "50mm Cannons APFSDS";
    };
};
class cfgweapons
{
    class MGun;
    class gatling_20mm;
    class missiles_titan;
    class 442_saber_gun : gatling_20mm
    {
        displayname = "50mm Cannons";
        displaynameMagazine = "50mm Cannons";
        shortNameMagazine = "50mm Cannons";
        scope = 1;
        displayNameShort = "50mm";
        magazines[] =
            {
                "200rnd_saber_he_mag",
                "200rnd_saber_apfsds_mag",
                "200rnd_saber_he_mag_green",
                "200rnd_saber_apfsds_mag_green"};
        modes[] =
            {
                "FullAuto",
                "close",
                "short",
                "medium",
            };
        reloadtime = 0.1375 magazinereloadtime = 10;
        magazineReloadSwitchPhase = 5;
        class gunparticles
        {
        };
        class FullAuto : MGun
        {
            reloadTime = 0.1375;
            dispersion = 0;
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.05;
        };
        class close : FullAuto
        {
            burst = 10;
            aiRateOfFire = .1375;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short : close
        {
            burst = 10;
            aiRateOfFire = .1375;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.04;
        };
        class medium : close
        {
            burst = 10;
            aiRateOfFire = .1375;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.1;
        };
    };
    class 442_laat_gun : 442_saber_gun
    {
        displayname = "Laat nose guns HE";
        displaynameshort = "50mm HE";
        magazines[] = {"200rnd_laat_he_mag"};
        class GunParticles
        {
        };
        class FullAuto : MGun
        {
            sounds[] =
                {
                    "StandardSound"};
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType
            {
                begin1[] =
                    {
                        "442_laat_2\sounds\dc-15r.wss",
                        1,
                        1,
                        500};
                soundBegin[] =
                    {
                        "begin1",
                        1};
            };
            reloadTime = 0.1375;
            dispersion = 0;
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.05;
        };
        class close : FullAuto
        {
            burst = 10;
            aiRateOfFire = .1375;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short : close
        {
            burst = 10;
            aiRateOfFire = .1375;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.04;
        };
        class medium : close
        {
            burst = 10;
            aiRateOfFire = .1375;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.1;
        };
    };
    class 442_laat_gun_2 : 442_laat_gun
    {
        magazines[] = {"200rnd_laat_apfsds_mag"};
        displayname = "Laat nose guns AP";
        displaynameshort = "50mm AP";
    };
    class 442_laat_gun_3 : 442_laat_gun {};
};
class cfgvehicles
{
    class Items_base_F;
    class Wreck_base_F;
    class ls_laat;

    class 442_laat_2 : ls_laat
    {
        author = "kripto202";
        displayName = "[K] LAAT/I Gunship";
        class simpleobject
        {
            animate[] =
            {
                {"door_1_l", 0},
                {"door_1_r", 0},
                {"door_2_l", 0},
                {"door_1_r", 0},
                {"laat_ramp_open", 0},
                {"CollisionLightRed1", 0},
                {"CollisionLightGreen1", 0},
                {"CollisionLightWhite1", 0},
                {"CollisionLightWhite2", 0},
                {"light_l", 0},
                {"light_r", 0},
            };
            hide[] =
            {
                "clan",
                "light_l",
                "light_r",
            };
            verticaloffset = 0;
            verticaloffsetworld = 0;
        };
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        hiddenselections[] =
        {
            "body",
            "body_2",
            "door_1",
            "door_2",
            "door_3",
            "wings",
            "missiles",
            "cockpits",
            "glass",
            "clan",
            "zasleh_l",
            "zasleh_r",
            "zasleh_b"
        };
        hiddenselectionstextures[] =
        {
            "442_laat_2\data\body1_co.paa",
            "442_laat_2\data\body2_co.paa",
            "442_laat_2\data\door1_co.paa",
            "442_laat_2\data\door2_co.paa",
            "442_laat_2\data\door3_co.paa",
            "442_laat_2\data\wings_co.paa",
            "442_laat_2\data\missiles_co.paa",
            "442_laat_2\data\cockpits_co.paa",
            "442_laat_2\data\glass_ca.paa"
        };
        #include "442_a_vehicle\laat_designs.hpp"
        #include "442_a_vehicle\sensors.hpp"
    };

    class 442_laat_2_ab : 442_laat_2
    {
        class simpleobject
        {
            animate[] =
            {
                {"door_1_l", 0},
                {"door_1_r", 0},
                {"door_2_l", 0},
                {"door_1_r", 0},
                {"laat_ramp_open", 0},
                {"CollisionLightRed1", 0},
                {"CollisionLightGreen1", 0},
                {"CollisionLightWhite1", 0},
                {"CollisionLightWhite2", 0},
                {"light_l", 0},
                {"light_r", 0},
            };
            hide[] =
            {
                "clan",
                "light_l",
                "light_r",
            };
            verticaloffset = 0;
            verticaloffsetworld = 0;
        };
        model = "442_laat_2\Laat_ab.p3d";
        displayname = "[K] LAAT/I Gunship (Airborne)";
        getInRadius = 5;
        cargoCanEject = 1;
    };

    class 442_laat_wreck : Wreck_base_F
    {
        author = "kripto202";
        mapsize = 20;
        editorPreview = "";
        scope = 2;
        scopecurator = 2;
        icon = "iconObject_1x2";
        displayname = "LAAT (Wrecked)";
        model = "442_laat_2\laat_w.p3d";
        editorCategory = "kobra";
        editorSubcategory = "442_wrecks";
    };
    class 442_laat_door_1 : Items_base_F
    {
        author = "kripto202";
        mapsize = 20;
        editorPreview = "";
        scope = 2;
        scopecurator = 2;
        displayname = "LAAT Door 1";
        model = "442_laat_2\laat_w2.p3d";
        editorSubcategory = "EdSubcat_Helicopters";
    };
    class 442_laat_door_2 : 442_laat_door_1
    {
        displayname = "LAAT Door 2";
        model = "442_laat_2\laat_w3.p3d";
    };
    class 442_laat_door_3 : 442_laat_door_1
    {
        displayname = "LAAT Door 3";
        model = "442_laat_2\laat_w4.p3d";
    };
    class 442_laat_door_4 : 442_laat_door_1
    {
        displayname = "LAAT Door 4";
        model = "442_laat_2\laat_w5.p3d";
    };
};