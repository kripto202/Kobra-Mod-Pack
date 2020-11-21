class cfgpatches
{
    class k_misc_bl_personal_locker
    {
        author = "KOBRA Mod Team";
        requiredAddons[]={};
		requiredVersion = 0.1;
		units[] = 
        {
            "bl_personal_locker",
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class k_personal_locker;
    class bl_personal_locker: k_personal_locker
    {
        displayname = "Personal Locker [Black Legion]";
        hiddenselectionstextures[] = 
        {
            "k_misc_bl\personal_locker\data\bl_body_co.paa",
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