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

			if ((vehicle player) distance [4581,10184] < 850) then {
			_cam2 = "camera" camCreate [4581,10184,375];
			_cam2 cameraEffect ["INTERNAL", "back"];
			_cam2 camSetFOV 1.9;
			_cam2 camSetTarget FocusOBJ;
			_cam2 camSetRelPos [0,-1,375];
			_cam2 camCommit 2;

			sleep 11.5;
			_cam2 cameraEffect ["terminate","BACK"]; 
			camDestroy _cam2;
			 };
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
[[0, 3767.5488, 10920.281],  
[0, 3828.6565, 10923.034],  
[0, 3836.2263, 11231.056],  
[0, 3838.3442, 10697.821],  
[0, 3854.9512, 10678.164],  
[0, 3856.3372, 11202.664],  
[0, 3872.8989, 11222.775],  
[0, 3873.6125, 10967.359],  
[0, 3884.4336, 10614.166],  
[0, 3892.0691, 10602.567],  
[0, 3893.1133, 10986.654],  
[0, 3895.3757, 11240.520],   
[0, 3911.9375, 11257.081],  
[0, 3928.4995, 11277.192],  
[0, 3934.6460, 10537.474],   
[0, 3945.0613, 11293.754],  
[0, 3965.1719, 11306.767],  
[0, 3993.5637, 11323.328],  
[0, 4025.5042, 11329.243],  
[0, 4038.5166, 11325.694],  
[0, 4066.9084, 11302.035],  
[0, 4072.8232, 11291.388],  
[0, 4085.8359, 11273.644],  
[0, 4117.7769, 11268.911],  
[0, 4135.8340, 10344.921],   
[0, 4141.1313, 10379.944],  
[0, 4157.6821, 10361.575],  
[0, 4160.3643, 11296.121],  
[0, 4184.0098, 10262.788],  
[0, 4192.5317, 10251.640],   
[0, 4195.7510, 10306.323],   
[0, 4198.4390, 10241.810],    
[0, 4202.9517, 11318.597],  
[0, 4211.2832, 10283.762],  
[0, 4216.8838, 10215.094],  
[0, 4221.9302, 10268.072],  
[0, 4233.2754, 10253.021],  
[0, 4233.7095, 11329.243],  
[0, 4234.2886, 10194.964],  
[0, 4243.3330, 10234.022],   
[0, 4244.3525, 10182.956],  
[0, 4257.2954, 10166.191],  
[0, 4258.4438, 10214.270],   
[0, 4266.3911, 10157.668],  
[0, 4271.6758, 10194.047],  
[0, 4278.4971, 10128.893],  
[0, 4278.6626, 11338.707],  
[0, 4283.6816, 10176.521],  
[0, 4296.4653, 10102.059],  
[0, 4304.6880, 11338.707],   
[0, 4309.3149, 10148.721],  
[0, 4323.7510, 10128.052],   
[0, 4328.3477, 11324.511],  
[0, 4348.4585, 11304.400],    
[0, 4362.6543, 11280.741],  
[0, 4369.7524, 11262.997],  
[0, 4382.7646, 11248.801],  
[0, 4395.7778, 11233.422],  
[0, 4409.9736, 11216.859],  
[0, 4419.4375, 11207.396],  
[0, 4446.6465, 11177.821],  
[0, 4454.9272, 11167.175],  
[0, 4462.0249, 11158.895],  
[0, 4480.9531, 11118.672],  
[0, 4489.2339, 11100.929],  
[0, 4497.5142, 11086.732],  
[0, 4508.1616, 11066.621],  
[0, 4518.8086, 11051.242],  
[0, 4525.9063, 11042.961],  
[0, 4534.1870, 11032.315],   
[0, 4534.7378, 9648.3076],  
[0, 4537.7085, 9628.0049],  
[0, 4540.1152, 9674.1650],   
[0, 4542.5815, 9604.6064],  
[0, 4543.6650, 9582.1377],   
[0, 4544.4536, 9705.8652],  
[0, 4546.4902, 9556.0908],  
[0, 4549.5659, 11011.021],  
[0, 4562.5791, 10992.092],  
[0, 4573.2256, 10975.531],  
[0, 4583.8726, 10961.336],  
[0, 4596.8853, 10943.592],  
[0, 4608.7153, 10934.127],  
[0, 4618.2036, 9516.6934],  
[0, 4624.0938, 10930.578],  
[0, 4652.6499, 9526.1777],  
[0, 4659.5835, 10925.846],  
[0, 4667.9912, 9657.4229],  
[0, 4673.0640, 9540.8828],   
[0, 4685.6089, 10921.113],  
[0, 4716.3667, 10911.650],   
[0, 4730.1387, 9564.6367],  
[0, 4737.6602, 10899.820],   
[0, 4745.8184, 9541.2949],  
[0, 4757.7710, 10884.441],   
[0, 4766.6489, 9521.7285],  
[0, 4776.6987, 10857.233],  
[0, 4780.4453, 10872.242],  
[0, 4790.8940, 10834.756],   
[0, 4791.5835, 10858.148],  
[0, 4796.9326, 10850.452],  
[0, 4808.2432, 10840.712],  
[0, 4818.7769, 10831.811],  
[0, 4833.0518, 10819.180],   
[0, 4839.9561, 10810.595],  
[0, 4851.8330, 10455.133],   
[0, 4855.5317, 10477.866],  
[0, 4858.9917, 10776.385],  
[0, 4862.2642, 10426.798],  
[0, 4867.4819, 10385.365],  
[0, 4867.7837, 10676.879],  
[0, 4868.3350, 10753.754],   
[0, 4869.3696, 10690.161],  
[0, 4870.0151, 10714.396],  
[0, 4870.9692, 10739.076],  
[0, 4872.8730, 10730.234],   
[0, 4879.7637, 10513.081],  
[0, 4882.3076, 10439.735],  
[0, 4884.4502, 10487.995],  
[0, 4886.6606, 10525.205],  
[0, 4888.6577, 10470.095],  
[0, 4893.2803, 10453.670],   
[0, 4894.1260, 10349.093],   
[0, 4895.7339, 10414.042],  
[0, 4897.5605, 10437.414],  
[0, 4906.0005, 10636.510],   
[0, 4910.9966, 10407.874],  
[0, 4920.8027, 10380.589],  
[0, 4923.6201, 10619.535],  
[0, 4928.7402, 10354.382],  
[0, 4937.0195, 10329.723],  
[0, 4942.0200, 10608.124],    
[0, 4953.9858, 10600.637],  
[0, 4965.5259, 10589.747],  
[0, 5058.8931, 10189.331],  
[0, 5078.0923, 10211.556],  
[0, 5084.6328, 10169.704],  
[0, 5098.3467, 9903.7617],  
[0, 5112.0020, 10047.460],    
[0, 5112.7764, 9884.4268],  
[0, 5121.4272, 9704.5518],  
[0, 5125.9951, 10024.568],  
[0, 5129.9473, 10005.135],  
[0, 5134.8018, 9699.9707],  
[0, 5135.8247, 9831.5303],  
[0, 5136.9092, 9984.4082],  
[0, 5145.7759, 9955.5410],   
[0, 5154.0449, 9696.9746],  
[0, 5159.6504, 9932.1572],  
[0, 5172.6904, 9907.0479],  
[0, 5173.5210, 9693.2090],    
[0, 5188.6758, 9878.5283],  
[0, 5200.0024, 9681.3252],  
[0, 5207.3188, 9851.9648],  
[0, 5219.4634, 9836.3223],  
[0, 5236.9321, 9816.2656],  
[0, 5256.3135, 9750.1445],  
[0, 5259.3755, 9727.7070],   
[0, 5260.1226, 9683.1914],  
[0, 5260.2388, 9707.0195]]];
DZ_PVP_spawn_point = DZ_arrayPoints select (floor random (count DZ_arrayPoints));