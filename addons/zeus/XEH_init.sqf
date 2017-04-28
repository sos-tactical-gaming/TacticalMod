#include "script_component.hpp"

params ["_unit"];

// we just run on the player for now
if (_unit != player) exitWith {};

_unit call FUNC(init);

[{_this call FUNC(handleUpdate)}, 0.5, _unit] call CBA_fnc_addPerFrameHandler;

["lms_suppress", {
    params ["_unit", "_strength"];

    _this call FUNC(suppress);
}] call CBA_fnc_addEventHandler;
