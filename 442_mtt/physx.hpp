simulation="tankX";
enginePower=3000;
maxOmega=276;
peakTorque=4832;
torqueCurve[]=
	{
		{0, 0},
		{"(1600/2640)",	"(2650/2850)"},
		{"(1800/2640)", "(2800/2850)"},
		{"(1900/2640)", "(2850/2850)"},
		{"(2000/2640)", "(2800/2850)"},
		{"(2200/2640)",	"(2750/2850)"},
		{"(2400/2640)",	"(2600/2850)"},
		{"(2640/2640)",	"(2350/2850)"}
	};
thrustDelay=0.1;
clutchStrength=180;
fuelCapacity=1885;
brakeIdleSpeed=1.78;
latency=0.1;
tankTurnForce=900000;
idleRpm=700;
redRpm=2640;
engineLosses=25;
transmissionLosses=15;
class complexGearbox
	{
		GearboxRatios[]=
		{
			"R2", -3.9000001,
			"N", 0,
			"D1", 4.6999998,
			"D2", 3.5,
			"D3", 2.5999999,
			"D4", 2,
			"D5", 1.5,
			"D6", 1.125,
			"D7", 0.85000002
		};
		TransmissionRatios[]=
		{
			"High",	15
		};
		AmphibiousRatios[]=
		{
			"R1",
			-30,
			"N",
			0,
			"D1",
			50
		};
		gearBoxMode="auto";
		moveOffGear=1;
		driveString="D";
		neutralString="N";
		reverseString="R";
		transmissionDelay=0.1;
	};
class Wheels
	{
		class L2
		{
			boneName="wheel_podkoloL1";
			center="wheel_1_2_axis";
			boundary="wheel_1_2_bound";
			damping=75;
			steering=0;
			side="left";
			weight=150;
			mass=150;
			MOI=25;
			latStiffX=25;
			latStiffY=280;
			longitudinalStiffnessPerUnitGravity=100000;
			maxBrakeTorque=20000;
			sprungMass=4000;
			springStrength=324000;
			springDamperRate=36000;
			dampingRate=1;
			dampingRateInAir=8830;
			dampingRateDamaged=10;
			dampingRateDestroyed=10000;
			maxDroop=0.15000001;
			maxCompression=0.15000001;
		};
		class L3: L2
		{
			boneName="wheel_podkolol2";
			center="wheel_1_3_axis";
			boundary="wheel_1_3_bound";
		};
		class L4: L2
		{
			boneName="wheel_podkolol3";
			center="wheel_1_4_axis";
			boundary="wheel_1_4_bound";
		};
		class L5: L2
		{
			boneName="wheel_podkolol4";
			center="wheel_1_5_axis";
			boundary="wheel_1_5_bound";
		};
		class L6: L2
		{
			boneName="wheel_podkolol5";
			center="wheel_1_6_axis";
			boundary="wheel_1_6_bound";
		};
		class L7: L2
		{
			boneName="wheel_podkolol6";
			center="wheel_1_7_axis";
			boundary="wheel_1_7_bound";
		};
		class R2: L2
		{
			boneName="wheel_podkolop1";
			center="wheel_2_2_axis";
			boundary="wheel_2_2_bound";
			side="right";
		};
		class R3: R2
		{
			boneName="wheel_podkolop2";
			center="wheel_2_3_axis";
			boundary="wheel_2_3_bound";
		};
		class R4: R2
		{
			boneName="wheel_podkolop3";
			center="wheel_2_4_axis";
			boundary="wheel_2_4_bound";
		};
		class R5: R2
		{
			boneName="wheel_podkolop4";
			center="wheel_2_5_axis";
			boundary="wheel_2_5_bound";
		};
		class R6: R2
		{
			boneName="wheel_podkolop5";
			center="wheel_2_6_axis";
			boundary="wheel_2_6_bound";
		};
		class R7: R2
		{
			boneName="wheel_podkolop6";
			center="wheel_2_7_axis";
			boundary="wheel_2_7_bound";
		};
	};