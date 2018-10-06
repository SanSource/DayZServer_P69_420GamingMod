"DZM_AdvancedLoads" addPublicVariableEventHandler
{
	private["_agent","_itemsSelected"];
	_array = _this select 1;
	_agent = _array select 0;
	_itemsSelected = [];
	_itemsSelected = _agent getVariable ["vipArrayLD",[]];
	diag_log format ["VIP-Player [%2] Spawned Custom Made Loadout || Array: %1",_itemsSelected,(getPlayerUID _agent)];

	//check for dupes
	_tempArray = [];
	for "_ii" from 0 to (count _itemsSelected) do {
		_slot = _itemsSelected select _ii;
		if !( _slot in _tempArray ) then {
			_tempArray = _tempArray + [_slot];
		};
	};
	diag_log format ["New Temp Array: %1",_tempArray]; // Clear off dupes

	for "_cc" from 0 to (count _tempArray) do {
		_item = _tempArray select _cc;
		switch (_item) do { 
			case "AugSteyr" : {
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
				_itemEntity = createVehicle ['AugSteyr', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ["m_stanag_30rnd_coupled","Att_Suppressor_M4"]; 
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_Amm0Box = _agent createInInventory "Container_AmmoBox300Rnd";
				_attAmmo = ['m_stanag_30rnd_coupled','Ammo_556','Ammo_556','Ammo_556']; 
				{ _Amm0Box createInInventory _x; } forEach _attAmmo;
		    }; 
			case "M4A1" : {
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
				_itemEntity = createVehicle ['M4A1', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['att_bipod_atlas','Att_Ghillie_Woodland','att_buttstock_m4cqb_black','att_handguard_m4ris_black','att_optic_acog','m_stanag_30rnd_coupled','Att_Suppressor_M4']; 
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_Amm0Box = _agent createInInventory "Container_AmmoBox300Rnd";
				_attAmmo = ['m_stanag_30rnd_coupled','Ammo_556','Ammo_556','Ammo_556']; 
				{ _Amm0Box createInInventory _x; } forEach _attAmmo;
		    };
			case "AK101" : {
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
				_itemEntity = createVehicle ['AK101', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['Att_Handguard_AK_Rail_Black','att_bipod_atlas','Att_Ghillie_Woodland','Att_Optic_PSO1','Att_Buttstock_AK_Wood_Camo','Att_Suppressor_AK','M_ak101_30Rnd']; 
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_Amm0Box = _agent createInInventory "Container_AmmoBox300Rnd";
				_attAmmo = ['M_ak101_30Rnd','Ammo_556','Ammo_556','Ammo_556']; 
				{ _Amm0Box createInInventory _x; } forEach _attAmmo;
		    };
			case "AK74" : {
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
				_itemEntity = createVehicle ['AK74', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['Att_Handguard_AK_Rail_Black','att_bipod_atlas','Att_Ghillie_Woodland','Att_Optic_PSO1','Att_Buttstock_AK_Wood_Camo','Att_Suppressor_AK','M_ak74_30Rnd']; 
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_Amm0Box = _agent createInInventory "Container_AmmoBox300Rnd";
				_attAmmo = ['M_ak74_30Rnd','Ammo_545','Ammo_545','Ammo_545']; 
				{ _Amm0Box createInInventory _x; } forEach _attAmmo;
	        };
			case "AKM" : {
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
				_itemEntity = createVehicle ['AKM', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['Att_Handguard_AK_Rail_Black','att_bipod_atlas','Att_Ghillie_Woodland','Att_Optic_PSO1','Att_Buttstock_AK_Wood_Camo','Att_Suppressor_AK','M_akm_30Rnd']; 
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_Amm0Box = _agent createInInventory "Container_AmmoBox300Rnd";
				_attAmmo = ['M_akm_30Rnd','Ammo_762x39','Ammo_762x39','Ammo_762x39']; 
				{ _Amm0Box createInInventory _x; } forEach _attAmmo;
		    };
			case "B95" : { 
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
				_itemEntity = createVehicle ['B95', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['Att_Optic_Hunting','Att_Ghillie_Woodland']; 
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_Amm0Box = _agent createInInventory "Container_AmmoBox300Rnd";
				_attAmmo = ['Ammo_308Win','Ammo_308Win','Ammo_308Win','Ammo_308Win']; 
				{ _Amm0Box createInInventory _x; } forEach _attAmmo;
		    };
			case "CZ527" : {
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
				_itemEntity = createVehicle ['CZ527', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['Att_Optic_Hunting','Att_Ghillie_Woodland','M_cz527_5rnd'];
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_Amm0Box = _agent createInInventory "Container_AmmoBox300Rnd";
				_attAmmo = ['M_cz527_5rnd','Ammo_762x39','Ammo_762x39','Ammo_762x39']; 
				{ _Amm0Box createInInventory _x; } forEach _attAmmo;
		    };
			case "FAL" : {
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
				_itemEntity = createVehicle ['FAL', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['Att_Ghillie_Woodland','Att_Buttstock_FalOe','att_optic_acog','M_Fal_20Rnd'];
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_Amm0Box = _agent createInInventory "Container_AmmoBox300Rnd";
				_attAmmo = ['M_Fal_20Rnd','Ammo_308Win','Ammo_308Win','Ammo_308Win']; 
				{ _Amm0Box createInInventory _x; } forEach _attAmmo;
		    };
			case "Mosin9130" : {
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
				_itemEntity = createVehicle ['Mosin9130', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['Att_Optic_PUScope','Att_Ghillie_Woodland','Att_Compensator_Mosin'];
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_Amm0Box = _agent createInInventory "Container_AmmoBox300Rnd";
				_attAmmo = ['Ammo_762_tracer','Ammo_762_tracer','Ammo_762_tracer','Ammo_762_tracer']; 
				{ _Amm0Box createInInventory _x; } forEach _attAmmo;
		    };
			case "Scout" : {
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
				_itemEntity = createVehicle ['Scout', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['Att_Optic_Hunting','Att_Ghillie_Woodland','M_Scout_5Rnd'];
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_Amm0Box = _agent createInInventory "Container_AmmoBox300Rnd";
				_attAmmo = ['M_Scout_5Rnd','Ammo_308Win','Ammo_308Win','Ammo_308Win']; 
				{ _Amm0Box createInInventory _x; } forEach _attAmmo;
		    };
			case "SKS" : {
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
				_itemEntity = createVehicle ['SKS', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['Att_Optic_PUScope','Att_Ghillie_Woodland'];
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_Amm0Box = _agent createInInventory "Container_AmmoBox300Rnd";
				_attAmmo = ['Ammo_762x39','Ammo_762x39','Ammo_762x39','Ammo_762x39']; 
				{ _Amm0Box createInInventory _x; } forEach _attAmmo;
		    };
			case "SVD" : {
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
				_itemEntity = createVehicle ['SVD', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['Att_Optic_PSO1','Att_Ghillie_Woodland','M_SVD_10Rnd'];
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_Amm0Box = _agent createInInventory "Container_AmmoBox300Rnd";
				_attAmmo = ['M_SVD_10Rnd','Ammo_762_tracer','Ammo_762_tracer','Ammo_762_tracer']; 
				{ _Amm0Box createInInventory _x; } forEach _attAmmo;
		    };
			case "VSS" : {
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
				_itemEntity = createVehicle ['VSS', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['Att_Optic_PSO1','Att_Ghillie_Woodland','M_VSS_10Rnd'];
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_Amm0Box = _agent createInInventory "Container_AmmoBox300Rnd";
				_attAmmo = ['M_VSS_10Rnd','Ammo_9x39','Ammo_9x39','Ammo_9x39']; 
				{ _Amm0Box createInInventory _x; } forEach _attAmmo;
		    };
			case "Winchester70" : {
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
				_itemEntity = createVehicle ['Winchester70', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['Att_Optic_Hunting','Att_Ghillie_Woodland'];
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_Amm0Box = _agent createInInventory "Container_AmmoBox300Rnd";
				_attAmmo = ['Ammo_308Win','Ammo_308Win','Ammo_308Win','Ammo_308Win']; 
				{ _Amm0Box createInInventory _x; } forEach _attAmmo;
		    };
		    case "1911_Engraved" : {
		    	_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
				_itemEntity = createVehicle ['1911_Engraved', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['M_1911_7Rnd','Att_Suppressor_Pistol','Att_Light_TLR'];
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_attAmmo = ['Ammo_45FMJ','Ammo_45FMJ','Ammo_45FMJ','M_1911_7Rnd']; 
				{ _agent createInInventory _x; } forEach _attAmmo;
			};
			case "DE_Gold" : {
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
				_itemEntity = createVehicle ['DE_Gold', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['M_DE_9rnd'];
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_attAmmo = ['Ammo_357','Ammo_357','Ammo_357','M_DE_9rnd']; 
				{ _agent createInInventory _x; } forEach _attAmmo;
			};
			case "FNX45" : {
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
				_itemEntity = createVehicle ['FNX45', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['M_FNX45_15Rnd','Att_Suppressor_Pistol','Att_Light_TLR'];
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_attAmmo = ['Ammo_45FMJ','Ammo_45FMJ','Ammo_45FMJ','M_FNX45_15Rnd']; 
				{ _agent createInInventory _x; } forEach _attAmmo;
			};
			case "Glock19" : {
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
				_itemEntity = createVehicle ['Glock19', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['M_Glock_15Rnd','Att_Suppressor_Pistol','Att_Light_TLR'];
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_attAmmo = ['Ammo_9mm','Ammo_9mm','Ammo_9mm','M_Glock_15Rnd']; 
				{ _agent createInInventory _x; } forEach _attAmmo;
			};
			case "Magnum" : {
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
				_itemEntity = createVehicle ['Magnum', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['M_357_Speedloader'];
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_attAmmo = ['Ammo_357','Ammo_357','Ammo_357','M_357_Speedloader']; 
				{ _agent createInInventory _x; } forEach _attAmmo;
			};
			case "Red9" : {
			    _pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
			 	_itemEntity = createVehicle ['Red9', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['M_357_Speedloader'];
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_attAmmo = ['Ammo_9mm','Ammo_9mm','Ammo_9mm','Ammo_9mm']; 
				{ _agent createInInventory _x; } forEach _attAmmo;
			};
			case "CZ61" : {
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
			 	_itemEntity = createVehicle ['CZ61', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['M_CZ61_20Rnd','Att_Suppressor_AK'];
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_attAmmo = ['M_CZ61_20Rnd','Ammo_380','Ammo_380','Ammo_380']; 
				{ _agent createInInventory _x; } forEach _attAmmo;
			};
			case "MP5K" : {
				_pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
			 	_itemEntity = createVehicle ['MP5K', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['M_MP5_30Rnd','Att_Suppressor_Pistol','att_optic_acog','Att_Buttstock_MP5_Stock','Att_Handguard_MP5_Rail','Att_Light_Universal'];
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_attAmmo = ['M_MP5_30Rnd','Ammo_9mm','Ammo_9mm','Ammo_9mm']; 
				{ _agent createInInventory _x; } forEach _attAmmo;
			};
			case "UMP45" : {
			    _pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
			 	_itemEntity = createVehicle ['UMP45', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['M_UMP_25Rnd','Att_Suppressor_Pistol','att_optic_acog','Att_Ghillie_Woodland'];
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_attAmmo = ['M_UMP_25Rnd','Ammo_45FMJ','Ammo_45FMJ','Ammo_45FMJ']; 
				{ _agent createInInventory _x; } forEach _attAmmo;
			};
			case "AKS74U" : {
			    _pos = [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1];
			 	_itemEntity = createVehicle ['AKS74U', _pos, [], 0, 'CAN_COLLIDE'];
				sleep 1;
				_attGunArr = ['M_AK74_30Rnd','Att_Suppressor_AK','Att_Ghillie_Woodland'];
				{_itemEntity createInInventory _x;} forEach _attGunArr;
				sleep 1;
				_agent moveToInventory _itemEntity;

				_attAmmo = ['M_AK74_30Rnd','Ammo_545','Ammo_545','Ammo_545']; 
				{ _agent createInInventory _x; } forEach _attAmmo;
			};

			case "Phat_Phuck" : {
			   _foodArr = ['drink_canteen','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon','Food_Rice'];
				{
				    _Tomove = createVehicle [_x, [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1], [], 0, 'CAN_COLLIDE'];
					_agent moveToInventory _Tomove;
					_maxQuantity = maxQuantity _Tomove;
					if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
				} forEach _foodArr;
			};

			case "Vegan_Pack" : {
			   _foodArr = ['drink_canteen','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon','Food_Rice'];
				{
				    _Tomove = createVehicle [_x, [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1], [], 0, 'CAN_COLLIDE'];
					_agent moveToInventory _Tomove;
					_maxQuantity = maxQuantity _Tomove;
					if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
				} forEach _foodArr;
			};

			case "Fishy_Female" : {
			   _foodArr = ['drink_canteen','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon','Food_Rice'];
				{
				    _Tomove = createVehicle [_x, [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1], [], 0, 'CAN_COLLIDE'];
					_agent moveToInventory _Tomove;
					_maxQuantity = maxQuantity _Tomove;
					if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
				} forEach _foodArr;
			};

			case "Rice_Picker" : {
			   _foodArr = ['drink_canteen','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon','Food_Rice'];
				{
				    _Tomove = createVehicle [_x, [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1], [], 0, 'CAN_COLLIDE'];
					_agent moveToInventory _Tomove;
					_maxQuantity = maxQuantity _Tomove;
					if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
				} forEach _foodArr;
			};

			case "Apple_Glitcher" : {
			   _foodArr = ['drink_canteen','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon','Food_Rice'];
				{
				    _Tomove = createVehicle [_x, [(getpos _agent select 0),(getpos _agent select 1),(getpos _agent select 2) + 1], [], 0, 'CAN_COLLIDE'];
					_agent moveToInventory _Tomove;
					_maxQuantity = maxQuantity _Tomove;
					if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
				} forEach _foodArr;
			};

			case "Basic_Medical_Tools" : {
			    _MedKit = _agent createInInventory "Container_FirstAidKit";
				_attMedkit = ['Medical_BandageDressing','Consumable_Rags','Medical_Morphine','Medical_TransfusionKit']; 
				{ 
					_ItemINKIT = _MedKit createInInventory _x; 
					_maxQuantity = maxQuantity _ItemINKIT;
					if (_maxQuantity > 0) then { _ItemINKIT setvariable ['quantity',_maxQuantity]; };  
				} forEach _attMedkit;
			};

			case "Noobie_Medical_Tools" : {
			    _MedKit = _agent createInInventory "Container_FirstAidKit";
				_attMedkit = ['Medical_BandageDressing','Consumable_Rags','Medical_Morphine','Medical_TransfusionKit']; 
				{ 
					_ItemINKIT = _MedKit createInInventory _x; 
					_maxQuantity = maxQuantity _ItemINKIT;
					if (_maxQuantity > 0) then { _ItemINKIT setvariable ['quantity',_maxQuantity]; };  
				} forEach _attMedkit;
			};

			case "Veteran_Medical_Tools" : {
			    _MedKit = _agent createInInventory "Container_FirstAidKit";
				_attMedkit = ['Medical_BandageDressing','Consumable_Rags','Medical_Morphine','Medical_TransfusionKit']; 
				{ 
					_ItemINKIT = _MedKit createInInventory _x; 
					_maxQuantity = maxQuantity _ItemINKIT;
					if (_maxQuantity > 0) then { _ItemINKIT setvariable ['quantity',_maxQuantity]; };  
				} forEach _attMedkit;
			};

			default  { _agent createInInventory _item; };
		};
	};
	_tempArray = []; // Clear Arrays
	_agent setVariable ["vipArrayLD",[]]; // Clear Arrays
};