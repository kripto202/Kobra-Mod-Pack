class cfgpatches
{
	class 442_holotables
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_holotable",
			"442_holotable2"
		};
		author="kripto202";
	};
};
class cfgvehicles
{
	class house_small_f;
	class 442_holotable_base: house_small_f
	{
		author="kripto202";
		mapsize=1;
		scope=0;
		scopecurator=0;
		displayname="";
		model="";
		icon="iconObject";
		editorcategory="kobra";
		editorsubcategory="442_item";
		vehicleclass="lamps";
		armor=500;
		cost=1000;
		armorlights=1;
		islockingdisabled=1;
	};
	class 442_holotable: 442_holotable_base
	{
		author="kripto202";
		scope=2;
		scopecurator=2;
		displayname="Holo Table (Round)";
		model="442_misc\holotable\holotable.p3d";
		hiddenselections[]=
		{
			"body",
			"lights",
			"holo"
		};
		hiddenselectionstextures[]=
		{
			"442_misc\holotable\data\body_co.paa",
			"442_misc\holotable\data\lights_co.paa",
			"442_misc\holotable\data\holo_co.paa"
		};
		class MarkerLights
		{
			class Light_1
			{
				color[]={0.30000001,0.30000001,1};
				ambient[]={0,0,0.090000004};
				intensity=1000;
				name="Light_pos";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0.2;
					hardLimitStart=2;
					hardLimitEnd=5;
				};
			};
		};
	};
	class 442_holotable2: 442_holotable
	{
		displayname="Holo Table (Long)";
		model="442_misc\holotable\holotable2.p3d";
		hiddenselections[]=
		{
			"body",
			"holo"
		};
		hiddenselectionstextures[]=
		{
			"442_misc\holotable\data\body2_co.paa",
			"442_misc\holotable\data\holo2_co.paa"
		};
		class MarkerLights
		{
			class Light_1
			{
				color[]={0.30000001,0.30000001,0.69999999};
				ambient[]={0,0,0.090000004};
				intensity=1000;
				name="Light_1_pos";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0.2;
					hardLimitStart=2;
					hardLimitEnd=5;
				};
			};
			class Light_2
			{
				color[]={0.30000001,0.30000001,1};
				ambient[]={0,0,0.090000004};
				intensity=1000;
				name="Light_2_pos";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0.2;
					hardLimitStart=2;
					hardLimitEnd=5;
				};
			};
		};
	};
};