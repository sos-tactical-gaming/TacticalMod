#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        addonRootClass = "sos_vests";        
        requiredVersion = 0.1;
        requiredAddons[] = {"sos_main"};        
        units[] = {};
        weapons[] = {};
    };
};
class cfgVehicleClasses {
    class SOS_vehicleClass {
        displayName = "SOS Rifleman";
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"