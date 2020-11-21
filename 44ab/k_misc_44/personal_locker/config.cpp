class cfgpatches
{
    class k_misc_44_personal_locker
    {
        author = "KOBRA Mod Team";
        requiredAddons[]={};
		requiredVersion = 0.1;
		units[] = 
        {
            "44_personal_locker",
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class k_personal_locker;
    class 44_personal_locker: k_personal_locker
    {
        displayname = "Personal Locker [44th AB]";
        hiddenselectionstextures[] = 
        {
            "k_misc_44\personal_locker\data\44_body_co.paa",
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

    class 44_personal_locker_kripto: k_personal_locker
    {
        displayname = "Personal Locker (Kripto)";
        hiddenselectionstextures[]=
		{
			"k_misc_44\personal_locker\data\44_body_co.paa",
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