#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "[S.O.S Major] Legman";
        url = "http://sos-tactical-gaming.shivtr.com/";
        requiredVersion = 0.1;
        requiredAddons[] = {"sos_main"};
        units[] = {"SOS_GAIA_Init_F", "SOS_GAIA_Zone_F", "SOS_GAIA_Assign_F"};
        weapons[] = {};
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "gaia/CfgFunctions.hpp"