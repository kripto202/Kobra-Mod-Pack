class CfgPatches
{
	class 442_mtt
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_mtt_static"
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
	class 442_mtt_static: House_F
	{
		scope=2;
		scopecurator=2;
		author="kripto202";
		displayName="MTT (Static)";
		model="\442_mtt\mtt.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		vehicleClass="Structures";
		hiddenselections[]=
		{
			"body1",
			"body2",
			"door"
		};
		hiddenselectionstextures[]=
		{
			"442_mtt\data\body1_co.paa",
			"442_mtt\data\body2_co.paa",
			"442_mtt\data\door_co.paa"
		};
	};
};