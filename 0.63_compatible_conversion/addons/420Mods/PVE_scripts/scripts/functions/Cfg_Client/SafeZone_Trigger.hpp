if (DZ_TradersActive) then {
[_id,_agent] spawn {
	_id = _this select 0;
	_agent = _this select 1;
	_InZone = {
	waituntil { sleep 1; (vehicle _agent) distance [10060.891, 5436.0332] < 175};
	_agent allowDamage false;
	_agent setCaptive false;
	_agent setVariable["restrainedwith",0];
	_id spawnForClient { titleText ["Welcome to Staroye Safe-Zone. GodMode is Enabled!.","PLAIN DOWN"]; systemChat "Welcome to Staroye Safe-Zone. GodMode is Enabled!."; };
	_IsSafe = true;
	waituntil { sleep 1; (vehicle _agent) distance [10060.891, 5436.0332] > 175};
	_id spawnForClient { titleText ["You have left the Safe-Zone! GodMode Disabled!","PLAIN DOWN"]; systemChat "You have left the Safe-Zone! GodMode Disabled!"; };
	_agent allowDamage true;
	_IsSafe = false;
	call _InZone;
	};
	call _InZone;
};
};