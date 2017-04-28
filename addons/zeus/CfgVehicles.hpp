class CfgVehicles {
	class Module_F;
	class ModuleEmpty_F;
	
	class ModuleCurator_F: Module_F {
        function = "SOS_fnc_moduleCurator";
    };
    class ModuleEndMission_F: Module_F {
        function = "SOS_fnc_moduleEndMission";
    };
    class ModuleMine_F: ModuleEmpty_F {
        function = "SOS_fnc_moduleMine";
    };
    class ModuleOrdnance_F: Module_F {
        function = "SOS_fnc_moduleProjectile";
    };
    class ModuleRemoteControl_F: Module_F {
        function = "SOS_fnc_moduleRemoteControl";
    };
};