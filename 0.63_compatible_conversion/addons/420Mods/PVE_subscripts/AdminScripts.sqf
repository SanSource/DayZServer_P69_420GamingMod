DZM_SQFCommands = 
{
	private["_AdminUID","_TargetUID","_Command"];
_AdminUID = _this select 0;
_TargetUID = _this select 1;
_Command = _this select 2;

switch (_Command) do { 
	case "/sp_2": {
		[_AdminUID,_TargetUID] spawn {
			_cmdtype2 = _this select 0; //Admin UID
			_cmdtype3 = _this select 1; //Target UID

			for [{_i=0}, {_i < 60}, {_i=_i+1}] do {
			{
				if ( (_x getVariable ['GU_ID',0]) == _cmdtype3) then { 

					if (lifeState _x == "ALIVE") then { 
						targetPOS = getpos _x; 
						SpecVeh = (vehicle _x); 
					}; 
				} else {

					if ((_x getVariable ['GU_ID',0]) == _cmdtype2) then 
					{ 
						if (lifeState SpecVeh == "ALIVE") then 
						{
							(owner _x) publicVariableClient "targetPOS";
							(owner _x) publicVariableClient "SpecVeh";
						};
					}; 

				}; 
			}forEach players; 
			sleep 1;
			}; 
			};

			_targPos = [7500,7500,0]; 
			{ 
			if ((_x getVariable ['GU_ID',0]) == _TargetUID) then 
			{ 
			_targPos = getPos _x; 
			}; 
			}forEach players; 

			{ 
				if ((_x getVariable ['GU_ID',0]) == _AdminUID) then 
				{ 
					if ( (vehicle _x) distance _targPos > 990) then 
					{
						(vehicle _x) setPos [(_targPos select 0),(_targPos select 1)+350]; 
					}; 
				}; 
			}forEach players;

			[_AdminUID,_TargetUID,60] call DZ_camSPAWNER;
		 diag_log format ["Admin: [%1] Request Spectate on player [%2]",_AdminUID,_TargetUID];
	}; 
	case "010": {

	}; 
	case "013": {

    }; 
	case "011": {

    }; 
	case "012": {

    }; 
};

};