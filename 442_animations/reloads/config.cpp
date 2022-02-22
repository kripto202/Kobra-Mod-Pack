class cfgpatches
{
    class 442_animations_reload
    {
        author = "KOBRA Mod Team";
        requiredAddons[]=
        {
            "kobra_core",
			"a3_anims_f"
        };
		requiredVersion = 0.1;
		units[] = {};
        weapons[] = {};
    };
};
/* reference config from another mod
class CfgMovesBasic
{
	class default;
	class DefaultDie;
	class ManActions
	{
		GestureReloadSAA[] = {"GestureReloadSAA","gesture"};
		GestureFiredSAA[] = {"GestureFiredSAA","gesture"};
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureReloadSAA[] = {"GestureReloadSAA","gesture"};
			GestureFiredSAA[] = {"GestureFiredSAA","gesture"};
		};
		class PistolStandActions;
		class PistolProneActions: PistolStandActions
		{
			GestureReloadSAA[] = {"GestureReloadSAAProne","gesture"};
			GestureFiredSAA[] = {"GestureFiredSAAProne","gesture"};
		};
		class PistolAdjustProneBaseActions;
		class PistolAdjustRProneActions: PistolAdjustProneBaseActions
		{
			GestureReloadSAA[] = {"GestureReloadSAAContext","gesture"};
			GestureFiredSAA[] = {"GestureFiredSAAContext","gesture"};
		};
		class PistolAdjustLProneActions: PistolAdjustProneBaseActions
		{
			GestureReloadSAA[] = {"GestureReloadSAAContext","gesture"};
			GestureFiredSAA[] = {"GestureFiredSAAContext","gesture"};
			class PistolAdjustFProneActions: PistolAdjustProneBaseActions
			{
				GestureReloadSAA[] = {"GestureReloadSAAContext","gesture"};
				GestureFiredSAA[] = {"GestureFiredSAAContext","gesture"};
			};
		};
	};
};
*/
class CfgMovesBasic
{
	class ManActions
	{
		gestureReload773[] = {"gestureReload773","gesture"};
	};
	class Actions
	{
		class NoActions: ManActions
		{
			gestureReload773[] = {"gestureReload773","gesture"};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class gestureReload773: Default
		{
			file = "kobra\442_animations\reloads\k_773_reload.rtm";
			preload = 1;
			canPullTrigger = 0;
			looped = 0;
			speed = -2.5;
			mask = "handsWeapon";
			headBobStrength = -1;
			headBobMode = 2;
			leftHandIKCurve[] = {0.012,1,0.031000001,0,0.941,0,1,1};
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
		};
	};
};