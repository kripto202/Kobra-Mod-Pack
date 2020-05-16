class UserActions
		{
			class ThrusterDisngage
            {
                condition = "(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >10) )";
                displayName = "<t color='#FF9933'>[RepulsorBrake On]</t>";
                displayNameDefault = "<t color='#FF9933'>[RepulsorBrake On]</t>";
                onlyForPlayer = 1;
                position = "pilotview";
                priority = 21;
                radius = 20;
                statement = "this execVM ""\LAAT\initTD.sqf""";
                textToolTip = "<t color='#FF9933'>[RepulsorBrake On]</t>";
            };
            class ThrusterDisngage2
            {
                condition = "((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
                displayName = "<t color='#FF9933'>[RepulsorBrake On]</t>";
                displayNameDefault = "<t color='#FF9933'>[RepulsorBrake On]</t>";
                onlyForPlayer = 1;
                position = "pilotview";
                priority = 21;
                radius = 20;
                statement = "this execVM ""\LAAT\initTD.sqf""";
                textToolTip = "<t color='#FF9933'>[RepulsorBrake On]</t>";
            };
            class thrusterEngage
            {
                condition = "(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >10) )";
                displayName = "<t color='#4C9900'>[Impulsor On]</t>";
                displayNameDefault = "<t color='#4C9900'>[Impulsor On]</t>";
                onlyForPlayer = 1;
                position = "pilotview";
                priority = 21;
                radius = 20;
                statement = "this execVM ""\LAAT\initTE.sqf""";
                textToolTip = "<t color='#4C9900'>[Impulsor On]</t>";
            };
		};