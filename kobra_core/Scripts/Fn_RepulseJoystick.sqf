_vehicle = _this;

_state = _vehicle getVariable["impulsor", 0];

if (_state == 1 or _state == 2) then {
	[_vehicle, "kobra_Vic_ImpulseOff"] remoteExec ["say3d",0,false];
};

if (_state == 0) then {
	// If we are current doing nothing, start braking
	_state = -1;
} else {
	// otherwise do nothing
	_state = 0;
};

_vehicle setVariable["impulsor", _state];