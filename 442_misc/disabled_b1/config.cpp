class CfgPatches
{
	class 442_misc_disabled_b1
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_disabled_b1"
		};
		author="kripto202";
	};
};
class CfgVehicles
{
	class Shelter_base_F;
	class 442_disabled_b1: Shelter_base_F
	{
		scope=2;
		scopecurator=2;
		author="kripto202";
		displayName="Disabled B1";
		model="\442_misc\disabled_b1\disabled_b1.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		vehicleClass="Structures";
		destrType = "DestructTent";
	};
};