class cfgpatches
{
    class 442_misc_gonk
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "442_gonk_mini",
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class B_supplyCrate_F;
    class 442_gonk_mini: B_supplyCrate_F 
	{
		scope = 2;
		author = "KOBRA Mod Team";
		displayName = "Mini Gonk";
		model = "\kobra\442_misc\gonk\gonk_mini.p3d";
		editorcategory = "kobra";
		editorsubcategory = "442_supplies";
		maximumLoad=4000;
		memoryPointSupply="doplnovani";
		ace_cargo_size = 1;
		ace_cargo_canload = 1;
		ace_dragging_can_drag = 1;
		ace_dragging_dragPosition[] = {0, 1.2, 0};
		ace_dragging_dragDirection = 0;
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 1.2, 0};
		ace_dragging_carryDirection = 0;
		simulation="thingx";
		/*transportFuel = 600;
		destrType="DestructBuilding";
		class DestructionEffects
		{
			class HouseDestr
			{
				intensity=1;
				interval=1;
				lifeTime=0.1;
				position="";
				simulation="destroy";
				type="DelayedDestructionAmmoBox";
			};
		};
		epeImpulsedamagecoef=0.1;*/
		class transportItems{};
		class transportWeapons{};
		class transportBackpacks{};
		class transportMagazines
		{
			class 442_762_30rnd_blue_mag
			{
				magazine = "442_762_30rnd_blue_mag";
				count = 10;
			};
			class 442_556_30rnd_blue_mag
			{
				magazine = "442_556_30rnd_blue_mag";
				count = 10;
			};
			class 442_556_200rnd_blue_mag
			{	
				magazine = "442_556_200rnd_blue_mag";
				count = 10;
			};
			class 442_45_45rnd_blue_mag
			{	
				magazine = "442_45_45rnd_blue_mag";
				count = 10;
			};
			class 442_65_60rnd_blue_mag
			{	
				magazine = "442_65_60rnd_blue_mag";
				count = 10;
			};
			class 442_9_20rnd_blue_mag
			{	
				magazine = "442_9_20rnd_blue_mag";
				count = 10;
			};
			class 442_127x33_10rnd_blue_mag
			{	
				magazine = "442_127x33_10rnd_blue_mag";
				count = 10;
			};
			class 442_127x108_5rnd_blue_mag
			{	
				magazine = "442_127x108_5rnd_blue_mag";
				count = 10;
			};
		};
	};
};