///p2
	class uniformItem;
	class k_ls_9_uniform_clean: k_ls_uniform
	{
		displayname = "[9/LS] Clone Trooper Uniform (Clean)";
		scope = 2;
		//picture = "9_swla\data\ui\preview\9_body.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			containerClass="Supply200";
			mass=40;
			uniformType="Neopren";
			uniformClass="k_ls_9_trooper_clean";
		};
	};
	class k_ls_9_uniform_worn: k_ls_9_uniform_clean
	{
		displayname = "[9/LS] Clone Trooper Uniform";
		class Iteminfo: Iteminfo
		{
			uniformClass="k_ls_9_trooper_worn";
		};
	};
	class k_ls_9_uniform_nco: k_ls_9_uniform_clean
	{
		displayname = "[9/LS] Clone Trooper Uniform (NCO)";
		class Iteminfo: Iteminfo
		{
			uniformClass="k_ls_9_trooper_nco";
		};
	};
	class k_ls_9_uniform_lt: k_ls_9_uniform_clean
	{
		displayname = "[9/LS] Clone Trooper Uniform (Lieutenant)";
		class Iteminfo: Iteminfo
		{
			uniformClass="k_ls_9_trooper_lt";
		};
	};
	class k_ls_9_uniform_cpt: k_ls_9_uniform_clean
	{
		displayname = "[9/LS] Clone Trooper Uniform (Captain)";
		class Iteminfo: Iteminfo
		{
			uniformClass="k_ls_9_trooper_cpt";
		};
	};
	class k_ls_9_uniform_cmd: k_ls_9_uniform_clean
	{
		displayname = "[9/LS] Clone Trooper Uniform (Commander)";
		class Iteminfo: Iteminfo
		{
			uniformClass="k_ls_9_trooper_cmd";
		};
	};