    class 442_shield_100x100: House_F 
    {
        scope = 2;
        scopecurator = 2;
        author = "kripto202";
        displayName = "Energy Shield (100x100)";
        model = "442_misc\shield\100x100.p3d";
        editorcategory = "kobra";
        editorsubcategory = "442_item";
        armor = 100000000000000;
        vehicleClass = "Structures";
        destrtype = "DestructNo";
        hiddenselections[] = 
        {
            "camo1"
        };
        hiddenselectionstextures[] = 
        {
            "442_misc\shield\data\camo1_ca.paa"
        };
    };
	class 442_shield_70x70: 442_shield_100x100
	{
		displayName = "Energy Shield (70x70)";
        model = "442_misc\shield\70x70.p3d";
	};
	class 442_shield_50x50: 442_shield_100x100
	{
		displayName = "Energy Shield (50x50)";
        model = "442_misc\shield\50x50.p3d";
	};
	class 442_shield_50x25: 442_shield_100x100
	{
		displayName = "Energy Shield (50x25)";
        model = "442_misc\shield\50x25.p3d";
	};
	class 442_shield_25x25: 442_shield_100x100
	{
		displayName = "Energy Shield (25x25)";
        model = "442_misc\shield\25x25.p3d";
	};
	class 442_shield_25x10: 442_shield_100x100
	{
		displayName = "Energy Shield (25x10)";
        model = "442_misc\shield\25x10.p3d";
	};
	class 442_shield_10x10: 442_shield_100x100
	{
		displayName = "Energy Shield (10x10)";
        model = "442_misc\shield\10x10.p3d";
	};
	class 442_shield_5x5: 442_shield_100x100
	{
		displayName = "Energy Shield (5x5)";
        model = "442_misc\shield\5x5.p3d";
	};
    class 442_ray_100x100: 442_shield_100x100
    {
        displayName = "Ray Shield (100x100)";
        model = "442_misc\shield\100x100_r.p3d";
        hiddenselectionstextures[] = 
        {
            "442_misc\shield\data\camo1_red_ca.paa"
        };
    };
	class 442_ray_70x70: 442_ray_100x100
	{
		displayName = "Ray Shield (70x70)";
        model = "442_misc\shield\70x70_r.p3d";
	};
	class 442_ray_50x50: 442_ray_100x100
	{
		displayName = "Ray Shield (50x50)";
        model = "442_misc\shield\50x50_r.p3d";
	};
	class 442_ray_50x25: 442_ray_100x100
	{
		displayName = "Ray Shield (50x25)";
        model = "442_misc\shield\50x25_r.p3d";
	};
	class 442_ray_25x25: 442_ray_100x100
	{
		displayName = "Ray Shield (25x25)";
        model = "442_misc\shield\25x25_r.p3d";
	};
	class 442_ray_25x10: 442_ray_100x100
	{
		displayName = "Ray Shield (25x10)";
        model = "442_misc\shield\25x10_r.p3d";
	};
	class 442_ray_10x10: 442_ray_100x100
	{
		displayName = "Ray Shield (10x10)";
        model = "442_misc\shield\10x10_r.p3d";
	};
	class 442_ray_5x5: 442_ray_100x100
	{
		displayName = "Ray Shield (5x5)";
        model = "442_misc\shield\5x5_r.p3d";
	};
	
	class 442_quasar_shield: house_f
	{
		scope = 2;
		scopecurator = 1;
		author = "kripto202";
		displayname = "Quasar Hanger Shield";
		editorcategory = "kobra";
        editorsubcategory = "442_item";
        armor = 100000000000000;
        vehicleClass = "Structures";
        destrtype = "DestructNo";
		model = "442_misc\shield\quasar_shield_base.p3d"
		multistructureparts[] = 
		{
			{
				"442_quasar_shield_1",
				"shield1"
			},
			{
				"442_quasar_shield_2",
				"shield2"
			},
			{
				"442_quasar_shield_3",
				"shield3"
			},
			{
				"442_quasar_shield_4",
				"shield4"
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
	class 442_quasar_shield_1: house_f
	{
		reversed=0;
		scope=1;
		scopeCurator=1;
		author="kripto202";
		displayname="quasar shield piece 1";
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_item";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		mapsize=70;
		model="\442_misc\shield\quasar_shield_1.p3d";
		armor=1000000000000000000;
		hideUnitInfo=1;
		nameSound="ship";
		featureType=2;
		hiddenselections[] = 
        {
            "camo1"
        };
        hiddenselectionstextures[] = 
        {
            "442_misc\shield\data\camo1_ca.paa"
        };
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
	class 442_quasar_shield_2: 442_quasar_shield_1
	{
		displayname="quasar shield piece 2";
		model="\442_misc\shield\quasar_shield_2.p3d";
	};
	class 442_quasar_shield_3: 442_quasar_shield_1
	{
		displayname="quasar shield piece 3";
		model="\442_misc\shield\quasar_shield_3.p3d";
	};
	class 442_quasar_shield_4: 442_quasar_shield_1
	{
		displayname="quasar shield piece 4";
		model="\442_misc\shield\quasar_shield_4.p3d";
	};