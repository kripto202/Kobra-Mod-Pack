    class 442_box: B_supplyCrate_F 
	{
		scope = 2;
		author = "KOBRA Mod Team";
		displayName = "[442] Weapons Box";
		model = "\442_misc\box\box.p3d";
		editorcategory = "kobra";
		editorsubcategory = "442_supplies";
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
	class 442_box2: 442_box
	{
		displayname = "Box 2";
		model = "\442_misc\box\box2.p3d";
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"442_misc\box\data\box2_co.paa"
		};
		slingLoadCargoMemoryPoints[]=
		{
			"CargoSling1",
			"CargoSling2",
			"CargoSling3",
			"CargoSling4"
		};
	};
	class 442_box4: 442_box2
	{
		displayname = "Box 4";
		model = "442_misc\box\box4.p3d";
		hiddenselectionstextures[] = 
		{
			"442_misc\box\data\box4_co.paa"
		};
	};
	class 442_box5_1: 442_box2
	{
		displayname = "Box 5 [ADV Medical]";
		model = "442_misc\box\box5.p3d";
		hiddenselectionstextures[] = 
		{
			"442_misc\box\data\box5_co.paa"
		};
		maximumLoad=2000;
		class transportItems
		{
			class ACE_fieldDressing
			{
				name = "ACE_fieldDressing";
				count = 25;
			};
			class ACE_packingBandage: ACE_fieldDressing
			{
				name = "ACE_packingBandage";
			};
			class ACE_elasticBandage: ACE_fieldDressing
			{
				name = "ACE_elasticBandage";
			};
			class ACE_quikClot: ACE_elasticBandage
			{
				name = "ACE_quikClot";
			};
			class ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 15;
			};
			class ACE_splint: ACE_tourniquet
			{
				name = "ACE_splint";
			};
			class ACE_morphine: ACE_tourniquet
			{
				name = "ACE_morphine";
			};
			class ACE_adenosine: ACE_tourniquet
			{
				name = "ACE_adenosine";
			};
			class ACE_epinephrine: ACE_tourniquet
			{
				name = "ACE_epinephrine";
			};
			class ACE_plasmaIV
			{
				name = "ACE_plasmaIV";
				count = 7;
			};
			class ACE_plasmaIV_500: ACE_plasmaIV
			{
				name = "ACE_plasmaIV_500";
			};
			class ACE_plasmaIV_250: ACE_plasmaIV
			{
				name = "ACE_plasmaIV_250";
			};
			class ACE_salineIV: ACE_plasmaIV
			{
				name = "ACE_salineIV";
			};
			class ACE_salineIV_500: ACE_plasmaIV
			{
				name = "ACE_salineIV_500";
			};
			class ACE_salineIV_250: ACE_plasmaIV
			{
				name = "ACE_salineIV_250";
			};
			class ACE_bloodIV: ACE_plasmaIV
			{
				name = "ACE_bloodIV";
			};
			class ACE_bloodIV_500: ACE_plasmaIV
			{
				name = "ACE_bloodIV_500";
			};
			class ACE_bloodIV_250: ACE_plasmaIV
			{
				name = "ACE_bloodIV_250";
			};
			class ACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 3;
			};
			class ACE_surgicalKit
			{
				name = "ACE_surgicalKit";
				count = 2;
			};
			class ACE_bodyBag
			{
				name = "ACE_bodyBag";
				count = 5;
			};
		};
	};
	class 442_box5_2: 442_box5_1
	{
		displayname = "Box 5 [Basic Medical]";
		class transportItems
		{
			class ACE_fieldDressing
			{
				name = "ACE_fieldDressing";
				count = 50;
			};
			class ACE_morphine
			{
				name = "ACE_morphine";
				count = 25;
			};
			class ACE_epinephrine: ACE_morphine
			{
				name = "ACE_epinephrine";
			};
			class ACE_bloodIV
			{
				name = "ACE_bloodIV";
				count = 15;
			};
			class ACE_bloodIV_500: ACE_bloodIV
			{
				name = "ACE_bloodIV_500";
			};
			class ACE_bloodIV_250: ACE_bloodIV
			{
				name = "ACE_bloodIV_250";
			};
			class ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 10;
			};
			class ACE_splint: ACE_tourniquet
			{
				name = "ACE_splint";
			};
			class ACE_bodyBag: ACE_tourniquet
			{
				name = "ACE_bodyBag";
			};
		};
	};
	class 442_box6: 442_box2
	{
		displayname = "Box 6";
		model = "442_misc\box\box6.p3d";
		hiddenselectionstextures[] = 
		{
			"442_misc\box\data\box6_co.paa"
		};
	};
	class 442_box7: 442_box2
	{
		displayname = "Box 7";
		model = "442_misc\box\box7.p3d";
		hiddenselectionstextures[] = 
		{
			"442_misc\box\data\box7_co.paa"
		};
	};
	class 442_box8: 442_box2
	{
		displayname = "Box 8";
		model = "442_misc\box\box8.p3d";
		hiddenselectionstextures[] = 
		{
			"442_misc\box\data\box8_co.paa"
		};
	};
	class 442_box9: 442_box2
	{
		displayname = "Box 9";
		model = "442_misc\box\box9.p3d";
		hiddenselectionstextures[] = 
		{
			"442_misc\box\data\box9_co.paa"
		};
	};
	class 442_box10: 442_box2
	{
		displayname = "Box 10";
		model = "442_misc\box\box10.p3d";
		hiddenselectionstextures[] = 
		{
			"442_misc\box\data\box10_co.paa"
		};
	};