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
///effects///
    class k_SmokeShellBlackEffect
    {
        class SmokeShell
        {
            intensity = 20;
            interval = 10;
            position[] = {0,0,0};
            simulation = "particles";
            type = "k_SmokeShellBlack";
        };
        class SmokeShell2: SmokeShell
        {
            type = "k_SmokeShellBlack2";
        };
        class SmokeShell2UW: SmokeShell
        {
            type = "k_SmokeShellBlack2UW";
        };
        class SmokeShellUW: SmokeShell
        {
            type = "k_SmokeShellBlackUW";
        };
    };
    class k_SmokeShellWhiteEffect: k_SmokeShellBlackEffect
    {
        class SmokeShell: SmokeShell
        {
            type = "k_SmokeShellWhite";
        };
        class SmokeShell2: SmokeShell2
        {
            type = "k_SmokeShellWhite2";
        };
        class SmokeShell2UW: SmokeShell2UW
        {
            type = "k_SmokeShellWhite2UW";
        };
        class SmokeShellUW: SmokeShellUW
        {
            type = "k_SmokeShellWhiteUW";
        };
    };
    class k_SmokeShellRedEffect: k_SmokeShellBlackEffect
    {
        class SmokeShell: SmokeShell
        {
            type = "k_SmokeShellRed";
        };
        class SmokeShell2: SmokeShell2
        {
            type = "k_SmokeShellRed";
        };
        class SmokeShell2UW: SmokeShell2UW
        {
            type = "k_SmokeShellRed2UW";
        };
        class SmokeShellUW: SmokeShellUW
        {
            type = "k_SmokeShellRedUW";
        };
    };
    class k_SmokeShellGreenEffect: k_SmokeShellBlackEffect
    {
        class SmokeShell: SmokeShell
        {
            type = "k_SmokeShellGreen";
        };
        class SmokeShell2: SmokeShell2
        {
            type = "k_SmokeShellGreen2";
        };
        class SmokeShell2UW: SmokeShell2UW
        {
            type = "k_SmokeShellGreen2UW";
        };
        class SmokeShellUW: SmokeShellUW
        {
            type = "k_SmokeShellGreenUW";
        };
    };
    class k_SmokeShellYellowEffect: k_SmokeShellBlackEffect
    {
        class SmokeShell: SmokeShell
        {
            type = "k_SmokeShellYellow";
        };
        class SmokeShell2: SmokeShell2
        {
            type = "k_SmokeShellYellow2";
        };
        class SmokeShell2UW: SmokeShell2UW
        {
            type = "k_SmokeShellYellow2UW";
        };
        class SmokeShellUW: SmokeShellUW
        {
            type = "k_SmokeShellYellowUW";
        };
    };
    class k_SmokeShellPurpleEffect: k_SmokeShellBlackEffect
    {
        class SmokeShell: SmokeShell
        {
            type = "k_SmokeShellPurple";
        };
        class SmokeShell2: SmokeShell2
        {
            type = "k_SmokeShellPurple2";
        };
        class SmokeShell2UW: SmokeShell2UW
        {
            type = "k_SmokeShellPurple2UW";
        };
        class SmokeShellUW: SmokeShellUW
        {
            type = "k_SmokeShellPurpleUW";
        };
    };
    class k_SmokeShellBlueEffect: k_SmokeShellBlackEffect
    {
        class SmokeShell: SmokeShell
        {
            type = "k_SmokeShellBlue";
        };
        class SmokeShell2: SmokeShell2
        {
            type = "k_SmokeShellBlue2";
        };
        class SmokeShell2UW: SmokeShell2UW
        {
            type = "k_SmokeShellBlue2UW";
        };
        class SmokeShellUW: SmokeShellUW
        {
            type = "k_SmokeShellBlueUW";
        };
    };
    class k_SmokeShellOrangeEffect: k_SmokeShellBlackEffect
    {
        class SmokeShell: SmokeShell
        {
            type = "k_SmokeShellOrange";
        };
        class SmokeShell2: SmokeShell2
        {
            type = "k_SmokeShellOrange2";
        };
        class SmokeShell2UW: SmokeShell2UW
        {
            type = "k_SmokeShellOrange2UW";
        };
        class SmokeShellUW: SmokeShellUW
        {
            type = "k_SmokeShellOrangeUW";
        };
    };

    class k_SmokeShellBlackEffectWater
    {
        class SmokeShellBlackWater
        {
            intensity = 10;
            interval = 2;
            position[] = {0,0,0};
            simulation = "particles";
            type = "SmokeShellBlackWater";
        };
    };
    class k_SmokeShellWhiteEffectWater: k_SmokeShellBlackEffectWater
    {
        class SmokeShellWhiteWater: SmokeShellBlackWater
        {
            type = "SmokeShellWhiteWater";
        };
    };
    class k_SmokeShellRedEffectWater: k_SmokeShellBlackEffectWater
    {
        class SmokeShellRedWater: SmokeShellBlackWater
        {
            type = "SmokeShellRedWater";
        };
    };
    class k_SmokeShellGreenEffectWater: k_SmokeShellBlackEffectWater
    {
        class SmokeShellGreenWater: SmokeShellBlackWater
        {
            type = "SmokeShellGreenWater";
        };
    };
    class k_SmokeShellYellowEffectWater: k_SmokeShellBlackEffectWater
    {
        class SmokeShellYellowWater: SmokeShellBlackWater
        {
            type = "SmokeShellYellowWater";
        };
    };
    class k_SmokeShellPurpleEffectWater: k_SmokeShellBlackEffectWater
    {
        class SmokeShellPurpleWater: SmokeShellBlackWater
        {
            type = "SmokeShellPurpleWater";
        };
    };
    class k_SmokeShellBlueEffectWater: k_SmokeShellBlackEffectWater
    {
        class SmokeShellBlueWater: SmokeShellBlackWater
        {
            type = "SmokeShellBlueWater";
        };
    };
    class k_SmokeShellOrangeEffectWater: k_SmokeShellBlackEffectWater
    {
        class SmokeShellOrangeWater: SmokeShellBlackWater
        {
            type = "SmokeShellOrangeWater";
        };
    };
    
    class k_SmokeShellBlackEffectSmall
    {
        class SmokeShellBlack
        {
            intensity = 10;
            interval = 2;
            position[] = {0,0,0};
            simulation = "particles";
            type = "SmokeShellBlackSmall";
        };
    };
    class k_SmokeShellWhiteEffectSmall: k_SmokeShellBlackEffectSmall
    {
        class SmokeShellWhite: SmokeShellBlack
        {
            type = "SmokeShellWhiteSmall";
        };
    };
    class k_SmokeShellRedEffectSmall: k_SmokeShellBlackEffectSmall
    {
        class SmokeShellRed: SmokeShellBlack
        {
            type = "SmokeShellRedSmall";
        };
    };
    class k_SmokeShellGreenEffectSmall: k_SmokeShellBlackEffectSmall
    {
        class SmokeShellGreen: SmokeShellBlack
        {
            type = "SmokeShellGreenSmall";
        };
    };
    class k_SmokeShellYellowEffectSmall: k_SmokeShellBlackEffectSmall
    {
        class SmokeShellYellow: SmokeShellBlack
        {
            type = "SmokeShellYellowSmall";
        };
    };
    class k_SmokeShellPurpleEffectSmall: k_SmokeShellBlackEffectSmall
    {
        class SmokeShellPurple: SmokeShellBlack
        {
            type = "SmokeShellPurpleSmall";
        };
    };
    class k_SmokeShellBlueEffectSmall: k_SmokeShellBlackEffectSmall
    {
        class SmokeShellBlue: SmokeShellBlack
        {
            type = "SmokeShellBlueSmall";
        };
    };
    class k_SmokeShellOrangeEffectSmall: k_SmokeShellBlackEffectSmall
    {
        class SmokeShellOrange: SmokeShellBlack
        {
            type = "SmokeShellOrangeSmall";
        };
    };

    class cfgcloudlets
    {
        class SmokeShellWhite;
        class SmokeShellWhiteWater;
        class SmokeShellWhite2;
        class SmokeShellWhiteUW;
        class SmokeShellWhite2UW;
        class k_SmokeShellBlack: SmokeShellWhite
        {
            colorCoef[]=
            {
                "colorR",
                "colorG",
                "colorB",
                "colorA"
            };
            sizeCoef=10;
            particleFSNtieth=16;
            lifeTime=60;
            rubbing=0.01;
            size[]={0.1,3,10};
            randomDirectionIntensity=0.1;
            blockAIVisibility = 1;
            color[]=
            {
                {0,0,0,0.2},
                {0,0,0,0.050000001},
                {0,0,0,0}
            };
            MoveVelocityVar[]={1,1,1};
        };
        class k_SmokeShellWhite: k_SmokeShellBlack
        {
            color[]=
            {
                {0.60000002,0.60000002,0.60000002,0.2},
                {0.60000002,0.60000002,0.60000002,0.050000001},
                {0.60000002,0.60000002,0.60000002,0}
            };
        };
        class k_SmokeShellRed: k_SmokeShellBlack
        {
            color[]=
            {
                {0.84380001,0.1383,0.1353,0.2},
                {0.84380001,0.1383,0.1353,0.050000001},
                {0.84380001,0.1383,0.1353,0}
            };
        };
        class k_SmokeShellGreen: k_SmokeShellBlack
        {
            color[]=
            {
                {0.21250001,0.62580001,0.48909998,0.2},
                {0.21250001,0.62580001,0.48909998,0.050000001},
                {0.21250001,0.62580001,0.48909998,0}
            };
        };
        class k_SmokeShellYellow: k_SmokeShellBlack
        {
            color[]=
            {
                {0.98830003,0.86059999,0.071900003,0.2},
                {0.98830003,0.86059999,0.0719000032,0.050000001},
                {0.98830003,0.86059999,0.071900003,0}
            };
        };
        class k_SmokeShellPurple: k_SmokeShellBlack
        {
            color[]=
            {
                {0.4341,0.1388,0.41439998,0.2},
                {0.4341,0.1388,0.41439998,0.050000001},
                {0.4341,0.1388,0.41439998,0}
            };
        };
        class k_SmokeShellBlue: k_SmokeShellBlack
        {
            color[]=
            {
                {0.1183,0.1867,1,0.2},
                {0.1183,0.1867,1,0.050000001},
                {0.1183,0.1867,1,0}
            };
        };
        class k_SmokeShellOrange: k_SmokeShellBlack
        {
            color[]=
            {
                {0.66970003,0.22750001,0.10053,0.2},
                {0.66970003,0.22750001,0.10053,0.050000001},
                {0.66970003,0.22750001,0.10053,0}
            };
        };

        class k_SmokeShellBlack2: k_SmokeShellBlack
        {
            particleFSNtieth=16;
            particleFSIndex=12;
            particleFSFrameCount=4;
            particleFSLoop=0;
            color[]=
            {
                {0,0,0,1},
                {0,0,0,0.0},
                {0,0,0,0}
            };
        };
        class k_SmokeShellWhite2: k_SmokeShellBlack2
        {
            color[]=
            {
                {0.60000002,0.60000002,0.60000002,1},
                {0.60000002,0.60000002,0.60000002,0.5},
                {0.60000002,0.60000002,0.60000002,0}
            };
	    };
        class k_SmokeShellRed2: k_SmokeShellBlack2
        {
            color[]=
            {
                {0.84380001,0.1383,0.1353,0.2},
                {0.84380001,0.1383,0.1353,0.050000001},
                {0.84380001,0.1383,0.1353,0}
            };
        };
        class k_SmokeShellGreen2: k_SmokeShellBlack2
        {
            color[]=
            {
                {0.21250001,0.62580001,0.48909998,0.2},
                {0.21250001,0.62580001,0.48909998,0.050000001},
                {0.21250001,0.62580001,0.48909998,0}
            };
        };
        class k_SmokeShellYellow2: k_SmokeShellBlack2
        {
            color[]=
            {
                {0.98830003,0.86059999,0.071900003,0.2},
                {0.98830003,0.86059999,0.0719000032,0.050000001},
                {0.98830003,0.86059999,0.071900003,0}
            };
        };
        class k_SmokeShellPurple2: k_SmokeShellBlack2
        {
            color[]=
            {
                {0.4341,0.1388,0.41439998,0.2},
                {0.4341,0.1388,0.41439998,0.050000001},
                {0.4341,0.1388,0.41439998,0}
            };
        };
        class k_SmokeShellBlue2: k_SmokeShellBlack2
        {
            color[]=
            {
                {0.1183,0.1867,1,0.2},
                {0.1183,0.1867,1,0.050000001},
                {0.1183,0.1867,1,0}
            };
        };
        class k_SmokeShellOrange2: k_SmokeShellBlack2
        {
            color[]=
            {
                {0.66970003,0.22750001,0.10053,0.2},
                {0.66970003,0.22750001,0.10053,0.050000001},
                {0.66970003,0.22750001,0.10053,0}
            };
        };

        class k_SmokeShellBlackUW: SmokeShellWhiteUW
        {
            color[]=
            {
                {0,0,0,0.2},
                {0,0,0,0.050000001},
                {0,0,0,0}
            };
            randomDirectionIntensity=0.2;
            MoveVelocityVar[]={0.5,0.5,0.5};
        };
        class k_SmokeShellWhiteUW: k_SmokeShellBlackUW
        {
            color[]=
            {
                {1,1,1,1}
            };
        };
        class k_SmokeShellRedUW: k_SmokeShellBlackUW
        {
            color[]=
            {
                {0.84380001,0.1383,0.1353,1}
            };
        };
        class k_SmokeShellGreenUW: k_SmokeShellBlackUW
        {
            color[]=
            {
                {0.21250001,0.62580001,0.48909998,1}
            };
        };
        class k_SmokeShellYellowUW: k_SmokeShellBlackUW
        {
            color[]=
            {
                {0.98830003,0.86059999,0.071900003,1}
            };
        };
        class k_SmokeShellPurpleUW: k_SmokeShellBlackUW
        {
            color[]=
            {
                {0.4341,0.1388,0.41439998,1}
            };
        };
        class k_SmokeShellBlueUW: k_SmokeShellBlackUW
        {
            color[]=
            {
                {0.1183,0.1867,1,1}
            };
        };
        class k_SmokeShellOrangeUW: k_SmokeShellBlackUW
        {
            color[]=
            {
                {0.66970003,0.22750001,0.10053,1}
            };
        };

        class k_SmokeShellBlack2UW: SmokeShellWhite2UW
        {
            postEffects="k_SmokeShellBlackWater";
        };
        class k_SmokeShellWhite2UW: k_SmokeShellBlack2UW
        {
            postEffects="k_SmokeShellWhiteWater";
        };
        class k_SmokeShellRed2UW: k_SmokeShellWhite2UW
        {
            postEffects="k_SmokeShellRedWater";
        };
        class k_SmokeShellGreen2UW: k_SmokeShellWhite2UW
        {
            postEffects="k_SmokeShellGreenWater";
        };
        class k_SmokeShellYellow2UW: k_SmokeShellWhite2UW
        {
            postEffects="k_SmokeShellYellowWater";
        };
        class k_SmokeShellPurple2UW: k_SmokeShellWhite2UW
        {
            postEffects="k_SmokeShellPurpleWater";
        };
        class k_SmokeShellBlue2UW: k_SmokeShellWhite2UW
        {
            postEffects="k_SmokeShellBlueWater";
        };
        class k_SmokeShellOrange2UW: k_SmokeShellWhite2UW
        {
            postEffects="k_SmokeShellOrangeWater";
        };

        class k_SmokeShellBlackWater
        {
            class SmokeShellBlackWater
            {
                simulation="particles";
                type="k_SmokeShellBlackWater";
                position[]={0,0,0};
                intensity=1;
                interval=0.050000001;
            };
        };
        class k_SmokeShellWhiteWater: k_SmokeShellBlackWater
        {
            class SmokeShellWhiteWater: SmokeShellBlackWater
            {
                type="k_SmokeShellWhiteWater";
            };
        };
        class k_SmokeShellRedWater: k_SmokeShellBlackWater
        {
            class SmokeShellRedWater: SmokeShellBlackWater
            {
                type="k_SmokeShellRedWater";
            };
        };
        class k_SmokeShellGreenWater: k_SmokeShellBlackWater
        {
            class SmokeShellGreenWater: SmokeShellBlackWater
            {
                type="k_SmokeShellGreenWater";
            };
        };
        class k_SmokeShellYellowWater: k_SmokeShellBlackWater
        {
            class SmokeShellYellowWater: SmokeShellBlackWater
            {
                type="k_SmokeShellYellowWater";
            };
        };
        class k_SmokeShellPurpleWater: k_SmokeShellBlackWater
        {
            class SmokeShellPurpleWater: SmokeShellBlackWater
            {
                type="k_SmokeShellPurpleWater";
            };
        };
        class k_SmokeShellBlueWater: k_SmokeShellBlackWater
        {
            class SmokeShellBlueWater: SmokeShellBlackWater
            {
                type="k_SmokeShellBlueWater";
            };
        };
        class k_SmokeShellOrangeWater: k_SmokeShellBlackWater
        {
            class SmokeShellOrangeWater: SmokeShellBlackWater
            {
                type="k_SmokeShellOrangeWater";
            };
        };
    };
    class k_SmokeShellBlackWater
    {
        colorCoef[]={0,0,0,1};
        interval=0.25;
    };
    class k_SmokeShellWhiteWater
    {
        colorCoef[]={0,0,0,1};
        interval=0.25;
    };
    class k_SmokeShellRedWater
    {
        colorCoef[]={0,0,0,1};
        interval=0.25;
    };
    class k_SmokeShellGreenWater
    {
        colorCoef[]={0,0,0,1};
        interval=0.25;
    };
    class k_SmokeShellYellowWater
    {
        colorCoef[]={0,0,0,1};
        interval=0.25;
    };
    class k_SmokeShellPurpleWater
    {
        colorCoef[]={0,0,0,1};
        interval=0.25;
    };
    class k_SmokeShellBlueWater
    {
        colorCoef[]={0,0,0,1};
        interval=0.25;
    };
    class k_SmokeShellOrangeWater
    {
        colorCoef[]={0,0,0,1};
        interval=0.25;
    };
///grenades///
    class cfgammo 
    {
        class GrenadeHand;
        class G_40mm_HE;
        class SmokeShell;
        class 442_thermal_det: GrenadeHand
        {
            author = "KOBRA Mod Team";
            //picture = "kobra\kobra_core\kobra.paa";
            //icon = "kobra\kobra_core\kobra.paa";
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
            //picture = "kobra\kobra_core\kobra.paa";
            //icon = "kobra\kobra_core\kobra.paa";
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
        class 442_smoke_black: SmokeShell
        {
            smokeColor[] = {0,0,0,0.8};
            effectsSmoke = "k_SmokeShellBlackEffect";
            model = "kobra\442_weapons\explosive\basic_smoke.p3d";
        };
        class 442_smoke_white: SmokeShell
        {
            smokeColor[] = {1,1,1,1};
            effectsSmoke = "k_SmokeShellwhiteEffect";
            model = "kobra\442_weapons\explosive\basic_smoke.p3d";
        };
        class 442_smoke_red: SmokeShell
        {
            smokeColor[] = {0.84380001,0.1383,0.1353,1};
            effectsSmoke = "k_SmokeShellRedEffect";
            model = "kobra\442_weapons\explosive\basic_smoke.p3d";
        };
        class 442_smoke_green: SmokeShell
        {
            smokeColor[] = {0.1383,0.84380001,0.1353,1};
            effectsSmoke = "k_SmokeShellGreenEffect";
            model = "kobra\442_weapons\explosive\basic_smoke.p3d";
        };
        class 442_smoke_yellow: SmokeShell
        {
            smokeColor[] = {0.98830003,0.86059999,0.071900003,1};
            effectsSmoke = "k_SmokeShellyellowEffect";
            model = "kobra\442_weapons\explosive\basic_smoke.p3d";
        };
        class 442_smoke_purple: SmokeShell
        {
            smokeColor[] = {0.4341,0.1388,0.41439998,1};
            effectsSmoke = "k_SmokeShellpurpleEffect";
            model = "kobra\442_weapons\explosive\basic_smoke.p3d";
        };
        class 442_smoke_blue: SmokeShell
        {
            smokeColor[] = {0.1183,0.1867,1,1};
            effectsSmoke = "k_SmokeShellblueEffect";
            model = "kobra\442_weapons\explosive\basic_smoke.p3d";
        };
        class 442_smoke_orange: SmokeShell
        {
            smokeColor[] = {0.66970003,0.22750001,0.10053,1};
            effectsSmoke = "k_SmokeShellorangeEffect";
            model = "kobra\442_weapons\explosive\basic_smoke.p3d";
        };
    };
    class cfgmagazines 
    {
        class HandGrenade;
        class SmokeShell;
        class 442_thermal_det_mag: HandGrenade
        {
            author = "Kobra Mod Team Team";
            mass = 10;
            scope = 2;
            value = 1;
            displayName = "[K] Thermal Det";
            //picture = "kobra\kobra_core\kobra.paa";
            //icon = "kobra\kobra_core\kobra.paa";
            model = "kobra\442_weapons\explosive\thermal_det.p3d";
            type = 256;
            ammo = "442_thermal_det";
            count = 1;
            initSpeed = 18;
            nameSound = "handgrenade";
            maxLeadSpeed = 7;
            sound[] = {"",0.00031622776,1};
            descriptionShort = "";
            displayNameShort = "[K] Thermal Det";
        };
        class 442_thermal_det_belt_10_mag: 442_thermal_det_mag
        {
            displayName = "[K] Thermal Det Belt (10 Grenades)";
            count = 10;
            mass = 100;
            displayNameShort = "[K] 10x Thermal Det Belt";
        };
        class 442_thermal_det_belt_5_mag: 442_thermal_det_mag
        {
            displayName = "[K] Thermal Det Belt (5 Grenades)";
            count = 5;
            mass = 50;
            displayNameShort = "[K] 5x Thermal Det Belt";
        };
        class 442_impact_mag: HandGrenade
        {
            author = "Kobra Mod Team Team";
            mass = 5;
            scope = 2;
            value = 1;
            displayName = "[K] Impact Grenade";
            //picture = "kobra\kobra_core\kobra.paa";
            //icon = "kobra\kobra_core\kobra.paa";
            model = "kobra\442_weapons\explosive\impact_grenade.p3d";
            type = 256;
            ammo = "442_impact";
            count = 1;
            initSpeed = 18;
            nameSound = "handgrenade";
            maxLeadSpeed = 7;
            sound[] = {"",0.00031622776,1};
            descriptionShort = "";
            displayNameShort = "[K] Impact Grenade";
        };
        class 442_impact_belt_10_mag: 442_impact_mag
        {
            displayName = "[K] Impact Grenade Belt (10 Grenades)";
            count = 10;
            mass = 50;
            displayNameShort = "[K] 10x Impact Grenade Belt";
        };
        class 442_impact_belt_5_mag: 442_impact_mag
        {
            displayName = "[K] Impact Grenade Belt (5 Grenades)";
            count = 5;
            mass = 25;
            displayNameShort = "[K] 5x Impact Grenade Belt";
        };
        class 442_SmokeShellBlack: SmokeShell
        {
            author = "Kobra Mod Team";
            displayname = "[K] Smoke Grenade (Black)";
            ammo = "442_smoke_black";
            displaynameshort = "[K] Black Smoke";
            model = "kobra\442_weapons\explosive\basic_smoke.p3d";
        };
        class 442_SmokeShellBlack_belt_5: 442_SmokeShellBlack
        {
            Displayname = "[K] Smoke Grenade (Black) Belt (5 Grenades)";
            count = 5;
            mass = 20;
            displaynameshort = "[K] 5x Black Smoke";
        };
        class 442_SmokeShellwhite: 442_SmokeShellBlack
        {
            displayname = "[K] Smoke Grenade (White)";
            ammo = "442_smoke_white";
            displaynameshort = "[K] White Smoke";
        };
        class 442_SmokeShellWhite_belt_5: 442_SmokeShellWhite
        {
            Displayname = "[K] Smoke Grenade (White) Belt (5 Grenades)";
            count = 5;
            mass = 20;
            displaynameshort = "[K] 5x White Smoke";
        };
        class 442_SmokeShellred: 442_SmokeShellBlack
        {
            displayname = "[K] Smoke Grenade (Red)";
            ammo = "442_smoke_red";
            displaynameshort = "[K] Red Smoke";
        };
        class 442_SmokeShellRed_belt_5: 442_SmokeShellRed
        {
            Displayname = "[K] Smoke Grenade (Red) Belt (5 Grenades)";
            count = 5;
            mass = 20;
            displaynameshort = "[K] 5x Red Smoke";
        };
        class 442_SmokeShellgreen: 442_SmokeShellBlack
        {
            displayname = "[K] Smoke Grenade (Green)";
            ammo = "442_smoke_green";
            displaynameshort = "[K] Green Smoke";
        };
        class 442_SmokeShellGreen_belt_5: 442_SmokeShellGreen
        {
            Displayname = "[K] Smoke Grenade (Green) Belt (5 Grenades)";
            count = 5;
            mass = 20;
            displaynameshort = "[K] 5x Green Smoke";
        };
        class 442_SmokeShellyellow: 442_SmokeShellBlack
        {
            displayname = "[K] Smoke Grenade (Yellow)";
            ammo = "442_smoke_yellow";
            displaynameshort = "[K] Yellow Smoke";
        };
        class 442_SmokeShellYellow_belt_5: 442_SmokeShellYellow
        {
            Displayname = "[K] Smoke Grenade (Yellow) Belt (5 Grenades)";
            count = 5;
            mass = 20;
            displaynameshort = "[K] 5x Yellow Smoke";
        };
        class 442_SmokeShellpurple: 442_SmokeShellBlack
        {
            displayname = "[K] Smoke Grenade (Purple)";
            ammo = "442_smoke_purple";
            displaynameshort = "purple Smoke";
        };
        class 442_SmokeShellPurple_belt_5: 442_SmokeShellPurple
        {
            Displayname = "[K] Smoke Grenade (Purple) Belt (5 Grenades)";
            count = 5;
            mass = 20;
            displaynameshort = "[K] 5x Purple Smoke";
        };
        class 442_SmokeShellblue: 442_SmokeShellBlack
        {
            displayname = "[K] Smoke Grenade (Blue)";
            ammo = "442_smoke_blue";
            displaynameshort = "[K] Blue Smoke";
        };
        class 442_SmokeShellBlue_belt_5: 442_SmokeShellBlue
        {
            Displayname = "[K] Smoke Grenade (Blue) Belt (5 Grenades)";
            count = 5;
            mass = 20;
            displaynameshort = "[K] 5x Blue Smoke";
        };
        class 442_SmokeShellorange: 442_SmokeShellBlack
        {
            displayname = "[K] Smoke Grenade (Orange)";
            ammo = "442_smoke_orange";
            displaynameshort = "[K] Orange Smoke";
        };
        class 442_SmokeShellOrange_belt_5: 442_SmokeShellOrange
        {
            Displayname = "[K] Smoke Grenade (Orange) Belt (5 Grenades)";
            count = 5;
            mass = 20;
            displaynameshort = "[K] 5x Orange Smoke";
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
                "442_thermal_det_5_muzzle",
                "442_thermal_det_10_muzzle",
                "442_impact_muzzle",
                "442_impact_5_muzzle",
                "442_impact_10_muzzle",
                "442_smoke_black_muzzle",
                "442_smoke_black_5_muzzle",
                "442_smoke_white_muzzle",
                "442_smoke_white_5_muzzle",
                "442_smoke_red_muzzle",
                "442_smoke_red_5_muzzle",
                "442_smoke_green_muzzle",
                "442_smoke_green_5_muzzle",
                "442_smoke_yellow_muzzle",
                "442_smoke_yellow_5_muzzle",
                "442_smoke_purple_muzzle",
                "442_smoke_purple_5_muzzle",
                "442_smoke_blue_muzzle",
                "442_smoke_blue_5_muzzle",
                "442_smoke_orange_muzzle",
                "442_smoke_orange_5_muzzle",

            };
            class 442_thermal_det_muzzle: GrenadeLauncher
            {
                displayName = "Thermal Det";
                picture = "kobra\kobra_core\kobra.paa";
                icon = "kobra\kobra_core\kobra.paa";
                aidispersioncoefx = 6;
                aidispersioncoefy = 6;
                autoreload = 1;
                cursor = "EmptyCursor";
                cursoraim = "throw";
                enableattack = 0;
                keepininventory = 1;
                magazinereloadtime = 2.5;
                maxrange = 60;
                maxrangeprobab = 0.03;
                midrange = 45;
                midrangeprobab = 0.9;
                minrange = 10;
                minrangeprobab = 0.2;
                modeloptics = "";
                reloadsound[] = {"",0.000316228,1};
                reloadtime = 0;
                showempty = 0;
                sound[] = {"",0.000316228,1};
                magazines[] = {"442_thermal_det_mag"};
            };
            class 442_thermal_det_5_muzzle: 442_thermal_det_muzzle
            {
                magazines[] = {"442_thermal_det_belt_5_mag"};
            };
            class 442_thermal_det_10_muzzle: 442_thermal_det_muzzle
            {
                magazines[] = {"442_thermal_det_belt_10_mag"};
            };
            class 442_impact_muzzle: 442_thermal_det_muzzle
            {
                magazines[] = {"442_impact_mag"};
            };
            class 442_impact_5_muzzle: 442_impact_muzzle
            {
                magazines[] = {"442_impact_belt_5_mag"};
            };
            class 442_impact_10_muzzle: 442_impact_muzzle
            {
                magazines[] = {"442_impact_belt_10_mag"};
            };
            class 442_smoke_black_muzzle: 442_thermal_det_muzzle
            {
                magazines[] = {"442_SmokeShellBlack"};
            };
            class 442_smoke_black_5_muzzle: 442_smoke_black_muzzle
            {
                magazines[] = {"442_SmokeShellBlack_belt_5"};
            };
            class 442_smoke_white_muzzle: 442_smoke_black_muzzle
            {
                magazines[] = {"442_SmokeShellwhite"};
            };
            class 442_smoke_white_5_muzzle: 442_smoke_black_muzzle
            {
                magazines[] = {"442_SmokeShellWhite_belt_5"};
            };
            class 442_smoke_red_muzzle: 442_smoke_black_muzzle
            {
                magazines[] = {"442_SmokeShellred"};
            };
            class 442_smoke_red_5_muzzle: 442_smoke_black_muzzle
            {
                magazines[] = {"442_SmokeShellRed_belt_5"};
            };
            class 442_smoke_green_muzzle: 442_smoke_black_muzzle
            {
                magazines[] = {"442_SmokeShellgreen"};
            };
            class 442_smoke_green_5_muzzle: 442_smoke_black_muzzle
            {
                magazines[] = {"442_SmokeShellGreen_belt_5"};
            };
            class 442_smoke_yellow_muzzle: 442_smoke_black_muzzle
            {
                magazines[] = {"442_SmokeShellyellow"};
            };
            class 442_smoke_yellow_5_muzzle: 442_smoke_black_muzzle
            {
                magazines[] = {"442_SmokeShellYellow_belt_5"};
            };
            class 442_smoke_purple_muzzle: 442_smoke_black_muzzle
            {
                magazines[] = {"442_SmokeShellpurple"};
            };
            class 442_smoke_purple_5_muzzle: 442_smoke_black_muzzle
            {
                magazines[] = {"442_SmokeShellPurple_belt_5"};
            };
            class 442_smoke_blue_muzzle: 442_smoke_black_muzzle
            {
                magazines[] = {"442_SmokeShellblue"};
            };
            class 442_smoke_blue_5_muzzle: 442_smoke_black_muzzle
            {
                magazines[] = {"442_SmokeShellBlue_belt_5"};
            };
            class 442_smoke_orange_muzzle: 442_smoke_black_muzzle
            {
                magazines[] = {"442_SmokeShellorange"};
            };
            class 442_smoke_orange_5_muzzle: 442_smoke_black_muzzle
            {
                magazines[] = {"442_SmokeShellOrange_belt_5"};
            };
        };
    };
    class cfgvehicles {};