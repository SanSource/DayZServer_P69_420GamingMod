"DZM_Factionsys" addPublicVariableEventHandler
{
   private["_agent","_action"];
   _array = _this select 1;
   _agent = _array select 0;
   _action = _array select 1;
   _FactionOwnerUID = _array select 2;
   _PlayerUID = _array select 3;

	switch (_action) do {
	case "accept" : {

	{
	  _Puid = _x getVariable ["GU_ID",0];
      if (_Puid == _FactionOwnerUID) then {
      	_FactionArray = _x getVariable ["FacMembers",[]];
      	_FactionArray = _FactionArray + [_PlayerUID];
      	_x setVariable ["FacMembers",_FactionArray];
      	diag_log format ["Player [%1] Faction Members Array: %2",_FactionOwnerUID,(_x getVariable ["FacMembers",[]])];
      } else {
         if (_Puid == _PlayerUID) then { _x setVariable ["InFaction",1]; };
  	  };
	}forEach players;

	(owner _agent) spawnForClient {
	   [player,format["You Have Joined The Faction."],"colorFriendly"] call fnc_playerMessage;
	   player setVariable ["InFaction",1];
	};

	}; 
	case "decline" : {

		(owner _agent) spawnForClient {
		  [player,format["You Have Declined to Join The Faction."],"colorAction"] call fnc_playerMessage;
		};
		
	};
	
   };

};
