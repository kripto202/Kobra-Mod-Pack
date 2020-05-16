class CfgPatches
{
	class 442_munificent
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_munificent"
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
	class 442_munificent: House_F
	{
		scope=2;
		scopecurator=2;
		author="kripto202";
		displayName="Munificent";
		model="\442_ships\munificent\munificent.p3d";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		hiddenselections[]=
		{
			"body1",
			"body2",
			"body3",
			"body4",
			"engine"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\munificent\data\body1_co.paa",
			"442_ships\munificent\data\body2_co.paa",
			"442_ships\munificent\data\body3_co.paa",
			"442_ships\munificent\data\body4_co.paa",
			"442_ships\munificent\data\engine_co.paa"
		};
	};
};
class cfgMods
{
	author="kripto202";
	timepacked="1587464916";
};
