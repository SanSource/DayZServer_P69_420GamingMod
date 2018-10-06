[] spawn {

DZ_backpos = [

[3767.5488, 10920.281],  
[3828.6565, 10923.034],  
[3836.2263, 11231.056],  
[3838.3442, 10697.821],  
[3854.9512, 10678.164],  
[3856.3372, 11202.664],  
[3872.8989, 11222.775],  
[3873.6125, 10967.359],  
[3884.4336, 10614.166],  
[3892.0691, 10602.567],  
[3893.1133, 10986.654],  
[3895.3757, 11240.520]

];

 while {true} do {

 _bannedpos2 = [4353.6309, 10319.318];
 _playerinArea2 = _bannedpos2 nearEntities ["SurvivorBase", 1250];

globalbanlist = [];

{
globalbanlist = globalbanlist + [_x];
}foreach _playerinArea2;

{

if !(_x in globalbanlist) then
{

      [_x,"YOU HAVE LEFT THE PvP AREA YOU ARE GETTING TELEPORTED BACK:","colorImportant"] call fnc_playerMessage;
      uiSleep 2;
      [_x,"TELEPORTING IN: 5","colorImportant"] call fnc_playerMessage;
      uiSleep 1;
      [_x,"TELEPORTING IN: 4","colorImportant"] call fnc_playerMessage;
      uiSleep 1;
      [_x,"TELEPORTING IN: 3","colorImportant"] call fnc_playerMessage;
      uiSleep 1;
      [_x,"TELEPORTING IN: 2","colorImportant"] call fnc_playerMessage;
      uiSleep 1;
      [_x,"TELEPORTING IN: 1","colorImportant"] call fnc_playerMessage;
      DZ_PVP_spawn_back = DZ_backpos select (floor random (count DZ_backpos));
      _x setpos DZ_PVP_spawn_back;
      uiSleep 4;
      [_x,"YOU HAVE BEEN TELEPORTED BACK","colorFriendly"] call fnc_playerMessage;
};

}foreach players;

 sleep 14;
};


};