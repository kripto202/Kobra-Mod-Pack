class CfgPatches
{
	class 442_radio
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_radio"
		};
		author="kripto202";
	};
};
class CfgVehicles
{
	class Items_base_F;
	class 442_radio: Items_base_F
	{
		scope=2;
		scopecurator=2;
		author="kripto202";
		displayName="Radio";
		model="442_misc\radio\radio.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item_small";
		simulation="thing";
		hiddenselections[]=
		{
			"body",
			"lights"
		};
		hiddenselectionstextures[]=
		{
			"442_misc\radio\data\radio_body_co.paa",
			"442_misc\radio\data\radio_lights_co.paa"
		};
	};
};