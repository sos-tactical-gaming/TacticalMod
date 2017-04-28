#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		addonRootClass = "sos_main";
		requiredVersion = 0.1;
		requiredAddons[] = {"sos_main"};
		units[] = {};
		weapons[] = {};
	};
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"