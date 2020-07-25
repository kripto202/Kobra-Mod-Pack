_laat = _this;

_state = _laat getVariable["impulsor", 0];


if (_state == 0) then {
	// If we are current doing nothing, start braking
	_state = -1;
} else {
	// otherwise do nothing
	_state = 0;
};

_laat setVariable["impulsor", _state];