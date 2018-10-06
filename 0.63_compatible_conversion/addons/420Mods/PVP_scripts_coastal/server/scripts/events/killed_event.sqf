"cus_killed_EH" addPublicVariableEventHandler
{
    private["_agent","_Ownerkiller","_LastDamage","_kill_info","_kill_cnt","_kill_strk","_killsFN","_totalKills"];
    _array = _this select 1;

    _agent = _array select 0;
    _LastDamage = _agent getVariable ["prevDamage",0];
    _kill_info = format ["null"];
    switch (_LastDamage) do {
        case "falldamage" : {
        _kill_info = format ["Player %1 fell to their death",(name _agent)];
        {
         [_x,_kill_info,"colorAction"] call fnc_playerMessage;
        } forEach players;
        diag_log format ["Player %1 [%2] fell to their death",(name _agent),(getPlayerUID _agent)];
        }; 

        case "zombie" : {
        _kill_info = format ["Player %1 was eaten alive by a zombie",(name _agent)];
        {
         [_x,_kill_info,"colorAction"] call fnc_playerMessage;
        } forEach players;
        diag_log format ["Player %1 [%2] was eaten alive by a zombie",(name _agent),(getPlayerUID _agent)];
        };

        case 0 : {
        _kill_info = format ["Player %1 committed suicide",(name _agent)];
        {
         [_x,_kill_info,"colorAction"] call fnc_playerMessage;
        } forEach players;
        diag_log format ["Player %1 [%2] committed suicide",(name _agent),(getPlayerUID _agent)];
        };

        default {
        _Killer_UID = format ["%1",_LastDamage];
        _Killer_Name = "null";
        _killer = objNull;
        {
            if ( (getPlayerUID _x) == _Killer_UID) then {
                _Killer_Name = (name _x);
                _killer = (vehicle _x);
                _Ownerkiller = _x;
            };
        }forEach players;

        _cfg = (configFile >> "CfgWeapons" >> typeOf(itemInHands _killer));
        _DescShort = getText(_cfg >> "displayName");
        _blood = _killer getVariable ["blood","0"];
        _info = _agent getVariable ["totalKills","0"];
        _headshot = _agent getVariable ["HSD","0"];
        _difftext = ["Domed","Decapitated","Headshotted"];
        _gb = _difftext select floor random count _difftext;

        if ( _headshot == 1) then {
            _kill_info = format["%1 %6 %2 from (%3m) with [%4] {%5}HP",_Killer_Name,(name _agent),round(_agent distance _killer),_DescShort,_blood,_gb];
            
            [(owner _agent),_Killer_Name,_DescShort,(round(_agent distance _killer))] SpawnForClient {
                _tempName = _this select 1;
                _tempGun = _this select 2;
                _shooterDis = _this select 3;
				sleep 1;
                titleText [format["Killed By: %1 With a Headshot Using [%2] Distance:[%3m]",_tempName,_tempGun,_shooterDis],"PLAIN DOWN",3];
            };
            
        } else {
             _difftext2 = ["Murdered", "Destroyed","Crippled","Assraped","Raped","Killed","Pulverized","Teabaged","Fucked","ButtFucked"];
             _gb2 = _difftext2 select floor random count _difftext2;
             _kill_info = format["%1 %6 %2 from (%3m) with [%4] {%5}HP",_Killer_Name,(name _agent),round(_agent distance _killer),_DescShort,_blood,_gb2];
             
             [(owner _agent),_Killer_Name,_DescShort,(round(_agent distance _killer))] SpawnForClient {
                _tempName = _this select 1;
                _tempGun = _this select 2;
                _shooterDis = _this select 3;
				sleep 1;
                titleText [format["Killed By: %1 Using [%2] Distance:[%3m]",_tempName,_tempGun,_shooterDis],"PLAIN DOWN",3];
            };
        };

        if (_agent getVariable ["totalKills","0"] >= 3) then {

        if ( _headshot == 1) then {
              _kill_info = format["%1 Ended %2's Killstreak Of [%3] Kills With a HeadShot",_Killer_Name,(name _agent),_info];
            } else {
              _kill_info = format["%1 Ended %2's Killstreak Of [%3] Kills",_Killer_Name,(name _agent),_info];
            };
        };

        {
			if ( (owner _agent) != (owner _agent) ) then { [_x,_kill_info,"colorFriendly"] call fnc_playerMessage; }else{ [_x,_kill_info,"colorAction"] call fnc_playerMessage; };
        } forEach players;
		
		if (_killer != objNull) then {
		    [(owner _agent),_Killer_Name] SpawnForClient { _Killername = _this select 1; sleep 2; Kill_Cam_Spectate = [player,_Killername,10]; publicVariableServer "Kill_Cam_Spectate"; };
		};

        _totalKills = (_killer getVariable ["totalKills",0]) + 1;
        _killer setVariable ["totalKills",_totalKills];
        _killsFN = _killer getVariable ["totalKills",0];
        _kill_cnt = format["Kill Streak: [%1]",_killsFN];

        [_Ownerkiller,_kill_cnt,"colorFriendly"] call fnc_playerMessage;

        if (_killsFN == 1) then {
        _cfgAc = (configFile >> "CfgWeapons" >> typeOf(itemInHands _killer));
        _DescShortAc = getText(_cfgAc >> "displayName");
        _Gun_Killer = itemInHands _killer;
        _Type_G = typeOf(itemInHands _killer);
        switch (_Type_G) do {
            case "M4A1": {
                  _Gun_Killer createInInventory "Att_Suppressor_M4";
                  _kill_strk = format["Suppressor Attachment Awarded: %1",_DescShortAc];
                  [_Ownerkiller,_kill_strk,"colorFriendly"] call fnc_playerMessage;
            };
            case "AK74": {
                _Gun_Killer createInInventory "Att_Suppressor_AK";
                _kill_strk = format["Suppressor Attachment Awarded: %1",_DescShortAc];
                [_Ownerkiller,_kill_strk,"colorFriendly"] call fnc_playerMessage;
            };
            case "AK101": {
                _Gun_Killer createInInventory "Att_Suppressor_AK";
                _kill_strk = format["Suppressor Attachment Awarded: %1",_DescShortAc];
                [_Ownerkiller,_kill_strk,"colorFriendly"] call fnc_playerMessage;
            };
            case "AugSteyr": {
                _Gun_Killer createInInventory "Att_Suppressor_M4";
                _kill_strk = format["Suppressor Attachment Awarded: %1",_DescShortAc];
                [_Ownerkiller,_kill_strk,"colorFriendly"] call fnc_playerMessage;
            };
            case "AKS74U": {
                _Gun_Killer createInInventory "Att_Suppressor_AK";
                _kill_strk = format["Suppressor Attachment Awarded: %1",_DescShortAc];
                [_Ownerkiller,_kill_strk,"colorFriendly"] call fnc_playerMessage;
            };
            case "AKM": {
                _Gun_Killer createInInventory "Att_Suppressor_AK";
                _kill_strk = format["Suppressor Attachment Awarded: %1",_DescShortAc];
                [_Ownerkiller,_kill_strk,"colorFriendly"] call fnc_playerMessage;
            };
            case "Mosin9130_Green_Black": {
                _Gun_Killer createInInventory "Att_Suppressor_Improvised";
                _kill_strk = format["Suppressor Attachment Awarded: %1",_DescShortAc];
                [_Ownerkiller,_kill_strk,"colorFriendly"] call fnc_playerMessage;
            };
            case "SVD": {
                _Gun_Killer createInInventory "Att_Suppressor_Improvised";
                _kill_strk = format["Suppressor Attachment Awarded: %1",_DescShortAc];
                [_Ownerkiller,_kill_strk,"colorFriendly"] call fnc_playerMessage;
            };
            case "Winchester70_Black": {
                _Gun_Killer createInInventory "Att_Suppressor_Improvised";
                _kill_strk = format["Suppressor Attachment Awarded: %1",_DescShortAc];
                [_Ownerkiller,_kill_strk,"colorFriendly"] call fnc_playerMessage;
            };
            case "cz527": {
                _Gun_Killer createInInventory "Att_Suppressor_Improvised";
                _kill_strk = format["Suppressor Attachment Awarded: %1",_DescShortAc];
                [_Ownerkiller,_kill_strk,"colorFriendly"] call fnc_playerMessage;
            };
        };
        };

        switch (_killsFN) do {
            case 3 : {
                {
                    _kill_strk = format["%1 Is On A Kill Streak:[%2] Kills",_Killer_Name,_killsFN];
                    [_x,_kill_strk,"colorImportant"] call fnc_playerMessage;
                }forEach players;
            }; 
            case 6 : {
                {
                    _kill_strk = format["%1 Is On A Kill Streak:[%2] Kills",_Killer_Name,_killsFN];
                    [_x,_kill_strk,"colorImportant"] call fnc_playerMessage;
                }forEach players;
                _killer setDamage 0;
                _killer setVariable ["blood",5000];
                _killer setVariable ["health",5000];
                [_Ownerkiller,"You Have Been Rewarded: Blood + Health!","colorFriendly"] call fnc_playerMessage;
            }; 
            case 10 : {
             {
                _kill_strk = format["%1 Is On A Kill Streak:[%2] Kills",_Killer_Name,_killsFN];
                [_x,_kill_strk,"colorImportant"] call fnc_playerMessage;
             }forEach players;
                _killer setDamage 0;
                _killer setVariable ["blood",5000];
                _killer setVariable ["health",5000];
                [_Ownerkiller,"You Have Been Rewarded: Blood + Health!","colorFriendly"] call fnc_playerMessage;
            };
        };
        diag_log format ["Player %1 [%2] was killed by %3 [%4]",(name _agent),(getPlayerUID _agent),_Killer_Name,_Killer_UID];
        };
    };
};