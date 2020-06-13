class cfgpatches
{
	class 442_landingpad
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_landingpad_wide"
		};
		author="kripto202";
	};
};
class cfgvehicles
{
	class House_F;
	class 442_landingpad_wide: House_F
	{
		author="kripto202";
		scope=2;
		scopecurator=2;
		displayname="Landing Pad (Wide)";
		icon="iconObject";
		editorcategory="kobra";
		editorsubcategory="442_item";
		armor=5000;
		model = "442_misc\landing_pad\wide_landing_pad.p3d";
		hiddenselections[] = 
		{
			"body1"
		};
		hiddenselectionstextures[] = 
		{
			"442_misc\landing_pad\data\pad_wide_co.paa"
		};
	};
};