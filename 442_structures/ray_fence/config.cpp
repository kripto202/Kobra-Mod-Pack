class cfgpatches
{
    class 442_structures_ray_fence
    {
        author = "KOBRA Mod Team";
         requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "",
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class House_f;
    class k_fence_corner: House_f
    {
        scope = 2;
        scopecurator = 2;
        author = "Kobra Mod Team";
        displayname = "Fence Stand (Corner)";
        model = "\kobra\442_structures\ray_fence\k_fence_corner.p3d";
        destrType="DestructNo";
		editorcategory="kobra";
        editorsubcategory = "442_ray_fence";
        vehicleClass="Structures";
        hiddenselections[] = {};
        hiddenselectionstextures[] = {};
    };
    class k_fence_stand1: k_fence_corner
    {
        displayname = "Fence Stand (Connector)";
        model = "\kobra\442_structures\ray_fence\k_fence_stand1.p3d";
    };
    class k_fence_stand2: k_fence_corner
    {
        displayname = "Fence Stand (End)";
        model = "\kobra\442_structures\ray_fence\k_fence_stand2.p3d";
    };
    class k_fence_ray_5m: k_fence_corner
    {
        displayname = "Ray (5m)";
        model = "\kobra\442_structures\ray_fence\k_ray_5m.p3d";
        class animationsources
        {
            class hide_ray
            {
                displayname = "Show Ray Fence";
                author = "Kobra Mod Team";
                source = "user";
                animperiod = 0.001;
                initphase = 1;
            };
        };
        class attributes
        {
            class hide_ray
            {
                displayname="Show Ray Fence";
				property="hide_ray";
				control="CheckboxNumber";
				defaultvalue=1;
				expression="_this animateSource ['%s',_value,true]";
            };
        };
    };
    class k_fence_ray_10m: k_fence_ray_5m
    {
        displayname = "Ray (10m)";
        model = "\kobra\442_structures\ray_fence\k_ray_10m.p3d";
    };
    class k_fence_ray_stand_5m: k_fence_ray_10m
    {
        displayname = "Fence Ray (5m)";
        model = "\kobra\442_structures\ray_fence\k_ray_fence_5m.p3d";
    };
    class k_fence_ray_stand_10m: k_fence_ray_10m
    {
        displayname = "Fence Ray (10m)";
        model = "\kobra\442_structures\ray_fence\k_ray_fence_10m.p3d";
    };
    class k_fence_ray_stand_corner: k_fence_ray_10m
    {
        displayname = "Fence Ray (Corner)";
        model = "\kobra\442_structures\ray_fence\k_ray_fence_corner.p3d";
    };
    class k_fence_ray_stand_gate: k_fence_ray_10m
    {
        displayname = "Fence Ray (Gate)";
        model = "\kobra\442_structures\ray_fence\k_ray_fence_gate.p3d";
        class animationsources: animationsources
        {
            class hide_screen
            {
                displayname = "switch screen";
                property = "hide_screen1";
                author = "Kobra Mod Team";
                source = "user";
                animperiod = 0.001;
                initphse = 1;
            };
        };
        class useractions
        {
            class open_gate1
            {
                displayname = "Unlock Gate";
                position = "pos_gate1";
                radius = 5;
                onlyforplayer = 0;
                condition = "this animationsourcephase ""hide_ray"" == 1;";
                statement = "this animatesource [""hide_ray"",0]; this animatesource [""hide_screen"",0];";
            };
            class close_gate1: open_gate1
            {
                displayname = "Lock Gate";
                condition = "this animationsourcephase ""hide_ray"" == 0;";
                statement = "this animatesource [""hide_ray"",1]; this animatesource [""hide_screen"",1];";
            };
            class open_gate2: open_gate1
            {
                displayname = "Unlock Gate";
                position = "pos_gate2";
                radius = 5;
                onlyforplayer = 0;
            };
            class close_gate2: close_gate1
            {
                displayname = "Lock Gate";
                position = "pos_gate2";
            };
        };
    };
};