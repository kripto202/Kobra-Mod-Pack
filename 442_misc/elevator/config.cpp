class cfgpatches
{
    class 442_misc_elevator
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "k_elevator1",
            "k_elevator2",
            "k_elevator3",
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
	class house_f;
	class k_elevator1: house_f
	{
		scope=2;
		scopecurator=2;
		author = "Kobra Mod Team";
		displayName="Elevator 1";
		model="\kobra\442_misc\elevator\elevator_test.p3d";
		editorcategory="kobra";
		editorsubcategory="442_hallway";
		vehicleClass="Structures";
		destrtype="DestructNo";
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		class animationsources
		{
			class elevator_up
			{
				source = "user";
				animPeriod = 10;
				initphase = 0;
			};
		};
		animationlist[] = 
		{
			"elevator_up",
			0
		};
		class useractions
		{
			class elevator_up
			{
				displayname = "UP";
				position = "button1_pos";
				radius = 3;
				onlyforplayer = 0;
				priority=101;
				condition="this animationsourcephase ""elevator_up"" == 0";
				statement="this animatesource [""elevator_up"", 1];";
			};
			class elevator_down: elevator_up
			{
				displayname = "DOWN";
				position = "button2_pos";
				condition="this animationsourcephase ""elevator_up"" == 1";
				statement="this animatesource [""elevator_up"", 0];";
			};
		};
	};
	class k_elevator2: k_elevator1
	{
		displayName="Elevator 2";
		class animationsources
		{
			class elevator_up
			{
				source = "user";
				animPeriod = 15;
				initphase = 0;
			};
		};
	};
	class k_elevator3: k_elevator1
	{
		displayName="Elevator 3";
		class animationsources
		{
			class elevator_up
			{
				source = "user";
				animPeriod = 20;
				initphase = 0;
			};
		};
	};
};