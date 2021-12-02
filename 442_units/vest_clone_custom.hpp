//44th attack battalion
    class k_44ab_clone_kripto_vest: k_clone_vest_heavy
    {
        displayname = "[K/44] Clone Vest (Kripto)";
        hiddenselectionstextures[] = 
		{
			"", //kama left
			"kobra\442_units\data\unit_designs\44_attack_battalion\kripto\kama_co.paa", //kama right
            
            //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left back

            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right back

            //pouch2
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            "", //holster
            "kobra\442_units\data\vests\clone_vest\leg_pouch_co.paa", //leg_pouchL
            "kobra\442_units\data\vests\clone_vest\leg_pouch_co.paa", //leg_pouchR

            "kobra\442_units\data\unit_designs\44_attack_battalion\kripto\arc_pauldron_co.paa", //pauldron_arcC
            "kobra\442_units\data\unit_designs\44_attack_battalion\kripto\arc_pauldron_co.paa", //pauldron_arcL
            "kobra\442_units\data\unit_designs\44_attack_battalion\kripto\arc_pauldron_co.paa", //pauldron_arcR
            "", //pauldron_ncoL
            "", //pauldron_ncoR
            "", //arc_chest
            "", //arc_legs
            "", //arc_pouchL
            "", //arc_pouchR
		};
        class itemInfo: ItemInfo
        {
            containerclass = "supply200";
            mass = 50;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.1;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.3;
                };
                class legs
                {
                    hitpointName = "HitLegs";
                    armor = 20;
                    passthrough = 0.3;
                };
            };
        };
    };
    class k_44ab_clone_smith_vest: k_clone_vest_heavy
    {
        displayname = "[K/44] Clone Vest (Smith)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\unit_designs\44_attack_battalion\smith\kama_co.paa", //kama left
			"", //kama right
            
            //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left front
            "", //left center
            "", //left back

            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right center
            "", //right back

            //pouch2
            "", //left front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcC
            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcL
            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcR

            "", //pauldron_ncoL
            "", //pauldron_ncoR

            "kobra\442_units\data\vests\clone_vest\arc_plates_co.paa", //arc_chest
            "kobra\442_units\data\vests\clone_vest\arc_plates_co.paa", //arc_legs

            "", //arc_pouchL
            "kobra\442_units\data\vests\clone_vest\arc_pouch_co.paa", //arc_pouchR
        };
        class itemInfo: ItemInfo
        {
            containerclass = "supply200";
            mass = 50;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.1;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.3;
                };
                class legs
                {
                    hitpointName = "HitLegs";
                    armor = 20;
                    passthrough = 0.3;
                };
            };
        };
    };
    class k_44ab_clone_monty_vest: k_clone_vest_heavy
    {
        displayname = "[K/44] Clone Vest (Monty)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\unit_designs\44_attack_battalion\monty\kama_co.paa", //kama left
			"kobra\442_units\data\unit_designs\44_attack_battalion\monty\kama_co.paa", //kama right
            
            //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left back

            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right back

            //pouch2
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcC
            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcL
            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcR

            "", //pauldron_ncoL
            "", //pauldron_ncoR

            "kobra\442_units\data\vests\clone_vest\arc_plates_co.paa", //arc_chest
            "kobra\442_units\data\vests\clone_vest\arc_plates_co.paa", //arc_legs

            "", //arc_pouchL
            "kobra\442_units\data\vests\clone_vest\arc_pouch_co.paa", //arc_pouchR
        };
        class itemInfo: ItemInfo
        {
            containerclass = "supply200";
            mass = 50;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.1;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.3;
                };
                class legs
                {
                    hitpointName = "HitLegs";
                    armor = 20;
                    passthrough = 0.3;
                };
            };
        };
    };
    class k_44ab_clone_canada_vest: k_clone_vest_heavy
    {
        displayname = "[K/44] Clone Vest (Canada)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\unit_designs\44_attack_battalion\canada\kama_co.paa", //kama left
			"kobra\442_units\data\unit_designs\44_attack_battalion\canada\kama_co.paa", //kama right
            
            //pouch1
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch2
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left center
            "", //left back

            "", //right front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch4
            "", //left front
            "", //left center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left back

            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right front
            "", //right center
            "", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right back

            "", //holster
            "kobra\442_units\data\vests\clone_vest\leg_pouch_co.paa", //leg_pouchL
            "kobra\442_units\data\vests\clone_vest\leg_pouch_co.paa", //leg_pouchR

            "kobra\442_units\data\unit_designs\44_attack_battalion\canada\arc_pauldron_co.paa", //pauldron_arcC
            "kobra\442_units\data\unit_designs\44_attack_battalion\canada\arc_pauldron_co.paa", //pauldron_arcL
            "kobra\442_units\data\unit_designs\44_attack_battalion\canada\arc_pauldron_co.paa", //pauldron_arcR

            "", //pauldron_ncoL
            "", //pauldron_ncoR

            "kobra\442_units\data\unit_designs\44_attack_battalion\canada\arc_plates_co.paa", //arc_chest
            "kobra\442_units\data\unit_designs\44_attack_battalion\canada\arc_plates_co.paa", //arc_legs

            "kobra\442_units\data\vests\clone_vest\arc_pouch_co.paa", //arc_pouchL
            "", //arc_pouchR
        };
        class itemInfo: ItemInfo
        {
            containerclass = "supply200";
            mass = 50;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.1;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.3;
                };
                class legs
                {
                    hitpointName = "HitLegs";
                    armor = 20;
                    passthrough = 0.3;
                };
            };
        };
    };
    class k_44ab_clone_ivanov_vest: k_clone_vest_heavy
    {
        displayname = "[K/44] Clone Vest (Ivanov)";
        hiddenselectionstextures[] = 
        {
            "", //kama left
			"kobra\442_units\data\unit_designs\44_attack_battalion\ivanov\kama_co.paa", //kama right
            
            //pouch1
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch2
            "", //left front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch3
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left front
            "", //left center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            "", //holster
            "kobra\442_units\data\vests\clone_vest\leg_pouch_co.paa", //leg_pouchL
            "kobra\442_units\data\vests\clone_vest\leg_pouch_co.paa", //leg_pouchR

            "kobra\442_units\data\unit_designs\44_attack_battalion\ivanov\arc_pauldron_co.paa", //pauldron_arcC
            "kobra\442_units\data\unit_designs\44_attack_battalion\ivanov\arc_pauldron_co.paa", //pauldron_arcL
            "kobra\442_units\data\unit_designs\44_attack_battalion\ivanov\arc_pauldron_co.paa", //pauldron_arcR

            "", //pauldron_ncoL
            "", //pauldron_ncoR

            "", //arc_chest
            "", //arc_legs

            "", //arc_pouchL
            "kobra\442_units\data\vests\clone_vest\arc_pouch_co.paa", //arc_pouchR
        };
        class itemInfo: ItemInfo
        {
            containerclass = "supply200";
            mass = 50;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.1;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.3;
                };
                class legs
                {
                    hitpointName = "HitLegs";
                    armor = 20;
                    passthrough = 0.3;
                };
            };
        };
    };
    class k_44ab_clone_wumbo_vest: k_clone_vest_heavy
    {
        displayname = "[K/44] Clone Vest (Wumbo)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\vests\clone_vest\kama_co.paa", //kama left
			"kobra\442_units\data\vests\clone_vest\kama_co.paa", //kama right
            
            //pouch1
            "", //left front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left center
            "", //left back

            "", //right front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right center
            "", //right back

            //pouch2
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcC
            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcL
            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcR

            "", //pauldron_ncoL
            "", //pauldron_ncoR

            "", //arc_chest
            "", //arc_legs

            "", //arc_pouchL
            "kobra\442_units\data\vests\clone_vest\arc_pouch_co.paa", //arc_pouchR
        };
        class itemInfo: ItemInfo
        {
            containerclass = "supply200";
            mass = 50;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.1;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.3;
                };
                class legs
                {
                    hitpointName = "HitLegs";
                    armor = 20;
                    passthrough = 0.3;
                };
            };
        };
    };
    class k_44ab_clone_zepher_vest: k_clone_vest_heavy
    {
        displayname = "[K/44] Clone Vest (Zepher)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\unit_designs\44_attack_battalion\zepher\kama_co.paa", //kama left
			"kobra\442_units\data\unit_designs\44_attack_battalion\zepher\kama_co.paa", //kama right
            
            //pouch1
            "", //left front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left center
            "", //left back

            "", //right front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right center
            "", //right back

            //pouch2
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            "", //holster
            "kobra\442_units\data\vests\clone_vest\leg_pouch_co.paa", //leg_pouchL
            "kobra\442_units\data\vests\clone_vest\leg_pouch_co.paa", //leg_pouchR

            "kobra\442_units\data\unit_designs\44_attack_battalion\zepher\arc_pauldron_co.paa", //pauldron_arcC
            "kobra\442_units\data\unit_designs\44_attack_battalion\zepher\arc_pauldron_co.paa", //pauldron_arcL
            "kobra\442_units\data\unit_designs\44_attack_battalion\zepher\arc_pauldron_co.paa", //pauldron_arcR

            "", //pauldron_ncoL
            "", //pauldron_ncoR

            "kobra\442_units\data\vests\clone_vest\arc_plates_co.paa", //arc_chest
            "kobra\442_units\data\vests\clone_vest\arc_plates_co.paa", //arc_legs

            "kobra\442_units\data\vests\clone_vest\arc_pouch_co.paa", //arc_pouchL
            "kobra\442_units\data\vests\clone_vest\arc_pouch_co.paa", //arc_pouchR
        };
        class itemInfo: ItemInfo
        {
            containerclass = "supply200";
            mass = 50;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.1;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.3;
                };
                class legs
                {
                    hitpointName = "HitLegs";
                    armor = 20;
                    passthrough = 0.3;
                };
            };
        };
    };
    class k_44ab_clone_zeressin_vest: k_clone_vest_heavy
    {
        displayname = "[K/44] Clone Vest (Zeressin)";
        hiddenselectionstextures[] = 
        {
            "", //kama left
			"kobra\442_units\data\unit_designs\44_attack_battalion\zeressin\kama_co.paa", //kama right
            
            //pouch1
            "", //left front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left center
            "", //left back

            "", //right front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right center
            "", //right back

            //pouch2
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            "", //holster
            "", //leg_pouchL
            "", //leg_pouchR

            "kobra\442_units\data\unit_designs\44_attack_battalion\zeressin\arc_pauldron_co.paa", //pauldron_arcC
            "", //pauldron_arcL
            "kobra\442_units\data\unit_designs\44_attack_battalion\zeressin\arc_pauldron_co.paa", //pauldron_arcR

            "", //pauldron_ncoL
            "", //pauldron_ncoR

            "", //arc_chest
            "", //arc_legs

            "kobra\442_units\data\vests\clone_vest\arc_pouch_co.paa", //arc_pouchL
            "", //arc_pouchR
        };
        class itemInfo: ItemInfo
        {
            containerclass = "supply200";
            mass = 50;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.1;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.3;
                };
                class legs
                {
                    hitpointName = "HitLegs";
                    armor = 20;
                    passthrough = 0.3;
                };
            };
        };
    };
    class k_44ab_clone_barker_vest: k_clone_vest_heavy
    {
        displayname = "[K/44] Clone Vest (Barker)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\unit_designs\44_attack_battalion\barker\kama_co.paa", //kama left
			"kobra\442_units\data\unit_designs\44_attack_battalion\barker\kama_co.paa", //kama right
            
            //pouch1
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch2
            "", //left front
            "", //left center
            "", //left back

            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right front
            "", //right center
            "", //right back

            //pouch3
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right center
            "", //right back

            "", //holster
            "kobra\442_units\data\vests\clone_vest\leg_pouch_co.paa", //leg_pouchL
            "kobra\442_units\data\vests\clone_vest\leg_pouch_co.paa", //leg_pouchR

            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcC
            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcL
            "", //pauldron_arcR

            "", //pauldron_ncoL
            "", //pauldron_ncoR

            "", //arc_chest
            "", //arc_legs

            "", //arc_pouchL
            "", //arc_pouchR
        };
        class itemInfo: ItemInfo
        {
            containerclass = "supply200";
            mass = 50;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.1;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.3;
                };
                class legs
                {
                    hitpointName = "HitLegs";
                    armor = 20;
                    passthrough = 0.3;
                };
            };
        };
    };
    class k_44ab_clone_rex_vest: k_clone_vest_heavy
    {
        displayname = "[K/44] Clone Vest (Rex)";
        hiddenselectionstextures[] = 
        {
            "kobra\442_units\data\unit_designs\44_attack_battalion\rex\kama_co.paa", //kama left
			"kobra\442_units\data\unit_designs\44_attack_battalion\rex\kama_co.paa", //kama right
            
            //pouch1
            "", //left front
            "", //left center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left back

            "", //right front
            "", //right center
            "", //right back

            //pouch2
            "", //left front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left center
            "", //left back

            "", //right front
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right center
            "", //right back

            //pouch3
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //left front
            "", //left center
            "", //left back

            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right front
            "", //right center
            "", //right back

            //pouch4
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "kobra\442_units\data\vests\clone_vest\clone_belt_co.paa", //right back

            //pouch5
            "", //left front
            "", //left center
            "", //left back

            "", //right front
            "", //right center
            "", //right back

            "", //holster
            "kobra\442_units\data\vests\clone_vest\leg_pouch_co.paa", //leg_pouchL
            "kobra\442_units\data\vests\clone_vest\leg_pouch_co.paa", //leg_pouchR

            "kobra\442_units\data\vests\clone_vest\arc_pauldron_co.paa", //pauldron_arcC
            "kobra\442_units\data\unit_designs\44_attack_battalion\rex\arc_pauldron_co.paa", //pauldron_arcL
            "", //pauldron_arcR

            "", //pauldron_ncoL
            "", //pauldron_ncoR

            "kobra\442_units\data\vests\clone_vest\arc_plates_co.paa", //arc_chest
            "kobra\442_units\data\vests\clone_vest\arc_plates_co.paa", //arc_legs

            "", //arc_pouchL
            "kobra\442_units\data\vests\clone_vest\arc_pouch_co.paa", //arc_pouchR
        };
        class itemInfo: ItemInfo
        {
            containerclass = "supply200";
            mass = 50;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.1;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.3;
                };
                class legs
                {
                    hitpointName = "HitLegs";
                    armor = 20;
                    passthrough = 0.3;
                };
            };
        };
    };