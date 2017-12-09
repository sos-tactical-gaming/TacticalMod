//if (!isServer) exitWith {};
if (!isServer && hasInterface) exitWith {};     // legman hc support patch 24/07/2016

i've added this fix at the top of some files to allow for headless client support.