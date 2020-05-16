class cfgPatches
{
	class bl_warthog
	{
		weapons[] = {};
		units[] = 
		{
			"bl_warthog_unarmed",
			"bl_warthog_mg",
			"bl_warthog_at",
			"bl_warthog_tt",
			
			"rep_warthog_unarmed",
			"rep_warthog_mg",
			"rep_warthog_at",
			"rep_warthog_tt",
		};
		requiredaddons[] = {};
	};
};
class CfgEditorSubcategories
{
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
	class OPTRE_M12A1_LRV;
	class OPTRE_M12G1_LRV;
	class OPTRE_M12R_AA;
	class OPTRE_M813_TT;
	class OPTRE_M914_RV;
	
	class bl_warthog_unarmed: OPTRE_M12_FAV
	{
		displayname = "[bl] Warthog (Unarmed)";
		scope = 2;
		side = 1;
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
			"bl_warthog\data\bl_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
		};
	};
	class bl_warthog_mg: OPTRE_M12_LRV
	{
		displayname = "[BL] Warthog (MG)";
		scope = 2;
		side = 1;
		crew = "SWLA_BL_Trooper";
		faction = "black_legion";
		editorsubcategory = "bl_optre_vehicles";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop"};
		hiddenSelectionsTextures[] = 
		{
			"bl_warthog\data\bl_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
		};
	};
	class bl_warthog_at: OPTRE_M12A1_LRV
	{
		displayname = "[BL] Warthog (Rocket)";
		scope = 2;
		side = 1;
		crew = "SWLA_BL_Trooper";
		faction = "black_legion";
		editorsubcategory = "bl_optre_vehicles";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia"};
		hiddenSelectionsTextures[] = 
		{
			"bl_warthog\data\bl_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
		};
	};
	class bl_warthog_tt: OPTRE_M813_TT
	{
		displayname = "[BL] Warthog (Transport)";
		scope = 2;
		side = 1;
		crew = "SWLA_BL_Trooper";
		faction = "black_legion";
		editorsubcategory = "bl_optre_vehicles";
		hiddenSelections[] = {"camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_antenna"};
		hiddenSelectionsTextures[] = 
		{
			"bl_warthog\data\bl_warthog.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
		};
	};
};