class Components
        {
            class SensorsManagerComponent
            {
                class Components
                {
                    class activeRadarSenorComponent
                    {
                        aimDown = 30;
                        allowsMarking = 1;
                        angleRangeHorizontal = 180;
                        angleRangeVertical = 90;
                        animDirection = "";
                        color[] = {0, 1, 1, 1};
                        componentType = "ActiveRadarSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = 1e+010;
                        maxTrackableSpeed = 125;
                        minSpeedThreshold = 0;
                        minTrackableATL = -1e+010;
                        minTrackableSpeed = -1e+010;
                        typeRecognitionDistance = 3000;
                        class AirTarget
                        {
                            maxRange = 5000;
                            minRange = 5000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget
                        {
                            maxRange = 5000;
                            minRange = 5000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                    };
                    class AntiRadiationSensorComponent
                    {
                        aimDown = 0;
                        allowsMarking = 1;
                        angleRangeHorizontal = 90;
                        angleRangeVertical = 90;
                        animDirection = "";
                        color[] = {0.5, 1, 0.5, 0.5};
                        componentType = "PassiveRadarSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = 1e+010;
                        maxTrackableSpeed = 1e+010;
                        minSpeedThreshold = 0;
                        minTrackableATL = -1e+010;
                        minTrackableSpeed = -1e+010;
                        typeRecognitionDistance = 12000;
                        class AirTarget
                        {
                            maxRange = 8000;
                            minRange = 8000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget
                        {
                            maxRange = 8000;
                            minRange = 8000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                    };
                    class IRSensorComponent
                    {
                        class AirTarget
                        {
                            minRange = 500;
                            maxRange = 5000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget
                        {
                            minRange = 500;
                            maxRange = 4000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        angleRangeHorizontal = 50;
                        angleRangeVertical = 37;
                        maxTrackableSpeed = 100;
                        aimDown = 0;
                        allowsMarking = 1;
                        animDirection = "";
                        color[] = {1, 0, 0, 1};
                        componentType = "IRSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        maxFogSeeThrough = 0.995;
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = 1e+010;
                        minSpeedThreshold = 0;
                        minTrackableATL = -1e+010;
                        minTrackableSpeed = -1e+010;
                        typeRecognitionDistance = 2000;
                    };
                    class VisualSensorComponent
                    {
                        class AirTarget
                        {
                            minRange = 500;
                            maxRange = 4000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget
                        {
                            minRange = 500;
                            maxRange = 3000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        angleRangeHorizontal = 50;
                        angleRangeVertical = 37;
                        maxTrackableSpeed = 100;
                        aimDown = 0;
                        animDirection = "";
                        allowsMarking = 1;
                        color[] = {1, 1, 0.5, 0.8};
                        componentType = "VisualSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        maxFogSeeThrough = 0.94;
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = 1e+010;
                        minSpeedThreshold = 0;
                        minTrackableATL = -1e+010;
                        minTrackableSpeed = -1e+010;
                        nightRangeCoef = 0;
                        typeRecognitionDistance = 2000;
                    };
                    class PassiveRadarSensorComponent
                    {
                        class AirTarget
                        {
                            minRange = 16000;
                            maxRange = 16000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget
                        {
                            minRange = 16000;
                            maxRange = 16000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        aimDown = 0;
                        allowsMarking = 0;
                        angleRangeHorizontal = 360;
                        angleRangeVertical = 360;
                        animDirection = "";
                        color[] = {0.5, 1, 0.5, 0.5};
                        componentType = "PassiveRadarSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = 1e+010;
                        maxTrackableSpeed = 1e+010;
                        minSpeedThreshold = 0;
                        minTrackableATL = -1e+010;
                        minTrackableSpeed = -1e+010;
                        typeRecognitionDistance = 12000;
                    };
                    class LaserSensorComponent
                    {
                        class AirTarget
                        {
                            maxRange = 6000;
                            minRange = 6000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget
                        {
                            maxRange = 6000;
                            minRange = 6000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        aimDown = 0;
                        allowsMarking = 1;
                        angleRangeHorizontal = 180;
                        angleRangeVertical = 180;
                        animDirection = "";
                        color[] = {1, 1, 1, 0};
                        componentType = "LaserSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = 1e+010;
                        maxTrackableSpeed = 1e+010;
                        minSpeedThreshold = 0;
                        minTrackableATL = -1e+010;
                        minTrackableSpeed = -1e+010;
                        typeRecognitionDistance = 0;
                    };
                    class NVSensorComponent
                    {
                        class AirTarget
                        {
                            maxRange = 6000;
                            minRange = 6000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget
                        {
                            maxRange = 6000;
                            minRange = 6000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        aimDown = 0;
                        allowsMarking = 1;
                        angleRangeHorizontal = 180;
                        angleRangeVertical = 180;
                        animDirection = "";
                        color[] = {1, 1, 1, 0};
                        componentType = "NVSensorComponent";
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        maxSpeedThreshold = 0;
                        maxTrackableATL = 1e+010;
                        maxTrackableSpeed = 1e+010;
                        minSpeedThreshold = 0;
                        minTrackableATL = -1e+010;
                        minTrackableSpeed = -1e+010;
                        typeRecognitionDistance = 0;
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
            {
                class Components
                {
                    class EmptyDisplay
                    {
                        componentType = "EmptyDisplayComponent";
                    };
                    class MinimapDisplay
                    {
                        componentType = "MinimapDisplayComponent";
                        resource = "RscCustomInfoMiniMap";
                    };
                    class UAVDisplay
                    {
                        componentType = "UAVFeedDisplayComponent";
                    };
                    class VehicleDriverDisplay
                    {
                        componentType = "TransportFeedDisplayComponent";
                        source = "Driver";
                    };
                    class VehicleMissileDisplay
                    {
                        componentType = "TransportFeedDisplayComponent";
                        source = "Missile";
                    };
                    class SensorDisplay
                    {
                        componentType = "SensorsDisplayComponent";
                        range[] = {4000, 2000, 16000, 8000};
                        resource = "RscCustomInfoSensors";
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
            {
                defaultDisplay = "SensorDisplay";
                class Components
                {
                    class EmptyDisplay
                    {
                        componentType = "EmptyDisplayComponent";
                    };
                    class MinimapDisplay
                    {
                        componentType = "MinimapDisplayComponent";
                        resource = "RscCustomInfoMiniMap";
                    };
                    class UAVDisplay
                    {
                        componentType = "UAVFeedDisplayComponent";
                    };
                    class VehicleDriverDisplay
                    {
                        componentType = "TransportFeedDisplayComponent";
                        source = "Driver";
                    };
                    class VehicleMissileDisplay
                    {
                        componentType = "TransportFeedDisplayComponent";
                        source = "Missile";
                    };
                    class SensorDisplay
                    {
                        componentType = "SensorsDisplayComponent";
                        range[] = {4000, 2000, 16000, 8000};
                        resource = "RscCustomInfoSensors";
                    };
                };
            };
            class TransportCounterMeasuresComponent;
        };