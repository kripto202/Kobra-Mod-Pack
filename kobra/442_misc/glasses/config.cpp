class cfgpatches
{
    class 442_misc_glasses
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = {};
        weapons[] = {};
    };
};

class cfgglasses
{
	class G_Combat;
	class 442_clone_p1_glasses: G_Combat
	{
		author="kripto202";
		ace_Overlay = "\442_misc\glasses\data\442_p1_hud_ca.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ace_overlaycracked = "\442_misc\glasses\data\442_p1_hud_damage_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ACE_Resistance=1;
		ACE_Protection=1;
		ACE_TintAmount=0;
		displayname = "[K] P1 Hud";
		identityTypes[]={};
		mass=2;
		model="\A3\Weapons_f\DummyNVG";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class 442_clone_p2_glasses: 442_clone_p1_glasses
	{
		displayname = "[K] P2 Hud";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_Overlay="\442_misc\glasses\data\442_p2_hud_ca.paa";
		ace_overlaycracked="\442_misc\glasses\data\442_p2_hud_damage_ca.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
	};
	class 442_clone_ab_barc_glasses: 442_clone_p1_glasses
	{
		displayname = "[K] Airborne/Barc Hud";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_Overlay="\442_misc\glasses\data\442_ab_barc_hud_ca.paa";
		ace_overlaycracked="\442_misc\glasses\data\442_ab_barc_hud_damage_ca.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
	};
	class 442_clone_arf_glasses: 442_clone_p1_glasses
	{
		displayname = "[K] ARF Hud";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_Overlay="\442_misc\glasses\data\442_arf_hud_ca.paa";
		ace_overlaycracked="\442_misc\glasses\data\442_arf_hud_damage_ca.paa";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
	};
};