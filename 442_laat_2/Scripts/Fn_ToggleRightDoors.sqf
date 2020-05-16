
	_player = player;
	_vehicle = objectParent _player;
	if (_player == currentPilot _vehicle ) then {
	
		if( _vehicle animationsourcephase "laat_door_r" == 1) then {
			[_vehicle, "laat_door_open"] remoteExec ["say3d",0,false];
			_vehicle animateSource ["laat_door_r",0];
		} else {
			[_vehicle, "laat_door_close"] remoteExec ["say3d",0,false];
			_vehicle animateSource ["laat_door_r", 1];
		};
	};