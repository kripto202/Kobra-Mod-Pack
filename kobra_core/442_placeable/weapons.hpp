    class k_weapon_base: Weapon_Base_F
    {
        scope = 0;
        scopecurator = 0;
        scopearsenal = 0;
        displayname = "base weapon item";
        author = "KOBRA Mod Team";
        editorcategory = "kobra";
        editorsubcategory = "442_weapon";
        vehicleclass = "WeaponsPrimary";
        class TransportWeapons
        {
            class weapon
            {
                name = "";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                name = "";
                count = 1;
            };
        };
    };
///clones///
    class k_weapon_dc15a: k_weapon_base
    {
        scope = 2;
        scopecurator = 2;
        displayname = "DC-15A";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_DC15A";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_762_30rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_weapon_dc15a_ugl: k_weapon_dc15a
    {
        displayname = "DC-15A UGL";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_DC15A_ugl";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                weapon = "442_762_30rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_weapon_dc15a_mc: k_weapon_dc15a
    {
        displayname = "DC-15A UBSG";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_DC15A_mc";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_762_30rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_weapon_dc15s: k_weapon_dc15a
    {
        displayname = "DC-15s";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_DC15s";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_556_30rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_weapon_dc15s_ab: k_weapon_dc15a
    {
        displayname = "DC-15AB";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_DC15s_ab";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_45_100rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_weapon_dc15sa: k_weapon_dc15a
    {
        displayname = "DC-15SA";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_DC15sa";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_127x33_10rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_weapon_dc15x: k_weapon_dc15a
    {
        displayname = "DC-15X";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_DC15x";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_408_10rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_weapon_dc15y: k_weapon_dc15a
    {
        displayname = "DC-15Y";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_DC15y";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_127x108_5rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_weapon_dc17: k_weapon_dc15a
    {
        displayname = "DC-17";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_DC17";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_9_20rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_weapon_gl: k_weapon_dc15a
    {
        displayname = "Grenade Launcher";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_gl";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_40_6rnd_he_blue_mag";
                count = 1;
            };
        };
    };
    class k_weapon_rps6: k_weapon_dc15a
    {
        displayname = "RPS-6 Rocket Launcher";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_rps6";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_rps6_heat_mag";
                count = 1;
            };
        };
    };
    class k_weapon_westar_m5: k_weapon_dc15a
    {
        displayname = "Westar M5";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_westarM5";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_65_60rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_weapon_z6: k_weapon_dc15a
    {
        displayname = "Z6 Rotary Blaster";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_z6";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_556_200rnd_blue_mag";
                count = 1;
            };
        };
    };
    class k_weapon_e6z: k_weapon_dc15a
    {
        displayname = "E6Z Rotary Blaster";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_e6z";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_556_200rnd_red_mag";
                count = 1;
            };
        };
    };

////Droids////
    class k_weapon_e5: k_weapon_dc15a
    {
        displayname = "E5 Carbine";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_e5";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_65_60rnd_red_mag";
                count = 1;
            };
        };
    };
    class k_weapon_e5c: k_weapon_dc15a
    {
        displayname = "E5 Carbine";
        class TransportWeapons
        {
            class weapon
            {
                weapon = "442_e5c";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_65_100rnd_red_mag";
                count = 1;
            };
        };
    };

///grenades///
    class k_mag_thermal_det: Item_Base_F
    {
        scope = 2;
        displayname = "Thermal Det";
        author = "KOBRA Mod Team";
        editorcategory = "kobra";
        editorsubcategory = "442_weapon";
        vehicleclass = "WeaponsPrimary";
        class TransportWeapons {};
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_thermal_det_mag";
                count = 1;
            };
        };
    };
    class k_mag_impact_grenade: k_weapon_dc15a
    {
        displayname = "Impact Grenade";
        class TransportWeapons {};
        class TransportMagazines
        {
            class magazine
            {
                magazine = "442_impact_mag";
                count = 1;
            };
        };
    };