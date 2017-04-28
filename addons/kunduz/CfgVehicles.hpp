class CfgVehicles {
    class Module_F;
    class ModuleEmpty_F;
    
    class ModuleCurator_F: Module_F {
        function = "SOS_fnc_moduleCurator";
    };
    class ModuleMine_F: ModuleEmpty_F {
        function = "SOS_fnc_moduleMine";
    };
    class ModuleOrdnance_F: Module_F {
        function = "SOS_fnc_moduleProjectile";
    };
    class ModuleRemoteControl_F: Module_F {
        function = "SOS_fnc_moduleRemoteControl";
    };
    
    class B_FieldPack_cbr;
    class B_FieldPack_khk;
    
    class SOS_FieldPack_cbr_RPG : B_FieldPack_cbr {
        scope = 1;
        class TransportMagazines {
            class _xx_30Rnd_545x39_Mag_F {
                magazine = "30Rnd_545x39_Mag_F";
                count = 4;
            };
            class _xx_RPG7_F {
                magazine = "RPG7_F";
                count = 4;
            };
        };    
    };
    class SOS_FieldPack_khk_RPG : B_FieldPack_khk {
        scope = 1;
        class TransportMagazines {
            class _xx_30Rnd_545x39_Mag_F {
                magazine = "30Rnd_545x39_Mag_F";
                count = 4;
            };
            class _xx_RPG7_F {
                magazine = "RPG7_F";
                count = 4;
            };
        };    
    };
    class SOS_FieldPack_cbr_Terrorist : B_FieldPack_cbr {
        scope = 1;
        class TransportMagazines {
            class _xx_IEDLandSmall_Remote_Mag {
                magazine = "IEDLandSmall_Remote_Mag";
                count = 2;
            };
            class _xx_IEDUrbanSmall_Remote_Mag {
                magazine = "IEDUrbanSmall_Remote_Mag";
                count = 1;
            };
        };
        class TransportItems {
            class _xx_toolkit {
                name = "toolkit";
                count = 1;
            };
        };
    };
    class SOS_FieldPack_khk_Terrorist : B_FieldPack_khk {
        scope = 1;
        class TransportMagazines {
            class _xx_IEDLandSmall_Remote_Mag {
                magazine = "IEDLandSmall_Remote_Mag";
                count = 2;
            };
            class _xx_IEDUrbanSmall_Remote_Mag {
                magazine = "IEDUrbanSmall_Remote_Mag";
                count = 1;
            };
        };
        class TransportItems {
            class _xx_toolkit {
                name = "toolkit";
                count = 1;
            };
        };    
    };
    
    class I_Soldier_base_F;
    
    class SOS_Soldier_base_F : I_Soldier_base_F {
        author = "[S.O.S Major] Legman"
        identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
        faction = "SOS_INS_F";        
        genericNames = "TakistaniMen";
        model = "\A3\characters_F\OPFOR\o_soldier_01.p3d";
    };    
    class SOS_Insurgent_Soldier_1_F : SOS_Soldier_base_F {
        scope = 2;
        displayName = "Militia 1";
        uniformClass = "U_I_C_Soldier_Bandit_2_F";
        weapons[] = {"arifle_AKM_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AKM_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = {"V_HarnessO_brn", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        respawnLinkedItems[] = {"V_HarnessO_brn", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
    };    
    class SOS_Insurgent_Soldier_2_F : SOS_Soldier_base_F {
        scope = 2;
        displayName = "Militia 2";
        uniformClass = "U_I_C_Soldier_Bandit_5_F";
        weapons[] = {"arifle_AKM_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AKM_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = {"V_HarnessOGL_gry", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        respawnLinkedItems[] = {"V_HarnessOGL_gry", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
    };    
    class SOS_Insurgent_Soldier_3_F : SOS_Soldier_base_F {
        scope = 2;
        displayName = "Militia 3";
        uniformClass = "U_I_C_Soldier_Bandit_3_F";
        weapons[] = {"arifle_AKM_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AKM_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = {"V_TacChestrig_cbr_F", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        respawnLinkedItems[] = {"V_TacChestrig_cbr_F", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
    };    
    class SOS_Insurgent_Soldier_4_F : SOS_Soldier_base_F {
        scope = 2;
        displayName = "Militia 4";
        uniformClass = "U_I_C_Soldier_Bandit_4_F";
        weapons[] = {"arifle_AKM_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AKM_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = {"V_HarnessOGL_brn", "H_Shemag_olive", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        respawnLinkedItems[] = {"V_HarnessOGL_brn", "H_Shemag_olive", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
    };    
    class SOS_Insurgent_Soldier_mg_1_F : SOS_Soldier_base_F {
        scope = 2;
        displayName = "Militia (LIM-85) 1";
        uniformClass = "U_I_C_Soldier_Bandit_1_F";
        weapons[] = {"LMG_03_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"LMG_03_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        magazines[] = {"200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
        respawnMagazines[] = {"200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = {"V_HarnessO_gry", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        respawnLinkedItems[] = {"V_HarnessO_gry", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        role = "MachineGunner";
        icon = "iconManMG";
    };    
    class SOS_Insurgent_Soldier_mg_2_F : SOS_Soldier_base_F {
        scope = 2;
        displayName = "Militia (LIM-85) 2";
        uniformClass = "U_I_C_Soldier_Bandit_3_F";
        weapons[] = {"LMG_03_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"LMG_03_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        magazines[] = {"200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
        respawnMagazines[] = {"200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = {"V_TacChestrig_cbr_F", "H_Shemag_olive", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        respawnLinkedItems[] = {"V_TacChestrig_cbr_F", "H_Shemag_olive", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        role = "MachineGunner";
        icon = "iconManMG";
    };
    class SOS_Insurgent_Soldier_rpg_1_F : SOS_Soldier_base_F {
        scope = 2;
        displayName = "Militia (RPG-7) 1";
        uniformClass = "U_I_C_Soldier_Bandit_5_F";
        backpack = "SOS_FieldPack_cbr_RPG";
        weapons[] = {"arifle_AKS_F", "launch_RPG7_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AKS_F", "launch_RPG7_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "RPG7_F", "MiniGrenade", "MiniGrenade"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "RPG7_F", "MiniGrenade", "MiniGrenade"};
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = {"V_BandollierB_cbr", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        respawnLinkedItems[] = {"V_BandollierB_cbr", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        role = "MissileSpecialist";
        icon = "iconManAT";
    };    
    class SOS_Insurgent_Soldier_rpg_2_F : SOS_Soldier_base_F {
        scope = 2;
        displayName = "Militia (RPG-7) 2";
        uniformClass = "U_I_C_Soldier_Bandit_1_F";
        backpack = "SOS_FieldPack_cbr_RPG";
        weapons[] = {"arifle_AKS_F", "launch_RPG7_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AKS_F", "launch_RPG7_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "RPG7_F", "MiniGrenade", "MiniGrenade"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "RPG7_F", "MiniGrenade", "MiniGrenade"};
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = {"V_BandollierB_cbr", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        respawnLinkedItems[] = {"V_BandollierB_cbr", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        role = "MissileSpecialist";
        icon = "iconManAT";
    };    
    class SOS_Insurgent_Soldier_rpg_3_F : SOS_Soldier_base_F {
        scope = 2;
        displayName = "Militia (RPG-7) 3";
        uniformClass = "U_I_C_Soldier_Bandit_2_F";
        backpack = "SOS_FieldPack_khk_RPG";
        weapons[] = {"arifle_AKS_F", "launch_RPG7_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AKS_F", "launch_RPG7_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "RPG7_F", "MiniGrenade", "MiniGrenade"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "RPG7_F", "MiniGrenade", "MiniGrenade"};
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = {"V_BandollierB_khk", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        respawnLinkedItems[] = {"V_BandollierB_khk", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        role = "MissileSpecialist";
        icon = "iconManAT";
    };
    class SOS_Insurgent_Terrorist_1_F : SOS_Soldier_base_F {
        scope = 2;
        displayName = "Terrorist (IED) 1";
        uniformClass = "U_I_C_Soldier_Bandit_5_F";
        backpack = "SOS_FieldPack_cbr_Terrorist";
        weapons[] = {"arifle_AKS_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AKS_F", "launch_RPG7_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = {"V_TacChestrig_grn_F", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        respawnLinkedItems[] = {"V_TacChestrig_grn_F", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        canDeactivateMines = 1;
        detectSkill = 80;
        role = "Sapper";
        icon = "iconManExplosive";
        picture = "pictureExplosive";
    };
    class SOS_Insurgent_Terrorist_2_F : SOS_Soldier_base_F {
        scope = 2;
        displayName = "Terrorist (IED) 2";
        uniformClass = "U_I_C_Soldier_Bandit_2_F";
        backpack = "SOS_FieldPack_cbr_Terrorist";
        weapons[] = {"arifle_AKS_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AKS_F", "launch_RPG7_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = {"V_TacChestrig_cbr_F", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        respawnLinkedItems[] = {"V_TacChestrig_cbr_F", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        canDeactivateMines = 1;
        detectSkill = 80;
        role = "Sapper";
        icon = "iconManExplosive";
        picture = "pictureExplosive";
    };    
    class SOS_Insurgent_Terrorist_3_F : SOS_Soldier_base_F {
        scope = 2;
        displayName = "Terrorist (IED) 3";
        uniformClass = "U_I_C_Soldier_Bandit_4_F";
        backpack = "SOS_FieldPack_khk_Terrorist";
        weapons[] = {"arifle_AKS_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AKS_F", "launch_RPG7_F", "hgun_Pistol_01_F", "Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade"};
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = {"V_HarnessO_gry", "H_Shemag_olive", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        respawnLinkedItems[] = {"V_HarnessO_gry", "H_Shemag_olive", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        canDeactivateMines = 1;
        detectSkill = 80;
        role = "Sapper";
        icon = "iconManExplosive";
        picture = "pictureExplosive";
    };    
    class SOS_Insurgent_Militia_unarmed_1_F : SOS_Soldier_base_F {
        scope = 2;
        displayName = "Militia (Unarmed) 1";
        uniformClass = "U_I_C_Soldier_Bandit_1_F";
        weapons[] = {"Binocular", "Throw", "Put"};
        respawnWeapons[] = {"Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
        items[] = {"FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit"};
        linkedItems[] = {"V_TacChestrig_oli_F", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        respawnLinkedItems[] = {"V_TacChestrig_oli_F", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
    };    
    class SOS_Insurgent_Militia_unarmed_2_F : SOS_Soldier_base_F {
        scope = 2;
        displayName = "Militia (Unarmed) 2";
        uniformClass = "U_I_C_Soldier_Bandit_3_F";
        weapons[] = {"Binocular", "Throw", "Put"};
        respawnWeapons[] = {"Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
        items[] = {"FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit"};
        linkedItems[] = {"V_BandollierB_khk", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        respawnLinkedItems[] = {"V_BandollierB_khk", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
    };    
    class SOS_Insurgent_Militia_unarmed_3_F : SOS_Soldier_base_F {
        scope = 2;
        displayName = "Militia (Unarmed) 3";
        uniformClass = "U_I_C_Soldier_Bandit_2_F";
        weapons[] = {"Binocular", "Throw", "Put"};
        respawnWeapons[] = {"Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
        items[] = {"FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit"};
        linkedItems[] = {"V_HarnessOGL_brn", "H_Shemag_olive", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        respawnLinkedItems[] = {"V_HarnessOGL_brn", "H_Shemag_olive", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
    };    
    class SOS_Insurgent_Terrorist_unarmed_1_F : SOS_Soldier_base_F {
        scope = 2;
        displayName = "Terrorist (Unarmed) 1";
        uniformClass = "U_I_C_Soldier_Bandit_4_F";
        backpack = "SOS_FieldPack_cbr_Terrorist";
        weapons[] = {"Binocular", "Throw", "Put"};
        respawnWeapons[] = {"Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
        items[] = {"FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit"};
        linkedItems[] = {"V_BandollierB_rgr", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        respawnLinkedItems[] = {"V_BandollierB_rgr", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        canDeactivateMines = 1;
        detectSkill = 80;
        role = "Sapper";
        icon = "iconManExplosive";
        picture = "pictureExplosive";
    };    
    class SOS_Insurgent_Terrorist_unarmed_2_F : SOS_Soldier_base_F {
        scope = 2;
        displayName = "Terrorist (Unarmed) 2";
        uniformClass = "U_I_C_Soldier_Bandit_5_F";
        backpack = "SOS_FieldPack_khk_Terrorist";
        weapons[] = {"Binocular", "Throw", "Put"};
        respawnWeapons[] = {"Binocular", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
        items[] = {"FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit"};
        linkedItems[] = {"V_TacChestrig_grn_F", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        respawnLinkedItems[] = {"V_TacChestrig_grn_F", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "tf_fadak"};
        canDeactivateMines = 1;
        detectSkill = 80;
        role = "Sapper";
        icon = "iconManExplosive";
        picture = "pictureExplosive";
    };
};