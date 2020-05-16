// Author: BiT

#define SPEED_KPH(kph) (kph / 3.6)

params ["_vehicle"];

while {true} do {

	if (driver _vehicle == player) then {
	
		_state = _vehicle getVariable ["impulsor", 0];
		
	
		_speed = (vectorDir _vehicle) vectorDotProduct (velocity _vehicle);
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

		if(_state == -1 and _speed < SPEED_KPH(51)) then {
			_vehicle setVariable ["impulsor", 0];
			//_applyThrust = false;
		};
		
		_error = [_error * 5, -20, 20] call BIS_fnc_clamp;
		
		if (_applyThrust and fuel _vehicle != 0) then {
			if (_state == 1) then {_vehicle setFuel(fuel _vehicle - 0.0001);};
			if (_state == 2) then {_vehicle setFuel(fuel _vehicle - 0.0005);};
			_v = velocity _vehicle;
			_a = (vectorDir _vehicle) vectorMultiply (_error * 0.2);
			_vehicle setVelocity (_v vectorAdd _a);
		};
		if (fuel _vehicle == 0 and (_state == 1 or _state == 2 or _state == -1)) then {
			[_vehicle, "kobra_Vic_ImpulseOff"] remoteExec ["say3d",0,false];
			_vehicle setVariable ["impulsor", 0];
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

	if(!alive _vehicle) exitWith {};

	sleep 0.1;
};