class cfgpatches
{
    class 442_misc_porg
    {
        author = "KOBRA Mod Team";
        requiredaddons[] = 
        {
            "kobra_core"
        };
        requiredversion = 0.1;
        units[] = 
        {
            "k_porg"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class house_f;
    class k_porg: house_f
    {
        scope = 2;
        scopecurator = 2;
        author = "KOBRA Mod Team";
        displayname = "Porg";
        model = "kobra\442_misc\porg\porg.p3d";
        editorcategory="kobra";
		editorsubcategory="442_item_small";
        simulation="thingx";
		armor=0.1;
		epeImpulsedamagecoef=0.1;
        sound = "soundporg";
        class destructionEffects {};
        class hitpoints
        {
            class hitbody
            {
                class hitbody
                {
                    armor = 0.1;
                    convexComponent = "hitbody";
                    depends = "total";
                    explosionShielding = 0.1;
                    material = 1;
                    name = "hitbody";
                    passthrough = 1;
                    visual="zbytek";
                    radius = 0.1;
                    hitpoint = "hitbody";
                };
            };
        };
        class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
			init="''";
		};
        soundporg[] = 
        {
            "porg1", 0.1,
            "porg2", 0.1,
            "porg3", 0.3,
            "porg4", 0.3,
            "porg5", 0.2
        };
        porg1[] = 
        {
            "kobra\442_misc\porg\sounds\porg1.wss",
            0.316228,
			1
        };
        porg2[] = 
        {
            "kobra\442_misc\porg\sounds\porg2.wss",
            0.316228,
			1
        };
        porg3[] = 
        {
            "kobra\442_misc\porg\sounds\porg3.wss",
            0.316228,
			1
        };
        porg4[] = 
        {
            "kobra\442_misc\porg\sounds\porg4.wss",
            0.316228,
			1
        };
        porg5[] = 
        {
            "kobra\442_misc\porg\sounds\porg5.wss",
            0.316228,
			1
        };
    };
};