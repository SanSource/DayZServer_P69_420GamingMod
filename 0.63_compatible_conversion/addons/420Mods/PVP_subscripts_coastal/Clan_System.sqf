DZ_Clans = ["ZeroFucks","75th","NAT"];
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
"76561198053539577"
];

DZ_75th_UID = 
[
"76561198117612610",
"76561198170933298",
"76561198382887447",
"76561198140545335",
"76561200660877176",
"76561198110590190"
];

DZ_NAT_UID = 
[
"76561198309122620",
"76561198238763260",
"76561198185263630",
"76561198225215524",
"76561198165727549",
"76561198137653231",
"76561197993453383",
"76561197980350668",
"76561198382548202",
"76561198320434676",
"76561198116490018",
"76561198165908197",
"76561198091241061",
"76561198251547360",
"76561198101360733",
"76561198119450388",
"76561198320634950",
"76561198382887447",
"76561198123485956",
"76561198105649051",
"76561198399887177",
"76561198121200277",
"76561198105076250"
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
						_todo = ["Body","Feet"];
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
		if (_uid in DZ_75th_UID) then {
		_veh = (vehicle _x);
		_teamArr = _teamArr + [_veh];
		};
	}forEach players;
	sleep 1;

	for "_ii" from 0 to (count _teamArr) do {
		{
			_target = _teamArr select _ii;
			_uid = getClientUID (owner _x);
			if (_uid in DZ_75th_UID) then {
					[(owner _x),_target] SpawnForClient {
						_target = _this select 1;
						_red = format["#(argb,8,8,3)color(1.012,0.052,0.052,1,CO)"];
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
		if (_uid in DZ_NAT_UID) then {
		_veh = (vehicle _x);
		_teamArr = _teamArr + [_veh];
		};
	}forEach players;
	sleep 1;

	for "_ii" from 0 to (count _teamArr) do {
		{
			_target = _teamArr select _ii;
			_uid = getClientUID (owner _x);
			if (_uid in DZ_NAT_UID) then {
					[(owner _x),_target] SpawnForClient {
						_target = _this select 1;
						_red = format["#(argb,8,8,3)color(0.7372,0.2745,0.9843,1,CO)"];
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