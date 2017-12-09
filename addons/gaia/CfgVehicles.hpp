class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class ArgumentsBaseUnits {
        };
        class ModuleDescription {
            class AnyBrain;
        };
    };
    class SOS_GAIA_Init_F: Module_F {
        scope = 2;
        author = "[S.O.S Major] Legman";
        displayName = CSTRING(Init_Module_DisplayName);
        category = "SOS_GAIA_F";
        
        function = QUOTE(FUNC(moduleInit));
        functionPriority = 2;
        isGlobal = 0;
        isTriggerActivated = 0;
        
        class Arguments {
            class Cache {
                displayName = CSTRING(Init_Cache_DisplayName);
                description = CSTRING(Init_Cache_Description);
                typeName = "NUMBER";
                defaultValue = 1000;
            };
            class MaxSlowSpeedRange {
                displayName = CSTRING(Init_MaxSlowSpeedRange_DisplayName);
                description = CSTRING(Init_MaxSlowSpeedRange_Description);
                typeName = "NUMBER";
                defaultValue = 400;
            };
            class MaxMediumSpeedRange {
                displayName = CSTRING(Init_MaxMediumSpeedRange_DisplayName);
                description = CSTRING(Init_MaxMediumSpeedRange_Description);
                typeName = "NUMBER";
                defaultValue = 4500;
            };
            class MaxFastSpeedRange {
                displayName = CSTRING(Init_MaxFastSpeedRange_DisplayName);
                description = CSTRING(Init_MaxFastSpeedRange_Description);
                typeName = "NUMBER";
                defaultValue = 80000;
            };
            class MortarTimeout {
                displayName = CSTRING(Init_MortarTimeout_DisplayName);
                description = CSTRING(Init_MortarTimeout_Description);
                typeName = "NUMBER";
                defaultValue = 4;
            };
            class AttacksForNonGAIA {
                displayName = CSTRING(Init_AttacksForNonGAIA_DisplayName);
                description = CSTRING(Init_AttacksForNonGAIA_Description);
                typeName = "BOOL";
                defaultValue = 0;
            };
            class AmbientBehaviour {
                displayName = CSTRING(Init_AmbientBehaviour_DisplayName);
                description = CSTRING(Init_AmbientBehaviour_Description);
                typeName = "BOOL";
                defaultValue = 1;
            };
            class AmbientBehaviourChance {
                displayName = CSTRING(Init_AmbientBehaviourChance_DisplayName);
                description = CSTRING(Init_AmbientBehaviourChance_Description);
                typeName = "NUMBER";
                defaultValue = 20;
            };
            class TransportRestTime {
                displayName = CSTRING(Init_TransportRestTime_DisplayName);
                description = CSTRING(Init_TransportRestTime_DisplayName);
                typeName = "NUMBER";
                defaultValue = 40;
            };
        };
       
        class ModuleDescription: ModuleDescription {
            description = CSTRING(Init_Module_Description);
            sync[] = {};
        };
    };
    class SOS_GAIA_Zone_F: Module_F {
        scope = 2;
        author = "[S.O.S Major] Legman";
        displayName = CSTRING(Zone_Module_DisplayName);
        category = "SOS_GAIA_F";
        
        function = QUOTE(FUNC(moduleZone));
        functionPriority = 2;
        isGlobal = 0;
        isTriggerActivated = 0;
        
        class Arguments {
            class ID {
                displayName = CSTRING(Zone_ID_DisplayName);
                description = CSTRING(Zone_ID_Description);
                typeName = "STRING";
                defaultValue = "1";
                class Values {
                    class 1 {name = "1"; value = "1"};
                    class 2 {name = "2"; value = "2"};
                    class 3 {name = "3"; value = "3"};
                    class 4 {name = "4"; value = "4"};
                    class 5 {name = "5"; value = "5"};
                    class 6 {name = "6"; value = "6"};
                    class 7 {name = "7"; value = "7"};
                    class 8 {name = "8"; value = "8"};
                    class 9 {name = "9"; value = "9"};
                    class 10 {name = "10"; value = "10"};
                };
            };
            class Size {
                displayName = CSTRING(Zone_Size_DisplayName);
                description = CSTRING(Zone_Size_Description);
                typeName = "NUMBER";
                defaultValue = 300;
                class Values {
                    class 100m {name = "100m"; value = 100};
                    class 200m {name = "200m"; value = 200};
                    class 300m {name = "300m"; value = 300};
                    class 400m {name = "400m"; value = 400};
                    class 500m {name = "500m"; value = 500};
                    class 600m {name = "600m"; value = 600};
                    class 700m {name = "700m"; value = 700};
                    class 800m {name = "800m"; value = 800};
                    class 900m {name = "900m"; value = 900};
                    class 1000m {name = "1000m"; value = 1000};
                    class 1100m {name = "1100m"; value = 1100};
                    class 1200m {name = "1200m"; value = 1200};
                    class 1300m {name = "1300m"; value = 1300};
                    class 1400m {name = "1400m"; value = 1400};
                    class 1500m {name = "1500m"; value = 1500};
                    class 1600m {name = "1600m"; value = 1600};
                    class 1700m {name = "1700m"; value = 1700};
                    class 1800m {name = "1800m"; value = 1800};
                    class 1900m {name = "1900m"; value = 1900};
                    class 2000m {name = "2000m"; value = 2000};
                };
            };
            class ShowMarker {
                displayName = CSTRING(Zone_ShowMarker_DisplayName);
                description = CSTRING(Zone_ShowMarker_Description);
                typeName = "BOOL";
                defaultValue = false;               
            };
        };
    };
        
    class SOS_GAIA_Assign_F: Module_F {
        scope = 2;
        author = "[S.O.S Major] Legman";
        displayName = CSTRING(Assign_Module_DisplayName);
        category = "SOS_GAIA_F";
        
        function = QUOTE(FUNC(moduleAssign));
        functionPriority = 2;
        isGlobal = 0;
        isTriggerActivated = 1;
        
        class Arguments {
            class ID {
                displayName = CSTRING(Assign_ID_DisplayName);
                description = CSTRING(Assign_ID_Description);
                typeName = "STRING";
                defaultValue = "1";
                class Values {
                    class 1 {name = "1"; value = "1"};
                    class 2 {name = "2"; value = "2"};
                    class 3 {name = "3"; value = "3"};
                    class 4 {name = "4"; value = "4"};
                    class 5 {name = "5"; value = "5"};
                    class 6 {name = "6"; value = "6"};
                    class 7 {name = "7"; value = "7"};
                    class 8 {name = "8"; value = "8"};
                    class 9 {name = "9"; value = "9"};
                    class 10 {name = "10"; value = "10"};
                };
            };
            class Behaviour {
                displayName = CSTRING(Assign_Behaviour_DisplayName);
                description = CSTRING(Assign_Behaviour_Description);
                typeName = "STRING";
                defaultValue = "NOFOLLOW";
                class Values {
                    class Move {name = CSTRING(Assign_Behaviour_Move_DisplayName); value = "MOVE"};
                    class NoFollow {name = CSTRING(Assign_Behaviour_NoFollow_DisplayName); value = "NOFOLLOW"};
                    class Fortify {name = CSTRING(Assign_Behaviour_Fortify_DisplayName); value = "FORTIFY"};                    
                };
            };
            class Cache {
                displayName = CSTRING(Assign_Cache_DisplayName);
                description = CSTRING(Assign_Cache_Description);
                typeName = "BOOL";
                defaultValue = false;                
            };
        };
       
        class ModuleDescription: ModuleDescription {
            description = CSTRING(Assign_Module_DisplayName);
            sync[] = {};
        };
    };
};