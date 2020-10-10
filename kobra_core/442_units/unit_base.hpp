    class k_swla_unit_base: B_Soldier_02_f
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		model = "ls_armor_bluefor\uniform\gar\phase2\ls_gar_phase2_uniform.p3d";
		editorPreview="";
		//picture = "442_units\clones\data\ui\body.paa"; //this needs to be changed
		icon = "kobra_core\442_icons\data\icon_rifleman.paa";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		role="Rifleman";
		side = 1;
		author = "KOBRA Mod Team";
		uniformclass="k_swla_uniform";
		faction="kobra_b";
		editorSubCategory="442_trooper";
		displayname="Trooper";
		movesFatigue="CfgMovesFatigueTrooper";
		backpack="";
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"undersuit",
			"insignia"
		};
		hiddenselectionsTextures[]=
		{
			"442_units\clones\data\uniform\uniform\camo1_co.paa",
			"442_units\clones\data\uniform\uniform\camo2_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa",
		};

		hiddenselectionsMaterials[]=
		{
			"442_units\clones\data\uniform\uniform\camo1.rvmat",
			"442_units\clones\data\uniform\uniform\camo2.rvmat",
			"442_units\clones\data\uniform\mc_uniform\undersuit.rvmat",
		};

		linkedItems[]={};
		RespawnlinkedItems[]={};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]={};
		respawnMagazines[]={};
		items[]={};
		respawnitems[]={};
		armor=5;
		armorStructural=8;
		explosionShielding=0.5;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
	class k_swla_unit_mc_base: k_swla_unit_base
	{
		model = "ls_armor_bluefor\uniform\gar\marshalCommander\ls_gar_marshalCommander_uniform.p3d";
		side = 1;
		uniformclass="k_swla_mc_uniform";
		//picture = "442_units\clones\data\ui\body_mc.paa"; //this needs to be changed
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"undersuit",
			"insignia"
		};
		hiddenselectionsTextures[]=
		{
			"442_units\clones\data\uniform\mc_uniform\camo1_co.paa",
			"442_units\clones\data\uniform\mc_uniform\camo2_co.paa",
			"442_units\clones\data\uniform\mc_uniform\undersuit_co.paa"
		};
		hiddenselectionsMaterials[]=
		{
			"442_units\clones\data\uniform\mc_uniform\camo1.rvmat",
			"442_units\clones\data\uniform\mc_uniform\camo2.rvmat",
			"442_units\clones\data\uniform\mc_uniform\undersuit.rvmat"
		};
	};

	class k_swla_unit_b1_base: k_swla_unit_base
	{
		side = 0;
		hiddenselections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[] = 
		{
			"442_units\cis_droids\data\b1_upper_co.paa",
			"442_units\cis_droids\data\b1_lower_co.paa"
		};
		hiddenselectionsmaterials[] = 
		{
			"442_units\cis_droids\data\camo1.rvmat",
			"442_units\cis_droids\data\camo2.rvmat",
		};
		uniformclass = "k_swla_b1_uniform";
		model = "\ls_armor_redfor\uniform\cis\b1\ls_cis_b1_uniform.p3d";
		faction="442_CIS";
		editorSubCategory="442_battledroid_inf";
	};
	class k_swla_unit_b1_geonosis_base: k_swla_unit_b1_base
	{
		hiddenselectionstextures[] = 
		{
			"442_units\cis_droids\data\b1_upper_geonosis_co.paa",
			"442_units\cis_droids\data\b1_lower_geonosis_co.paa"
		};
		uniformclass = "k_swla_b1_geonosis_uniform";
		editorsubcategory = "442_battledroid_inf_geonosis";
	};
	class k_swla_unit_b1_security_base: k_swla_unit_b1_base
	{
		hiddenselectionstextures[] = 
		{
			"442_units\cis_droids\data\b1_upper_security_co.paa",
			"442_units\cis_droids\data\b1_lower_co.paa"
		};
		uniformclass = "k_swla_b1_security_uniform";
	};
	class k_swla_unit_b1_cmd_base: k_swla_unit_b1_base
	{
		hiddenselectionstextures[] = 
		{
			"442_units\cis_droids\data\b1_upper_cmd_co.paa",
			"442_units\cis_droids\data\b1_lower_co.paa"
		};
		uniformclass = "k_swla_b1_cmd_uniform";
	};
	class k_swla_unit_b1_pilot_base: k_swla_unit_b1_base
	{
		hiddenselectionstextures[] = 
		{
			"442_units\cis_droids\data\b1_upper_pilot_co.paa",
			"442_units\cis_droids\data\b1_lower_co.paa"
		};
		uniformclass = "k_swla_b1_pilot_uniform";
	};
	class k_swla_unit_b1_woodland_base: k_swla_unit_b1_base
	{
		hiddenselectionstextures[] = 
		{
			"442_units\cis_droids\data\b1_upper_woodland_co.paa",
			"442_units\cis_droids\data\b1_lower_woodland_co.paa"
		};
		uniformclass = "k_swla_b1_woodland_uniform";
		editorsubcategory = "442_battledroid_inf_w";
	};
	class k_swla_unit_b1_desert_base: k_swla_unit_b1_base
	{
		hiddenselectionstextures[] = 
		{
			"442_units\cis_droids\data\b1_upper_desert_co.paa",
			"442_units\cis_droids\data\b1_lower_desert_co.paa"
		};
		uniformclass = "k_swla_b1_desert_uniform";
		editorsubcategory = "442_battledroid_inf_d";
	};
	class k_swla_unit_b1_winter_base: k_swla_unit_b1_base
	{
		hiddenselectionstextures[] = 
		{
			"442_units\cis_droids\data\b1_upper_winter_co.paa",
			"442_units\cis_droids\data\b1_lower_winter_co.paa"
		};
		uniformclass = "k_swla_b1_winter_uniform";
		editorsubcategory = "442_battledroid_inf_winter";
	};

	class k_barracks_unit: O_officer_F
	{
		scope = 2;
		displayname = "Trooper (Barracks)";
		editorpreview = "\SWLB_clones\data\ui\editorPreviews\SWLB_clone_base_P2.jpg";
		icon = "kobra_core\442_icons\data\icon_rifleman.paa";
		identityTypes[] = {"LanguageENG_F", "Head_NATO"};
		role = "Rifleman";
		uniformclass = "k_barracks_uniform";
		side = 1;
		faction="kobra_b";
		editorSubCategory="442_trooper";
		movesFatigue="CfgMovesFatigueTrooper";
		hiddenselectionstextures[] = 
		{
			"442_units\clones\data\uniform\Barracks.paa"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		linkedItems[] = 
		{
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
	};

	#include "unit_loadout.hpp"