class 442_hardcell_base: StaticShip
	{
		author="kripto202";
		model="\442_ships\hardcell\base.p3d";
		reversed=0;
		scope=2;
		scopecurator=1;
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		displayname="Hardcell Transport";
		mapsize=3000;
		destrType=0;
		featureType=2;
		multistructureparts[]=
		{
			
			{
				"442_hardcell_body",
				"body"
			},
			
			{
				"442_hardcell_engine1",
				"engine1"
			},
			
			{
				"442_hardcell_engine2",
				"engine2"
			},
			
			{
				"442_hardcell_engine3",
				"engine3"
			},
			
			{
				"442_hardcell_leg1",
				"leg1"
			},
			
			{
				"442_hardcell_leg2",
				"leg2"
			},
			
			{
				"442_hardcell_leg3",
				"leg3"
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
	class 442_hardcell_hull_base: House_F
	{
		reversed=0;
		scope=1;
		scopeCurator=0;
		author="kripto202";
		displayname="hardcell_hull_base";
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_ships_parts";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		mapsize=70;
		model="\442_ships\hardcell\1.p3d";
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
	class 442_hardcell_body: 442_hardcell_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="hardcell body";
		editorpreview="";
		model="\442_ships\hardcell\body.p3d";
		hiddenselections[]=
		{
			"upper"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\hardcell\data\upper_co.paa"
		};
	};
	class 442_hardcell_engine1: 442_hardcell_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="hardcell engine1";
		editorpreview="";
		model="\442_ships\hardcell\engine1.p3d";
		hiddenselections[]=
		{
			"lower"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\hardcell\data\lower_co.paa"
		};
	};
	class 442_hardcell_engine2: 442_hardcell_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="hardcell engine2";
		editorpreview="";
		model="\442_ships\hardcell\engine2.p3d";
		hiddenselections[]=
		{
			"lower"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\hardcell\data\lower_co.paa"
		};
	};
	class 442_hardcell_engine3: 442_hardcell_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="hardcell engine3";
		editorpreview="";
		model="\442_ships\hardcell\engine3.p3d";
		hiddenselections[]=
		{
			"lower"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\hardcell\data\lower_co.paa"
		};
	};
	class 442_hardcell_leg1: 442_hardcell_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="hardcell leg1";
		editorpreview="";
		model="\442_ships\hardcell\leg1.p3d";
		hiddenselections[]=
		{
			"lower"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\hardcell\data\lower_co.paa"
		};
	};
	class 442_hardcell_leg2: 442_hardcell_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="hardcell leg2";
		editorpreview="";
		model="\442_ships\hardcell\leg2.p3d";
		hiddenselections[]=
		{
			"lower"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\hardcell\data\lower_co.paa"
		};
	};
	class 442_hardcell_leg3: 442_hardcell_hull_base
	{
		scope=2;
		scopeCurator=2;
		displayname="hardcell leg3";
		editorpreview="";
		model="\442_ships\hardcell\leg3.p3d";
		hiddenselections[]=
		{
			"lower"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\hardcell\data\lower_co.paa"
		};
	};