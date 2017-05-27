#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        addonRootClass = "sos_main";        
        requiredVersion = 0.1;
        requiredAddons[] = {"sos_main"};        
        units[] = {};
        weapons[] = {};
    };
};

#include "CfgCloudlets.hpp"
#include "CfgVehicleClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
#include "CfgGlasses.hpp"