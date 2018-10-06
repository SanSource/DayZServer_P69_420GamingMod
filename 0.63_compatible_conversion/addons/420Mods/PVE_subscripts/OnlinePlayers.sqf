diag_log "all code is owned by 420 gaming and it's team";
[] spawn {

while {true} do {
_players = [];
_CurrentPrefrmance = "null";
if ( (diag_fps) >= 150 ) then {
   _CurrentPrefrmance = "Excellent";
};

if ( (diag_fps) <= 90 ) then {
   _CurrentPrefrmance = "Good";
};

if ( (diag_fps) <= 40 ) then {
   _CurrentPrefrmance = "Ok";
};

if ( (diag_fps) <= 20 ) then {
   _CurrentPrefrmance = "Some What Ok";
};

if ( (diag_fps) <= 10 ) then {
   _CurrentPrefrmance = "Laggy";
};

if ( (diag_fps) <= 3 ) then {
   _CurrentPrefrmance = "Unplayable";
};

{
if ((getplayeruid _x != "") && (alive _x)) then
{
	_players = _players + [_x];
};

}foreach players;

sleep 1;
_counter = count _players;
{
	if ( _CurrentPrefrmance != "null" ) then {
		_SecsUptime = serverTime;
		_MinsUpTime = _SecsUptime / 60;
		_HrsUpTime = _MinsUpTime / 60;
		[_x,format["Players Online: [%1]",_counter],"colorVehicleChannel"] call fnc_playerMessage;
		[_x,format["Server Performance: [%1]",_CurrentPrefrmance],"colorVehicleChannel"] call fnc_playerMessage;
		if ( _MinsUpTime <= 59 ) then {
			[_x,format["Server Up-Time: [%1 Minute/s]",(round _MinsUpTime)],"colorVehicleChannel"] call fnc_playerMessage;
		};
		if ( _MinsUpTime >= 60 ) then {
			[_x,format["Server Up-Time: [%1 Hour/s]",(round _HrsUpTime)],"colorVehicleChannel"] call fnc_playerMessage;
		};
	};
}foreach players;

sleep 120;
};

};