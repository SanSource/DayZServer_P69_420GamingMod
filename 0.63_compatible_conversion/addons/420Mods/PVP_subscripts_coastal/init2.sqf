"Kill_Cam_Spectate" addPublicVariableEventHandler
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
			targetPOS = getPos spectatVEH;
			FocusOBJ = (vehicle DZ_MyOBJ);
            (owner _agent) publicVariableClient "spectatVEH";
            (owner _agent) publicVariableClient "Spec_Duration";
            (owner _agent) publicVariableClient "targetPOS";
            (owner _agent) publicVariableClient "FocusOBJ";
			};
		} forEach players;

			(owner _agent) spawnForClient {
			
            _cam = spectatVEH;
            _Duration = Spec_Duration;

            _cam = "camera" camCreate [(targetPOS select 0),(targetPOS select 1),(targetPOS select 2) + 5];
			_cam cameraEffect ["internal", "back"]; 
			_cam camSetTarget spectatVEH;
			_cam camSetFOV 1.2; 
			_cam camSetRelPos [0,-1,1.9];
			_cam camCommit 2;

            while { _Duration >=1 } do {
           	    _Duration = _Duration - 1;
           	    sleep 1;
           	};

           	waitUntil { _Duration <= 0 };
           	
           	_cam cameraEffect ["terminate","BACK"]; 
			camDestroy _cam;

			/*if ((vehicle player) distance [4581,10184] < 850) then {
			_cam2 = "camera" camCreate [4581,10184,375];
			_cam2 cameraEffect ["INTERNAL", "back"];
			_cam2 camSetFOV 1.9;
			_cam2 camSetTarget FocusOBJ;
			_cam2 camSetRelPos [0,-1,375];
			_cam2 camCommit 2;

			sleep 11.5;
			_cam2 cameraEffect ["terminate","BACK"]; 
			camDestroy _cam2;
			 };*/
            };
	
};

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
if (name _x == _AdminName) then {
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
	
	enableCamShake true; addCamShake [10, 60, 30];

	}; 
};

DZ_arrayPoints = [
[
								[0,5376,2206],
								[0,5343,2342],
								[0,5288,2468],
								[0,5187,2354],
								[0,5176,2067],
								[0,5111,2170],
								[0,4997,2241],
								[0,4886,2023],
								[0,5171,2526],
								[0,5020,2553],
								[0,5012,2679],
								[0,4917,2466],
								[0,4823,2576],
								[0,4776,2379],
								[0,4675,2279],
								[0,4477,2318],
								[0,4427,2213],
								[0,4229,2272],
								[0,4300,2492],
								[0,4393,2526],
								[0,4559,2388],
								[0,4804,2657],
								[0,4609,2482],
								[0,4526,2622],
								[0,4638,2737],
								[0,5349,2753]
	]
];
DZ_PVP_spawn_point = DZ_arrayPoints select (floor random (count DZ_arrayPoints));