DZM_PerkSystem = 
{
private ["_playerUID","_task"];
_task = _this select 0;
_playerUID = _this select 1;

switch (_task) do {
	case "PRK_1": {

	{
		if ( (_x getVariable ['GU_ID',0]) == _playerUID ) then {
			_Pveh = (vehicle _x);
			for "_ii" from 0 to 3 do {
				_Object = createVehicle ["WindscreenBox", [(getpos _x select 0),(getpos _x select 1),(getpos _x select 2) + 0.5], [], 0, "CAN_COLLIDE"];
				_Object setVariable ["modifiers","basebuildkit"];
				_Pveh moveToInventory _Object;
			};
			_Wallet = createVehicle ["Tool_MessTin", [(getpos _x select 0),(getpos _x select 1),(getpos _x select 2) + 0.5], [], 0, "CAN_COLLIDE"];
			_Wallet setVariable ["note",10000];
			_Pveh moveToInventory _Wallet;
			//Medium tent
			_TentObj = createVehicle ["TentMedium_Packed", [(getpos _x select 0),(getpos _x select 1),(getpos _x select 2) + 0.5], [], 0, "CAN_COLLIDE"];
			diag_log format ["This nigger: %1 activated shit. PERK1",_Pveh];
		};
	}forEach players;

	}; 
	case "PRK_2": {

	{
		if ( (_x getVariable ['GU_ID',0]) == _playerUID ) then {
			_Pveh = (vehicle _x);
			for "_ii" from 0 to 6 do {
				_Object = createVehicle ["WindscreenBox", [(getpos _x select 0),(getpos _x select 1),(getpos _x select 2) + 0.5], [], 0, "CAN_COLLIDE"];
				_Object setVariable ["modifiers","basebuildkit"];
				_Pveh moveToInventory _Object;
			};
			_Wallet = createVehicle ["Tool_MessTin", [(getpos _x select 0),(getpos _x select 1),(getpos _x select 2) + 0.5], [], 0, "CAN_COLLIDE"];
			_Wallet setVariable ["note",35000];
			_Pveh moveToInventory _Wallet;
			//Medium tent
			_TentObj = createVehicle ["TentMedium_Packed", [(getpos _x select 0),(getpos _x select 1),(getpos _x select 2) + 0.5], [], 0, "CAN_COLLIDE"];
			//Large tent
			_TentObj = createVehicle ["TentLarge_Backpack", [(getpos _x select 0),(getpos _x select 1),(getpos _x select 2) + 0.5], [], 0, "CAN_COLLIDE"];
			diag_log format ["This nigger: %1 activated shit. PERK2",_Pveh];
		};
	}forEach players;

	};  
	case "PRK_3": {

	{
		if ( (_x getVariable ['GU_ID',0]) == _playerUID ) then {
			_Pveh = (vehicle _x);
			for "_ii" from 0 to 9 do {
				_Object = createVehicle ["WindscreenBox", [(getpos _x select 0),(getpos _x select 1),(getpos _x select 2) + 0.5], [], 0, "CAN_COLLIDE"];
				_Object setVariable ["modifiers","basebuildkit"];
				_Pveh moveToInventory _Object;
			};
			_Wallet = createVehicle ["Tool_MessTin", [(getpos _x select 0),(getpos _x select 1),(getpos _x select 2) + 1], [], 0, "CAN_COLLIDE"];
			_Wallet setVariable ["note",75000];
			_Pveh moveToInventory _Wallet;
			//Medium tent
			_TentObj = createVehicle ["TentMedium_Packed", [(getpos _x select 0),(getpos _x select 1),(getpos _x select 2) + 0.5], [], 0, "CAN_COLLIDE"];
			//Large tent
			_TentObj = createVehicle ["TentLarge_Backpack", [(getpos _x select 0),(getpos _x select 1),(getpos _x select 2) + 0.5], [], 0, "CAN_COLLIDE"];
			//Car tent
			_TentObj = createVehicle ["TentCar_Packed", [(getpos _x select 0),(getpos _x select 1),(getpos _x select 2) + 0.5], [], 0, "CAN_COLLIDE"];
			diag_log format ["This nigger: %1 activated shit. PERK3",_Pveh];
		};
	}forEach players;

	};  
};

};