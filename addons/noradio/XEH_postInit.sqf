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

["sos_noradio_setSpeaker", {(_this select 0) setSpeaker (_this select 1)}] call CBA_fnc_addEventHandler;

private _speaker = speaker player;

if (_speaker == "SOS_NoVoice") exitWith {};

["sos_noradio_setSpeaker", [player, "SOS_NoVoice"]] call CBA_fnc_globalEvent;