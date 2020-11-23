class cfgpatches
{
    class k_misc_9_personal_locker
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "9_personal_locker",
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class k_personal_locker;
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
                "",
                "helmet"
            }
        };
    };
};