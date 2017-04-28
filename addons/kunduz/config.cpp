#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        addonRootClass = "sos_main";
        requiredVersion = 0.1;
        requiredAddons[] = {"sos_main"};
        units[] = {
            "SOS_Insurgent_Soldier_1_F",
            "SOS_Insurgent_Soldier_2_F",
            "SOS_Insurgent_Soldier_3_F",
            "SOS_Insurgent_Soldier_4_F",
            "SOS_Insurgent_Soldier_5_F",
            "SOS_Insurgent_Soldier_mg_1_F",
            "SOS_Insurgent_Soldier_mg_2_F",
            "SOS_Insurgent_Soldier_rpg_1_F",
            "SOS_Insurgent_Soldier_rpg_2_F",
            "SOS_Insurgent_Soldier_rpg_3_F",
            "SOS_Insurgent_Terrorist_1_F",
            "SOS_Insurgent_Terrorist_2_F",
            "SOS_Insurgent_Terrorist_3_F",
            "SOS_Insurgent_Militia_unarmed_1_F",
            "SOS_Insurgent_Militia_unarmed_2_F",
            "SOS_Insurgent_Militia_unarmed_3_F",
            "SOS_Insurgent_Terrorist_unarmed_1_F",
            "SOS_Insurgent_Terrorist_unarmed_2_F"
        };
        weapons[] = {};        
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
