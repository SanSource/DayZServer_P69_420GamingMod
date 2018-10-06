DZ_GasDamageEffect = {
	
	_agent = _this select 0;
	_action = _this select 1;

	if ( _action == 1 ) then {

	//----Visual Effects----
	_agent spawnForClient {
	_commit = (random 120) min 30;

	"filmGrain" ppEffectEnable true;
	"filmGrain" ppEffectAdjust [0.1, -1, 0.1, 0.05, 2, true];
	"filmGrain" ppEffectCommit _commit;

	"radialBlur" ppEffectEnable true;
	"radialBlur" ppEffectAdjust [0.01, 0.01, 0.06, 0.06];
	"radialBlur" ppEffectCommit _commit;

	"chromAberration" ppEffectEnable true;
	"chromAberration" ppEffectAdjust [(random 0.05) min 0.02, (random 0.05) min 0.02,true];
	"chromAberration" ppEffectCommit _commit;
	
	enableCamShake true; 
	addCamShake [(random 2.5) min 1, _commit, (random 50) min 25];

	_msgarrNEGA = [
	["I Have a Strange feeling","colorImportant"],
	["My Eyes Are Burning I'm Having trouble Breathing!","colorImportant"],
	["My Skin is Burning!","colorImportant"],
	["My face is Itchy!","colorImportant"],
	["My Body Feels Itchy!","colorImportant"]
	];
	{
		statusChat [_x select 0,_x select 1];
		sleep (random 30) min 5;
	} forEach _msgarrNEGA;

	};

	} else {

	_agent spawnForClient {
	sleep (random 60) min 25;
	"filmGrain" ppEffectEnable false;
	"radialBlur" ppEffectEnable false;
	"chromAberration" ppEffectEnable false;

	_msgarrPOSA = [
		["I feel sick","colorImportant"],
		["My Eyes Hurt","colorAction"],
		["I Can Breathe better","colorAction"],
		["I feel much better now","colorFriendly"]
		];
		{
			statusChat [_x select 0,_x select 1];
			sleep (random 30) min 5;
		} forEach _msgarrPOSA;

	}; 

	};
};

DZ_GasTrigger = {
_name = _this select 0;

[_name] spawn {
		sleep 5;
		_name = _this select 0;
		{
			if (name _x == _name) then {
				_InGas = {
				_vehicle = (vehicle _x);
				_GearArr = ["NBCJacketGray","NBCPantsGray","GasMask","GP5GasMask"];
				waituntil { sleep 1; (vehicle _x) distance [1728,14058] < 500};
				_MaskTypeOF = (typeOf (_vehicle itemInSlot "Mask"));
				_BodyTypeOF = (typeOf (_vehicle itemInSlot "Body"));
				_LegsTypeOF = (typeOf (_vehicle itemInSlot "Legs"));

				_Mask = (_vehicle itemInSlot "Mask");
				_Body = (_vehicle itemInSlot "Body");
				_Legs = (_vehicle itemInSlot "Legs");

				if ( !(_MaskTypeOF in _GearArr) or !(_BodyTypeOF in _GearArr) or !(_LegsTypeOF in _GearArr) ) then {

				[(owner _x),1] call DZ_GasDamageEffect;

				while {(vehicle _x) distance [1728,14058] < 500} do {
				_vehicle say3D ["z_cough_1", 50, 111450];
			 	_pBlood = _x getVariable ["blood",0];
			    _phealth = _x getVariable ["health",0];
				_reduceH = _phealth - (round (random 5) min 2);
				_reduceB = _pBlood - (round(random 10) min 5);
			    _x setVariable ["blood",_reduceB];
			    _x setVariable ["health",_reduceH];
			    sleep (random 15) min 5;
			    _vehicle say3D ["z_cough_0", 50, 111450];
				};

				waituntil { sleep 1; (vehicle _x) distance [1728,14058] > 500};
				[(owner _x),0] call DZ_GasDamageEffect;

				} else {

				if ( (damage _Mask) == 1 or (damage _Legs) == 1 or (damage _Body) == 1 ) then {
						[(owner _x),1] call DZ_GasDamageEffect;
						while {(vehicle _x) distance [1728,14058] < 500} do {
						_vehicle say3D ["z_cough_1", 50, 111450];
					 	_pBlood = _x getVariable ["blood",0];
					    _phealth = _x getVariable ["health",0];
						_reduceH = _phealth - (round (random 5) min 2);
						_reduceB = _pBlood - (round(random 10) min 5);
					    _x setVariable ["blood",_reduceB];
					    _x setVariable ["health",_reduceH];
					    sleep (random 15) min 5;
					    _vehicle say3D ["z_cough_0", 50, 111450];
						};
						waituntil { sleep 1; (vehicle _x) distance [1728,14058] > 500};
						[(owner _x),0] call DZ_GasDamageEffect;
					} else {
					diag_log format ["DB: HAS REQUIRED GEAR TO ENTER!"];
				};

				};
				call _InGas;
				};
				call _InGas;
			};
	}forEach players;

};

};