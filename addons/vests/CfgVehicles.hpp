class CfgVehicles {
    class B_G_Soldier_LAT_F;
    class B_Competitor_F;
    class B_Soldier_base_F;
    class B_CTRG_Soldier_base_F;
    class B_Soldier_SL_F;
    class Heli_Transport_02_base_F;
    class NATO_Box_Base;
    class I_Soldier_F;
    class I_Soldier_lite_F;
    
    #include "Backpacks.hpp"
    
    class SmokeSignalBox: NATO_Box_Base {
        scope = 2;
        accuracy = 1000;
        vehicleClass = "Ammo";
        displayName = "AmmoBox_SmokeSignal";
        hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
        model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
        icon = "iconCrateWpns";
        maximumLoad = 99999;
        transportMaxWeapons = 5000;
        transportMaxMagazines = 20000;
        transportMaxBackpacks = 50;        
        class TransportMagazines {
            class SmokeSignalRed {
                magazine = "SmokeSignalRed";
                count = 1000;
            };
            class SmokeSignalGreen {
                magazine = "SmokeSignalGreen";
                count = 1000;
            };
        };
        class TransportItems {            
        };
    };    
    class CH49_Mohawk_NATO: Heli_Transport_02_base_F {
        _generalMacro = "B_Heli_Transport_02_base_F";
        scope = 2;
        side = 1;
        faction = "BLU_F";
        displayName = "CH49 Nato";
        crew = "B_Helipilot_F";
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {
            "\x\sos\addons\vests\Data\Vehicles\Helicopters\CH-49_Olive_1.paa",
            "\x\sos\addons\vests\Data\Vehicles\Helicopters\CH-49_Olive_2.paa",
            "\x\sos\addons\vests\Data\Vehicles\Helicopters\CH-49_Olive_3.paa"
        };
        typicalCargo[] = {"B_Helipilot_F"};
        availableForSupportTypes[] = {"Drop","Transport"};
    };
    class SOS_Rifleman_BW_RS: I_Soldier_lite_F {
        side = 1;
        scope = 1;
        author = "[S.O.S] Henri";
        vehicleClass = "SOS_VehicleClass";    
        uniformClass = "SOS_FleckTarnRS";
        displayName = "SOS Rifleman";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\FleckTarnShirt.paa"};
    };
    class SOS_Rifleman_VT_RS: I_Soldier_lite_F {
        side = 1;
        scope = 1;
        author = "[S.O.S] Henri";
        vehicleClass = "SOS_VehicleClass";    
        uniformClass = "SOS_VorotnikRS";
        displayName = "SOS Rifleman";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\VorotnikNonJumper.paa"};
    };
    class SOS_Rifleman_ShirtFlek: I_Soldier_F {
        side = 1;
        scope = 1;
        author = "[S.O.S] Henri";
        vehicleClass = "SOS_VehicleClass";    
        uniformClass = "SOS_FleckTarnShirt";
        displayName = "SOS Rifleman";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\FleckTarnShirt.paa"};
    };
    class SOS_Rifleman_VTShirt: I_Soldier_F {
        side = 1;
        scope = 1;
        author = "[S.O.S] Henri";
        vehicleClass = "SOS_VehicleClass";    
        uniformClass = "SOS_Rifleman_VTShirt";
        displayName = "SOS Rifleman";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\VorotnikNonJumper.paa"};
    };
    class SOS_Rifleman_Winter: B_G_Soldier_LAT_F {
        side = 1;
        scope = 1;
        author = "[S.O.S] Catshannon";
        vehicleClass = "SOS_VehicleClass";    
        uniformClass = "SOS_Winter";
        displayName = "SOS Rifleman";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\WinterGue.paa"};
    };
    class SOS_Rifleman_Splinter: B_G_Soldier_LAT_F {
        side = 1;
        scope = 1;
        author = "[S.O.S] Catshannon";
        vehicleClass = "SOS_VehicleClass";    
        uniformClass = "SOS_Splinter";
        displayName = "SOS Rifleman";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\SplinterGue.paa"};
    };
    class SOS_Rifleman_Desert: B_G_Soldier_LAT_F {
        side = 1;
        scope = 1;
        author = "[S.O.S] Catshannon";
        vehicleClass = "SOS_VehicleClass";    
        uniformClass = "SOS_Desert";
        displayName = "SOS Rifleman";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\DesertGue.paa"};
    };    
    class SOS_Rifleman_BW: B_G_Soldier_LAT_F {
        side = 1;
        scope = 1;
        author = "[S.O.S] Henri";
        vehicleClass = "SOS_VehicleClass";    
        uniformClass = "SOS_BW";
        displayName = "SOS Rifleman";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\FleckTarn.paa"};
    };
    class SOS_Rifleman_VT: B_G_Soldier_LAT_F {
        side = 1;
        scope = 1;
        author = "[S.O.S] Henri";
        vehicleClass = "SOS_VehicleClass";    
        uniformClass = "SOS_Rifleman_VT";
        displayName = "SOS Rifleman";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\VorotnikJumper.paa"};
    };
    class SOS_Rifleman_Urban: B_G_Soldier_LAT_F {
        side = 1;
        scope = 1;
        author = "[S.O.S] Henri";
        vehicleClass = "SOS_VehicleClass";    
        uniformClass = "SOS_Urban";
        displayName = "SOS Rifleman";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\UrbanCam.paa"};
    };
    class SOS_Rifleman_AtacLe: B_G_Soldier_LAT_F {
        side = 1;
        scope = 1;
        author = "[S.O.S] Henri";
        vehicleClass = "SOS_VehicleClass";    
        uniformClass = "SOS_AtacLe";
        displayName = "SOS Rifleman";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\AtacLeCam.paa"};
    };
};