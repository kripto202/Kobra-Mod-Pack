class CfgPatches{
	class 442_clone{
		author="kripto202";
		requiredaddons[] = {};
		units[]={};
		weapons[]={};
	};
};

class CfgVehicles
{
	class B_Kitbag_rgr;
	class k_swla_clone_bag_base;
	class 442_jumppack: B_Kitbag_rgr
	{
		author = "kripto202";
		scope = 2;
		picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		displayname = "[K] Jumppack";
		model = "442_jumppack\jumppack.p3d";
		maximumload = 150;
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"442_jumppack\data\jumppack_co.paa"
		};
		NSM_jumppack_is_jumppack=1;
		NSM_jumppack_spam_delay=1;
		NSM_jumppack_energy_capacity=200;
		NSM_jumppack_recharge=5;
		NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = 
		{
			{
				"effect1",
				{0,.6,1} // {side to side , forward, verticle}
			},
			{
				"effect2",
				{0,.6,1}
			}
		};
		NSM_jumppack_sound_ignite[]=
		{
			"NSM_Main\sounds\cdv21Start.ogg"
		};
		NSM_jumppack_sound_land[]=
		{
			"NSM_Main\sounds\cdv21End.ogg"
		};
		NSM_jumppack_sound_idle[]=
		{
			"NSM_Main\sounds\cdv21Idle.ogg"
		};
		NSM_jumppack_jump_types[]=
		{
			{
				"Forward Jump",
				{12,20,75,0,0,0}
			}
		};
	};
	class 442_jt12: 442_jumppack
	{
		maximumload=150;
		picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		displayName="[K] JT-12 Jumppack";
		model = "442_jumppack\jt12.p3d";
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"442_jumppack\data\jt12_body_co.paa"
		};
		NSM_jumppack_is_jumppack=1;
		NSM_jumppack_spam_delay=1;
		NSM_jumppack_energy_capacity=200;
		NSM_jumppack_recharge=5;
		NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = 
		{
			{
				"effect1",
				{0,.6,1} // {side to side , forward, verticle}
			},
			{
				"effect2",
				{0,.6,1}
			}
		};
		NSM_jumppack_sound_ignite[]=
		{
			"NSM_Main\sounds\cdv21Start.ogg"
		};
		NSM_jumppack_sound_land[]=
		{
			"NSM_Main\sounds\cdv21End.ogg"
		};
		NSM_jumppack_sound_idle[]=
		{
			"NSM_Main\sounds\cdv21Idle.ogg"
		};
		NSM_jumppack_jump_types[]=
		{
			
			{
				"Forward Jump",
				{12,20,50,0,0,0}
			},
			
			{
				"Short Jump",
				{25,7,20,0,1,1}
			}
		};
	};
	class 442_jt12_radio: 442_jt12
	{
		model = "442_jumppack\jt12_radio.p3d";
		scope = 2;
		NSM_jumppack_is_jumppack=1;
		NSM_jumppack_spam_delay=1;
		NSM_jumppack_energy_capacity=200;
		NSM_jumppack_recharge=5;
		NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = 
		{
			{
				"effect1",
				{0,.6,1} // {side to side , forward, verticle}
			},
			{
				"effect2",
				{0,.6,1}
			}
		};
		NSM_jumppack_sound_ignite[]=
		{
			"NSM_Main\sounds\cdv21Start.ogg"
		};
		NSM_jumppack_sound_land[]=
		{
			"NSM_Main\sounds\cdv21End.ogg"
		};
		NSM_jumppack_sound_idle[]=
		{
			"NSM_Main\sounds\cdv21Idle.ogg"
		};
		NSM_jumppack_jump_types[]=
		{
			{
				"Forward Jump",
				{12,20,50,0,0,0}
			},
			{
				"Short Jump",
				{25,7,20,0,1,1}
			}
		};
		hiddenselections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[] = 
		{
			"442_jumppack\data\jt12_body_co.paa",
			"442_jumppack\data\radio_co.paa"
		};
		maximumload=150;
		picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		displayName="[K] JT-12 Jumppack (Radio)";
		tf_dialog="SWLB_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
	};
};