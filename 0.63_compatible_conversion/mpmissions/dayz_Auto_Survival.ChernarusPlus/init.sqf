setTimeForScripts 90;

call compile preprocessFileLineNumbers "\dz\420Mods\PVE_scripts\init.sqf";

DZ_MP_CONNECT = true;
DZ_MAX_ZOMBIES = 0;
DZ_MAX_ANIMALS = 150;
DZ_PLAYER_COUNT = getServerMaxPlayers;
//=====================================================================================================
//----- simple scheduler part -----

connectedPlayers = [];
for "_x" from 0 to (DZ_PLAYER_COUNT-1) do
{
	connectedPlayers set [_x,0];
};

//---------------------------------

call dbLoadPlayer;
//setDate [1990, 09, 16, 10, 25];
_humidity = random 0.8;
[0,0] setOvercast _humidity;
simulWeatherSync;

dbInitEconomy [true];
setTimeForScripts 0.03;

"actionReleased" addPublicVariableEventHandler
{
	private["_agent"];
	_agent = _this select 1;
	[_agent,"You have broken free of your restraints!","ColorFriendly"] call fnc_playerMessage;
	_agent setCaptive false;
	_agent playAction 'PlayerRestrainOut';
	if (count _this > 2) then
	{
		null = (_this select 2) call player_addInventory;
	};
};

_WindMaxSpeed = floor random 7.5;
_WindSpeedOfChange = floor random 50;
_WindFnMin = floor random 0.5;
_WindFnMax = floor random 3.5;

setWindMaxSpeed _WindMaxSpeed;
setWindSpeedOfChange _WindSpeedOfChange;
setWindFnMin _WindFnMin;
setWindFnMax _WindFnMax;

//----- simple scheduler part -----
index = 0;
indexTarget = DZ_PLAYER_COUNT;
onEachFrame {	
	if (index < DZ_PLAYER_COUNT) then {
		_playerToTick = connectedPlayers select index;	
	
		if (_playerToTick != 0) then {
			_player = playerOn _playerToTick;		
			if (alive _player) then
			{
				_player call tick_modifiers;	
				_player call tick_states;		
				_player call tick_environment;
				_player call fnc_sendNotifiersToEnfusion;
			};
		};
	};
	index = index + 1;		
	if (index == indexTarget) then {
		indexTarget = (round(diag_fps * 2)) max DZ_PLAYER_COUNT; //indexTarget = (round(diag_fps * 2)) max DZ_PLAYER_COUNT; //ideal is 25fps to get 2s ticks
		index = 0;
	};
};

//Simulation defines
DZ_TICK = 1.5;				//how many seconds between each tick
DZ_TICK_COOKING = 4;		//how many seconds between each cooking tick
DZ_THIRST_SEC = 0.9;		//Thirst consumption RATE
DZ_METABOLISM_SEC = 0.8; 	//Hunger consumption RATE
DZ_SCALE_SOAK = 0.2;		//How much an item will soak with water when submerged per tick
DZ_SCALE_DRY = 4;			//Scales how fast things dry
DZ_WET_COOLING = 4;			//The degrees by which a fully wet item will reduce temperature
DZ_COOLING_POINT = 0;		//point at which body changes between warming/cooling
DZ_BODY_TEMP = 36.8;		//Degrees Celcius
DZ_MELEE_SWING = 1.1;		//number of seconds between melee attacks
DZ_FLAME_HEAT = 0.1;		//degrees per second for heating
DZ_BOILING_POINT = 99.97; 	//degrees of boiling point
DZ_DEW_POINT = 5;			//below which air will fog from player
DZ_WEATHER_CHANGE = 5;		//number of seconds to smooth weather changes in
DZ_DIGESTION_RATE = 2.2;	//number of ml to consume per second

//medical defines
DZ_BLOOD_UNCONSCIOUS = 500;	//minimum blood before player becomes unconscious

//New player defines/ Player Stats upon new life
DZ_ENERGY = 5000;		// actual energy from all food and drink consumed
DZ_HUNGER = 1300;		//0 to 6000ml size content of stomach, zero is empty
DZ_THIRST = 1300; 		//0 to 6000ml size content of stomach, zero is empty
DZ_WATER = 5000;		// actual water from all food and drink consumed
DZ_STOMACH = 1000; 		// actual volume in stomach
DZ_DIET = 0.5; 			// actual diet state
DZ_HEALTH = 5000;   	// Max 5000
DZ_BLOOD = 5000;		// Max 5000
DZ_TEMPERATURE = 37.5; // Temp of player upon new life

/* Default Mods/extensions for server*/
/*=====================================================*/
[] execVM "\dz\420Mods\PVE_subscripts\OnlinePlayers.sqf";  // Dont touch

[] execVM "\dz\420Mods\PVE_subscripts\init2.sqf";  // Dont touch

[] execVM "\dz\420Mods\PVE_subscripts\AmbienceMusic.sqf";  // Dont touch

//[] execVM "\dz\420Mods\PVE_subscripts\xmasEvents.sqf";     // Dont touch

[] execVM "\dz\420Mods\PVE_scripts\scripts\events\killed_event.sqf";  // Dont touch

[] execVM "\dz\420Mods\PVE_subscripts\JSEvents.sqf";  // Dont touch

//[] execVM "\dz\420Mods\PVE_subscripts\Clan_System.sqf";  // Dont touch

[] execVM "\dz\420Mods\PVE_subscripts\Tisy_zone.sqf";  // Dont touch

[] execVM "\dz\420Mods\PVE_subscripts\Save_Handel.sqf";  // Dont touch

[] execVM "Player_burn.sqf";  // Dont touch

[] execVM "\dz\420Mods\PVE_subscripts\VIP_LoadoutSYS.sqf";  // Dont touch

[] execVM "\dz\420Mods\PVE_subscripts\Faction_sys.sqf";  // Dont touch

[] execVM "\dz\420Mods\PVE_subscripts\AdminScripts.sqf";  // Dont touch

[] execVM "\dz\420Mods\PVE_subscripts\DZM_PerkSystem.sqf";  // Dont touch



DZ_RandomEvents = true;
DZ_WrecksUpdate = [];
sleep 5;
call DZ_CustomEventInit;

/*=====================================================*/

DZ_BadCharsRU = [ 1105, 1103, 1096, 1077, 1088, 1090, 1099, 1091, 1080, 1086, 1087, 1102, 1097, 1101, 1072, 1089, 1076, 1092, 1075, 1095, 1081, 1082, 1083, 1100, 1078, 1079, 1093, 1094, 1074, 1073, 1085, 1084, 1098, 1025, 1071, 1064, 1045, 1056, 1058, 1067, 1059, 1048, 1054, 1055, 1070, 1065, 1069, 1040, 1057, 1044, 1060, 1043, 1063, 1049, 1050, 1051, 1068, 1046, 1047, 1061, 1062, 1042, 1041, 1053, 1052, 1066 ];

[] spawn {
	while {true} do {
		{
		_name = name _x;
		_typeof = toArray _name;
		for "_s" from 0 to ((count _typeof)-1) do {
		_letter = _typeof select _s;
		if (_letter in DZ_BadCharsRU) then {
			[(owner _x),_letter] spawnForClient {
			_letter = _this select 1;
			systemChat format ["ENGLISH ONLY NAME!! GAME EXIT...."];
			systemChat format ["CYKA BLYAT!"];
			systemChat format ["CYKA BLYAT!"];
			titleText ["плохое имя, изменить его GAME EXIT....","PLAIN DOWN"];
			sleep 10;
			exitGame;
			};
		};
		};
		}forEach players;
		sleep 3;
	};
};

//========================================//
/* Vehicle Lock Status setter*/
//========================================//

{
  if ( (_x getVariable ['lockstat',0]) == 1 ) then 
  {
  	_x setVehicleLock 'LOCKED';
  	_x engineOn true;
  	_x setdir 180;
  	_x engineOn false;
  	diag_log format ["Car at %1 lock stat set LOCKED!",(getpos _x)];
  } else {
   _x engineOn true;
   _x setdir 180;
   _x engineOn false;
  diag_log format ["Car at %1 lock stat set UNLOCKED!",(getpos _x)]; 
};

  if ( (_x getVariable ['ownerID',0]) == 0 ) then 
  {
  	diag_log format ["%2 at %1 DELETED has no OWNER!",(getpos _x),(typeOf _x)];
  	deleteVehicle _x;
  };

}forEach (allMissionObjects "Car_DZ");

//========================================//
/* Balota Custom Loot Checker + Spawner*/
//========================================//
[] spawn {
sleep 60; // << Init sleep, server is giving Engine errors if this script is called very early before Player connect is enabled.
_sleeper = 0;
while {true} do {
_pos = [4787.03, 2277.98];
_inArea = nearestObjects [_pos, ["InventoryBase","Rifle"], 150];
if ((count _inArea >= 50)) then {
diag_log format ["Loot Respawn Balota Custom: MAX AMOUNT REACHED: [%1]",(count _inArea)];
_sleeper = 1800; // 30 minutes wait if loot if at MAX.
} else {
_sleeper = 175; // 2 minutes wait between every loot respawn, if limit is under MAX.
callFunction ["ObjSPAWNER",(random 50),(random 10)]; //- 28 items || 3 Guns  < Random
diag_log format ["Loot Respawned: Balota Custom table, Amount in area:[%1]",(count _inArea)];
};
sleep (_sleeper + 5);
};
};

{ deleteVehicle _x; }forEach (allMissionObjects "Flaregun");
{ deleteVehicle _x; }forEach (allMissionObjects "TrashCan");
{ deleteVehicle _x; }forEach (allMissionObjects "SeaChest");