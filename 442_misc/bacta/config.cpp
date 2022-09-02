class cfgpatches
{
    class 442_misc_bacta_tank
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_bacta_tank",
            "442_bacta_tank_w"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class House_F;
    class 442_bacta_tank: house_f
	{
		scope=2;
		scopecurator=2;
		author = "KOBRA Mod Team";
		displayName="Bacta Tank";
		model="kobra\442_misc\bacta\bacta_tank.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		armor=5;
		epeImpulsedamagecoef=0.1;
		replaceDamaged = "442_bacta_tank_w";
		destrtype = "DestructBuilding";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
			init="''";
		};
		hiddenselections[]=
		{
			"body",
			"emmision"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_misc\bacta\data\body_co.paa",
			"kobra\442_misc\bacta\data\body_co.paa",
		};
		class useractions
        {
            class heal_player
            {
                displayname = "Receive medical treatment";
                position = "action_pos1";
                priority = 101;
                radius = 2;
                onlyforplayer = 0;
                condition = "alive this";
                statement = "[ace_player,ace_player] call ace_medical_fnc_treatmentAdvanced_fullHealLocal;";
            };
			class heal_player2: heal_player
			{
				position = "action_pos2";
			};
			class heal_player3: heal_player
			{
				position = "action_pos3";
			};
			class heal_player4: heal_player
			{
				position = "action_pos4";
			};
			class heal_player5: heal_player
			{
				position = "action_pos5";
			};
			class heal_player6: heal_player
			{
				position = "action_pos6";
			};
        };
		class DestructionEffects
		{
			class ruin
			{
				intensity = 1;
				interval = 1;
				lifeTime = 1;
				position = "";
				simulation = ruin;
				type = "kobra\442_misc\bacta\bacta_tank_w.p3d";
			};
			
		};
		class Hitpoints
		{
			class hitbody
			{
				armor = 5;
				convexComponent = "body_hit";
				depends = "total";
				explosionShielding = .5;
				material = 51;
				name = "body_hit";
				passthrough = 1;
				visual="zbytek";
				radius = 0.01;
				hitpoint = "body_hit";
			};
			class hitglass
			{
				armor = 5;
				convexComponent = "glass_hit";
				depends = "total";
				explosionShielding = .5;
				material = 51;
				name = "glass_hit";
				passthrough = 1;
				visual="zbytek";
				radius = 0.01;
				hitpoint = "glass_hit";
			};
		};
	};
	class ruins_f;
	class 442_bacta_tank_w: ruins_f
	{
		author = "KOBRA Mod Team";
		mapsize = 20;
		editorPreview = "";
		scope = 2;
		scopecurator = 2;
		icon="iconObject_1x2";
		displayname = "Bacta Tank (Destroyed)";
		model = "kobra\442_misc\bacta\bacta_tank_w.p3d";
		editorCategory = "kobra";
		editorSubcategory = "442_item";
		hiddenselections[]=
		{
			"body",
			"emmision"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_misc\bacta\data\body_co.paa",
			"kobra\442_misc\bacta\data\body_co.paa",
		};
	};
};