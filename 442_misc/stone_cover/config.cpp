class CfgPatches
{
	class 442_misc_stone_cover
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_stone_cover"
		};
		author="kripto202";
	};
};
class CfgVehicles
{
	class House_F;
	class 442_stone_cover: House_F
	{
		scope=2;
		scopecurator=2;
		author="kripto202";
		displayName="Stone Cover";
		model="\442_misc\stone_cover\cover.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		vehicleClass="Structures";
		hiddenselections[]=
		{
			"camo1"
		};
		hiddenselectionstextures[]=
		{
			"442_misc\stone_cover\data\cover_co.paa"
		};
	};
};