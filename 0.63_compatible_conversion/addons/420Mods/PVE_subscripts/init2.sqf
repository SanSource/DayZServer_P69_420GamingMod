"admin_spectate_1PP" addPublicVariableEventHandler
{
	private["_agent"];
	_array = _this select 1;
	_agent = _array select 0;
	_name = _array select 1;
	_time = _array select 2;
	
	   {
			if (name _x == _name) then
			{
			spectatVEH = (vehicle _x);
			Spec_Duration = _time;
            (owner _agent) publicVariableClient "spectatVEH";
            (owner _agent) publicVariableClient "Spec_Duration";
			};
		} forEach players;

			(owner _agent) spawnForClient {
			
            _cam = spectatVEH;
            _Duration = Spec_Duration;
            vehicle _cam switchCamera "INTERNAL";

            while { _Duration >=1 } do {
            	_stance = (animationState player);
            	if ( lifeState _cam == "DEAD") then {
            		vehicle player switchCamera "EXTERNAL";
            		_Duration = 0;
           	    };

           	    if (_stance == "amovpercmrunsnonwnondb" or _stance == "amovpknlmwlksnonwnondb") then {
           	    	vehicle player switchCamera "EXTERNAL";
           	    	systemChat format ["Spectate Terminated!"];
            		_Duration = 0;
           	    };

           	    _Duration = _Duration - 1;
           	    sleep 1;
           	    systemChat format ["Time Left: %1",_Duration];
           	};

           	waitUntil { _Duration <= 0 };
           	vehicle player switchCamera "EXTERNAL";

            };
	
};

DZ_IsSpectate = "false";

DZ_camUPDATE = {
_AdminName = _this select 0;
_targetName = _this select 1;
[_AdminName,_targetName] spawn {
	_AdminName = _this select 0;
	_targetName = _this select 1;
	for [{_i=0}, {_i<35}, {_i=_i+1}] do 
    { 
	{ 

	if (name _x == _targetName) then {
	targetPOS = getpos _x; 
	SpecVeh = (vehicle _x); 
	} else { 
	if (name _x == _AdminName) then {
	(owner _x) publicVariableClient "targetPOS"; 
	(owner _x) publicVariableClient "SpecVeh";
	}; 
	}; 
	}forEach players; 
  }; 
};
};

DZ_camSPAWNER = {
_AdminName = _this select 0;
_targetName = _this select 1;
sleep 2;
[_AdminName,_targetName] spawn {
_AdminName = _this select 0;
_targetName = _this select 1;
{ 
if ((_x getVariable ['GU_ID',0]) == _AdminName) then {
_AdminCli = (owner _x);
_AdminCli SpawnForClient {
if ( lifeState SpecVeh == "ALIVE") then {
_cam = "camera" camCreate [(targetPOS select 0),(targetPOS select 1),(targetPOS select 2) + 5];
_cam cameraEffect ["internal", "back"]; 
_cam camSetTarget SpecVeh; 
_cam camSetFOV 1.2; 
_cam camCommit 2;
_time = 60;
for [{_i=0}, {_i< 60}, {_i=_i+1}] do {
if ( lifeState SpecVeh == "ALIVE") then {
_cam camSetPos [(targetPOS select 0) - 3,(targetPOS select 1),(targetPOS select 2) + 10]; 
_cam camSetRelPos [0,-1,1.9];
_cam camCommit 2;
_time = _time - 1;
//systemChat format["Time left: %1",_time];
sleep 1;
} else { _cam cameraEffect ["terminate","BACK"]; camDestroy _cam; };
};
waitUntil { _time <= 1 };
_cam cameraEffect ["terminate","BACK"]; 
camDestroy _cam;
 };
};
};
 }forEach players;

};

};

DZ_getHigh = {
	_agent = _this select 0;
	_veh = _this select 1;
	[_agent,_veh] spawnForClient {
	_agent = _this select 0;
	_veh = _this select 1;
	if (!(_agent getVariable "fog")) exitwith {};
	_cl = 1;
	_int = 1;
	_source = "#particlesource" createVehicleLocal getPosATL _veh;
	_source setParticleParams
	/*Sprite*/		[["\dz\data\data\ParticleEffects\Universal\Universal", 16, 12, 8],"",// File,Ntieth,Index,Count,Loop(Bool)
	/*Type*/			"Billboard",
	/*TimmerPer*/		1,
	/*Lifetime*/		0.1*_int,
	/*Position*/		[0,0,0],
	/*MoveVelocity*/	[0, 0, 0],
	/*Simulation*/	0, 0.05, 0.04, 0.05,	//rotationVel,weight,volume,rubbing
	/*Scale*/		[1.5, 1.5,1.5],
	/*Color*/		[[_cl, _cl, _cl, 0.05],[_cl, _cl, _cl, 0.1],[_cl, _cl, _cl, 0.2],[0.05+_cl, 0.05+_cl, 0.05+_cl, 0.1],[0.1+_cl, 0.1+_cl, 0.1+_cl, 0.08],[0.2+_cl, 0.2+_cl, 0.2+_cl, 0.05], [1,1,1, 0]],
	/*AnimSpeed*/		[0.8,0.3,0.25],
	/*randDirPeriod*/	1,
	/*randDirIntesity*/	0,
	/*onTimerScript*/	"",
	/*DestroyScript*/	"",
	/*Follow*/		[_veh, [[0,0.1,0.62],["Head",1]]]];
	//[lifeTime, position, moveVelocity, rotationVelocity, size, color, randomDirectionPeriod, randomDirectionIntensity, {angle}, bounceOnSurface]
	_source setParticleRandom [2, [0, 0, 0], [0.0, 0.0, 0.0], 0, 0.2, [0, 0, 0, 0.1], 0, 0, 10];
	_source setDropInterval (0.02*_int);
	_veh setVariable ["breathingParticleSource",_source];
	
	null = [_source,_veh] spawn {
		_source = _this select 0;
		_veh = _this select 1;
		while {(alive _veh) and !(isNull _source)} do
		{
			_source setDropInterval 2;
			_source setDropInterval 0.02;
		};
		deleteVehicle _source;
	};
	};
	_agent spawnForClient {
	private["_commit"];
	_commit = 60;

	"colorCorrections" ppEffectEnable true; "filmGrain" ppEffectEnable true;
	"filmGrain" ppEffectAdjust [0.1, -1, 0.1, 0.05, 2, false];  "filmGrain" ppEffectCommit 1; 
	"colorCorrections" ppEffectAdjust [1, 0.75, 0, [0.8,0.9,1,-0.1], [1,1,1,2], [-0.5,0,-1,5]]; "colorCorrections" ppEffectCommit 1;
	
	"dynamicBlur" ppEffectAdjust [12];
	"dynamicBlur" ppEffectCommit 0.1;
	
	"chromAberration" ppEffectEnable true;
	"chromAberration" ppEffectAdjust [0.01,0.01,true];
	"chromAberration" ppEffectCommit 0.1;
	
	"radialBlur" ppEffectEnable true;
	"radialBlur" ppEffectAdjust [0.02,0.02,0.15,0.15];
	"radialBlur" ppEffectCommit 0.1;
	
	enableCamShake true; addCamShake [3, 3, 30];
	
	sleep (random 60) min 25;
	"filmGrain" ppEffectEnable false;
	"radialBlur" ppEffectEnable false;
	"chromAberration" ppEffectEnable false;
	"colorCorrections" ppEffectEnable false;

	}; 
};

"DZM_FlyAdmin" addPublicVariableEventHandler
{
	private["_agent"];
	_array = _this select 1;
	_player = _array select 0;
	_action = _array select 1;
	switch (_action) do {
	case "moveforward" : {
		_vehicle = (vehicle _player);
		_vel = velocity _vehicle;
		_dir = direction _vehicle;
		_speed = 0.8;
		_vehicle setVelocity [(_vel select 0)+(sin _dir*_speed),(_vel select 1)+
		(cos _dir*_speed),1.4];
	}; 
	case "moveback" : {
		_vehicle = (vehicle _player);
		_vel = velocity _vehicle;
		_dir = direction _vehicle;
		_speed = -0.8;
		_vehicle setVelocity [(_vel select 0)+(sin _dir*_speed),(_vel select 1)+
		(cos _dir*_speed),1.4];
	};
	case "leanleft" : {
		 _leftDirection = getdir (vehicle _player);
         (vehicle _player) setdir (_leftDirection) - (5);
         _leftDirection = getdir (vehicle _player);
         (vehicle _player) setdir (_leftDirection) - (5);
         _leftDirection = getdir (vehicle _player);
         (vehicle _player) setdir (_leftDirection) - (5);
	};
	case "leanright" : {
		 _rightDirection = getdir (vehicle _player);
         (vehicle _player) setdir (_rightDirection) + (5);
         _rightDirection = getdir (vehicle _player);
         (vehicle _player) setdir (_rightDirection) + (5);
         _rightDirection = getdir (vehicle _player);
         (vehicle _player) setdir (_rightDirection) + (5);
	};
	case "hover" : {
		(vehicle _player) setvelocity [0,0,0.2];
	};
	case "moveUp" : {
		_vehicle = (vehicle _player);
		_vel = velocity _vehicle;
		_dir = direction _vehicle;
		_speed = 3;
		_vehicle setVelocity [(_vel select 0),(_vel select 1),5];
	};
   };
};



DZM_SortFactions = 
{
	_Members = _this select 0; //UID Array of faction
	[_Members] spawn {
		_Members = _this select 0;
		_teamArr = [];
		{
			_uid = getClientUID (owner _x);
			if (_uid in _Members) then {
			_veh = (vehicle _x);
			_teamArr = _teamArr + [_veh];
			};
		}forEach players;

		for "_ii" from 0 to (count _teamArr) do {
			{
				_target = _teamArr select _ii;
				_uid = getClientUID (owner _x);
				if (_uid in _Members) then {
						[(owner _x),_target] SpawnForClient {
							_target = _this select 1;
							_green = format["#(argb,8,8,3)color(0.388,1.012,0.292,1,CO)"];
							_todo = ["Armband","Feet","Gloves"];
							{
							 _Next = _x;
							 _itemto = (_target itemInSlot _Next);
							 _itemto setObjectTexture[0,_green];
							 _itemto setObjectTexture[1,_green];
							 _itemto setObjectTexture[2,_green];
							}forEach _todo;
						};
				};
			}forEach players;
		};
	_teamArr = [];
	};

};

[] spawn {
while {true} do {
_TotalFactions = [];
{
	_FactionMembers = [];
	_FactionMembers = _x getVariable ["FacMembers",[]];
	if ( count _FactionMembers > 1 ) then {
		_TotalFactions = _TotalFactions + [_FactionMembers];
	};
}forEach players;

for "_faction" from 0 to (count _TotalFactions) do {
	_IndiFaction = _TotalFactions select _faction;
	[_IndiFaction] call DZM_SortFactions;
};
diag_log format ["Total Factions on the Server: %1",count _TotalFactions];
diag_log format ["Total Factions DUMP: %1",_TotalFactions];
sleep 5;
};
};