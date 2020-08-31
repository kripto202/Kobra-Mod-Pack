	class 442_recusant_zeus: House_F
	{
		author = "KOBRA Mod Team";
		model="\442_ships\recusant\rec_zeus.p3d";
		scope=2;
		scopecurator=2;
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		icon="iconObject_1x1";
		displayname="Recusant (Zeus)";
		hiddenselections[]=
		{
			"body1",
			"body2",
			"engine"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\recusant\data\body1_co.paa",
			"442_ships\recusant\data\body2_co.paa",
			"442_ships\recusant\data\engine_co.paa"
		};
	};
	class 442_recusant_zeus_d: 442_recusant_zeus
	{
		displayname="Recusant Dreadnought (Zeus)";
	};
	class 442_recusant_base: StaticShip
	{
		author = "KOBRA Mod Team";
		model="\442_ships\recusant\base.p3d";
		reversed=0;
		scope=2;
		scopecurator=1;
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		displayname="Recusant";
		mapsize=1326;
		destrType=0;
		featureType=2;
		multistructureparts[]=
		{
			
			{
				"442_rec_body1",
				"body1"
			},
			
			{
				"442_rec_body2",
				"body2"
			},
			
			{
				"442_rec_engine",
				"engine"
			}
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
	class 442_recusant_base_d: 442_recusant_base
	{
		displayname="Recusant Dreadnought";
		model="\442_ships\recusant\base_d.p3d";
		multistructureparts[]=
		{
			
			{
				"442_rec_body1_d",
				"body1"
			},
			
			{
				"442_rec_body2_d",
				"body2"
			},
			
			{
				"442_rec_engine_d",
				"engine"
			}
		};
	};
	class 442_rec_hull_base: House_F
	{
		reversed=0;
		scope=1;
		scopeCurator=0;
		author = "KOBRA Mod Team";
		displayname="rec_hull_base";
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships_parts";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		mapsize=70;
		model="\442_ships\recusant\rec_body1.p3d";
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
	class 442_rec_body1: 442_rec_hull_base
	{
		displayname="rec body1";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\recusant\rec_body1.p3d";
		hiddenselections[]=
		{
			"body1"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\recusant\data\body1_co.paa"
		};
	};
	class 442_rec_body1_d: 442_rec_body1
	{
		model="\442_ships\recusant\rec_body1_d.p3d";
	};
	class 442_rec_body2: 442_rec_hull_base
	{
		displayname="rec body2";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\recusant\rec_body2.p3d";
		hiddenselections[]=
		{
			"body2"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\recusant\data\body2_co.paa"
		};
	};
	class 442_rec_body2_d: 442_rec_body2
	{
		model="\442_ships\recusant\rec_body2_d.p3d";
	};
	class 442_rec_engine: 442_rec_hull_base
	{
		displayname="rec engine";
		scope=2;
		scopecurator=2;
		editorpreview="";
		model="\442_ships\recusant\rec_engine.p3d";
		hiddenselections[]=
		{
			"engine"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\recusant\data\engine_co.paa"
		};
	};
	class 442_rec_engine_d: 442_rec_engine
	{
		model="\442_ships\recusant\rec_engine_d.p3d";
	};