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
//Helicarsh U.S.A!
//num of helis. 15 zeds each heli , 15 loot pieces
_Heli = 4;
diag_log format ["Spawn Heli arrays %1",_Heli];
diag_log "all code is owned by 420 gaming and it's team";

//spawn points array
_HeliPointsArray = [
    [4523,10254],[4523,10257],[4523,10259],[4523,10260]
    ];

_arrayItemsHeli= [

["AKM"],
["M4A1"],
["Ammo_556_20Rnd"],
["Ammo_357_20Rnd"],
["CLIP_762_5Rnd"],
["M_CMAG_10Rnd"],
["clip_762x39_10rnd"],
["Optics_Binoculars"],
["M_STANAG_30Rnd_COUPLED"],
["M65_Jacket_Black"],
["CargoPants_Black"],
["BagHunting"],
["WorkingGloves_Black"],
["BallisticHelmet_Black"],
["rocketaviators"],
["BalaclavaMask_Blackskull"],
["HighCapacityVest_Black"],
["m65_jacket_olive"],
["m65_jacket_black"],
["m65_jacket_kahki"],
["cargopants_green"],
["workinggloves_brown"],
["BallisticHelmet_Green"],
["BalaclavaMask_greenpattern"],
["SmershVestBackpack"],
["BagTortilla"],
["GorkaHelmet_complete_Green"],
["GorkaHelmet_complete_Black"],
["PlateCarrierComplete"],
["M_ak101_30Rnd"],
["M_Saiga_5Rnd"],
["M_ak74_30Rnd"],
["M_Vss_10Rnd"],
["M_svd_10Rnd"],
["M_Fal_20Rnd"],
["AK101"],
["Att_Suppressor_AK"],
["Att_Optic_PSO1"],
["Att_Handguard_AK74_Camo"],
["Att_Buttstock_AK_Wood_Camo"],
["att_bayonet_ak"],
["ammobox_556_20rnd"],
["AmmoBox_9x39_20Rnd"],
["AmmoBox_308Win_20Rnd"],
["FAL"],
["AmmoBox_762_20Rnd"],
["SVD"],
["fnx45"],
["m_cz75_15rnd"],
["Att_Suppressor_Pistol"],
["1911_engraved"],
["Att_Optic_FNP45_MRD"],
["m_fnx45_15rnd"],
["Glock19"],
["M_Glock_15Rnd"],
["Att_Optic_Reflex"],
["Att_Optic_ACOG"],
["Att_Optic_M4T3NRDS"],
["Att_Handguard_MP5_Rail"],
["Att_Buttstock_MP5_Stock"],
["Fruit_cannabis"]


];


_arrayZom= [
        ["ZmbM_PatrolNormal_PautRev"],
        ["ZmbM_PatrolNormal_Autumn"],
        ["ZmbM_PatrolNormal_Flat"],
        ["ZmbM_PatrolNormal_Summer"],
        ["ZmbM_SoldierNormal"]
];

fnc_spawnHeli = 
    {
        for "ii" from 1 to _Heli do
        {
            _thisHeli = _HeliPointsArray select floor(random(count _HeliPointsArray));
            _vehicle = createvehicle ["Land_UH1Y_Wreck", _thisHeli, [], 0, "CAN_COLLIDE"];
            _vehicle setDir floor(random 360);
            _originalPos = getPosATL _vehicle;
            _Damage = random 0.7;
			_radius = random 25;
            _loot = createvehicle [(_arrayItemsHeli select floor(random(count _arrayItemsHeli))) select 0, _originalPos, [], 5, "CAN_COLLIDE"];
            _loot = createvehicle [(_arrayItemsHeli select floor(random(count _arrayItemsHeli))) select 0, _originalPos, [], 5, "CAN_COLLIDE"] setDamage _Damage;
            _loot = createvehicle [(_arrayItemsHeli select floor(random(count _arrayItemsHeli))) select 0, _originalPos, [], 5, "CAN_COLLIDE"] setDamage _Damage;
            _loot = createvehicle [(_arrayItemsHeli select floor(random(count _arrayItemsHeli))) select 0, _originalPos, [], 5, "CAN_COLLIDE"];
            _loot = createvehicle [(_arrayItemsHeli select floor(random(count _arrayItemsHeli))) select 0, _originalPos, [], 5, "CAN_COLLIDE"] setDamage _Damage; 
            _loot = createvehicle [(_arrayItemsHeli select floor(random(count _arrayItemsHeli))) select 0, _originalPos, [], 5, "CAN_COLLIDE"] setDamage _Damage;
            _loot = createvehicle [(_arrayItemsHeli select floor(random(count _arrayItemsHeli))) select 0, _originalPos, [], 5, "CAN_COLLIDE"] setDamage _Damage;
            _loot = createvehicle [(_arrayItemsHeli select floor(random(count _arrayItemsHeli))) select 0, _originalPos, [], 5, "CAN_COLLIDE"] setDamage _Damage;
            _loot = createvehicle [(_arrayItemsHeli select floor(random(count _arrayItemsHeli))) select 0, _originalPos, [], 5, "CAN_COLLIDE"];
            _loot = createvehicle [(_arrayItemsHeli select floor(random(count _arrayItemsHeli))) select 0, _originalPos, [], 5, "CAN_COLLIDE"] setDamage _Damage;
            _loot = createvehicle [(_arrayItemsHeli select floor(random(count _arrayItemsHeli))) select 0, _originalPos, [], 5, "CAN_COLLIDE"];
            _loot = createvehicle [(_arrayItemsHeli select floor(random(count _arrayItemsHeli))) select 0, _originalPos, [], 5, "CAN_COLLIDE"] setDamage _Damage;
            _loot = createvehicle [(_arrayItemsHeli select floor(random(count _arrayItemsHeli))) select 0, _originalPos, [], 5, "CAN_COLLIDE"] setDamage _Damage;
            _loot = createvehicle [(_arrayItemsHeli select floor(random(count _arrayItemsHeli))) select 0, _originalPos, [], 5, "CAN_COLLIDE"];
            _loot = createvehicle [(_arrayItemsHeli select floor(random(count _arrayItemsHeli))) select 0, _originalPos, [], 5, "CAN_COLLIDE"] setDamage _Damage;
			_Zomb = createAgent [(_arrayZom select floor(random(count _arrayZom))) select 0, _originalPos, [], _radius, "CAN_COLLIDE"];
            _Zomb = createAgent [(_arrayZom select floor(random(count _arrayZom))) select 0, _originalPos, [], _radius, "CAN_COLLIDE"];
            _Zomb = createAgent [(_arrayZom select floor(random(count _arrayZom))) select 0, _originalPos, [], _radius, "CAN_COLLIDE"];
            _Zomb = createAgent [(_arrayZom select floor(random(count _arrayZom))) select 0, _originalPos, [], _radius, "CAN_COLLIDE"];
            _Zomb = createAgent [(_arrayZom select floor(random(count _arrayZom))) select 0, _originalPos, [], _radius, "CAN_COLLIDE"];
            _Zomb = createAgent [(_arrayZom select floor(random(count _arrayZom))) select 0, _originalPos, [], _radius, "CAN_COLLIDE"];
            _Zomb = createAgent [(_arrayZom select floor(random(count _arrayZom))) select 0, _originalPos, [], _radius, "CAN_COLLIDE"];
            _Zomb = createAgent [(_arrayZom select floor(random(count _arrayZom))) select 0, _originalPos, [], _radius, "CAN_COLLIDE"];
            _Zomb setDir floor(random 360);
            
            diag_log format ["Spawn Heli arrays %1",_this];
        };
    };

if (_Heli > 0) then
{
    call fnc_spawnHeli;
};

//sleep 14000;
//[] execVM "Scripts\Heli_wipe.sqf";