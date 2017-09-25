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
class SOS_VT_RS: U_I_CombatUniform_shortsleeve {
    author = "[S.O.S] Henri";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Vorotnik Camo (Rolled Sleeves)";
    picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\VorotnikNonJumper.paa"};
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SOS_Rifleman_VT_RS";
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
class SOS_VT_shirt: U_I_CombatUniform {
    author = "[S.O.S] Henri";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Vorotnik Camo (Shirt)";
    picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\VorotnikNonJumper.paa"};
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SOS_Rifleman_VTShirt";
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
class SOS_VT: U_BG_Guerrilla_6_1 {
    author = "[S.O.S] Henri";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Vorotnik Camo";
    picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\uniforms\VorotnikJumper.paa"};
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SOS_Rifleman_VT";
        containerClass = "Supply40";
        mass = 40;
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