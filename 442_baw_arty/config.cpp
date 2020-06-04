class cfgpatches
{
	class 442_baw_arty
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_baw_arty"
		};
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
	class 442_baw_arty: Items_base_F
	{
		author="kripto202";
		model="\442_baw_arty\baw_arty.p3d";
		reversed=0;
		scope=2;
		scopecurator=2;
		editorpreview="";
		editorcategory="kobra";
		editorsubcategory="442_item";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		displayname="BAW Artillery Hovery Tank";
		mapsize=3000;
		destrType=0;
		featureType=2;
		hiddenselections[] = 
		{
			"body",
			"eyes",
			"gun"
		};
		hiddenselectionstextures[] = 
		{
			"442_baw_arty\data\body_co.paa",
			"442_baw_arty\data\eyes_co.paa",
			"442_baw_arty\data\gun_co.paa",
		};
	};
};