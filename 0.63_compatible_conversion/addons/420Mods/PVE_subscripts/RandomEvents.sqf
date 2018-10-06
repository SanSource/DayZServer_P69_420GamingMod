
/*
░░░░░░░░░░░█▀▀░░█░░░░░░        
░░░░░░▄▀▀▀▀░░░░░█▄▄░░░░
░░░░░░█░█░░░░░░░░░░▐░░░        
░░░░░░▐▐░░░░░░░░░▄░▐░░░
░░░░░░█░░░░░░░░▄▀▀░▐░░░         
░░░░▄▀░░░░░░░░▐░▄▄▀░░░░ By DuhOneZ
░░▄▀░░░▐░░░░░█▄▀░▐░░░░░ 
░░█░░░▐░░░░░░░░▄░█░░░░░ 
░░░█▄░░▀▄░░░░▄▀▐░█░░░░░ 
░░░█▐▀▀▀░▀▀▀▀░░▐░█░░░░░ 
░░▐█▐▄░░▀░░░░░░▐░█▄▄░░░            
░░░▄Brian Hicks▐▄▄▄▀░░░
░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░
*/
/*Custom Helicarsh*/
/**/

_Heli = 1;

_HeliPointsArray = [
    [5738.4302,7605.0298],
    [6242.1201,8368.71],
   	[4015.1001,7971.5698],
    [2320.3101,10217.8],
    [4506.8398,12748.3],
    [7121.3701,9646.6699],
    [1667.61,5293.3398],
    [1700.0699,2338.8501],
    [3563.6899,7537.1001],
    [4328.02,8489.7002],
    [5211.0698,7763.5498],
    [7455.7798,11574.3],
    [6119.3101,6631.1099],
    [5941.0601,6645.27],
    [5016.4302,6257.9199],
    [4781.8999,6270.2598],
    [4455.9302,6181.7202],
    [4074.98,6222.1802],
    [3622.3,6415.96],
    [3254.45,6682.6499],
    [2848.0601,6815.6401],
    [2572.1799,6781.1499],
    [2298.23,6513.3999],
    [2313.9299,6151.0498],
    [2461.02,5794.4102],
    [2028.4399,5166.5601],
    [1596.27,5234.5698],
    [3031.3401,10225.8],
    [3475.28,9765],
    [2863.99,9639.5195],
    [2067.3401,9272.2002],
    [1603.08,9231.04],
    [640.487,9119.4697],
    [4996.7798,9156.46],
    [5314.1802,9310.79],
    [5124.4502,9496.6504],
    [4847.1099,9867.2598],
    [4603.77,10245],
    [4454.6001,10666.2],
    [4696.3501,10736.4],
    [4174.2002,10879.6],
    [3904.0601,11112.5],
    [3453.49,10866.1],
    [2627.26,10443.4],
    [2243.21,10726.9],
    [1853.38,11309.6],
    [1949.3101,11759.8],
    [4832.6699,4767.9502],
    [3838.1101,4944.77],
    [3142.3401,4426.1899],
    [1263.8101,4081.76],
    [1371.08,4505.2598],
    [4712.8701,5869.5498],
    [5405.4502,5638.77],
    [3235.1799,8824.7598],
    [5928.0698,10975.5],
    [4661.25,11954.4]

];

_arrayZom= [
        ["ZmbM_PatrolNormal_PautRev"],
        ["ZmbM_PatrolNormal_Autumn"],
        ["ZmbM_PatrolNormal_Flat"],
        ["ZmbM_PatrolNormal_Summer"],
        ["ZmbM_SoldierNormal"]
];

        for "ii" from 0 to _Heli do
        {
        _thisHeli = _HeliPointsArray select floor(random(count _HeliPointsArray));
        _vehicle = createvehicle ["Land_UH1Y_WreckCustom", _thisHeli, [], 0, "CAN_COLLIDE"];
        _vehicle setDir floor(random 360);
        _vehicle setpos [(_thisHeli select 0),(_thisHeli select 1),0];
        _originalPos = getPosATL _vehicle;
        _Damage = random 0.7;
		_radius = random 15;


		DZ_jewwaskilled = {
		private["_agent","_uid"];
		_agent = _this select 0;
		_killer = _this select 1;
		_JewPos = getPosATL _agent;
		sleep 2;
		_arrayZom= [
        ["ZmbM_PatrolNormal_PautRev"],
        ["ZmbM_PatrolNormal_Autumn"],
        ["ZmbM_PatrolNormal_Flat"],
        ["ZmbM_PatrolNormal_Summer"],
        ["ZmbM_SoldierNormal"]
		];
		_Zomb = createAgent [(_arrayZom select floor(random(count _arrayZom))) select 0, [(_JewPos select 0)+ random 5,(_JewPos select 1) + random 5], [], 1, "CAN_COLLIDE"];
        _Zomb = createAgent [(_arrayZom select floor(random(count _arrayZom))) select 0, [(_JewPos select 0)+ random 5,(_JewPos select 1) + random 5], [], 1, "CAN_COLLIDE"];
        _Zomb = createAgent [(_arrayZom select floor(random(count _arrayZom))) select 0, [(_JewPos select 0)+ random 5,(_JewPos select 1) + random 5], [], 1, "CAN_COLLIDE"];
        _Zomb = createAgent [(_arrayZom select floor(random(count _arrayZom))) select 0, [(_JewPos select 0)+ random 5,(_JewPos select 1) + random 5], [], 1, "CAN_COLLIDE"];
        _Zomb setDir floor(random 360);
		};

		for "hh" from 1 to 1 do {
		_typesArr = [
		["M249","M_M249Box_200Rnd","Att_Optic_Reflex"],
		["AK12","M_ak12_30Rnd","Att_Suppressor_AK","Att_Optic_Reflex"],
		["AK12u","M_ak12_30Rnd","Att_Suppressor_AK","Att_Optic_Reflex"],
		["AR160","M_STANAG_30Rnd_Coupled","Att_Optic_Reflex"],
		["c4_y","c4_b"],
		["FAMAS","M_FAMAS_25Rnd","Att_Optic_Reflex"],
		["G36","M_G36C_30Rnd","Att_Optic_Reflex"],
		["GALIL","M_GALIL_30Rnd","Att_Suppressor_AK"],
		["gaus","M_gausbat","M_gausbat"],
		["JNG90","M_JNG90_10rnd","M_JNG90_10rnd"],
		["L96","M_L96_10rnd","M_L96_10rnd","Att_Optic_Reflex","Att_Optic_ACOG","Att_Optic_Hunting"],
		["M9","M_m9_15Rnd","M_m9_15Rnd","M_m9_15Rnd"],
		["M39","M_M39_10Rnd","M_M39_10Rnd","M_M39_10Rnd","Att_Optic_Reflex","Att_Optic_ACOG","Att_Optic_Hunting"],
		["m40","M_m40_5rnd","M_m40_5rnd","M_m40_5rnd"],
		["M82","M_m82_10Rnd","M_m82_10Rnd","M_m82_10Rnd","Att_Optic_Reflex","Att_Optic_ACOG","Att_Optic_Hunting"],
		["m320_mini","Ammo_m320Dis","Ammo_m320"],
		["m1014","m1014_exp_4rnd","m1014_exp_4rnd","m1014_exp_Slug"],
		["MLG","Ammo_m320Dis","Ammo_m320Dis","Ammo_m320"],
		["MP7","M_MP7_30Rnd","M_MP7_30Rnd","M_MP7_30Rnd"],
		["scar","M_scar_21Rnd","M_scar_21Rnd"],
		["scar_Green","M_scar_21Rnd","M_scar_21Rnd"],
		["scar_Black","M_scar_21Rnd","M_scar_21Rnd","Att_Optic_Reflex","Att_Optic_ACOG"],
		["SVD12","M_svd12_15Rnd","M_svd12_15Rnd","M_svd12_15Rnd","Att_Optic_PSO1"],
		["Tec9","M_tec_32rnd","M_tec_50rnd"],
		["val","M_val_21Rnd","M_val_21Rnd","M_val_21Rnd","Att_Optic_PSO1"]
		];
		
		_container = createVehicle ["GunCase", [(_originalPos select 0),(_originalPos select 1),0.1], [], (random(10)), "CAN_COLLIDE"];
		_vehicleInv = itemsInInventory _container;
		_arrayRandom = _typesArr select floor(random(count _typesArr));
		{null = _container createInCargo _x} forEach _arrayRandom;

		};

		
		for "ii" from 1 to 2 do {
		_arrayPrim = [
		["M_ak101_30Rnd","M_ak101_30Rnd","M_ak101_30Rnd","AK101","Att_Optic_PSO1","Att_Handguard_AK74_Camo","Att_Buttstock_AK_Wood_Camo","att_bayonet_ak","ammobox_556_20rnd","ammobox_556_20rnd","ammobox_556_20rnd","ammobox_556_20rnd"],
		["M_Saiga_5Rnd","M_Saiga_5Rnd","M_Saiga_8Rnd","M_Saiga_8Rnd","M_SaigaDrum_20Rnd","M_SaigaDrum_20Rnd","ShotgunSaiga12K","Att_Buttstock_Saiga","AmmoBox_00buck_10rnd","AmmoBox_00buck_10rnd"],
		["M_ak74_30Rnd","M_ak74_30Rnd","M_ak74_30Rnd","AK74","Att_Optic_PSO1","Att_Handguard_AK74_Camo","Att_Buttstock_AK_Wood_Camo","att_bayonet_ak","AmmoBox_545_20Rnd","AmmoBox_545_20Rnd","AmmoBox_545_20Rnd","AmmoBox_545_20Rnd"],
		["M_akm_drum","M_akm_drum","AKM","Att_Optic_PSO1","Att_Handguard_AK74_Camo","Att_Buttstock_AK_Wood_Camo","att_bayonet_ak","AmmoBox_762x39_20Rnd","AmmoBox_762x39_20Rnd","AmmoBox_762x39_20Rnd","AmmoBox_762x39_20Rnd"],
		["Att_Suppressor_M4","M_STANAG_30Rnd_Coupled","M_STANAG_30Rnd_Coupled","M_STANAG_30Rnd_Coupled","M4A1","Att_Optic_Reflex","Att_Handguard_M4RIS","Att_Buttstock_M4MP","Att_Optic_ACOG","Att_Optic_M4T3NRDS","att_bayonet_m9a1","ammobox_556_20rnd","ammobox_556_20rnd","ammobox_556_20rnd","ammobox_556_20rnd"],
		["Att_Suppressor_M4","M_STANAG_30Rnd_Coupled","M_STANAG_30Rnd_Coupled","M_STANAG_30Rnd_Coupled","AugSteyr","ammobox_556_20rnd","ammobox_556_20rnd","ammobox_556_20rnd","ammobox_556_20rnd"],
		["M_Vss_10Rnd","M_Vss_10Rnd","M_Vss_10Rnd","M_Vss_10Rnd","VSS","Att_Optic_PSO1","AmmoBox_9x39_20Rnd","AmmoBox_9x39_20Rnd","AmmoBox_9x39_20Rnd","AmmoBox_9x39_20Rnd"],
		["M_svd_10Rnd","M_svd_10Rnd","M_svd_10Rnd","M_svd_10Rnd","SVD","Att_Optic_PSO1","AmmoBox_762_20Rnd","AmmoBox_762_20Rnd","AmmoBox_762_20Rnd","AmmoBox_762_20Rnd"],
		["Winchester70_Black","Att_Optic_Hunting","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd"],
		["M_Fal_20Rnd","M_Fal_20Rnd","M_Fal_20Rnd","FAL","Att_Optic_Reflex","Att_Buttstock_FalFolding","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd"],
		["Clip_762x39_10Rnd","Clip_762x39_10Rnd","Clip_762x39_10Rnd","SKS","Att_Bayonet_SKS","Att_Optic_PUScope","AmmoBox_762x39_20Rnd","AmmoBox_762x39_20Rnd","AmmoBox_762x39_20Rnd","AmmoBox_762x39_20Rnd"],
		["CLIP_308Win_Snaploader","CLIP_308Win_Snaploader","CLIP_308Win_Snaploader","b95","Att_Optic_Hunting","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd"],
		["M_cz527_5rnd","M_cz527_5rnd","M_cz527_5rnd","M_cz527_5rnd","cz527","Att_Optic_Hunting","AmmoBox_762x39_20Rnd","AmmoBox_762x39_20Rnd","AmmoBox_762x39_20Rnd","AmmoBox_762x39_20Rnd"],
		["CLIP_762_5Rnd","CLIP_762_5Rnd","CLIP_762_5Rnd","Att_Bayonet_Mosin","Att_Compensator_Mosin","Att_Optic_PUScope","Mosin9130_Green_Black","AmmoBox_762_20Rnd","AmmoBox_762_20Rnd","AmmoBox_762_20Rnd","AmmoBox_762_20Rnd"]
		];
		_arraySec = [
		["m_357_speedloader","m_357_speedloader","magnum"],
		["M_DE_9rnd","M_DE_9rnd","DE_Gold"],
		["m_fnx45_15rnd","m_fnx45_15rnd","fnx45","Att_Suppressor_Pistol","Att_Optic_FNP45_MRD"],
		["m_cz75_15rnd","m_cz75_15rnd","cz75","Att_Suppressor_Pistol"],
		["m_1911_7rnd","m_1911_7rnd","1911_engraved","Att_Suppressor_Pistol"],
		["M_Glock_15Rnd","M_Glock_15Rnd","Glock19","Att_Suppressor_Pistol","Att_Optic_FNP45_MRD"],
		["M_MP5_30Rnd","M_MP5_30Rnd","MP5K","Att_Optic_Reflex","Att_Suppressor_Pistol","Att_Optic_ACOG","Att_Handguard_MP5_Rail","Att_Buttstock_MP5_Stock"],
		["M_UMP_25Rnd","M_UMP_25Rnd","UMP45","Att_Suppressor_Pistol","Att_Optic_ACOG"]
		];
		_arrayCloth = [
		["M65_Jacket_Black","CargoPants_Black","BagAssaultBlack","WorkingGloves_Black","BallisticHelmet_Black","rocketaviators","BalaclavaMask_Blackskull","Sneakers_Black","HighCapacityVest_Black"],
		["m65_jacket_olive","cargopants_green","BagCoyote_Green","workinggloves_brown","BallisticHelmet_Green","rocketaviators","BalaclavaMask_greenpattern","Sneakers_Green","SmershVestBackpack"],
		["m65_jacket_tan","CargoPants_beige","BagCoyote_Brown","workinggloves_beige","GorkaHelmet_complete_Black","GP5GasMask","rocketaviators","BalaclavaMask_beige","Sneakers_White","PlateCarrierComplete"],
		["M65_Jacket_Khaki","cargopants_green","GhillieSuitMossy","WorkingGloves_Yellow","ghilliehoodmossy","rocketaviators","BandanaMask_greenpattern","Sneakers_Green","SmershVestBackpack"],
		["Gorka_up_summer","Gorka_pants_summer","BagTortilla","WorkingGloves_Brown","GorkaHelmet_complete_Green","GP5GasMask","rocketaviators","BalaclavaMask_Green","Sneakers_Red","SmershVestBackpack"],
		["Gorka_up_flat","Gorka_pants_flat","BagAlice_Green","WorkingGloves_Brown","GorkaHelmet_complete_Green","GP5GasMask","rocketaviators","BalaclavaMask_Green","Sneakers_White","PlateCarrierComplete"],
		["M65_Jacket_Black","BDUpants_Woodland","BagAlice_Camo","WorkingGloves_Black","BallisticHelmet_Black","rocketaviators","BalaclavaMask_Blackskull","Sneakers_Black","HighCapacityVest_Black"],
		["TTsKO_Jacket_Camo","ttsko_pants_Beige","BagAlice_Camo","WorkingGloves_Brown","BallisticHelmet_Green","rocketaviators","BandanaMask_camopattern","Sneakers_Red","SmershVestBackpack"]
		];
		
		_arrayTop = _arrayPrim select floor(random(count _arrayPrim));
		_arrayBot = _arraySec select floor(random(count _arraySec));
		_arraySet = _arrayCloth select floor(random(count _arrayCloth));

		_agentSuv = createAgent ["SurvivorPartsFemaleAfrican",[(_originalPos select 0),(_originalPos select 1),0], [], (random(25)), "NONE"];
		
		_agentSuv switchMove "amovppnemstpssurwnondnon";

		{null = _agentSuv createInInventory _x} forEach _arraySet;
		{null = _agentSuv createInInventory _x} forEach _arrayTop;	
		{null = _agentSuv createInInventory _x} forEach _arrayBot;
		
		_v = _agentSuv createInInventory "Consumable_Rags";_v setVariable ["quantity", 6];
		_v = _agentSuv createInInventory "Medical_Morphine";
		_v = _agentSuv createInInventory "Medical_Morphine";
		_v = _agentSuv createInInventory "Medical_TransfusionKit";
		_v = _agentSuv createInInventory "Medical_TransfusionKit";
		_v = _agentSuv createInInventory "FirefighterAxe";
		_v = _agentSuv createInInventory "SmokeGrenade_Red";
		_v = _agentSuv createInInventory "SmokeGrenade_Green";
		_v = _agentSuv createInInventory "SmokeGrenade_Yellow";
		_v = _agentSuv createInInventory "SmokeGrenade_Purple";
		_v = _agentSuv createInInventory "SmokeGrenade_White";
		_v = _agentSuv createInInventory "GrenadeRGD5";
		_v = _agentSuv createInInventory "GrenadeRGD5";
		_v = _agentSuv createInInventory "medical_bandage";_v setVariable ["quantity",2];
		_v = _agentSuv createInInventory "Fruit_Cannabis";	
		_v = _agentSuv createInInventory "consumable_battery9V";_v setVariable ["power",30000];

		_agentSuv addeventhandler ["killed",{null = _this spawn DZ_jewwaskilled; } ];
		[_agentSuv] spawn { _agentSuvZ = _this select 0; while {true} do { _agentSuvZ say3D ["z_scream_3", 5, 0.3]; sleep random 75; }; };
		};
            
            diag_log format ["Helievents Has been created: pos: %1",_originalPos];
        };
		
		
		diag_log "all code is owned by 420 gaming and it's team";