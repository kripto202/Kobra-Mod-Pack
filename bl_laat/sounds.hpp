soundEngineOffExt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_ext_stop",0.5,0.5,600};
soundEngineOffInt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_int_stop",0.316228,0.5};
landingSoundInt[] = {"landingSoundInt0",0.5,"landingSoundInt1",0.5};
landingSoundInt0[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",1,1,100};
landingSoundInt1[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",1,1,100};
landingSoundOut[] = {"landingSoundOut0",0.5,"landingSoundOut1",0.5};
landingSoundOut0[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",1.77828,1,100};
landingSoundOut1[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",1.77828,1,100};

class Sounds: Sounds
{
	class EngineExt
	{
		frequency = "rotorSpeed";
		sound[] = {"LAAT\sounds\laatengine_new.ogg",1,1,300};
		volume = "camPos*((rotorSpeed-0.72)*4)";
	};
	class EngineInt
	{
		frequency = "rotorSpeed";
		sound[] = {"LAAT\sounds\laatengine_new.ogg",0.3,1};
		volume = "2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
	};
	class RoterExt
	{
		cone[] = {1.6,3.14,1.6,0.95};
		frequency = "rotorSpeed * (1-rotorThrust/5)";
		sound[] = {"LAAT\sounds\laatengine_new.ogg",1,1,1000};
		volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
	};
	class RoterInt
	{
		frequency = "rotorSpeed * (1-rotorThrust/5)";
		sound[] = {"LAAT\sounds\laatengine_new.ogg",0.3,1};
		volume = "(1-camPos) * (rotorSpeed factor[0.3, 1]) * (1 + rotorThrust)";
	};
};
class SoundsExt: SoundsExt
{
	class Sounds: Sounds
	{
		class EngineExt
		{
			frequency = "rotorSpeed";
			sound[] = {"LAAT\sounds\laatengine_new.ogg",1,1,300};
			volume = "camPos*((rotorSpeed-0.72)*4)";
		};
		class EngineInt
		{
			frequency = "rotorSpeed";
			sound[] = {"LAAT\sounds\laatengine_new.ogg",0.3,1};
			volume = "2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
		};
		class RoterExt
		{
			cone[] = {1.6,3.14,1.6,0.95};
			frequency = "rotorSpeed * (1-rotorThrust/5)";
			sound[] = {"LAAT\sounds\laatengine_new.ogg",1,1,1000};
			volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
		};
		class RoterInt
		{
			frequency = "rotorSpeed * (1-rotorThrust/5)";
			sound[] = {"LAAT\sounds\laatengine_new.ogg",0.3,1};
			volume = "(1-camPos) * (rotorSpeed factor[0.3, 1]) * (1 + rotorThrust)";
		};
	};
};