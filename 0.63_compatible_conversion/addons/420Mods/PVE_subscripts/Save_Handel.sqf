"Player_Save_Handel" addPublicVariableEventHandler
{
    private["_agent"];
    _Data_array = _this select 1;
    _agent = _Data_array select 0;
    _uid   = _agent getVariable ["GU_ID",0];
    _name  = _agent getVariable ["Cli_Name",0];

    diag_log format["SAVE||SYSTEM: Started save process for player [%2] [%1]",_uid,_name];

    if ((lifeState _agent == "ALIVE") && (not captive _agent) ) then {

          if ( (vehicle _agent) == (vehicle _agent) && (typeOf _agent in DZ_SkinsArray) ) then {
          DZ_SaveQueue = true;
           [1,_uid,_agent] call dbSavePlayer;
           diag_log format["SAVE||SYSTEM: Save Process completed for: [%1] [%2] Status [ALIVE]",_uid,_name];
           } else { diag_log format["SAVE||SYSTEM: Save Process for NOT completed for: [%1] [%2] Status [IN VEHICLE]",_uid,_name]; };
           
           } else {

                if ( ((_agent getVariable["restrainedwith",0]) == 1) or ((_agent getVariable["restrainedwith",0]) == 2) or ((_agent getVariable["restrainedwith",0]) == 3) ) then {
                           diag_log format["SAVE||SYSTEM: save terminated! Player [%2] [%1] is Captive",_uid,_name]; 
                    } else {

                    [0,_uid,_agent] call dbSavePlayer; diag_log format["SAVE||SYSTEM: Save Process completed for: [%1] [%2] Status [DEAD]",_uid,_name]; 
                }; 
          };
    
};
