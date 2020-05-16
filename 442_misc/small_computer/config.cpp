class CfgPatches
{
	class 442_misc_small_computer
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_small_computer"
		};
		author="kripto202";
	};
};
class CfgVehicles
{
	class Items_base_F;
	class 442_small_computer: Items_base_F
	{
		scope=2;
		scopecurator=2;
		author="kripto202";
		displayName="Small Computer";
		model="\442_misc\small_computer\small_computer.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item_small";
		vehicleClass="Structures";
		simulation="thingx";
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"terminal1",
			"terminal2",
			"terminal3",
			"terminal4"
		};
		hiddenselectionstextures[]=
		{
			"442_misc\small_computer\data\computer_body_co.paa",
			"442_misc\small_computer\data\computer_controls_co.paa"
		};
	};
};