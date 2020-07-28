class CfgPatches
{
	class 9th_Armors
	{
		author="Rush";
		requiredAddons[]={};
		requiredVersion=0.1;
		units[]=
		{
			"P1_Trooper_Armor",
			"P1_Medic_Armor",
			"P1_EOD_Armor",
			"P1_Dakka_Armor",
			"P1_NCO_Armor",
			"P1_CPT_Armor",
			"P1_LT_Armor",
			"P1_CMD_Armor",
			"P1_Shiny_Armor",
			"P2_Trooper_Armor",
			"P2_EOD_Armor",
			"P2_Medic_Armor",
			"P2_NCO_Armor",
			"P2_Foe_Armor",
			"P2_Dirt_Armor",
			"P2_RIP_Armor",
			"P2_Rush_Armor",
			"P2_Sid_Armor",
			"P2_LT_Armor",
			"P2_Reese_Armor",
			"P2_Barb_Armor",
			"P2_G_Armor",
			"P2_Fox_Armor",
			"P2_Blachy_Armor",
			"P2_CPT_Armor",
			"P2_CMD_Armor",
			"P2_Damocles_Armor",
			"P2_Dakka_Armor",
			"P2_Wulf_Armor",
			"Barracks_Armor",
			"P2_Shiny_Armor",
		};
		weapons[]={};
	};
};
class CfgFactionClasses 
{
	class 9th_Assault_Corps 
	{
		displayName = "Vornskr Company";
	};
};
class CfgEditorSubcategories 
{
	class Phase_1
	{
		displayName = "Phase 1";
	};
	class Phase_2
	{
		displayName = "Phase 2";
	};
};
class CfgWeapons
{
	class SWLB_clone_P2_helmet;
	class SWLB_clone_P1_helmet;
	class SWLB_clone_P15_helmet;
	class SWLB_clone_P1_2_helmet;
	class k_airborne_helmet;
	class SWLB_clone_eng_helmet;
	class SWLB_clone_ARF_P1_helmet;
	class SWLB_clone_arc_armor;
	class SWLB_clone_officer_armor;
	class k_p2_helmet;
	class k_p15_helmet;
	class k_p2_pilot_helmet;
	class k_barc_helmet;
	class k_p1_arf_helmet;
	class k_p2_arf_helmet;
	class k_eng_helmet;
	class k_p1_helmet;
	class k_p1_pilot_helmet;
	class k_p1_specops_helmet;
	class k_p2_specops_helmet;
	class k_rex_helmet;
	class k_Scout_Helmet;
	//Helmet//
	class P1_Trooper_Helmet: k_p1_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 1 (Trooper)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P1_Helm.paa",
			"9_swla\data\Visors\P1_Visor.paa",
			"9_swla\data\Visors\illum_co.paa"
		};
	};
	class P1_Veteran_Helmet: k_p1_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 1 (Veteran)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P1_Vet.paa",
			"9_swla\data\Visors\P1_Visor.paa",
			"9_swla\data\Visors\illum_co.paa"
		};
	};
	class P1_Medic_Helmet: k_p1_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 1 (Medic)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P1_Medic_Helm.paa",
			"9_swla\data\Visors\P1_Visor.paa",
			"9_swla\data\Visors\illum_co.paa"
		};
	};
	class P1_EOD_Helmet: k_p1_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 1 (EOD)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P1_EOD_Helm.paa",
			"9_swla\data\Visors\P1_Visor.paa",
			"9_swla\data\Visors\illum_co.paa"
		};
	};
	class P1_NCO_Helmet: k_p1_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 1 (Sergeant)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P1_SGT_Helm.paa",
			"9_swla\data\Visors\P1_Visor.paa",
			"9_swla\data\Visors\illum_co.paa"
		};
	};
	class P1_LT_Helmet: k_p1_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 1 (Lieutenant)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P1_LT_Helm.paa",
			"9_swla\data\Visors\P1_Visor.paa",
			"9_swla\data\Visors\illum_co.paa"
		};
	};
	class P1_CPT_Helmet: k_p1_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 1 (Captain)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P1_CPT_Helm.paa",
			"9_swla\data\Visors\P1_Visor.paa",
			"9_swla\data\Visors\illum_co.paa"
		};
	};
	class P1_Cmd_Helmet: k_p1_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 1 (Commander)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P1_CMD_Helm.paa",
			"9_swla\data\Visors\P1_Visor.paa",
			"9_swla\data\Visors\illum_co.paa"
		};
	};
	class P1_CPL_Helmet: k_p1_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 1 (Corporal)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\9th_P1_CPL.paa",
			"9_swla\data\Visors\P1_Visor.paa",
			"9_swla\data\Visors\illum_co.paa"
		};
	};
	class P1_Shiny_Helmet: k_p1_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 1 (Shiny)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P1_Shiny_Helmet.paa",
			"9_swla\data\Visors\P1_Visor.paa",
			"9_swla\data\Visors\illum_co.paa"
		};
	};
	class P1_SpecOps_Helmet_worn: k_p1_specops_helmet
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        displayname = "9th SpecOps (P1 Worn)";
        hiddenSelectionsTextures[] = 
        {
            "9_swla\data\Helmets\9th_P1_SpecOps.paa",
            "9_swla\data\Visors\P1_SpecOps_Visor.paa"
        };
    };
	class P1_SpecOps_Helmet_clean: k_p1_specops_helmet
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        displayname = "9th Specops (P1 Clean)";
        hiddenSelectionsTextures[] = 
        {
            "9_swla\data\Helmets\P1_SpecOps_helm_clean.paa",
            "9_swla\data\Visors\P1_SpecOps_Visor.paa"
        };
    };
	class P1_ARF_Helmet_worn: k_p1_arf_helmet
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        displayname = "9th Phase 1 (ARF Worn)";
        hiddenSelectionsTextures[] = 
        {
            "9_swla\data\Helmets\9th_arf_Helmet_worn.paa",
            "442_clones\data\helmet\arf_helmet\visor_co.paa"
        };
    };
	class P1_ARF_Helmet_clean: k_p1_arf_helmet
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        displayname = "9th Phase 1 (ARF Clean)";
        hiddenSelectionsTextures[] = 
        {
            "9_swla\data\Helmets\9th_arf_Helmet_clean.paa",
            "442_clones\data\helmet\arf_helmet\visor_co.paa"
        };
    };
	class P2_EOD_Helmet: k_p2_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 2 (EOD)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P2_EOD_helmet.paa",
			"9_swla\data\Visors\P2_Visor.paa"
		};
	};
	class P2_Trooper_Grenadier_Helmet: k_p2_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 2 (Grenadier)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P2_Grenadier_helmet.paa",
			"9_swla\data\Visors\P2_Visor.paa"
		};
	};
	class P2_Trooper_Marksman_Helmet: k_p2_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 2 (Marksman)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P2_Marksman_helmet.paa",
			"9_swla\data\Visors\P2_Visor.paa"
		};
	};
	class P2_Medic_Helmet: k_p2_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 2 (Medic)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P2_Medic_helmet_co.paa",
			"9_swla\data\Visors\P2_Visor.paa"
		};
	};
	class P2_Trooper_NCO_Helmet: k_p2_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 2 (Sergeant)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P2_NCO_helmet.paa",
			"9_swla\data\Visors\P2_Visor.paa"
		};
	};
	class P2_Trooper_NCO_Helmetv2: k_p2_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 2 (Sergeant V2)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P2_NCO_helmetv2.paa",
			"9_swla\data\Visors\P2_Visor.paa"
		};
	};
	class P2_Trooper_Support_Helmet: k_p2_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 2 (Support)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P2_Support_helmet.paa",
			"9_swla\data\Visors\P2_Visor.paa"
		};
	};
	class P2_Trooper_Helmet: k_p2_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 2 (Trooper)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\9th_Trooper_Helm.paa",
			"9_swla\data\Visors\P2_Visor.paa"
		};
	};
	class P2_Trooper_Veteran_Helmet: k_p2_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 2 (Veteran)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P2_Veteran_helmet.paa",
			"9_swla\data\Visors\P2_Visor.paa"
		};
	};

	class P2_Trooper_CPLV2_Helmet: k_p2_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 2 (Corporal V1)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\9th_P2_Helm_CPLV1",
			"9_swla\data\Visors\P2_Visor.paa"
		};
	};
	class P2_Trooper_CPLV1_Helmet: k_p2_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 2 (Corporal V2)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\9th_P2_Helm_CPLV2",
			"9_swla\data\Visors\P2_Visor.paa"
		};
	};
	class P2_Trooper_LT_Helmet: k_p2_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 2 (Lieutenant)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P2_Lt_Helmet.paa",
			"9_swla\data\Visors\P2_Visor.paa"
		};
	};
	class P2_Trooper_Cpt_Helmet: k_p2_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 2 (Captain)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P2_Cpt_Helmet.paa",
			"9_swla\data\Visors\P2_Visor.paa"
		};
		
	};
	class P2_Trooper_Cmd_Helmet: k_p2_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 2 (Commander)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\P2_Cmd_Helmet.paa",
			"9_swla\data\Visors\P2_Visor.paa"
		};
		
	};
	class P2_Trooper_Airborne_Helmet_NCO: k_airborne_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Airborne (Sergeant)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\9th_ab_Helm_NCOV2.paa",
			"9_swla\data\Visors\AB_Visor.paa"
		};
	};
	class P2_Trooper_Airborne_Helmet_CPT: k_airborne_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Airborne (Captain)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\9th_ab_Helm_CPTV2.paa",
			"9_swla\data\Visors\AB_Visor.paa"
		};
	};
	class P2_Trooper_Airborne_Helmet_EOD: k_airborne_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Airborne (EOD)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\9th_ab_Helm_EODV2.paa",
			"9_swla\data\Visors\AB_Visor.paa"
		};
	};
	class P2_Trooper_Airborne_Helmet_LT: k_airborne_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Airborne (Lieutenant)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\9th_ab_Helm_LTV2.paa",
			"9_swla\data\Visors\AB_Visor.paa"
		};
	};
	class P2_Trooper_Airborne_Helmet_Medic: k_airborne_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Airborne (Medic)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\9th_ab_Helm_MedicV2.paa",
			"9_swla\data\Visors\AB_Visor.paa"
		};
	};
	class P2_Trooper_Airborne_Helmet_Trooper: k_airborne_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Airborne (Trooper)";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\9th_ab_Helm_V2.paa",
			"9_swla\data\Visors\AB_Visor.paa"
		};
	};
	class P2_Trooper_Engineer_Helmet: k_eng_helmet
    {
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Engineer";
		hiddenSelectionsTextures[] = 
		{
			"9_swla\data\Helmets\9th_Engineer_helmet_co.paa",
			"442_clones\data\helmet\eng_helmet\light_co.paa",
			"442_clones\data\helmet\eng_helmet\visor_co.paa"
		};
	};
	class 9th_BARC_worn: k_barc_helmet
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        displayname = "9th BARC (Worn)";
        hiddenselectionstextures[] = 
        {
            "9_swla\data\Helmets\9th_BARC.paa",
            "9_swla\data\Visors\BARC_Visor.paa"
        };
    };
	class 9th_BARC_clean: k_barc_helmet
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        displayname = "9th BARC (Clean)";
        hiddenselectionstextures[] = 
        {
            "9_swla\data\Helmets\9th_BARC_clean.paa",
            "9_swla\data\Visors\BARC_Visor.paa"
        };
    };
	class 9th_P2_SpecOps_worn: k_p2_specops_helmet
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        displayname = "9th SpecOps (P2 Worn)";
        hiddenselectionstextures[] = 
        {
            "9_swla\data\Helmets\9th_P2_SpecOps.paa",
            "9_swla\data\Visors\P2_SpecOps_Visor.paa"
        };
    };
	class 9th_P2_SpecOps_clean: k_p2_specops_helmet
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        displayname = "9th SpecOps (P2 Clean)";
        hiddenselectionstextures[] = 
        {
            "9_swla\data\Helmets\p2_specops_helm_clean.paa",
            "9_swla\data\Visors\P2_SpecOps_Visor.paa"
        };
    };
	class P2_ARF_Helmet_worn: k_p2_arf_helmet
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        displayname = "9th Phase 2 (ARF Worn)";
        hiddenSelectionsTextures[] = 
        {
            "9_swla\data\Helmets\9th_arf_Helmet_worn.paa",
			"442_clones\data\helmet\arf_helmet\camo2_co.paa",
            "442_clones\data\helmet\arf_helmet\visor_co.paa"
        };
    };
	 class P2_ARF_Helmet_clean: k_p2_arf_helmet
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        displayname = "9th Phase 2 (ARF Clean)";
        hiddenSelectionsTextures[] = 
        {
            "9_swla\data\Helmets\9th_arf_Helmet_clean.paa",
			"442_clones\data\helmet\arf_helmet\camo2_co.paa",
            "442_clones\data\helmet\arf_helmet\visor_co.paa"
        };
    };
	class 9th_Scout: k_Scout_Helmet
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        displayname = "9th Scout Helmet";
        hiddenSelectionsTextures[] = 
        {
            "9_swla\data\Helmets\9th_Scout.paa",
            "442_clones\data\helmet\scout_helmet\visor_co.paa",
        };
    };
	class 9th_Shiny_Helmet: k_p2_helmet
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "9th Phase 2 (Shiny)";
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Helmets\P2_Shiny_Helmet.paa",
			"9_swla\data\Visors\P2_Visor.paa"
		};
	};

	//misc Gear//
	class SWLB_clone_uniform;
	class k_swla_uniform;
	class k_swla_mc_uniform;
	class U_O_officer_noinsignia_hex_F;
	class UniformItem;
		//Uniforms//
	class P1_Trooper_Uniform: k_swla_uniform
	{
		displayname = "Phase 1 (Trooper)"; //uniform name
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			containerclass = "Supply200"; //how much the uniform can store stuff
			mass = 20; //how heavy the uniform is
			uniformtype = "neopren"; //allows the uniform to swim like a diver, remove if you don't want that
			uniformclass = "P1_Trooper_Armor"; //needs to link to a unit 
		};
	};
	class P1_Medic_Uniform: k_swla_uniform
	{
		displayname = "Phase 1 (Medic)"; //uniform name
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			containerclass = "Supply200"; //how much the uniform can store stuff
			mass = 20; //how heavy the uniform is
			uniformtype = "neopren"; //allows the uniform to swim like a diver, remove if you don't want that
			uniformclass = "P1_Medic_Armor"; //needs to link to a unit 
		};
	};
	class P1_EOD_Uniform: k_swla_uniform
	{
		displayname = "Phase 1 (EOD)"; //uniform name
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			containerclass = "Supply200"; //how much the uniform can store stuff
			mass = 20; //how heavy the uniform is
			uniformtype = "neopren"; //allows the uniform to swim like a diver, remove if you don't want that
			uniformclass = "P1_EOD_Armor"; //needs to link to a unit 
		};
	};
	class P1_NCO_Uniform: k_swla_uniform
	{
		displayname = "Phase 1 (Sergeant)"; //uniform name
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			containerclass = "Supply200"; //how much the uniform can store stuff
			mass = 20; //how heavy the uniform is
			uniformtype = "neopren"; //allows the uniform to swim like a diver, remove if you don't want that
			uniformclass = "P1_NCO_Armor"; //needs to link to a unit 
		};
	};
	class P1_CPT_Uniform: k_swla_uniform
	{
		displayname = "Phase 1 (Captain)"; //uniform name
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			containerclass = "Supply200"; //how much the uniform can store stuff
			mass = 20; //how heavy the uniform is
			uniformtype = "neopren"; //allows the uniform to swim like a diver, remove if you don't want that
			uniformclass = "P1_CPT_Armor"; //needs to link to a unit 
		};
	};
	class P1_LT_Uniform: k_swla_uniform
	{
		displayname = "Phase 1 (Lieutenant)"; //uniform name
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			containerclass = "Supply200"; //how much the uniform can store stuff
			mass = 20; //how heavy the uniform is
			uniformtype = "neopren"; //allows the uniform to swim like a diver, remove if you don't want that
			uniformclass = "P1_LT_Armor"; //needs to link to a unit 
		};
	};
	class P1_CMD_Uniform: k_swla_uniform
	{
		displayname = "Phase 1 (Commander)"; //uniform name
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			containerclass = "Supply200"; //how much the uniform can store stuff
			mass = 20; //how heavy the uniform is
			uniformtype = "neopren"; //allows the uniform to swim like a diver, remove if you don't want that
			uniformclass = "P1_CMD_Armor"; //needs to link to a unit 
		};
	};
	class P1_Shiny_Uniform: k_swla_uniform
	{
		displayname = "Phase 1 (Shiny)"; //uniform name
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			containerclass = "Supply200"; //how much the uniform can store stuff
			mass = 20; //how heavy the uniform is
			uniformtype = "neopren"; //allows the uniform to swim like a diver, remove if you don't want that
			uniformclass = "P1_Shiny_Armor"; //needs to link to a unit 
		};
	};
	class P2_EOD_Uniform: k_swla_uniform
	{
		displayname = "Phase 2 (EOD)"; //uniform name
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			containerclass = "Supply200"; //how much the uniform can store stuff
			mass = 20; //how heavy the uniform is
			uniformtype = "neopren"; //allows the uniform to swim like a diver, remove if you don't want that
			uniformclass = "P2_EOD_Armor"; //needs to link to a unit 
		};
	};
	class P2_Medic_Uniform: k_swla_uniform
	{
		displayname = "Phase 2 (Medic)"; //uniform name
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			containerclass = "Supply200"; //how much the uniform can store stuff
			mass = 20; //how heavy the uniform is
			uniformtype = "neopren"; //allows the uniform to swim like a diver, remove if you don't want that
			uniformclass = "P2_Medic_Armor"; //needs to link to a unit 
		};
	};
	class P2_NCO_Uniform: k_swla_uniform
	{
		displayname = "Phase 2 (Sergeant)"; //uniform name
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			containerclass = "Supply200"; //how much the uniform can store stuff
			mass = 20; //how heavy the uniform is
			uniformtype = "neopren"; //allows the uniform to swim like a diver, remove if you don't want that
			uniformclass = "P2_NCO_Armor"; //needs to link to a unit 
		};
	};
	class P2_Trooper_Uniform: k_swla_uniform
	{
		displayname = "Phase 2 (Trooper)"; //uniform name
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			containerclass = "Supply200"; //how much the uniform can store stuff
			mass = 20; //how heavy the uniform is
			uniformtype = "neopren"; //allows the uniform to swim like a diver, remove if you don't want that
			uniformclass = "P2_Trooper_Armor"; //needs to link to a unit 
		};
	};
	class P2_LT_Uniform: k_swla_uniform
	{
		displayname = "Phase 2 (Lieutnant)"; //uniform name
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			containerclass = "Supply200"; //how much the uniform can store stuff
			mass = 20; //how heavy the uniform is
			uniformtype = "neopren"; //allows the uniform to swim like a diver, remove if you don't want that
			uniformclass = "P2_LT_Armor"; //needs to link to a unit 
		};
	};
	class P2_CPT_Uniform: k_swla_uniform
	{
		displayname = "Phase 2 (Captain)"; //uniform name
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			containerclass = "Supply200"; //how much the uniform can store stuff
			mass = 20; //how heavy the uniform is
			uniformtype = "neopren"; //allows the uniform to swim like a diver, remove if you don't want that
			uniformclass = "P2_CPT_Armor"; //needs to link to a unit 
		};
	};
	class P2_CMD_Uniform: k_swla_uniform
	{
		displayname = "Phase 2 (Commander)"; //uniform name
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			containerclass = "Supply200"; //how much the uniform can store stuff
			mass = 20; //how heavy the uniform is
			uniformtype = "neopren"; //allows the uniform to swim like a diver, remove if you don't want that
			uniformclass = "P2_CMD_Armor"; //needs to link to a unit 
		};
	};
	class Barracks_Uniform: U_O_officer_noinsignia_hex_F
	{
		displayname = "Barracks Uniform"; //uniform name
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			containerclass = "Supply200"; //how much the uniform can store stuff
			mass = 20; //how heavy the uniform is
			uniformtype = "neopren"; //allows the uniform to swim like a diver, remove if you don't want that
			uniformclass = "Barracks_Armor"; //needs to link to a unit 
		};
	};
	class P2_Shiny_Uniform: k_swla_uniform
	{
		displayname = "Phase 2 (Shiny)"; //uniform name
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		class ItemInfo: UniformItem
		{
			uniformmodel = "-";
			containerclass = "Supply200"; //how much the uniform can store stuff
			mass = 20; //how heavy the uniform is
			uniformtype = "neopren"; //allows the uniform to swim like a diver, remove if you don't want that
			uniformclass = "P2_Shiny_Armor"; //needs to link to a unit 
		};
	};
};
class CfgVehicles
{
	class B_Soldier_02_f;
	class B_medic_f;
	class B_Soldier_TL_F;
	class B_Officer_F;
	class B_Soldier_AT_f;
	class B_Engineer_f;
	class B_Soldier_exp_f;
	class B_recon_F;
	class B_Soldier_unarmed_F;
	class O_officer_F;
	class B_Pilot_f;
	class B_Sharpshooter_F;
	class B_HeavyGunner_F;
	class SWLB_clone_base_P2;
	class SWLB_clone_backpack;
	class SWLB_clone_backpack_heavy;
	class SWLB_clone_backpack_medic;
	class SWLB_clone_backpack_RTO;
	class SWLB_clone_backpack_eod;
	class k_swla_unit_base;
	class k_clone_backpack;
	class k_clone_backpack_med;
	class k_clone_backpack_heavy;
	class k_clone_backpack_medic;
	class k_clone_backpack_medic_med;
	class k_clone_backpack_radio;
	class k_clone_backpack_radio_med;
	class k_clone_backpack_rocket;
    //ARMOR//  
	class P1_Trooper_Armor: k_swla_unit_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "CC-3117 Rush";
		uniformclass = "P1_Trooper_Uniform"; //link this with the uniform classname
		faction = "9th_Assault_Corps";
		editorSubCategory = "Phase_1";
		displayname = "Trooper";
		backpack = ""; //backpack the unit spawns with
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Armor\P1_Upper.paa",
			"9_swla\data\Armor\P1_Lower.paa",
			"9_swla\data\Armor\undersuit.paa"
		};
		linkedItems[] = 
		{
			"P1_Trooper_Armor",
			"P1_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //things like your radio, helmet, vest, glasses
		respawnlinkeditems[] = 
		{
			"P1_Trooper_Armor",
			"P1_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //keep it the same as linkeditems
	};
	class P1_Medic_Armor: k_swla_unit_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "CC-3117 Rush";
		uniformclass = "P1_Medic_Uniform"; //link this with the uniform classname
		faction = "9th_Assault_Corps";
		editorSubCategory = "Phase_1";
		displayname = "Medic";
		backpack = ""; //backpack the unit spawns with
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Armor\P1_Medic_Upper.paa",
			"9_swla\data\Armor\P1_Lower.paa",
			"9_swla\data\Armor\undersuit.paa"
		};
		linkedItems[] = 
		{
			"P1_Medic_Armor",
			"P1_Medic_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //things like your radio, helmet, vest, glasses
		respawnlinkeditems[] = 
		{
			"P1_Medic_Armor",
			"P1_Medic_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //keep it the same as linkeditems
	};
	class P1_EOD_Armor: k_swla_unit_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "CC-3117 Rush";
		uniformclass = "P1_Demo_Uniform"; //link this with the uniform classname
		faction = "9th_Assault_Corps";
		editorSubCategory = "Phase_1";
		displayname = "EOD";
		backpack = ""; //backpack the unit spawns with
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Armor\P1_EOD.paa",
			"9_swla\data\Armor\P1_Lower.paa",
			"9_swla\data\Armor\undersuit.paa"
		};
		linkedItems[] = 
		{
			"P1_EOD_Armor",
			"P1_EOD_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //things like your radio, helmet, vest, glasses
		respawnlinkeditems[] = 
		{
			"P1_EOD_Armor",
			"P1_EOD_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //keep it the same as linkeditems
	};
	class P1_NCO_Armor: k_swla_unit_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "CC-3117 Rush";
		uniformclass = "P1_NCO_Uniform"; //link this with the uniform classname
		faction = "9th_Assault_Corps";
		editorSubCategory = "Phase_1";
		displayname = "Sergeant";
		backpack = ""; //backpack the unit spawns with
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Armor\P1_SGT.paa",
			"9_swla\data\Armor\P1_Lower.paa",
			"9_swla\data\Armor\undersuit.paa"
		};
		linkedItems[] = 
		{
			"P1_NCO_Armor",
			"P1_NCO_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //things like your radio, helmet, vest, glasses
		respawnlinkeditems[] = 
		{
			"P1_NCO_Armor",
			"P1_NCO_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //keep it the same as linkeditems
	};
	class P1_CPT_Armor: k_swla_unit_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "CC-3117 Rush";
		uniformclass = "P1_CPT_Uniform"; //link this with the uniform classname
		faction = "9th_Assault_Corps";
		editorSubCategory = "Phase_1";
		displayname = "Captain";
		backpack = ""; //backpack the unit spawns with
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Armor\P1_CPT.paa",
			"9_swla\data\Armor\P1_Lower.paa",
			"9_swla\data\Armor\undersuit.paa"
		};
		linkedItems[] = 
		{
			"P1_CPT_Armor",
			"P1_CPT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //things like your radio, helmet, vest, glasses
		respawnlinkeditems[] = 
		{
			"P1_CPT_Armor",
			"P1_CPT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //keep it the same as linkeditems
	};
	class P1_LT_Armor: k_swla_unit_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "CC-3117 Rush";
		uniformclass = "P1_LT_Uniform"; //link this with the uniform classname
		faction = "9th_Assault_Corps";
		editorSubCategory = "Phase_1";
		displayname = "Lieutenant";
		backpack = ""; //backpack the unit spawns with
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Armor\P1_LT.paa",
			"9_swla\data\Armor\P1_Lower.paa",
			"9_swla\data\Armor\undersuit.paa"
		};
		linkedItems[] = 
		{
			"P1_LT_Armor",
			"P1_LT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //things like your radio, helmet, vest, glasses
		respawnlinkeditems[] = 
		{
			"P1_LT_Armor",
			"P1_LT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //keep it the same as linkeditems
	};
	class P1_CMD_Armor: k_swla_unit_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "CC-3117 Rush";
		uniformclass = "P1_CMD_Uniform"; //link this with the uniform classname
		faction = "9th_Assault_Corps";
		editorSubCategory = "Phase_1";
		displayname = "Commander";
		backpack = ""; //backpack the unit spawns with
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Armor\P1_CMD.paa",
			"9_swla\data\Armor\P1_Lower.paa",
			"9_swla\data\Armor\undersuit.paa"
		};
		linkedItems[] = 
		{
			"P1_CMD_Armor",
			"P1_CMD_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //things like your radio, helmet, vest, glasses
		respawnlinkeditems[] = 
		{
			"P1_CMD_Armor",
			"P1_CMD_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //keep it the same as linkeditems
	};
	class P1_Shiny_Armor: k_swla_unit_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "CC-3117 Rush";
		uniformclass = "P1_Shiny_Uniform"; //link this with the uniform classname
		faction = "9th_Assault_Corps";
		editorSubCategory = "Phase_1";
		displayname = "Shiny";
		backpack = ""; //backpack the unit spawns with
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Armor\P1_Shiny_Upper.paa",
			"9_swla\data\Armor\P1_Shiny_Lower.paa",
			"9_swla\data\Armor\undersuit.paa"
		};
		linkedItems[] = 
		{
			"P1_Shiny_Armor",
			"P1_Shiny_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //things like your radio, helmet, vest, glasses
		respawnlinkeditems[] = 
		{
			"P1_Shiny_Armor",
			"P1_Shiny_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //keep it the same as linkeditems
	};
	class P2_Trooper_Armor: k_swla_unit_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "CC-3117 Rush";
		uniformclass = "P2_Trooper_Uniform"; //link this with the uniform classname
		faction = "9th_Assault_Corps";
		editorSubCategory = "Phase_2";
		displayname = "Trooper";
		backpack = ""; //backpack the unit spawns with
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Armor\P2_Trooper_Upper.paa",
			"9_swla\data\Armor\P2_Trooper_Lower.paa",
			"9_swla\data\Armor\undersuit.paa"
		};
		linkedItems[] = 
		{
			"P2_Trooper_Armor",
			"P2_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //things like your radio, helmet, vest, glasses
		respawnlinkeditems[] = 
		{
			"P2_Trooper_Armor",
			"P2_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //keep it the same as linkeditems
	};
	class P2_EOD_Armor: k_swla_unit_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "CC-3117 Rush";
		uniformclass = "P2_EOD_Uniform"; //link this with the uniform classname
		faction = "9th_Assault_Corps";
		editorSubCategory = "Phase_2";
		displayname = "EOD";
		backpack = ""; //backpack the unit spawns with
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Armor\P2_EOD.paa",
			"9_swla\data\Armor\P2_Trooper_Lower.paa",
			"9_swla\data\Armor\undersuit.paa"
		};
		linkedItems[] = 
		{
			"P2_EOD_Armor",
			"P2_EOD_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //things like your radio, helmet, vest, glasses
		respawnlinkeditems[] = 
		{
			"P2_EOD_Armor",
			"P2_EOD_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //keep it the same as linkeditems
	};
	class P2_Medic_Armor: k_swla_unit_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "CC-3117 Rush";
		uniformclass = "P2_Medic_Uniform"; //link this with the uniform classname
		faction = "9th_Assault_Corps";
		editorSubCategory = "Phase_2";
		displayname = "Medic";
		backpack = ""; //backpack the unit spawns with
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Armor\P2_Medic.paa",
			"9_swla\data\Armor\P2_Trooper_Lower.paa",
			"9_swla\data\Armor\undersuit.paa"
		};
		linkedItems[] = 
		{
			"P2_Medic_Armor",
			"P2_Medic_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //things like your radio, helmet, vest, glasses
		respawnlinkeditems[] = 
		{
			"P2_Medic_Armor",
			"P2_Medic_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //keep it the same as linkeditems
	};
	class P2_NCO_Armor: k_swla_unit_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "CC-3117 Rush";
		uniformclass = "P2_NCO_Uniform"; //link this with the uniform classname
		faction = "9th_Assault_Corps";
		editorSubCategory = "Phase_2";
		displayname = "Sergeant";
		backpack = ""; //backpack the unit spawns with
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Armor\9th_NCO_Upper.paa",
			"9_swla\data\Armor\9th_NCO_Lower.paa",
			"9_swla\data\Armor\undersuit.paa"
		};
		linkedItems[] = 
		{
			"P2_NCO_Armor",
			"P2_Trooper_NCO_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //things like your radio, helmet, vest, glasses
		respawnlinkeditems[] = 
		{
			"P2_NCO_Armor",
			"P2_Trooper_NCO_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //keep it the same as linkeditems
	};
	class P2_LT_Armor: k_swla_unit_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "CC-3117 Rush";
		uniformclass = "P2_LT_Uniform"; //link this with the uniform classname
		faction = "9th_Assault_Corps";
		editorSubCategory = "Phase_2";
		displayname = "Lieutenant";
		backpack = ""; //backpack the unit spawns with
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Armor\9th_LT_Upper.paa",
			"9_swla\data\Armor\9th_NCO_Lower.paa",
			"9_swla\data\Armor\undersuit.paa"
		};
		linkedItems[] = 
		{
			"P2_lt_Armor",
			"P2_Trooper_LT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //things like your radio, helmet, vest, glasses
		respawnlinkeditems[] = 
		{
			"P2_LT_Armor",
			"P2_Trooper_LT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //keep it the same as linkeditems
	};
	class P2_CPT_Armor: k_swla_unit_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "CC-3117 Rush";
		uniformclass = "P2_CPT_Uniform"; //link this with the uniform classname
		faction = "9th_Assault_Corps";
		editorSubCategory = "Phase_2";
		displayname = "Captain";
		backpack = ""; //backpack the unit spawns with
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Armor\9th_CPT_Upper.paa",
			"9_swla\data\Armor\9th_NCO_Lower.paa",
			"9_swla\data\Armor\undersuit.paa"
		};
		linkedItems[] = 
		{
			"P2_CPT_Armor",
			"P2_Trooper_Cpt_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //things like your radio, helmet, vest, glasses
		respawnlinkeditems[] = 
		{
			"P2_CPT_Armor",
			"P2_Trooper_Cpt_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //keep it the same as linkeditems
	};
	class P2_CMD_Armor: k_swla_unit_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "CC-3117 Rush";
		uniformclass = "P2_CMD_Uniform"; //link this with the uniform classname
		faction = "9th_Assault_Corps";
		editorSubCategory = "Phase_2";
		displayname = "Commander";
		backpack = ""; //backpack the unit spawns with
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Armor\9th_CMD_Upper.paa",
			"9_swla\data\Armor\9th_NCO_Lower.paa",
			"9_swla\data\Armor\undersuit.paa"
		};
		linkedItems[] = 
		{
			"P2_CMD_Armor",
			"P2_Trooper_Cmd_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //things like your radio, helmet, vest, glasses
		respawnlinkeditems[] = 
		{
			"P2_CMD_Armor",
			"P2_Trooper_Cmd_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //keep it the same as linkeditems
	};

	class Barracks_Armor: O_officer_F
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "CC-3117 Rush";
		uniformclass = "Barracks_Uniform"; //link this with the uniform classname
		faction = "9th_Assault_Corps";
		editorSubCategory = "Phase_1";
		displayname = "Barracks";
		backpack = ""; //backpack the unit spawns with
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Armor\Barracks.paa"
		};
		linkedItems[] = 
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //things like your radio, helmet, vest, glasses
		respawnlinkeditems[] = 
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //keep it the same as linkeditems
	};
	class P2_Shiny_Armor: k_swla_unit_base
	{
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		author = "CC-3117 Rush";
		uniformclass = "P2_Shiny_Uniform"; //link this with the uniform classname
		faction = "9th_Assault_Corps";
		editorSubCategory = "Phase_2";
		displayname = "Shiny";
		backpack = ""; //backpack the unit spawns with
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Armor\9th_Shiny_Upper_P2.paa",
			"9_swla\data\Armor\9th_Shiny_Lower_P2.paa",
			"9_swla\data\Armor\undersuit.paa"
		};
		linkedItems[] = 
		{
			"P2_Shiny_Armor",
			"9th_Shiny_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //things like your radio, helmet, vest, glasses
		respawnlinkeditems[] = 
		{
			"P2_Shiny_Armor",
			"9th_Shiny_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		}; //keep it the same as linkeditems
	};
	
	
	class B_Kitbag_rgr;
	class 9th_swla_clone_backpack_base: B_Kitbag_rgr
	{
		author="Rush";
		scope=0;
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		displayName="9th Clone trooper backpack";
		model="\SWLB_equipment\backpacks\SWLB_clone_backpack.p3d";
		maximumload=200;
		hiddenSelections[]=
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO",
			"eod"
		};
	};
	class 9th_swla_backpack: SWLB_clone_backpack
	{
		author="Rush";
		displayname="9th Backpack";
		maximumload=200;
		hiddenselectionstextures[]=
		{
			"9_swla\data\Backpacks\swla_9th_backpack_co",
			"9_swla\data\Backpacks\swla_9th_backpack_co",
			"",
			"",
			"",
			"",
			""
		};
	};
	class 9th_swla_heavy_backpack: SWLB_clone_backpack_heavy
	{
		displayname="9th Heavy Backpack";
		maximumload=400;
		hiddenselectionstextures[]=
		{
			"9_swla\data\Backpacks\swla_9th_backpack_co",
			"9_swla\data\Backpacks\swla_9th_backpack_co",
			"9_swla\data\Backpacks\swla_9th_backpack_co",
			"",
			"",
			"",
			""
		};
	};
	class 9th_swla_medic_backpack: SWLB_clone_backpack_medic
	{
		displayname="9th Medical Backpack";
		maximumload=400;
		hiddenselectionstextures[]=
		{
			"9_swla\data\Backpacks\swla_9th_backpack_medic_co",
			"9_swla\data\Backpacks\swla_9th_backpack_medic_co",
			"",
			"9_swla\data\Backpacks\swla_9th_backpack_medic_co",
			"",
			"",
			""
		};
	};
	class 9th_swla_rto_backpack: SWLB_clone_backpack_RTO
	{
		author="N3rf";
		scopecurator=2;
		displayName="9th RTO backpack";
		hiddenSelectionsTextures[]=
		{
			"9_swla\data\Backpacks\swla_9th_backpack_rto_co",
			"",
			"",
			"",
			"9_swla\data\Backpacks\swla_9th_backpack_rto_co",
			""
		};
		maximumLoad=400;
	};
	class 9th_swla_eod_backpack: SWLB_clone_backpack_eod
	{
		displayname="9th EOD Backpack";
		maximumload=400;
		hiddenselectionstextures[]=
		{
			"9_swla\data\Backpacks\swla_9th_backpack_eod_co",
			"9_swla\data\Backpacks\swla_9th_backpack_eod_co",
			"",
			"",
			"",
			"",
			"9_swla\data\Backpacks\swla_9th_backpack_eod_co"
		};
	};
	class 9th_backpack: k_clone_backpack
	{
		displayname = "9th Backpack";
		scope = 2;
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Backpacks\9th_Backpack_V2",
			"9_swla\data\Backpacks\cover_co"
		};
	};
	class 9th_medium_backpack: k_clone_backpack_med
	{
		displayname = "9th Medium Backpack";
		scope = 2;
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Backpacks\9th_Backpack_V2",
			"9_swla\data\Backpacks\cover_co",
			"9_swla\data\Backpacks\pouches_co"
		};
	};
	class 9th_eod_backpack: k_clone_backpack
	{
		displayname = "9th EOD Backpack";
		scope = 2;
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Backpacks\9th_EODpack_V2",
			"9_swla\data\Backpacks\cover_co"
		};
	};
	class 9th_medium_eod_backpack: k_clone_backpack_med
	{
		displayname = "9th Medium EOD Backpack";
		scope = 2;
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Backpacks\9th_EODpack_V2",
			"9_swla\data\Backpacks\cover_co",
			"9_swla\data\Backpacks\pouches_co"
		};
	};
	class 9th_heavy_backpack: k_clone_backpack_heavy
	{
		displayname = "9th Heavy Backpack";
		scope = 2;
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Backpacks\9th_Backpack_V2",
			"9_swla\data\Backpacks\cover_co",
			"9_swla\data\Backpacks\pouches_co"
		};
	};
	class 9th_medic_backpack: k_clone_backpack_medic
	{
		displayname = "9th Medical Backpack";
		scope = 2;
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Backpacks\9th_Medicpack_V2",
			"9_swla\data\Backpacks\cover_co",
			"9_swla\data\Backpacks\medic_co",
			"9_swla\data\Backpacks\medic_co"
		};
	};
	class 9th_medium_medic_backpack: k_clone_backpack_medic_med
	{
		displayname = "9th Medium Medic Backpack";
		scope = 2;
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Backpacks\9th_Medicpack_V2",
			"9_swla\data\Backpacks\cover_co",
			"9_swla\data\Backpacks\pouches_co",
			"9_swla\data\Backpacks\medic_co",
			"9_swla\data\Backpacks\medic_co"
		};
	};
	class 9th_radio_backpack: k_clone_backpack_radio
	{
		displayname = "9th Radio Backpack";
		scope = 2;
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Backpacks\9th_Backpack_V2",
			"9_swla\data\Backpacks\radio_co",
			"9_swla\data\Backpacks\screen_co"
		};
	};
	class 9th_medium_radio_backpack: k_clone_backpack_radio_med
	{
		displayname = "9th Medium Radio Backpack";
		scope = 2;
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Backpacks\9th_Backpack_V2",
			"9_swla\data\Backpacks\radio_co",
			"9_swla\data\Backpacks\screen_co",
			"9_swla\data\Backpacks\pouches_co"
		};
	};
	class 9th_rocket_backpack: k_clone_backpack_rocket
	{
		displayname = "9th Rocket Backpack";
		scope = 2;
		hiddenselectionstextures[] = 
		{
			"9_swla\data\Backpacks\9th_Backpack_V2",
			"9_swla\data\Backpacks\holder_co",
			"9_swla\data\Backpacks\rocket_co",
			"9_swla\data\Backpacks\light_co",
			"9_swla\data\Backpacks\pouches_co"
		};
	};
};
 