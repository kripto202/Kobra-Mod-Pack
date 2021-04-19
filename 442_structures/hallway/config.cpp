class cfgpatches
{
    class 442_structures_hallway
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
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
            "442_door_lock",
            "442_2way_rep",
            "442_2way_rep_r",
            "442_3way_rep",
            "442_3way_rep_r",
            "442_4way_rep",
            "442_4way_rep_r",
            "442_corner_rep",
            "442_corner_rep_r",
            "442_ramp_rep",
            "442_ramp_rep_r",
			"442_10x10floor"
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class House_F;
    class 442_floor: House_F
	{
		scope=2;
		scopecurator=2;
		author = "Kobra Mod Team";
		displayName="Floor";
		model="\kobra\442_structures\hallway\k_floor.p3d";
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
			"kobra\442_structures\hallway\data\tile_co.paa",
			"kobra\442_structures\hallway\data\lower_co.paa"
		};
	};
	class 442_roof: 442_floor
	{
		displayName="Roof Light";
		model="\kobra\442_structures\hallway\k_rooflight.p3d";
		hiddenselections[]=
		{
			"roof",
			"light"
		};
		/* class MarkerLights
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
		}; */
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\hallway\data\roof_co.paa",
			"kobra\442_structures\hallway\data\light_co.paa"
		};
	};
	class 442_roof_r: 442_roof
	{
		displayName="Roof Light (Red)";
		/* class MarkerLights
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
		}; */
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\hallway\data\roof_co.paa",
			"kobra\442_structures\hallway\data\light_2_co.paa"
		};
	};
	class 442_wall: 442_floor
	{
		displayName="Wall";
		model="\kobra\442_structures\hallway\k_wall.p3d";
		hiddenselections[]=
		{
			"wall_2"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\hallway\data\wall_2_co.paa"
		};
	};
	class 442_wall_light: 442_floor
	{
		displayName="Wall Light";
		model="\kobra\442_structures\hallway\k_walllight.p3d";
		/* class MarkerLights
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
		}; */
		hiddenselections[]=
		{
			"wall",
			"light"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\hallway\data\wall_co.paa",
			"kobra\442_structures\hallway\data\light_co.paa"
		};
	};
	class 442_wall_light_r: 442_wall_light
	{
		displayName="Wall Light (Red)";
		/* class MarkerLights
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
		}; */
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\hallway\data\wall_co.paa",
			"kobra\442_structures\hallway\data\light_2_co.paa"
		};
	};
	class 442_segment: 442_floor
	{
		displayName="Segment";
		model="\kobra\442_structures\hallway\k_segment.p3d";
		hiddenselections[]=
		{
			"segment",
			"light"
		};
		/* class MarkerLights
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
		}; */
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\hallway\data\segment_co.paa",
			"kobra\442_structures\hallway\data\light_co.paa"
		};
	};
	class 442_segment_r: 442_segment
	{
		displayName="Segment (Red)";
		/* class MarkerLights
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
		}; */
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\hallway\data\segment_co.paa",
			"kobra\442_structures\hallway\data\light_2_co.paa"
		};
	};
	class 442_door: 442_floor
	{
		displayname="Door";
		model="\kobra\442_structures\hallway\k_door.p3d";
		hiddenselections[]=
		{
			"door1",
			"door2",
			"frame"
		};
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\hallway\data\doors_co.paa",
			"kobra\442_structures\hallway\data\doors_co.paa",
			"kobra\442_structures\hallway\data\frame_co.paa"
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
	class 442_door_lock: 442_door
	{
		displayname = "Door (Locked)";
		class useractions {};
	};
	class 442_2way_rep: 442_floor
	{
		displayName="2-way Hallway";
		model="\kobra\442_structures\hallway\k_2way.p3d";
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
			"kobra\442_structures\hallway\data\tile_co.paa",
			"kobra\442_structures\hallway\data\lower_co.paa",
			"kobra\442_structures\hallway\data\roof_co.paa",
			"kobra\442_structures\hallway\data\segment_co.paa",
			"kobra\442_structures\hallway\data\wall_co.paa",
			"kobra\442_structures\hallway\data\wall_2_co.paa",
			"kobra\442_structures\hallway\data\light_co.paa"
		};
		// class MarkerLights
		// {
			// class Light_1
			// {
				// color[]={1,1,1};
				// ambient[]={0.0099999998,0.0099999998,0.0099999998};
				// intensity=10;
				// name="Lightpos";
				// useFlare=0;
				// flareSize=0;
				// flareMaxDistance=0;
				// activeLight=1;
				// blinking=0;
				// dayLight=0;
				// drawLight=0;
				// class Attenuation
				// {
					// start=0;
					// constant=0;
					// linear=1;
					// quadratic=0;
					// hardLimitStart=20;
					// hardLimitEnd=5;
				// };
			// };
		// };
	};
	class 442_2way_rep_r: 442_2way_rep
	{
		displayName="2-way Hallway (Red)";
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\hallway\data\tile_co.paa",
			"kobra\442_structures\hallway\data\lower_co.paa",
			"kobra\442_structures\hallway\data\roof_co.paa",
			"kobra\442_structures\hallway\data\segment_co.paa",
			"kobra\442_structures\hallway\data\wall_co.paa",
			"kobra\442_structures\hallway\data\wall_2_co.paa",
			"kobra\442_structures\hallway\data\light_2_co.paa"
		};
		/* class MarkerLights
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
		}; */
	};
	class 442_3way_rep: 442_2way_rep
	{
		displayName="3-way Hallway";
		model="\kobra\442_structures\hallway\k_3way.p3d";
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\hallway\data\tile_co.paa",
			"kobra\442_structures\hallway\data\lower_co.paa",
			"kobra\442_structures\hallway\data\roof_co.paa",
			"kobra\442_structures\hallway\data\segment_co.paa",
			"kobra\442_structures\hallway\data\wall_co.paa",
			"kobra\442_structures\hallway\data\wall_2_co.paa",
			"kobra\442_structures\hallway\data\light_co.paa"
		};
	};
	class 442_3way_rep_r: 442_3way_rep
	{
		displayName="3-way Hallway (Red)";
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\hallway\data\tile_co.paa",
			"kobra\442_structures\hallway\data\lower_co.paa",
			"kobra\442_structures\hallway\data\roof_co.paa",
			"kobra\442_structures\hallway\data\segment_co.paa",
			"kobra\442_structures\hallway\data\wall_co.paa",
			"kobra\442_structures\hallway\data\wall_2_co.paa",
			"kobra\442_structures\hallway\data\light_2_co.paa"
		};
		/* class MarkerLights
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
		}; */
	};
	class 442_4way_rep: 442_2way_rep
	{
		displayName="4-way Hallway";
		model="\kobra\442_structures\hallway\k_4way.p3d";
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\hallway\data\tile_co.paa",
			"kobra\442_structures\hallway\data\lower_co.paa",
			"kobra\442_structures\hallway\data\roof_co.paa",
			"kobra\442_structures\hallway\data\segment_co.paa",
			"kobra\442_structures\hallway\data\wall_co.paa",
			"kobra\442_structures\hallway\data\wall_2_co.paa",
			"kobra\442_structures\hallway\data\light_co.paa"
		};
	};
	class 442_4way_rep_r: 442_4way_rep
	{
		displayName="4-way Hallway (Red)";
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\hallway\data\tile_co.paa",
			"kobra\442_structures\hallway\data\lower_co.paa",
			"kobra\442_structures\hallway\data\roof_co.paa",
			"kobra\442_structures\hallway\data\segment_co.paa",
			"kobra\442_structures\hallway\data\wall_1_co.paa",
			"kobra\442_structures\hallway\data\wall_2_co.paa",
			"kobra\442_structures\hallway\data\light_2_co.paa"
		};
		/* class MarkerLights
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
		}; */
	};
	class 442_corner_rep: 442_2way_rep
	{
		displayName="Corner Hallway";
		model="\kobra\442_structures\hallway\k_corner.p3d";
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\hallway\data\tile_co.paa",
			"kobra\442_structures\hallway\data\lower_co.paa",
			"kobra\442_structures\hallway\data\roof_co.paa",
			"kobra\442_structures\hallway\data\segment_co.paa",
			"kobra\442_structures\hallway\data\wall_co.paa",
			"kobra\442_structures\hallway\data\wall_2_co.paa",
			"kobra\442_structures\hallway\data\light_co.paa"
		};
	};
	class 442_corner_rep_r: 442_corner_rep
	{
		displayName="Corner Hallway (Red)";
		hiddenselectionstextures[]=
		{
			"kobra\442_structures\hallway\data\tile_co.paa",
			"kobra\442_structures\hallway\data\lower_co.paa",
			"kobra\442_structures\hallway\data\roof_co.paa",
			"kobra\442_structures\hallway\data\segment_co.paa",
			"kobra\442_structures\hallway\data\wall_co.paa",
			"kobra\442_structures\hallway\data\wall_2_co.paa",
			"kobra\442_structures\hallway\data\light_2_co.paa"
		};
		/* class MarkerLights
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
		}; */
	};
	class 442_ramp_rep: 442_floor
	{
		displayname = "Ramp";
		model = "kobra\442_structures\hallway\k_ramp.p3d";
		hiddenselections[] = 
		{
			"ramp",
			"segment",
			"light"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_structures\hallway\data\ramp_co.paa",
			"kobra\442_structures\hallway\data\segment_co.paa",
			"kobra\442_structures\hallway\data\light_co.paa"
		};
	};
	class 442_ramp_rep_r: 442_ramp_rep
	{
		displayname = "Ramp (Red)";
		hiddenselectionstextures[] = 
		{
			"kobra\442_structures\hallway\data\ramp_co.paa",
			"kobra\442_structures\hallway\data\segment_co.paa",
			"kobra\442_structures\hallway\data\light_2_co.paa"
		};
	};
	class 442_10x10floor: 442_floor
	{
		displayname = "10x10 Floor";
		model = "kobra\442_structures\hallway\k_10x10_floor.p3d";
		hiddenselections[] = 
		{
			"camo1"
		};
		hiddenselectionstextures[] = 
		{
			"kobra\442_structures\hallway\data\10x10_floor_co.paa"
		};
	};
};