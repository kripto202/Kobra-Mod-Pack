class SensorTemplateVisual;
class SensorTemplateActiveRadar;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft;
class DefaultVehicleSystemsDisplayManagerRight;
class CfgPatches
{
	class 442_droids
	{
		author="kripto202";
		requiredAddons[]={};
		requiredVersion=0.1;
		units[]=
		{
			"442_b1_heavy_z6",
			
			"442_b1_uniform_gh",
			"442_b1_officer_uniform_gh",
			"442_b1_pilot_uniform_gh",
			"442_b1_crew_uniform_gh",
			
			"442_b1_woodland",
			"442_b1_heavy_woodland",
			"442_b1_at_woodland",
			"442_b1_sl_woodland",
			"442_b1_heavy_z6_woodland",
			
			"442_b1_desert",
			"442_b1_heavy_desert",
			"442_b1_at_desert",
			"442_b1_sl_desert",
			"442_b1_heavy_z6_desert"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class O_Soldier_f;
	class O_Soldier_AT_F;
	class O_Crew_F;
	class O_Pilot_F;
	class O_Sharpshooter_F;
	class O_HeavyGunner_F;
	class O_Officer_F;
	class O_Soldier_SL_F;
	class 442_b1_base: O_Soldier_f
	{
		author="SW Legion Studios";
		editorPreview="\SWLB_droids\data\ui\editorPreviews\SWLB_b1_base.jpg";
		scope=2;
		displayName="B-1 (assault)";
		faction="442_cis";
		editorSubcategory="SWLB_droids_standard";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		role="Rifleman";
		uniformClass="SWLB_b1_uniform";
		backpack="SWLB_b1_backpack_predef_light";
		model="\SWLB_droids\SWLB_b1_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_droids\data\b1_camo1_co.paa",
			"SWLB_droids\data\b1_camo2_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"442_droid_nvg"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"442_droid_nvg"
		};
		weapons[]=
		{
			"442_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"442_E5",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag"
		};
		respawnMagazines[]=
		{
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag"
		};
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respanwItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		armor=2;
		armorStructural=3;
		explosionShielding=0.30000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
	class 442_b1_heavy_base: O_HeavyGunner_F
	{
		author="SW Legion Studios";
		editorPreview="\SWLB_droids\data\ui\editorPreviews\SWLB_b1_heavy_base.jpg";
		scope=2;
		displayName="B-1 (heavy)";
		faction="442_cis";
		editorSubcategory="SWLB_droids_standard";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		uniformClass="SWLB_b1_uniform";
		backpack="SWLB_b1_backpack_predef_heavy";
		model="\SWLB_droids\SWLB_b1_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_droids\data\b1_camo1_co.paa",
			"SWLB_droids\data\b1_camo2_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"442_droid_nvg"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"442_droid_nvg"
		};
		weapons[]=
		{
			"442_E5C",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"442_E5C",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SWLW_E5C_Mag",
			"SWLW_E5C_Mag",
			"SWLW_E5C_Mag",
			"SWLW_E5C_Mag",
			"SWLW_E5C_Mag",
			"SWLW_E5C_Mag",
			"SWLW_E5C_Mag",
			"SWLW_E5C_Mag",
			"SWLW_E5C_Mag",
			"SWLW_E5C_Mag"
		};
		respawnMagazines[]=
		{
			"SWLW_E5C_Mag",
			"SWLW_E5C_Mag",
			"SWLW_E5C_Mag",
			"SWLW_E5C_Mag",
			"SWLW_E5C_Mag",
			"SWLW_E5C_Mag",
			"SWLW_E5C_Mag",
			"SWLW_E5C_Mag",
			"SWLW_E5C_Mag",
			"SWLW_E5C_Mag"
		};
		armor=2;
		armorStructural=3;
		explosionShielding=0.30000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
	class 442_b1_heavy_z6: 442_b1_heavy_base
	{
		displayname = "B-1 (Heavy - E6Z)";
		backpack="442_b1_backpack_predef_z6";
		weapons[]=
		{
			"442_e6z",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"442_e6z",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"442_e6z_mag",
			"442_e6z_mag",
			"442_e6z_mag",
			"442_e6z_mag",
			"442_e6z_mag",
			"442_mag_40mm_3rnd_red",
			"442_mag_40mm_3rnd_red",
		};
		respawnMagazines[]=
		{
			"442_e6z_mag",
			"442_e6z_mag",
			"442_e6z_mag",
			"442_e6z_mag",
			"442_e6z_mag",
			"442_mag_40mm_3rnd_red",
			"442_mag_40mm_3rnd_red",
		};
	};
	class 442_b1_at_base: O_Soldier_f
	{
		author="SW Legion Studios";
		editorPreview="\SWLB_droids\data\ui\editorPreviews\SWLB_b1_at_base.jpg";
		scope=2;
		displayName="B-1 AT";
		faction="442_cis";
		editorSubcategory="SWLB_droids_standard";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		role="Rifleman";
		uniformClass="SWLB_b1_uniform";
		backpack="SWLB_b1_backpack_predef_light";
		model="\SWLB_droids\SWLB_b1_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_droids\data\b1_camo1_co.paa",
			"SWLB_droids\data\b1_camo2_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"442_droid_nvg"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"442_droid_nvg"
		};
		weapons[]=
		{
			"442_E5",
			"SWLW_RPS6",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"442_E5",
			"SWLW_RPS6",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_RPS6_Mag",
			"SWLW_RPS6_Mag",
			"SWLW_RPS6_Mag",
		};
		respawnMagazines[]=
		{
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_RPS6_Mag",
			"SWLW_RPS6_Mag",
			"SWLW_RPS6_Mag",
		};
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respanwItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		armor=2;
		armorStructural=3;
		explosionShielding=0.30000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
	class 442_b1_sl_base: O_Soldier_SL_F
	{
		author="SW Legion Studios";
		editorPreview="\SWLB_droids\data\ui\editorPreviews\SWLB_b1_sl_base.jpg";
		scope=2;
		displayName="B-1 squad leader";
		faction="442_cis";
		editorSubcategory="SWLB_droids_standard";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		role="Rifleman";
		uniformClass="SWLB_b1_uniform";
		backpack="SWLB_b1_backpack_predef_light";
		model="\SWLB_droids\SWLB_b1_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_droids\data\b1_camo1_co.paa",
			"SWLB_droids\data\b1_camo2_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"442_droid_nvg"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"442_droid_nvg"
		};
		weapons[]=
		{
			"442_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"442_E5",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag"
		};
		respawnMagazines[]=
		{
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag"
		};
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		armor=2;
		armorStructural=3;
		explosionShielding=0.30000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
	class 442_b1_officer_base: O_Soldier_SL_F
	{
		author="SW Legion Studios";
		editorPreview="\SWLB_droids\data\ui\editorPreviews\SWLB_b1_officer_base.jpg";
		scope=2;
		displayName="B-1 officer";
		faction="442_cis";
		editorSubcategory="SWLB_droids_standard";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		role="Rifleman";
		uniformClass="SWLB_b1_officer_uniform";
		backpack="SWLB_b1_antenna";
		model="\SWLB_droids\SWLB_b1_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_droids\data\b1_commander_camo1_co.paa",
			"SWLB_droids\data\b1_camo2_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"442_droid_nvg"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"442_droid_nvg"
		};
		weapons[]=
		{
			"442_E5",
			"SWLW_RG4D",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"442_E5",
			"SWLW_RG4D",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_RG4D_Mag",
			"SWLW_RG4D_Mag",
			"SWLW_RG4D_Mag",
			"SWLW_RG4D_Mag"
		};
		respawnMagazines[]=
		{
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_RG4D_Mag",
			"SWLW_RG4D_Mag",
			"SWLW_RG4D_Mag",
			"SWLW_RG4D_Mag"
		};
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respanwItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		armor=2;
		armorStructural=3;
		explosionShielding=0.30000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
	class 442_b1_pilot_base: O_Pilot_F
	{
		author="SW Legion Studios";
		editorPreview="\SWLB_droids\data\ui\editorPreviews\SWLB_b1_pilot_base.jpg";
		scope=2;
		displayName="B-1 pilot";
		faction="442_cis";
		editorSubcategory="SWLB_droids_standard";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		role="Rifleman";
		uniformClass="SWLB_b1_pilot_uniform";
		backpack="";
		model="\SWLB_droids\SWLB_b1_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_droids\data\b1_pilot_camo1_co.paa",
			"SWLB_droids\data\b1_camo2_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"442_droid_nvg"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"442_droid_nvg"
		};
		weapons[]=
		{
			"442_E5",
			"SWLW_RG4D",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"442_E5",
			"SWLW_RG4D",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_RG4D_Mag",
			"SWLW_RG4D_Mag",
			"SWLW_RG4D_Mag",
			"SWLW_RG4D_Mag"
		};
		respawnMagazines[]=
		{
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_RG4D_Mag",
			"SWLW_RG4D_Mag",
			"SWLW_RG4D_Mag",
			"SWLW_RG4D_Mag"
		};
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respanwItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		armor=2;
		armorStructural=3;
		explosionShielding=0.30000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
	class 442_b1_crew_base: O_Crew_F
	{
		author="SW Legion Studios";
		editorPreview="\SWLB_droids\data\ui\editorPreviews\SWLB_b1_crew_base.jpg";
		scope=2;
		displayName="B-1 crew";
		faction="442_cis";
		editorSubcategory="SWLB_droids_standard";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		role="Rifleman";
		uniformClass="SWLB_b1_crew_uniform";
		backpack="";
		model="\SWLB_droids\SWLB_b1_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_droids\data\b1_crew_camo1_co.paa",
			"SWLB_droids\data\b1_crew_camo2_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"442_droid_nvg"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"442_droid_nvg"
		};
		weapons[]=
		{
			"442_E5",
			"SWLW_RG4D",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"442_E5",
			"SWLW_RG4D",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_RG4D_Mag",
			"SWLW_RG4D_Mag",
			"SWLW_RG4D_Mag",
			"SWLW_RG4D_Mag"
		};
		respawnMagazines[]=
		{
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_E5_Mag",
			"SWLW_RG4D_Mag",
			"SWLW_RG4D_Mag",
			"SWLW_RG4D_Mag",
			"SWLW_RG4D_Mag"
		};
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respanwItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		armor=2;
		armorStructural=3;
		explosionShielding=0.30000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
	
	class 442_b1_woodland: 442_b1_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		uniformClass="442_b1_uniform_w";
		editorSubcategory="442_battledroid_inf_w";
		backpack="442_b1_backpack_w";
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_upper_w.paa",
			"442_droids\data\camo\442_b1_lower_w.paa",
		};
	};
	class 442_b1_heavy_woodland: 442_b1_heavy_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		uniformClass="442_b1_uniform_w";
		editorSubcategory="442_battledroid_inf_w";
		backpack = "442_b1_backpack_predef_heavy_w";
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_upper_w.paa",
			"442_droids\data\camo\442_b1_lower_w.paa",
		};
	};
	class 442_b1_heavy_z6_woodland: 442_b1_heavy_z6
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		uniformClass="442_b1_uniform_w";
		editorSubcategory="442_battledroid_inf_w";
		backpack = "442_b1_backpack_predef_z6_w";
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_upper_w.paa",
			"442_droids\data\camo\442_b1_lower_w.paa",
		};
	};
	class 442_b1_at_woodland: 442_b1_at_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		uniformClass="442_b1_uniform_w";
		editorSubcategory="442_battledroid_inf_w";
		backpack = "442_b1_backpack_w";
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_upper_w.paa",
			"442_droids\data\camo\442_b1_lower_w.paa",
		};
	};
	class 442_b1_sl_woodland: 442_b1_sl_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		uniformClass="442_b1_uniform_w";
		editorSubcategory="442_battledroid_inf_w";
		backpack = "442_b1_antenna_w";
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_upper_w.paa",
			"442_droids\data\camo\442_b1_lower_w.paa",
		};
	};
	
	class 442_b1_desert: 442_b1_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		uniformClass="442_b1_uniform_d";
		editorSubcategory="442_battledroid_inf_d";
		backpack="442_b1_backpack_d";
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_upper_d.paa",
			"442_droids\data\camo\442_b1_lower_d.paa",
		};
	};
	class 442_b1_heavy_desert: 442_b1_heavy_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		uniformClass="442_b1_uniform_d";
		editorSubcategory="442_battledroid_inf_d";
		backpack = "442_b1_backpack_predef_heavy_d";
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_upper_d.paa",
			"442_droids\data\camo\442_b1_lower_d.paa",
		};
	};
	class 442_b1_heavy_z6_desert: 442_b1_heavy_z6
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		uniformClass="442_b1_uniform_d";
		editorSubcategory="442_battledroid_inf_d";
		backpack = "442_b1_backpack_predef_z6_d";
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_upper_d.paa",
			"442_droids\data\camo\442_b1_lower_d.paa",
		};
	};
	class 442_b1_at_desert: 442_b1_at_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		uniformClass="442_b1_uniform_d";
		editorSubcategory="442_battledroid_inf_d";
		backpack = "442_b1_backpack_d";
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_upper_d.paa",
			"442_droids\data\camo\442_b1_lower_d.paa",
		};
	};
	class 442_b1_sl_desert: 442_b1_sl_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		uniformClass="442_b1_uniform_d";
		editorSubcategory="442_battledroid_inf_d";
		backpack = "442_b1_antenna_d";
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_upper_d.paa",
			"442_droids\data\camo\442_b1_lower_d.paa",
		};
	};
	
	class SWLB_b1_backpack;
	class SWLB_b1_antenna;
	class SWLB_b1_backpack_predef_light;
	class SWLB_b1_backpack_predef_heavy;
	
	class 442_b1_backpack_w: SWLB_b1_backpack
	{
		scope = 2;
		displayName="B-1 battle droid backpack (Woodland)";
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_backpack_w.paa"
		};
	};
	class 442_b1_backpack_d: 442_b1_backpack_w
	{
		scope = 2;
		displayName="B-1 battle droid backpack (Desert)";
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_backpack_d.paa"
		};
	};
	class 442_b1_antenna_w: SWLB_b1_antenna
	{
		scope = 2;
		displayName="B-1 battle droid antenna (Woodland)";
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_backpack_w.paa"
		};
	};
	class 442_b1_antenna_d: 442_b1_antenna_w
	{
		scope = 2;
		displayName="B-1 battle droid antenna (Desert)";
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_backpack_d.paa"
		};
	};
	class 442_b1_backpack_predef_light_w: SWLB_b1_backpack_predef_light
	{
		scope = 1;
		displayName="B-1 battle droid backpack (Woodland)";
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_backpack_w.paa"
		};
	};
	class 442_b1_backpack_predef_light_d: 442_b1_backpack_predef_light_w
	{
		scope = 1;
		displayName="B-1 battle droid backpack (Desert)";
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_backpack_d.paa"
		};
	};
	class 442_b1_backpack_predef_heavy_w: SWLB_b1_backpack_predef_heavy
	{
		scope = 1;
		displayName="B-1 battle droid backpack (Woodland)";
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_backpack_w.paa"
		};
	};
	class 442_b1_backpack_predef_heavy_d: SWLB_b1_backpack_predef_heavy
	{
		scope = 1;
		displayName="B-1 battle droid backpack (Desert)";
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_backpack_d.paa"
		};
	};
	class 442_b1_backpack_predef_z6_w: SWLB_b1_backpack_predef_heavy
	{
		scope = 1;
		displayName="B-1 battle droid backpack (Woodland)";
		class TransportMagazines
		{
			class _xx_442_e6z_mag
			{
				magazine="442_e6z_mag";
				count=5;
			};
			class _xx_SWLW_smokeRed_mag
			{
				magazine="SWLW_smokeRed_mag";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAid
			{
				name="FirstAid";
				count=3;
			};
		};
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_backpack_w.paa"
		};
	};
	class 442_b1_backpack_predef_z6_d: SWLB_b1_backpack_predef_heavy
	{
		scope = 1;
		displayName="B-1 battle droid backpack (Desert)";
		class TransportMagazines
		{
			class _xx_442_e6z_mag
			{
				magazine="442_e6z_mag";
				count=5;
			};
			class _xx_SWLW_smokeRed_mag
			{
				magazine="SWLW_smokeRed_mag";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAid
			{
				name="FirstAid";
				count=3;
			};
		};
		hiddenselectionstextures[] = 
		{
			"442_droids\data\camo\442_b1_backpack_d.paa"
		};
	};
	class 442_b1_backpack_predef_z6: SWLB_b1_backpack_predef_heavy
	{
		class TransportMagazines
		{
			class _xx_442_e6z_mag
			{
				magazine="442_e6z_mag";
				count=5;
			};
			class _xx_SWLW_smokeRed_mag
			{
				magazine="SWLW_smokeRed_mag";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAid
			{
				name="FirstAid";
				count=3;
			};
		};
	};
};

class cfgweapons
{
	class SWLB_b1_uniform
	{
		class ItemInfo;
	};
	class 442_b1_uniform_w: SWLB_b1_uniform
	{
		Displayname = "B1 Uniform (Woodland)";
		scope = 2;
		class ItemInfo: ItemInfo
		{
			uniformClass="442_b1_woodland";
		};
	};
	class 442_b1_uniform_d: 442_b1_uniform_w
	{
		displayname = "B1 Uniform (Desert)";
		scope = 2;
		class ItemInfo: ItemInfo
		{
			uniformClass="442_b1_desert";
		};
	};
	class SWLB_clone_mcVisor;
	class 442_droid_nvg: SWLB_clone_mcVisor
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayname = "[442] Clone Marshal Commander Visor 1";
		model = "";
		modelOptics = "\SWLB_clones\SWLB_clone_nvg_optic_dummy.p3d";
		visionMode[] = {"Normal", "NVG"};
		thermalMode[] = {1};
		hiddenselectionstextures[] = {""};
	};
};

class cfggroups
{
	class East
	{
		name="OPFOR";
		side=0;
		class 442_CIS
		{
			name="CIS";
			class Infantry_w
			{
				name="Infantry (Woodland)";
				class droid_fireteam
				{
					Name="Fireteam";
					side=0;
					faction="442_cis";
					icon="";
					class unit0
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="442_b1_heavy_woodland";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class unit2
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class unit3
					{
						side=0;
						vehicle="442_b1_at_woodland";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class droid_squad
				{
					Name="Squad";
					side=0;
					faction="442_cis";
					icon="";
					class unit0
					{
						side=0;
						vehicle="442_b1_sl_woodland";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="442_b1_heavy_woodland";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class unit2
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class unit3
					{
						side=0;
						vehicle="442_b1_at_woodland";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class unit4
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class unit5
					{
						side=0;
						vehicle="442_b1_heavy_z6_woodland";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class unit6
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class unit7
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
					class unit8
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-20,-20,0};
					};
				};
				class droid_AT
				{
					Name="AT Team";
					side=0;
					faction="442_cis";
					icon="";
					class unit0
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="442_b1_at_woodland";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class unit2
					{
						side=0;
						vehicle="442_b1_at_woodland";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
				};

				class droid_mtt
				{
					Name="MTT Load";
					side=0;
					faction="442_cis";
					icon="";
					class unit0
					{
						side=0;
						vehicle="442_b1_sl_woodland";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="442_b1_heavy_woodland";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class unit2
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class unit3
					{
						side=0;
						vehicle="442_b1_at_woodland";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class unit4
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class unit5
					{
						side=0;
						vehicle="442_b1_heavy_z6_woodland";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class unit6
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class unit7
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
					class unit8
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-20,-20,0};
					};
					class unit9
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={25,-25,0};
					};
					class unit10
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-25,-25,0};
					};
					class unit11
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={30,-30,0};
					};
					class unit12
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-30,-30,0};
					};
					class unit13
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={35,-35,0};
					};
					class unit14
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-35,-35,0};
					};
					class unit15
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={40,-40,0};
					};
					class unit16
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-40,-40,0};
					};
					class unit17
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={45,-45,0};
					};
					class unit18
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-45,-45,0};
					};
					class unit19
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={50,-50,0};
					};
					class unit20
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-50,-50,0};
					};
					class unit21
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={55,-55,0};
					};
					class unit22
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-55,-55,0};
					};
					class unit23
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={60,-60,0};
					};
					class unit24
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-60,-60,0};
					};

					class unit25
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={45,-45,0};
					};
					class unit26
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-45,-45,0};
					};
					class unit27
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={50,-50,0};
					};
					class unit28
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-50,-50,0};
					};

					class unit29
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={55,-55,0};
					};
					class unit30
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-55,-55,0};
					};
					class unit31
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={60,-60,0};
					};
					class unit32
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-60,-60,0};
					};

					class unit33
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={65,-65,0};
					};
					class unit34
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={-65,-65,0};
					};
					class unit35
					{
						side=0;
						vehicle="442_b1_woodland";
						rank="PRIVATE";
						position[]={70,-70,0};
					};
				};
			};
			class Infantry_d
			{
				name="Infantry (Desert)";
				class droid_fireteam
				{
					Name="Fireteam";
					side=0;
					faction="442_cis";
					icon="";
					class unit0
					{
						side=0;
						vehicle="442_b1_desert";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="442_b1_heavy_desert";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class unit2
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class unit3
					{
						side=0;
						vehicle="442_b1_at_desert";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class droid_squad
				{
					Name="Squad";
					side=0;
					faction="442_cis";
					icon="";
					class unit0
					{
						side=0;
						vehicle="442_b1_sl_desert";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="442_b1_heavy_desert";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class unit2
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class unit3
					{
						side=0;
						vehicle="442_b1_at_desert";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class unit4
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class unit5
					{
						side=0;
						vehicle="442_b1_heavy_z6_desert";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class unit6
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class unit7
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
					class unit8
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-20,-20,0};
					};
				};
				class droid_mtt
				{
					Name="MTT Load";
					side=0;
					faction="442_cis";
					icon="";
					class unit0
					{
						side=0;
						vehicle="442_b1_sl_desert";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="442_b1_heavy_desert";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class unit2
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class unit3
					{
						side=0;
						vehicle="442_b1_at_desert";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class unit4
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class unit5
					{
						side=0;
						vehicle="442_b1_heavy_z6_desert";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class unit6
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class unit7
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
					class unit8
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-20,-20,0};
					};
					class unit9
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={25,-25,0};
					};
					class unit10
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-25,-25,0};
					};
					class unit11
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={30,-30,0};
					};
					class unit12
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-30,-30,0};
					};
					class unit13
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={35,-35,0};
					};
					class unit14
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-35,-35,0};
					};
					class unit15
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={40,-40,0};
					};
					class unit16
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-40,-40,0};
					};
					class unit17
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={45,-45,0};
					};
					class unit18
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-45,-45,0};
					};
					class unit19
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={50,-50,0};
					};
					class unit20
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-50,-50,0};
					};
					class unit21
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={55,-55,0};
					};
					class unit22
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-55,-55,0};
					};
					class unit23
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={60,-60,0};
					};
					class unit24
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-60,-60,0};
					};

					class unit25
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={45,-45,0};
					};
					class unit26
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-45,-45,0};
					};
					class unit27
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={50,-50,0};
					};
					class unit28
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-50,-50,0};
					};

					class unit29
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={55,-55,0};
					};
					class unit30
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-55,-55,0};
					};
					class unit31
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={60,-60,0};
					};
					class unit32
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-60,-60,0};
					};

					class unit33
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={65,-65,0};
					};
					class unit34
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={-65,-65,0};
					};
					class unit35
					{
						side=0;
						vehicle="442_b1_desert";
						rank="PRIVATE";
						position[]={70,-70,0};
					};
				};
				class droid_AT
				{
					Name="AT Team";
					side=0;
					faction="442_cis";
					icon="";
					class unit0
					{
						side=0;
						vehicle="442_b1_desert";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="442_b1_at_desert";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class unit2
					{
						side=0;
						vehicle="442_b1_at_desert";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
				};
			};
		};
	};
};