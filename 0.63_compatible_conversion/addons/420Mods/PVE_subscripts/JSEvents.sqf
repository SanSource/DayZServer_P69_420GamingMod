/*
░░░░░░░░░░░█▀▀░░█░░░░░░        
░░░░░░▄▀▀▀▀░░░░░█▄▄░░░░
░░░░░░█░█░░░░░░░░░░▐░░░        
░░░░░░▐▐░░░░░░░░░▄░▐░░░
░░░░░░█░░░░░░░░▄▀▀░▐░░░         
░░░░▄▀░░░░░░░░▐░▄▄▀░░░░ Author: DuhOneZ
░░▄▀░░░▐░░░░░█▄▀░▐░░░░░ 
░░█░░░▐░░░░░░░░▄░█░░░░░ 
░░░█▄░░▀▄░░░░▄▀▐░█░░░░░ 
░░░█▐▀▀▀░▀▀▀▀░░▐░█░░░░░ 
░░▐█▐▄░░▀░░░░░░▐░█▄▄░░░            
░░░▄Brian Hicks▐▄▄▄▀░░░
░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░
*/
    DZ_EventCurrentLoc = "null"; // nice
//================================== PARTICLE EFFECT SCRIPT ===================================================
Custom_effect_createWreckSmoke = 
{
        _planePOSfollow = _this select 0;
        _vehicle = _this select 1;
        {
            _id = owner _x;
            [_id,_planePOSfollow,_vehicle] spawnForClient {
            _follower = _this select 2;
            _posF = _this select 1;
            _pos = [(_posF select 0),(_posF select 1),0];
            private ["_source","_source3"]; 
            _source = "#particlesource" createVehicleLocal _pos;
            _source setParticleParams
            /*Sprite*/          [["\dz\data\data\ParticleEffects\Universal\Universal", 16, 10, 32, 1],"",// File,Ntieth,Index,Count,Loop(Bool)
            /*Type*/            "Billboard",
            /*TimmerPer*/       3,
            /*Lifetime*/        0.5,
            /*Position*/        [0, 0, 0.3],
            /*MoveVelocity*/    [0, 0, 0.2],
            /*Simulation*/      0.2, 0.05, 0.04, 0.05, //rotationVel,weight,volume,rubbing //0, 0.05, 0.04, 0.05,
            /*Scale*/           [2, 1.5, 1.6],
            /*Color*/           [[0.8,1,0.3,0],[0.8,1,0.3,-1],[0.8,1,0.3,-3],[0.8,1,0.3,-3],[0.8,1,0.3,-1],[0.8,1,0.3,0]],
            /*AnimSpeed*/       [0.8,0.3,0.25], //[0.8,0.3,0.25],
            /*randDirPeriod*/   0.1,
            /*randDirIntesity*/ 0.05,
            /*onTimerScript*/   "",
            /*DestroyScript*/   "",
            /*Follow*/          _follower];
            
            //[lifeTime, position, moveVelocity, rotationVelocity, size, color, randomDirectionPeriod, randomDirectionIntensity]
            _source setParticleRandom [0.2, [0, 0, 0], [0.1, 0.1, 0.4], 0.1, 0.1, [0, 0, 0, 0], 0, 0];
            _source setDropInterval (0.03);

            _source3 = "#particlesource" createVehicleLocal _pos;
            _source3 setParticleParams
            [["\dz\data\data\ParticleEffects\Universal\Universal", 16, 7, 48, 1],
            "",
            "Billboard", 
            1, 8, [0, 0, 0], 
            [0, 0, 2.5], 
            0, 10, 7.9, 0.066, 
            [2, 6, 12], 
            [[0.1, 0.1, 0.1, 1], 
            [0.25, 0.25, 0.25, 0.5], 
            [0.5, 0.5, 0.5, 0]], 
            [0.125],
            1,
            0, 
            "",
            "",
            _follower];
            _source3 setParticleRandom [1.5, [0, 0, 0], [0.15, 0.15, 0.3], 30, 0.2, [0, 0, 0, 0], 0, 0];
            _source3 setDropInterval (0.15);

            sleep floor(random 10);
            deleteVehicle _source;
            deleteVehicle _source3;
        };

        }forEach players;
};
//===============================================================================================================

DZ_PreviousEv = [];

DZ_HitZmbfCustom = {

private["_agent","_selection","_damage","_source","_bone"];
_agent = _this select 0;
_selection = _this select 1;
_damage = _this select 2;
_source = _this select 3;
_bone = (((_this select 5) select 1) select 0);
if ( typeName _bone == "STRING" ) then
{
    switch (_bone) do
    {
        case "head": 
        {
            //diag_log format ["ZOMBIE: Headshot knockdown %1",_agent];
            _damage = _damage + (floor (random - 0.10));
        };
    };
};

if ((itemInHands _source) isKindOf "MeleeItemBase" )then{
     _damage = _damage + 0.45;
};

if ((itemInHands _source) isKindOf "Rifle" )then{
    _damage = _damage - 0.95;
};

if ((itemInHands _source) isKindOf "Pistol" )then{
    _damage = _damage - 0.90;
};

if ( (itemInHands _source) isKindOf "CrossbowBase" or (itemInHands _source) isKindOf "Bow")then{
    _damage = _damage - 0.85;
};

_damage

};

DZ_WreckKilled = {
private["_agent","_uid","_LootWeaponsArr","_ClothingArr"];
_agent = _this select 0;
_ZombiePos = getpos _agent;
_killer = _this select 1;

_LootWeaponsArr = 
[
    ["AK101","M_ak101_30Rnd","M_ak101_30Rnd","M_ak101_30Rnd","Att_Optic_PSO1","Att_Handguard_AK74_Camo","Att_Buttstock_AK_Wood_Camo","ammobox_556_20rnd","ammobox_556_20rnd","ammobox_556_20rnd","ammobox_556_20rnd"],
    ["AK74","M_ak74_30Rnd","M_ak74_30Rnd","M_ak74_30Rnd","Att_Optic_PSO1","Att_Handguard_AK74_Camo","Att_Buttstock_AK_Wood_Camo","AmmoBox_545_20Rnd","AmmoBox_545_20Rnd","AmmoBox_545_20Rnd","AmmoBox_545_20Rnd"],
    ["M4A1_Black","M_STANAG_30Rnd_Coupled","M_STANAG_30Rnd_Coupled","M_STANAG_30Rnd_Coupled","Att_Handguard_M4RIS","Att_Bipod_Atlas","Att_Suppressor_M4","Att_Buttstock_M4CQB_Green","Att_Light_Universal","Att_Optic_M4T3NRDS","Att_Optic_Reflex","Att_Optic_ACOG","ammobox_556_20rnd","ammobox_556_20rnd","ammobox_556_20rnd","ammobox_556_20rnd"],
    ["AugSteyr","M_STANAG_30Rnd_Coupled","M_STANAG_30Rnd_Coupled","M_STANAG_30Rnd_Coupled","ammobox_556_20rnd","ammobox_556_20rnd","ammobox_556_20rnd","ammobox_556_20rnd"],
    ["VSS","M_Vss_10Rnd","M_Vss_10Rnd","M_Vss_10Rnd","M_Vss_10Rnd","Att_Optic_PSO1","AmmoBox_9x39_20Rnd","AmmoBox_9x39_20Rnd","AmmoBox_9x39_20Rnd","AmmoBox_9x39_20Rnd"],
    ["SVD","M_svd_10Rnd","M_svd_10Rnd","M_svd_10Rnd","M_svd_10Rnd","Att_Optic_PSO1","Ammo_762_tracer","Ammo_762_tracer","Ammo_762_tracer","Ammo_762_tracer"],
    ["Winchester70_Black","Att_Optic_Hunting","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd"],
    ["FAL","M_Fal_20Rnd","M_Fal_20Rnd","M_Fal_20Rnd","Att_Optic_ACOG","Att_Optic_Reflex","Att_Buttstock_FalFolding","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd"],
    ["SKS","Clip_762x39_10Rnd","Clip_762x39_10Rnd","Clip_762x39_10Rnd","Att_Bayonet_SKS","Att_Optic_PUScope","AmmoBox_762x39_20Rnd","AmmoBox_762x39_20Rnd","AmmoBox_762x39_20Rnd","AmmoBox_762x39_20Rnd"],
    ["b95","CLIP_308Win_Snaploader","CLIP_308Win_Snaploader","CLIP_308Win_Snaploader","Att_Optic_Hunting","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd"],
    ["Mosin9130_Green_Black","CLIP_762_5Rnd","CLIP_762_5Rnd","CLIP_762_5Rnd","Att_Compensator_Mosin","Att_Optic_PUScope","Ammo_762_tracer","Ammo_762_tracer","Ammo_762_tracer","Ammo_762_tracer"],
    ["Scout_Black","M_Scout_5Rnd","M_Scout_5Rnd","M_Scout_5Rnd","M_Scout_5Rnd"]
];

_ClothingArr = 
[
    ["M65_Jacket_Black","CargoPants_Black","HighCapacityVest_Black","Sneakers_Green","BalaclavaMask_Black"],
    ["m65_jacket_olive","cargopants_green","UKAssVest_Black","BallisticHelmet_Green"],
    ["m65_jacket_tan","CargoPants_beige","UKAssVest_Camo","Sneakers_Green","Bandana_camopattern"],
    ["Gorka_up_summer","Gorka_pants_summer","HighCapacityVest_Green","BalaclavaMask_Black","Bandana_camopattern"],
    ["M65_Jacket_Black","BDUpants_Woodland","UKAssVest_Olive","BallisticHelmet_Green"],
    ["TTsKO_Jacket_Camo","ttsko_pants_Beige","HighCapacityVest_Green","BallisticHelmet_Green","Bandana_camopattern"],
    ["M65_Jacket_Black","UKAssVest_Khaki","Sneakers_Green","BalaclavaMask_Black"]
];

_ExtraAmmo = [
    ["M_ak101_30Rnd","M_ak101_30Rnd","M_ak101_30Rnd","ammobox_556_20rnd","ammobox_556_20rnd","ammobox_556_20rnd","ammobox_556_20rnd"],
    ["M_ak74_30Rnd","M_ak74_30Rnd","M_ak74_30Rnd","AmmoBox_545_20Rnd","AmmoBox_545_20Rnd","AmmoBox_545_20Rnd","AmmoBox_545_20Rnd"],
    ["M_STANAG_30Rnd_Coupled","M_STANAG_30Rnd_Coupled","M_STANAG_30Rnd_Coupled","ammobox_556_20rnd","ammobox_556_20rnd","ammobox_556_20rnd","ammobox_556_20rnd"],
    ["M_STANAG_30Rnd_Coupled","M_STANAG_30Rnd_Coupled","M_STANAG_30Rnd_Coupled","ammobox_556_20rnd","ammobox_556_20rnd","ammobox_556_20rnd","ammobox_556_20rnd"],
    ["M_Vss_10Rnd","M_Vss_10Rnd","M_Vss_10Rnd","M_Vss_10Rnd","AmmoBox_9x39_20Rnd","AmmoBox_9x39_20Rnd","AmmoBox_9x39_20Rnd","AmmoBox_9x39_20Rnd"],
    ["M_svd_10Rnd","M_svd_10Rnd","M_svd_10Rnd","M_svd_10Rnd","Ammo_762_tracer","Ammo_762_tracer","Ammo_762_tracer","Ammo_762_tracer"],
    ["Att_Optic_Hunting","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd"],
    ["M_Fal_20Rnd","M_Fal_20Rnd","M_Fal_20Rnd","Att_Optic_ACOG","Att_Optic_Reflex","Att_Buttstock_FalFolding","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd"],
    ["Clip_762x39_10Rnd","Clip_762x39_10Rnd","Clip_762x39_10Rnd","Att_Bayonet_SKS","AmmoBox_762x39_20Rnd","AmmoBox_762x39_20Rnd","AmmoBox_762x39_20Rnd","AmmoBox_762x39_20Rnd"],
    ["CLIP_308Win_Snaploader","CLIP_308Win_Snaploader","CLIP_308Win_Snaploader","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd"],
    ["CLIP_762_5Rnd","CLIP_762_5Rnd","CLIP_762_5Rnd","Att_Optic_PUScope","Ammo_762_tracer","Ammo_762_tracer","Ammo_762_tracer","Ammo_762_tracer"],
    ["M_Scout_5Rnd","M_Scout_5Rnd","M_Scout_5Rnd","M_Scout_5Rnd"]

];

_BaseBuildArr = [
	["Tool_hammer","Tool_crowbar","Tool_Wrench","Hatchet","Consumable_NailBox","Fence_camonet","Fence_BarbedWire"],  // Tools
	["Consumable_WoodenPlanks","Consumable_MetalPlates","Consumable_Nails"]  // Matireals
];

_SkinsArray = [
["DZ\gear\camping\data\camonet_shadow_co.paa","RVMAT NIGGER"],
["DZ\characters\tops\data\usmc_jacket_marpatwoodland_co.paa","RVMAT HERE"],
["DZ\characters\tops\data\underwear_m_woodland_co.paa","RVMAT HERE"],
["DZ\characters\tops\data\underwear_f_flowers_co.paa","RVMAT HERE"],
["DZ\characters\tops\data\Shirt_ground_checkGreen_co.paa","RVMAT HERE"],
["DZ\characters\tops\data\Shirt_ground_checkBlueBright_co.paa","RVMAT HERE"],
["DZ\characters\tops\data\PoliceJacket_KamyshCamo_co.paa","RVMAT HERE"], // Urel Police camo
["DZ\characters\headgear\data\BandanaFHG_TTsKO_co.paa","RVMAT HERE"],	 //  Ttsko Camo
["DZ\characters\tops\data\hunting_jacket_summer_co.paa","RVMAT HERE"],	 //  Summer hunter Camo
["DZ\characters\pants\data\bdu_pants_woodland_co.paa","RVMAT HERE"],     // BDU camo
["DZ\characters\headgear\data\BandanaFHG_TTsKO_co.paa","RVMAT HERE"],    // TtsKo Camo
["DZ\data\data\flag_chdkz_co.paa","RVMAT HERE"],                         // Some flag 
["DZ\data\data\flag_usa_co.paa","RVMAT HERE"],                           // USA flag
["DZ\data\data\flag_chernarus_co.paa","RVMAT HERE"],                     // Chernarus flag
["DZ\data\data\flag_rus_co.paa","RVMAT HERE"],                           // RUS flag
["DZ\data\data\rainbow_ca.paa","RVMAT HERE"],                            // Rainbow
["DZ\misc\data\stripes.paa","RVMAT HERE"],                               // kids toys?
["DZ\weapons\pistols\DE\data\env_gold_co.paa","DZ\weapons\pistols\DE\data\gold_de.rvmat"] // Gold
];

_DropChance = floor random 10;

if ( _DropChance >= 7.5 ) then {
    (owner _killer) spawnForClient {
    statusChat ["The Zombie has dropped something!","colorAction"];
    titleText ["The Zombie has dropped something!","PLAIN DOWN",10];
    };
	
	_LumberMissions = ["Berezino","Rogovo","Factory","Balota","West Electro"];
	if ( !(DZ_EventCurrentLoc in _LumberMissions) ) then {
        _Randomitem = "";
        _LootAmt = floor random 15 min 5;
        _SeaChest = createvehicle ["SeaChest", _ZombiePos, [], 0, "CAN_COLLIDE"];

        _RandomGun = _LootWeaponsArr select floor(random(count _LootWeaponsArr));
        _RandomCCr = _ClothingArr select floor(random(count _ClothingArr));
        _RandomAmmSel = _ExtraAmmo select floor(random(count _ExtraAmmo));

        _SelectedTexture = _SkinsArray select floor random count _SkinsArray;
        _Texture = _SelectedTexture select 0; // PAA
        _RvMAT = _SelectedTexture select 1;  // RVMAT

        _Rifle = _RandomGun select 0;
        _RifleEntity = _SeaChest createInInventory _Rifle;

        // Rifle Entity Re-texture
		_RifleEntity setVariable ["CustomTexture",_Texture];
        _RifleEntity setObjectTexture [0,_Texture];
        _RifleEntity setObjectTexture [1,_Texture];
        _RifleEntity setObjectTexture [2,_Texture];

        if ( _Texture == "DZ\weapons\pistols\DE\data\env_gold_co.paa" ) then {
            _RifleEntity setVariable ["RVMAT",_RvMAT];
            _RifleEntity setObjectMaterial [0,_RvMAT];
            _RifleEntity setObjectMaterial [1,_RvMAT];
            _RifleEntity setObjectMaterial [2,_RvMAT];
        };
        
        for "_i" from 1 to (count _RandomGun) do {
            _RifleAtt = _RandomGun select _i;
            _attItem = _RifleEntity createInInventory _RifleAtt;

            _attItem setVariable ["CustomTexture",_Texture];

           // Rifle Entity Re-texture
           _attItem setObjectTexture [0,_Texture];
           _attItem setObjectTexture [1,_Texture];
           _attItem setObjectTexture [2,_Texture];

           if ( _Texture == "DZ\weapons\pistols\DE\data\env_gold_co.paa" ) then {
               _attItem setVariable ["RVMAT",_RvMAT];
               _attItem setObjectMaterial [0,_RvMAT];
               _attItem setObjectMaterial [1,_RvMAT];
               _attItem setObjectMaterial [2,_RvMAT];
           };
        };

        for "_n" from 0 to (count _RandomCCr) do {
            _Itemex = _RandomCCr select _n;
            _InInve = _SeaChest createInInventory _Itemex;

            // Extra Items Re-texture
            _InInve setVariable ["CustomTexture",_Texture];

            _InInve setObjectTexture [0,_Texture];
            _InInve setObjectTexture [1,_Texture];
            _InInve setObjectTexture [2,_Texture];

            if ( _Texture == "DZ\weapons\pistols\DE\data\env_gold_co.paa" ) then {
                _InInve setVariable ["RVMAT",_RvMAT];
                _InInve setObjectMaterial [0,_RvMAT];
                _InInve setObjectMaterial [1,_RvMAT];
                _InInve setObjectMaterial [2,_RvMAT];
            };

        };

        for "_ammo" from 0 to (count _RandomAmmSel) do {
            _ItemeAmmo = _RandomAmmSel select _ammo;
            _InInve = _SeaChest createInInventory _ItemeAmmo;
        };
	} else {
		//_SeaChest = createvehicle ["SeaChest", _ZombiePos, [], 0, "CAN_COLLIDE"];

        _RandomDrop = _BaseBuildArr select floor(random(count _BaseBuildArr));
		_ItemType = _RandomDrop select floor random count _RandomDrop;
		switch (_ItemType) do {
		 case "Consumable_WoodenPlanks" : {
			 for "_sf" from 1 to (floor(random 5)) do {
				_SeaChest = createvehicle ["SeaChest", _ZombiePos, [], 0, "CAN_COLLIDE"];
				_Entity = _SeaChest createInInventory "Consumable_Firewood";
				_cfgSpawns = configFile >> "CfgVehicles";
				_config = _cfgSpawns >> typeOf _Entity;
				_rnfr = (floor(random 5));
				_max = 0;
				_max = (getNumber (_config >> "stackedMax"));
				_Entity setQuantity _rnfr;
				if (_rnfr == 0) then
				{
					_Entity setQuantity _max;
				};
			 };
		 }; 
		 case "Consumable_MetalPlates" : {
			 for "_sf" from 1 to (floor(random 5)) do {
		     _SeaChest = createvehicle ["SeaChest", _ZombiePos, [], 0, "CAN_COLLIDE"];
			 _Entity = _SeaChest createInInventory _ItemType;
			 _cfgSpawns = configFile >> "CfgVehicles";
			 _config = _cfgSpawns >> typeOf _Entity;
			 _rnfr = (floor(random 8));
			 _max = 0;
			 _max = (getNumber (_config >> "stackedMax"));
			 _Entity setQuantity _rnfr;
			 if (_rnfr == 0) then
				{
					_Entity setQuantity _max;
				};			 
			 };
		 }; 
		 case "Consumable_Nails" : {
			 for "_sf" from 1 to (floor(random 5)) do {
		     _SeaChest = createvehicle ["SeaChest", _ZombiePos, [], 0, "CAN_COLLIDE"];
			 _Entity = _SeaChest createInInventory _ItemType;
			 //_Entity addQuantity (floor(random 50));
			 _cfgSpawns = configFile >> "CfgVehicles";
			 _config = _cfgSpawns >> typeOf _Entity;
			 _rnfr = (floor(random 50));
			 _max = 0;
			 _max = (getNumber (_config >> "stackedMax"));
			 _Entity setQuantity _rnfr;
			 if (_rnfr == 0) then
				{
					_Entity setQuantity _max;
				};			 
			 };
		 }; 
		 default { _Entity = _SeaChest createInInventory _ItemType; };
		};
	};
};

};

fnc_SpawnConvoy = 
{
    _arrayZomTypes = [
    ["ZmbF_SurvivorNormal_Blue"],
    ["ZmbF_SurvivorNormal_White"],
    ["ZmbF_DoctorSkinny"],
    ["ZmbM_PrisonerSkinny"],
    ["ZmbM_ParamedicNormal_Green"],
    ["ZmbM_ParamedicNormal_Black"],
    ["ZmbM_PolicemanFat"],
    ["ZmbM_SoldierNormal"],
    ["ZmbM_CommercialPilotOld_Olive"],
    ["ZmbM_CommercialPilotOld_Brown"],
    ["ZmbM_CommercialPilotOld_Grey"],
    ["ZmbM_PatrolNormal_PautRev"],
    ["ZmbM_PatrolNormal_Autumn"],
    ["ZmbM_PatrolNormal_Flat"],
    ["ZmbM_PatrolNormal_Summer"],
    ["ZmbM_MotobikerFat_Beige"],
    ["ZmbM_MotobikerFat_Black"]
    ];

    _infectedAmount = 50;
    _Centrepos = [0,0,0];
    _Elocs = ["Vybor Military","NWAF","Green Mountain","Novaya Petrovka","Sinistok","Berezino","Rogovo","Factory","Balota","West Electro"];
    _SpawnPoint = _Elocs select floor random count _Elocs;
    DZ_PreviousEv = DZ_PreviousEv + [_SpawnPoint];
    _bigdicks = format ["%1",_SpawnPoint];
    DZ_EventCurrentLoc = _bigdicks;
    diag_log format ["Randomizer picked: %1",_SpawnPoint];

    _RetVehicleArray = [_SpawnPoint] call DZ_EventSetup;
    DZ_WrecksUpdate = _RetVehicleArray;
    { [(getPosASL _x),(vehicle _x)] call Custom_effect_createWreckSmoke; }forEach _RetVehicleArray;
	
	_MissionType = "null";
    _WreckPointPos = [
    [4605.2051, 8463.0439],  // VMC  0
    [4835.5259, 9912.999],   // NWAF 1
    [3363.5115, 5570.8716],  // GREEN_MOUNTAIN 2
    [3776.0513, 12738.05],   // NOVAYA 3
    [2062.8843, 11679.961],   // SINISTOK 4
	//Lumber mission
	[12531.216, 9706.0459],  // Berezino  5
    [4948.2056, 6772.0547],  // Rogovo 6
    [13125.313, 7332.8066],  // Factory 7
    [4573.6836, 2647.8345],  // Balota 8
    [9473.333, 2058.3767]    // West Electro 9
    ];

    switch (_SpawnPoint) do {
        case "Vybor Military": { _Centrepos = _WreckPointPos select 0; }; 
        case "NWAF": { _Centrepos = _WreckPointPos select 1;  };
        case "Green Mountain": { _Centrepos = _WreckPointPos select 2;  };
        case "Novaya Petrovka": { _Centrepos = _WreckPointPos select 3;  };
        case "Sinistok": { _Centrepos = _WreckPointPos select 4;  };
		//Lumber mission
		case "Berezino": { _Centrepos = _WreckPointPos select 5; _MissionType = "lumber"; }; 
        case "Rogovo": { _Centrepos = _WreckPointPos select 6; _MissionType = "lumber"; };
        case "Factory": { _Centrepos = _WreckPointPos select 7; _MissionType = "lumber"; };
        case "Balota": { _Centrepos = _WreckPointPos select 8; _MissionType = "lumber"; };
        case "West Electro": { _Centrepos = _WreckPointPos select 9; _MissionType = "lumber"; };
    };

    //Zombies Part
    for "_zz" from 0 to _infectedAmount do
        {
            _radius = random 50;
            _vehicleAI = createAgent [(_arrayZomTypes select floor(random(count _arrayZomTypes)))select 0, _Centrepos, [], _radius, "CAN_COLLIDE"]; 
            _vehicleAI setDir floor(random 360);
            _vehicleAI addeventhandler ["HandleDamage",{_this call DZ_HitZmbfCustom } ];
            _vehicleAI addeventhandler ["killed",{null = _this spawn DZ_WreckKilled; } ];
        };
		
	//Global Message part
	if ( _MissionType == "lumber" ) then {
	  {
        [_x,format["A Construction Convoy was attacked near %1 , kill the zombies for epic-loot!",_SpawnPoint],"colorAction"] call fnc_playerMessage;
        [(owner _x),_SpawnPoint] spawnForClient { _SpawnPoint = _this select 1; titleText [format["A Construction Convoy was attacked near %1 , kill the zombies for epic-loot!",_SpawnPoint],"PLAIN DOWN",10]; };
      }forEach players;
	}else{
	  {
        [_x,format["A Military Convoy was spotted near %1 , kill the zombies for epic-loot!",_SpawnPoint],"colorAction"] call fnc_playerMessage;
        [(owner _x),_SpawnPoint] spawnForClient { _SpawnPoint = _this select 1; titleText [format["A Military Convoy was spotted near %1 , kill the zombies for epic-loot!",_SpawnPoint],"PLAIN DOWN",10]; };
      }forEach players;
	};
};

DZ_CustomEventInit =
{

_sleepTime = 3600; // Deafult 1hr Mins between each mission/event 3600
if (DZ_RandomEvents) then
{
    _Looper = {
    // Clean up part
        if ( count DZ_PreviousEv != 0) then {
			DZ_EventCurrentLoc = "null";
            for "_ii" from 0 to (count DZ_PreviousEv) do {
                _Elocation = DZ_PreviousEv select _ii;
                DZ_PreviousEv set [_ii,objNull];
                DZ_PreviousEv = DZ_PreviousEv - [objNull];
                DZ_WrecksUpdate = [];
                switch (_Elocation) do { 
                    case "Vybor Military" : {
                        _arrTip = ["InventoryBase","Rifle","Pistol","Bow","CrossbowBase","MeleeItemBase","DefaultMagazine","HouseNoDestruct","ZombieBase"];
                        {
                            _nextTip = _x;
                            {
                                if ( (vehicle _x) distance [4605.2051, 8463.0439] < 100 ) then
                                {
                                    deleteVehicle _x;
                                };
                            } forEach (allMissionObjects _nextTip);
                        } forEach _arrTip;
                        diag_log format ["Custom Events: VMC Cleaned"];
                    };
                    case "NWAF" : { 
                        _arrTip = ["InventoryBase","Rifle","Pistol","Bow","CrossbowBase","MeleeItemBase","DefaultMagazine","HouseNoDestruct","ZombieBase"];
                        {
                            _nextTip = _x;
                            {
                                if ( (vehicle _x) distance [4835.5259, 9912.999] < 100 ) then
                                {
                                    deleteVehicle _x;
                                };
                            } forEach (allMissionObjects _nextTip);
                        } forEach _arrTip;
                        diag_log format ["Custom Events: NWAF Cleaned"];
                    };
                    case "Green Mountain" : {
                        _arrTip = ["InventoryBase","Rifle","Pistol","Bow","CrossbowBase","MeleeItemBase","DefaultMagazine","HouseNoDestruct","ZombieBase"];
                        {
                            _nextTip = _x;
                            {
                                if ( (vehicle _x) distance [3363.5115, 5570.8716] < 100 ) then
                                {
                                    deleteVehicle _x;
                                };
                            } forEach (allMissionObjects _nextTip);
                        } forEach _arrTip;
                        diag_log format ["Custom Events: GREEN_MOUNTAIN Cleaned"];
                    };
                    case "Novaya Petrovka" : {
                        _arrTip = ["InventoryBase","Rifle","Pistol","Bow","CrossbowBase","MeleeItemBase","DefaultMagazine","HouseNoDestruct","ZombieBase"];
                        {
                            _nextTip = _x;
                            {
                                if ( (vehicle _x) distance [3776.0513, 12738.05] < 100 ) then
                                {
                                    deleteVehicle _x;
                                };
                            } forEach (allMissionObjects _nextTip);
                        } forEach _arrTip;
                        diag_log format ["Custom Events: NOVAYA Cleaned"];
                    };
                    case "Sinistok" : {
                        _arrTip = ["InventoryBase","Rifle","Pistol","Bow","CrossbowBase","MeleeItemBase","DefaultMagazine","HouseNoDestruct","ZombieBase"];
                        {
                            _nextTip = _x;
                            {
                                if ( (vehicle _x) distance [2062.8843, 11679.961] < 100 ) then
                                {
                                    deleteVehicle _x;
                                };
                            } forEach (allMissionObjects _nextTip);
                        } forEach _arrTip;
                        diag_log format ["Custom Events: SINISTOK Cleaned"];
                    };
					case "Berezino" : {
                        _arrTip = ["InventoryBase","Rifle","Pistol","Bow","CrossbowBase","MeleeItemBase","DefaultMagazine","HouseNoDestruct","ZombieBase"];
                        {
                            _nextTip = _x;
                            {
                                if ( (vehicle _x) distance [12531.216, 9706.0459] < 100 ) then
                                {
                                    deleteVehicle _x;
                                };
                            } forEach (allMissionObjects _nextTip);
                        } forEach _arrTip;
                        diag_log format ["Custom Events: Berezino Cleaned"];
                    };
					case "Rogovo" : {
                        _arrTip = ["InventoryBase","Rifle","Pistol","Bow","CrossbowBase","MeleeItemBase","DefaultMagazine","HouseNoDestruct","ZombieBase"];
                        {
                            _nextTip = _x;
                            {
                                if ( (vehicle _x) distance [4948.2056, 6772.0547] < 100 ) then
                                {
                                    deleteVehicle _x;
                                };
                            } forEach (allMissionObjects _nextTip);
                        } forEach _arrTip;
                        diag_log format ["Custom Events: Rogovo Cleaned"];
                    };
					case "Factory" : {
                        _arrTip = ["InventoryBase","Rifle","Pistol","Bow","CrossbowBase","MeleeItemBase","DefaultMagazine","HouseNoDestruct","ZombieBase"];
                        {
                            _nextTip = _x;
                            {
                                if ( (vehicle _x) distance [13125.313, 7332.8066] < 100 ) then
                                {
                                    deleteVehicle _x;
                                };
                            } forEach (allMissionObjects _nextTip);
                        } forEach _arrTip;
                        diag_log format ["Custom Events: Factory Cleaned"];
                    };
					case "Balota" : {
                        _arrTip = ["InventoryBase","Rifle","Pistol","Bow","CrossbowBase","MeleeItemBase","DefaultMagazine","HouseNoDestruct","ZombieBase"];
                        {
                            _nextTip = _x;
                            {
                                if ( (vehicle _x) distance [4573.6836, 2647.8345] < 100 ) then
                                {
                                    deleteVehicle _x;
                                };
                            } forEach (allMissionObjects _nextTip);
                        } forEach _arrTip;
                        diag_log format ["Custom Events: Balota Cleaned"];
                    };
					case "West Electro" : {
                        _arrTip = ["InventoryBase","Rifle","Pistol","Bow","CrossbowBase","MeleeItemBase","DefaultMagazine","HouseNoDestruct","ZombieBase"];
                        {
                            _nextTip = _x;
                            {
                                if ( (vehicle _x) distance [9473.333, 2058.3767] < 100 ) then
                                {
                                    deleteVehicle _x;
                                };
                            } forEach (allMissionObjects _nextTip);
                        } forEach _arrTip;
                        diag_log format ["Custom Events: West Electro Cleaned"];
                    };
                };
            };
        };

    call fnc_SpawnConvoy;
    _CurrentTick = diag_tickTime;
    _FutEvent = _sleepTime + floor(random 300); // Additional time added to defualt wait timer  300 
    diag_log format ["Custom Events: Spawing Convoy Event...| Generated Sleep: %1",_FutEvent];
    waitUntil { (diag_tickTime - _CurrentTick) > _FutEvent };
    call _Looper;
    };
    call _Looper;
};

};

DZ_EventSetup = 
{
_Location = _this select 0;
_ReturnVehs = [];
switch (_Location) do {
   case "Vybor Military": {
  _Land_bmp2_wrecked = createVehicle ["Land_bmp2_wrecked", [4605.2051, 8463.0439], [], 0, "CAN_COLLIDE"];
  _Land_bmp2_wrecked setDir 160.03885;
  _Land_bmp2_wrecked setPos [4605.2051, 8463.0439];

  _Land_BRDM2_wrecked = createVehicle ["Land_BRDM2_wrecked", [4606.8027, 8437.2705, -0.12228394], [], 0, "CAN_COLLIDE"];
  _Land_BRDM2_wrecked setDir 174.9023;
  _Land_BRDM2_wrecked setPos [4606.8027, 8437.2705, -0.12228394];

  _Land_bvp1T = createVehicle ["Land_bvp1T", [4615.4893, 8433.3682], [], 0, "CAN_COLLIDE"];
  _Land_bvp1T setDir 211.84352;
  _Land_bvp1T setPos [4615.4893, 8433.3682];
  
  _Land_T72_Wrecked = createVehicle ["Land_T72_Wrecked", [4607.48, 8447.9365, -0.080505371], [], 0, "CAN_COLLIDE"];
  _Land_T72_Wrecked setDir 184.40395;
  _Land_T72_Wrecked setPos [4607.48, 8447.9365, -0.080505371];

  _ReturnVehs = _ReturnVehs + [_Land_bmp2_wrecked];
  _ReturnVehs = _ReturnVehs + [_Land_BRDM2_wrecked];
  _ReturnVehs = _ReturnVehs + [_Land_bvp1T];
  _ReturnVehs = _ReturnVehs + [_Land_T72_Wrecked];

  _wreckVeh = createVehicle ["Land_HMMWV_wrecked", [4608.9604, 8476.3027, -0.047454834], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 182.88441;
  _wreckVeh setPos [4608.9604, 8476.3027, -0.047454834];
  _wreckVeh = createVehicle ["Land_t72_wrecked_turret", [4602.353, 8447.0059, -0.28800556], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 379.32172;
  _wreckVeh setPos [4602.353, 8447.0059, -0.28800556];
  _wreckVeh = createVehicle ["Land_uaz_wrecked", [4597.104, 8436.3096, -0.0016784668], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 136.78035;
  _wreckVeh setPos [4597.104, 8436.3096, -0.0016784668];
  _wreckVeh = createVehicle ["Land_ural_wrecked", [4597.9624, 8460.2402, -0.094805218], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 163.43326;
  _wreckVeh setPos [4597.9624, 8460.2402, -0.094805218];
  _wreckVeh = createVehicle ["Land_uaz_wrecked", [4594.4932, 8449.5635, -0.00012207031], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 187.39549;
  _wreckVeh setPos [4594.4932, 8449.5635, -0.00012207031];
  _wreckVeh = createVehicle ["Land_uaz_wrecked", [4613.1919, 8460.5928], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 167.7948;
  _wreckVeh setPos [4613.1919, 8460.5928];
  _wreckVeh = createVehicle ["Land_HMMWV_wrecked", [4599.7983, 8425.6113], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 194.21571;
  _wreckVeh setPos [4599.7983, 8425.6113];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4600.9785, 8424.9561, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4600.9785, 8424.9561, -3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4598.9751, 8423.04, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4598.9751, 8423.04, 3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4597.6934, 8423.9844, -6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4597.6934, 8423.9844, -6.1035156e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4598.3359, 8428.0088, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4598.3359, 8428.0088, 3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4600.2002, 8429.249, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4600.2002, 8429.249, -3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4602.1099, 8427.9268, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4602.1099, 8427.9268, 3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4598.04, 8434.4141, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4598.04, 8434.4141, 3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4604.8667, 8439.1797, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4604.8667, 8439.1797, 6.1035156e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4605.9121, 8434.9609, 0], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4605.9121, 8434.9609, 0];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4608.2227, 8434.8574, -6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4608.2227, 8434.8574, -6.1035156e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4607.3447, 8439.6719, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4607.3447, 8439.6719, -3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4615.3032, 8432.3135, 0], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4615.3032, 8432.3135, 0];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4611.9697, 8428.5879, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4611.9697, 8428.5879, -3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4614.3013, 8429.3447, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4614.3013, 8429.3447, 6.1035156e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4595.582, 8448.873, 0], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4595.582, 8448.873, 0];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4592.916, 8449.0576, 0], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4592.916, 8449.0576, 0];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4594.0596, 8447.6582, 0], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4594.0596, 8447.6582, 0];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4594.0684, 8452.0049, 0], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4594.0684, 8452.0049, 0];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4606.4556, 8475.8877, 0], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4606.4556, 8475.8877, 0];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4606.1587, 8473.002, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4606.1587, 8473.002, -3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4608.4155, 8472.2373, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4608.4155, 8472.2373, 3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4610.2788, 8474.9229, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4610.2788, 8474.9229, 3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4609.0405, 8478.1445, 0], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4609.0405, 8478.1445, 0];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4610.0576, 8472.083, 0], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4610.0576, 8472.083, 0];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4612.9229, 8462.3779, -6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4612.9229, 8462.3779, -6.1035156e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4611.9673, 8460.1543, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4611.9673, 8460.1543, 6.1035156e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4614.5205, 8459.8291, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4614.5205, 8459.8291, -3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4613.5557, 8457.7344, -9.1552734e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4613.5557, 8457.7344, -9.1552734e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4612.2388, 8462.9434, 0], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4612.2388, 8462.9434, 0];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4606.4692, 8452.9551, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4606.4692, 8452.9551, 6.1035156e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4608.8828, 8452.0127, 0], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4608.8828, 8452.0127, 0];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4604.6685, 8454.042, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4604.6685, 8454.042, 3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4609.0366, 8448.3135, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4609.0366, 8448.3135, -3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4607.6978, 8444.8867, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4607.6978, 8444.8867, -3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4603.8848, 8450.0088, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4603.8848, 8450.0088, 3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4604.3296, 8446.5127, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4604.3296, 8446.5127, 6.1035156e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4605.2974, 8444.957, 0], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4605.2974, 8444.957, 0];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4606.1904, 8444.8994, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4606.1904, 8444.8994, 3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4594.9541, 8436.1816, -6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4594.9541, 8436.1816, -6.1035156e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4596.4365, 8462.75, -9.1552734e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4596.4365, 8462.75, -9.1552734e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4596.3208, 8459.1377, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4596.3208, 8459.1377, 3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4597.8213, 8457.0596, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4597.8213, 8457.0596, -3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4597.4209, 8464.8281, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4597.4209, 8464.8281, -3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4602.7588, 8465.9902, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4602.7588, 8465.9902, 3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4602.9604, 8462.8525, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4602.9604, 8462.8525, -3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4604.272, 8459.8828, 9.1552734e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4604.272, 8459.8828, 9.1552734e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4607.4521, 8462.04, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4607.4521, 8462.04, -3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4606.2637, 8465.291, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4606.2637, 8465.291, -3.0517578e-005];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4604.4229, 8466.9316, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4604.4229, 8466.9316, 3.0517578e-005];

    }; 

 case "NWAF": {

  _Land_bmp2_wrecked = createVehicle ["Land_bmp2_wrecked", [4835.5259, 9912.999, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _Land_bmp2_wrecked setDir 160.03885;
  _Land_bmp2_wrecked setPos [4835.5259, 9912.999, -3.0517578e-005];

  _Land_BRDM2_wrecked = createVehicle ["Land_BRDM2_wrecked", [4837.1235, 9887.2256, -0.090928674], [], 0, "CAN_COLLIDE"];
  _Land_BRDM2_wrecked setDir 174.9023;
  _Land_BRDM2_wrecked setPos [4837.1235, 9887.2256, -0.090928674];

  _Land_T72_Wrecked = createVehicle ["Land_T72_Wrecked", [4837.8008, 9897.8916, 0.055510376], [], 0, "CAN_COLLIDE"];
  _Land_T72_Wrecked setDir 184.40395;
  _Land_T72_Wrecked setPos [4837.8008, 9897.8916, 0.055510376];

  _Land_bvp1T = createVehicle ["Land_bvp1T", [4845.8101, 9883.3232, -0.11407334], [], 0, "CAN_COLLIDE"];
  _Land_bvp1T setDir 211.84352;
  _Land_bvp1T setPos [4845.8101, 9883.3232, -0.11407334];

  _ReturnVehs = _ReturnVehs + [_Land_bmp2_wrecked];
  _ReturnVehs = _ReturnVehs + [_Land_BRDM2_wrecked];
  _ReturnVehs = _ReturnVehs + [_Land_bvp1T];
  _ReturnVehs = _ReturnVehs + [_Land_T72_Wrecked];

  _wreckVeh = createVehicle ["Land_HMMWV_wrecked", [4839.2813, 9926.2578, 0.48635864], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 182.88441;
  _wreckVeh setPos [4839.2813, 9926.2578, 0.48635864];
  _wreckVeh = createVehicle ["Land_t72_wrecked_turret", [4832.6738, 9896.9609, -0.3309021], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 379.32172;
  _wreckVeh setPos [4832.6738, 9896.9609, -0.3309021];
  _wreckVeh = createVehicle ["Land_uaz_wrecked", [4827.4248, 9886.2646, -1.5958557], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 136.78035;
  _wreckVeh setPos [4827.4248, 9886.2646, -1.5958557];
  _wreckVeh = createVehicle ["Land_ural_wrecked", [4828.2832, 9910.1953, -0.2276001], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 163.43326;
  _wreckVeh setPos [4828.2832, 9910.1953, -0.2276001];
  _wreckVeh = createVehicle ["Land_uaz_wrecked", [4824.814, 9899.5186, -0.1870188], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 187.39549;
  _wreckVeh setPos [4824.814, 9899.5186, -0.1870188];
  _wreckVeh = createVehicle ["Land_uaz_wrecked", [4843.5127, 9910.5479, -0.10228229], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 167.7948;
  _wreckVeh setPos [4843.5127, 9910.5479, -0.10228229];
  _wreckVeh = createVehicle ["Land_HMMWV_wrecked", [4830.1191, 9875.5664, 0.13445644], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 194.21571;
  _wreckVeh setPos [4830.1191, 9875.5664, 0.13445644];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4831.2993, 9874.9111, 0.018920898], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4831.2993, 9874.9111, 0.018920898];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4829.2959, 9872.9951, -0.00042724609], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4829.2959, 9872.9951, -0.00042724609];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4828.0142, 9873.9395, -0.030273438], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4828.0142, 9873.9395, -0.030273438];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4828.6567, 9877.9639, -0.051239014], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4828.6567, 9877.9639, -0.051239014];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4830.521, 9879.2041, -0.031494141], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4830.521, 9879.2041, -0.031494141];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4832.4307, 9877.8818, 0.011444092], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4832.4307, 9877.8818, 0.011444092];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4828.3608, 9884.3691, -0.090698242], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4828.3608, 9884.3691, -0.090698242];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4835.1875, 9889.1348, 0.013793945], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4835.1875, 9889.1348, 0.013793945];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4836.2329, 9884.916, 0.040863037], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4836.2329, 9884.916, 0.040863037];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4838.5435, 9884.8125, 0.081939697], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4838.5435, 9884.8125, 0.081939697];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4837.6655, 9889.627, 0.059143066], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4837.6655, 9889.627, 0.059143066];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4845.624, 9882.2686, 0.25119019], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4845.624, 9882.2686, 0.25119019];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4842.2905, 9878.543, 0.17791748], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4842.2905, 9878.543, 0.17791748];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4844.6221, 9879.2998, 0.22970581], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4844.6221, 9879.2998, 0.22970581];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4825.9028, 9898.8281, -0.16525269], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4825.9028, 9898.8281, -0.16525269];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4823.2368, 9899.0127, -0.21337891], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4823.2368, 9899.0127, -0.21337891];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4824.3804, 9897.6133, -0.19049072], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4824.3804, 9897.6133, -0.19049072];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4824.3892, 9901.96, -0.19985962], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4824.3892, 9901.96, -0.19985962];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4836.7764, 9925.8428, -0.060791016], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4836.7764, 9925.8428, -0.060791016];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4836.4795, 9922.957, -0.042541504], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4836.4795, 9922.957, -0.042541504];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4838.7363, 9922.1924, 0.0061340332], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4838.7363, 9922.1924, 0.0061340332];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4840.5996, 9924.8779, 0.0037231445], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4840.5996, 9924.8779, 0.0037231445];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4839.3613, 9928.0996, -0.02545166], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4839.3613, 9928.0996, -0.02545166];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4840.3784, 9922.0381, 0.034240723], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4840.3784, 9922.0381, 0.034240723];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4843.2437, 9912.333, 0.14978027], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4843.2437, 9912.333, 0.14978027];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4842.2881, 9910.1094, 0.13778687], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4842.2881, 9910.1094, 0.13778687];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4844.8413, 9909.7842, 0.18664551], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4844.8413, 9909.7842, 0.18664551];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4843.8765, 9907.6895, 0.17211914], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4843.8765, 9907.6895, 0.17211914];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4842.5596, 9912.8984, 0.13522339], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4842.5596, 9912.8984, 0.13522339];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4836.79, 9902.9102, 0.035797119], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4836.79, 9902.9102, 0.035797119];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4839.2036, 9901.9678, 0.080780029], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4839.2036, 9901.9678, 0.080780029];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4834.9893, 9903.9971, 0.0017089844], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4834.9893, 9903.9971, 0.0017089844];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4839.3574, 9898.2686, 0.083618164], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4839.3574, 9898.2686, 0.083618164];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4838.0186, 9894.8418, 0.058776855], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4838.0186, 9894.8418, 0.058776855];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4834.2056, 9899.9639, -0.013977051], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4834.2056, 9899.9639, -0.013977051];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4834.6504, 9896.4678, -0.0050354004], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4834.6504, 9896.4678, -0.0050354004];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4835.6182, 9894.9121, 0.013916016], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4835.6182, 9894.9121, 0.013916016];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4836.5112, 9894.8545, 0.030670166], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4836.5112, 9894.8545, 0.030670166];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4825.2749, 9886.1367, -0.15060425], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4825.2749, 9886.1367, -0.15060425];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4826.7573, 9912.7051, -0.16387939], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4826.7573, 9912.7051, -0.16387939];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4826.6416, 9909.0928, -0.16210938], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4826.6416, 9909.0928, -0.16210938];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4828.1421, 9907.0146, -0.13528442], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4828.1421, 9907.0146, -0.13528442];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4827.7417, 9914.7832, -0.14953613], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4827.7417, 9914.7832, -0.14953613];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4833.0796, 9915.9453, -0.054473877], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4833.0796, 9915.9453, -0.054473877];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4833.2813, 9912.8076, -0.038482666], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4833.2813, 9912.8076, -0.038482666];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4834.5928, 9909.8379, -0.0061645508], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4834.5928, 9909.8379, -0.0061645508];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4837.7729, 9911.9951, 0.045898438], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4837.7729, 9911.9951, 0.045898438];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4836.5845, 9915.2461, 0.010681152], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4836.5845, 9915.2461, 0.010681152];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [4834.7437, 9916.8867, -0.029418945], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [4834.7437, 9916.8867, -0.029418945];

    };

 case "Green Mountain": {

  _Land_bmp2_wrecked = createVehicle ["Land_bmp2_wrecked", [3363.5115, 5570.8716, -0.083865047], [], 0, "CAN_COLLIDE"];
  _Land_bmp2_wrecked setDir 441.07727;
  _Land_bmp2_wrecked setPos [3363.5115, 5570.8716, -0.083865047];

  _Land_BRDM2_wrecked = createVehicle ["Land_BRDM2_wrecked", [3389.1123, 5567.5039, 0.11318636], [], 0, "CAN_COLLIDE"];
  _Land_BRDM2_wrecked setDir 455.9408;
  _Land_BRDM2_wrecked setPos [3389.1123, 5567.5039, 0.11318636];

  _Land_T72_Wrecked = createVehicle ["Land_T72_Wrecked", [3378.7727, 5570.2124, -0.034713104], [], 0, "CAN_COLLIDE"];
  _Land_T72_Wrecked setDir 465.44244;
  _Land_T72_Wrecked setPos [3378.7727, 5570.2124, -0.034713104];

  _Land_bvp1T = createVehicle ["Land_bvp1T", [3399.8621, 5574.123, -0.049915537], [], 0, "CAN_COLLIDE"];
  _Land_bvp1T setDir 469.72281;
  _Land_bvp1T setPos [3399.8621, 5574.123, -0.049915537];

  _ReturnVehs = _ReturnVehs + [_Land_bmp2_wrecked];
  _ReturnVehs = _ReturnVehs + [_Land_BRDM2_wrecked];
  _ReturnVehs = _ReturnVehs + [_Land_bvp1T];
  _ReturnVehs = _ReturnVehs + [_Land_T72_Wrecked];

  _wreckVeh = createVehicle ["Land_HMMWV_wrecked", [3351.6111, 5575.9751, 0.0013367347], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 463.92291;
  _wreckVeh setPos [3351.6111, 5575.9751, 0.0013367347];
  _wreckVeh = createVehicle ["Land_t72_wrecked_turret", [3378.7061, 5565.0005, -0.36385143], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 660.23798;
  _wreckVeh setPos [3378.7061, 5565.0005, -0.36385143];
  _wreckVeh = createVehicle ["Land_uaz_wrecked", [3388.2007, 5557.7993, -0.11377769], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 417.81879;
  _wreckVeh setPos [3388.2007, 5557.7993, -0.11377769];
  _wreckVeh = createVehicle ["Land_ural_wrecked", [3364.874, 5563.2256, -0.062536038], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 444.47174;
  _wreckVeh setPos [3364.874, 5563.2256, -0.062536038];
  _wreckVeh = createVehicle ["Land_uaz_wrecked", [3374.6895, 5557.7783, 0.071399115], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 468.43396;
  _wreckVeh setPos [3374.6895, 5557.7783, 0.071399115];
  _wreckVeh = createVehicle ["Land_uaz_wrecked", [3367.4448, 5578.2427, -0.066996217], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 448.83325;
  _wreckVeh setPos [3367.4448, 5578.2427, -0.066996217];
  _wreckVeh = createVehicle ["Land_HMMWV_wrecked", [3399.2129, 5558.397, 0.11594685], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 475.25415;
  _wreckVeh setPos [3399.2129, 5558.397, 0.11594685];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3400.0862, 5559.4307, 2.1195374], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3400.0862, 5559.4307, 2.1195374];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3401.5793, 5557.0986, 2.2438354], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3401.5793, 5557.0986, 2.2438354];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3400.408, 5556.022, 2.2572021], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3400.408, 5556.022, 2.2572021];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3396.5828, 5557.4224, 2.2579651], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3396.5828, 5557.4224, 2.2579651];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3395.7217, 5559.4888, 2.2209473], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3395.7217, 5559.4888, 2.2209473];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3397.3867, 5561.1089, 2.1358032], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3397.3867, 5561.1089, 2.1358032];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3390.239, 5558.3584, 2.374176], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3390.239, 5558.3584, 2.374176];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3386.8687, 5565.9717, 2.197937], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3386.8687, 5565.9717, 2.197937];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3391.2085, 5566.1855, 2.0985413], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3391.2085, 5566.1855, 2.0985413];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3391.7532, 5568.4365, 2.0238647], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3391.7532, 5568.4365, 2.0238647];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3386.8586, 5568.4961, 2.1287842], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3386.8586, 5568.4961, 2.1287842];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3395.6028, 5574.8994, 1.8008728], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3395.6028, 5574.8994, 1.8008728];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3398.6235, 5570.9141, 1.8263245], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3398.6235, 5570.9141, 1.8263245];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3398.3259, 5573.3481, 1.7749329], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3398.3259, 5573.3481, 1.7749329];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3375.5764, 5558.7148, 2.6416321], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3375.5764, 5558.7148, 2.6416321];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3374.8845, 5556.1313, 2.7419739], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3374.8845, 5556.1313, 2.7419739];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3376.4763, 5556.9873, 2.6817932], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3376.4763, 5556.9873, 2.6817932];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3372.2126, 5557.8267, 2.7340393], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3372.2126, 5557.8267, 2.7340393];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3351.1423, 5574.5566, -1.5635681], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3351.1423, 5574.5566, -1.5635681];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3353.9187, 5573.7129, -1.1980896], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3353.9187, 5573.7129, -1.1980896];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3355.1013, 5575.7832, -1.3065491], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3355.1013, 5575.7832, -1.3065491];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3352.8218, 5578.125, -1.8051453], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3352.8218, 5578.125, -1.8051453];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3349.4241, 5577.5269, -2.0594177], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3349.4241, 5577.5269, -2.0594177];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3355.5662, 5577.3667, -1.4367676], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3355.5662, 5577.3667, -1.4367676];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3365.6423, 5578.3188, -0.57449341], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3365.6423, 5578.3188, -0.57449341];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3367.6406, 5576.957, -0.25344849], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3367.6406, 5576.957, -0.25344849];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3368.4502, 5579.3994, -0.43710327], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3368.4502, 5579.3994, -0.43710327];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3370.3188, 5578.0518, -0.12805176], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3370.3188, 5578.0518, -0.12805176];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3364.9558, 5577.7559, -0.57711792], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3364.9558, 5577.7559, -0.57711792];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3373.6533, 5570.1821, 1.0176392], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3373.6533, 5570.1821, 1.0176392];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3375.041, 5572.3706, 1.0866089], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3375.041, 5572.3706, 1.0866089];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3372.2424, 5568.6216, 1.1008911], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3372.2424, 5568.6216, 1.1008911];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3378.7002, 5571.8135, 1.8443604], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3378.7002, 5571.8135, 1.8443604];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3381.8091, 5569.8438, 2.1966858], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3381.8091, 5569.8438, 2.1966858];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3376.0508, 5567.0786, 2.0591431], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3376.0508, 5567.0786, 2.0591431];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3379.5676, 5566.8457, 2.3206482], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3379.5676, 5566.8457, 2.3206482];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3381.2788, 5567.4985, 2.2671814], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3381.2788, 5567.4985, 2.2671814];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3381.5081, 5568.3623, 2.2393799], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3381.5081, 5568.3623, 2.2393799];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3387.9138, 5555.667, 2.5153503], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3387.9138, 5555.667, 2.5153503];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3362.1199, 5562.2104, 0.69238281], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3362.1199, 5562.2104, 0.69238281];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3365.6436, 5561.4058, 1.4055481], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3365.6436, 5561.4058, 1.4055481];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3367.9702, 5562.4795, 1.8356323], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3367.9702, 5562.4795, 1.8356323];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3360.2681, 5563.5742, 0.41845703], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3360.2681, 5563.5742, 0.41845703];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3360.1523, 5569.0371, -0.11315918], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3360.1523, 5569.0371, -0.11315918];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3363.2678, 5568.6313, 0.19866943], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3363.2678, 5568.6313, 0.19866943];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3366.4336, 5569.353, 0.39379883], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3366.4336, 5569.353, 0.39379883];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3364.9248, 5572.8857, -0.079620361], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3364.9248, 5572.8857, -0.079620361];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3361.5066, 5572.3379, -0.33093262], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3361.5066, 5572.3379, -0.33093262];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3359.5464, 5570.8486, -0.35461426], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.03845;
  _wreckVeh setPos [3359.5464, 5570.8486, -0.35461426];


    }; 

case "Novaya Petrovka": {

  _Land_bmp2_wrecked = createVehicle ["Land_bmp2_wrecked", [3776.0513, 12738.05, -0.13425976], [], 0, "CAN_COLLIDE"];
  _Land_bmp2_wrecked setDir 160.03885;
  _Land_bmp2_wrecked setPos [3776.0513, 12738.05, -0.13425976];

  _Land_BRDM2_wrecked = createVehicle ["Land_BRDM2_wrecked", [3777.6489, 12712.276, 0.12853628], [], 0, "CAN_COLLIDE"];
  _Land_BRDM2_wrecked setDir 174.9023;
  _Land_BRDM2_wrecked setPos [3777.6489, 12712.276, 0.12853628];

  _Land_T72_Wrecked = createVehicle ["Land_T72_Wrecked", [3776.8574, 12724.371, 0.09542127], [], 0, "CAN_COLLIDE"];
  _Land_T72_Wrecked setDir 184.40395;
  _Land_T72_Wrecked setPos [3776.8574, 12724.371, 0.09542127];

  _Land_bvp1T = createVehicle ["Land_bvp1T", [3786.3354, 12708.374, -0.25609684], [], 0, "CAN_COLLIDE"];
  _Land_bvp1T setDir 212.43024;
  _Land_bvp1T setPos [3786.3354, 12708.374, -0.25609684];

  _ReturnVehs = _ReturnVehs + [_Land_bmp2_wrecked];
  _ReturnVehs = _ReturnVehs + [_Land_BRDM2_wrecked];
  _ReturnVehs = _ReturnVehs + [_Land_bvp1T];
  _ReturnVehs = _ReturnVehs + [_Land_T72_Wrecked];

  _wreckVeh = createVehicle ["Land_HMMWV_wrecked", [3778.7268, 12748.832, 0.059437804], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 182.88441;
  _wreckVeh setPos [3778.7268, 12748.832, 0.059437804];
  _wreckVeh = createVehicle ["Land_t72_wrecked_turret", [3772.1697, 12720.433, -0.09796834], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 379.32172;
  _wreckVeh setPos [3772.1697, 12720.433, -0.09796834];
  _wreckVeh = createVehicle ["Land_uaz_wrecked", [3767.9502, 12711.315, -0.0069313981], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 136.78035;
  _wreckVeh setPos [3767.9502, 12711.315, -0.0069313981];
  _wreckVeh = createVehicle ["Land_ural_wrecked", [3768.8086, 12735.246, -0.12443717], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 163.43326;
  _wreckVeh setPos [3768.8086, 12735.246, -0.12443717];
  _wreckVeh = createVehicle ["Land_uaz_wrecked", [3765.3394, 12724.569, -0.072745159], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 187.39549;
  _wreckVeh setPos [3765.3394, 12724.569, -0.072745159];
  _wreckVeh = createVehicle ["Land_uaz_wrecked", [3784.0381, 12735.599, -0.18494794], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 167.7948;
  _wreckVeh setPos [3784.0381, 12735.599, -0.18494794];
  _wreckVeh = createVehicle ["Land_HMMWV_wrecked", [3770.6445, 12700.617, -0.098068237], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 194.21571;
  _wreckVeh setPos [3770.6445, 12700.617, -0.098068237];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3771.8247, 12699.962, 0.96782774], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3771.8247, 12699.962, 0.96782774];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3769.8213, 12698.046, 0.73885435], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3769.8213, 12698.046, 0.73885435];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3768.5396, 12698.99, 0.79779905], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3768.5396, 12698.99, 0.79779905];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3769.1821, 12703.015, 1.1939628], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3769.1821, 12703.015, 1.1939628];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3771.0464, 12704.255, 1.3576442], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3771.0464, 12704.255, 1.3576442];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3772.9561, 12702.933, 1.2765436], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3772.9561, 12702.933, 1.2765436];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3768.8862, 12709.42, 1.7320029], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3768.8862, 12709.42, 1.7320029];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3775.7129, 12714.186, 2.3023756], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3775.7129, 12714.186, 2.3023756];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3776.7583, 12709.967, 1.9825515], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3776.7583, 12709.967, 1.9825515];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3779.0688, 12709.863, 2.0359571], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3779.0688, 12709.863, 2.0359571];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3778.1909, 12714.678, 2.4088666], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3778.1909, 12714.678, 2.4088666];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3786.1494, 12707.319, 2.023277], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3786.1494, 12707.319, 2.023277];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3782.8159, 12703.594, 1.571206], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3782.8159, 12703.594, 1.571206];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3785.1475, 12704.351, 1.7160879], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3785.1475, 12704.351, 1.7160879];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3766.4282, 12723.879, 2.7759626], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3766.4282, 12723.879, 2.7759626];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3763.7622, 12724.063, 2.7166822], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3763.7622, 12724.063, 2.7166822];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3764.9058, 12722.664, 2.6457899], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3764.9058, 12722.664, 2.6457899];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3764.9146, 12727.011, 2.9610212], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3764.9146, 12727.011, 2.9610212];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3777.3018, 12750.894, 4.9865794], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3777.3018, 12750.894, 4.9865794];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3777.0049, 12748.008, 4.7823405], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3777.0049, 12748.008, 4.7823405];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3779.2617, 12747.243, 4.796989], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3779.2617, 12747.243, 4.796989];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3781.125, 12749.929, 5.0185466], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3781.125, 12749.929, 5.0185466];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3779.8867, 12753.15, 5.2210002], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3779.8867, 12753.15, 5.2210002];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3780.9038, 12747.089, 4.8308635], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3780.9038, 12747.089, 4.8308635];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3783.769, 12737.384, 4.247963], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3783.769, 12737.384, 4.247963];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3782.8135, 12735.16, 4.0640187], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3782.8135, 12735.16, 4.0640187];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3785.3667, 12734.835, 4.1126027], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3785.3667, 12734.835, 4.1126027];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3784.4019, 12732.74, 3.9326556], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3784.4019, 12732.74, 3.9326556];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3783.085, 12737.949, 4.2685013], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3783.085, 12737.949, 4.2685013];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3777.3154, 12727.961, 3.3827593], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3777.3154, 12727.961, 3.3827593];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3779.729, 12727.019, 3.3805315], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3779.729, 12727.019, 3.3805315];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3775.5146, 12729.048, 3.4115374], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3775.5146, 12729.048, 3.4115374];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3779.8828, 12723.319, 3.1085584], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3779.8828, 12723.319, 3.1085584];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3778.5439, 12719.893, 2.8150704], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3778.5439, 12719.893, 2.8150704];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3774.731, 12725.015, 3.0894849], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3774.731, 12725.015, 3.0894849];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3775.1758, 12721.519, 2.8415139], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3775.1758, 12721.519, 2.8415139];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3776.1436, 12719.963, 2.7532575], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3776.1436, 12719.963, 2.7532575];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3777.0366, 12719.905, 2.7738874], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3777.0366, 12719.905, 2.7738874];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3765.8003, 12711.188, 1.7937703], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3765.8003, 12711.188, 1.7937703];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3767.2827, 12737.756, 3.8077474], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3767.2827, 12737.756, 3.8077474];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3767.167, 12734.144, 3.5435107], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3767.167, 12734.144, 3.5435107];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3768.6675, 12732.065, 3.4319384], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3768.6675, 12732.065, 3.4319384];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3768.2671, 12739.834, 3.9836965], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3768.2671, 12739.834, 3.9836965];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3773.605, 12740.996, 4.2137685], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3773.605, 12740.996, 4.2137685];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3773.8066, 12737.858, 4.0015492], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3773.8066, 12737.858, 4.0015492];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3775.1182, 12734.889, 3.8283157], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3775.1182, 12734.889, 3.8283157];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3778.2983, 12737.046, 4.0682302], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3778.2983, 12737.046, 4.0682302];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3777.1099, 12740.297, 4.2603531], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3777.1099, 12740.297, 4.2603531];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [3775.269, 12741.938, 4.3233719], [], 0, "CAN_COLLIDE"];
  _wreckVeh setPos [3775.269, 12741.938, 4.3233719];


    }; 

  case "Sinistok": {

  _Land_bmp2_wrecked = createVehicle ["Land_bmp2_wrecked", [2062.8843, 11679.961, 0.23500079], [], 0, "CAN_COLLIDE"];
  _Land_bmp2_wrecked setDir 247.29822;
  _Land_bmp2_wrecked setPos [2062.8843, 11679.961, 0.23500079];

  _Land_BRDM2_wrecked = createVehicle ["Land_BRDM2_wrecked", [2037.2111, 11677.13, 0.035534117], [], 0, "CAN_COLLIDE"];
  _Land_BRDM2_wrecked setDir 262.16168;
  _Land_BRDM2_wrecked setPos [2037.2111, 11677.13, 0.035534117];

  _Land_T72_Wrecked = createVehicle ["Land_T72_Wrecked", [2046.4585, 11678.187, -0.086181641], [], 0, "CAN_COLLIDE"];
  _Land_T72_Wrecked setDir 271.66333;
  _Land_T72_Wrecked setPos [2046.4585, 11678.187, -0.086181641];

  _Land_bvp1T = createVehicle ["Land_bvp1T", [2033.139, 11674.659, -0.61009222], [], 0, "CAN_COLLIDE"];
  _Land_bvp1T setDir 299.3443;
  _Land_bvp1T setPos [2033.139, 11674.659, -0.61009222];

  _ReturnVehs = _ReturnVehs + [_Land_bmp2_wrecked];
  _ReturnVehs = _ReturnVehs + [_Land_BRDM2_wrecked];
  _ReturnVehs = _ReturnVehs + [_Land_bvp1T];
  _ReturnVehs = _ReturnVehs + [_Land_T72_Wrecked];

  _wreckVeh = createVehicle ["Land_HMMWV_wrecked", [2076.2998, 11676.837, 0.056078602], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 270.1438;
  _wreckVeh setPos [2076.2998, 11676.837, 0.056078602];
  _wreckVeh = createVehicle ["Land_t72_wrecked_turret", [2046.7234, 11682.036, -0.24018821], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 466.58093;
  _wreckVeh setPos [2046.7234, 11682.036, -0.24018821];
  _wreckVeh = createVehicle ["Land_uaz_wrecked", [2035.7864, 11686.768, -2.309021], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 224.03972;
  _wreckVeh setPos [2035.7864, 11686.768, -2.309021];
  _wreckVeh = createVehicle ["Land_ural_wrecked", [2059.7329, 11687.056, -0.051845431], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 250.69263;
  _wreckVeh setPos [2059.7329, 11687.056, -0.051845431];
  _wreckVeh = createVehicle ["Land_uaz_wrecked", [2060.8076, 11671.859, -0.19688007], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 255.05417;
  _wreckVeh setPos [2060.8076, 11671.859, -0.19688007];
  _wreckVeh = createVehicle ["Land_HMMWV_wrecked", [2025.2367, 11683.57, -0.092134431], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 281.47507;
  _wreckVeh setPos [2025.2367, 11683.57, -0.092134431];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2024.6316, 11682.353, 0.4296875], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2024.6316, 11682.353, 0.4296875];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2022.6273, 11684.271, 0.16616821], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2022.6273, 11684.271, 0.16616821];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2023.5103, 11685.598, -0.075958252], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2023.5103, 11685.598, -0.075958252];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2027.5609, 11685.146, -0.10168457], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2027.5609, 11685.146, -0.10168457];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2028.8848, 11683.34, 0.061004639], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2028.8848, 11683.34, 0.061004639];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2027.6539, 11681.366, 0.40289307], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2027.6539, 11681.366, 0.40289307];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2033.9374, 11685.741, -0.59597778], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2033.9374, 11685.741, -0.59597778];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2039.0231, 11679.151, 0.27615356], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2039.0231, 11679.151, 0.27615356];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2034.8606, 11677.909, 0.66455078], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2034.8606, 11677.909, 0.66455078];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2034.8719, 11675.597, 0.98522949], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2034.8719, 11675.597, 0.98522949];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2039.6403, 11676.707, 0.59362793], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2039.6403, 11676.707, 0.59362793];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2032.668, 11668.401, 2.28125], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2032.668, 11668.401, 2.28125];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2028.7805, 11671.547, 2.2047424], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2028.7805, 11671.547, 2.2047424];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2029.6581, 11669.262, 2.4555359], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2029.6581, 11669.262, 2.4555359];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2048.2622, 11688.892, -0.69787598], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2048.2622, 11688.892, -0.69787598];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2048.3289, 11691.569, -0.84085083], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2048.3289, 11691.569, -0.84085083];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2046.981, 11690.353, -0.8107605], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2046.981, 11690.353, -0.8107605];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2051.3201, 11690.556, -0.71176147], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2051.3201, 11690.556, -0.71176147];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2075.7646, 11679.318, 0.010131836], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2075.7646, 11679.318, 0.010131836];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2072.8733, 11679.48, 0.026855469], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2072.8733, 11679.48, 0.026855469];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2072.22, 11677.191, 0.11956787], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2072.22, 11677.191, 0.11956787];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2074.9849, 11675.452, 0.16235352], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2074.9849, 11675.452, 0.16235352];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2078.1487, 11676.853, 0.099151611], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2078.1487, 11676.853, 0.099151611];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2072.1392, 11675.54, 0.18188477], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2072.1392, 11675.54, 0.18188477];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2062.5828, 11672.215, 0.42443848], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2062.5828, 11672.215, 0.42443848];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2060.3213, 11673.066, 0.34152222], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2060.3213, 11673.066, 0.34152222];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2060.1138, 11670.499, 0.56314087], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2060.1138, 11670.499, 0.56314087];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2057.9802, 11671.366, 0.51043701], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2057.9802, 11671.366, 0.51043701];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2063.1165, 11672.924, 0.36483765], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2063.1165, 11672.924, 0.36483765];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2052.8645, 11678.215, 0.087554932], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2052.8645, 11678.215, 0.087554932];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2052.0371, 11675.757, 0.28869629], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2052.0371, 11675.757, 0.28869629];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2053.8599, 11680.062, -0.055938721], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2053.8599, 11680.062, -0.055938721];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2048.3486, 11675.424, 0.48587036], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2048.3486, 11675.424, 0.48587036];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2044.8623, 11676.599, 0.50836182], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2044.8623, 11676.599, 0.50836182];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2049.7966, 11680.653, -0.12091064], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2049.7966, 11680.653, -0.12091064];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2046.3293, 11680.044, 0.0032348633], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2046.3293, 11680.044, 0.0032348633];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2044.8159, 11678.997, 0.16784668], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2044.8159, 11678.997, 0.16784668];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2044.8015, 11678.105, 0.29516602], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2044.8015, 11678.105, 0.29516602];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2035.5554, 11688.911, -1.0978088], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2035.5554, 11688.911, -1.0978088];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2062.1636, 11688.697, -0.41281128], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2062.1636, 11688.697, -0.41281128];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2058.5566, 11688.648, -0.47283936], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2058.5566, 11688.648, -0.47283936];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2056.552, 11687.047, -0.43170166], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2056.552, 11687.047, -0.43170166];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2064.2876, 11687.816, -0.33483887], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2064.2876, 11687.816, -0.33483887];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2065.7034, 11682.54, -0.096801758], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2065.7034, 11682.54, -0.096801758];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2062.5791, 11682.191, -0.096618652], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2062.5791, 11682.191, -0.096618652];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2059.6731, 11680.73, -0.050842285], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2059.6731, 11680.73, -0.050842285];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2061.9856, 11677.669, 0.095581055], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2061.9856, 11677.669, 0.095581055];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2065.1746, 11679.007, 0.043640137], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2065.1746, 11679.007, 0.043640137];
  _wreckVeh = createVehicle ["Land_datsun01T_spodok", [2066.7229, 11680.924, -0.029449463], [], 0, "CAN_COLLIDE"];
  _wreckVeh setDir 87.259323;
  _wreckVeh setPos [2066.7229, 11680.924, -0.029449463];


    };

	case "Berezino": {
	  _Land_datsun01T = createVehicle ["Land_datsun01T", [12531.216, 9706.0459, -0.21978986], [], 0, "CAN_COLLIDE"];
	  _Land_datsun01T setDir 21.863819;
	  _Land_datsun01T setPos [12531.216, 9706.0459, -0.21978986];

	  _Land_datsun02T = createVehicle ["Land_datsun02T", [12546.738, 9715.6162, -7.0571899e-005], [], 0, "CAN_COLLIDE"];
	  _Land_datsun02T setDir 44.656395;
	  _Land_datsun02T setPos [12546.738, 9715.6162, -7.0571899e-005];

	  _this = createVehicle ["Land_hiluxT", [12543.195, 9720.8623, 6.2465668e-005], [], 0, "CAN_COLLIDE"];
	  _this setDir 54.19101;
	  _this setPos [12543.195, 9720.8623, 6.2465668e-005];

	  _Land_ural_wrecked = createVehicle ["Land_ural_wrecked", [12534.851, 9713.335, -7.6770782e-005], [], 0, "CAN_COLLIDE"];
	  _Land_ural_wrecked setDir 81.213081;
	  _Land_ural_wrecked setPos [12534.851, 9713.335, -7.6770782e-005];
		
	  _ReturnVehs = _ReturnVehs + [_Land_datsun01T];
	  _ReturnVehs = _ReturnVehs + [_Land_datsun02T];
	  _ReturnVehs = _ReturnVehs + [_Land_ural_wrecked];
		
	  _this = createVehicle ["Land_V3S_wreck", [12529.604, 9718.333, -0.00011968613], [], 0, "CAN_COLLIDE"];
	  _this setDir 86.150383;
	  _this setPos [12529.604, 9718.333, -0.00011968613];

	  _this = createVehicle ["Land_datsun01T_spodok", [12537.315, 9729.3232, -0.012729529], [], 0, "CAN_COLLIDE"];
	  _this setDir 41.11776;
	  _this setPos [12537.315, 9729.3232, -0.012729529];

	  _this = createVehicle ["Land_datsun01T_spodok", [12527.441, 9709.0244, 6.5164952], [], 0, "CAN_COLLIDE"];
	  _this setPos [12527.441, 9709.0244, 6.5164952];

	  _this = createVehicle ["Land_Ind_Timbers", [12538.344, 9728.002, 9.5367432e-005], [], 0, "CAN_COLLIDE"];
	  _this setDir 41.206829;
	  _this setPos [12538.344, 9728.002, 9.5367432e-005];
	  
	  _this = createVehicle ["Land_Ind_BoardsPack2", [12536.208, 9713.7979, 1.2522027], [], 0, "CAN_COLLIDE"];
	  _this setDir 80.600624;
	  _this setPos [12536.208, 9713.7979, 1.2522027];

	  _this = createVehicle ["Land_datsun01T_spodok", [12532.717, 9704.6611, 4.0054321e-005], [], 0, "CAN_COLLIDE"];
	  _this setPos [12532.717, 9704.6611, 4.0054321e-005];

	  _this = createVehicle ["Land_datsun01T_spodok", [12534.518, 9711.541, 2.8610229e-005], [], 0, "CAN_COLLIDE"];
	  _this setPos [12534.518, 9711.541, 2.8610229e-005];

	  _this = createVehicle ["Land_datsun01T_spodok", [12536.263, 9711.5244, 3.3378601e-005], [], 0, "CAN_COLLIDE"];
	  _this setPos [12536.263, 9711.5244, 3.3378601e-005];

	  _this = createVehicle ["Land_datsun01T_spodok", [12541.928, 9718.8496, 1.4305115e-005], [], 0, "CAN_COLLIDE"];
	  _this setPos [12541.928, 9718.8496, 1.4305115e-005];

	  _this = createVehicle ["Land_datsun01T_spodok", [12545.188, 9720.1689, 5.8174133e-005], [], 0, "CAN_COLLIDE"];
	  _this setPos [12545.188, 9720.1689, 5.8174133e-005];

	  _this = createVehicle ["Land_datsun01T_spodok", [12527.983, 9717.1006, 3.2424927e-005], [], 0, "CAN_COLLIDE"];
	  _this setPos [12527.983, 9717.1006, 3.2424927e-005];

	  _this = createVehicle ["Land_datsun01T_spodok", [12532.51, 9717.7412, -0.0001707077], [], 0, "CAN_COLLIDE"];
	  _this setPos [12532.51, 9717.7412, -0.0001707077];

	  _this = createVehicle ["Land_datsun01T_spodok", [12544.997, 9713.5352, 2.8610229e-006], [], 0, "CAN_COLLIDE"];
	  _this setPos [12544.997, 9713.5352, 2.8610229e-006];

	  _this = createVehicle ["Land_datsun01T_spodok", [12548.104, 9715.3389, -4.7683716e-005], [], 0, "CAN_COLLIDE"];
	  _this setPos [12548.104, 9715.3389, -4.7683716e-005];
	};
	case "Rogovo": {
	  _Land_datsun01T = createVehicle ["Land_datsun01T", [4948.2056, 6772.0547, -6.1035156e-005], [], 0, "CAN_COLLIDE"];
	  _Land_datsun01T setDir 21.081247;
	  _Land_datsun01T setPos [4948.2056, 6772.0547, -6.1035156e-005];

	  _Land_datsun02T = createVehicle ["Land_datsun02T", [4963.5962, 6781.8359, 0.25814819], [], 0, "CAN_COLLIDE"];
	  _Land_datsun02T setDir 43.873829;
	  _Land_datsun02T setPos [4963.5962, 6781.8359, 0.25814819];

	  _this = createVehicle ["Land_hiluxT", [4959.9819, 6787.0332, 0.27383423], [], 0, "CAN_COLLIDE"];
	  _this setDir 53.408443;
	  _this setPos [4959.9819, 6787.0332, 0.27383423];

	  _Land_ural_wrecked = createVehicle ["Land_ural_wrecked", [4951.7407, 6779.3921, 0.25427246], [], 0, "CAN_COLLIDE"];
	  _Land_ural_wrecked setDir 80.430504;
	  _Land_ural_wrecked setPos [4951.7407, 6779.3921, 0.25427246];
	  
	  _this = createVehicle ["Land_V3S_wreck", [4946.4258, 6784.3174, 0.066589355], [], 0, "CAN_COLLIDE"];
	  _this setDir 85.367805;
	  _this setPos [4946.4258, 6784.3174, 0.066589355];

	  _this = createVehicle ["Land_datsun01T_spodok", [4953.9868, 6795.4126, -0.56137085], [], 0, "CAN_COLLIDE"];
	  _this setDir 40.335194;
	  _this setPos [4953.9868, 6795.4126, -0.56137085];

	  _this = createVehicle ["Land_datsun01T_spodok", [4944.3906, 6774.981, 6.7203979], [], 0, "CAN_COLLIDE"];
	  _this setDir -0.78257263;
	  _this setPos [4944.3906, 6774.981, 6.7203979];

	  _this = createVehicle ["Land_Ind_Timbers", [4955.3452, 6794.1851, -0.28929639], [], 0, "CAN_COLLIDE"];
	  _this setDir 40.424263;
	  _this setPos [4955.3452, 6794.1851, -0.28929639];

	  _this = createVehicle ["Land_Ind_BoardsPack2", [4953.0918, 6779.873, 1.5118103], [], 0, "CAN_COLLIDE"];
	  _this setDir 79.818047;
	  _this setPos [4953.0918, 6779.873, 1.5118103];

	  _this = createVehicle ["Land_datsun01T_spodok", [4949.7251, 6770.6904, 0.22640991], [], 0, "CAN_COLLIDE"];
	  _this setDir -0.78257263;
	  _this setPos [4949.7251, 6770.6904, 0.22640991];
	  
	  _this = createVehicle ["Land_datsun01T_spodok", [4951.4326, 6777.5942, 0.24716187], [], 0, "CAN_COLLIDE"];
	  _this setDir -0.78257263;
	  _this setPos [4951.4326, 6777.5942, 0.24716187];

	  _this = createVehicle ["Land_datsun01T_spodok", [4953.1782, 6777.6016, 0.25186157], [], 0, "CAN_COLLIDE"];
	  _this setDir -0.78257263;
	  _this setPos [4953.1782, 6777.6016, 0.25186157];

	  _this = createVehicle ["Land_datsun01T_spodok", [4958.7427, 6785.0024, 0.27322388], [], 0, "CAN_COLLIDE"];
	  _this setDir -0.78257263;
	  _this setPos [4958.7427, 6785.0024, 0.27322388];

	  _this = createVehicle ["Land_datsun01T_spodok", [4961.9839, 6786.3667, 0.27478027], [], 0, "CAN_COLLIDE"];
	  _this setDir -0.78257263;
	  _this setPos [4961.9839, 6786.3667, 0.27478027];

	  _this = createVehicle ["Land_datsun01T_spodok", [4944.8232, 6783.0635, 0.23641968], [], 0, "CAN_COLLIDE"];
	  _this setDir -0.78257263;
	  _this setPos [4944.8232, 6783.0635, 0.23641968];

	  _this = createVehicle ["Land_datsun01T_spodok", [4949.3398, 6783.7651, 0.20913696], [], 0, "CAN_COLLIDE"];
	  _this setDir -0.78257263;
	  _this setPos [4949.3398, 6783.7651, 0.20913696];

	  _this = createVehicle ["Land_datsun01T_spodok", [4961.8838, 6779.731, 0.25280762], [], 0, "CAN_COLLIDE"];
	  _this setDir -0.78257263;
	  _this setPos [4961.8838, 6779.731, 0.25280762];

	  _this = createVehicle ["Land_datsun01T_spodok", [4964.9653, 6781.5767, 0.25592041], [], 0, "CAN_COLLIDE"];
	  _this setDir -0.78257263;
	  _this setPos [4964.9653, 6781.5767, 0.25592041];
	  _ReturnVehs = _ReturnVehs + [_Land_datsun01T];
	  _ReturnVehs = _ReturnVehs + [_Land_datsun02T];
	  _ReturnVehs = _ReturnVehs + [_Land_ural_wrecked];
	};
	case "Factory": {
	  _Land_datsun01T = createVehicle ["Land_datsun01T", [13125.313, 7332.8066, -2.5749207e-005], [], 0, "CAN_COLLIDE"];
	  _Land_datsun01T setDir -81.91819;
	  _Land_datsun01T setPos [13125.313, 7332.8066, -2.5749207e-005];

	  _Land_datsun02T = createVehicle ["Land_datsun02T", [13112.317, 7345.605, -0.42684364], [], 0, "CAN_COLLIDE"];
	  _Land_datsun02T setDir -59.125622;
	  _Land_datsun02T setPos [13112.317, 7345.605, -0.42684364];

	  _this = createVehicle ["Land_hiluxT", [13108.065, 7340.9092, -0.3548584], [], 0, "CAN_COLLIDE"];
	  _this setDir -49.591003;
	  _this setPos [13108.065, 7340.9092, -0.3548584];

	  _Land_ural_wrecked = createVehicle ["Land_ural_wrecked", [13117.366, 7334.6006, 0.038385868], [], 0, "CAN_COLLIDE"];
	  _Land_ural_wrecked setDir -22.568941;
	  _Land_ural_wrecked setPos [13117.366, 7334.6006, 0.038385868];

	  _this = createVehicle ["Land_V3S_wreck", [13113.763, 7328.3135, -0.38906914], [], 0, "CAN_COLLIDE"];
	  _this setDir -17.631632;
	  _this setPos [13113.763, 7328.3135, -0.38906914];

	  _this = createVehicle ["Land_datsun01T_spodok", [13101.254, 7333.189, -0.0056948662], [], 0, "CAN_COLLIDE"];
	  _this setDir -62.664253;
	  _this setPos [13101.254, 7333.189, -0.0056948662];
	  
	  _this = createVehicle ["Land_datsun01T_spodok", [13123.316, 7328.4316, 6.8087864], [], 0, "CAN_COLLIDE"];
	  _this setDir -103.78198;
	  _this setPos [13123.316, 7328.4316, 6.8087864];

	  _this = createVehicle ["Land_Ind_Timbers", [13111.067, 7339.5405, -0.20645142], [], 0, "CAN_COLLIDE"];
	  _this setDir -50.432316;
	  _this setPos [13111.067, 7339.5405, -0.20645142];

	  _this = createVehicle ["Land_Ind_BoardsPack2", [13116.594, 7335.8086, 1.2459087], [], 0, "CAN_COLLIDE"];
	  _this setDir -23.181398;
	  _this setPos [13116.594, 7335.8086, 1.2459087];

	  _this = createVehicle ["Land_datsun01T_spodok", [13126.297, 7334.5938, 0.19301605], [], 0, "CAN_COLLIDE"];
	  _this setDir -103.78198;
	  _this setPos [13126.297, 7334.5938, 0.19301605];

	  _this = createVehicle ["Land_datsun01T_spodok", [13119.185, 7334.7075, 0.068685532], [], 0, "CAN_COLLIDE"];
	  _this setDir -103.78198;
	  _this setPos [13119.185, 7334.7075, 0.068685532];

	  _this = createVehicle ["Land_datsun01T_spodok", [13118.79, 7336.4072, 0.017674446], [], 0, "CAN_COLLIDE"];
	  _this setDir -103.78198;
	  _this setPos [13118.79, 7336.4072, 0.017674446];

	  _this = createVehicle ["Land_datsun01T_spodok", [13110.324, 7340.1597, -0.25264359], [], 0, "CAN_COLLIDE"];
	  _this setDir -103.78198;
	  _this setPos [13110.324, 7340.1597, -0.25264359];

	  _this = createVehicle ["Land_datsun01T_spodok", [13108.264, 7343.0146, -0.45090055], [], 0, "CAN_COLLIDE"];
	  _this setDir -103.78198;
	  _this setPos [13108.264, 7343.0146, -0.45090055];

	  _this = createVehicle ["Land_datsun01T_spodok", [13115.346, 7327.0356, 0.1937499], [], 0, "CAN_COLLIDE"];
	  _this setDir -103.78198;
	  _this setPos [13115.346, 7327.0356, 0.1937499];

	  _this = createVehicle ["Land_datsun01T_spodok", [13113.645, 7331.2783, 0.059969902], [], 0, "CAN_COLLIDE"];
	  _this setDir -103.78198;
	  _this setPos [13113.645, 7331.2783, 0.059969902];

	  _this = createVehicle ["Land_datsun01T_spodok", [13114.756, 7344.4048, -0.27601004], [], 0, "CAN_COLLIDE"];
	  _this setDir -103.78198;
	  _this setPos [13114.756, 7344.4048, -0.27601004];

	  _this = createVehicle ["Land_datsun01T_spodok", [13112.266, 7346.9966, -0.49265099], [], 0, "CAN_COLLIDE"];
	  _this setDir -103.78198;
	  _this setPos [13112.266, 7346.9966, -0.49265099];
	  _ReturnVehs = _ReturnVehs + [_Land_datsun01T];
	  _ReturnVehs = _ReturnVehs + [_Land_datsun02T];
	  _ReturnVehs = _ReturnVehs + [_Land_ural_wrecked];
	};
	case "Balota": {
	  _Land_datsun01T = createVehicle ["Land_datsun01T", [4573.6836, 2647.8345, 4.8160553e-005], [], 0, "CAN_COLLIDE"];
	  _Land_datsun01T setDir -16.192741;
	  _Land_datsun01T setPos [4573.6836, 2647.8345, 4.8160553e-005];
	  
	  _Land_datsun02T = createVehicle ["Land_datsun02T", [4580.0078, 2664.9373, 0.024328232], [], 0, "CAN_COLLIDE"];
	  _Land_datsun02T setDir 6.5998292;
	  _Land_datsun02T setPos [4580.0078, 2664.9373, 0.024328232];

	  _this = createVehicle ["Land_hiluxT", [4573.9829, 2666.884, 0.15901899], [], 0, "CAN_COLLIDE"];
	  _this setDir 16.134457;
	  _this setPos [4573.9829, 2666.884, 0.15901899];

	  _Land_ural_wrecked = createVehicle ["Land_ural_wrecked", [4572.0532, 2655.8132, 0.27634811], [], 0, "CAN_COLLIDE"];
	  _Land_ural_wrecked setDir 43.156509;
	  _Land_ural_wrecked setPos [4572.0532, 2655.8132, 0.27634811];

	  _this = createVehicle ["Land_V3S_wreck", [4564.8389, 2656.5156, -0.3150748], [], 0, "CAN_COLLIDE"];
	  _this setDir 48.093811;
	  _this setPos [4564.8389, 2656.5156, -0.3150748];

	  _this = createVehicle ["Land_datsun01T_spodok", [4564.1387, 2669.9226, 0.64816809], [], 0, "CAN_COLLIDE"];
	  _this setDir 3.0611951;
	  _this setPos [4564.1387, 2669.9226, 0.64816809];

	  _this = createVehicle ["Land_datsun01T_spodok", [4568.876, 2647.8528, 6.8489442], [], 0, "CAN_COLLIDE"];
	  _this setDir -38.056564;
	  _this setPos [4568.876, 2647.8528, 6.8489442];
	  
	  _this = createVehicle ["Land_Ind_Timbers", [4571.6504, 2668.7502, -0.20930642], [], 0, "CAN_COLLIDE"];
	  _this setDir 28.126545;
	  _this setPos [4571.6504, 2668.7502, -0.20930642];

	  _this = createVehicle ["Land_Ind_BoardsPack2", [4572.8379, 2657.0156, 1.496212], [], 0, "CAN_COLLIDE"];
	  _this setDir 42.54406;
	  _this setPos [4572.8379, 2657.0156, 1.496212];

	  _this = createVehicle ["Land_datsun01T_spodok", [4575.7212, 2647.6694, 0.1672473], [], 0, "CAN_COLLIDE"];
	  _this setDir -38.056564;
	  _this setPos [4575.7212, 2647.6694, 0.1672473];

	  _this = createVehicle ["Land_datsun01T_spodok", [4572.8931, 2654.1958, 0.2537241], [], 0, "CAN_COLLIDE"];
	  _this setDir -38.056564;
	  _this setPos [4572.8931, 2654.1958, 0.2537241];

	  _this = createVehicle ["Land_datsun01T_spodok", [4574.2813, 2655.2585, 0.20735836], [], 0, "CAN_COLLIDE"];
	  _this setDir -38.056564;
	  _this setPos [4574.2813, 2655.2585, 0.20735836];

	  _this = createVehicle ["Land_datsun01T_spodok", [4574.2251, 2664.5173, 0.18170547], [], 0, "CAN_COLLIDE"];
	  _this setDir -38.056564;
	  _this setPos [4574.2251, 2664.5173, 0.18170547];

	  _this = createVehicle ["Land_datsun01T_spodok", [4575.9785, 2667.5676, 0.09538126], [], 0, "CAN_COLLIDE"];
	  _this setDir -38.056564;
	  _this setPos [4575.9785, 2667.5676, 0.09538126];

	  _this = createVehicle ["Land_datsun01T_spodok", [4564.3252, 2654.5469, 0.51055336], [], 0, "CAN_COLLIDE"];
	  _this setDir -38.056564;
	  _this setPos [4564.3252, 2654.5469, 0.51055336];

	  _this = createVehicle ["Land_datsun01T_spodok", [4567.4937, 2657.8398, 0.41543102], [], 0, "CAN_COLLIDE"];
	  _this setDir -38.056564;
	  _this setPos [4567.4937, 2657.8398, 0.41543102];

	  _this = createVehicle ["Land_datsun01T_spodok", [4579.9194, 2662.2271, 0.047204018], [], 0, "CAN_COLLIDE"];
	  _this setDir -38.056564;
	  _this setPos [4579.9194, 2662.2271, 0.047204018];

	  _this = createVehicle ["Land_datsun01T_spodok", [4581.2524, 2665.5618, -0.016524792], [], 0, "CAN_COLLIDE"];
	  _this setDir -38.056564;
	  _this setPos [4581.2524, 2665.5618, -0.016524792];
	  _ReturnVehs = _ReturnVehs + [_Land_datsun01T];
	  _ReturnVehs = _ReturnVehs + [_Land_datsun02T];
	  _ReturnVehs = _ReturnVehs + [_Land_ural_wrecked];
	};
	case "West Electro": {
	  _Land_datsun01T = createVehicle ["Land_datsun01T", [9473.333, 2058.3767, -0.50403482], [], 0, "CAN_COLLIDE"];
	  _Land_datsun01T setDir -9.5522814;
	  _Land_datsun01T setPos [9473.333, 2058.3767, -0.50403482];

	  _Land_datsun02T = createVehicle ["Land_datsun02T", [9481.4814, 2074.5439, -0.06980899], [], 0, "CAN_COLLIDE"];
	  _Land_datsun02T setDir 13.471978;
	  _Land_datsun02T setPos [9481.4814, 2074.5439, -0.06980899];

	  _this = createVehicle ["Land_hiluxT", [9475.9102, 2077.2551, -0.026680237], [], 0, "CAN_COLLIDE"];
	  _this setDir 23.006594;
	  _this setPos [9475.9102, 2077.2551, -0.026680237];

	  _Land_ural_wrecked = createVehicle ["Land_ural_wrecked", [9472.6709, 2066.4961, -0.12743978], [], 0, "CAN_COLLIDE"];
	  _Land_ural_wrecked setDir 50.028664;
	  _Land_ural_wrecked setPos [9472.6709, 2066.4961, -0.12743978];

	  _this = createVehicle ["Land_V3S_wreck", [9465.5918, 2068.0535, -0.24164608], [], 0, "CAN_COLLIDE"];
	  _this setDir -1.4417892;
	  _this setPos [9465.5918, 2068.0535, -0.24164608];

	  _this = createVehicle ["Land_datsun01T_spodok", [9466.4951, 2081.4473, 1.7099091], [], 0, "CAN_COLLIDE"];
	  _this setDir 9.9333391;
	  _this setPos [9466.4951, 2081.4473, 1.7099091];

	  _this = createVehicle ["Land_datsun01T_spodok", [9468.5615, 2058.9702, 12.871499], [], 0, "CAN_COLLIDE"];
	  _this setDir -31.184412;
	  _this setPos [9468.5615, 2058.9702, 12.871499];

	  _this = createVehicle ["Land_Ind_Timbers", [9472.9082, 2081.8296, 0.61507213], [], 0, "CAN_COLLIDE"];
	  _this setDir 49.531334;
	  _this setPos [9472.9082, 2081.8296, 0.61507213];

	  _this = createVehicle ["Land_Ind_BoardsPack2", [9473.5879, 2067.5918, 0.86923343], [], 0, "CAN_COLLIDE"];
	  _this setDir 49.41621;
	  _this setPos [9473.5879, 2067.5918, 0.86923343];

	  _this = createVehicle ["Land_datsun01T_spodok", [9475.332, 2057.9688, 6.5273724], [], 0, "CAN_COLLIDE"];
	  _this setDir -31.184412;
	  _this setPos [9475.332, 2057.9688, 6.5273724];

	  _this = createVehicle ["Land_datsun01T_spodok", [9473.3105, 2064.7869, 0.24297266], [], 0, "CAN_COLLIDE"];
	  _this setDir -31.184412;
	  _this setPos [9473.3105, 2064.7869, 0.24297266];

	  _this = createVehicle ["Land_datsun01T_spodok", [9474.8164, 2065.6768, 4.8485584], [], 0, "CAN_COLLIDE"];
	  _this setDir -31.184412;
	  _this setPos [9474.8164, 2065.6768, 4.8485584];

	  _this = createVehicle ["Land_datsun01T_spodok", [9475.8691, 2074.8777, 2.7863083], [], 0, "CAN_COLLIDE"];
	  _this setDir -31.184412;
	  _this setPos [9475.8691, 2074.8777, 2.7863083];

	  _this = createVehicle ["Land_datsun01T_spodok", [9477.9756, 2077.6951, 2.1015973], [], 0, "CAN_COLLIDE"];
	  _this setDir -31.184412;
	  _this setPos [9477.9756, 2077.6951, 2.1015973];

	  _this = createVehicle ["Land_datsun01T_spodok", [9464.8447, 2066.1604, 4.8514776], [], 0, "CAN_COLLIDE"];
	  _this setDir -31.184412;
	  _this setPos [9464.8447, 2066.1604, 4.8514776];

	  _this = createVehicle ["Land_datsun01T_spodok", [9468.3848, 2069.053, -0.64712077], [], 0, "CAN_COLLIDE"];
	  _this setDir -31.184412;
	  _this setPos [9468.3848, 2069.053, -0.64712077];

	  _this = createVehicle ["Land_datsun01T_spodok", [9481.2451, 2071.9204, 3.3589096], [], 0, "CAN_COLLIDE"];
	  _this setDir -31.184412;
	  _this setPos [9481.2451, 2071.9204, 3.3589096];

	  _this = createVehicle ["Land_datsun01T_spodok", [9482.9697, 2075.0718, 2.5944896], [], 0, "CAN_COLLIDE"];
	  _this setDir -31.184412;
	  _this setPos [9482.9697, 2075.0718, 2.5944896];
	  _ReturnVehs = _ReturnVehs + [_Land_datsun01T];
	  _ReturnVehs = _ReturnVehs + [_Land_datsun02T];
	  _ReturnVehs = _ReturnVehs + [_Land_ural_wrecked];
	};
};
diag_log format ["Custom Events: selected Location = %1",_Location];
_ReturnVehs

};

    
	//Global Message part
	[] spawn {
    while {DZ_RandomEvents} do {
		if ( DZ_EventCurrentLoc != "null") then {
        {
         [_x,format["The Convoy Was Last ¯\_( ° _°)_/¯ Spotted Near %1 get there quick!",DZ_EventCurrentLoc],"colorAction"] call fnc_playerMessage;
         [(owner _x),DZ_EventCurrentLoc] spawnForClient { _SpawnPoint = _this select 1; titleText [format["The Convoy Was Last ¯\_( ° _°)_/¯ Spotted Near %1 get there quick!",_SpawnPoint],"PLAIN DOWN",10]; };
        }forEach players;
		};
        sleep 1800;
      };
    };

    [] spawn {
    while {DZ_RandomEvents} do {
      { [(getPosASL _x),(vehicle _x)] call Custom_effect_createWreckSmoke; }forEach DZ_WrecksUpdate;
      sleep 3;
    };
    };