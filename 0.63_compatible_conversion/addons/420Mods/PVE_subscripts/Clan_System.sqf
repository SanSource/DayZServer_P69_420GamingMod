DZ_Clans = ["ZeroFucks","ANACONDA","DZ_808_UID","DZ_PP_UID"];
//=============================

DZ_ZeroFucks_UID = 
[
"76561198044783362",
"76561198046865168",
"76561198039843462",
"76561198116926178",
"76561198127900373",
"76561198009090137",
"76561198140412976",
"76561198358204585",
"76561198048537372",
"76561197983323121",
"76561198015597159",
"76561198126129125",
"76561198086961828",
"76561198128599071",
"76561198133997275",
"76561198173309450",
"76561198058440564",
"76561198083566185",
"76561198027778464",
"76561198053539577",
"76561198057323264"
];

DZ_808_UID = [
"76561198124327471",
"76561198208707411",
"76561198114262210",
"76561198354613132"
];

DZ_ANACONDA_UID = [
"76561198145436354",
"76561198061670659",
"76561198052625477",
"76561198140545335",
"76561198420108157",
"76561197983917037",
"76561198134453136",
"76561198329690433",
"76561198133222879",
"76561198093854061"
];

DZ_PP_UID = [
"76561197960287930",
"76561198124327471",
"76561198141859473",
"76561198077952070",
"76561198205558725",
"76561198188943021",
"76561198041912928",
"76561198110865958"
];


[] spawn {
while {true} do {
	_teamArr = [];
	{
		_uid = getClientUID (owner _x);
		if (_uid in DZ_ZeroFucks_UID) then {
		_veh = (vehicle _x);
		_teamArr = _teamArr + [_veh];
		};
	}forEach players;
	sleep 1;

	for "_ii" from 0 to (count _teamArr) do {
		{
			_target = _teamArr select _ii;
			_uid = getClientUID (owner _x);
			if (_uid in DZ_ZeroFucks_UID) then {
					[(owner _x),_target] SpawnForClient {
						_target = _this select 1;
						_green = format["#(argb,8,8,3)color(0.388,1.012,0.292,1,CO)"];
						_todo = ["Armband","Shoes"];
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
sleep 10;
_teamArr = [];
};
};

[] spawn {
while {true} do {
	_teamArr = [];
	{
		_uid = getClientUID (owner _x);
		if (_uid in DZ_ANACONDA_UID) then {
		_veh = (vehicle _x);
		_teamArr = _teamArr + [_veh];
		};
	}forEach players;
	sleep 1;

	for "_ii" from 0 to (count _teamArr) do {
		{
			_target = _teamArr select _ii;
			_uid = getClientUID (owner _x);
			if (_uid in DZ_ANACONDA_UID) then {
					[(owner _x),_target] SpawnForClient {
						_target = _this select 1;
						_red = format["#(argb,8,8,3)color(0.1254,0.7725,0.6862,1,CO)"];
						_todo = ["Body","Feet"];
						{
						 _Next = _x;
						 _itemto = (_target itemInSlot _Next);
						 _itemto setObjectTexture[0,_red];
						 _itemto setObjectTexture[1,_red];
						 _itemto setObjectTexture[2,_red];
						}forEach _todo;
					};
			};
		}forEach players;
	};
sleep 10;
_teamArr = [];
};
};

[] spawn {
while {true} do {
	_teamArr = [];
	{
		_uid = getClientUID (owner _x);
		if (_uid in DZ_808_UID) then {
		_veh = (vehicle _x);
		_teamArr = _teamArr + [_veh];
		};
	}forEach players;
	sleep 1;

	for "_ii" from 0 to (count _teamArr) do {
		{
			_target = _teamArr select _ii;
			_uid = getClientUID (owner _x);
			if (_uid in DZ_808_UID) then {
					[(owner _x),_target] SpawnForClient {
						_target = _this select 1;
						_red = format["#(argb,8,8,3)color(0.1254,0.7725,0.6862,1,CO)"];
						_todo = ["Body","Feet"];
						{
						 _Next = _x;
						 _itemto = (_target itemInSlot _Next);
						 _itemto setObjectTexture[0,_red];
						 _itemto setObjectTexture[1,_red];
						 _itemto setObjectTexture[2,_red];
						}forEach _todo;
					};
			};
		}forEach players;
	};
sleep 10;
_teamArr = [];
};
};

[] spawn {
while {true} do {
	_teamArr = [];
	{
		_uid = getClientUID (owner _x);
		if (_uid in DZ_PP_UID) then {
		_veh = (vehicle _x);
		_teamArr = _teamArr + [_veh];
		};
	}forEach players;
	sleep 1;

	for "_ii" from 0 to (count _teamArr) do {
		{
			_target = _teamArr select _ii;
			_uid = getClientUID (owner _x);
			if (_uid in DZ_PP_UID) then {
					[(owner _x),_target] SpawnForClient {
						_target = _this select 1;
						_red = format["#(argb,8,8,3)color(0.0941,0.5098,0.7882,1,CO)"];
						_todo = ["Body","Feet"];
						{
						 _Next = _x;
						 _itemto = (_target itemInSlot _Next);
						 _itemto setObjectTexture[0,_red];
						 _itemto setObjectTexture[1,_red];
						 _itemto setObjectTexture[2,_red];
						}forEach _todo;
					};
			};
		}forEach players;
	};
sleep 10;
_teamArr = [];
};
};