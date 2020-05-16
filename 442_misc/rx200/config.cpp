class CfgPatches
{
	class 442_rx200
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_rx200"
		};
		author="kripto202";
	};
};
class CfgVehicles
{
	class Items_base_F;
	class 442_rx200: Items_base_F
	{
		scope=2;
		scopecurator=2;
		author="kripto202";
		displayName="RX-200 Falchion-Class Assault Tank (Static)";
		model="442_misc\rx200\rx200.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		simulation="thingx";
		hiddenselections[]=
		{
			"body1",
			"body2",
			"turret",
			"gun"
		};
		hiddenselectionstextures[]=
		{
			"442_misc\rx200\data\body1_co.paa",
			"442_misc\rx200\data\body2_co.paa",
			"442_misc\rx200\data\turret_co.paa",
			"442_misc\rx200\data\gun_co.paa"
		};
	};
};