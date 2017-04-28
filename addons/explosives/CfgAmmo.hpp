class CfgAmmo {
	class PipeBombBase;
	
	class IEDUrbanBig_Remote_Ammo : PipeBombBase {
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_1", 0.562341, 1, 40};
		soundActivation[] = {"A3\Sounds_F\weapons\mines\mech_activate_mine_1", 0.562341, 1, 40};
		mineTrigger = "RangeTrigger";
	};
	class IEDLandBig_Remote_Ammo : PipeBombBase {
		mineTrigger = "RangeTrigger";
	};
	class IEDUrbanSmall_Remote_Ammo : PipeBombBase {
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_1", 0.562341, 1, 40};
		soundActivation[] = {"A3\Sounds_F\weapons\mines\mech_activate_mine_1", 0.562341, 1, 40};
		mineTrigger = "RangeTrigger";
	};
	class IEDLandSmall_Remote_Ammo : PipeBombBase {
		mineTrigger = "RangeTrigger";
	};
};