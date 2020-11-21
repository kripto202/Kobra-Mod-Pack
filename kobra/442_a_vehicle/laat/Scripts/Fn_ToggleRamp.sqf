	_player = player;
	_vehicle = objectParent _player;
	if (_player == currentPilot _vehicle ) then {
	
		if ( _vehicle animationsourcephase "laat_ramp_open" == 0 ) then {
			[_vehicle, "laat_ramp"] remoteExec ["say3d",0,false];
			_vehicle animateSource ["laat_ramp_open", 1];
		} else {
			[_vehicle, "laat_ramp"] remoteExec ["say3d",0,false];
			_vehicle animateSource ["laat_ramp_open", 0];
		};
	};