    class 442_Box: B_supplyCrate_F 
	{
		scope = 2;
		author = "KOBRA Mod Team";
		displayName = "[442] Weapons Box";
		model = "\442_misc\box\box.p3d";
		editorcategories = "kobra";
		editorsubcategories = "442_item";
		maximumLoad=4000;
		memoryPointSupply="doplnovani";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class transportItems
		{
			class ace_earplugs
			{
				name = "ACE_EarPlugs";
				count = 20;
			};
			class ace_clacker
			{
				name = "ACE_Clacker";
				count = 2;
			};
			class ace_binocular
			{
				name = "swlb_clone_binocular";
				count = 5;
			};
		};
		class transportWeapons
		{
			class 442_dc15a
			{
				weapon = "442_dc15a";
				count = 5;
			};
			class 442_dc15s
			{
				weapon = "442_dc15s";
				count = 5;
			};
			class 442_dc17
			{
				weapon = "442_dc17";
				count = 5;
			};

		};
		class transportMagazines
		{
			class SWLW_beltgrenade_mag
			{
				magazine = "SWLW_beltgrenade_mag";
				count = 10;
			};
			class smokeshellblue
			{
				magazine = "smokeshellblue";
				count = 10;
			};
			class smokeshellred
			{
				magazine = "smokeshellred";
				count = 10;
			};
			class smokeshell
			{
				magazine = "smokeshell";
				count = 10;
			};
			class ace_m14
			{
				magazine = "ace_m14";
				count = 10;
			};
			class chemlight_blue
			{
				magazine = "chemlight_blue";
				count = 10;
			};
			class chemlight_red
			{
				magazine = "chemlight_red";
				count = 10;
			};
			class democharge_remote_mag
			{
				magazine = "democharge_remote_mag";
				count = 2;
			};
		};
	};