class Turrets: Turrets 
{
	class MainTurret: MainTurret 
	{
		class Turrets {};
		// Main gun
		gunBeg = "usti hlavne";
		gunEnd = "konec hlavne";
		//memoryPointGun[] = {"turret_l","turret_r"};
		proxyIndex = 2;
		// Weapons and magazines
		weapons[]={"cannon_120mm"};
		magazines[]={"32Rnd_120mm_APFSDS_shells_Tracer_Red", "16Rnd_120mm_HE_shells_Tracer_Red"};
		// Turret servos
		minElev=-5;
		maxElev=+30;
		initElev=10;
		soundServo[]= {"A3\Sounds_F\vehicles\armor\noises\servo_best", db-40, 1.0,50};
		// FCS
		turretInfoType = "RscWeaponRangeZeroing";
		discreteDistance[] = {
			100,200,300,400,500,600,700,800,
			900,1000,1100,1200,1300,1400,1500,1600,
			1700,1800,1900,2000,2100,2200,2300,2400
		};
		discreteDistanceInitIndex = 5;	// start at 600 meters
		// Optics view
		memoryPointGunnerOptics= "gunnerview";
		gunnerOutOpticsModel = "";
		gunnerOutOpticsEffect[] = {};
		gunnerOpticsEffect[] = {};
		gunnerForceOptics = 1;
		// Field of view values: 1 = 120°
		class OpticsIn 
		{
			class Wide: ViewOptics 
			{
				initAngleX=0;
				minAngleX=-30;
				maxAngleX=+30;
				initAngleY=0;
				minAngleY=-100;
				maxAngleY=+100;
				initFov=0.3;
				minFov=0.3;
				maxFov=0.3;
				visionMode[] = {"Normal","Ti"};
				thermalMode[] = {4,5}; //red hot chilli
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
				gunnerOpticsEffect[] = {};
			};
			class Medium: Wide 
			{
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_m_F.p3d";
				initFov=0.07;
				minFov=0.07;
				maxFov=0.07;
			};
			class Narrow: Wide 
			{
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_n_F.p3d";
				initFov=0.028;
				minFov=0.028;
				maxFov=0.028;
			};
		};
		// Gunner operations and animations
		gunnerAction = mbt2_slot2a_out;
		gunnerInAction = mbt2_slot2a_in;
		forceHideGunner = 0;
		inGunnerMayFire = 1;	// set to 0 to let gunner look around the internal compartment if modeled
		viewGunnerInExternal = 1; // Needed to make gunner possible to be killed with penetrating rounds.
		class HitPoints 
		{
					class HitTurret	{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual="vez";
						passThrough = 0;
						minimalHit = 0.02;
						explosionShielding = 0.3;
						radius = 0.25;
					};
					class HitGun	{
						armor = 0.3;
						material = -1;
						name = "zbran";
						visual="";
						passThrough = 0;
						minimalHit = 0;
						explosionShielding = 1;
						radius = 0.25;
					};
		};
	};
	class CommanderOptics: CommanderOptics
	{
		body = "ObsTurret";
		gun = "ObsGun";
		proxyIndex = 4;
		viewGunnerInExternal = 0;
		proxytype = "CPCommander";
		gunnername = "Commander";
		animationSourceBody = "ObsTurret";
		animationSourceGun = "ObsGun";
		minElev = -10;
		maxElev = 60;
		initElev = 0;
		minTurn = -15;
		maxTurn = 15;
		initOutTurn = 0;
		maxHorizontalRotSpeed = 1.8;
		maxVerticalRotSpeed = 1.8;
		stabilizedInAxes = 3;
		soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best",0.01,1,50};
		gunnerAction = "";
		gunnerInAction = "mbt2_slot2b_in";
		forceHideGunner = 0;
		outGunnerMayFire = 1;
		inGunnerMayFire = 1;
		gunnerRightHandAnimName = "";
		gunnerLeftHandAnimName = "";
		soundAttenuationTurret = "HeliAttenuationGunner";
		isPersonTurret = 1;
		personTurretAction = "vehicle_turnout_1";
		memoryPointGun[] = {};
		weapons[] = {"SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag"};
		turretInfoType = "RscWeaponRangeZeroing";
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
		discreteDistanceInitIndex = 2;
		memoryPointGunnerOptics = "commanderview";
		memoryPointGunnerOutOptics = "commanderview";
		gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
		gunnerOutOpticsModel = "";
		gunnerOpticsEffect[] = {};
		gunnerHasFlares = 1;
		class ViewOptics: ViewOptics
		{
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			min<?xml version="1.0"?>
<Settings>
  <Setting key="0bf2a63b979398a576ef1e45c447cca8" value="f682d8f389e35719f3e2feebbc32fe67e64a4e3e21980e27" type="10"/>
  <Setting key="AchCnt-2397523009" value="1588305383451" type="5"/>
  <Setting key="AllowNonSecureDownloads" value="false" type="1"/>
  <Setting key="AppSizePosition" value="1280,700|0,0" type="10"/>
  <Setting key="AutoPatch" value="true" type="1"/>
  <Setting key="BroadcastGameName" value="" type="10"/>
  <Setting key="Callout_GroupsTabShown" value="true" type="1"/>
  <Setting key="Callout_SocialUserAreaShown" value="true" type="1"/>
  <Setting key="ChatOnlineTimestamp " value="1588544032" type="5"/>
  <Setting key="ChatSizePosition" value="818,646|551,197" type="10"/>
  <Setting key="CreateDesktopShortcut" value="true" type="1"/>
  <Setting key="CreateStartMenuShortcut" value="false" type="1"/>
  <Setting key="DefaultTab" value="mygames" type="10"/>
  <Setting key="DownloadQueue" value="" type="10"/>
  <Setting key="EnableDownloaderSafeMode" value="true" type="1"/>
  <Setting key="EnableInGameLogging" value="false" type="1"/>
  <Setting key="EnablePushToTalk" value="true" type="1"/>
  <Setting key="EventCnt-2397523009" value="1588305383451" type="5"/>
  <Setting key="FriendsListSizePosition" value="343,680|1577,160" type="10"/>
  <Setting key="GameLibraryTileSize" value="small" type="10"/>
  <Setting key="HotKeyString" value="Shift+F1" type="10"/>
  <Setting key="JumplistRecentList" value="Origin.OFR.50.0003794" type="10"/>
  <Setting key="LeavingEarly" value="05c01d340bf2e30a1539b8020cb18b279381b612607f36742e0fe9957813e540cf73d239fc06fd652143c8dc79e149aa" type="10"/>
  <Setting key="LoginAsInvisible" value="false" type="1"/>
  <Setting key="MaxDownloadRateBpsInGame" value="3000000" type="5"/>
  <Setting key="MaxDownloadRateBpsOutOfGame" value="0" type="5"/>
  <Setting key="NetPromoterGameLastShown" value="2457486" type="2"/>
  <Setting key="NetPromoterLastShown" value="2458737" type="2"/>
  <Setting key="OnTheHouseVersionsShown" value="oth-nox#//oth-bf4-final-stand#//oth-moh-pacific-assault#//oth-nfs-most-wanted" type="10"/>
  <Setting key="PinHotKeyString" value="Shift+F2" type="10"/>
  <Setting key="PinnedIGOWidget_OFB-EAST:109552105_3_1920_1080" value="AAAFxQAAAKgAAAFXAAABtMEA" type="10"/>
  <Setting key="PinnedIGOWidget_OFB-EAST:109552105_8_1920_1080" value="AAAAMgAAADIAAAQAAAACgMEA" type="10"/>
  <Setting key="PinnedIGOWidget_OFB-EAST:50885_2_1920_1080" value="AAACvwAAAToAAAICAAABw8EA" type="10"/>
  <Setting key="PinnedIGOWidget_OFB-EAST:50885_3_1920_1080" value="AAAFxQAAAKgAAAFXAAABtMEA" type="10"/>
  <Setting key="PinnedIGOWidget_Origin.OFR.50.0000871_-1000_1920_1080" value="AAAACgAAAJUAAAdoAAADDsEA" type="10"/>
  <Setting key="PinnedIGOWidget_Origin.OFR.50.0000871_2_1920_1080" value="AAAAMgAAADIAAAMyAAAChsEA" type="10"/>
  <Setting key="PinnedIGOWidget_Origin.OFR.50.0000871_3_1920_1080" value="AAAFxQAAAKgAAAFXAAAC0cEA" type="10"/>
  <Setting key="PinnedIGOWidget_Origin.OFR.50.0000871_8_1920_1080" value="AAAB5gAAAJgAAAQAAAACgMEA" type="10"/>
  <Setting key="PinnedIGOWidget_Origin.OFR.50.0001388_2_1920_1080" value="AAAAMgAAADIAAAMyAAAChsEA" type="10"/>
  <Setting key="PinnedIGOWidget_Origin.OFR.50.0001388_3_1920_1080" value="AAAFxQAAAKgAAAFXAAABtMEA" type="10"/>
  <Setting key="PinnedIGOWidget_Origin.OFR.50.0001452_2_1920_1080" value="AAACvwAAAToAAAICAAABw8EA" type="10"/>
  <Setting key="PinnedIGOWidget_Origin.OFR.50.0001452_3_1920_1080" value="AAAF8gAAAJsAAAFDAAADa8EA" type="10"/>
  <Setting key="PinnedIGOWidget_Origin.OFR.50.0001928_2_1920_1080" value="AAACvwAAAToAAAICAAABw8EA" type="10"/>
  <Setting key="PinnedIGOWidget_Origin.OFR.50.0001928_3_1920_1080" value="AAAEhAAAALoAAAFDAAAC0MEA" type="10"/>
  <Setti