class cfgpatches
{
    class 442_equipment_units
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "k_barracks_unit",
			"k_scout_unit",
			"k_clone_unit",
			"k_clone_f_unit",

			"k_44ab_clone_unit",
			"k_44ab_scout_unit",
			"k_scout_unit_arid",
			"k_scout_unit_desert",
			"k_scout_unit_woodland",
			"k_scout_unit_woodland2",
			"k_scout_unit_desert2"

			"k_44ab_clone_unit",
			"k_44ab_scout_unit",

			"k_clone_unit_44",
			"k_clone_unit_f_44",
			"k_clone_unit1_44",
			"k_clone_unit1_f_44",
			"k_clone_unit2_44",
			"k_clone_unit2_f_44",
			"k_clone_unit_5th",
			"k_clone_unit_13th",
			"k_clone_unit_41stGC",
			"k_clone_unit_91st",
			"k_clone_unit_104thWolfpack",
			"k_clone_unit_104th",
			"k_clone_unit_187th",
			"k_clone_unit_212th",
			"k_clone_unit_327th",
			"k_clone_unit_332nd",
			"k_clone_unit_442nd",
			"k_clone_unit_501st",
			"k_clone_unit_612th",
			"k_clone_unit_CG",
			"k_clone_unit_KeeliCompany",
			"k_clone_unit_KS",

			"k_commando_unit",
			"k_commando_unit_44",

            "k_clone_light_unit",
            "k_clone_light_f_unit",
            "k_clone_light_unit1_44",
            "k_clone_light_unit2_44",
            "k_clone_light_f_unit1_44",
            "k_clone_light_f_unit2_44"
		};
        weapons[] = 
        {
			"k_scout_uniform",
			"k_clone_uniform",
			"k_scout_uniform_dukas",
			"k_scout_uniform_camo",
			"k_scout_uniform_artic",
			"k_scout_uniform_desert",
			"k_scout_uniform_jungle",

			"k_clone_uniform",
			"k_clone_f_uniform",
			"k_clone_uniform_44",
			"k_clone_uniform_f_44",
			"k_clone_uniform1_44",
			"k_clone_uniform1_f_44",
			"k_clone_uniform2_44",
			"k_clone_uniform2_f_44",
			"k_clone_uniform_5th",
			"k_clone_uniform_13th",
			"k_clone_uniform_41stGC",
			"k_clone_uniform_91st",
			"k_clone_uniform_104thWolfpack",
			"k_clone_uniform_104th",
			"k_clone_uniform_187th",
			"k_clone_uniform_212th",
			"k_clone_uniform_327th",
			"k_clone_uniform_332nd",
			"k_clone_uniform_442nd",
			"k_clone_uniform_501st",
			"k_clone_uniform_612th",
			"k_clone_uniform_CG",
			"k_clone_uniform_KeeliCompany",
			"k_clone_uniform_KS",

			"k_commando_uniform",
			"k_commando_uniform_44",

            "k_clone_light_uniform",
            "k_clone_light_f_uniform",
            "k_clone_light_uniform1_44",
            "k_clone_light_uniform2_44",
            "k_clone_light_f_uniform1_44",
            "k_clone_light_f_uniform2_44"
        };
    };
};

class cfgvehicles 
{
	class B_Soldier_02_f;
    class 442_unit_base: B_Soldier_02_f
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		model = "";
		editorPreview="";
		picture = "kobra\kobra_core\kobra.paa"; //this needs to be changed
		//icon = "kobra_core\icons\data\icon_rifleman.paa";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		role="Rifleman";
		side = 1;
		author = "KOBRA Mod Team";
		uniformclass="";
		faction="";
		editorSubCategory="";
		displayname="Trooper";
		movesFatigue="CfgMovesFatigueTrooper";
		backpack="";
		hiddenselections[]={};
		hiddenselectionsTextures[]={};
		hiddenselectionsMaterials[]={};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"kobra\442_equipment\uniform\data\clone_uniform\upper_armor.rvmat",
				"kobra\442_equipment\uniform\data\clone_uniform\upper_armor_injury.rvmat",
				"kobra\442_equipment\uniform\data\clone_uniform\upper_armor_injury.rvmat",

				"kobra\442_equipment\uniform\data\clone_uniform\lower_armor.rvmat",
				"kobra\442_equipment\uniform\data\clone_uniform\lower_armor_injury.rvmat",
				"kobra\442_equipment\uniform\data\clone_uniform\lower_armor_injury.rvmat",

				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"a3\characters_f\heads\data\hl_white.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
		linkedItems[]={};
		RespawnlinkedItems[]={};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]={};
		respawnMagazines[]={};
		items[]={};
		respawnitems[]={};
		armor=10;
		armorStructural=4;
		explosionShielding=0.5;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		/*class HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=6;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=14;
				material=-1;
				name="pelvis";
				passThrough=0.33000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=14;
				material=-1;
				name="spine1";
				passThrough=0.33000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=14;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=16;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=8;
				material=-1;
				name="arms";
				passThrough=0.69999999;
				radius=0.1;
				explosionShielding=0.1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=8;
				material=-1;
				name="hands";
				passThrough=0.69999999;
				radius=0.1;
				explosionShielding=0.1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=8;
				material=-1;
				name="legs";
				passThrough=0.69999999;
				radius=0.14;
				explosionShielding=0.1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 1.45";
			};
		};*/
		/*class HitPoints: HitPoints
		{
			class HitFace: HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitNeck
			{
				armor=6;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitHead
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitPelvis
			{
				armor=14;
				material=-1;
				name="pelvis";
				passThrough=0.33000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitAbdomen
			{
				armor=14;
				material=-1;
				name="spine1";
				passThrough=0.33000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitDiaphragm
			{
				armor=14;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitChest
			{
				armor=16;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitBody
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitArms
			{
				armor=8;
				material=-1;
				name="arms";
				passThrough=0.69999999;
				radius=0.1;
				explosionShielding=0.1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitHands
			{
				armor=8;
				material=-1;
				name="hands";
				passThrough=0.69999999;
				radius=0.1;
				explosionShielding=0.1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitLegs
			{
				armor=8;
				material=-1;
				name="legs";
				passThrough=0.69999999;
				radius=0.14;
				explosionShielding=0.1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 1.45";
			};
		};*/
	};
////scout unit
	class k_scout_unit: 442_unit_base
    {
        displayname = "Scout Trooper";
        model = "kobra\442_equipment\uniform\model\scout_uniform.p3d";
        uniformclass = "k_scout_uniform";
        faction = "kobra_b";
        editorSubCategory = "442_trooper";
		nameSound = "veh_infantry_s";
		textPlural = "Troopers";
		textSingular = "Trooper";
        hiddenselections[] = 
        {
            "armor",
            "gloves",
            "undersuit"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\scout_uniform\armor_co.paa",
            "kobra\442_equipment\uniform\data\scout_uniform\gloves_co.paa",
            "kobra\442_equipment\uniform\data\scout_uniform\undersuit_co.paa"
        };
        class Wounds
		{
			tex[]={};
			mat[]=
			{
				"kobra\442_equipment\uniform\data\scout_uniform\armor.rvmat",
				"kobra\442_equipment\uniform\data\scout_uniform\armor_injury.rvmat",
				"kobra\442_equipment\uniform\data\scout_uniform\armor_injury.rvmat",

				"kobra\442_equipment\uniform\data\scout_uniform\gloves.rvmat",
				"kobra\442_equipment\uniform\data\scout_uniform\gloves_injury.rvmat",
				"kobra\442_equipment\uniform\data\scout_uniform\gloves_injury.rvmat",

                "kobra\442_equipment\uniform\data\scout_uniform\undersuit.rvmat",
				"kobra\442_equipment\uniform\data\scout_uniform\undersuit_injury.rvmat",
				"kobra\442_equipment\uniform\data\scout_uniform\undersuit_injury.rvmat",

				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"a3\characters_f\heads\data\hl_white.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
    };
	class k_scout_unit_44: k_scout_unit
    {
        displayname = "Scout Trooper";
        uniformclass = "k_scout_uniform_44";
        faction = "44_ab";
        editorSubCategory = "442_trooper";
        hiddenselections[] = 
        {
            "armor",
            "gloves",
            "undersuit"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\scout_uniform\unit_designs\44ab\scout_armor_co.paa",
            "kobra\442_equipment\uniform\data\scout_uniform\gloves_co.paa",
            "kobra\442_equipment\uniform\data\scout_uniform\undersuit_co.paa"
        };
    };
	class k_scout_unit_arid: k_scout_unit
    {
        displayname = "Scout Trooper";
        uniformclass = "k_scout_uniform_arid";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\scout_uniform\unit_designs\arid_scout\scout_armor_co.paa",
            "kobra\442_equipment\uniform\data\scout_uniform\gloves_co.paa",
            "kobra\442_equipment\uniform\data\scout_uniform\unit_designs\arid_scout\scout_undersuit_co.paa"
        };
    };
    class k_scout_unit_desert: k_scout_unit
    {
        displayname = "Scout Trooper";
        uniformclass = "k_scout_uniform_desert";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\scout_uniform\unit_designs\desert_scout\scout_armor_co.paa",
            "kobra\442_equipment\uniform\data\scout_uniform\gloves_co.paa",
            "kobra\442_equipment\uniform\data\scout_uniform\unit_designs\desert_scout\scout_undersuit_co.paa"
        };
    };
    class k_scout_unit_woodland: k_scout_unit
    {
        displayname = "Scout Trooper";
        uniformclass = "k_scout_uniform_woodland";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\scout_uniform\unit_designs\woodland_scout\scout_armor_co.paa",
            "kobra\442_equipment\uniform\data\scout_uniform\gloves_co.paa",
            "kobra\442_equipment\uniform\data\scout_uniform\unit_designs\woodland_scout\scout_undersuit_co.paa"
        };
    };
////clone unit
    class k_clone_unit: k_scout_unit
    {
        displayname = "Clone Trooper";
        model = "kobra\442_equipment\uniform\model\clone_uniform.p3d";
        uniformclass = "k_clone_uniform";
        hiddenselections[] = 
        {
            "upper",
            "lower",
            "clan",
			"insignia"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\upper_armor_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lower_armor_co.paa"
        };
        class Wounds
		{
			tex[]={};
			mat[]=
			{
				"kobra\442_equipment\uniform\data\clone_uniform\upper_armor.rvmat",
				"kobra\442_equipment\uniform\data\clone_uniform\upper_armor_injury.rvmat",
				"kobra\442_equipment\uniform\data\clone_uniform\upper_armor_injury.rvmat",

				"kobra\442_equipment\uniform\data\clone_uniform\lower_armor.rvmat",
				"kobra\442_equipment\uniform\data\clone_uniform\lower_armor_injury.rvmat",
				"kobra\442_equipment\uniform\data\clone_uniform\lower_armor_injury.rvmat",

				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"a3\characters_f\heads\data\hl_white.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
    };
	class k_clone_f_unit: k_clone_unit
	{
		model = "kobra\442_equipment\uniform\model\clone_uniform_f.p3d";
		uniformclass = "k_clone_f_uniform";
	};

    class k_clone_unit_44: k_clone_unit
    {
        displayname = "Clone Trooper";
        model = "kobra\442_equipment\uniform\model\clone_uniform.p3d";
        uniformclass = "k_clone_uniform_44";
		faction = "44_ab";
        hiddenselections[] = 
        {
            "upper",
            "lower",
            "clan",
			"insignia"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\unit_designs\44ab\design1\upper_armor_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\unit_designs\44ab\design1\lower_armor_co.paa"
        };
    };
	class k_clone_unit_f_44: k_clone_f_unit
    {
        displayname = "Clone Trooper";
        model = "kobra\442_equipment\uniform\model\clone_uniform_f.p3d";
        uniformclass = "k_clone_uniform_f_44";
		faction = "44_ab";
        hiddenselections[] = 
        {
            "upper",
            "lower",
            "clan",
			"insignia"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\unit_designs\44ab\design1\upper_armor_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\unit_designs\44ab\design1\lower_armor_co.paa"
        };
    };
	class k_clone_unit1_44: k_clone_unit_44
    {
        uniformclass = "k_clone_uniform1_44";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\unit_designs\44ab\design2\upper_armor_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\unit_designs\44ab\design2\lower_armor_co.paa"
        };
    };
	class k_clone_unit1_f_44: k_clone_unit_f_44
    {
        uniformclass = "k_clone_uniform1_f_44";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\unit_designs\44ab\design2\upper_armor_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\unit_designs\44ab\design2\lower_armor_co.paa"
        };
    };
	class k_clone_unit2_44: k_clone_unit
    {
        uniformclass = "k_clone_uniform2_44";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\unit_designs\44ab\design3\upper_armor_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\unit_designs\44ab\design3\lower_armor_co.paa"
        };
    };
	class k_clone_unit2_f_44: k_clone_f_unit
    {
        uniformclass = "k_clone_uniform2_f_44";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\unit_designs\44ab\design3\upper_armor_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\unit_designs\44ab\design3\lower_armor_co.paa"
        };
    };

	class k_clone_unit_5th: k_clone_unit
    {
        displayname = "Clone Trooper (5th Fleet Security)";
        uniformclass = "k_clone_uniform_5th";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\upper_armor_5_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\lower_armor_5_co.paa",
        };
    };

	class k_clone_unit_13th: k_clone_unit
    {
        displayname = "Clone Trooper (13th)";
        uniformclass = "k_clone_uniform_13th";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\upper_armor_13_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\lower_armor_13_co.paa",
        };
    };

	class k_clone_unit_41stGC: k_clone_unit
    {
        displayname = "Clone Trooper (41st Green Company)";
        uniformclass = "k_clone_uniform_41stGC";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\upper_armor_41_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\lower_armor_41_co.paa",
        };
    };

	class k_clone_unit_91st: k_clone_unit
    {
        displayname = "Clone Trooper (91st)";
        uniformclass = "k_clone_uniform_91st";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\upper_armor_91_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\lower_armor_91_co.paa",
        };
    };

	class k_clone_unit_104thWolfpack: k_clone_unit
    {
        displayname = "Clone Trooper (104th Wolfpack)";
        uniformclass = "k_clone_uniform_104thWolfpack";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\upper_armor_104Grey_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\lower_armor_104Grey_co.paa",
        };
    };

	class k_clone_unit_104th: k_clone_unit
    {
        displayname = "Clone Trooper (104th)";
        uniformclass = "k_clone_uniform_104th";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\upper_armor_104Red_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\lower_armor_104Red_co.paa",
        };
    };

	class k_clone_unit_187th: k_clone_unit
    {
        displayname = "Clone Trooper (187th)";
        uniformclass = "k_clone_uniform_187th";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\upper_armor_187_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\lower_armor_187_co.paa",
        };
    };

	class k_clone_unit_212th: k_clone_unit
    {
        displayname = "Clone Trooper (212th)";
        uniformclass = "k_clone_uniform_212th";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\upper_armor_212_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\lower_armor_212_co.paa",
        };
    };

	class k_clone_unit_327th: k_clone_unit
    {
        displayname = "Clone Trooper (327th)";
        uniformclass = "k_clone_uniform_327th";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\upper_armor_327_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\lower_armor_327_co.paa",
        };
    };

	class k_clone_unit_332nd: k_clone_unit
    {
        displayname = "Clone Trooper (332nd)";
        uniformclass = "k_clone_uniform_332nd";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\upper_armor_332_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\lower_armor_332_co.paa",
        };
    };

	class k_clone_unit_442nd: k_clone_unit
    {
        displayname = "Clone Trooper (442nd)";
        uniformclass = "k_clone_uniform_442nd";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\upper_armor_442_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\lower_armor_442_co.paa",
        };
    };

	class k_clone_unit_501st: k_clone_unit
    {
        displayname = "Clone Trooper (501st)";
        uniformclass = "k_clone_uniform_501st";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\upper_armor_501_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\lower_armor_501_co.paa",
        };
    };

	class k_clone_unit_612th: k_clone_unit
    {
        displayname = "Clone Trooper (612th)";
        uniformclass = "k_clone_uniform_612th";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\upper_armor_612_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\lower_armor_612_co.paa",
        };
    };

	class k_clone_unit_CG: k_clone_unit
    {
        displayname = "Clone Trooper (Coruscant Guard)";
        uniformclass = "k_clone_uniform_CG";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\upper_armor_CG_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\lower_armor_CG_co.paa",
        };
    };

	class k_clone_unit_KeeliCompany: k_clone_unit
    {
        displayname = "Clone Trooper (Keeli Company)";
        uniformclass = "k_clone_uniform_KeeliCompany";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\upper_armor_Keeli_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\lower_armor_Keeli_co.paa",
        };
    };

	class k_clone_unit_KS: k_clone_unit
    {
        displayname = "Clone Trooper (Kamino Security)";
        uniformclass = "k_clone_uniform_KS";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\upper_armor_KS_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\clean\lower_armor_KS_co.paa",
        };
    };

	//Dirty units section
	/*class k_clone_unit_5th_Dirty: k_clone_unit
    {
        displayname = "Clone Trooper (5th Fleet Security, Dirty)";
        uniformclass = "k_clone_uniform_5th_Dirty";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\upper_armor_5_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\lower_armor_5_co.paa",
        };
    };
	class k_clone_unit_13th_Dirty: k_clone_unit
    {
        displayname = "Clone Trooper (13th, Dirty)";
        uniformclass = "k_clone_uniform_13th_Dirty";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\upper_armor_13_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\lower_armor_13_co.paa",
        };
    };
	class k_clone_unit_41stGC_Dirty: k_clone_unit
    {
        displayname = "Clone Trooper (41st, Dirty)";
        uniformclass = "k_clone_uniform_41st_Dirty";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\upper_armor_41_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\lower_armor_41_co.paa",
        };
    };
	class k_clone_unit_104thWolfpack_Dirty: k_clone_unit
    {
        displayname = "Clone Trooper (104th Wolfpack, Dirty)";
        uniformclass = "k_clone_uniform_104thWolfpack_Dirty";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\upper_armor_104Grey_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\lower_armor_104Grey_co.paa",
        };
    };
	class k_clone_unit_104th_Dirty: k_clone_unit
    {
        displayname = "Clone Trooper (104th, Dirty)";
        uniformclass = "k_clone_uniform_104th_Dirty";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\upper_armor_104Red_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\lower_armor_104Red_co.paa",
        };
    };
	class k_clone_unit_187th_Dirty: k_clone_unit
    {
        displayname = "Clone Trooper (187th, Dirty)";
        uniformclass = "k_clone_uniform_187th_Dirty";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\upper_armor_187_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\lower_armor_187_co.paa",
        };
    };
	class k_clone_unit_212th_Dirty: k_clone_unit
    {
        displayname = "Clone Trooper (212th, Dirty)";
        uniformclass = "k_clone_uniform_212th_Dirty";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\upper_armor_212_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\lower_armor_212_co.paa",
        };
    };
	class k_clone_unit_327th_Dirty: k_clone_unit
    {
        displayname = "Clone Trooper (327th, Dirty)";
        uniformclass = "k_clone_uniform_327th_Dirty";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\upper_armor_327_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\lower_armor_327_co.paa",
        };
    };
	class k_clone_unit_332nd_Dirty: k_clone_unit
    {
        displayname = "Clone Trooper (332nd, Dirty)";
        uniformclass = "k_clone_uniform_332nd_Dirty";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\upper_armor_332_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\lower_armor_332_co.paa",
        };
    };
	class k_clone_unit_442nd_Dirty: k_clone_unit
    {
        displayname = "Clone Trooper (442nd, Dirty)";
        uniformclass = "k_clone_uniform_442nd_Dirty";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\upper_armor_442_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\lower_armor_442_co.paa",
        };
    };
	class k_clone_unit_501st_Dirty: k_clone_unit
    {
        displayname = "Clone Trooper (501st, Dirty)";
        uniformclass = "k_clone_uniform_501st_Dirty";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\upper_armor_501_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\lower_armor_501_co.paa",
        };
    };
	class k_clone_unit_CG_Dirty: k_clone_unit
    {
        displayname = "Clone Trooper (Coruscant Guard, Dirty)";
        uniformclass = "k_clone_uniform_CG_Dirty";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\upper_armor_CG_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\lower_armor_CG_co.paa",
        };
    };
	class k_clone_unit_KS_Dirty: k_clone_unit
    {
        displayname = "Clone Trooper (Kamino Security, Dirty)";
        uniformclass = "k_clone_uniform_KS_Dirty";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\upper_armor_KS_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\lower_armor_KS_co.paa",
        };
    };
	class k_clone_unit_KeeliCompany_dirty: k_clone_unit
    {
        displayname = "Clone Trooper (Keeli Company, Dirty)";
        uniformclass = "k_clone_uniform_KeeliCompany_Dirty";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\upper_armor_KeeliCompany_co.paa",
            "kobra\442_equipment\uniform\data\clone_uniform\lore_units\dirty\lower_armor_KeeliCompany_co.paa",
        };
    };*/
////commando unit
	class k_commando_unit: k_scout_unit
    {
        displayname = "Clone Commando";
        model = "kobra\442_equipment\uniform\model\commando_uniform.p3d";
        uniformclass = "k_commando_uniform";
		cost=101000;
		armor=20;
        hiddenselections[]=
        {
            "chest",
            "arms",
			"legs",
			"undersuit"
        };
        hiddenselectionstextures[]=
        {
            "kobra\442_equipment\uniform\data\commando_uniform\chest_co.paa",
            "kobra\442_equipment\uniform\data\commando_uniform\arm_co.paa",
            "kobra\442_equipment\uniform\data\commando_uniform\leg_co.paa",
            "kobra\442_equipment\uniform\data\commando_uniform\undersuit_co.paa",
        };
        class Wounds
		{
			tex[]={};
			mat[]=
			{
				"kobra\442_equipment\uniform\data\commando_uniform\chest.rvmat",
				"kobra\442_equipment\uniform\data\commando_uniform\chest_injury.rvmat",
				"kobra\442_equipment\uniform\data\commando_uniform\chest_injury.rvmat",

				"kobra\442_equipment\uniform\data\commando_uniform\arm.rvmat",
				"kobra\442_equipment\uniform\data\commando_uniform\arm_injury.rvmat",
				"kobra\442_equipment\uniform\data\commando_uniform\arm_injury.rvmat",

				"kobra\442_equipment\uniform\data\commando_uniform\leg.rvmat",
				"kobra\442_equipment\uniform\data\commando_uniform\leg_injury.rvmat",
				"kobra\442_equipment\uniform\data\commando_uniform\leg_injury.rvmat",

				"kobra\442_equipment\uniform\data\commando_uniform\undersuit.rvmat",
				"kobra\442_equipment\uniform\data\commando_uniform\undersuit_injury.rvmat",
				"kobra\442_equipment\uniform\data\commando_uniform\undersuit_injury.rvmat",

				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"a3\characters_f\heads\data\hl_white.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
		
    };
	class k_commando_unit_44: k_commando_unit
    {
        displayname = "Clone Commando";
        model = "kobra\442_equipment\uniform\model\commando_uniform.p3d";
        uniformclass = "k_commando_uniform_44";
        hiddenselectionstextures[]=
        {
            "kobra\442_equipment\uniform\data\commando_uniform\unit_designs\44ab\chest_co.paa",
            "kobra\442_equipment\uniform\data\commando_uniform\unit_designs\44ab\arm_co.paa",
            "kobra\442_equipment\uniform\data\commando_uniform\unit_designs\44ab\leg_co.paa",
            "kobra\442_equipment\uniform\data\commando_uniform\undersuit_co.paa"
        };
	};
////clone light unit
    class k_clone_light_unit: k_scout_unit
    {
        displayname = "Clone Light Trooper";
        model = "kobra\442_equipment\uniform\model\clone_light_uniform.p3d";
        uniformclass = "k_clone_light_uniform";
        hiddenselections[] = 
        {
            "upper",
            "lower",
            "clan",
			"insignia"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_light_uniform\upper_armor_co.paa",
            "kobra\442_equipment\uniform\data\clone_light_uniform\lower_armor_co.paa"
        };
        class Wounds
		{
			tex[]={};
			mat[]=
			{
				"kobra\442_equipment\uniform\data\clone_light_uniform\upper_armor.rvmat",
				"kobra\442_equipment\uniform\data\clone_light_uniform\upper_armor_injury.rvmat",
				"kobra\442_equipment\uniform\data\clone_light_uniform\upper_armor_injury.rvmat",

				"kobra\442_equipment\uniform\data\clone_light_uniform\lower_armor.rvmat",
				"kobra\442_equipment\uniform\data\clone_light_uniform\lower_armor_injury.rvmat",
				"kobra\442_equipment\uniform\data\clone_light_uniform\lower_armor_injury.rvmat",

                "kobra\442_equipment\uniform\data\clone_light_uniform\upper_undersuit.rvmat",
				"kobra\442_equipment\uniform\data\clone_light_uniform\upper_undersuit_injury.rvmat",
				"kobra\442_equipment\uniform\data\clone_light_uniform\upper_undersuit_injury.rvmat",

				"kobra\442_equipment\uniform\data\clone_light_uniform\lower_undersuit.rvmat",
				"kobra\442_equipment\uniform\data\clone_light_uniform\lower_undersuit_injury.rvmat",
				"kobra\442_equipment\uniform\data\clone_light_uniform\lower_undersuit_injury.rvmat",

				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat"
			};
		};
    };
    class k_clone_light_f_unit: k_scout_unit
    {
        displayname = "Clone Light Trooper (Female)";
        model = "kobra\442_equipment\uniform\model\clone_light_uniform_f.p3d";
        uniformclass = "k_clone_light_f_uniform";
        hiddenselections[] = 
        {
            "upper",
            "lower",
            "clan",
			"insignia"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_light_uniform\upper_armorF_co.paa",
            "kobra\442_equipment\uniform\data\clone_light_uniform\lower_armorF_co.paa"
        };
        class Wounds
		{
			tex[]={};
			mat[]=
			{
				"kobra\442_equipment\uniform\data\clone_light_uniform\upper_armorF.rvmat",
				"kobra\442_equipment\uniform\data\clone_light_uniform\upper_armor_injuryF.rvmat",
				"kobra\442_equipment\uniform\data\clone_light_uniform\upper_armor_injuryF.rvmat",

				"kobra\442_equipment\uniform\data\clone_light_uniform\lower_armorF.rvmat",
				"kobra\442_equipment\uniform\data\clone_light_uniform\lower_armor_injuryF.rvmat",
				"kobra\442_equipment\uniform\data\clone_light_uniform\lower_armor_injuryF.rvmat",

                "kobra\442_equipment\uniform\data\clone_light_uniform\upper_undersuitF.rvmat",
				"kobra\442_equipment\uniform\data\clone_light_uniform\upper_undersuit_injuryF.rvmat",
				"kobra\442_equipment\uniform\data\clone_light_uniform\upper_undersuit_injuryF.rvmat",

				"kobra\442_equipment\uniform\data\clone_light_uniform\lower_undersuitF.rvmat",
				"kobra\442_equipment\uniform\data\clone_light_uniform\lower_undersuit_injuryF.rvmat",
				"kobra\442_equipment\uniform\data\clone_light_uniform\lower_undersuit_injuryF.rvmat",

				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat"
			};
		};
    };

    class k_clone_light_unit1_44: k_clone_light_unit
    {
        uniformclass = "k_clone_light_uniform1_44";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_light_uniform\unit_designs\44ab\design1\upper_armor_co.paa",
            "kobra\442_equipment\uniform\data\clone_light_uniform\unit_designs\44ab\design1\lower_armor_co.paa"
        };
    };
    class k_clone_light_unit2_44: k_clone_light_unit
    {
        uniformclass = "k_clone_light_uniform2_44";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_light_uniform\unit_designs\44ab\design2\upper_armor_co.paa",
            "kobra\442_equipment\uniform\data\clone_light_uniform\unit_designs\44ab\design2\lower_armor_co.paa"
        };
    };
    class k_clone_light_f_unit1_44: k_clone_light_f_unit
    {
        uniformclass = "k_clone_light_f_uniform1_44";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_light_uniform\unit_designs\44ab\design1\upper_armorf_co.paa",
            "kobra\442_equipment\uniform\data\clone_light_uniform\unit_designs\44ab\design1\lower_armorf_co.paa"
        };
    };
    class k_clone_light_f_unit2_44: k_clone_light_f_unit
    {
        uniformclass = "k_clone_light_f_uniform2_44";
        hiddenselectionstextures[] = 
        {
            "kobra\442_equipment\uniform\data\clone_light_uniform\unit_designs\44ab\design2\upper_armorf_co.paa",
            "kobra\442_equipment\uniform\data\clone_light_uniform\unit_designs\44ab\design2\lower_armorf_co.paa"
        };
    };
};

class UniformItem;

class CfgWeapons
{
	class U_I_CombatUniform;
	class 442_uniform_base: U_I_CombatUniform
	{
		displayname="Clone Trooper Armor";
		author = "KOBRA Mod Team";
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		picture = "\kobra\kobra_core\kobra.paa";
		icon = "\kobra\kobra_core\kobra.paa";
		model = "kobra\442_equipment\ground\k_crate_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			containerClass="Supply200";
			mass=40;
			uniformType="Neopren";
			uniformClass="";
		};
	};
////scout uniform
    class k_scout_uniform: 442_uniform_base
    {
        displayname = "[K] Scout Trooper Armor";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        class ItemInfo: Iteminfo
        {
            ContainerClass = "Supply150";
            mass = 20;
            uniformclass = "k_scout_unit";
        };
    };
	class k_scout_uniform_44: k_scout_uniform
    {
        displayname = "[44/K] Scout Trooper Armor";
        class ItemInfo: Iteminfo
        {
            ContainerClass = "Supply150";
            mass = 20;
            uniformclass = "k_scout_unit_44";
        };
    };
	class k_scout_uniform_arid: k_scout_uniform
    {
        displayname = "[K] Scout Trooper Armor (Arid)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_scout_unit_arid";
        };
    };
    class k_scout_uniform_desert: k_scout_uniform
    {
        displayname = "[K] Scout Trooper Armor (Desert)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_scout_unit_desert";
        };
    };
    class k_scout_uniform_woodland: k_scout_uniform
    {
        displayname = "[K] Scout Trooper Armor (Woodland)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_scout_unit_woodland";
        };
    };
////clone uniform
    class k_clone_uniform: k_scout_uniform
    {
        displayname = "[K] Clone Trooper Armor";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit";
        };
    };
	class k_clone_f_uniform: k_scout_uniform
    {
        displayname = "[K] Clone Trooper Armor (Female)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_f_unit";
        };
    };

	class k_clone_uniform_44: k_clone_uniform
    {
        displayname = "[44/K] Clone Trooper Armor 1";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_44";
        };
    };
	class k_clone_uniform_f_44: k_clone_f_uniform
    {
        displayname = "[44/K] Clone Trooper Armor 1 (Female)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_f_44";
        };
    };
	class k_clone_uniform1_44: k_clone_uniform
    {
        displayname = "[44/K] Clone Trooper Armor 2";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit1_44";
        };
    };
	class k_clone_uniform1_f_44: k_clone_f_uniform
    {
        displayname = "[44/K] Clone Trooper Armor 2 (Female)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit1_f_44";
        };
    };
	class k_clone_uniform2_44: k_clone_uniform
    {
        displayname = "[44/K] Clone Trooper Armor 3";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit1_44";
        };
    };
	class k_clone_uniform2_f_44: k_clone_f_uniform
    {
        displayname = "[44/K] Clone Trooper Armor 3 (Female)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit2_f_44";
        };
    };

	class k_clone_uniform_5th: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (5th)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_5th";
        };
    };

	class k_clone_uniform_13th: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (13th)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_13th";
        };
    };

	class k_clone_uniform_41stGC: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (41st Green Company)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_41stGC";
        };
    };

	class k_clone_uniform_91st: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (91st)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_91st";
        };
    };

	class k_clone_uniform_104thWolfpack: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (104th Wolfpack)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_104thWolfpack";
        };
    };

	class k_clone_uniform_104th: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (104th)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_104th";
        };
    };

	class k_clone_uniform_187th: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (187th)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_187th";
        };
    };

	class k_clone_uniform_212th: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (212th)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_212th";
        };
    };

	class k_clone_uniform_327th: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (327th)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_327th";
        };
    };

	class k_clone_uniform_332nd: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (332nd)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_332nd";
        };
    };

	class k_clone_uniform_442nd: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (442nd)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_442nd";
        };
    };

	class k_clone_uniform_501st: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (501st)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_501st";
        };
    };

	class k_clone_uniform_612th: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (612th)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_612th";
        };
    };

	class k_clone_uniform_CG: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (Coruscant Guard)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_CG";
        };
    };

	class k_clone_uniform_KeeliCompany: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (Keeli Company)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_KeeliCompany";
        };
    };

	class k_clone_uniform_KS: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (Kamino Security)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_KS";
        };
    };

////Dirty Clone Armor Section
	/*class k_clone_uniform_5th_Dirty: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (5th Fleet Security, Dirty)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_5th_Dirty";
        };
    };

	class k_clone_uniform_13th_Dirty: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (13th, Dirty)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_13th_Dirty";
        };
    };

	class k_clone_uniform_41stGC_Dirty: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (41st GC, Dirty)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_41stGC_Dirty";
        };
    };

	class k_clone_uniform_104thWolfpack_Dirty: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (104th Wolfpack, Dirty)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_104thWolfpack_Dirty";
        };
    };

	class k_clone_uniform_104th_Dirty: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (104th, Dirty)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_104th_Dirty";
        };
    };

	class k_clone_uniform_187th_Dirty: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (187th, Dirty)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_187th_Dirty";
        };
    };

	class k_clone_uniform_212th_Dirty: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (212th, Dirty)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_212th_Dirty";
        };
    };

	class k_clone_uniform_327th_Dirty: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (327th, Dirty)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_327th_Dirty";
        };
    };

	class k_clone_uniform_332nd_Dirty: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (332nd, Dirty)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_332nd_Dirty";
        };
    };

	class k_clone_uniform_442nd_Dirty: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (442nd, Dirty)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_442nd_Dirty";
        };
    };

	class k_clone_uniform_501st_Dirty: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (501st, Dirty)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_501st_Dirty";
        };
    };

	class k_clone_uniform_CG_Dirty: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (Coruscant Guard, Dirty)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_CG_Dirty";
        };
    };

	class k_clone_uniform_KS_Dirty: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (Kamino Security, Dirty)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_KS_Dirty";
        };
    };

	class k_clone_uniform_KeeliCompany_Dirty: k_clone_uniform
    {
        displayname = "[K] Clone Trooper Armor (Keeli Company, Dirty)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_unit_KeeliCompany_Dirty";
        };
    };*/

////Commando Uniform Section

    class k_commando_uniform: k_scout_uniform
    {
        displayname = "[K] Commando Armor";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_commando_unit";
        };
    };
	class k_commando_uniform_44: k_scout_uniform
    {
        displayname = "[44/K] Commando Armor";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_commando_unit_44";
        };
    };
////clone light uniform
    class k_clone_light_uniform: k_scout_uniform
    {
        displayname = "[K] Clone Trooper Light Armor";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_light_unit";
        };
    };
	class k_clone_light_f_uniform: k_scout_uniform
    {
        displayname = "[K] Clone Trooper Light Armor (Female)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_light_f_unit";
        };
    };

    class k_clone_light_uniform1_44: k_clone_light_uniform
    {
        displayname = "[44/K] Clone Trooper Light Armor 1";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_light_unit1_44";
        };
    };
    class k_clone_light_uniform2_44: k_clone_light_uniform
    {
        displayname = "[44/K] Clone Trooper Light Armor 2";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_light_unit2_44";
        };
    };
    class k_clone_light_f_uniform1_44: k_clone_light_uniform
    {
        displayname = "[44/K] Clone Trooper Light Armor 1 (Female)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_light_f_unit1_44";
        };
    };
    class k_clone_light_f_uniform2_44: k_clone_light_uniform
    {
        displayname = "[44/K] Clone Trooper Light Armor 2 (Female)";
        class ItemInfo: ItemInfo
        {
            uniformclass = "k_clone_light_f_unit2_44";
        };
    };
};