class CfgPatches
{
	class 442_hallway
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"442_floor",
			"442_roof",
			"442_roof_r",
			"442_wall",
			"442_wall_light",
			"442_wall_light_r",
			"442_segment",
			"442_segment_r",
			"442_door",
			"442_2way_rep",
			"442_2way_rep_r",
			"442_3way_rep",
			"442_3way_rep_r",
			"442_4way_rep",
			"442_5way_rep_r",
			"442_corner_rep",
			"442_corner_rep_r"
		};
		author="kripto202";
	};
};
class CfgVehicles
{
	class House_F;
	class 442_floor: House_F
	{
		scope=2;
		scopecurator=2;
		author="kripto202";
		displayName="Floor";
		model="\442_structures\hallway\floor.p3d";
		editorcategory="kobra";
		editorsubcategory="442_hallway";
		vehicleClass="Structures";
		destrtype="DestructNo";
		hiddenselections[]=
		{
			"tile",
			"lower"
		};
		hiddenselectionstextures[]=
		{
			"442_structures\hallway\data\tile_co.paa",
			"442_structures\hallway\data\lower_co.paa"
		};
	};
	class 442_roof: 442_floor
	{
		displayName="Roof Light";
		model="\442_structures\hallway\rooflight.p3d";
		hiddenselections[]=
		{
			"roof",
			"light"
		};
		class MarkerLights
		{
			class Light_1
			{
				color[]={1,1,1};
				ambient[]={0.0099999998,0.0099999998,0.0099999998};
				intensity=10;
				name="Lightpos1";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=20;
					hardLimitEnd=5;
				};
			};
			class Light_2
			{
				color[]={1,1,1,0.1};
				ambient[]={0.0099999998,0.0099999998,0.0099999998};
				intensity=10;
				name="Lightpos2";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=20;
					hardLimitEnd=5;
				};
			};
		};
		hiddenselectionstextures[]=
		{
			"442_structures\hallway\data\roof_co.paa",
			"442_structures\hallway\data\light_co.paa"
		};
	};
	class 442_roof_r: 442_roof
	{
		displayName="Roof Light (Red)";
		class MarkerLights
		{
			class Light_1
			{
				color[]={1,0,0};
				ambient[]={0.0099999998,0,0};
				intensity=10;
				name="Lightpos1";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=20;
					hardLimitEnd=5;
				};
			};
			class Light_2
			{
				color[]={1,0,0,0.1};
				ambient[]={0.0099999998,0,0};
				intensity=10;
				name="Lightpos2";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=20;
					hardLimitEnd=5;
				};
			};
		};
		hiddenselectionstextures[]=
		{
			"442_structures\hallway\data\roof_co.paa",
			"442_structures\hallway\data\light_2_co.paa"
		};
	};
	class 442_wall: 442_floor
	{
		displayName="Wall";
		model="\442_structures\hallway\wall.p3d";
		hiddenselections[]=
		{
			"wall_2"
		};
		hiddenselectionstextures[]=
		{
			"442_structures\hallway\data\wall_2_co.paa"
		};
	};
	class 442_wall_light: 442_floor
	{
		displayName="Wall Light";
		model="\442_structures\hallway\walllight.p3d";
		class MarkerLights
		{
			class Light_1
			{
				color[]={1,1,1};
				ambient[]={0.0099999998,0.0099999998,0.0099999998};
				intensity=10;
				name="Lightpos";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=20;
					hardLimitEnd=5;
				};
			};
		};
		hiddenselections[]=
		{
			"wall",
			"light"
		};
		hiddenselectionstextures[]=
		{
			"442_structures\hallway\data\wall_1_co.paa",
			"442_structures\hallway\data\light_co.paa"
		};
	};
	class 442_wall_light_r: 442_wall_light
	{
		displayName="Wall Light (Red)";
		class MarkerLights
		{
			class Light_1
			{
				color[]={1,0,0,0.1};
				ambient[]={0.0099999998,0,0};
				intensity=10;
				name="Lightpos";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=20;
					hardLimitEnd=5;
				};
			};
		};
		hiddenselectionstextures[]=
		{
			"442_structures\hallway\data\wall_1_co.paa",
			"442_structures\hallway\data\light_2_co.paa"
		};
	};
	class 442_segment: 442_floor
	{
		displayName="Segment";
		model="\442_structures\hallway\segment.p3d";
		hiddenselections[]=
		{
			"segment",
			"light"
		};
		class MarkerLights
		{
			class Light_1
			{
				color[]={1,1,1,0.1};
				ambient[]={0.0099999998,0.0099999998,0.0099999998};
				intensity=10;
				name="Lightpos";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=20;
					hardLimitEnd=5;
				};
			};
		};
		hiddenselectionstextures[]=
		{
			"442_structures\hallway\data\segment_co.paa",
			"442_structures\hallway\data\light_co.paa"
		};
	};
	class 442_segment_r: 442_segment
	{
		displayName="Segment (Red)";
		class MarkerLights
		{
			class Light_1
			{
				color[]={1,0,0};
				ambient[]={0.0099999998,0,0};
				intensity=10;
				name="Lightpos";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=20;
					hardLimitEnd=5;
				};
			};
		};
		hiddenselectionstextures[]=
		{
			"442_structures\hallway\data\segment_co.paa",
			"442_structures\hallway\data\light_2_co.paa"
		};
	};
	class 442_door: 442_floor
	{
		displayname="Door";
		model="\442_structures\hallway\door.p3d";
		hiddenselections[]=
		{
			"door1",
			"door2",
			"frame"
		};
		hiddenselectionstextures[]=
		{
			"442_structures\hallway\data\doors_co.paa",
			"442_structures\hallway\data\doors_co.paa",
			"442_structures\hallway\data\frame_co.paa"
		};
		class animationsources
		{
			class door_open
			{
				source="user";
				animPeriod=5;
				initphase=0;
			};
		};
		animationlist[]=
		{
			"door_open",
			0
		};
		class useractions
		{
			class door_open
			{
				displayname="Open Doors";
				position="door_pos";
				radius=5;
				onlyforplayer=0;
				priority=101;
				condition="this animationsourcephase ""door_open"" == 0";
				statement="this animatesource [""door_open"", 1];";
			};
			class door_close: door_open
			{
				displayname="Close Doors";
				condition="this animationsourcephase ""door_open"" == 1";
				statement="this animatesource [""door_open"", 0];";
			};
		};
	};
	class 442_2way_rep: 442_floor
	{
		displayName="2-way Hallway";
		model="\442_structures\hallway\2way.p3d";
		hiddenselections[]=
		{
			"tile",
			"lower",
			"roof",
			"segment",
			"wall",
			"wall_2",
			"light"
		};
		hiddenselectionstextures[]=
		{
			"442_structures\hallway\data\tile_co.paa",
			"442_structures\hallway\data\lower_co.paa",
			"442_structures\hallway\data\roof_co.paa",
			"442_structures\hallway\data\segment_co.paa",
			"442_structures\hallway\data\wall_1_co.paa",
			"442_structures\hallway\data\wall_2_co.paa",
			"442_structures\hallway\data\light_co.paa"
		};
		class MarkerLights
		{
			class Light_1
			{
				color[]={1,1,1};
				ambient[]={0.0099999998,0.0099999998,0.0099999998};
				intensity=10;
				name="Lightpos";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=20;
					hardLimitEnd=5;
				};
			};
		};
	};
	class 442_2way_rep_r: 442_2way_rep
	{
		displayName="2-way Hallway (Red)";
		hiddenselectionstextures[]=
		{
			"442_structures\hallway\data\tile_co.paa",
			"442_structures\hallway\data\lower_co.paa",
			"442_structures\hallway\data\roof_co.paa",
			"442_structures\hallway\data\segment_co.paa",
			"442_structures\hallway\data\wall_1_co.paa",
			"442_structures\hallway\data\wall_2_co.paa",
			"442_structures\hallway\data\light_2_co.paa"
		};
		class MarkerLights
		{
			class Light_1
			{
				color[]={1,0,0};
				ambient[]={0.0099999998,0,0};
				intensity=10;
				name="Lightpos";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=20;
					hardLimitEnd=5;
				};
			};
		};
	};
	class 442_3way_rep: 442_2way_rep
	{
		displayName="3-way Hallway";
		model="\442_structures\hallway\3way.p3d";
		hiddenselectionstextures[]=
		{
			"442_structures\hallway\data\tile_co.paa",
			"442_structures\hallway\data\lower_co.paa",
			"442_structures\hallway\data\roof_co.paa",
			"442_structures\hallway\data\segment_co.paa",
			"442_structures\hallway\data\wall_1_co.paa",
			"442_structures\hallway\data\wall_2_co.paa",
			"442_structures\hallway\data\light_co.paa"
		};
	};
	class 442_3way_rep_r: 442_3way_rep
	{
		displayName="3-way Hallway (Red)";
		hiddenselectionstextures[]=
		{
			"442_structures\hallway\data\tile_co.paa",
			"442_structures\hallway\data\lower_co.paa",
			"442_structures\hallway\data\roof_co.paa",
			"442_structures\hallway\data\segment_co.paa",
			"442_structures\hallway\data\wall_1_co.paa",
			"442_structures\hallway\data\wall_2_co.paa",
			"442_structures\hallway\data\light_2_co.paa"
		};
		class MarkerLights
		{
			class Light_1
			{
				color[]={1,0,0};
				ambient[]={0.0099999998,0,0};
				intensity=10;
				name="Lightpos";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=20;
					hardLimitEnd=5;
				};
			};
		};
	};
	class 442_4way_rep: 442_2way_rep
	{
		displayName="4-way Hallway";
		model="\442_structures\hallway\4way.p3d";
		hiddenselectionstextures[]=
		{
			"442_structures\hallway\data\tile_co.paa",
			"442_structures\hallway\data\lower_co.paa",
			"442_structures\hallway\data\roof_co.paa",
			"442_structures\hallway\data\segment_co.paa",
			"442_structures\hallway\data\wall_1_co.paa",
			"442_structures\hallway\data\wall_2_co.paa",
			"442_structures\hallway\data\light_co.paa"
		};
	};
	class 442_4way_rep_r: 442_4way_rep
	{
		displayName="4-way Hallway (Red)";
		hiddenselectionstextures[]=
		{
			"442_structures\hallway\data\tile_co.paa",
			"442_structures\hallway\data\lower_co.paa",
			"442_structures\hallway\data\roof_co.paa",
			"442_structures\hallway\data\segment_co.paa",
			"442_structures\hallway\data\wall_1_co.paa",
			"442_structures\hallway\data\wall_2_co.paa",
			"442_structures\hallway\data\light_2_co.paa"
		};
		class MarkerLights
		{
			class Light_1
			{
				color[]={1,0,0};
				ambient[]={0.0099999998,0,0};
				intensity=10;
				name="Lightpos";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=20;
					hardLimitEnd=5;
				};
			};
		};
	};
	class 442_corner_rep: 442_2way_rep
	{
		displayName="Corner Hallway";
		model="\442_structures\hallway\corner.p3d";
		hiddenselectionstextures[]=
		{
			"442_structures\hallway\data\tile_co.paa",
			"442_structures\hallway\data\lower_co.paa",
			"442_structures\hallway\data\roof_co.paa",
			"442_structures\hallway\data\segment_co.paa",
			"442_structures\hallway\data\wall_1_co.paa",
			"442_structures\hallway\data\wall_2_co.paa",
			"442_structures\hallway\data\light_co.paa"
		};
	};
	class 442_corner_rep_r: 442_corner_rep
	{
		displayName="Corner Hallway (Red)";
		hiddenselectionstextures[]=
		{
			"442_structures\hallway\data\tile_co.paa",
			"442_structures\hallway\data\lower_co.paa",
			"442_structures\hallway\data\roof_co.paa",
			"442_structures\hallway\data\segment_co.paa",
			"442_structures\hallway\data\wall_1_co.paa",
			"442_structures\hallway\data\wall_2_co.paa",
			"442_structures\hallway\data\light_2_co.paa"
		};
		class MarkerLights
		{
			class Light_1
			{
				color[]={1,0,0};
				ambient[]={0.0099999998,0,0};
				intensity=10;
				name="Lightpos";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=20;
					hardLimitEnd=5;
				};
			};
		};
	};
};