///p2
	
	class 9_swla_uniform_clean: k_swla_uniform
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
			uniformClass="9_swla_trooper_clean";
		};
	};
	class 9_swla_uniform_worn: 9_swla_uniform_clean
	{
		displayname = "[9/LS] Clone Trooper Uniform";
		class Iteminfo: Iteminfo
		{
			uniformClass="9_swla_trooper_worn";
		};
	};
	class 9_swla_uniform_nco: 9_swla_uniform_clean
	{
		displayname = "[9/LS] Clone Trooper Uniform (NCO)";
		class Iteminfo: Iteminfo
		{
			uniformClass="9_swla_trooper_nco";
		};
	};
	class 9_swla_uniform_lt: 9_swla_uniform_clean
	{
		displayname = "[9/LS] Clone Trooper Uniform (Lieutenant)";
		class Iteminfo: Iteminfo
		{
			uniformClass="9_swla_trooper_lt";
		};
	};
	class 9_swla_uniform_cpt: 9_swla_uniform_clean
	{
		displayname = "[9/LS] Clone Trooper Uniform (Captain)";
		class Iteminfo: Iteminfo
		{
			uniformClass="9_swla_trooper_cpt";
		};
	};
	class 9_swla_uniform_cmd: 9_swla_uniform_clean
	{
		displayname = "[9/LS] Clone Trooper Uniform (Commander)";
		class Iteminfo: Iteminfo
		{
			uniformClass="9_swla_trooper_cmd";
		};
	};