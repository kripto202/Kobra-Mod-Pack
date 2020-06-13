class CfgPatches
{
	class 442_sds_stealth
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_sds_stealth_ship"
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
	class 442_sds_stealth_ship: House_F
	{
		scope=2;
		scopecurator=2;
		author="kripto202";
		displayName="SDS-Stealth Ship";
		model="\442_ships\sds_stealth\sds_stealth.p3d";
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
			"442_ships\sds_stealth\data\body1_co.paa",
			"442_ships\sds_stealth\data\body2_co.paa",
			"442_ships\sds_stealth\data\body3_co.paa",
			"442_ships\sds_stealth\data\body4_co.paa",
			"442_ships\sds_stealth\data\engine_co.paa"
		};
	};
};
