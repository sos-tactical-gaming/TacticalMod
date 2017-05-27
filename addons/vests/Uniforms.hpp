class UniformItem;
class B_CTRG_Soldier_F;
class U_B_CombatUniform_mcam_vest;
class U_B_CTRG_Soldier_F;  
class U_BG_Guerrilla_6_1;
class U_I_CombatUniform;
class U_I_CombatUniform_shortsleeve;
class U_B_CTRG_3;

class SOS_BW_RS: U_I_CombatUniform_shortsleeve {
    author = "[S.O.S] Henri";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Flecktarn Camo (Rolled Sleeves)";
    picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\FleckTarnShirt.paa"};
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SOS_Rifleman_BW_RS";
        containerClass = "Supply40";
        mass = 40;
    };
};
class SOS_BW_shirt: U_I_CombatUniform {
    author = "[S.O.S] Henri";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Flecktarn Camo (Shirt)";
    picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\FleckTarnShirt.paa"};
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SOS_Rifleman_ShirtFlek";
        containerClass = "Supply40";
        mass = 40;
    };
};
class SOS_BW: U_BG_Guerrilla_6_1 {
    author = "[S.O.S] Henri";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Flecktarn Camo";
    picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\FleckTarn.paa"};
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SOS_Rifleman_BW";
        containerClass = "Supply40";
        mass = 40;
    };
};
class SOS_DPMF: U_B_CombatUniform_mcam_vest {
    scope = 2;
    displayName = "DPM Woodland";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"a3\characters_f\blufor\data\clothing_wdl_co.paa"};
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SOS_Rifleman_DPMF";
        containerClass = "Supply40";
        mass = 40;
    };
};
class SOS_DPMF_rs: U_B_CTRG_3 {
    scope = 2;
    displayName = "DPM Woodland (Rolled Sleeves)";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"a3\characters_f\blufor\data\clothing_wdl_co.paa"};
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SOS_Rifleman_DPMF_rs";
        containerClass = "Supply40";
        mass = 40;
    };
};
class SOS_Stealth_DPMF: U_B_CTRG_Soldier_F {
    scope = 2;
    displayName = "DPM Woodland Stealth";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    DLC = "Expansion";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier.p3d";
    hiddenSelections[] = {"Camo","insignia"};
    hiddenSelectionsTextures[] = {"a3\characters_f\blufor\data\clothing_wdl_co.paa"};
    class ItemInfo: UniformItem {
        scope = 2;
        uniformModel = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier.p3d";
        uniformClass = "SOS_Rifleman_Stealth_DPMF";
        containerClass = "supply80";
        armor = 2;
        mass = 1;
        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {"a3\characters_f\blufor\data\clothing_wdl_co.paa"};
    };
};
class SOS_Splinter : U_BG_Guerrilla_6_1 {
    author = "[S.O.S] Catshannon";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Splinter Camo";
    picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\SplinterGue.paa"};
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SOS_Rifleman_Splinter";
        containerClass = "Supply40";
        mass = 40;
    };
};
class SOS_Desert : U_BG_Guerrilla_6_1 {
    author = "[S.O.S] Catshannon";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Desert Camo";
    picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\DesertGue.paa"};
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SOS_Rifleman_Desert";
        containerClass = "Supply40";
        mass = 40;
    };
};
class SOS_Winter: U_BG_Guerrilla_6_1 {
    author = "[S.O.S] Catshannon";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Winter Camo";
    picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\WinterGue.paa"};
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SOS_Rifleman_Winter";
        containerClass = "Supply40";
        mass = 40;
    };
};
class SOS_Lush: U_BG_Guerrilla_6_1 {
    author = "[S.O.S] Henri";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Lush Camo";
    picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\LushCam.paa"};
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SOS_Rifleman_Lush";
        containerClass = "Supply40";
        mass = 40;
    };
};
class SOS_Lush2: U_BG_Guerrilla_6_1 {
    author = "[S.O.S] Henri";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Lush Flecktarn Camo";
    picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\LushCam2.paa"};
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SOS_Rifleman_Lush2";
        containerClass = "Supply40";
        mass = 40;
    };
};
class SOS_Urban: U_BG_Guerrilla_6_1 {
    author = "[S.O.S] Henri";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Urban Camo";
    picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\UrbanCam.paa"};
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SOS_Rifleman_Urban";
        containerClass = "Supply40";
        mass = 40;
    };
};
class SOS_Urban2: U_BG_Guerrilla_6_1 {
    author = "[S.O.S] Henri";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Urban Flecktarn Camo";
    picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\UrbanCam2.paa"};
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SOS_Rifleman_Urban2";
        containerClass = "Supply40";
        mass = 40;
    };
};
class SOS_UrbanRugged: U_BG_Guerrilla_6_1 {
    author = "[S.O.S] Henri";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Rugged Urban Camo";
    picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\UrbanRugged.paa"};
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SOS_Rifleman_UrbanRugged";
        containerClass = "Supply40";
        mass = 40;
    };
};
class SOS_LushRugged: U_BG_Guerrilla_6_1 {
    author = "[S.O.S] Henri";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Rugged Lush Camo";
    picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\LushRugged.paa"};
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SOS_Rifleman_LushRugged";
        containerClass = "Supply40";
        mass = 40;
    };
};
class SOS_AtacLe: U_BG_Guerrilla_6_1 {
    author = "[S.O.S] Henri";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "A-TACS LE Camo";
    picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\AtacLeCam.paa"};
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SOS_Rifleman_AtacLe";
        containerClass = "Supply40";
        mass = 40;
    };
};