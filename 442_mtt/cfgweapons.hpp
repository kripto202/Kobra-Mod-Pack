class Mode_SemiAuto;
class cfgweapons
{
    class manual;
	class close;
	class short;
	class medium;
	class far;
	class TopDown;
	class GunParticles;
	class mgun;
    class SlotInfo;
	class MuzzleSlot;
	class CowsSlot;
	class PointerSlot;
	class UnderBarrelSlot;

    class 442_aat_cannon_75mm;
    class 442_mtt_cannon_75mm_l: 442_aat_cannon_75mm
    {
        displayname = "75mm MTT Ball Gun";
        magazines[] = 
        {
            "442_30Rnd_75mm_HE_mag_red"
        };
        reloadTime = 2.5;
        magazineReloadTime = 6;
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "CannonFired";
                positionName = "Usti_hlavne_l_1";
                directionName = "Konec_hlavne_l_1";
            };
            class SecondEffect
            {
                effectName = "CannonFired";
                positionName = "Usti_hlavne_l_2";
                directionName = "Konec_hlavne_l_2";
            };
        };
        class player: Mode_SemiAuto
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                begin1[] = {"442_aat\sounds\aat_main_gun.wss",3.1622777,1,1500};
                soundBegin[] = {"begin1",1};
            };
            soundContinuous = 0;
            reloadTime = 2.5;
            magazineReloadTime = 6;
            autoReload = 1;
            autoFire = 0;
            dispersion = 0.00057;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class close: player
		{
			showToPlayer=0;
			aiRateOfFire=.01;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.7;
			midRange=500;
			midRangeProbab=0.7;
			maxRange=1000;
			maxRangeProbab=0.7;
			aiDispersionCoefX=6;
			aiDispersionCoefY=6;
		};
		class short: close
		{
			aiRateOfFire=.01;
			aiRateOfFireDistance=300;
			minRange=500;
			minRangeProbab=0.7;
			midRange=1000;
			midRangeProbab=0.7;
			maxRange=1500;
			maxRangeProbab=0.7;
		};
		class medium: short
		{
			aiRateOfFire=.01;
			aiRateOfFireDistance=600;
			minRange=1000;
			minRangeProbab=0.7;
			midRange=1500;
			midRangeProbab=0.7;
			maxRange=2000;
			maxRangeProbab=0.7;
		};
		class far: medium
		{
			aiRateOfFire=.01;
			aiRateOfFireDistance=1000;
			minRange=1500;
			minRangeProbab=0.7;
			midRange=2500;
			midRangeProbab=0.7;
			maxRange=3000;
			maxRangeProbab=0.7;
		};
    };
    class 442_mtt_cannon_75mm_r: 442_mtt_cannon_75mm_l
    {
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "CannonFired";
                positionName = "Usti_hlavne_r_1";
                directionName = "Konec_hlavne_r_1";
            };
            class SecondEffect
            {
                effectName = "CannonFired";
                positionName = "Usti_hlavne_r_2";
                directionName = "Konec_hlavne_r_2";
            };
        };
    };
};