    class 442_laat_2 : ls_laat
    {
        author = "kripto202";
        displayName = "[K] LAAT/I Gunship";
        faction = "kobra";
		crew = "44_swla_unit";
		icon = "442_a_vehicle\laat\data\ui\laat_icon.paa";
		editorpreview = "442_a_vehicle\laat\data\ui\laat_preview.jpg";
        incomingMissileDetectionSystem = "1 + 2 + 4 + 8 + 16 + 32";
		LockDetectionSystem = "1 + 2 + 4 + 8 + 16 + 32";
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
        model = "442_a_vehicle\laat\laat.p3d";
        weapons[] = 
		{
			"442_laat_gun",
			"442_laat_gun_2",
			// "Missile_AGM_02_Plane_CAS_01_F",
			"missiles_DAR",
			"CMFlareLauncher"
		};
		magazines[] = 
		{
			"200rnd_laat_he_mag",
			"200rnd_laat_he_mag",
			"200rnd_laat_apfsds_mag",
			"200rnd_laat_apfsds_mag",
			// "6Rnd_Missile_AGM_02_F",
			// "6Rnd_Missile_AGM_02_F",
			// "6Rnd_Missile_AGM_02_F",
			// "6Rnd_Missile_AGM_02_F",
			// "6Rnd_Missile_AGM_02_F",
			"12rnd_missiles",
			"12rnd_missiles",
			"12rnd_missiles",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
        class HitPoints
		{
			class HitHull
			{
				armor=999;
				convexComponent = "hull_hit";
				depends = "Total";
				explosionShielding = 1;
				material = 51;
				name = "hull_hit";
				passThrough = 1;
				visual="zbytek";
				radius = 0.01;
			};
			class HitFuel
			{
				convexcomponent = "fuel_hit";
				hitpoint = "fuel_hit";
				name = "fuel_hit";
				explosionShielding = 2;
				radius = 0.1;
				visual = "";
				passthrough = 0.1;
				minimalhit = 0.1;
				material = -1;
				armor = 0.5;
			};
			class HitEngine
			{
				armor=0.25;
				convexComponent = "engine_hit";
				explosionShielding = 2;
				material = 51;
				name = "engine_hit";
				hitpoint = "engine_hit";
				passThrough = 1;
				visual="";
				radius = 0.2;
			};
			class HitEngine_1: HitEngine
			{
				convexComponent = "engine_hit_1";
				name = "engine_hit_1";
				hitpoint = "engine_hit_1";
			};
			class HitEngine_2: HitEngine
			{
				convexComponent = "engine_hit_2";
				name = "engine_hit_2";
				hitpoint = "engine_hit_2";
			};
			class HitHRotor
			{
				armor=3;
				convexComponent = "main_rotor_hit";
				explosionShielding = 2.5;
				material = 51;
				name = "main_rotor_hit";
				passThrough = 0.1;
				visual="";
				radius = 0.01;
			};
			class HitVRotor
			{
				armor=3;
				convexComponent = "tail_rotor_hit";
				explosionShielding = 6;
				material = 51;
				name = "tail_rotor_hit";
				passThrough = 0.3;
				visual="";
				radius = 0.01;
			};
			class HitAvionics
			{
				armor=1;
				convexComponent = "avionics_hit";
				explosionShielding = 2;
				material = 51;
				name = "avionics_hit";
				passThrough = 1;
				visual="";
				radius = 0.5;
			};
		};
        class MFD
		{
			class AirplaneHUD
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.1, 0.6, 1, 1};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.0375, 0.0375, 0.1};
				helmetRight[] = {0.075, 0, 0};
				helmetDown[] = {0, -0.075, 0};
				enableParallax = 1;
				font = "LucidaConsoleB";
				class Bones
				{
					class HUDCenter
					{
						type = "fixed";
						pos[] = {0.5, 0.5};
					};
					class HorizonBankSource
					{
						type = "rotational";
						source = "HorizonBank";
						center[] = {0.5, 0.5};
						min = -6.2831;
						max = 6.2831;
						minAngle = -360;
						maxAngle = 360;
					};
					class HorizonDiveSource
					{
						source = "horizonDive";
						type = "linear";
						min = -1;
						max = 1;
						minPos[] = {0.5, 2.5};
						maxPos[] = {0.5, -1.5};
					};
					class VelocityVector
					{
						type = "vector";
						source = "velocityToView";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.734, 0.73};
					};
					class ForwardVector
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {0.234, 0.23};
					};
					class GunnerAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0, -0.0025};
						pos10[] = {0.01, 0.0025};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weaponToView";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.734, 0.73};
					};
					class SliderDiveSource
					{
						type = "linear";
						source = "horizonDive";
						min = "RAD(-10)";
						max = "RAD(10)";
						minPos[] = {0.105, 0.38};
						maxPos[] = {0.105, 0.54};
					};
					class SliderDiveSource30: SliderDiveSource
					{
						min = "RAD(10)";
						max = "RAD(30)";
						minPos[] = {0, -0.04};
						maxPos[] = {0, "0)"};
					};
					class SliderDiveSource90: SliderDiveSource30
					{
						min = "RAD(30)";
						max = "RAD(90)";
						minPos[] = {0, -0.04};
					};
					class SliderDiveSource30m: SliderDiveSource
					{
						min = "RAD(-30)";
						max = "RAD(-10)";
						minPos[] = {0, 0};
						maxPos[] = {0, 0.04};
					};
					class SliderDiveSource90m: SliderDiveSource30m
					{
						min = "RAD(-90)";
						max = "RAD(-30)";
						maxPos[] = {0, 0.04};
					};
					class SliderAltitudeSource
					{
						type = "linear";
						source = "altitudeAGL";
						sourceOffset = -3;
						min = 0;
						max = 1000;
						minPos[] = {0.885, 0.2};
						maxPos[] = {0.885, 0.375};
					};
					class GForceSource
					{
						type = "linear";
						source = "gmeter";
						sourceScale = 0.15;
						min = -1;
						max = 3;
						minPos[] = {0.105, 0.7};
						maxPos[] = {0.105, 0.86};
					};
					class SliderVSpeedSource
					{
						type = "linear";
						source = "vspeed";
						min = -15;
						max = 15;
						minPos[] = {0.795, 0.6};
						maxPos[] = {0.795, 0.84};
					};
					class ImpactPoint
					{
						type = "vector";
						source = "ImpactPointToView";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.734, 0.73};
					};
					class WPPoint
					{
						type = "vector";
						source = "WPPointToView";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.734, 0.73};
					};
					class rtdRPM1
					{
						type = "linear";
						source = "rpm";
						min = 0.1;
						max = 1;
						minPos[] = {0, -0.075};
						maxPos[] = {0, 0};
					};
					class rtdRPM2: rtdRPM1
					{
						source = "rpm";
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1, 0.1, 0.9, 0.9};
					};
					class Target
					{
						source = "targettoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.734, 0.73};
					};
					class MissileFlightTimeRot1
					{
						type = "rotational";
						source = "MissileFlightTime";
						sourceScale = 0.46;
						center[] = {0, 0};
						min = 0;
						max = 0.5;
						minAngle = 0;
						maxAngle = 18;
						aspectRatio = 0.982906;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle = 36;
						max = 1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle = 54;
						max = 1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle = 72;
						max = 2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle = 90;
						max = 2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle = 108;
						max = 3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle = 126;
						max = 3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle = 144;
						max = 4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle = 162;
						max = 4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle = 180;
						max = 5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle = 198;
						max = 5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle = 216;
						max = 6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle = 234;
						max = 6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle = 252;
						max = 7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle = 270;
						max = 7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle = 288;
						max = 8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle = 306;
						max = 8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle = 324;
						max = 9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle = 342;
						max = 9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle = 360;
						max = 10;
					};
					class HorizonBankRotFull
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0, 0};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Airport1
					{
						type = "vector";
						source = "airportCorner1";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.734, 0.73};
					};
					class Airport2: Airport1
					{
						source = "airportCorner2";
					};
					class Airport3: Airport1
					{
						source = "airportCorner3";
					};
					class Airport4: Airport1
					{
						source = "airportCorner4";
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5, 0.5};
						pos3[] = {0.5702, 0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5, 0.569};
					};
				};
				class Draw
				{
					alpha = 1;
					color[] = {0.1, 0.6, 1, 1};
					condition = "on";
					class VelocityLine
					{
						type = "line";
						width = 2;
						points[] = 
                        {
                            {"HUDCenter", 1}, 
                            {"VelocityVector", 1}, 
                            {}, 
                            {"VelocityVector", {0, -0.00491453}, 1}, 
                            {"VelocityVector", {0.0025, -0.00425598}, 1}, 
                            {"VelocityVector", {0.00433, -0.00245726}, 1}, 
                            {"VelocityVector", {0.005, 0}, 1}, 
                            {"VelocityVector", {0.00433, 0.00245726}, 1}, 
                            {"VelocityVector", {0.0025, 0.00425598}, 1}, 
                            {"VelocityVector", {0, 0.00491453}, 1}, 
                            {"VelocityVector", {-0.0025, 0.00425598}, 1}, 
                            {"VelocityVector", {-0.00433, 0.00245726}, 1}, 
                            {"VelocityVector", {-0.005, 0}, 1}, 
                            {"VelocityVector", {-0.00433, -0.00245726}, 1}, 
                            {"VelocityVector", {-0.0025, -0.00425598}, 1}, 
                            {"VelocityVector", {0, -0.00491453}, 1}, {}
                        };
					};
					class Static
					{
						type = "line";
						width = 3;
						points[] = {{"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.015, 0.01}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0, 0}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.015, -0.01}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.015, 0.01}, 1}, {}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.03, 0.015}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.088, 0.015}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.088, -0.015}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.03, -0.015}, 1}, {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.03, 0.015}, 1}, {}, {{0.1, 0.3}, 1}, {{0.1, 0.62}, 1}, {}, {{0.1, 0.3}, 1}, {{0.08, 0.3}, 1}, {}, {{0.1, 0.34}, 1}, {{0.08, 0.34}, 1}, {}, {{0.1, 0.38}, 1}, {{0.08, 0.38}, 1}, {}, {{0.1, 0.46}, 1}, {{0.08, 0.46}, 1}, {}, {{0.1, 0.54}, 1}, {{0.08, 0.54}, 1}, {}, {{0.1, 0.58}, 1}, {{0.08, 0.58}, 1}, {}, {{0.1, 0.62}, 1}, {{0.08, 0.62}, 1}, {}, {"GForceSource", {0.015, 0.01}, 1}, {"GForceSource", {0, 0}, 1}, {"GForceSource", {0.015, -0.01}, 1}, {"GForceSource", {0.015, 0.01}, 1}, {}, {{0.1, 0.688}, 1}, {{0.1, 0.82}, 1}, {}, {{0.1, 0.7}, 1}, {{0.08, 0.7}, 1}, {}, {{0.1, 0.74}, 1}, {{0.08, 0.74}, 1}, {}, {{0.1, 0.78}, 1}, {{0.08, 0.78}, 1}, {}, {{0.1, 0.82}, 1}, {{0.08, 0.82}, 1}, {}, {{0.4, 0.86}, 1}, {{0.4, 0.94}, 1}, {{0.6, 0.94}, 1}, {{0.6, 0.86}, 1}, {{0.4, 0.86}, 1}, {}, {{0.4, 0.885}, 1}, {{0.408, 0.885}, 1}, {}, {{0.6, 0.885}, 1}, {{0.592, 0.885}, 1}, {}, {{0.5, 0.86}, 1}, {{0.5, 0.868}, 1}, {}, {{0.5, 0.94}, 1}, {{0.5, 0.932}, 1}, {}, {{0.52, 0.08}, 1}, {{0.5, 0.11}, 1}, {{0.48, 0.08}, 1}, {{0.52, 0.08}, 1}, {}, {{0.46, 0.07}, 1}, {{0.54, 0.07}, 1}, {{0.54, 0.035}, 1}, {{0.46, 0.035}, 1}, {{0.46, 0.07}, 1}, {}, {{0.15, 0.115}, 1}, {{0.85, 0.115}, 1}, {}, {{0, 0.96}, 1}, {{1.1, 0.96}, 1}, {}, {{0.48, 0.5}, 1}, {{0.49, 0.5}, 1}, {}, {{0.51, 0.5}, 1}, {{0.52, 0.5}, 1}, {}, {{0.5, 0.49}, 1}, {{0.5, 0.48}, 1}, {}, {{0.5, 0.51}, 1}, {{0.5, 0.52}, 1}, {}, {"WeaponAim", 1, {-0.02, 0}, 1}, {"WeaponAim", 1, {-0.01, 0}, 1}, {}, {"WeaponAim", 1, {0.01, 0}, 1}, {"WeaponAim", 1, {0.02, 0}, 1}, {}, {"WeaponAim", 1, {0, -0.01}, 1}, {"WeaponAim", 1, {0, -0.02}, 1}, {}, {"WeaponAim", 1, {0, 0.01}, 1}, {"WeaponAim", 1, {0, 0.02}, 1}, {}, {"HUDCenter", {-0.165, 7.08909e-009}, 1}, {"HUDCenter", {-0.22, 9.45212e-009}, 1}, {}, {"HUDCenter", {0.165, -1.93397e-009}, 1}, {"HUDCenter", {0.22, -2.57863e-009}, 1}, {}, {"HUDCenter", {-0.0825, 0.140452}, 1}, {"HUDCenter", {-0.09625, 0.16386}, 1}, {}, {"HUDCenter", {0.0825, 0.140452}, 1}, {"HUDCenter", {0.09625, 0.16386}, 1}, {}, {"HUDCenter", {-0.142894, 0.0810898}, 1}, {"HUDCenter", {-0.16671, 0.0946047}, 1}, {}, {"HUDCenter", {0.142894, 0.0810897}, 1}, {"HUDCenter", {0.16671, 0.0946047}, 1}, {}, {"HUDCenter", {-0.116673, 0.114678}, 1}, {"HUDCenter", {-0.155564, 0.152904}, 1}, {}, {"HUDCenter", {0.116673, 0.114678}, 1}, {"HUDCenter", {0.155563, 0.152904}, 1}, {}, {}};
					};
					class Gunner
					{
						type = "line";
						width = 4;
						points[] = {{"GunnerAim", {0.485, 0.892}, 1}, {"GunnerAim", {0.485, 0.908}, 1}, {"GunnerAim", {0.515, 0.908}, 1}, {"GunnerAim", {0.515, 0.892}, 1}, {"GunnerAim", {0.485, 0.892}, 1}};
					};
					class DiveNumber
					{
						type = "text";
						source = "horizondive";
						sourceScale = 57.2958;
						sourceOffset = 0;
						align = "left";
						scale = 1;
						pos[] = {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.085, "0.00-0.011"}, 1};
						right[] = {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.12, "0.00-0.011"}, 1};
						down[] = {"SliderDiveSource90", 1, "SliderDiveSource30", 1, "SliderDiveSource", 1, "SliderDiveSource30m", 1, "SliderDiveSource90m", 1, {0.085, "0.03-0.011"}, 1};
					};
					class VSpeedGroup
					{
						condition = "on";
						class VSpeedNumber
						{
							type = "text";
							source = "vspeed";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{"0.82+0.07", 0.728}, 1};
							right[] = {{"0.86+0.07", 0.728}, 1};
							down[] = {{"0.82+0.07", 0.763}, 1};
						};
						class Static
						{
							type = "line";
							width = 3;
							points[] = {{{0.849, 0.76}, 1}, {{0.929, 0.76}, 1}, {{0.929, 0.725}, 1}, {{0.849, 0.725}, 1}, {{0.849, 0.76}, 1}, {}};
						};
					};
					class VSpeedGroupUp
					{
						condition = "vspeed";
						class Static
						{
							type = "line";
							width = 3;
							points[] = {{{0.869, 0.715}, 1}, {{0.909, 0.715}, 1}, {{0.889, 0.695}, 1}, {{0.869, 0.715}, 1}, {}};
						};
					};
					class VSpeedGroupDown
					{
						condition = "-vspeed";
						class Static
						{
							type = "line";
							width = 3;
							points[] = {{{0.869, 0.77}, 1}, {{0.909, 0.77}, 1}, {{0.889, 0.79}, 1}, {{0.869, 0.77}, 1}, {}};
						};
					};
					class AltGroup
					{
						condition = "1000 - altitudeAGL";
						class Static
						{
							type = "line";
							width = 3;
							points[] = {{"SliderAltitudeSource", {0.024, 0.01}, 1}, {"SliderAltitudeSource", {0.009, 0}, 1}, {"SliderAltitudeSource", {0.024, -0.01}, 1}, {"SliderAltitudeSource", {0.024, 0.01}, 1}, {}, {"SliderAltitudeSource", {0.035, 0.015}, 1}, {"SliderAltitudeSource", {0.093, 0.015}, 1}, {"SliderAltitudeSource", {0.093, -0.015}, 1}, {"SliderAltitudeSource", {0.035, -0.015}, 1}, {"SliderAltitudeSource", {0.035, 0.015}, 1}, {}, {{0.889, 0.2}, 1}, {{0.889, 0.375}, 1}, {}, {{0.879, 0.2}, 1}, {{0.899, 0.2}, 1}, {}, {{0.879, 0.375}, 1}, {{0.899, 0.375}, 1}, {}};
						};
						class AltNumber
						{
							type = "text";
							source = "altitudeAGL";
							sourceScale = 1;
							sourceOffset = -3;
							align = "left";
							scale = 1;
							pos[] = {"SliderAltitudeSource", {0.085, "0.00-0.011"}, 1};
							right[] = {"SliderAltitudeSource", {0.11, "0.00-0.011"}, 1};
							down[] = {"SliderAltitudeSource", {0.085, "0.03-0.011"}, 1};
						};
						class AltStatic50
						{
							type = "text";
							source = "static";
							text = "1000";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.885, 0.171}, 1};
							right[] = {{0.925, 0.171}, 1};
							down[] = {{0.885, 0.201}, 1};
						};
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						sourceLength = 3;
						align = "left";
						scale = 1;
						pos[] = {{0.13, 0.22}, 1};
						down[] = {{0.13, 0.26}, 1};
						right[] = {{0.2, 0.22}, 1};
					};
					class HeadingNumber
					{
						type = "text";
						source = "heading";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = {{"0.80-0.302", "0.082-0.043"}, 1};
						right[] = {{"0.84-0.302", "0.082-0.043"}, 1};
						down[] = {{"0.80-0.302", "0.117-0.043"}, 1};
					};
					class Angle_90
					{
						type = "text";
						source = "static";
						text = "90";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.285}, 1};
						right[] = {{0.11, 0.285}, 1};
						down[] = {{0.07, 0.315}, 1};
					};
					class Angle_30
					{
						type = "text";
						source = "static";
						text = "30";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.325}, 1};
						right[] = {{0.11, 0.325}, 1};
						down[] = {{0.07, 0.355}, 1};
					};
					class Angle_10
					{
						type = "text";
						source = "static";
						text = "10";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.365}, 1};
						right[] = {{0.11, 0.365}, 1};
						down[] = {{0.07, 0.395}, 1};
					};
					class Angle_0
					{
						type = "text";
						source = "static";
						text = "0";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.445}, 1};
						right[] = {{0.11, 0.445}, 1};
						down[] = {{0.07, 0.475}, 1};
					};
					class Angle_10m
					{
						type = "text";
						source = "static";
						text = "-10";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.525}, 1};
						right[] = {{0.11, 0.525}, 1};
						down[] = {{0.07, 0.555}, 1};
					};
					class Angle_30m
					{
						type = "text";
						source = "static";
						text = "-30";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.565}, 1};
						right[] = {{0.11, 0.565}, 1};
						down[] = {{0.07, 0.595}, 1};
					};
					class Angle_90m
					{
						type = "text";
						source = "static";
						text = "-90";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.605}, 1};
						right[] = {{0.11, 0.605}, 1};
						down[] = {{0.07, 0.635}, 1};
					};
					class GMeterStatic3
					{
						type = "text";
						source = "static";
						text = "3";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.683}, 1};
						right[] = {{0.11, 0.683}, 1};
						down[] = {{0.07, 0.713}, 1};
					};
					class GMeterStatic2
					{
						type = "text";
						source = "static";
						text = "2";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.723}, 1};
						right[] = {{0.11, 0.723}, 1};
						down[] = {{0.07, 0.753}, 1};
					};
					class GMeterStatic1
					{
						type = "text";
						source = "static";
						text = "1";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.763}, 1};
						right[] = {{0.11, 0.763}, 1};
						down[] = {{0.07, 0.793}, 1};
					};
					class GMeterStatic0
					{
						type = "text";
						source = "static";
						text = "0";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07, 0.803}, 1};
						right[] = {{0.11, 0.803}, 1};
						down[] = {{0.07, 0.833}, 1};
					};
					class CollectiveNumber
					{
						type = "text";
						source = "throttle";
						sourceScale = 100;
						align = "left";
						scale = 1;
						pos[] = {{0.889, 0.46}, 1};
						right[] = {{0.939, 0.46}, 1};
						down[] = {{0.889, 0.495}, 1};
					};
					class CollectiveText
					{
						type = "text";
						source = "static";
						text = "%";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.899, 0.46}, 1};
						right[] = {{0.949, 0.46}, 1};
						down[] = {{0.899, 0.495}, 1};
					};
					class HeadingScale
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 0.1;
						sourceoffset = 0;
						width = 3;
						NeverEatSeaWeed = 1;
						top = 0.15;
						center = 0.5;
						bottom = 0.85;
						lineXleft = 0.114;
						lineYright = 0.12;
						lineXleftMajor = 0.114;
						lineYrightMajor = 0.13;
						majorLineEach = 2;
						numberEach = 6;
						step = 0.5;
						stepSize = 0.0344828;
						align = "center";
						scale = 1;
						pos[] = {0.15, 0.13};
						right[] = {0.21, 0.13};
						down[] = {0.15, 0.17};
					};
					class HorizonBanking
					{
						type = "line";
						width = 3;
						clipTL[] = {0, 0.1};
						clipBR[] = {1, 0.9};
						points[] = {{"HorizonBankSource", {0.16, 0}, 1}, {"HorizonBankSource", {0.1, 0}, 1}, {"HorizonBankSource", {0.085, -0.015}, 1}, {"HorizonBankSource", {0.07, 0}, 1}, {"HorizonBankSource", {0.05, 0}, 1}, {}, {"HorizonBankSource", {-0.16, 0}, 1}, {"HorizonBankSource", {-0.1, 0}, 1}, {"HorizonBankSource", {-0.085, -0.015}, 1}, {"HorizonBankSource", {-0.07, 0}, 1}, {"HorizonBankSource", {-0.05, 0}, 1}, {}};
					};
					class CoordXNumber
					{
						type = "text";
						source = "coordinateX";
						sourceScale = 0.01;
						sourceLength = 3;
						sourceOffset = -0.5;
						align = "right";
						scale = 1;
						pos[] = {{0.809, 0.961}, 1};
						right[] = {{0.859, 0.961}, 1};
						down[] = {{0.809, 0.996}, 1};
					};
					class CoordYNumber: CoordXNumber
					{
						source = "coordinateY";
						pos[] = {{0.899, 0.961}, 1};
						right[] = {{0.949, 0.961}, 1};
						down[] = {{0.899, 0.996}, 1};
					};
					class Time: CoordXNumber
					{
						source = "time";
						text = "%X";
						align = "left";
						pos[] = {{0.605, 0.961}, 1};
						right[] = {{0.655, 0.961}, 1};
						down[] = {{0.605, 0.996}, 1};
					};
					class CurrentWeapon
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.979, 0.889}, 1};
						right[] = {{1.029, 0.889}, 1};
						down[] = {{0.979, 0.924}, 1};
					};
					class CurrentAmmo: CurrentWeapon
					{
						source = "ammo";
						align = "left";
						pos[] = {{0.979, 0.921}, 1};
						right[] = {{1.029, 0.921}, 1};
						down[] = {{0.979, 0.956}, 1};
					};
					class CoordXText
					{
						type = "text";
						source = "static";
						text = "GRID:";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.655, 0.961}, 1};
						right[] = {{0.705, 0.961}, 1};
						down[] = {{0.655, 0.996}, 1};
					};
					class CoordYText
					{
						type = "text";
						source = "static";
						text = "";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.875, 0.961}, 1};
						right[] = {{0.925, 0.961}, 1};
						down[] = {{0.875, 0.996}, 1};
					};
					class LightsGroup
					{
						condition = "lights";
						class LightsText
						{
							type = "text";
							source = "static";
							text = "LIGHT";
							align = "left";
							scale = 1;
							pos[] = {{0.149, 0.961}, 1};
							right[] = {{0.199, 0.961}, 1};
							down[] = {{0.149, 0.996}, 1};
						};
					};
					class CollisionLights
					{
						condition = "collisionlights";
						class CollisionLightsText
						{
							type = "text";
							source = "static";
							text = "COLL";
							align = "left";
							scale = 1;
							pos[] = {{0.309, 0.961}, 1};
							right[] = {{0.359, 0.961}, 1};
							down[] = {{0.309, 0.996}, 1};
						};
					};
					class WeaponsLocking
					{
						condition = "missilelocking";
						blinkingPattern[] = {0.2, 0.2};
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "LOCKING";
							align = "center";
							scale = 1;
							pos[] = {{0.215, 0.879701}, 1};
							right[] = {{0.275, 0.879701}, 1};
							down[] = {{0.215, 0.928846}, 1};
						};
					};
					class TargetInfo
					{
						condition = "missilelocked";
						class TargetLockedText
						{
							type = "text";
							source = "static";
							text = "TARGET ACQUIRED";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.195, 0.859}, 1};
							right[] = {{0.235, 0.859}, 1};
							down[] = {{0.195, 0.89}, 1};
						};
						class TimeOfFlightText
						{
							type = "text";
							source = "static";
							text = "TOF:";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{"0.127+0.13", 0.889}, 1};
							right[] = {{0.302, 0.889}, 1};
							down[] = {{"0.127+0.13", 0.924}, 1};
						};
						class DistanceText
						{
							type = "text";
							source = "static";
							text = "DISTANCE:";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{"0.125+0.13", 0.921}, 1};
							right[] = {{0.3, 0.921}, 1};
							down[] = {{"0.125+0.13", 0.956}, 1};
						};
						class TOF_source: CurrentWeapon
						{
							source = "missileflighttime";
							align = "right";
							pos[] = {{0.269, 0.889}, 1};
							right[] = {{0.319, 0.889}, 1};
							down[] = {{0.269, 0.924}, 1};
						};
						class TargetDistance: CurrentWeapon
						{
							source = "targetDist";
							sourceLength = 0;
							sourcePrecision = 1;
							sourceScale = 0.001;
							align = "right";
							pos[] = {{0.269, 0.921}, 1};
							right[] = {{0.319, 0.921}, 1};
							down[] = {{0.269, 0.956}, 1};
						};
					};
					class IncomingMissile
					{
						condition = "incomingmissile";
						blinkingPattern[] = {0.3, 0.3};
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "!INCOMING MISSILE!";
							align = "center";
							scale = 1;
							pos[] = {{0.485, 0.216239}, 1};
							right[] = {{0.545, 0.216239}, 1};
							down[] = {{0.485, 0.265385}, 1};
						};
					};
					class GearGroup
					{
						type = "group";
						condition = "ils";
						class GearText
						{
							type = "text";
							source = "static";
							text = "DOORS";
							align = "center";
							scale = 1;
							pos[] = {{0.5, 0.825641}, 1};
							right[] = {{0.54, 0.825641}, 1};
							down[] = {{0.5, 0.855128}, 1};
						};
					};
					class MGun
					{
						condition = "mgun+rocket";
						class Cross
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPoint", {0, -0.0294872}, 1}, {"ImpactPoint", {0, -0.0393162}, 1}, {}, {"ImpactPoint", {0.02, -0.024}, 1}, {"ImpactPoint", {0.025, -0.031}, 1}, {}, {"ImpactPoint", {0, -0.002}, 1}, {"ImpactPoint", {0, 0.002}, 1}, {}, {"ImpactPoint", {-0.002, 0}, 1}, {"ImpactPoint", {0.002, 0}, 1}, {}};
						};
						class Circle
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPoint", {0, -0.0344017}, 1}, {"MissileFlightTimeRot1", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot2", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot3", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot4", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot5", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot6", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot7", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot8", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot9", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot10", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot11", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot12", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot13", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot14", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot15", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot16", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot17", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot18", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot19", {0, 0.035}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot20", {0, 0.035}, 1, "ImpactPoint", 1}};
						};
						class Circle_Min_Range
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPoint", {0, -0.0294872}, 1}, {"ImpactPoint", {0.005208, -0.029039}, 1}, {"ImpactPoint", {0.01026, -0.0277091}, 1}, {"ImpactPoint", {0.015, -0.0255359}, 1}, {"ImpactPoint", {0.019284, -0.0225872}, 1}, {"ImpactPoint", {0.02298, -0.0189544}, 1}, {"ImpactPoint", {0.02598, -0.0147436}, 1}, {"ImpactPoint", {0.028191, -0.0100846}, 1}, {"ImpactPoint", {0.029544, -0.00511897}, 1}, {"ImpactPoint", {0.03, 0}, 1}, {"ImpactPoint", {0.029544, 0.00511897}, 1}, {"ImpactPoint", {0.028191, 0.0100846}, 1}, {"ImpactPoint", {0.02598, 0.0147436}, 1}, {"ImpactPoint", {0.02298, 0.0189544}, 1}, {"ImpactPoint", {0.019284, 0.0225872}, 1}, {"ImpactPoint", {0.015, 0.0255359}, 1}, {"ImpactPoint", {0.01026, 0.0277091}, 1}, {"ImpactPoint", {0.005208, 0.029039}, 1}, {"ImpactPoint", {0, 0.0294872}, 1}, {"ImpactPoint", {-0.005208, 0.029039}, 1}, {"ImpactPoint", {-0.01026, 0.0277091}, 1}, {"ImpactPoint", {-0.015, 0.0255359}, 1}, {"ImpactPoint", {-0.019284, 0.0225872}, 1}, {"ImpactPoint", {-0.02298, 0.0189544}, 1}, {"ImpactPoint", {-0.02598, 0.0147436}, 1}, {"ImpactPoint", {-0.028191, 0.0100846}, 1}, {"ImpactPoint", {-0.029544, 0.00511897}, 1}, {"ImpactPoint", {-0.03, 0}, 1}, {"ImpactPoint", {-0.029544, -0.00511897}, 1}, {"ImpactPoint", {-0.028191, -0.0100846}, 1}, {"ImpactPoint", {-0.02598, -0.0147436}, 1}, {"ImpactPoint", {-0.02298, -0.0189544}, 1}, {"ImpactPoint", {-0.019284, -0.0225872}, 1}, {"ImpactPoint", {-0.015, -0.0255359}, 1}, {"ImpactPoint", {-0.01026, -0.0277091}, 1}, {"ImpactPoint", {-0.005208, -0.029039}, 1}, {"ImpactPoint", {0, -0.0294872}, 1}};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = {"ImpactPoint", {-0.002, -0.08}, 1};
							right[] = {"ImpactPoint", {0.045, -0.08}, 1};
							down[] = {"ImpactPoint", {-0.002, -0.04}, 1};
						};
					};
					class WP
					{
						condition = "wpvalid";
						class WPdist
						{
							type = "text";
							source = "wpdist";
							sourceScale = 0.001;
							sourcePrecision = 1;
							align = "left";
							scale = 1;
							pos[] = {{0.935, 0.810897}, 1};
							right[] = {{0.995, 0.810897}, 1};
							down[] = {{0.935, 0.860043}, 1};
						};
						class WPstatic
						{
							type = "text";
							source = "static";
							text = ">";
							align = "center";
							scale = 2;
							pos[] = {{0.95, 0.810897}, 1};
							right[] = {{0.97, 0.810897}, 1};
							down[] = {{0.95, 0.860043}, 1};
						};
						class WPIndex
						{
							type = "text";
							source = "wpIndex";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.96, 0.810897}, 1};
							right[] = {{1.02, 0.810897}, 1};
							down[] = {{0.96, 0.860043}, 1};
						};
						class WP
						{
							width = 1;
							type = "line";
							points[] = {{"wppoint", 1, {"HorizonBankRotFull", 0.015, -0.035}, 1}, {"wppoint", 1, {"HorizonBankRotFull", 0, 0}, 1}, {"wppoint", 1, {"HorizonBankRotFull", -0.015, -0.035}, 1}};
						};
					};
					class RadarBoxes
					{
						type = "radartoview";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.734, 0.73};
						width = 2;
						points[] = {{{-0.002, -0.00196581}, 1}, {{0.002, -0.00196581}, 1}, {{0.002, 0.00196581}, 1}, {{-0.002, 0.00196581}, 1}, {{-0.002, -0.00196581}, 1}};
					};
					class TargetDiamond
					{
						class shape
						{
							type = "line";
							width = 4;
							points[] = {{"Target", 1, "Limit0109", 1, {0.02, 0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {-0.02, 0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {-0.02, -0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {0.02, -0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {0.02, 0.0196581}, 1}};
						};
					};
					class TargetLocked
					{
						condition = "missilelocked";
						class shape
						{
							type = "line";
							width = 4;
							points[] = {{"Target", 1, "Limit0109", 1, {0, -0.0294872}, 1}, {"Target", 1, "Limit0109", 1, {0.03, 0}, 1}, {"Target", 1, "Limit0109", 1, {0, 0.0294872}, 1}, {"Target", 1, "Limit0109", 1, {-0.03, 0}, 1}, {"Target", 1, "Limit0109", 1, {0, -0.0294872}, 1}};
						};
					};
				};
			};
		};
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
            "442_a_vehicle\laat\data\body1_co.paa",
            "442_a_vehicle\laat\data\body2_co.paa",
            "442_a_vehicle\laat\data\door1_co.paa",
            "442_a_vehicle\laat\data\door2_co.paa",
            "442_a_vehicle\laat\data\door3_co.paa",
            "442_a_vehicle\laat\data\wings_co.paa",
            "442_a_vehicle\laat\data\missiles_co.paa",
            "442_a_vehicle\laat\data\cockpits_co.paa",
            "442_a_vehicle\laat\data\glass_ca.paa"
        };
        class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = -10;
					maxAngleX = 90;
					initAngleY = 0;
					minAngleY = -90;
					maxAngleY = 90;
					initFov = "(30 / 120)";
					minFov = "(30 / 120)";
					maxFov = "(30 / 120)";
					directionStabilized = 1;
					visionMode[] = {"Normal", "Ti"};
					thermalMode[] = {0, 1};
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
				};
				class Medium: Wide
				{
					opticsDisplayName = "MFOV";
					initFov = "(15 / 120)";
					minFov = "(15 / 120)";
					maxFov = "(15 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(3.75 / 120)";
					minFov = "(3.75 / 120)";
					maxFov = "(3.75 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics = 1;
				showUAVViewInOptics = 0;
				showSlingLoadManagerInOptics = 1;
			};
			minTurn = -90;
			maxTurn = 90;
			initTurn = 0;
			minElev = -10;
			maxElev = 90;
			initElev = -10;
			maxXRotSpeed = 0.3;
			maxYRotSpeed = 0.3;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		};
        // #include "442_a_vehicle\laat\laat_designs.hpp"
        // #include "442_a_vehicle\laat\sensors.hpp"

		#include "laat_designs.hpp"
        #include "sensors.hpp"
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
        model = "442_a_vehicle\laat\Laat_ab.p3d";
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
        model = "442_a_vehicle\laat\laat_w.p3d";
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
        model = "442_a_vehicle\laat\laat_w2.p3d";
        editorSubcategory = "EdSubcat_Helicopters";
    };
    class 442_laat_door_2 : 442_laat_door_1
    {
        displayname = "LAAT Door 2";
        model = "442_a_vehicle\laat\laat_w3.p3d";
    };
    class 442_laat_door_3 : 442_laat_door_1
    {
        displayname = "LAAT Door 3";
        model = "442_a_vehicle\laat\laat_w4.p3d";
    };
    class 442_laat_door_4 : 442_laat_door_1
    {
        displayname = "LAAT Door 4";
        model = "442_a_vehicle\laat\laat_w5.p3d";
    };