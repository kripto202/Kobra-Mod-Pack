class cfgpatches
{
    class k_misc_44_statue
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "44_statue"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class House_F;
    class 44_statue: House_F
	{
		scope=2;
		scopecurator=2;
		author = "KOBRA Mod Team";
		displayName="44ab Statue";
		model="\kobra\k_misc_44\statue\44_statue.p3d";
		editorcategory="kobra";
		editorsubcategory="442_item";
		vehicleClass="Structures";
	};
};