class cfgPatches
{
	class 442_warthog
	{
		weapons[] = {};
		units[] = 
		{
			"442_warthog_unarmed",
			"442_warthog_mg",
			"442_warthog_at",
			"442_warthog_tt",
			
			"rep_warthog_unarmed",
			"rep_warthog_mg",
			"rep_warthog_at",
			"rep_warthog_tt",
<<<<<<< Updated upstream
=======
			"cis_warthog_mg",

			"bl_warthog_unarmed",
			"bl_warthog_mg",
			"bl_warthog_at",
			"bl_warthog_tt",
			"442_deserter_warthog_unarmed_black",
			"442_deserter_warthog_mg_black",
			"442_deserter_warthog_at_black",
			"442_deserter_warthog_tt_black",
			"442_deserter_warthog_unarmed_tan",
			"442_deserter_warthog_mg_tan",
			"442_deserter_warthog_at_tan",
			"442_deserter_warthog_tt_tan",
			"442_deserter_warthog_unarmed_woodland",
			"442_deserter_warthog_mg_woodland",
			"442_deserter_warthog_at_woodland",
			"442_deserter_warthog_tt_woodland"
>>>>>>> Stashed changes
		};
		requiredaddons[] = {};
	};
};
class CfgEditorSubcategories
{
	class 442_optre_vehicles
	{
		displayname = "442nd OPTRE Vehicles";
		side = 1;
	};
	class bl_optre_vehicles
	{
		displayname = "Black Legion OPTRE Vehicles";
		side = 1;
	};
};

class cfgVehicles
{
	class OPTRE_M12_FAV;
	class OPTRE_M12_LRV;
<<<<<<< Updated upstream
	class OPTRE_M12A1_LRV;
	class OPTRE_M12G1_LRV;
	class OPTRE_M12R_AA;
	class OPTRE_M813_TT;
	class OPTRE_M914_RV;
	
=======
	class OPTRE_M813_TT;
	class OPTRE_M12A1_LRV;
	class Turrets;
	class MainTurret;
	class HitPoints;
	class ViewOptics;
	class CargoGunner_1;
	class LandVehicle;
	class AnimationSources;
//Unarmed
>>>>>>> Stashed changes
	class 442_warthog_unarmed: OPTRE_M12_FAV
	{
		displayname = "[442] Warthog (Unarmed)";
		scope = 2;
		side = 1;
		crew = "442_unit_crewman_1_dc15s";
		faction = "kobra";
		editorsubcategory = "442_optre_vehicles";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"clan",
			"clan_text",
			"insignia",
			"attach_apc",
			"attach_mg",
			"attach_troop"
		};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\442_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
		};
	};
<<<<<<< Updated upstream
	class 442_warthog_mg: OPTRE_M12_LRV
=======
	class rep_warthog_unarmed: OPTRE_M12_FAV
	{
		displayname = "Warthog (Unarmed)";
		driverAction = "Driver_Warthog";
		scope = 2;
		side = 1;
		crew = "SWLB_clone_base_P2";
		faction = "kobra";
		editorsubcategory = "442_rep_warthog";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"clan",
			"clan_text",
			"insignia",
			"attach_apc",
			"attach_mg",
			"attach_troop"
		};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\rep_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
		};
	};
	class bl_warthog_unarmed: OPTRE_M12_FAV
	{
		displayname = "[bl] Warthog (Unarmed)";
		scope = 2;
		side = 1;
		driverAction = "Driver_Warthog";
		crew = "SWLA_BL_Trooper";
		faction = "black_legion";
		editorsubcategory = "bl_optre_vehicles";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"clan",
			"clan_text",
			"insignia",
			"attach_apc",
			"attach_mg",
			"attach_troop"
		};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\bl_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
		};
	};
//MG
	class 442_warthog_mg_Base: OPTRE_M12_LRV
	{
		scope = 0;
		displayName = "M12 LRV Warthog (MG)";
		author = "mjr121";
		faction = "kobra";
		model = "OPTRE_Vehicles\Warthog\Warthog_MG.p3d";
		transportSoldier = 0;
		hiddenSelections[] = {"Camo1","Camo2","clan","clan_text","insignia","_Ammobox","_Axe","_Cans","_FireExtinguisher","_Shovel"};
		hiddenSelectionsTextures[] = {"OPTRE_Vehicles\Warthog\data\warthog_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_co.paa"};
		driverAction = "Driver_Warthog";
		class RenderTargets
		{
			class FrontView
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class RearView
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class leftMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class rightMirror
			{
				renderTarget = "rendertarget3";
				class CameraView1
				{
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class GunScreen
			{
				renderTarget = "rendertarget4";
				class CameraView1
				{
					pointPosition = "PIP4_pos";
					pointDirection = "PIP4_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.5;
				};
			};
		};
		class Turrets: Turrets
		{
			class CargoGunner_1: CargoGunner_1{};
			class MainTurret: MainTurret
			{
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				gunAxis = "Osa Hlavne";
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				LODTurnedOut = 1100;
				LODTurnedIn = 1100;
				LODOpticsIn = 1100;
				LODOpticsOut = 1100;
				minElev = -15;
				maxElev = 30;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				turretAxis = "OsaVeze";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				gunnerAction = "Gunner_MG_Warthog";
				gunnerInAction = "Gunner_MG_Warthog";
				gunnerGetInAction = "GetInMRAP_01";
				gunnerGetOutAction = "GetOutMRAP_01";
				gunnerName = "Gunner";
				hideWeaponsGunner = 0;
				soundServo[] = {"",0.01,1};
				stabilizedInAxes = 3;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				commanding = 1;
				primaryGunner = 1;
				turretInfoType = "RscWeaponZeroing";
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "OtocHlaven";
				gunnerRightHandAnimName = "OtocHlaven";
				memoryPointGun = "machinegun";
				weapons[] = {"rep_Mounted_repeater"};
				magazines[] = {"rep_1000Rnd_Mounted_repeater_cells","rep_1000Rnd_Mounted_repeater_cells","rep_1000Rnd_Mounted_repeater_cells"};
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "gunnerview";
				gunnerOpticsShowCursor = 1;
				castGunnerShadow = 1;
				startEngine = 0;
				enableManualFire = 0;
				gunnerOpticsModel = "a3\weapons_f\Reticle\optics_empty";
				gunnerOutOpticsModel = "a3\weapons_f\Reticle\optics_empty";
				gunnerForceOptics = 1;
				hasGunner = 1;
				class ViewGunner: ViewOptics
				{
					initAngleX = -15;
					minAngleX = -45;
					maxAngleX = 45;
					initFov = 0.9;
					minFov = 0.42;
					maxFov = 0.9;
					visionMode[] = {};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Gatling
			{
				source = "revolving";
				weapon = "rep_Mounted_repeater";
			};
		};
		supplyRadius = 5;
		transportMaxMagazines = 120;
		maximumLoad = 400;
	};
	class 442_warthog_mg: 442_warthog_mg_Base
>>>>>>> Stashed changes
	{
		displayname = "[442] Warthog (MG)";
		scope = 2;
		side = 1;
		crew = "442_swla_unit_crewman";
		faction = "kobra";
		editorsubcategory = "442_optre_vehicles";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\442_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
		};
	};
	class 442_warthog_at: OPTRE_M12A1_LRV
	{
		displayname = "[442] Warthog (Rocket)";
		scope = 2;
		side = 1;
		crew = "442_swla_unit_crewman";
		faction = "kobra";
		editorsubcategory = "442_optre_vehicles";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia"};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\442_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
		};
	};
<<<<<<< Updated upstream
=======
	class bl_warthog_mg: 442_warthog_mg
	{
		displayname = "[BL] Warthog (MG)";
		scope = 2;
		side = 1;
		driverAction = "Driver_Warthog";
		crew = "SWLA_BL_Trooper";
		faction = "black_legion";
		editorsubcategory = "bl_optre_vehicles";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\bl_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
		};
	};
//TT
>>>>>>> Stashed changes
	class 442_warthog_tt: OPTRE_M813_TT
	{
		displayname = "[442] Warthog (Transport)";
		scope = 2;
		side = 1;
		crew = "442_swla_unit_crewman";
		faction = "kobra";
		editorsubcategory = "442_optre_vehicles";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_antenna"};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\442_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
		};
	};
	
	class rep_warthog_unarmed: OPTRE_M12_FAV
	{
		displayname = "Warthog (Unarmed)";
		scope = 2;
		side = 1;
		crew = "SWLB_clone_base_P2";
		faction = "SWLB_GAR";
		editorsubcategory = "442_rep_warthog";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"clan",
			"clan_text",
			"insignia",
			"attach_apc",
			"attach_mg",
			"attach_troop"
		};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\rep_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
		};
	};
<<<<<<< Updated upstream
	class rep_warthog_mg: OPTRE_M12_LRV
=======
	class bl_warthog_tt: OPTRE_M813_TT
	{
		displayname = "[BL] Warthog (Transport)";
		scope = 2;
		side = 1;
		driverAction = "Driver_Warthog";
		crew = "SWLA_BL_Trooper";
		faction = "black_legion";
		editorsubcategory = "bl_optre_vehicles";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_antenna"};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\bl_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
		};
	};
//AT
	class 442_warthog_at: OPTRE_M12A1_LRV
>>>>>>> Stashed changes
	{
		displayname = "Warthog (MG)";
		scope = 2;
		side = 1;
		crew = "SWLB_clone_base_P2";
		faction = "SWLB_GAR";
		editorsubcategory = "442_rep_warthog";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\rep_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
		};
	};
	class rep_warthog_at: OPTRE_M12A1_LRV
	{
		displayname = "Warthog (Rocket)";
		scope = 2;
		side = 1;
		crew = "SWLB_clone_base_P2";
		faction = "SWLB_GAR";
		editorsubcategory = "442_rep_warthog";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia"};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\rep_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
		};
	};
<<<<<<< Updated upstream
	class rep_warthog_tt: OPTRE_M813_TT
=======
	class bl_warthog_at: OPTRE_M12A1_LRV
	{
		displayname = "[BL] Warthog (Rocket)";
		scope = 2;
		side = 1;
		driverAction = "Driver_Warthog";
		crew = "SWLA_BL_Trooper";
		faction = "black_legion";
		editorsubcategory = "bl_optre_vehicles";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia"};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\bl_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
		};
	};
//CIS hogs
	class cis_warthog_mg : 442_warthog_mg
>>>>>>> Stashed changes
	{
		displayname = "Warthog (Transport)";
		scope = 2;
		side = 1;
		crew = "SWLB_clone_base_P2";
		faction = "SWLB_GAR";
		editorsubcategory = "442_rep_warthog";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_antenna"};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\rep_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
		};
	};

//Deserter hogs
	class 442_deserter_warthog_unarmed_black: OPTRE_M12_FAV
	{
		displayname = "Warthog (Unarmed - Black)";
		scope = 2;
		side = 2;
		crew = "442_swla_deserters_unit_rifleman_dc15s_black";
		faction = "swla_442_deserters_f";
		editorsubcategory = "442_deserters_ground_veh_black";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"clan",
			"clan_text",
			"insignia",
			"attach_apc",
			"attach_mg",
			"attach_troop"
		};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\deserters\442_warthog_body_black.paa",
			"442_warthog\deserters\442_warthog_addons_black.paa"
		};
	};
	class 442_deserter_warthog_mg_black: 442_warthog_mg
	{
		displayname = "Warthog (MG - Black)";
		scope = 2;
		side = 2;
		crew = "442_swla_deserters_unit_rifleman_dc15s_black";
		faction = "swla_442_deserters_f";
		editorsubcategory = "442_deserters_ground_veh_black";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\deserters\442_warthog_body_black.paa",
			"442_warthog\deserters\442_warthog_addons_black.paa"
		};
	};
	class 442_deserter_warthog_at_black: OPTRE_M12A1_LRV
	{
		displayname = "Warthog (Rocket - Black)";
		scope = 2;
		side = 2;
		crew = "442_swla_deserters_unit_rifleman_dc15s_black";
		faction = "swla_442_deserters_f";
		editorsubcategory = "442_deserters_ground_veh_black";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\deserters\442_warthog_body_black.paa",
			"442_warthog\deserters\442_warthog_addons_black.paa"
		};
	};
	class 442_deserter_warthog_tt_black: OPTRE_M813_TT
	{
		displayname = "Warthog (Transport - Black)";
		scope = 2;
		side = 2;
		crew = "442_swla_deserters_unit_rifleman_dc15s_black";
		faction = "swla_442_deserters_f";
		editorsubcategory = "442_deserters_ground_veh_black";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\deserters\442_warthog_body_black.paa",
			"442_warthog\deserters\442_warthog_addons_black.paa"
		};
	};
	class 442_deserter_warthog_unarmed_tan: 442_deserter_warthog_unarmed_black
	{
		displayname = "Warthog (Unarmed - Tan)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_tan";
		editorsubcategory = "442_deserters_ground_veh_tan";
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\deserters\442_warthog_body_tan.paa",
			"442_warthog\deserters\442_warthog_addons_tan.paa"
		};
	};
	class 442_deserter_warthog_mg_tan: 442_deserter_warthog_mg_black
	{
		displayname = "Warthog (MG - Tan)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_tan";
		editorsubcategory = "442_deserters_ground_veh_tan";
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\deserters\442_warthog_body_tan.paa",
			"442_warthog\deserters\442_warthog_addons_tan.paa"
		};
	};
	class 442_deserter_warthog_at_tan: 442_deserter_warthog_at_black
	{
		displayname = "Warthog (Rocket - Tan)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_tan";
		editorsubcategory = "442_deserters_ground_veh_tan";
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\deserters\442_warthog_body_tan.paa",
			"442_warthog\deserters\442_warthog_addons_tan.paa"
		};
	};
	class 442_deserter_warthog_tt_tan: 442_deserter_warthog_tt_black
	{
		displayname = "Warthog (Transport - Tan)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_tan";
		editorsubcategory = "442_deserters_ground_veh_tan";
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\deserters\442_warthog_body_tan.paa",
			"442_warthog\deserters\442_warthog_addons_tan.paa"
		};
	};
	class 442_deserter_warthog_unarmed_woodland: 442_deserter_warthog_unarmed_black
	{
		displayname = "Warthog (Unarmed - Woodland)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_woodland";
		editorsubcategory = "442_deserters_ground_veh_woodland";
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\deserters\442_warthog_body_woodland.paa",
			"442_warthog\deserters\442_warthog_addons_woodland.paa"
		};
	};
	class 442_deserter_warthog_mg_woodland: 442_deserter_warthog_mg_black
	{
		displayname = "Warthog (MG - Woodland)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_woodland";
		editorsubcategory = "442_deserters_ground_veh_woodland";
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\deserters\442_warthog_body_woodland.paa",
			"442_warthog\deserters\442_warthog_addons_woodland.paa"
		};
	};
	class 442_deserter_warthog_at_woodland: 442_deserter_warthog_at_black
	{
		displayname = "Warthog (Rocket - Woodland)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_woodland";
		editorsubcategory = "442_deserters_ground_veh_woodland";
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\deserters\442_warthog_body_woodland.paa",
			"442_warthog\deserters\442_warthog_addons_woodland.paa"
		};
	};
	class 442_deserter_warthog_tt_woodland: 442_deserter_warthog_tt_black
	{
		displayname = "Warthog (Transport - Woodland)";
		crew = "442_swla_deserters_unit_rifleman_dc15s_woodland";
		editorsubcategory = "442_deserters_ground_veh_woodland";
		hiddenSelectionsTextures[] = 
		{
			"442_warthog\deserters\442_warthog_body_woodland.paa",
			"442_warthog\deserters\442_warthog_addons_woodland.paa"
		};
	};




};