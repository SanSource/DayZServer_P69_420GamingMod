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

_Trees = 20;

//spawn points array
_PointsArray = [
[10470,2375.7,0.00144339],
[6820.37,2520.04,0.00143862],
[4402.44,2538.48,0.00139523],
[1715.3,3829.96,0.0014801],
[12832.4,10113,0.00143909],
[12007.7,9079.68,0.00143814],
[9487.34,8838.67,0.00143433],
[7039.11,7703.62,0.00143433],
[6059.92,7809.79,0.00143433],
[3799.92,8846.76,0.00146484],
[2718.86,10033.3,0.00140381],
[1497.41,11956.2,0.0015564],
[3633.04,13052.1,0.00138855],
[8171.16,12748.2,1.83403],
[11578.4,14721.3,0.00143814],
[11620.5,14660.7,0.00143814],
[13933.5,13228.4,0.00143623],
[2796.37,5291.59,0.00143433],
[3074.67,7949.53,0.00146484],
[4456.64,6421.02,0.00146484]
];

_SmallItems = [
["Ammo_9mm"],
["Ammo_9x39"],
["Ammo_22"],
["Ammo_12ga_Slug"],
["Ammo_308Win"],
["Ammo_357"],
["Ammo_380"],
["Ammo_45FMJ"],
["Ammo_545"],
["Ammo_556"],
["Ammo_762"],
["Ammo_762x39"],
["AmmoBox_9mm_25rnd"],
["AmmoBox_9x39_20Rnd"],
["AmmoBox_22_50Rnd"],
["AmmoBox_00buck_10rnd"],
["AmmoBox_308Win_20Rnd"],
["AmmoBox_357_20Rnd"],
["AmmoBox_380_35rnd"],
["AmmoBox_45acp_25rnd"],
["AmmoBox_545_20Rnd"],
["AmmoBox_556_20Rnd"],
["AmmoBox_762_20Rnd"],
["AmmoBox_762x39_20Rnd"],
["Att_Suppressor_M4"],
["Att_Suppressor_AK"],
["SantasHat"],
["SantasBeard"],
["Fruit_Cannabis"],
["Fruit_Cannabis"],
["Fruit_Cannabis"],
["Fruit_Cannabis"],
["Fruit_Cannabis"],
["M_ShockCartridge"],
["M_ShockCartridge"],
["M_ShockCartridge"],
["M_ShockCartridge"]
];

_MediumItems = [
["M_Vss_10Rnd"],
["M_Fal_20Rnd"],
["M_UMP_25Rnd"],
["M_svd_10Rnd"],
["Fruit_Cannabis"],
["Fruit_Cannabis"],
["Fruit_Cannabis"],
["M_ShockCartridge"],
["M_ShockCartridge"],
["M_ShockCartridge"]
];

_LargeItems = [
["SmershVest"],
["PlateCarrierHolster"],
["BDUpants_Woodland"],
["USMC_Pants_Desert"],
["USMC_Pants_Woodland"],
["TTsKO_Jacket_Camo"],
["ttsko_pants_Beige"],
["Fruit_Cannabis"],
["Fruit_Cannabis"],
["Fruit_Cannabis"],
["Fruit_Cannabis"],
["Fruit_Cannabis"],
["Shockpistol"],
["Shockpistol_black"]
];

_GiftBoxes = [
["Container_GiftBox_Small_1"],
["Container_GiftBox_Small_2"],
["Container_GiftBox_Small_3"],
["Container_GiftBox_Small_4"],
["Container_GiftBox_Medium_1"],
["Container_GiftBox_Medium_2"],
["Container_GiftBox_Medium_3"],
["Container_GiftBox_Medium_4"],
["Container_GiftBox_Large_1"],
["Container_GiftBox_Large_2"],
["Container_GiftBox_Large_3"],
["Container_GiftBox_Large_4"]
];

_fnc_SpawnTrees = 
{
        for "_ii" from 0 to _Trees do
        {
           _SpawnPoint = _PointsArray select floor(random(count _PointsArray));
           _boxType = "";
           _Randomitem = "";
           _Tree = createvehicle ["Land_ChristmasTree", _SpawnPoint, [], 0, "CAN_COLLIDE"];
           _Radius = floor (random 25 min 2);
           _LootAmt = floor random 15 min 5;
           for "_cc" from 0 to _LootAmt do {
            _randomBox = (_GiftBoxes select floor(random(count _GiftBoxes))) select 0;
            _GiftBox = createvehicle [_randomBox, _SpawnPoint, [], (floor (random 5 min 2)), "CAN_COLLIDE"];
             for "_ll" from 0 to (floor(random 10)) do {

                if ( _randomBox == "Container_GiftBox_Small_1" or 
                     _randomBox == "Container_GiftBox_Small_2" or 
                     _randomBox == "Container_GiftBox_Small_3" or 
                     _randomBox == "Container_GiftBox_Small_4" ) then {
                     _boxType = "Small";
                    };
                if ( _randomBox == "Container_GiftBox_Medium_1" or 
                     _randomBox == "Container_GiftBox_Medium_2" or 
                     _randomBox == "Container_GiftBox_Medium_3" or 
                     _randomBox == "Container_GiftBox_Medium_4" ) then {
                     _boxType = "Medium";
                    };
                if ( _randomBox == "Container_GiftBox_Large_1" or 
                     _randomBox == "Container_GiftBox_Large_2" or 
                     _randomBox == "Container_GiftBox_Large_3" or 
                     _randomBox == "Container_GiftBox_Large_4" ) then {
                     _boxType = "Large";
                    };

                switch (_boxType) do {
                    case "Small" :  { _Randomitem = (_SmallItems select floor(random(count _SmallItems))) select 0;  }; 
                    case "Medium" : { _Randomitem = (_MediumItems select floor(random(count _MediumItems))) select 0;  };
                    case "Large" :  { _Randomitem = (_LargeItems select floor(random(count _LargeItems))) select 0;  };
                };

                _GiftBox createInInventory _Randomitem;
             };
           };
        };
};

if (_Trees > 0) then
{
    call _fnc_SpawnTrees;
};