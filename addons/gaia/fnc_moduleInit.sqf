/*
 * Author: Legman [S.O.S. Major]
 *
 * Arguments:
 *
 * Return Value:
 * Nothing
 *
 * Example:
 */

#include "script_component.hpp"

params ["_logic", "_units", "_isActivated"];

if (_isActivated) then {
    if !(missionNamespace getVariable [QGVAR(Init), false]) then {
        missionNamespace setVariable [QGVAR(Init), true];
        
        GAIA_CACHE_STAGE_1                  = _logic getVariable ["Cache", 1000];
        MCC_GAIA_MAX_SLOW_SPEED_RANGE       = _logic getVariable ["MaxSlowSpeedRange", 400];
        MCC_GAIA_MAX_MEDIUM_SPEED_RANGE     = _logic getVariable ["MaxMediumSpeedRange", 4500];
        MCC_GAIA_MAX_FAST_SPEED_RANGE       = _logic getVariable ["MaxFastSpeedRange", 80000];
        MCC_GAIA_MORTAR_TIMEOUT             = _logic getVariable ["MortarTimeout", 4];
        MCC_GAIA_ATTACKS_FOR_NONGAIA        = _logic getVariable ["AttacksForNonGAIA", false];
        MCC_GAIA_AMBIANT                    = _logic getVariable ["AmbientBehaviour", true];
        MCC_GAIA_AMBIANT_CHANCE             = _logic getVariable ["AmbientBehaviourChance", 20];
        MCC_GAIA_TRANSPORT_RESTTIME         = _logic getVariable ["TransportRestTime", 40];

        (call compile preprocessFile "\x\sos\addons\gaia\gaia\gaia_init.sqf");
    };
};

true
