class cfgpatches
{
    class k_misc_212fc_personal_locker
    {
        author = "KOBRA Mod Team";
        requiredAddons[]={};
		requiredVersion = 0.1;
		units[] = 
        {
            "212fc_personal_locker",
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class k_personal_locker;
    class 212fc_personal_locker: k_personal_locker
    {
        displayname = "Personal Locker [212th FC]";
        hiddenselectionstextures[] = 
        {
            "k_misc_212fc\personal_locker\data\212fc_body_co.paa",
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