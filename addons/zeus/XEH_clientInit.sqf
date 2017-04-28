#include "script_component.hpp"

if !(hasInterface) exitWith {};

GVAR(projectiles) = [];
GVAR(blinkCooldown) = 0.6;
GVAR(projectileRadius) = 40;
GVAR(suppressRadius) = 6;
GVAR(suppressSafeRadius) = 12;
GVAR(suppressBase) = 12;
GVAR(suppressHitBase) = 20;
GVAR(recoveryCooldown) = 2.0;
GVAR(recoveryRate) = 4.0;

_fnc_createEffect = {
    params ["_type", "_layer", "_default"];

    private _effect = ppEffectCreate [_type, _layer];
    _effect ppEffectForceInNVG true;
    _effect ppEffectAdjust _default;
    _effect ppEffectCommit 0;

    _effect
};

GVAR(effectAdrenalineCC) = [
    "ColorCorrections",
    4301,
    [1, 1, 0, [0, 0, 0, 0], [1, 1, 1, 1], [0.94, 0.94, 0.1, 0]]
] call _fnc_createEffect;

GVAR(effectAdrenalineRB) = [
    "RadialBlur",
    4302,
    [0, 0, 0, 0]
] call _fnc_createEffect;

GVAR(effectBlinkCC) = [
    "ColorCorrections",
    4303,
    [1, 1, 0, [0, 0, 0, 0], [1, 1, 1, 1], [1, 1, 1, 1]]
] call _fnc_createEffect;

[{
    private ["_projectile", "_alive", "_i"];
    
    for [{_i = count GVAR(projectiles) - 1}, {_i >= 0}, {_i = _i - 1}] do {
        _projectile = GVAR(projectiles) select _i;
        
        if !([_projectile] call FUNC(updateProjectile)) then {
            GVAR(projectiles) deleteAt _i;
            //systemChat "deleted";
        };               
    };
}, 0.0, []] call CBA_fnc_addPerFrameHandler;

[QGVAR(suppress), {
    params ["_unit", "_strength"];
    
    if (diag_tickTime - (_unit getVariable [QGVAR(blinkTime), 0.0]) >= GVAR(blinkCooldown)) then {
        _unit setVariable [QGVAR(blinkTime), diag_tickTime];       
        
        GVAR(effectBlinkCC) ppEffectAdjust [1, 1, 0, [0, 0, 0, 0.5], [1, 1, 1, 1], [1, 1, 1, 1]];
        GVAR(effectBlinkCC) ppEffectCommit 0.046;
        GVAR(effectBlinkCC) ppEffectEnable true;
        
        [{           
            GVAR(effectBlinkCC) ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [1, 1, 1, 1], [1, 1, 1, 1]];
            GVAR(effectBlinkCC) ppEffectCommit 0.06;            
        }, [], 0.04] call CBA_fnc_waitAndExecute;
    };
}] call CBA_fnc_addEventHandler;

[QGVAR(respawn), {  
    params ["_unit"];
    
    if (_unit == player) then {
        GVAR(effectAdrenalineCC) ppEffectEnable false;
        GVAR(effectAdrenalineRB) ppEffectEnable false;
        GVAR(effectBlinkCC) ppEffectEnable false;
    };   
}] call CBA_fnc_addEventHandler;

[{
    private ["_suppression", "_strength"];

    _suppression = player getVariable [QGVAR(suppression), 0];
    if (_suppression <= 0) then {
        if (ppEffectCommitted GVAR(effectAdrenalineCC) && ppEffectEnabled GVAR(effectAdrenalineCC)) then {
            GVAR(effectAdrenalineCC) ppEffectEnable false;
        };
        if (ppEffectCommitted GVAR(effectAdrenalineRB) && ppEffectEnabled GVAR(effectAdrenalineRB)) then {
            GVAR(effectAdrenalineRB) ppEffectEnable false;
        };
    } else {
        if !(ppEffectEnabled GVAR(effectAdrenalineCC)) then {
            GVAR(effectAdrenalineCC) ppEffectEnable true;
            GVAR(effectAdrenalineCC) ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [1, 1, 1, 1], [0.94, 0.94, 0.1, 0]];
            GVAR(effectAdrenalineCC) ppEffectCommit 0.0;
        };
        if !(ppEffectEnabled GVAR(effectAdrenalineRB)) then {
            GVAR(effectAdrenalineRB) ppEffectEnable true;
            GVAR(effectAdrenalineRB) ppEffectAdjust [0, 0, 0, 0];
            GVAR(effectAdrenalineRB) ppEffectCommit 0.0;
        };
        
        _strength = 0.914 + (1.0 - (_suppression / 100)) * (1.0 - 0.914);
        //_strength = 1.0 + (_suppression / 100) * 0.132;
        GVAR(effectAdrenalineCC) ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [1, 1, 1, _strength], [0.94, 0.94, 0.1, 0]];
        GVAR(effectAdrenalineCC) ppEffectCommit 0.32;
        
        _strength = (_suppression / 100) * 0.0064;
        GVAR(effectAdrenalineRB) ppEffectAdjust [_strength, _strength, 0, 0];
        GVAR(effectAdrenalineRB) ppEffectCommit 0.32;
    };   
   
    // disable effects when not incapped
    if (ppEffectCommitted GVAR(effectBlinkCC) && ppEffectEnabled GVAR(effectBlinkCC)) then {
        GVAR(effectBlinkCC) ppEffectEnable false;
    };
}, 0.2, []] call CBA_fnc_addPerFrameHandler;
