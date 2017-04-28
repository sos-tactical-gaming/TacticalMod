#include "script_component.hpp"

params ["_unit"];

// we just run on the player for now
if !(hasInterface) exitWith {};

_unit call FUNC(init);

[QGVAR(respawn), _unit] call CBA_fnc_localEvent;
