class cfgpatches
{
    class 442_weapons_explosives
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = {};
        weapons[] = 
        {
            "Throw"
        };
        magazines[] = 
        {
            "442_thermal_det_mag",
            "442_impact_mag"
        };
        ammo[] = 
        {
            "442_thermal_det",
            "442_impact"
        };
    };
};

class cfgammo 
{
    class GrenadeHand;
    class G_40mm_HE;
    class 442_thermal_det: GrenadeHand
    {
        author = "KOBRA Mod Team";
        picture = "kobra\kobra_core\kobra.paa";
        hit = 30;
        indirectHit = 20;
        indirectHitRange = 10;
        dangerRadiusHit = 60;
        suppressionRadiusHit = 30;
        explosionEffectsRadius = 20;
        typicalspeed = 30;
        model = "kobra\442_weapons\explosive\thermal_det.p3d";
        visibleFire = 0.5;
        audibleFire = 0.05;
        visibleFireTime = 1;
        fuseDistance = 0;
        class NVGMarkers
        {
            class Blinking1
            {
                name = "blinkpos1";
                color[] = {0.01, 0.01, 0.01, 1};
                ambient[] = {0.005, 0.005, 0.005, 1};
                blinking = 1;
                brightness = 0.002;
                onlyInNvg = 1;
            };
            class Blinking2
            {
                color[] = {0.9, 0.1, 0.1};
                ambient[] = {0.1, 0.1, 0.1};
                name = "blinkpos2";
                blinking = 1;
                blinkingStartsOn = 1;
                blinkingPattern[] = {0.1, 0.9};
                blinkingPatternGuarantee = 1;
                drawLightSize = 0.35;
                drawLightCenterSize = 0.05;
                brightness = 0.002;
                dayLight = 1;
                onlyInNvg = 0;
                intensity = 75;
                drawLight = 1;
                activeLight = 0;
                useFlare = 0;
            };
        };
        ace_frag_enabled = 0;
        ace_frag_skip = 0;
        ace_frag_force = 0;
        explosionEffects = "VehicleExplosionEffects";
        soundFly[] = {"kobra\442_weapons\sounds\thermal_det\thermal_det.wss", 1.5, 1, 90};
    };
    class 442_impact: G_40mm_HE
    {
        author = "KOBRA Mod Team";
        picture = "kobra\kobra_core\kobra.paa";
        hit = 15;
        indirectHit = 8;
        indirectHitRange = 8;
        dangerRadiusHit = 15;
        suppressionRadiusHit = 12;
        typicalspeed = 30;
        model = "kobra\442_weapons\explosive\impact_grenade.p3d";
        visibleFire = 0.5;
        audibleFire = 0.05;
        visibleFireTime = 1;
        fuseDistance = 0;
        explosionEffects = "VehicleExplosionEffects";
        soundFly[] = {"kobra\442_weapons\sounds\impact_grenade\impact_grenade_cook.wss", 1.5, 1, 90};
    };
};
class cfgmagazines 
{
    class HandGrenade;
    class 442_thermal_det_mag: HandGrenade
    {
        author = "Kobra Mod Team Team";
        mass = 10;
        scope = 2;
        value = 1;
        displayName = "[K] Thermal Det";
        picture = "kobra\kobra_core\kobra.paa";
        model = "kobra\442_weapons\explosive\thermal_det.p3d";
        type = 256;
        ammo = "442_thermal_det";
        count = 1;
        initSpeed = 18;
        nameSound = "handgrenade";
        maxLeadSpeed = 7;
        sound[] = {"",0.00031622776,1};
        descriptionShort = "";
        displayNameShort = "Thermal Det";
    };
    class 442_impact_mag: HandGrenade
    {
        author = "Kobra Mod Team Team";
        mass = 5;
        scope = 2;
        value = 1;
        displayName = "[K] Impact Grenade";
        picture = "kobra\kobra_core\kobra.paa";
        model = "kobra\442_weapons\explosive\impact_grenade.p3d";
        type = 256;
        ammo = "442_impact";
        count = 1;
        initSpeed = 18;
        nameSound = "handgrenade";
        maxLeadSpeed = 7;
        sound[] = {"",0.00031622776,1};
        descriptionShort = "";
        displayNameShort = "impact grenade";
    };
};
class cfgweapons 
{
    class Default;
	class GrenadeLauncher: Default{};
	class Throw: GrenadeLauncher
	{
		muzzles[] += 
		{
			"442_thermal_det_muzzle",
			"442_impact_muzzle"
		};
		class 442_thermal_det_muzzle: GrenadeLauncher
		{
			displayName = "Thermal Det";
			picture = "kobra\kobra_core\kobra.paa";
			aidispersioncoefx = 6;
			aidispersioncoefy = 6;
			autoreload = 1;
			cursor = "EmptyCursor";
			cursoraim = "throw";
			enableattack = 0;
			keepininventory = 1;
			magazinereloadtime = 0;
			maxrange = 60;
			maxrangeprobab = 0.03;
			midrange = 45;
			midrangeprobab = 0.9;
			minrange = 10;
			minrangeprobab = 0.2;
			modeloptics = "";
			reloadsound[] = {"",0.000316228,1};
			reloadtime = 5;
			showempty = 0;
			sound[] = {"",0.000316228,1};
			magazines[] = {"442_thermal_det_mag"};
		};
		class 442_impact_muzzle: 442_thermal_det_muzzle
		{
			magazines[] = {"442_impact_mag"};
		};
	};
};
class cfgvehicles {};