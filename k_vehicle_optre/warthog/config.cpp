class cfgpatches
{
    class k_vehicle_optre_warthog
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core",
			"OPTRE_Vehicles_Warthog"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_warthog_unarmed",
			"442_warthog_mg",
			"442_warthog_at",
			"442_warthog_apc",
			"442_warthog_repair",
			"442_warthog_gauss",
			"442_warthog_aa",
			"442_warthog_tt",
			"442_cis_warthog_unarmed",
			"442_cis_warthog_at",
			"442_cis_warthog_apc",
			"442_cis_warthog_repair",
			"442_cis_warthog_gauss",
			"442_cis_warthog_aa",
			"442_cis_warthog_tt",
			"442_cis_warthog_mg"
        };
        weapons[] = {};
    };
};

class cfgvehicles 
{
    class OPTRE_M12A1_LRV; //rocket
	class OPTRE_M12_FAV_APC; //apc
	class OPTRE_M12_FAV_APC_MED; //apc medical
	class OPTRE_M914_RV; //repair
	class OPTRE_M12G1_LRV; //Gauss
	class OPTRE_M12R_AA; //AA
	class OPTRE_M813_TT; //troop transport
	class OPTRE_M12_LRV; //mg
	class OPTRE_M12_FAV; //unarmed
//Unarmed
	class 442_warthog_unarmed: OPTRE_M12_FAV
	{
		displayname = "Warthog (Unarmed)";
		scope = 2;
		side = 1;
		crew = "k_ls_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_ls_unit_p2_dc15a"
		};
		faction = "kobra_b";
		editorsubcategory = "442_g_vehicle";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"kobra\k_vehicle_optre\warthog\data\extupper_rep_co.paa",
			"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
		};
		class texturesources
		{
			class republic
			{
				displayname = "Republic";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_rep_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 44_ab: republic
			{
				displayname = "44th Attack Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_44_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
				};
			};
			class black_legion: republic
			{
				displayname = "Black Legion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_ibl_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
				};
			};
			class 125_ac: republic
			{
				displayname = "125th Assault Corps";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_125_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
			class 212_fc: republic
			{
				displayname = "212th Falcon Company";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_212_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
			class 198_ab: republic
			{
				displayname = "198th Attack Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_198_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
			class 205_rb: republic
			{
				displayname = "205th Recon Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_205_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
		};
		texturelist[] = 
		{
			"republic", 1,
			"44_ab", 1,
			"black_legion", 1,
			"125_ac", 1,
			"212_fc", 1,
			"198_ab", 1,
			"205_rb", 1
		};
	};
//MG
	class 442_warthog_mg: OPTRE_M12_LRV
	{
		displayname = "Warthog (MG)";
		scope = 2;
		side = 1;
		crew = "k_ls_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_ls_unit_p2_dc15a"
		};
		faction = "kobra_b";
		editorsubcategory = "442_g_vehicle";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = 
		{
			"kobra\k_vehicle_optre\warthog\data\extupper_rep_co.paa",
			"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
			"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa"
		};
		class texturesources
		{
			class republic
			{
				displayname = "Republic";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_rep_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 44_ab: republic
			{
				displayname = "44th Attack Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_44_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa"
				};
			};
			class black_legion: republic
			{
				displayname = "Black Legion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_ibl_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa"
				};
			};
			class 125_ac: republic
			{
				displayname = "125th Assault Corps";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_125_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa"
				};
			};
			class 212_fc: republic
			{
				displayname = "212th Falcon Company";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_212_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa"
				};
			};
			class 198_ab: republic
			{
				displayname = "198th Attack Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_198_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa"
				};
			};
			class 205_rb: republic
			{
				displayname = "205th Recon Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_205_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa"
				};
			};
		};
		texturelist[] = 
		{
			"republic", 1,
			"44_ab", 1,
			"black_legion", 1,
			"125_ac", 1,
			"212_fc", 1,
			"198_ab", 1,
			"205_rb", 1
		};
	};
//AT
	class 442_warthog_at: OPTRE_M12A1_LRV
	{
		displayname = "Warthog (Rocket)";
		scope = 2;
		side = 1;
		crew = "k_ls_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_ls_unit_p2_dc15a"
		};
		faction = "kobra_b";
		editorsubcategory = "442_g_vehicle";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = 
		{
			"kobra\k_vehicle_optre\warthog\data\extupper_rep_co.paa",
			"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
		};
		class texturesources
		{
			class republic
			{
				displayname = "Republic";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_rep_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 44_ab: republic
			{
				displayname = "44th Attack Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_44_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
				};
			};
			class black_legion: republic
			{
				displayname = "Black Legion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_ibl_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
				};
			};
			class 125_ac: republic
			{
				displayname = "125th Assault Corps";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_125_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
			class 212_fc: republic
			{
				displayname = "212th Falcon Company";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_212_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
			class 198_ab: republic
			{
				displayname = "198th Attack Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_198_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
			class 205_rb: republic
			{
				displayname = "205th Recon Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_205_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
		};
		texturelist[] = 
		{
			"republic", 1,
			"44_ab", 1,
			"black_legion", 1,
			"125_ac", 1,
			"212_fc", 1,
			"198_ab", 1,
			"205_rb", 1
		};
	};
//apc
	class 442_warthog_apc: OPTRE_M12_FAV_APC
	{
		displayname = "Warthog (APC)";
		scope = 2;
		side = 1;
		crew = "k_ls_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_ls_unit_p2_dc15a"
		};
		faction = "kobra_b";
		editorsubcategory = "442_g_vehicle";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenselectionstextures[] = 
		{
			"kobra\k_vehicle_optre\warthog\data\extupper_rep_co.paa",
			"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
			"\OPTRE_Vehicles\Warthog\data\snow\transp_lopo_snow_co.paa",
			"\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"
		};
		class texturesources
		{
			class republic
			{
				displayname = "Republic";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_rep_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\transp_lopo_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 44_ab: republic
			{
				displayname = "44th Attack Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_44_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa"
				};
			};
			class black_legion: republic
			{
				displayname = "Black Legion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_ibl_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa"
				};
			};
			class 125_ac: republic
			{
				displayname = "125th Assault Corps";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_125_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\transp_lopo_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"
				};
			};
			class 212_fc: republic
			{
				displayname = "212th Falcon Company";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_212_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\transp_lopo_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"
				};
			};
			class 198_ab: republic
			{
				displayname = "198th Attack Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_198_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\transp_lopo_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"
				};
			};
			class 205_rb: republic
			{
				displayname = "205th Recon Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_205_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\transp_lopo_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"
				};
			};
		};
		texturelist[] = 
		{
			"republic", 1,
			"44_ab", 1,
			"black_legion", 1,
			"125_ac", 1,
			"212_fc", 1,
			"198_ab", 1,
			"205_rb", 1
		};
	};
//repair
	class 442_warthog_repair: OPTRE_M914_RV
	{
		displayname = "Warthog (Repair)";
		scope = 2;
		side = 1;
		crew = "k_ls_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_ls_unit_p2_dc15a"
		};
		faction = "kobra_b";
		editorsubcategory = "442_g_vehicle";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"kobra\k_vehicle_optre\warthog\data\extupper_rep_co.paa",
			"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
		};
		class texturesources
		{
			class republic
			{
				displayname = "Republic";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_rep_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 44_ab: republic
			{
				displayname = "44th Attack Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_44_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
				};
			};
			class black_legion: republic
			{
				displayname = "Black Legion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_ibl_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
				};
			};
			class 125_ac: republic
			{
				displayname = "125th Assault Corps";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_125_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
			class 212_fc: republic
			{
				displayname = "212th Falcon Company";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_212_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
			class 198_ab: republic
			{
				displayname = "198th Attack Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_198_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
			class 205_rb: republic
			{
				displayname = "205th Recon Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_205_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
		};
		texturelist[] = 
		{
			"republic", 1,
			"44_ab", 1,
			"black_legion", 1,
			"125_ac", 1,
			"212_fc", 1,
			"198_ab", 1,
			"205_rb", 1
		};
	};
//Gauss
	class 442_warthog_gauss: OPTRE_M12G1_LRV
	{
		displayname = "Warthog (Gauss)";
		scope = 2;
		side = 1;
		crew = "k_ls_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_ls_unit_p2_dc15a"
		};
		faction = "kobra_b";
		editorsubcategory = "442_g_vehicle";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"kobra\k_vehicle_optre\warthog\data\extupper_rep_co.paa",
			"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
		};
		class texturesources
		{
			class republic
			{
				displayname = "Republic";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_rep_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 44_ab: republic
			{
				displayname = "44th Attack Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_44_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
				};
			};
			class black_legion: republic
			{
				displayname = "Black Legion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_ibl_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
				};
			};
			class 125_ac: republic
			{
				displayname = "125th Assault Corps";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_125_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
			class 212_fc: republic
			{
				displayname = "212th Falcon Company";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_212_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
			class 198_ab: republic
			{
				displayname = "198th Attack Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_198_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
			class 205_rb: republic
			{
				displayname = "205th Recon Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_205_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
		};
		texturelist[] = 
		{
			"republic", 1,
			"44_ab", 1,
			"black_legion", 1,
			"125_ac", 1,
			"212_fc", 1,
			"198_ab", 1,
			"205_rb", 1
		};
	};
//AA
	class 442_warthog_aa: OPTRE_M12R_AA
	{
		displayname = "Warthog (AA)";
		scope = 2;
		side = 1;
		crew = "k_ls_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_ls_unit_p2_dc15a"
		};
		faction = "kobra_b";
		editorsubcategory = "442_g_vehicle";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] = 
		{
			"kobra\k_vehicle_optre\warthog\data\extupper_rep_co.paa",
			"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
		};
		class texturesources
		{
			class republic
			{
				displayname = "Republic";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_rep_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 44_ab: republic
			{
				displayname = "44th Attack Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_44_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
				};
			};
			class black_legion: republic
			{
				displayname = "Black Legion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_ibl_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
				};
			};
			class 125_ac: republic
			{
				displayname = "125th Assault Corps";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_125_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
			class 212_fc: republic
			{
				displayname = "212th Falcon Company";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_212_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
			class 198_ab: republic
			{
				displayname = "198th Attack Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_198_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
			class 205_rb: republic
			{
				displayname = "205th Recon Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_205_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"
				};
			};
		};
		texturelist[] = 
		{
			"republic", 1,
			"44_ab", 1,
			"black_legion", 1,
			"125_ac", 1,
			"212_fc", 1,
			"198_ab", 1,
			"205_rb", 1
		};
	};
//TT
	class 442_warthog_tt: OPTRE_M813_TT
	{
		displayname = "Warthog (Transport)";
		scope = 2;
		side = 1;
		crew = "k_ls_unit_p2_dc15a";
		typicalCargo[]=
		{
			"k_ls_unit_p2_dc15a"
		};
		faction = "kobra_b";
		editorsubcategory = "442_g_vehicle";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = 
		{
			"kobra\k_vehicle_optre\warthog\data\extupper_rep_co.paa",
			"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa",
			"\OPTRE_Vehicles\Warthog\data\snow\transp_lopo_snow_co.paa"
		};
		class texturesources
		{
			class republic
			{
				displayname = "Republic";
				author = "Kobra Mod Team";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_rep_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\transp_lopo_snow_co.paa"
				};
				factions[] = 
				{
					"kobra_b"
				};
			};
			class 44_ab: republic
			{
				displayname = "44th Attack Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_44_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa"
				};
			};
			class black_legion: republic
			{
				displayname = "Black Legion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_ibl_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa"
				};
			};
			class 125_ac: republic
			{
				displayname = "125th Assault Corps";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_125_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\transp_lopo_snow_co.paa"
				};
			};
			class 212_fc: republic
			{
				displayname = "212th Falcon Company";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_212_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\transp_lopo_snow_co.paa"
				};
			};
			class 198_ab: republic
			{
				displayname = "198th Attack Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_198_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\transp_lopo_snow_co.paa"
				};
			};
			class 205_rb: republic
			{
				displayname = "205th Recon Battalion";
				textures[] = 
				{
					"kobra\k_vehicle_optre\warthog\data\extupper_205_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa",
					"\OPTRE_Vehicles\Warthog\data\snow\transp_lopo_snow_co.paa"
				};
			};
		};
		texturelist[] = 
		{
			"republic", 1,
			"44_ab", 1,
			"black_legion", 1,
			"125_ac", 1,
			"212_fc", 1,
			"198_ab", 1,
			"205_rb", 1
		};
	};
	
//CIS
	class 442_cis_warthog_unarmed: 442_warthog_unarmed
	{
		displayname = "Warthog (Unarmed)";
		side = 0;
		crew = "k_ls_unit_b1_e5";
		typicalCargo[]=
		{
			"k_ls_unit_b1_e5"
		};
		faction = "442_CIS";
		editorsubcategory = "442_g_vehicle";
		hiddenSelectionsTextures[] = 
		{
			"kobra\k_vehicle_optre\warthog\data\extupper_cis_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
		};
	};
	class 442_cis_warthog_at: 442_warthog_at
	{
		displayname = "Warthog (AT)";
		side = 0;
		crew = "k_ls_unit_b1_e5";
		typicalCargo[]=
		{
			"k_ls_unit_b1_e5"
		};
		faction = "442_CIS";
		editorsubcategory = "442_g_vehicle";
		hiddenSelectionsTextures[] = 
		{
			"kobra\k_vehicle_optre\warthog\data\extupper_cis_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa"
		};
	};
	class 442_cis_warthog_apc: 442_warthog_apc
	{
		displayname = "Warthog (APC)";
		side = 0;
		crew = "k_ls_unit_b1_e5";
		typicalCargo[]=
		{
			"k_ls_unit_b1_e5"
		};
		faction = "442_CIS";
		editorsubcategory = "442_g_vehicle";
		hiddenSelectionsTextures[] = 
		{
			"kobra\k_vehicle_optre\warthog\data\extupper_cis_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa"
		};
	};
	class 442_cis_warthog_repair: 442_warthog_repair
	{
		displayname = "Warthog (Repair)";
		side = 0;
		crew = "k_ls_unit_b1_e5";
		typicalCargo[]=
		{
			"k_ls_unit_b1_e5"
		};
		faction = "442_CIS";
		editorsubcategory = "442_g_vehicle";
		hiddenSelectionsTextures[] = 
		{
			"kobra\k_vehicle_optre\warthog\data\extupper_cis_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa"
		};
	};
	class 442_cis_warthog_gauss: 442_warthog_gauss
	{
		displayname = "Warthog (Gauss)";
		side = 0;
		crew = "k_ls_unit_b1_e5";
		typicalCargo[]=
		{
			"k_ls_unit_b1_e5"
		};
		faction = "442_CIS";
		editorsubcategory = "442_g_vehicle";
		hiddenSelectionsTextures[] = 
		{
			"kobra\k_vehicle_optre\warthog\data\extupper_cis_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa"
		};
	};
	class 442_cis_warthog_aa: 442_warthog_aa
	{
		displayname = "Warthog (AA)";
		side = 0;
		crew = "k_ls_unit_b1_e5";
		typicalCargo[]=
		{
			"k_ls_unit_b1_e5"
		};
		faction = "442_CIS";
		editorsubcategory = "442_g_vehicle";
		hiddenSelectionsTextures[] = 
		{
			"kobra\k_vehicle_optre\warthog\data\extupper_cis_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa"
		};
	};
	class 442_cis_warthog_tt: 442_warthog_tt
	{
		displayname = "Warthog (Transport)";
		side = 0;
		crew = "k_ls_unit_b1_e5";
		typicalCargo[]=
		{
			"k_ls_unit_b1_e5"
		};
		faction = "442_CIS";
		editorsubcategory = "442_g_vehicle";
		hiddenSelectionsTextures[] = 
		{
			"kobra\k_vehicle_optre\warthog\data\extupper_cis_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa"
		};
	};
	class 442_cis_warthog_mg : 442_warthog_mg
	{
		displayname = "Warthog (MG)";
		side = 0;
		crew = "k_ls_unit_b1_e5";
		typicalCargo[]=
		{
			"k_ls_unit_b1_e5"
		};
		faction = "442_CIS";
		editorsubcategory = "442_g_vehicle";
		hiddenSelectionsTextures[] = 
		{
			"kobra\k_vehicle_optre\warthog\data\extupper_cis_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa"
		};
	};
};