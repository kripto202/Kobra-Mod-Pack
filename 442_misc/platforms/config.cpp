class CfgPatches
{
	class 442_misc_platforms
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_5x5",
			"442_10x10",
			"442_10x25",
			"442_25x25",
			"442_50x25",
			"442_50x50",
			"442_70x70"
		};
		author="kripto202";
	};
};
class CfgVehicles
{
	class House_F;
	class 442_5x5: House_F
	{
		scope=2;
		scopecurator=2;
		author="kripto202";
		displayName="Platform (5x5)";
		model="\442_misc\platforms\5x5.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		vehicleClass="Structures";
		hiddenselections[]=
		{
			"camo1"
		};
		hiddenselectionstextures[]=
		{
			"442_misc\platforms\data\5x5_co.paa"
		};
	};
	class 442_10x10: 442_5x5
	{
		displayName="Platform (10x10)";
		model="\442_misc\platforms\10x10.p3d";
		hiddenselectionstextures[]=
		{
			"442_misc\platforms\data\10x10_co.paa"
		};
	};
	class 442_10x25: 442_5x5
	{
		displayName="Platform (10x25)";
		model="\442_misc\platforms\10x25.p3d";
		hiddenselectionstextures[]=
		{
			"442_misc\platforms\data\10x25_co.paa"
		};
	};
	class 442_25x25: 442_5x5
	{
		displayName="Platform (25x25)";
		model="\442_misc\platforms\25x25.p3d";
		hiddenselectionstextures[]=
		{
			"442_misc\platforms\data\25x25_co.paa"
		};
	};
	class 442_50x25: 442_5x5
	{
		displayName="Platform (50x25)";
		model="\442_misc\platforms\50x25.p3d";
		hiddenselectionstextures[]=
		{
			"442_misc\platforms\data\50x25_co.paa"
		};
	};
	class 442_50x50: 442_5x5
	{
		displayName="Platform (50x50)";
		model="\442_misc\platforms\50x50.p3d";
		hiddenselectionstextures[]=
		{
			"442_misc\platforms\data\50x50_co.paa"
		};
	};
	class 442_70x70: 442_5x5
	{
		displayName="Platform (70x70)";
		model="\442_misc\platforms\70x70.p3d";
		hiddenselectionstextures[]=
		{
			"442_misc\platforms\data\70x70_co.paa"
		};
	};
};