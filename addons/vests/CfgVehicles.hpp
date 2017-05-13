class CfgVehicles {
    class B_G_Soldier_LAT_F;
    class B_Competitor_F;
    class B_Soldier_base_F;
    class B_CTRG_Soldier_base_F;
	class B_Soldier_SL_F;
	
    class SOS_Rifleman_DPMF: B_Soldier_base_F {
        side = 1;
        scope = 1;        
        vehicleClass = "SOS_VehicleClass";
        uniformClass = "SOS_DPMF";
        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\DPMF_NATO.paa"};
        linkedItems[] = {};
        weapons[] = {};
        magazines[] = {};
    };
	class SOS_Rifleman_DPMF_rs: B_Soldier_SL_F {
        side = 1;
        scope = 1;        
        vehicleClass = "SOS_VehicleClass";
        uniformClass = "SOS_DPMF_rs";
        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\DPMF_NATO.paa"};
        linkedItems[] = {};
        weapons[] = {};
        magazines[] = {};
    };
    class SOS_Rifleman_Stealth_DPMF: B_CTRG_Soldier_base_F {
        side = 1;
        scope = 1;        
        model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
        nakedUniform = "U_BasicBody";
        uniformClass = "SOS_Stealth_DPMF";
        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\DPMF_NATO.paa"};
        linkedItems[] = {};
        weapons[] = {};
        magazines[] = {};
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
    class SOS_Rifleman_Lush2: B_G_Soldier_LAT_F {
        side = 1;
        scope = 1;
        author = "[S.O.S] Henri";
        vehicleClass = "SOS_VehicleClass";    
        uniformClass = "SOS_Lush2";
        displayName = "SOS Rifleman";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\LushCam2.paa"};
    };
    class SOS_Rifleman_Lush: B_G_Soldier_LAT_F {
        side = 1;
        scope = 1;
        author = "[S.O.S] Henri";
        vehicleClass = "SOS_VehicleClass";    
        uniformClass = "SOS_Lush";
        displayName = "SOS Rifleman";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\LushCam.paa"};
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
    class SOS_Rifleman_Urban2: B_G_Soldier_LAT_F {
        side = 1;
        scope = 1;
        author = "[S.O.S] Henri";
        vehicleClass = "SOS_VehicleClass";    
        uniformClass = "SOS_Urban2";
        displayName = "SOS Rifleman";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\UrbanCam2.paa"};
    };
    class SOS_Rifleman_UrbanRugged: B_G_Soldier_LAT_F {
        side = 1;
        scope = 1;
        author = "[S.O.S] Henri";
        vehicleClass = "SOS_VehicleClass";    
        uniformClass = "SOS_UrbanRugged";
        displayName = "SOS Rifleman";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\UrbanRugged.paa"};
    };
    class SOS_Rifleman_LushRugged: B_G_Soldier_LAT_F {
        side = 1;
        scope = 1;
        author = "[S.O.S] Henri";
        vehicleClass = "SOS_VehicleClass";    
        uniformClass = "SOS_LushRugged";
        displayName = "SOS Rifleman";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\LushRugged.paa"};
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