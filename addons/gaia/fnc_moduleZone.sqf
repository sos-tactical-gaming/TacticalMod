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
    private ["_id", "_size", "_showMarker"];
    
    _id = _logic getVariable ["ID", "1"];
    _size = _logic getVariable ["Size", 300];
    _showMarker = _logic getVariable ["ShowMarker", false];
    
    private _marker = getMarkerColor _id;
    if (_marker != "") then {
        deleteMarker _id;
    };
    
    _marker = createMarker [_id, position _logic];
    _marker setMarkerShape "ELLIPSE";
    _marker setMarkerBrush "Solid";
    _marker setMarkerAlpha (if (_showMarker) then {0.5} else {0});
    _marker setMarkerSize [_size, _size];
    _marker setMarkerColor "ColorYellow";   
};

true
