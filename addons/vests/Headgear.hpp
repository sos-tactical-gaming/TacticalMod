class H_Beret_blk;
class H_Cap_marshal;

class H_CrewHelmetHeli_B: ItemCore {
    class ItemInfo;
};
class H_HelmetB: ItemCore {
    class ItemInfo;
};

class Beret_SOS_officer: H_Beret_blk {
    scope = 2;
    displayName = "SOS Officer's Beret (Green)";
    picture = "\A3\characters_f\Data\ui\icon_h_beret_blk_ca.paa";
    model = "\A3\Characters_F\Common\headgear_beret01";
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\headgear\SOS-Beret-1.paa"};
};
class Beret_SOS_officer_blk: H_Beret_blk {
    scope = 2;
    displayName = "SOS Officer's Beret (Black)";
    picture = "\A3\characters_f\Data\ui\icon_h_beret_blk_ca.paa";
    model = "\A3\Characters_F\Common\headgear_beret01";
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\headgear\SOS-Beret-2.paa"};
};
class BW_ECH_NET: H_HelmetB {
    scope = 2;
    author = "[S.O.S] Henri";
    weaponPoolAvailable = 1;
    picture = "\A3\characters_f\Data\UI\icon_H_HelmetSpecB_CA.paa";
    displayName = "Flecktarn Camo (Webbed)";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
	hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\headgear\BW_Helmet.paa","\x\sos\addons\vests\data\headgear\FTghillie2_co.paa"};
    class ItemInfo: ItemInfo {
        mass = 40;
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
        armor = 3;
        passThrough = 0.5500000;
        hiddenSelections[] = {"camo1","camo2"};
    };
};
class VT_ECH_NET: H_HelmetB {
    scope = 2;
    author = "[S.O.S] Henri";
    weaponPoolAvailable = 1;
    picture = "\A3\characters_f\Data\UI\icon_H_HelmetSpecB_CA.paa";
    displayName = "Vorotnik Camo (Webbed)";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
	hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\headgear\Vorotnik_Helmet.paa","\x\sos\addons\vests\data\headgear\FTghillie2_co.paa"};
    class ItemInfo: ItemInfo {
        mass = 40;
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
        armor = 3;
        passThrough = 0.5500000;
        hiddenSelections[] = {"camo1","camo2"};
    };
};
class BW_MICH: H_HelmetB {
    scope = 2;
    author = "[S.O.S] Henri";
    weaponPoolAvailable = 1;
    picture = "\a3\characters_f_beta\data\ui\icon_h_i_helmet_canvas_ca.paa";
    displayName = "Flecktarn MICH";
    model = "A3\characters_f_beta\INDEP\headgear_helmet_canvas";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\headgear\BW_MICH.paa"};
    class ItemInfo: ItemInfo {
        mass = 40;
        uniformModel = "A3\characters_f_beta\INDEP\headgear_helmet_canvas";
        armor = 3;
        passThrough = 0.5500000;
        hiddenSelections[] = {"camo"};
    };
};
class VT_MICH: H_HelmetB {
    scope = 2;
    author = "[S.O.S] Henri";
    weaponPoolAvailable = 1;
    picture = "\a3\characters_f_beta\data\ui\icon_h_i_helmet_canvas_ca.paa";
    displayName = "Vorotnik MICH";
    model = "A3\characters_f_beta\INDEP\headgear_helmet_canvas";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\headgear\Vorotnik_Mich.paa"};
    class ItemInfo: ItemInfo {
        mass = 40;
        uniformModel = "A3\characters_f_beta\INDEP\headgear_helmet_canvas";
        armor = 3;
        passThrough = 0.5500000;
        hiddenSelections[] = {"camo"};
    };
};
class BW_HEAD: H_HelmetB {
    scope = 2;
    author = "[S.O.S] Henri";
    weaponPoolAvailable = 1;
    picture = "\A3\characters_f\Data\UI\icon_H_HelmetSpecB_CA.paa";
    displayName = "Flecktarn ECH";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\headgear\BW_Helmet.paa"};
    class ItemInfo: ItemInfo {
        mass = 40;
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        armor = 3;
        passThrough = 0.5500000;
        hiddenSelections[] = {"camo"};
    };
};
class VT_HEAD: H_HelmetB {
    scope = 2;
    author = "[S.O.S] Henri";
    weaponPoolAvailable = 1;
    picture = "\A3\characters_f\Data\UI\icon_H_HelmetSpecB_CA.paa";
    displayName = "Vorotnik ECH";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\headgear\Vorotnik_Helmet.paa"};
    class ItemInfo: ItemInfo {
        mass = 40;
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        armor = 3;
        passThrough = 0.5500000;
        hiddenSelections[] = {"camo"};
    };
};
class BW_ECH_Light_Medic: H_HelmetB {
    scope = 2;
    author = "[S.O.S] Henri";
    weaponPoolAvailable = 1;
    picture = "\A3\characters_f\Data\UI\icon_H_HelmetSpecB_CA.paa";
    displayName = "Medic Flecktarn ECH Light";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\headgear\BW_Helmet_Medic.paa"};
    class ItemInfo: ItemInfo {
        mass = 40;
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
        armor = 3;
        passThrough = 0.5500000;
        hiddenSelections[] = {"camo"};
    };
};

class VT_ECH_Light_Medic: H_HelmetB {
    scope = 2;
    author = "[S.O.S] Henri";
    weaponPoolAvailable = 1;
    picture = "\A3\characters_f\Data\UI\icon_H_HelmetSpecB_CA.paa";
    displayName = "Medic Vorotnik ECH Light";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\headgear\Vorotnik_Helmet_Medic.paa"};
    class ItemInfo: ItemInfo {
        mass = 40;
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
        armor = 3;
        passThrough = 0.5500000;
        hiddenSelections[] = {"camo"};
    };
};

class BW_ECH_Light: H_HelmetB {
    scope = 2;
    author = "[S.O.S] Henri";
    weaponPoolAvailable = 1;
    picture = "\A3\characters_f\Data\UI\icon_H_HelmetSpecB_CA.paa";
    displayName = "Flecktarn ECH Light";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\headgear\BW_Helmet.paa"};
    class ItemInfo: ItemInfo {
        mass = 40;
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
        armor = 3;
        passThrough = 0.5500000;
        hiddenSelections[] = {"camo"};
    };
};
class VT_ECH_Light: H_HelmetB {
    scope = 2;
    author = "[S.O.S] Henri";
    weaponPoolAvailable = 1;
    picture = "\A3\characters_f\Data\UI\icon_H_HelmetSpecB_CA.paa";
    displayName = "Vorotnik ECH Light";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\headgear\Vorotnik_Helmet.paa"};
    class ItemInfo: ItemInfo {
        mass = 40;
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
        armor = 3;
        passThrough = 0.5500000;
        hiddenSelections[] = {"camo"};
    };
};
class Medic_ECH_Light: H_HelmetB {
    scope = 2;
    author = "[S.O.S] Catshannon";
    weaponPoolAvailable = 1;
    picture = "\A3\characters_f\Data\UI\icon_H_HelmetSpecB_CA.paa";
    displayName = "Medic ECH Light";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\headgear\ECHL_Medic.paa"};
    class ItemInfo: ItemInfo {
        mass = 40;
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
        armor = 3;
        passThrough = 0.5500000;
        hiddenSelections[] = {"camo"};
    };
};
class Medic_ECH_Light_Black: H_HelmetB {
    scope = 2;
    author = "[S.O.S] Catshannon";
    weaponPoolAvailable = 1;
    picture = "\A3\characters_f\Data\UI\icon_H_HelmetSpecB_CA.paa";
    displayName = "Medic ECH Light (Black)";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\headgear\ECHL_Medic_Black.paa"};
    class ItemInfo: ItemInfo {
        mass = 40;
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
        armor = 3;
        passThrough = 0.5500000;
        hiddenSelections[] = {"camo"};
    };
};
class URBAN_HEAD: H_HelmetB {
    scope = 2;
    author = "[S.O.S] Henri";
    weaponPoolAvailable = 1;
    picture = "\A3\characters_f\Data\UI\icon_H_HelmetSpecB_CA.paa";
    displayName = "Urban Helmet";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\headgear\Urban_Helmet.paa"};
    class ItemInfo: ItemInfo {
        mass = 40;
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        armor = 3;
        passThrough = 0.5500000;
        hiddenSelections[] = {"camo"};
    };
};
class Medic_ECH_DPM: H_HelmetB {
    scope = 2;
    author = "[S.O.S] Catshannon";
    weaponPoolAvailable = 1;
    picture = "\A3\characters_f\Data\UI\icon_H_HelmetSpecB_CA.paa";
    displayName = "Medic ECH Light (DPM)";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\headgear\ECHL_Medic_DPM.paa"};
    class ItemInfo: ItemInfo {
        mass = 40;
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
        armor = 3;
        passThrough = 0.5500000;
        hiddenSelections[] = {"camo"};
    };
};
class Medic_Helicrew: H_CrewHelmetHeli_B {
    scope = 2;
    author = "[S.O.S] Catshannon";
    weaponPoolAvailable = 1;
    picture = "\A3\Characters_F\data\ui\icon_H_Pilot_Helmet_Heli_OI_CA.paa";
    displayName = "Helicrew (ParaMedic)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\headgear\HeliParaMedicHelm.paa"};
    class ItemInfo: ItemInfo {
        mass = 40;
        uniformModel = "A3\Characters_F\Common\headgear_helmet_heli_shield";
        armor = 3;
        passThrough = 0.5500000;
        hiddenSelections[] = {"camo"};
    };
};
class Medic_Cap: H_Cap_marshal {
    scope = 2;
    author = "[S.O.S] Catshannon";
    weaponPoolAvailable = 1;
    displayName = "Medic Cap";
    picture = "\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
    model = "\A3\Characters_F\common\capb_headphones.p3d";
    hiddenSelectionsTextures[] = {"\x\sos\addons\vests\data\headgear\MedicCap.paa"};
};
