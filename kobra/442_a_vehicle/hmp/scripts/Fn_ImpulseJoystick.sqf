_laat = _this;

_state = _laat getVariable["impulsor", 0];


if (_state == 1) then {
	// If we are current going slowly go faster
	_state = 2;
} else {
	// otherwise go slow
	_state = 1;
};

_laat setVariable["impulsor", _state];