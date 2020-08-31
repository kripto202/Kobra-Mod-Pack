
	class k_swla_uniform_base: U_I_CombatUniform
	{
		displayname="Clone Trooper Armor";
		author = "KOBRA Mod Team";
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		picture = "\442_equipment\vests\data\ui\icon_swlb_clone_uniform_ca.paa";
		model="442_units\clones\base_body_gh"; //model for the ground
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			containerClass="Supply200";
			mass=40;
			uniformType="Neopren";
			uniformClass="k_swla_unit_base";
		};
	};
	class k_swla_uniform_mc_base: U_I_CombatUniform
	{
		author = "KOBRA Mod Team";
		scope=0;
		displayName="Clone marshal commander armor";
		picture = "\442_equipment\vests\data\ui\icon_swlb_clone_uniform_ca.paa";
		model="442_units\clones\base_body_gh";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="k_swla_mc_unit_base"; //link to unit
			containerClass="Supply200";
			uniformType="Neopren";
			mass=40;
		};
	};
	class k_b1_uniform_base: SWLB_b1_uniform
	{
		author = "KOBRA Mod Team";
		scope = 0;
		displayname = "b1 uniform";
		picture="\SWLB_droids\data\ui\icon_b1_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_b1_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="k_swla_mc_unit_base"; //link to unit
			containerClass="Supply200";
			uniformType="Neopren";
			mass=40;
		};
	};