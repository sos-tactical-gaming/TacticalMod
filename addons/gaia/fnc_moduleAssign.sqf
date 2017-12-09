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
    private _id = _logic getVariable ["ID", "1"];
    private _behaviour = _logic getVariable ["Behviour", "NOFOLLOW"];
    private _cache = _logic getVariable ["Cache", false];
    {
        group _x setVariable ["GAIA_ZONE_INTEND", [_id, _behaviour], false];
        if (_cache) then {
            group _x setVariable ["MCC_GAIA_CACHE", true, false];
        };
    } forEach _units;    
};

true
