class CfgVehicles {
	class B_G_Soldier_LAT_F;
	class B_Competitor_F;
	class B_Soldier_base_F;
	class B_CTRG_Soldier_base_F;
	class SOS_Rifleman_wdl: B_Soldier_base_F {
		scope = 2;
		side = 1;
		vehicleClass = "SOS_vehicleClass";
		uniformClass = "SOS_wdl_rs";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"a3\characters_f\blufor\data\clothing_wdl_co.paa"};
		linkedItems[] = {};
		weapons[] = {};
		magazines[] = {};
	};
	class SOS_Rifleman_Stealth_wdl: B_CTRG_Soldier_base_F {
		scope = 2;
		side = 1;
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		nakedUniform = "U_BasicBody";
		uniformClass = "SOS_Stealth_wdl";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"a3\characters_f\blufor\data\clothing_wdl_co.paa"};
		linkedItems[] = {};
		weapons[] = {};
		magazines[] = {};
	};
	class SOS_Rifleman_Winter: B_G_Soldier_LAT_F {
		side = 1;
		scope = 2;
		author = "[S.O.S] Catshannon";
		vehicleClass = "SOS_vehicleClass";	
		uniformClass = "SOS_Winter";
		displayName = "SOS Rifleman";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\SOS_Vests\data\Uniforms\WinterGue.paa"};
	};
	class SOS_Rifleman_Splinter: B_G_Soldier_LAT_F {
		side = 1;
		scope = 2;
		author = "[S.O.S] Catshannon";
		vehicleClass = "SOS_vehicleClass";	
		uniformClass = "SOS_Splinter";
		displayName = "SOS Rifleman";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\SOS_Vests\data\Uniforms\SplinterGue.paa"};
	};
	class SOS_Rifleman_Desert: B_G_Soldier_LAT_F {
		side = 1;
		scope = 2;
		author = "[S.O.S] Catshannon";
		vehicleClass = "SOS_vehicleClass";	
		uniformClass = "SOS_Desert";
		displayName = "SOS Rifleman";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\SOS_Vests\data\Uniforms\DesertGue.paa"};
	};	
	class SOS_Rifleman_BW: B_G_Soldier_LAT_F {
		side = 1;
		scope = 2;
		author = "[S.O.S] Henri";
		vehicleClass = "SOS_vehicleClass";	
		uniformClass = "SOS_BW";
		displayName = "SOS Rifleman";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\SOS_Vests\data\Uniforms\FleckTarn.paa"};
	};
	class SOS_Rifleman_Lush2: B_G_Soldier_LAT_F {
		side = 1;
		scope = 2;
		author = "[S.O.S] Henri";
		vehicleClass = "SOS_vehicleClass";	
		uniformClass = "SOS_Lush2";
		displayName = "SOS Rifleman";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\SOS_Vests\data\Uniforms\LushCam2.paa"};
	};
	class SOS_Rifleman_Lush: B_G_Soldier_LAT_F {
		side = 1;
		scope = 2;
		author = "[S.O.S] Henri";
		vehicleClass = "SOS_vehicleClass";	
		uniformClass = "SOS_Lush";
		displayName = "SOS Rifleman";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\SOS_Vests\data\Uniforms\LushCam.paa"};
	};
	class SOS_Rifleman_Urban: B_G_Soldier_LAT_F {
		side = 1;
		scope = 2;
		author = "[S.O.S] Henri";
		vehicleClass = "SOS_vehicleClass";	
		uniformClass = "SOS_Urban";
		displayName = "SOS Rifleman";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\SOS_Vests\data\Uniforms\UrbanCam.paa"};
	};
	class SOS_Rifleman_Urban2: B_G_Soldier_LAT_F {
		side = 1;
		scope = 2;
		author = "[S.O.S] Henri";
		vehicleClass = "SOS_vehicleClass";	
		uniformClass = "SOS_Urban2";
		displayName = "SOS Rifleman";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\SOS_Vests\data\Uniforms\UrbanCam2.paa"};
	};
	class SOS_Rifleman_UrbanRugged: B_G_Soldier_LAT_F {
		side = 1;
		scope = 2;
		author = "[S.O.S] Henri";
		vehicleClass = "SOS_vehicleClass";	
		uniformClass = "SOS_UrbanRugged";
		displayName = "SOS Rifleman";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\SOS_Vests\data\Uniforms\UrbanRugged.paa"};
	};
	class SOS_Rifleman_LushRugged: B_G_Soldier_LAT_F {
		side = 1;
		scope = 2;
		author = "[S.O.S] Henri";
		vehicleClass = "SOS_vehicleClass";	
		uniformClass = "SOS_LushRugged";
		displayName = "SOS Rifleman";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\SOS_Vests\data\Uniforms\LushRugged.paa"};
	};
	class SOS_Rifleman_AtacLe: B_G_Soldier_LAT_F {
		side = 1;
		scope = 2;
		author = "[S.O.S] Henri";
		vehicleClass = "SOS_vehicleClass";	
		uniformClass = "SOS_AtacLe";
		displayName = "SOS Rifleman";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\SOS_Vests\data\Uniforms\AtacLeCam.paa"};
	};
};