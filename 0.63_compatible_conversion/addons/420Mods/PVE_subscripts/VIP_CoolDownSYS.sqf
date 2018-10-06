_ArryCharTxt = "";
_ArryCharTxt = callFunction ["VIPCooldownArr"];
DZ_Cool_Down_Array = [];
DZ_Cool_Down_Array = call compile (_ArryCharTxt);
//diag_log format ["SAVE SYS: CoolDown_Array Dump: %1",DZ_Cool_Down_Array];

DZ_VIP_Cool_Down = 
{
		_task = _this select 0;
		_UID = _this select 1;
		_ID = _this select 2;
		_CL_Limit = _this select 3;

		if ( _task == "ADD" ) then {
			DZ_Cool_Down_Array = DZ_Cool_Down_Array + [[_UID,_CL_Limit]];
			callFunction ["CLArrayUpdate",_UID,_CL_Limit];
			//diag_log format ["CoolDown_Array Dump: %1",DZ_Cool_Down_Array];
		};

		if ( _task == "REMOVE" ) then {

			for "_ff" from 0 to (count DZ_Cool_Down_Array) do {

				_sector = DZ_Cool_Down_Array select _ff;
	   			_rec_UID = _sector select 0;
	   			_rec_TIME = _sector select 1;
	   			if ( _rec_UID == _UID ) then {
	   				callFunction ["UpdateVIPCLList",_rec_UID,_rec_TIME];
	   				sleep 1;
					DZ_Cool_Down_Array set [_ff,objNull];
					DZ_Cool_Down_Array = DZ_Cool_Down_Array - [objNull];
	   				//diag_log format ["Player %1 Removed from CoolDown Reason: Time expired",_rec_UID];
	   				//diag_log format ["CoolDownArray Dump: %1",DZ_Cool_Down_Array];
	   			};
			};
		};
};

DZ_CheckCoolDown = {
_UID = _this select 0;
_task = _this select 1;
_CL_bool = false;
_time_remain = 0;

	if ( _task == "CHECK" ) then {
	for "_s" from 0 to (count DZ_Cool_Down_Array) do {
			_sector = DZ_Cool_Down_Array select _s;
	   		_rec_UID = _sector select 0;
	   		if ( _rec_UID == _UID ) then {
	   		_CL_bool = true;
	   	};
	};
	_CL_bool
    };

    if ( _task == "RET" ) then {
    	for "_s" from 0 to (count DZ_Cool_Down_Array) do {
			_sector = DZ_Cool_Down_Array select _s;
	   		_rec_UID = _sector select 0;
	   		if ( _rec_UID == _UID ) then {
	   			_time_remain = _sector select 1;
	   	};
	};
	_time_remain;
    };
};