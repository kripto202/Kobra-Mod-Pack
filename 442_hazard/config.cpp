class CfgPatches {
	class 442_Hazard {
		author = "Dutch";
		units[] = {};
		weapons[] = {};
	};
};
#include "basicDefines_A3.hpp"
class CfgWeapons 
{
	class InventoryItem_Base_F;
	class HeadgearItem: InventoryItem_Base_F 
	{
		allowedSlots[] = 
		{
			BACKPACK_SLOT, 
			HEADGEAR_SLOT
		};
		type = HEADGEAR_SLOT;
		hiddenSelections[] = {};
		hitpointName = "HitHead";
	};
	class H_HelmetSpecB;
	class 442nd_Hazard_Helmet: H_HelmetSpecB 
	{
		author = "kripto202";
		scope = 2;
		displayName = "[442] Hazard Helmet";
		model = "442_Hazard\Hazard.p3d";
		picture = "\442_Hazard\Data\Hazard_Icon_442.paa";
		subItems[] = {"442_nvg"};
		hiddenSelections[] = 
		{
			"Camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"\442_Hazard\Data\442_hazard.paa"
		};
		class ItemInfo: HeadgearItem 
		{
			mass = 10; 
			uniformModel = "442_Hazard\Hazard.p3d";	
			allowedSlots[] = 
			{
				UNIFORM_SLOT, 
				BACKPACK_SLOT, 
				VEST_SLOT, 
				HEADGEAR_SLOT
			};	
			modelSides[] = {6}; 
			hiddenSelections[] = 
			{
				"Camo1"
			}; 
			class HitpointsProtectionInfo{
				class Head
				{
					hitpointName = "HitHead"; 
					armor = 50; 
					passThrough	= 0.5; 
				};
			};
		};
	};
	// class 115th_Hazard_Helmet_Unmarked: 115th_Hazard_Helmet {
		// scope = 2;
		// displayName = "Clone Trooper Hazard Helmet";
		// picture = "\115th_Hazard\Data\115th_Hazard_Icon_Unmarked.paa"
		// hiddenSelections[] = 
		// {
			// "camo"
		// };
		// hiddenSelectionsTextures[] = 
		// {
			// "115th_Hazard\Data\HazardHelm_CO.paa"
		// };
	// };
};