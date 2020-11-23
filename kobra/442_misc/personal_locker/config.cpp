class cfgpatches
{
    class 442_misc_personal_locker
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "k_personal_locker",
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
		displayName="Personal Locker";
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
                animPeriod = 1;
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
};