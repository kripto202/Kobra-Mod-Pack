class CfgPatches
{
	class 442_vulture
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_vulture_static"
		};
		author="kripto202";
	};
};
class Eventhandlers;
class CfgVehicles
{
	class NonStrategic;
	class StaticShip;
	class Ship;
	class Building;
	class House_F;
	class FloatingStructure_F;
	class thingx;
	class LandVehicle;
	class Motorcycle;
	class FlagCarrier;
	class Items_base_F;
	class 442_vulture_static: House_F
	{
		scope=2;
		scopecurator=2;
		author="kripto202";
		displayName="Vulture Droid (Static)";
		model="\442_vulture\vulture_static.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		vehicleClass="Structures";
		hiddenselections[]=
		{
			"body",
			"legs",
			"eyes"
		};
		hiddenselectionstextures[]=
		{
			"442_vulture\data\body_co.paa",
			"442_vulture\data\legs_co.paa",
			"442_vulture\data\eyes_co.paa"
		};
	};
};
class cfgMods
{
	author="kripto202";
	timepacked="1587772646";
};
