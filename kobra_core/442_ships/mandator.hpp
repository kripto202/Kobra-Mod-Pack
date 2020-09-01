    class 442_mandator_base: StaticShip
	{
		author ="Kobra Mod Team";
		model="\442_ships\mandator\base.p3d";
		reversed=0;
		scope=2;
		scopecurator=1;
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		displayname="Mandator II";
		mapsize=3000;
		destrType=0;
		featureType=2;
		multistructureparts[]=
		{
			
			{
				"442_mandator_body1_1",
				"body1_1"
			},
			{
				"442_mandator_body2_1",
				"body2_1"
			},
			{
				"442_mandator_body2_2",
				"body2_2"
			},
			{
				"442_mandator_body3_1",
				"body3_1"
			},
			{
				"442_mandator_body3_2",
				"body3_2"
			},
			{
				"442_mandator_body4_1",
				"body4_1"
			},
			{
				"442_mandator_body4_2",
				"body4_2"
			},
			{
				"442_mandator_body4_3",
				"body4_3"
			},
			{
				"442_mandator_body4_4",
				"body4_4"
			},
			{
				"442_mandator_body4_5",
				"body4_5"
			},
			{
				"442_mandator_body4_6",
				"body4_6"
			},
			{
				"442_mandator_body4_7",
				"body4_7"
			},
			{
				"442_mandator_body4_8",
				"body4_8"
			},
			{
				"442_mandator_engine_1",
				"engine_1"
			},
			{
				"442_mandator_engine_2",
				"engine_2"
			},
			{
				"442_mandator_engine_3",
				"engine_3"
			},
			{
				"442_mandator_hanger1_1",
				"hanger1_1"
			},
			{
				"442_mandator_hanger2_1",
				"hanger2_1"
			},
			{
				"442_mandator_hanger2_2",
				"hanger2_2"
			},
			{
				"442_mandator_hanger3_1",
				"hanger3_1"
			},
			{
				"442_mandator_hanger3_2",
				"hanger3_2"
			},
			{
				"442_mandator_hanger4",
				"hanger4"
			},
		};
		class Eventhandlers
		{
			init="_this call BIS_fnc_Destroyer01Init;";
			attributesChanged3DEN="_this call BIS_fnc_Destroyer01PosUpdate;";
			dragged3DEN="_this call BIS_fnc_Destroyer01PosUpdate;";
			registeredToWorld3DEN="_this call BIS_fnc_Destroyer01EdenInit;";
			unregisteredFromWorld3DEN="_this call BIS_fnc_Destroyer01EdenDelete;";
		};
	};
	class 442_mandator_hull_base: House_F
	{
		reversed=0;
		scope=1;
		scopeCurator=0;
		author ="Kobra Mod Team";
		displayname="mandator_hull_base";
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships_parts";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		mapsize=70;
		model="\442_ships\lucrehulk\1.p3d";
		armor=1000000000000000000;
		hideUnitInfo=1;
		nameSound="ship";
		featureType=2;
		class Hitpoints
		{
		};
		class DestructionEffects
		{
		};
		class Damage
		{
			tex[]={};
			mat[]={};
		};
		class AnimationSources
		{
		};
		class UserActions
		{
		};
	};
	class 442_mandator_body1_1: 442_mandator_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="mandator body1_1";
		editorpreview="";
		model="\442_ships\mandator\body1_1.p3d";
		hiddenselections[]=
		{
			"body1"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\mandator\data\body1_co.paa"
		};
	};
	class 442_mandator_body2_1: 442_mandator_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="mandator body2_1";
		editorpreview="";
		model="\442_ships\mandator\body2_1.p3d";
		hiddenselections[]=
		{
			"body2"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\mandator\data\body2_co.paa"
		};
	};
	class 442_mandator_body2_2: 442_mandator_body2_1
	{
		displayname = "mandator body2_2";
		model="\442_ships\mandator\body2_2.p3d";
	};
	class 442_mandator_body3_1: 442_mandator_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="mandator body3_1";
		editorpreview="";
		model="\442_ships\mandator\body3_1.p3d";
		hiddenselections[]=
		{
			"body3"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\mandator\data\body3_co.paa"
		};
	};
	class 442_mandator_body3_2: 442_mandator_body3_1
	{
		displayname = "mandator body3_2";
		model="\442_ships\mandator\body3_2.p3d";
	};
	class 442_mandator_body4_1: 442_mandator_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="mandator body4_1";
		editorpreview="";
		model="\442_ships\mandator\body4_1.p3d";
		hiddenselections[]=
		{
			"body4"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\mandator\data\body4_co.paa"
		};
	};
	class 442_mandator_body4_2: 442_mandator_body4_1
	{
		displayname = "mandator body4_2";
		model="\442_ships\mandator\body4_2.p3d";
	};
	class 442_mandator_body4_3: 442_mandator_body4_1
	{
		displayname = "mandator body4_3";
		model="\442_ships\mandator\body4_3.p3d";
	};
	class 442_mandator_body4_4: 442_mandator_body4_1
	{
		displayname = "mandator body4_4";
		model="\442_ships\mandator\body4_4.p3d";
	};
	class 442_mandator_body4_5: 442_mandator_body4_1
	{
		displayname = "mandator body4_5";
		model="\442_ships\mandator\body4_5.p3d";
	};
	class 442_mandator_body4_6: 442_mandator_body4_1
	{
		displayname = "mandator body4_6";
		model="\442_ships\mandator\body4_6.p3d";
	};
	class 442_mandator_body4_7: 442_mandator_body4_1
	{
		displayname = "mandator body4_7";
		model="\442_ships\mandator\body4_7.p3d";
	};
	class 442_mandator_body4_8: 442_mandator_body4_1
	{
		displayname = "mandator body4_8";
		model="\442_ships\mandator\body4_8.p3d";
	};
	class 442_mandator_engine_1: 442_mandator_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="mandator engine_1";
		editorpreview="";
		model="\442_ships\mandator\engine_1.p3d";
		hiddenselections[]=
		{
			"engine"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\mandator\data\engine_co.paa"
		};
	};
	class 442_mandator_engine_2: 442_mandator_engine_1
	{
		displayname = "mandator engine_2";
		model="\442_ships\mandator\engine_2.p3d";
	};
	class 442_mandator_engine_3: 442_mandator_engine_1
	{
		displayname = "mandator engine_3";
		model="\442_ships\mandator\engine_3.p3d";
	};
	class 442_mandator_hanger1_1: 442_mandator_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="mandator hanger1_1";
		editorpreview="";
		model="\442_ships\mandator\hanger1_1.p3d";
		hiddenselections[]=
		{
			"hanger1"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\mandator\data\hanger1_co.paa"
		};
	};
	class 442_mandator_hanger2_1: 442_mandator_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="mandator hanger2_1";
		editorpreview="";
		model="\442_ships\mandator\hanger2_1.p3d";
		hiddenselections[]=
		{
			"hanger2"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\mandator\data\hanger2_co.paa"
		};
	};
	class 442_mandator_hanger2_2: 442_mandator_hanger2_1
	{
		displayname = "mandator hanger2_2";
		model="\442_ships\mandator\hanger2_2.p3d";
	};
	class 442_mandator_hanger3_1: 442_mandator_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="mandator hanger3_1";
		editorpreview="";
		model="\442_ships\mandator\hanger3_1.p3d";
		hiddenselections[]=
		{
			"hanger3"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\mandator\data\hanger3_co.paa"
		};
	};
	class 442_mandator_hanger3_2: 442_mandator_hanger3_1
	{
		displayname = "mandator hanger3_2";
		model="\442_ships\mandator\hanger3_2.p3d";
	};
	class 442_mandator_hanger4: 442_mandator_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="mandator hanger4";
		editorpreview="";
		model="\442_ships\mandator\hanger4.p3d";
		hiddenselections[]=
		{
			"hanger4"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\mandator\data\hanger4_co.paa"
		};
	};