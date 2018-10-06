posFromSpawnPlayer = [
[11788.1 , 15096.7 , 0.00196075],
[11671.7 , 15191.7 , 0.00157166],
[11535 , 15157.8 , 0.00193787],
[11901.8 , 13982.4 , 0.00131226],
[11769.3 , 13944.6 , 0.00158691],
[12454.3 , 13967.6 , 0.00115967],
[14837.5 , 13280.4 , 0.00121665],
[13640 , 13276.6 , 0.00173759],
[13696.9 , 13456.7 , 0.00154495],
[12858.1 , 10778.4 , 0.00114441],
[12549.5 , 10785.7 , 0.00179291],
[12432 , 11074.2 , 0.00178528],
[12763.2 , 10418.7 , 0.00160599],
[13225.5 , 10409 , 0.00114822],
[12879.2 , 9221.08 , 0.00135088],
[12944.4 , 8539.66 , 0.00123644],
[13070.4 , 8139.25 , 0.00147104],
[12964.7 , 7900.82 , 0.0018158],
[13289.5 , 7201.04 , 0.0014286],
[13255.5 , 6929.76 , 0.00157166],
[13488.4 , 6407.87 , 0.00106621],
[13244.3 , 6481.51 , 0.00134087],
[13532.2 , 6183.14 , 0.0013845],
[13432.2 , 5360.08 , 0.00137639],
[12261.7 , 3447.58 , 0.00132036],
[11935.4 , 3386.71 , 0.00132573],
[11764.4 , 3367.28 , 0.00147438],
[11063.1 , 2778.33 , 0.00137806],
[10852.2 , 2379.6 , 0.000910044],
[10742.8 , 2140.39 , 0.001387],
[10457.6 , 1920.23 , 0.00166655],
[9348.89 , 1902.39 , 0.00126934],
[8564.98 , 2433.12 , 0.00142574],
[8396.94 , 2623.65 , 0.00180507],
[8001.04 , 3072.22 , 0.00144196],
[7833.85 , 3234.81 , 0.00148296],
[7582.88 , 3069.26 , 0.00169873],
[7316.51 , 2685.99 , 0.00121832],
[7265.08 , 2206.89 , 0.00136089],
[6485.76 , 2216.71 , 0.00122213],
[6711.99 , 2300.48 , 0.00143862],
[6874.39 , 2328.78 , 0.00143862],
[7014.36 , 2445.19 , 0.00143862],
[1830.6945, 2103.8613],
[2144.105, 2084.8101, 4.1365623e-005],
[3550.7241, 2117.6238, 1.3232231e-005],
[4367.8301, 2261.3977, 7.6293945e-006],
[5718.583, 3272.4043, -1.5258789e-005],
[6329.5879, 3286.7834, -7.0571899e-005],
[7876.4873, 3451.4485, 0],
[8335.4404, 2412.0015, -4.2676926e-005],
[8730.2783, 2245.5264, 4.7683716e-006],
[9630.3779, 1715.202, 2.8610229e-006],
[10003.282, 1633.2432, -3.3855438e-005],
[10815.497, 2340.0269, 7.1525574e-006],
[11649.843, 3113.5112, 0.00015830994],
[11943.864, 3894.0469, -0.0001411438],
[13627.798, 2936.491, -4.196167e-005],
[13862.487, 2887.4827, -0.0001335144],
[13638.802, 3891.2849, 0.00022888184],
[13351.23, 4963.5024, -2.4795532e-005],
[13282.419, 5434.4067, 1.335144e-005],
[12635.838, 5709.5928, -1.5258789e-005],
[13001.661, 5966.9629, -6.1035156e-005],
[13378.675, 6174.3633, 1.7166138e-005],
[13521.083, 6443.8862, 6.6757202e-006],
[13198.798, 6882.439, -3.4332275e-005],
[12891.782, 7346.2407, -0.00018310547],
[13103.755, 8195.5146, -1.1444092e-005],
[13110.928, 8278.6006, -0.00036239624],
[13089.121, 8430.5771, 6.7234039e-005],
[12804.308, 8592.6543, 3.4809113e-005],
[12395.614, 9042.4443, 3.0517578e-005],
[12727.266, 9258.8506, 3.0517578e-005],
[13046.434, 9462.0742, -0.00019359589],
[13060.229, 9892.2617, -0.00017738342],
[13751.031, 11178.943, 7.9274178e-006],
[13963.68, 11260.368, 0.00016403198],
[13316.514, 12880.635, 0.00017547607],
[13683.48, 13492.389, 0.00010681152],
[14324.951, 13277.395, 8.5830688e-006],
[13753.068, 14113.745, -1.9073486e-005],
[13401.638, 14711.817, -0.00010299683],
[11980.965, 14032.884, -5.3405762e-005],
[12188.018, 13430.833, -9.1552734e-005],
[11659.36, 15080.176, 1.5258789e-005]
 ];
 
_clientRespawn =
{

	_uid = getClientUID _id;
	[_uid, _agent] call fnc_dbDestroyProfile;
	diag_log format["CONNECTION: SPAWN NEW PLAYER!"];
	//-----------------------------
	_ArryCharTxt = "";
	_ArryCharTxt = callFunction ["VIPConvertList"];
	_ClanType = "";
	_pos = [0,0,0];
	_VIPArray = [];
	_VIPArray = call compile (_ArryCharTxt);

	_pos = posFromSpawnPlayer select (floor random (count posFromSpawnPlayer));
	_enemyClose0 = _pos nearEntities ["SurvivorBase", 100];
	if (count _enemyClose0 > 0) then
	{
	_arraySP0 = posFromSpawnPlayer select (floor random (count posFromSpawnPlayer));
	_pos = [(_arraySP0 select 0),(_arraySP0 select 1)];
	};
	_enemyClose1 = _pos nearEntities ["SurvivorBase", 75];
	if (count _enemyClose1 > 0) then
	{
	_arraySP1 = posFromSpawnPlayer select (floor random (count posFromSpawnPlayer));
	_pos = [(_arraySP1 select 0),(_arraySP1 select 1)];
	};
	_enemyClose2 = _pos nearEntities ["SurvivorBase", 50];
	if (count _enemyClose2 > 0) then
	{
	_arraySP2 = posFromSpawnPlayer select (floor random (count posFromSpawnPlayer));
	_pos = [(_arraySP2 select 0),(_arraySP2 select 1)];
	};

	//-----------------------------
	_RE = [_uid,_id,_VIPArray,_pos,_ClanType] spawn {
	_uid = _this select 0;
	_id = _this select 1;
	_VIPArray = _this select 2;
	_pos = _this select 3;
	_ClanType = _this select 4;


	_Section_1 = _VIPArray select 0;
	_Section_2 = _VIPArray select 1;
	_Section_3 = _VIPArray select 2;


	_id spawnForClient {
	_queueTimeZ = 32;
	_resrdr = [
	[[2949.45,7995.63],"This is where you belong",90],
	[[2957.64,8022.88],"You have been given a proper burial",90],
	[[8610.87,13675.9],"You got DayZ'ed",90],
	[[7908.33,12579.3],"Just Fucking Uninstall Already!",-61.372]

	];
	_rndEvent = _resrdr select floor random count _resrdr;
	_selcPos = _rndEvent select 0;   //location
	_selecTxt = _rndEvent select 1;  //Text
	_selecDir = _rndEvent select 2;  //Dir of Point
	_posX = _selcPos select 0;
	_posY = _selcPos select 1;

	waitUntil { vehicle player == player};
	_graveObj = "Land_Church_tomb_2" createVehicleLocal [_posX,_posY];
	_graveObj setDir _selecDir;
	_Tmpcam = "Camera" camCreate [_posX,_posY,3];
	_Tmpcam CameraEffect ["EXTERNAL", "Back"];
	_Tmpcam camCommand "INERTIA OFF";
	_Tmpcam camSetTarget _graveObj;
	_Tmpcam camSetRelPos [0,3,7];
	_Tmpcam camCommit 10;
	while {_queueTimeZ > 0} do
	{
		2 fadeSound 0;
		2 fadeSpeech 0;
		2 fadeRadio 0;
		titleText [format["Spawning in %1 seconds...%2 || [%3]",floor(_queueTimeZ),_selecTxt,DZM_LocalKill],"PLAIN DOWN",10];
		_queueTimeZ = _queueTimeZ - 0.1;
		sleep 0.1;
	};
		
	waitUntil { _queueTimeZ <= 0};
	setEVUser 0;
	4 fadeSound 1;
	4 fadeSpeech 1;
	4 fadeRadio 1;
	_Tmpcam CameraEffect ["Terminate", "Back"];
	camDestroy _Tmpcam;
	"filmGrain" ppEffectEnable true;			
	"filmGrain" ppEffectAdjust [0.09,0.1,0.02,0.2,0.5,true];
	"filmGrain" ppEffectCommit 5;			
	"RadialBlur" ppEffectEnable true;			
	"RadialBlur" ppEffectAdjust [0.01, 0.01, 0, 0];
	"RadialBlur" ppEffectCommit 1;
	_cam = "Camera" camCreate [(getpos player select 0),(getpos player select 1),400];
	_cam CameraEffect ["EXTERNAL", "Back"];
	_cam camCommand "INERTIA OFF";
	_cam camSetTarget player;
	_cam camSetRelPos [0,-10,3];
	_cam camCommit 10;
	titleText [format["Please wait..."],"BLACK IN",10];
	sleep 10;
	_cam CameraEffect ["Terminate", "Back"];
	camDestroy _cam;
	"filmGrain" ppEffectEnable false;
	"RadialBlur" ppEffectAdjust [0];
	"RadialBlur" ppEffectEnable false;
	deleteVehicle _graveObj;
};
		//load data
		_top = [
			"EN5C_Sweater_Gray",
			"EN5C_Sweater_Blue",
			"EN5C_Sweater_Green",
			"EN5C_Sweater_Red",
			"EN5C_Shirt_BlueCheck",
			"EN5C_Shirt_GreenCheck",
			"EN5C_Shirt_RedCheck",
			"EN5C_Shirt_WhiteCheck",
			"EN5C_Shirt_PlaneBlack"
		];
		_bottom = [
			"EN5C_SlacksPants_Beige",
			"EN5C_SlacksPants_Black",
			"EN5C_SlacksPants_Blue",
			"EN5C_SlacksPants_Brown",
			"EN5C_SlacksPants_DarkGrey",
			"EN5C_SlacksPants_Khaki",
			"EN5C_SlacksPants_LightGrey",
			"EN5C_SlacksPants_White"
		];
		_shoe = getArray(configFile >> "cfgCharacterCreation" >> "shoe");
		
		_myTop = _top select (floor random (count _top));  
		_myBottom = _bottom select (floor random (count _bottom));  
		_myShoe = _shoe select (floor random (count _shoe));  
		_mySkin = DZ_SkinsArray select (floor random (count DZ_SkinsArray));

		diag_log format ["POS SELECTED: %1",_pos];
		_agent = createAgent [_mySkin, _pos, [], 0, "NONE"];
		if (_uid in Owners) then
		{
			  _agent setVariable ["GU_ID",_uid];
			  _v = _agent createInInventory "BagCourierImprovisedFur";
			  _v = _agent createInInventory "Fruit_Cannabis";
			  _v = _agent createInInventory "BallisticHelmet_Black";
			  _agent setVariable ["ExecInit",20];
		  	  _agent setVariable ["isadmin",5];
		      _v = _agent createInInventory "BookBible";
		      _v = _agent createInInventory "Pen_Red";
		      _phppaper = _agent createInInventory "Consumable_Paper";
		      _phppaper setVariable ["message",_uid];
		      _phppaper setVariable ["admver",420];
			  _v = _agent createInInventory "CargoPants_Black";
			  _v = _agent createInInventory "M65_Jacket_Black";
			  _v = _agent createInInventory "Sneakers_Green";		  
			  _v = _agent createInInventory "balaclavamask_blackskull";	
			  _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
			  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6];
			  _v = _agent createInInventory "Compass";

		} else {
			
			if ((_uid in _Section_1) or (_uid in _Section_2) or (_uid in _Section_3)) then {

			if ( _uid in _Section_1 ) then { _agent setVariable ["Is_VIP",1]; };
			if ( _uid in _Section_2 ) then { _agent setVariable ["Is_VIP",2]; };
			if ( _uid in _Section_3 ) then { _agent setVariable ["Is_VIP",3]; _agent setVariable ["vipArrayLD",[]]; };

			{null = _agent createInInventory _x} forEach [_myTop,_myBottom,_myShoe];
			_radio = _agent createInInventory "Tool_Transmitter";
			_batt = _radio createInInventory "consumable_battery9V"; 
			_batt setVariable ["power",30000];

			//_v = _agent createInInventory "Fruit_Cannabis"; VIP Options now on Paper
			/*------------------------------------------------------*/
			_phppaper = _agent createInInventory "Consumable_Paper";
			_phppaper setVariable ["message",_uid];
			_v = _agent createInInventory "Pen_Red";
			/*------------------------------------------------------*/

			_v = _agent createInInventory "Consumable_Rags"; _v setQuantity 2;
			_agent setVariable ["GU_ID",_uid];
			_agent setVariable ['VIP_act',0];
			} else {
			{null = _agent createInInventory _x} forEach [_myTop,_myBottom,_myShoe];
			_v = _agent createInInventory "Consumable_Rags"; _v setQuantity 2;
			_v = _agent createInInventory "Pen_Red";
			_phppaper = _agent createInInventory "Consumable_Paper";
			_phppaper setVariable ["message",_uid];
			_agent setVariable ["GU_ID",_uid];
			_agent setVariable ["Is_VIP",0];
			_radio = _agent createInInventory "Tool_Transmitter";
			_batt = _radio createInInventory "consumable_battery9V"; 
			_batt setVariable ["power",30000];
		};
			
		};

		_agent setVariable ["HSD",0];
		_agent setVariable ["Coins",0];
		_agent setVariable ["SpectateMode",0];
		_agent setVariable ["GU_ID",_uid];
		_agent setVariable ["ChatStat",1];
		_agent setVariable ["Ranger",0];
		_agent call init_newPlayer;
		call init_newBody;

		{
			_ReName = name _x;
			_x setVariable ["Cli_Name",_ReName];  // TEMP <<
		}forEach players;
		
		_nameTmp = _agent getVariable ["Cli_Name",0];
		[_nameTmp] call DZ_GasTrigger;

		#include "Cfg_Client\SafeZone_Trigger.hpp"; // Safe-Zone Trigger
		
	};
	_VIPArray = [];
};

_disconnectPlayer =
{
	_uid = getClientUID _id;
	_vm = [_agent,_id,_name,_queueTime,_uid] spawn 
	{
		private ["_agent","_id","_uid"];
		_agent = _this select 0;
		_id = _this select 1; 
		_name = _this select 2;
		_queueTime = _this select 3;
		_uid = _this select 4;
		diag_log format ["dbLoadPlayer: Player:[%2] GUID [%3] Disconnect Process START!", _agent, _name, _uid];	
		
		if (vehicle _agent != _agent) then
		{
			_agent removeAllEventHandlers "HandleDamage"; 
			_agent addEventHandler ["HandleDamage", {0}];
			moveOut _agent;
			sleep 2;
			_agent addEventHandler ["HandleDamage",{_this call event_assessDamage} ];
		};

		if (lifeState _agent == "UNCONSCIOUS") then
		{
			_agent setDamage 1;
			[_uid, _agent] call fnc_dbDestroyProfile;
			{ [_x,format["Player %1 Was Killed, Logged-out while Unconscious",_name],"colorAction"] call fnc_playerMessage; }forEach players;
			diag_log format ["dbLoadPlayer: Player [%1] GUID [%2] WAS KILLED: UNCONSCIOUS DISSCONNECT",_name,_uid];
			sleep 2;
		};
		
		sleep 3;
		if ( (lifeState _agent == "ALIVE") && (!isNull _agent) ) then {

		    if ( (_agent getVariable["restrainedwith",0]) == 1 ) then {

			[_uid, _agent] call fnc_dbDestroyProfile;
			{ [_x,format["Player %1 Was Killed, Logged-out while captive",_name],"colorAction"] call fnc_playerMessage; }forEach players;
			diag_log format ["dbLoadPlayer: Player [%1] GUID [%2] WAS KILLED: CAPTIVE DISCONNECT",_name,_uid];
			_agent setDamage 1;
			sleep 2;
			} else {
			_agent playAction "SitDown";
			[_uid, _agent] call fnc_dbSaveToProfile;
			sleep 2;
			diag_log format ["dbLoadPlayer: Player [%1] GUID [%2] SAVED AS ALIVE!",_name,_uid];
			deleteVehicle _agent;
			};
		} else {
		
			if ( (lifeState _agent == "DEAD") ) then {
			[_uid, _agent] call fnc_dbDestroyProfile;
			{ [_x,format["Player %1 Was Killed During Disconnect",_name],"colorAction"] call fnc_playerMessage; }forEach players;
			diag_log format ["dbLoadPlayer: Player [%1] GUID [%2] WAS SAVED AS DEAD DURING DISCONNECT",_name,_uid];
			};
		};

		diag_log format ["dbLoadPlayer: Player:[%2] GUID [%3] Disconnect Process END!", _agent, _name, _uid];
	};
		{ [_x,format["420Gaming: Player %1 has Disconnected..",_name],"colorSideChannel"] call fnc_playerMessage; }forEach players;
		_freedPos = connectedPlayers find _id;
		connectedPlayers set [_freedPos,0];
};


_clientConnect =
{
	diag_log format["CONNECTION: _id: %1 _uid: %2 _name: %3",_id,_uid,_name];

	_id spawnForClient {
	_queueTimeZ = 10;
	_msgtday = ["Read our server rules and agree on our Discord Server","Ghosting is Against The Law, Bans Will Be Issued!","BaseBuilding is here, check our Discord for all the information!","Read our server rules so you know whats right'n'wrong","TrE is your GOD"];
	_rndText = _msgtday select floor random count _msgtday;
	waitUntil { vehicle player == player};
	_Tmpcam = "Camera" camCreate [7500,7500,450];
	_Tmpcam CameraEffect ["EXTERNAL", "Back"];
	_Tmpcam camCommand "INERTIA OFF";
	_Tmpcam camSetTarget player;
	_Tmpcam camSetRelPos [0,-10,550];
	_Tmpcam camCommit 10;
	while {_queueTimeZ > 0} do
	{
		2 fadeSound 0;
		2 fadeSpeech 0;
		2 fadeRadio 0; 
		titleText [format["Spawning in %1 seconds...(%2)",floor(_queueTimeZ),_rndText],"PLAIN DOWN",10];
		_queueTimeZ = _queueTimeZ - 0.1;
		sleep 0.1;
	};
		
	waitUntil { _queueTimeZ <= 0};
	setEVUser 0;
	4 fadeSound 1;
	4 fadeSpeech 1;
	4 fadeRadio 1;
	_Tmpcam CameraEffect ["Terminate", "Back"];
	camDestroy _Tmpcam;
	"filmGrain" ppEffectEnable true;			
	"filmGrain" ppEffectAdjust [0.09,0.1,0.02,0.2,0.5,true];
	"filmGrain" ppEffectCommit 5;			
	"RadialBlur" ppEffectEnable true;			
	"RadialBlur" ppEffectAdjust [0.01, 0.01, 0, 0];
	"RadialBlur" ppEffectCommit 1;
	_cam = "Camera" camCreate [(getpos player select 0),(getpos player select 1),400];
	_cam CameraEffect ["EXTERNAL", "Back"];
	_cam camCommand "INERTIA OFF";
	_cam camSetTarget player;
	_cam camSetRelPos [0,-10,3];
	_cam camCommit 5;
	titleText [format["Please wait..."],"BLACK IN",10];
	sleep 5;
	_cam CameraEffect ["Terminate", "Back"];
	camDestroy _cam;
	"filmGrain" ppEffectEnable false;
	"RadialBlur" ppEffectAdjust [0];
	"RadialBlur" ppEffectEnable false;
};

	//-----------------------------
	_ArryCharTxt = "";
	_ArryCharTxt = callFunction ["VIPConvertList"];

	_VIPArray = [];
	_VIPArray = call compile (_ArryCharTxt);

	//-----------------------------
	_uid = getClientUID _id;
	_savedChar = _uid call fnc_dbFindInProfile;
	_isAlive = _savedChar select 0;
	_isOnline = true;
	_pos = _savedChar select 2;

    _Section_1 = _VIPArray select 0;
	_Section_2 = _VIPArray select 1;
	_Section_3 = _VIPArray select 2;
	
	diag_log format["CONNECTION DEBUG INFO: _isAlive: %1 _isOnline: %2 _pos: %3 _savedChar: %4 ",_isAlive,_isOnline,_pos,_savedChar];
	
	if (_isAlive) then
	{
			_agent = _uid call fnc_dbLoadFromProfile;						
			call init_newBody;

			null = _agent call fnc_reloadWeaponOnSpawn;						
			null = [_agent,call compile callFunction ["DataBaseRead","QUICKBAR",format["UID_%1",_uid]]] call fnc_addQuickBarItems;
			_agent setVariable ["GU_ID",_uid];
			_agent setVariable ["Cli_Name",_name];
		    _agent setVariable ["SpectateMode",0];
			_agent setVariable ["Is_VIP",0];
			
			//----- simple scheduler part -----
			_freePos = connectedPlayers find 0;
			connectedPlayers set [_freePos,_id];

			if ((_uid in _Section_1) or (_uid in _Section_2) or (_uid in _Section_3)) then {
				
				if ( _uid in _Section_1 ) then { _agent setVariable ["Is_VIP",1]; };
				if ( _uid in _Section_2 ) then { _agent setVariable ["Is_VIP",2]; };
				if ( _uid in _Section_3 ) then { _agent setVariable ["Is_VIP",3]; _agent setVariable ["vipArrayLD",[]]; };
			
			};
	};
	if (!_isAlive) then 
	{
		diag_log format["CONNECTION: SPAWN NEW PLAYER!"];
		
		_pos = posFromSpawnPlayer select (floor random (count posFromSpawnPlayer));
		_enemyClose0 = _pos nearEntities ["SurvivorBase", 100];
		if (count _enemyclose0 > 0) then
		{
		_arraySP0 = posFromSpawnPlayer select (floor random (count posFromSpawnPlayer));
		_pos = [(_arraySP0 select 0),(_arraySP0 select 1)];
		};
		_enemyClose1 = _pos nearEntities ["SurvivorBase", 100];
		if (count _enemyclose1 > 0) then
		{
		_arraySP1 = posFromSpawnPlayer select (floor random (count posFromSpawnPlayer));
		_pos = [(_arraySP1 select 0),(_arraySP1 select 1)];
		};
		_enemyClose2 = _pos nearEntities ["SurvivorBase", 100];
		if (count _enemyclose2 > 0) then
		{
		_arraySP2 = posFromSpawnPlayer select (floor random (count posFromSpawnPlayer));
		_pos = [(_arraySP2 select 0),(_arraySP2 select 1)];
		};
		
		//load data
		_top = [
			"EN5C_Sweater_Gray",
			"EN5C_Sweater_Blue",
			"EN5C_Sweater_Green",
			"EN5C_Sweater_Red",
			"EN5C_Shirt_BlueCheck",
			"EN5C_Shirt_GreenCheck",
			"EN5C_Shirt_RedCheck",
			"EN5C_Shirt_WhiteCheck",
			"EN5C_Shirt_PlaneBlack"
		];
		_bottom = [
			"EN5C_SlacksPants_Beige",
			"EN5C_SlacksPants_Black",
			"EN5C_SlacksPants_Blue",
			"EN5C_SlacksPants_Brown",
			"EN5C_SlacksPants_DarkGrey",
			"EN5C_SlacksPants_Khaki",
			"EN5C_SlacksPants_LightGrey",
			"EN5C_SlacksPants_White"
		];
		_shoe = getArray(configFile >> "cfgCharacterCreation" >> "shoe");
		
		_myTop = _top select (floor random (count _top));
		_myBottom = _bottom select (floor random (count _bottom));  
		_myShoe = _shoe select (floor random (count _shoe));  
		_mySkin = DZ_SkinsArray select (floor random (count DZ_SkinsArray));  
		
		_agent = createAgent [_mySkin,  _pos, [], 0, "NONE"];
		if (_uid in Owners) then
		{
			 _agent setVariable ["GU_ID",_uid];
			  _v = _agent createInInventory "BagCourierImprovisedFur";
			  _v = _agent createInInventory "Fruit_Cannabis";
			  _v = _agent createInInventory "BallisticHelmet_Black";
			  _agent setVariable ["ExecInit",20];
		  	  _agent setVariable ["isadmin",5];
		      _v = _agent createInInventory "BookBible";
		      _v = _agent createInInventory "Pen_Red";
		      _phppaper = _agent createInInventory "Consumable_Paper";
		      _phppaper setVariable ["message",_uid];
		      _phppaper setVariable ["admver",420];
			  _v = _agent createInInventory "CargoPants_Black";
			  _v = _agent createInInventory "M65_Jacket_Black";
			  _v = _agent createInInventory "Sneakers_Green";		  
			  _v = _agent createInInventory "balaclavamask_blackskull";
			  _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
			  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6];
			  _v = _agent createInInventory "Compass";

		} else {
			
			if ((_uid in _Section_1) or (_uid in _Section_2) or (_uid in _Section_3)) then {

			if ( _uid in _Section_1 ) then { _agent setVariable ["Is_VIP",1]; };
			if ( _uid in _Section_2 ) then { _agent setVariable ["Is_VIP",2]; };
			if ( _uid in _Section_3 ) then { _agent setVariable ["Is_VIP",3]; };

			{null = _agent createInInventory _x} forEach [_myTop,_myBottom,_myShoe];
			_radio = _agent createInInventory "Tool_Transmitter";
			_batt = _radio createInInventory "consumable_battery9V"; 
			_batt setVariable ["power",30000];

			//_v = _agent createInInventory "Fruit_Cannabis"; VIP Options now on Paper
			/*------------------------------------------------------*/
			_phppaper = _agent createInInventory "Consumable_Paper";
			_phppaper setVariable ["message",_uid];
			_v = _agent createInInventory "Pen_Red";
			/*------------------------------------------------------*/
			
			_v = _agent createInInventory "Consumable_Rags"; _v setQuantity 2;
			_agent setVariable ["GU_ID",_uid];
			_agent setVariable ['VIP_act',0];
			} else {
			{null = _agent createInInventory _x} forEach [_myTop,_myBottom,_myShoe];
			_v = _agent createInInventory "Consumable_Rags"; _v setQuantity 2;
			_v = _agent createInInventory "Pen_Red";
			_phppaper = _agent createInInventory "Consumable_Paper";
			_phppaper setVariable ["message",_uid];
			_agent setVariable ["GU_ID",_uid];
			_agent setVariable ["Is_VIP",0];
			_radio = _agent createInInventory "Tool_Transmitter";
			_batt = _radio createInInventory "consumable_battery9V"; 
			_batt setVariable ["power",30000];
		};
			
		};

		_agent setVariable ["HSD",0];
		_agent setVariable ["Coins",0];
		_agent setVariable ["Cli_Name",_name];
		_agent setVariable ["SpectateMode",0];
		_agent setVariable ["GU_ID",_uid];
		_agent setVariable ["ChatStat",1];
		_agent call init_newPlayer;
		call init_newBody;
		
		_freePos = connectedPlayers find 0;
		connectedPlayers set [_freePos,_id];
	};
	{ [_x,format["420Gaming: Player %1 has Connected..",_name],"colorSideChannel"] call fnc_playerMessage; }forEach players; //Connect message all players on server

	_id spawnForClient {
		waitUntil {vehicle player == player};
		[] spawn {
		while {true} do {
			_Time = [120,60,180,220];
			_randomElement = _Time select floor random count _Time;
			sleep _randomElement;
				if ( (lifeState player == "ALIVE") && (not captive player) ) then {
				Player_Save_Handel = [player]; publicVariableServer "Player_Save_Handel";
				};
			};
		};
		
		Nigger_fired = {
			_missile = _this select 6;
			if ( (vehicle player) distance [10060.891, 5436.0332] < 750 ) then {
				systemchat "Shooting in/near SafeZone is forbidden. Your Name and UID was sent to an Admin";
				deleteVehicle _missile;
			};
		};
		[] spawn {
		while {true} do {
			player removeAllEventHandlers "Fired";
			player addEventHandler ["fired", {call Nigger_fired;}];
			sleep 0.1;
		};
		};
    };
	
	_id SpawnForClient {
		[] spawn {
			grassToggleZ = false;
			while {true} do {
			if ( inputAction "Point" > 0 && !(grassToggleZ)) then {
				setTerrainGrid 35;
				setViewDistance 770;
				grassToggleZ = true;
				systemChat "FPS Boost Enabled!";
			}else{
				if ( inputAction "Point" > 0 && grassToggleZ) then {
					setTerrainGrid 25;
					setViewDistance 1100;
					grassToggleZ = false;
					systemChat "FPS Boost Disabled!";
					};
				};
				sleep 0.2;
			};
		};
			
			[] spawn {
			   earplugToggle = false;
			   while {true} do {
				if ( inputAction "Turbo" > 0 && inputAction "leanrighttoggle" > 0 && !(earplugToggle)) then {
					1 fadeSound 0.25;
					earplugToggle = true;
					systemChat "Ear-Plugs On!";
					}else{
					if ( inputAction "Turbo" > 0 && inputAction "leanrighttoggle" > 0 && earplugToggle) then 
						{
						 1 fadeSound 1;
						 earplugToggle = false;
						 systemChat "Ear-Plugs Off!";
						};
					};
				  sleep 0.2;
			   };
			};
	};
	
	
	// Safe zone god mode functions!
	[_name] spawn {
		_name = _this select 0;
		{
			if (name _x == _name) then {
				_InZone = {
				waituntil { sleep 1; (vehicle _x) distance [10060.891, 5436.0332] < 175};
				_x allowDamage false;
				_x setCaptive false;
				_x setVariable["restrainedwith",0];
				(owner _x) spawnForClient { titleText ["Welcome to Staroye Safe-Zone. GodMode is Enabled!.","PLAIN DOWN"]; systemChat "Welcome to Staroye Safe-Zone. GodMode is Enabled!."; };
				_IsSafe = true;
				waituntil { sleep 1; (vehicle _x) distance [10060.891, 5436.0332] > 175};
				(owner _x) spawnForClient { titleText ["You have left the Safe-Zone! GodMode Disabled!","PLAIN DOWN"]; systemChat "You have left the Safe-Zone! GodMode Disabled!"; };
				_x allowDamage true;
				_IsSafe = false;
				call _InZone;
				};
				call _InZone;
			};
		}forEach players;

	};
	
	[_name] call DZ_GasTrigger; // Gas Trigger call
	
	_VIPArray = [];
};

onClientRespawn _clientRespawn;
onPlayerConnecting _clientConnect;
onPlayerDisconnected _disconnectPlayer;