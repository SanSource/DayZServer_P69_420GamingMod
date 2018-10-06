DZ_Vaffect = {
   _planePOSfollow = _this select 0;
   _vehicle = _this select 1;
  {
      _id = owner _x;
      [_id,_planePOSfollow,_vehicle] spawnForClient {
      _follower = _this select 2;
      _posF = _this select 1;
      _pos = [(_posF select 0),(_posF select 1),0];
      private ["_source","_source2","_source3"]; 
      _source = "#particlesource" createVehicleLocal _pos;
      _source setParticleParams
      /*Sprite*/      [["\dz\data\data\ParticleEffects\Universal\Universal", 16, 10, 32, 1],"",// File,Ntieth,Index,Count,Loop(Bool)
      /*Type*/      "Billboard",
      /*TimmerPer*/   3,
      /*Lifetime*/    0.5,
      /*Position*/    [0, 0, 0.3],
      /*MoveVelocity*/  [0, 0, 0.2],
      /*Simulation*/    0.2, 0.05, 0.04, 0.05, //rotationVel,weight,volume,rubbing //0, 0.05, 0.04, 0.05,
      /*Scale*/     [2, 1.5, 1.6],
      /*Color*/     [[0.8,1,0.3,0],[0.8,1,0.3,-1],[0.8,1,0.3,-3],[0.8,1,0.3,-3],[0.8,1,0.3,-1],[0.8,1,0.3,0]],
      /*AnimSpeed*/   [0.8,0.3,0.25], //[0.8,0.3,0.25],
      /*randDirPeriod*/ 0.1,
      /*randDirIntesity*/ 0.05,
      /*onTimerScript*/ "",
      /*DestroyScript*/ "",
      /*Follow*/      _follower];
      
      //[lifeTime, position, moveVelocity, rotationVelocity, size, color, randomDirectionPeriod, randomDirectionIntensity]
      _source setParticleRandom [1, [-1, 0, 0], [0.1, 0.1, 0.4], 0.1, 0.1, [0, 0, 0, 0], 0, 0];
      _source setDropInterval (0.03);

      _source2 = "#particlesource" createVehicleLocal _pos;
      _source2 setParticleParams
      /*Sprite*/      [["\dz\data\data\ParticleEffects\Universal\Universal", 16, 7, 48, 1],"",// File,Ntieth,Index,Count,Loop(Bool)
      /*Type*/      "Billboard",
      /*TimmerPer*/   3,
      /*Lifetime*/    3,
      /*Position*/    _particle_position, 
      /*MoveVelocity*/  [0.35, 0.25, 0.15],
      /*Simulation*/    5, 1.5, 0.04, 0.05, //rotationVel,weight,volume,rubbing //0, 0.05, 0.04, 0.05,
      /*Scale*/     [2.8, 0.5, 1.9],
      /*Color*/     [[0.6,0.6,0.6,0],[0.7,0.7,0.7,0.2],[0.8,0.8,0.8,0.1],[1,1,1,0]],
      /*AnimSpeed*/   [1,0.6,0.3], //[0.8,0.3,0.25],
      /*randDirPeriod*/ 0,
      /*randDirIntesity*/ 0,
      /*onTimerScript*/ "",
      /*DestroyScript*/ "",
      /*Follow*/      _follower];
      
      //[lifeTime, position, moveVelocity, rotationVelocity, size, color, randomDirectionPeriod, randomDirectionIntensity]
      _source2 setParticleRandom [1.5, [-1, 0, 0], [0.15, 0.15, 0.3], 30, 0.2, [0, 0, 0, 0], 0, 0];
      _source2 setDropInterval (0.5);

		 _source3 = "#particlesource" createVehicleLocal _pos;
		 _source3 setParticleParams
		[["\dz\data\data\ParticleEffects\Universal\Universal", 16, 7, 48, 1],
		"",
		"Billboard", 
		1, 8, [0, 0, 0], 
		[0, 0, 2.5], 
		0, 10, 7.9, 0.066, 
		[2, 6, 12], 
		[[0.1, 0.1, 0.1, 1], 
		[0.25, 0.25, 0.25, 0.5], 
		[0.5, 0.5, 0.5, 0]], 
		[0.125],
		1,
		0, 
		"",
		"",
		_follower];
		_source3 setParticleRandom [1.5, [0, 0, 0], [0.15, 0.15, 0.3], 30, 0.2, [0, 0, 0, 0], 0, 0];
		_source3 setDropInterval (0.15);

      sleep 60;
      deleteVehicle _source;
      deleteVehicle _source2;
      deleteVehicle _source3;
        };

    }forEach players;
};

DZ_BurnPlayerScript = 
{

_ActionType = _this select 0;
_PlayerUID = _this select 1;
_TargetUID = _this select 2;
_vicName = "";
_EnemyName = "";

if ( _ActionType == "CUT" ) then {
{
	
if ( (_x getVariable ["GU_ID",0]) == _TargetUID ) then {
	_vicName = (name _x);
	_vehicle = (vehicle _x);
	[_vehicle,_vicName,_EnemyName] spawn {
	_niggermsgZ = ["had his throat slit","was executed Taliban style","had their head cuttoff","was given a Colombian neck tie"];
	_selecRms = _niggermsgZ select floor random count _niggermsgZ;

	_vehicle = _this select 0;
	_vicName = _this select 1;
	_EnemyName = _this select 2;
	_rnd = "";
	_screamF = ["z_scream_w_0","z_scream_w_1","z_scream_w_2","z_scream_w_3","z_scream_w_4"];
	_screamM = ["z_scream_0","z_scream_1","z_scream_2","z_scream_3","z_scream_4"];
	if ( _vehicle isKindOf "SurvivorFemale" ) then {
    _rnd = _screamF select floor random count _screamF;
	} else {
    _rnd = _screamM select floor random count _screamM;
	};
    _vehicle say3D [_rnd, 50, 111450];
    sleep 3;
    _vehicle setDamage 1;
    { [_x,format["%1 %2 by %3",_vicName,_selecRms,_EnemyName],"colorAction"] call fnc_playerMessage; }forEach players;
	};
} else {
	if ( (_x getVariable ["GU_ID",0]) == _PlayerUID ) then {
		_EnemyName = (name _x);
		_x playAction "CutThroat";
		_x playAction "Stand";
	};
};

}forEach players;

};

if ( _ActionType == "BURN" ) then {

[_PlayerUID,_TargetUID] spawn {
_niggermsg = ["cooked","burned","torched","roasted"];
_selecRand = _niggermsg select floor random count _niggermsg;
{
_PlayerUID = _this select 0;
_TargetUID = _this select 1;
_vicName = "";
_FagName = "";

_idp = (owner _x);
_guid = getClientUID _idp;
_vehicle = (vehicle _x);

if ( (_x getVariable ["GU_ID",0]) == _PlayerUID ) then {
  _FagName = (name _x);
  _x playAction "startFire";
} else {

if ( (_x getVariable ["GU_ID",0]) == _TargetUID ) then {

_vicName = (name _x);
_partFll = getposASL _vehicle;
_callsmkfl = [_partFll,_vehicle] call DZ_Vaffect;
_tt = 0;

for "_k" from 0 to 5 do {

if ( _vehicle isKindOf "SurvivorFemale" ) then {
    _difftext = ["z_scream_w_0","z_scream_w_1","z_scream_w_2","z_scream_w_3","z_scream_w_4"];
    _gb = _difftext select floor random count _difftext;
    _vehicle say3D [_gb, 50, 111450];
} else {
   _difftext = ["z_scream_0","z_scream_1","z_scream_2","z_scream_3","z_scream_4"];
  _gb = _difftext select floor random count _difftext;
  _vehicle say3D [_gb, 50, 111450];
};
_tt = _tt + 1;
sleep 6;
if (_tt == 5) then { _vehicle setDamage 1; { _x setDamage 1; }forEach (itemsInInventory _vehicle); { [_x,format["%1 was %2 to death! by %3",_vicName,_selecRand,_FagName],"colorAction"] call fnc_playerMessage; }forEach players; };

};

};
};

}forEach players;
};

};

};