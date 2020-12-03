_vehicle = _this;

_state = _vehicle getVariable["impulsor", 0];


if (_state == 0 and isEngineOn _vehicle) then {
	[_vehicle, "kobra_Vic_ImpulseOn"] remoteExec ["say3d",0,false];
};


if (_state == 1) then {
	// If we are current going slowly go faster
	_state = 2;
} else {
	// otherwise go slow
	_state = 1;
};

_vehicle setVariable["impulsor", _state];