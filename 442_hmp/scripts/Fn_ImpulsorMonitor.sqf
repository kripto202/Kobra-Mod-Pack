#define SPEED_KPH(kph) (kph / 3.6)

params ["_laat"];

while {true} do {

	if (driver _laat == player) then {
	
		_state = _laat getVariable ["impulsor", 0];
		
	
		_speed = (vectorDir _laat) vectorDotProduct (velocity _laat);
		_applyThrust = false;
		_error = 0;
		
		if (_state == 1 and _speed < SPEED_KPH(400)) then {
			_error = SPEED_KPH(400) - _speed;
			_applyThrust = true;
		};		
		
		if (_state == 2 and _speed < SPEED_KPH(600)) then {
			_error = SPEED_KPH(600) - _speed;
			_applyThrust = true;
		};
		
		if (_state == -1 and _speed > SPEED_KPH(50)) then {
			_error = SPEED_KPH(50) - _speed;
			_applyThrust = true;
		};
		
		_error = [_error * 5, -20, 20] call BIS_fnc_clamp;
		
		if (_applyThrust and fuel _laat != 0) then {
			if (_state == 1) then {_laat setFuel(fuel _laat - 0.0005);};
			if (_state == 2) then {_laat setFuel(fuel _laat - 0.001);};
			_v = velocity _laat;
			_a = (vectorDir _laat) vectorMultiply (_error * 0.2);
			_laat setVelocity (_v vectorAdd _a);
		};
		if (fuel _laat == 0) then {
			_laat setVariable ["impulsor", 0];
		};
		
		// update the display on the screen
		_state_text = "<t size=2>Off</t>";
		if (_state == -1) then {
			_state_text = "<t size=2 color='#ff0000'>Repulsor</t>";
		};
		if (_state == 1) then {
			_state_text = "<t size=2>Impuslor: </t><t size=2 color='#427BF5'>On - 400 kph</t>";
		};
		if (_state == 2) then {
			_state_text = "<t size=2>Impuslor: </t><t size=2 color='#42AAF5'>On - 600 kph</t>";
		};
		
	
		hintSilent parseText _state_text;
	};

	sleep 0.1;
};