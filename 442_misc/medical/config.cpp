class cfgPatches
{
	class 442_misc_medical
	{
		author = "TK";
		units[]=
		{
			"442_BactaBandage_Item",
			"442_BasicBandage_Item",
			"442_BactaPack_Item",
			"442_Cauterizer_Item",
			"442_PerigenStim_Item",
			"442_PolybioticsStim_Item",
			"442_MyoplexarilStimStim_Item",
			"442_Vasko250_Item",
			"442_Vasko500_Item",
			"442_Vasko1000_Item"
		};
		weapons[]=
		{
			"442_BactaBandage",
			"442_BasicBandage",
			"442_PerigenStim",
			"442_PolybioticsStim",
			"442_MyoplexarilStim",
			"442_Vasko1000",
			"442_Vasko500",
			"442_Vasko250",
			"442_BactaPack",
			"442_Cauterizer"
		};
		requiredAddons[]=
		{
			"kobra_core",
		};
        authors[] =
        {
			"ToxicKrinix"
        };
	};
};



class CfgEditorCategories
{
	class 442_Med
	{
		displayname = "[K] Medical Extension";
	};
};

class CfgEditorSubcategories
{
	class 442_Med_Assets
	{
		displayName="Medical Assets";
	};
};




class CfgWeapons 
{
    class ItemCore;
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	
	class 442_BactaBandage: ACE_ItemCore 
    {
        scope = 2;
        author = "Krinix";
        displayName ="Bacta Bandage";
        model = "kobra\442_misc\medical\BactaBandage.p3d";
        picture="\kobra\442_misc\medical\ui\bactabandage_ui.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
	
	class 442_BasicBandage: ACE_ItemCore 
    {
        scope = 2;
        author = "Krinix";
        displayName ="Bandage (Normal)";
        model = "kobra\442_misc\medical\Bandage.p3d";
        picture="\kobra\442_misc\medical\ui\bandage_ui.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class 442_PerigenStim: ACE_ItemCore 
    {
        scope = 2;
        author = "Krinix";
        displayName ="Stim Perigen (Morphine)";
        model = "kobra\442_misc\medical\StimPerigen.p3d";
        picture="\kobra\442_misc\medical\ui\stim_perigen_ui.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class 442_PolybioticsStim: ACE_ItemCore 
    {
        scope = 2;
        author = "Krinix";
        displayName ="Stim Polybiotics (Epinephrine)";
        model = "kobra\442_misc\medical\StimPolybiotics.p3d";
        picture="\kobra\442_misc\medical\ui\stim_polybiotics_ui.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class 442_MyoplexarilStim: ACE_ItemCore 
    {
        scope = 2;
        author = "Krinix";
        displayName ="Stim Myoplexaril (Adenosine)";
        model = "kobra\442_misc\medical\StimMyoplexaril.p3d";
        picture="\kobra\442_misc\medical\ui\stim_myoplexaril_ui.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class 442_Vasko1000: ACE_ItemCore 
    {
        scope = 2;
        author = "Krinix";
        displayName ="Vasko 1000ml";
        model = "kobra\442_misc\medical\Vasko.p3d";
        picture="\kobra\442_misc\medical\ui\vasko_ui.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
    };

    class 442_Vasko500: 442_Vasko1000 
    {
        displayName ="Vasko 500ml";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 5;
        };
    };

    class 442_Vasko250: 442_Vasko1000 
    {
        displayName ="Vasko 250ml";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 5;
        };
    };

    class 442_BactaPack: ACE_ItemCore 
    {
        scope = 2;
        author = "Krinix";
        displayName ="Bacta Pack";
        model = "kobra\442_misc\medical\Bacta.p3d";
        picture="\kobra\442_misc\medical\ui\bacta_ui.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
    };

    class 442_Cauterizer: ACE_ItemCore 
    {
        scope = 2;
        author = "Krinix";
        displayName ="Cauterizer";
        model = "kobra\442_misc\medical\Cauterizer.p3d";
        picture="\kobra\442_misc\medical\ui\cauterizer_ui.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 15;
        };
    };
};


class CfgVehicles 
{
	
	class Item_Base_F;
	
	class 442_BactaBandage_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="442_Med";
		editorsubcategory="442_Med_Assets";
        displayName ="Bacta Bandage";
        author = "Krinix";
        model = "kobra\442_misc\medical\BactaBandage.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_442_BactaBandage
			{
				name="442_BactaBandage";
				count=1;
			};
		};
    };
	
	class 442_BasicBandage_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="442_Med";
		editorsubcategory="442_Med_Assets";
        displayName ="Bandage (Normal)";
        author = "Krinix";
        model = "kobra\442_misc\medical\Bandage.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_442_BasicBandage
			{
				name="442_BasicBandage";
				count=1;
			};
		};
    };

    class 442_BactaPack_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="442_Med";
		editorsubcategory="442_Med_Assets";
        displayName ="Bacta Pack";
        author = "Krinix";
        model = "kobra\442_misc\medical\Bacta.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_442_BactaPack
			{
				name="442_BactaPack";
				count=1;
			};
		};
    };

    class 442_Cauterizer_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="442_Med";
		editorsubcategory="442_Med_Assets";
        displayName ="Cauterizer";
        author = "Krinix";
        model = "kobra\442_misc\medical\Cauterizer.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_442_Cauterizer
			{
				name="442_Cauterizer";
				count=1;
			};
		};
    };

    class 442_PerigenStim_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="442_Med";
		editorsubcategory="442_Med_Assets";
        displayName ="Stim Perigen (Morphine)";
        author = "Krinix";
        model = "kobra\442_misc\medical\StimPerigen.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_442_PerigenStim
			{
				name="442_PerigenStim";
				count=1;
			};
		};
    };

    class 442_PolybioticsStim_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="442_Med";
		editorsubcategory="442_Med_Assets";
        displayName ="Stim Polybiotics (Epinephrine)";
        author = "Krinix";
        model = "kobra\442_misc\medical\StimPolybiotics.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_442_PolybioticsStim
			{
				name="442_PolybioticsStim";
				count=1;
			};
		};
    };

    class 442_MyoplexarilStimStim_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="442_Med";
		editorsubcategory="442_Med_Assets";
        displayName ="Stim Myoplexaril (Adenosine)";
        author = "Krinix";
        model = "kobra\442_misc\medical\StimMyoplexaril.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_442_MyoplexarilStim
			{
				name="442_MyoplexarilStim";
				count=1;
			};
		};
    };

    class 442_Vasko250_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="442_Med";
		editorsubcategory="442_Med_Assets";
        displayName ="Vasko 250ml";
        author = "Krinix";
        model = "kobra\442_misc\medical\Vasko.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_442_Vasko250
			{
				name="442_Vasko250";
				count=1;
			};
		};
    };

    class 442_Vasko500_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="442_Med";
		editorsubcategory="442_Med_Assets";
        displayName ="Vasko 500ml";
        author = "Krinix";
        model = "kobra\442_misc\medical\Vasko.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_442_Vasko500
			{
				name="442_Vasko500";
				count=1;
			};
		};
    };

    class 442_Vasko1000_Item: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
		editorcategory="442_Med";
		editorsubcategory="442_Med_Assets";
        displayName ="Vasko 1000ml";
        author = "Krinix";
        model = "kobra\442_misc\medical\Vasko.p3d";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_442_Vasko1000
			{
				name="442_Vasko1000";
				count=1;
			};
		};
    };
};