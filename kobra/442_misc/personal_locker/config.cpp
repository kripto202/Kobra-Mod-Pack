class cfgpatches
{
    class 442_misc_personal_locker
    {
        author = "KOBRA Mod Team";
        requiredAddons[]={};
		requiredVersion = 0.1;
		units[] = 
        {
            
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class House_F;
    class k_personal_locker: House_F
	{
		scope=2;
		scopecurator=2;
		author = "KOBRA Mod Team";
		displayName="Personal Locker (P2)";
		model="\442_misc\personal_locker\personal_locker.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		vehicleClass="Structures";
		hiddenselections[]=
		{
			"camo1",
			"screen",
			"pictures"
		};
		hiddenselectionstextures[]=
		{
			"442_misc\personal_locker\data\body_co.paa",
			"442_misc\personal_locker\data\screen_co.paa",
			"442_misc\personal_locker\data\picture1_co.paa"
		};
        multistructureparts[] = 
        {
            {
                "",
                "helmet"
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
        class useractions
        {
            class open_locker
            {
                displayname = "Open Locker";
                position = "door_pos";
                priority = "1";
                radius = 3;
                onlyforplayer = 0;
                condition = "this animationsourcephase ""open_locker"" == 0";
                statement = "this animatesource [""open_locker"", 1];"
            };
            class close_locker: open_locker
            {
                displayname = "Close Locker";
                condition = "this animationsourcephase ""open_locker"" == 1";
                statement = "this animatesource [""open_locker"", 0];"
            };
        };
        class animationsources
        {
            class open_locker
            {
                source = "user";
                animPeriod = 2;
                initphase = 0;
            };
        };
        animationlist[] = 
        {
            "open_locker", 0,
            "close_locker", 0
        };
        class simpleobject
        {
            animate[] = 
            {
                {"open_locker", 0},
                {"close_locker", 0},
            };
            hide[] = {};
            verticaloffset = 0;
            verticaloffsetworld = 0;
        };
	};
//////////these need to be removed later///////////
    class bl_personal_locker: k_personal_locker
    {
        displayname = "Personal Locker [Black Legion]";
        hiddenselectionstextures[] = 
        {
            "442_misc\personal_locker\data\bl_body_co.paa",
			"442_misc\personal_locker\data\screen_co.paa",
			"442_misc\personal_locker\data\picture1_co.paa"
        };
    };
    class 212fc_personal_locker: k_personal_locker
    {
        displayname = "Personal Locker [212th FC]";
        hiddenselectionstextures[] = 
        {
            "442_misc\personal_locker\data\212fc_body_co.paa",
			"442_misc\personal_locker\data\screen_co.paa",
			"442_misc\personal_locker\data\picture1_co.paa"
        };
    };
    class 9_personal_locker: k_personal_locker
    {
        displayname = "Personal Locker [9th AC]";
        hiddenselectionstextures[] = 
        {
            "442_misc\personal_locker\data\9_body_co.paa",
			"442_misc\personal_locker\data\screen_co.paa",
			"442_misc\personal_locker\data\picture1_co.paa"
        };
        multistructureparts[] = 
        {
            {
                "k_headgear_9_p2_shiny",
                "helmet"
            }
        };
    };
    class 44_personal_locker: k_personal_locker
    {
        displayname = "Personal Locker [44th AB]";
        hiddenselectionstextures[] = 
        {
            "442_misc\personal_locker\data\44_body_co.paa",
			"442_misc\personal_locker\data\screen_co.paa",
			"442_misc\personal_locker\data\picture1_co.paa"
        };
    };
    class 44_personal_locker_kripto: k_personal_locker
    {
        displayname = "Personal Locker (Kripto)";
        hiddenselectionstextures[]=
		{
			"442_misc\personal_locker\data\44_body_co.paa",
			"442_misc\personal_locker\data\screen_kripto_co.paa",
			"442_misc\personal_locker\data\picture1_co.paa"
		};
        multistructureparts[] = 
        {
            {
                "k_headgear_44_kripto",
                "helmet"
            }
        };
    };
};