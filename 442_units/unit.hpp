    class k_scout_unit: 442_unit_base
    {
        displayname = "Scout Trooper";
        model = "kobra\442_units\scout_uniform.p3d";
        uniformclass = "k_scout_uniform";
        faction = "kobra_b";
        editorSubCategory = "442_trooper";
        hiddenselections[] = 
        {
            "armor",
            "gloves",
            "undersuit"
        };
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\uniform\scout_uniform\armor_co.paa",
            "kobra\442_units\data\uniform\scout_uniform\gloves_co.paa",
            "kobra\442_units\data\uniform\scout_uniform\undersuit_co.paa"
        };
        class Wounds
		{
			tex[]={};
			mat[]=
			{
				"kobra\442_units\data\uniform\scout_uniform\armor.rvmat",
				"kobra\442_units\data\uniform\scout_uniform\armor_injury.rvmat",
				"kobra\442_units\data\uniform\scout_uniform\armor_injury.rvmat",

				"kobra\442_units\data\uniform\scout_uniform\gloves.rvmat",
				"kobra\442_units\data\uniform\scout_uniform\gloves_injury.rvmat",
				"kobra\442_units\data\uniform\scout_uniform\gloves_injury.rvmat",

                "kobra\442_units\data\uniform\scout_uniform\undersuit.rvmat",
				"kobra\442_units\data\uniform\scout_uniform\undersuit_injury.rvmat",
				"kobra\442_units\data\uniform\scout_uniform\undersuit_injury.rvmat",

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
    class k_clone_unit: k_scout_unit
    {
        displayname = "Clone Trooper";
        model = "kobra\442_units\clone_uniform.p3d";
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
            "kobra\442_units\data\uniform\clone_uniform\upper_armor_co.paa",
            "kobra\442_units\data\uniform\clone_uniform\lower_armor_co.paa"
        };
        class Wounds
		{
			tex[]={};
			mat[]=
			{
				"kobra\442_units\data\uniform\clone_uniform\upper_armor.rvmat",
				"kobra\442_units\data\uniform\clone_uniform\upper_armor_injury.rvmat",
				"kobra\442_units\data\uniform\clone_uniform\upper_armor_injury.rvmat",

				"kobra\442_units\data\uniform\clone_uniform\lower_armor.rvmat",
				"kobra\442_units\data\uniform\clone_uniform\lower_armor_injury.rvmat",
				"kobra\442_units\data\uniform\clone_uniform\lower_armor_injury.rvmat",

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