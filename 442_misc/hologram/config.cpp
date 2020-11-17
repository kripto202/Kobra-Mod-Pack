class cfgpatches
{
    class 442_misc_hologram
    {
        author = "KOBRA Mod Team";
        requiredAddons[]={};
		requiredVersion = 0.1;
		units[] = 
        {
            "442_holo_acclamator_1",
            "442_holo_acclamator_2",
            "442_holo_lucrehulk",
            "442_holo_quasar",
            "442_holo_subjugator",
            "442_holo_venator",
            "442_holo_rx200",
            "442_holo_providence",
            "442_holo_munificent",
            "442_holo_recusent",
            "442_holo_mandator",
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class TargetBase;
    class 442_holo_acclamator_1: TargetBase
	{
		displayName="Acclamator";
		model="\442_misc\hologram\acclamator_1.p3d";
		destrType="DestructNo";
		editorcategory="kobra";
		editorsubcategory="442_holograms";
		scope=2;
		scopecurator=2;
	};
	class 442_holo_acclamator_2: 442_holo_acclamator_1
	{
		displayName="Acclamator Landed";
		model="\442_misc\hologram\acclamator_2.p3d";
	};
	class 442_holo_lucrehulk: 442_holo_acclamator_1
	{
		displayname="Lucrehulk";
		model="\442_misc\hologram\lucrehulk.p3d";
	};
	class 442_holo_quasar: 442_holo_acclamator_1
	{
		displayname="Quasar";
		model="\442_misc\hologram\quasar.p3d";
	};
	class 442_holo_subjugator: 442_holo_acclamator_1
	{
		displayname="Subjugator";
		model="\442_misc\hologram\subjugator.p3d";
	};
	class 442_holo_venator: 442_holo_acclamator_1
	{
		displayname="Venator";
		model="\442_misc\hologram\venator.p3d";
	};
	class 442_holo_rx200: 442_holo_acclamator_1
	{
		displayname="RX200";
		model="\442_misc\hologram\rx200.p3d";
	};
	class 442_holo_providence: 442_holo_acclamator_1
	{
		displayname="Providence";
		model="\442_misc\hologram\providence.p3d";
	};
	class 442_holo_munificent: 442_holo_acclamator_1
	{
		displayname="Munificent";
		model="\442_misc\hologram\munificent.p3d";
	};
	class 442_holo_recusent: 442_holo_acclamator_1
	{
		displayname="Recusent";
		model="\442_misc\hologram\recusent.p3d";
	};
	class 442_holo_mandator: 442_holo_acclamator_1
	{
		displayname="mandator";
		model="\442_misc\hologram\mandator.p3d";
	};
};