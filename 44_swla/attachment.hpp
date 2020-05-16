class SWLB_clone_nvg;
class SWLB_clone_nvg_spec;
class SWLB_clone_nvg_nco;
class SWLB_clone_nvg_spec_nco;
class SWLB_clone_rangefinder;
class SWLB_clone_ccVisor;
class SWLB_clone_mcVisor;

class 44_swla_visor_1: 44_clone_nvg_base
{
	displayname = "[44] Clone NV Visor (NVG)";
	scope = 2;
	scopearsenal = 2;
	scopecurator = 2;
	hiddenselectionstextures[] = 
	{
		"44_swla\data\attachments\44_attachments.paa"
	};
};
class 44_swla_visor_2: 44_swla_visor_1
{
	displayname = "[44] Clone NV Visor (TI)";
	visionMode[] = {"Normal", "TI"};
};

class 44_swla_visor_nco_1: SWLB_clone_nvg_nco
{
	displayname = "[44] Clone NCO NV Visor (NVG)";
	scope = 2;
	scopearsenal = 2;
	scopecurator = 2;
	hiddenselectionstextures[] = 
	{
		"44_swla\data\attachments\44_attachments.paa",
		"44_swla\data\attachments\44_attachments.paa"
	};
};
class 44_swla_visor_nco_2: 44_swla_visor_nco_1
{
	displayname = "[44] Clone NCO NV Visor (TI)";
	visionMode[] = {"Normal", "TI"};
};

class 44_swla_rangefinder_1: 44_clone_rangefinder_base
{
	displayname = "[44] Clone Rangefinder (NVG)";
	scope = 2;
	scopearsenal = 2;
	scopecurator = 2;
	hiddenselectionstextures[] = 
	{
		"44_swla\data\attachments\44_attachments.paa"
	};
};
class 44_swla_rangefinder_2: 44_swla_rangefinder_1
{
	displayname = "[44] Clone Rangefinder (TI)";
	visionMode[] = {"Normal", "TI"};
};

class 44_swla_commander_1: 44_clone_commander_visor_base
{
	displayname = "[44] Clone Commander Visor (NVG)";
	scope = 2;
	scopearsenal = 2;
	scopecurator = 2;
	hiddenselectionstextures[] = 
	{
		"44_swla\data\attachments\44_attachments.paa"
	};
};
class 44_swla_commander_2: 44_swla_commander_1
{
	displayname = "[44] Clone Commander Visor (TI)";
	visionMode[] = {"Normal", "TI"};
};

class 44_swla_marshal_commander_1: 44_clone_commander_visor_base
{
	displayname = "[44] Clone Marshal Commander Visor (NVG)";
	scope = 2;
	scopearsenal = 2;
	scopecurator = 2;
	hiddenselectionstextures[] = 
	{
		"44_swla\data\attachments\44_attachments.paa",
		"44_swla\data\attachments\44_attachments.paa"
	};
};
class 44_swla_marshal_commander_2: 44_swla_marshal_commander_1
{
	displayname = "[44] Clone Marshal Commander Visor (TI)";
	visionMode[] = {"Normal", "TI"};
};

class 44_clone_p1_nvg_1: 44_clone_p1_nvg_base
{
	displayname = "[44] Clone P1 NV Visor (NVG)";
	scope = 2;
	scopearsenal = 2;
	scopecurator = 2;
	hiddenselectionstextures[] = 
	{
		"44_swla\data\attachments\44_attachments.paa"
	};
};
class 44_clone_p1_nvg_2: 44_clone_p1_nvg_1
{
	displayname = "[44] Clone P1 NV Visor (TI)";
	visionMode[] = {"Normal", "TI"};
};

class 44_clone_p1_rangefinder_1: 44_clone_p1_rangefinder_base
{
	displayname = "[44] Clone trooper P1 rangefinder (NVG)";
	scope = 2;
	scopearsenal = 2;
	scopecurator = 2;
	hiddenselectionstextures[] = 
	{
		"44_swla\data\attachments\44_attachments.paa"
	};
};
class 44_clone_p1_rangefinder_2: 44_clone_p1_rangefinder_1
{
	displayname = "[44] Clone trooper P1 rangefinder (TI)";
	visionMode[] = {"Normal", "TI"};
};