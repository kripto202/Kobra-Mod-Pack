class cfgPatches
{
	class 442nd_doom_bat
	{
		weapons[]={};
		units[]={};
		requiredaddons[]={};
	};
};

class cfgGlasses
{
	class G_Diving;
	class G_Combat;
	
	class 442_clones_hud_blue: G_Combat
	{
		ace_dustPath = "glasses\data\trooper_hud_dirt.paa";
		ace_Overlay = "glasses\data\trooper_hud.paa";
		ace_overlaycracked = "glasses\data\trooper_hud_damaged.paa";
		ace_overlayDirt = "glasses\data\trooper_hud_dirt.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\g_diving_ca.paa"};
		author = "kripto202";
		displayname = "[Doom] CloneTrooper HUD - Blue";
		model="\A3\Weapons_f\DummyNVG";
		mass = 1;
		mode = 0;
		scope = 2;
		scopearsenal = 2;
		scopeCurator = 1;
	};
	class 442_clones_hud_black: 442_clones_hud_blue
	{
		ace_dustPath = "glasses\data\trooper_hud_black_dirt.paa";
		ace_Overlay = "glasses\data\trooper_hud_black.paa";
		ace_overlaycracked = "glasses\data\trooper_hud_black_damaged.paa";
		ace_overlayDirt = "glasses\data\trooper_hud_black_dirt.paa";
		displayname = "[Doom] CloneTrooper HUD - Black";
	};
	class 442_clones_hud_green: 442_clones_hud_blue
	{
		ace_dustPath = "glasses\data\trooper_hud_green_dirt.paa";
		ace_Overlay = "glasses\data\trooper_hud_green.paa";
		ace_overlaycracked = "glasses\data\trooper_hud_green_damaged.paa";
		ace_overlayDirt = "glasses\data\trooper_hud_green_dirt.paa";
		displayname = "[Doom] CloneTrooper HUD - Green";
	};
	class 442_clones_hud_grey: 442_clones_hud_blue
	{
		ace_dustPath = "glasses\data\trooper_hud_grey_dirt.paa";
		ace_Overlay = "glasses\data\trooper_hud_grey.paa";
		ace_overlaycracked = "glasses\data\trooper_hud_grey_damaged.paa";
		ace_overlayDirt = "glasses\data\trooper_hud_grey_dirt.paa";
		displayname = "[Doom] CloneTrooper HUD - Grey";
	};
	class 442_clones_hud_red: 442_clones_hud_blue
	{
		ace_dustPath = "glasses\data\trooper_hud_red_dirt.paa";
		ace_Overlay = "glasses\data\trooper_hud_red.paa";
		ace_overlaycracked = "glasses\data\trooper_hud_red_damaged.paa";
		ace_overlayDirt = "glasses\data\trooper_hud_red_dirt.paa";
		displayname = "[Doom] CloneTrooper HUD - Red";
	};
	class 442_clones_hud_white: 442_clones_hud_blue
	{
		ace_dustPath = "glasses\data\trooper_hud_white_dirt.paa";
		ace_Overlay = "glasses\data\trooper_hud_white.paa";
		ace_overlaycracked = "glasses\data\trooper_hud_white_damaged.paa";
		ace_overlayDirt = "glasses\data\trooper_hud_white_dirt.paa";
		displayname = "[Doom] CloneTrooper HUD - White";
	};
	class 442_clones_hud_yellow: 442_clones_hud_blue
	{
		ace_dustPath = "glasses\data\trooper_hud_yellow_dirt.paa";
		ace_Overlay = "glasses\data\trooper_hud_yellow.paa";
		ace_overlaycracked = "glasses\data\trooper_hud_yellow_damaged.paa";
		ace_overlayDirt = "glasses\data\trooper_hud_yellow_dirt.paa";
		displayname = "[Doom] CloneTrooper HUD - Yellow";
	};
};