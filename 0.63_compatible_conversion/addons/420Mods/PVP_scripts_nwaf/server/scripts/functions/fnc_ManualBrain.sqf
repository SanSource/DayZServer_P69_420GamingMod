diag_log "Clietn Custom FSM Running!";
FNC_DZ_ClientBrain = 
{
_client = _this select 0;
diag_log format ["init client custom FSM: ID [%1]",_client];
[_client] SpawnForClient {

//--------------
//Init values
DZ_Brightness = 1;
DZ_Contrast = 1;
DZ_dynamicBlur = 0;
DZ_colorSat = 1;
//--------------

//Scene Ready!
if ( isSceneReady && vehicle player == player ) then {

3 fadeSound 1;
0 fadeMusic 0.5;
setAperture -1;

_body = vehicle player;

"effectDazed" addPublicVariableEventHandler
{
	call dayz_bulletHit;
	effectDazed = false;
};
"actionRestrained" addPublicVariableEventHandler
{
	[(_this select 1)] call event_playerRestrained;
};	
"makeNote" addPublicVariableEventHandler
{
	notepen = (_this select 1) select 0;
	notepaper = (_this select 1) select 1;
	callFunction ["EnfWriteNote", notepaper, notepen];
};
"displayNote" addPublicVariableEventHandler
{
	callFunction ["EnfReadNote", (_this select 1)];
};
"myNotifiers" addPublicVariableEventHandler {};

_vm = (vehicle player) spawn
{
	while {alive _this} do
	{
		_this call rainCheck;
		sleep 1;
	};
};

};

while {true} do {

//sync character
if (isMultiplayer) then
{
	_attachments = itemsInInventory ((vehicle player) itemInSlot "shoulder");
	_attachmentsStr = [];
	{
		_attachmentsStr set [count _attachmentsStr,typeOf _x];
	} forEach _attachments;
	profileNamespace setVariable ["lastAttachments",_attachmentsStr];
};

//Health
_health = 	(vehicle player) getVariable["health",5000];
_blood = 	(vehicle player) getVariable["blood",5000];

if((player itemInSlot "headgear") isKindOf "Cover_BurlapSack" )then{
	setEVUser -5;
	4 fadeSound 0.4;	
	4 fadeSpeech 0.4;
	4 fadeRadio 0.4; 
};
	//Dead Check!!
	if (!(alive player)) exitWith {
		profileNamespace setVariable ["lastInventory",[]];
		profileNamespace setVariable ["lastCharacter",""];
	};
  setAperture -1;
  sleep 1; //loop timer
  //Loop End<
};

};
	
};

// Auto Respawn Fucntion
DZ_clientRespawn =
{

	_id = _this select 0;

	_ArryCharTxt = "";
	_ArryCharTxt = callFunction ["VIPConvertList"];

	_VIPArray = [];
	_VIPArray = call compile (_ArryCharTxt);

	_vm = [_id,_VIPArray] spawn {

	_arrayTop = arrayPrim select floor(random(count arrayPrim));
	_arrayBot = arraySec select floor(random(count arraySec));
	_arraySet = arrayCloth select floor(random(count arrayCloth));

	_arraySP = DZ_PVP_spawn_point select floor(random(count DZ_PVP_spawn_point));
	_pos = [(_arraySP select 1),(_arraySP select 2)];
	_dir = (_arraySP select 0);
	_enemyClose = _pos nearEntities ["SurvivorBase", 20];
	if (count _enemyclose > 0) then
	{
	_arraySP = DZ_PVP_spawn_point select floor(random(count DZ_PVP_spawn_point));
	_pos = [(_arraySP select 1),(_arraySP select 2)];
	};
	_enemyClose = _pos nearEntities ["SurvivorBase", 20];
	if (count _enemyclose > 0) then
	{
	_arraySP = DZ_PVP_spawn_point select floor(random(count DZ_PVP_spawn_point));
	_pos = [(_arraySP select 1),(_arraySP select 2)];
	};
	_enemyClose = _pos nearEntities ["SurvivorBase", 20];
	if (count _enemyclose > 0) then
	{
	_arraySP = DZ_PVP_spawn_point select floor(random(count DZ_PVP_spawn_point));
	_pos = [(_arraySP select 1),(_arraySP select 2)];
	_pos = [(_pos select 0) + round(random [50,75,100]),(_pos select 1) + round(random [50,75,100])];
	};
	
	_id = _this select 0;
	_VIPArray = _this select 1;
	_uid = getClientUID _id;

	_id spawnForClient {
	_queueTimeZ = 17;

	while {_queueTimeZ > 0} do
	{
	titleText [format["Spawning in %1 seconds... Please wait...",_queueTimeZ],"BLACK FADED",10e10];
	_queueTimeZ = _queueTimeZ - 1;
	sleep 1;
	};
	titleText [format["Please wait..."],"BLACK IN",10];
	};

	sleep 19;
	
    _agent = createAgent ["SurvivorPartsFemaleWhite", _pos, [], 0, "NONE"];
	_agent setVariable ["HSD",0];
    _agent callMethod ["GBniggerfix",_uid];
	
	_savedCharTxt = "";
    _savedCharTxt = callFunction ["ReadDSVVIP",_uid];
    _savedChar = [];
    _savedChar = call compile (_savedCharTxt);
	_typeofLD = _savedChar select 0;

	if (_typeofLD == "") then { _typeofLD = "UnActive"; } else { _typeofLD = _savedChar select 0; };
	diag_log format["DB_Load VIP Return:%1",_typeofLD];

	
    if ((_uid in Owners)||(_uid in Custom)||(_uid in Custom2) ||(_uid in Custom3)) then
	{

		if (_uid in Owners) then
		{
			num = 1;
		};	
		if (_uid in Custom) then
		{
			num = 2;
		};
		if (_uid in Custom2) then
		{
			num = 3;
		};
		if (_uid in Custom3) then
		{
			num = 4;
		};
		
		switch (num) do
		{
		case 1: {	
		  _agent setVariable ["ExecInit",20];
		  _agent setVariable ["isadmin",5];
		  _v = _agent createInInventory "BagAssaultBlack";
		  _v = _agent createInInventory "Fruit_Cannabis";
		  _v = _agent createInInventory "Medical_CigarettePack_Merkur";
		  _v = _agent createInInventory "SmershVestBackpack";
		  _v = _agent createInInventory "BallisticHelmet_Black";
		  _v = _agent createInInventory "Att_Ghillie_Woodland";
		  _v = _agent createInInventory "BookBible";
		  _v = _agent createInInventory "Pen_Red";
		  _phppaper = _agent createInInventory "Consumable_Paper";
		  _phppaper setVariable ["message",_uid];
		  _phppaper setVariable ["admver",420];
		  _v = _agent createInInventory "Att_Ghillie_Woodland";
		  _v = _agent createInInventory "CargoPants_Black";
		  _v = _agent createInInventory "M65_Jacket_Black";
		  _v = _agent createInInventory "Sneakers_Green";		  
		  _v = _agent createInInventory "balaclavamask_blackskull";
		  _v = _agent createInInventory "FirefighterAxe_Black";		  
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";		  
		  _v = _agent createInInventory "M4A1_Black";
		  _v = _agent createInInventory "Att_Suppressor_M4";
		  _v = _agent createInInventory "Att_Optic_Reflex";
		  _v = _agent createInInventory "Att_Optic_M4T3NRDS";
          _v = _agent createInInventory "GrenadeRGD5";	
          _v = _agent createInInventory "GrenadeRGD5";
          _v = _agent createInInventory "GrenadeRGD5";		  
		  _v = _agent createInInventory "Att_Optic_ACOG";
		  _v = _agent createInInventory "Att_Handguard_M4RIS_Black";
		  _v = _agent createInInventory "Att_Buttstock_M4MP_Black";
		  _v = _agent createInInventory "att_bipod_atlas";
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Ammo_556";	
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Ammo_556";
		  _vB95 = _agent createInInventory "b95";
		  _v = _vB95 createInInventory "Att_Optic_Hunting";
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";	
		  _v = _agent createInInventory "workinggloves_Black";	  
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_Morphine";
		  _v = _agent createInInventory "Medical_Morphine";	
	      _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6]; 		  

		};
		  		
		case 2: {
		  _agent setVariable ["ExecInit",20];
		  _agent setVariable ["isadmin",5];
		  _armband = _agent createInInventory "Armband_Red";
		  _armband setVariable ["quantity",5];
          _vBag = _agent createInInventory "BagAlice_Camo";
		  _v = _agent createInInventory "MilitaryBeret";
		  _v = _agent createInInventory "PlateCarrierComplete";
		  _v = _agent createInInventory "Hunting_jacket_summer";
		  _v = _agent createInInventory "HunterPants_Summer";
		  _vPis = _agent createInInventory "FNX45";
		  _v = _vPis createInInventory "M_FNX45_15Rnd";
		  _vSigh = _vPis createInInventory "Att_Optic_FNP45_MRD";
		  _v = _vSigh createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "M_FNX45_15Rnd";
		  _v = _agent createInInventory "Ammo_45FMJ";
		  _v = _agent createInInventory "Ammo_45FMJ";
		  _v = _agent createInInventory "BookBible";
		  _phppaper = _agent createInInventory "Consumable_Paper";
		  _phppaper setVariable ["message",_uid];
		  _phppaper setVariable ["admver",420];
		  _v = _agent createInInventory "Pen_Red";
		  _v = _vPis createInInventory "Att_Suppressor_Pistol";	
		  _v = _agent createInInventory "TacticalGloves_Beige";
		  _v = _agent createInInventory "MilitaryBoots_Redpunk";		  
		  _v = _agent createInInventory "balaclavamask_blackskull";
		  _v = _agent createInInventory "FirefighterAxe_Black";
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";	
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";		  
		  _vMain = _agent createInInventory "M4A1_Black";
		  _v = _vMain createInInventory "Att_Ghillie_Woodland";
		  _v = _vMain createInInventory "Att_Suppressor_M4";
		  _v = _agent createInInventory "Att_Suppressor_M4";
		  _v = _vMain createInInventory "Att_Optic_ACOG";
		  _v = _vMain createInInventory "Att_Handguard_M4RIS_Black";
		  _v = _vMain createInInventory "Att_Buttstock_M4MP_Black";
		  _v = _vMain createInInventory "att_bipod_atlas";
		  _v = _agent createInInventory "GrenadeRGD5";
	      _v = _agent createInInventory "GrenadeRGD5";
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Ammo_556";	
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Ammo_556";	
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_Morphine";
		  _v = _agent createInInventory "Medical_Morphine";
	      _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6];
          _v = _agent createInInventory "SmokeGrenade_Red";
		  _v = _agent createInInventory "M_ak101_30Rnd";
		  _v = _agent createInInventory "M_ak101_30Rnd";
		  _v = _agent createInInventory "M_ak101_30Rnd";
		  _vSecon = _agent createInInventory "AK101";
		  _v = _vSecon createInInventory "Att_Buttstock_AK_Wood_Camo";
		  _v = _vSecon createInInventory "Att_Handguard_AK_Rail_Black";
		  _v = _vSecon createInInventory "Att_Bipod_Atlas";
		  _v = _vSecon createInInventory "Att_Suppressor_AK";
		  _v = _vSecon createInInventory "Att_Optic_PSO1";
		  _vsightsec = _vSecon createInInventory "M_ak101_30Rnd";
		  _v = _vSecon createInInventory "Att_Ghillie_Woodland";
		};
		case 3: {
		  _agent setVariable ["ExecInit",20];
		  _agent setVariable ["isadmin",5];
		  _v = _agent createInInventory "ghilliehoodmossy";		
		  _v = _agent createInInventory "GhillieSuitMossy";
		  _v = _agent createInInventory "SmershVestBackpack";		  
		  _v = _agent createInInventory "BandanaMask_camopattern";		  
		  _v = _agent createInInventory "USMC_Pants_Woodland";
		  _v = _agent createInInventory "USMC_Jacket_Woodland";
		  _v = _agent createInInventory "M_Scout_5Rnd";
		  _v = _agent createInInventory "M_Scout_5Rnd";
		  _v = _agent createInInventory "M_Scout_5Rnd";
		  _v = _agent createInInventory "AmmoBox_308Win_20Rnd";
		  _v = _agent createInInventory "AmmoBox_308Win_20Rnd";
		  _v = _agent createInInventory "AmmoBox_308Win_20Rnd";
		  _v = _agent createInInventory "AmmoBox_308Win_20Rnd";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_Morphine";
		  _v = _agent createInInventory "Medical_Morphine";	
	      _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6]; 
		  _v = _agent createInInventory "Sneakers_Green";
		  _v = _agent createInInventory "workinggloves_Black";
		  _vAxe = _agent createInInventory "FirefighterAxe_Black";
		  _color = format["#(argb,8,8,3)color(0,0.8,0,1,CO)"];
		  _vAxe setObjectTexture[0,_color];
		  _vAxe setObjectTexture[1,_color]; 
		  _vAxe setObjectTexture[2,_color];
		  _v = _agent createInInventory "BookBible";
		  _v = _agent createInInventory "Pen_Red";
		  _phppaper = _agent createInInventory "Consumable_Paper";
		  _phppaper setVariable ["message",_uid];
		  _phppaper setVariable ["admver",420];
		  _vgun = _agent createInInventory "Scout_Black";
		  _v = _vgun createInInventory "CLIP_762_5Rnd";
		  _v = _agent createInInventory "CLIP_762_5Rnd";
		  _v = _agent createInInventory "M_Glock_15Rnd";
		  _v = _agent createInInventory "Att_Optic_Hunting";
		  _v = _agent createInInventory "M_Glock_15Rnd";
		  _vPisa = _agent createInInventory "Glock19";
		  _vRange = _agent createInInventory "Optics_Rangefinder";
		  _v = _vRange createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _vPisa createInInventory "Att_Suppressor_Pistol";
		  _v = _vPisa createInInventory "M_Glock_15Rnd";
		};
		case 4: {
		  _agent setVariable ["ExecInit",20];
		  _agent setVariable ["isadmin",5];
		  _v = _agent createInInventory "MiniDress_RedChecker";	
          _v = _agent createInInventory "Fruit_Cannabis";		  
		  _v = _agent createInInventory "UKAssVest_Black";
		  _v = _agent createInInventory "Sneakers_Black";		  
		  _v = _agent createInInventory "BandanaMask_blackpattern";		  
		  _v = _agent createInInventory "BallisticHelmet_Black";
		  _v = _agent createInInventory "BagAssaultBlack";
		  _v = _agent createInInventory "M_svd_10Rnd";
		  _v = _agent createInInventory "M_svd_10Rnd";					  
		  _v = _agent createInInventory "SVD";
		  _vRange = _agent createInInventory "Optics_Rangefinder";
		  _v = _agent createInInventory "Att_Optic_PSO1";		  
		  _v = _agent createInInventory "Ammo_762";
		  _v = _agent createInInventory "Ammo_762";
		  _v = _agent createInInventory "Ammo_762";
		  _v = _agent createInInventory "Ammo_762";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_Morphine";
		  _v = _agent createInInventory "Medical_Morphine";	
	      _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6]; 
		  _vAxe = _agent createInInventory "FirefighterAxe_Black";
		  _color = format["#(argb,8,8,3)color(0,0.8,0,1,CO)"];
		  _vAxe setObjectTexture[0,_color];
		  _vAxe setObjectTexture[1,_color]; 
		  _vAxe setObjectTexture[2,_color];
		  _v = _agent createInInventory "BookBible";
		  _v = _agent createInInventory "Pen_Red";
		  _phppaper = _agent createInInventory "Consumable_Paper";
		  _phppaper setVariable ["message",_uid];
		  _phppaper setVariable ["admver",420];
		};
        };
	} else {

    if (_uid in _VIPArray) then
	{
		if (_typeofLD == "UnActive") then
		{
			numVIP = "UnActive";
		};
		if (_typeofLD == "vip1") then
		{
			numVIP = 1;
		};
		if (_typeofLD == "vip2") then
		{
			numVIP = 2;
		};	
		if (_typeofLD == "vip3") then
		{
			numVIP = 3;
		};
		if (_typeofLD == "vip4") then
		{
			numVIP = 4;
		}; 
        if (_typeofLD == "vip5") then
		{
			numVIP = 5;
		};	
	    if (_typeofLD == "vip6") then
		{
			numVIP = 6;
		};
		if (_typeofLD == "vip7") then
		{
			numVIP = 7;
		};
		if (_typeofLD == "vip8") then
		{
			numVIP = 8;
		};
		if (_typeofLD == "vip9") then
		{
			numVIP = 9;
		};
		if (_typeofLD == "vip10") then
		{
			numVIP = 10;
		};
		if (_typeofLD == "vip11") then
		{
			numVIP = 11;
		};
		if (_typeofLD == "vip12") then
		{
			numVIP = 12;
		};
		if (_typeofLD == "vip13") then
		{
			numVIP = 13;
		};
		if (_typeofLD == "vip14") then
		{
			numVIP = 14;
		};
		if (_typeofLD == "vip15") then
		{
			numVIP = 15;
		};
		if (_typeofLD == "null") then
		{
			numVIP = "null";
		};

		switch (numVIP) do
		{
		case 1: {
		  _v = _agent createInInventory "BagTortilla";
		  _v = _agent createInInventory "SmershVestBackpack";
		  _v = _agent createInInventory "GorkaHelmet_complete_Black";	
		  _v = _agent createInInventory "workinggloves_Black";
		  _v = _agent createInInventory "CargoPants_Black";
		  _v = _agent createInInventory "M65_Jacket_Black";
		  _v = _agent createInInventory "Sneakers_Red";		  
		  _v = _agent createInInventory "balaclavamask_blackskull";
		  _v = _agent createInInventory "FirefighterAxe_Black";
		  _vRange = _agent createInInventory "Optics_Rangefinder";
		  _v = _vRange createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Fruit_Cannabis";
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";	
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";		  
		  _v = _agent createInInventory "M4A1_Black";
		  _v = _agent createInInventory "Att_Suppressor_M4";
		  _v = _agent createInInventory "Att_Optic_ACOG";
		  _v = _agent createInInventory "Att_Handguard_M4RIS_Black";
		  _v = _agent createInInventory "Att_Buttstock_M4MP_Black";
		  _v = _agent createInInventory "att_bipod_atlas";
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Ammo_556";	
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Ammo_556";	
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_Morphine";
		  _v = _agent createInInventory "Medical_Morphine";	
	      _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6];
 		};
		  
		case 2: {

		  _v = _agent createInInventory "BagTortilla";
		  _v = _agent createInInventory "SmershVestBackpack";
		  _v = _agent createInInventory "GorkaHelmet_complete_Green";
		  _v = _agent createInInventory "cargopants_green";
		  _v = _agent createInInventory "m65_jacket_olive";	
		  _v = _agent createInInventory "workinggloves_Black";
		  _v = _agent createInInventory "Sneakers_Green";		  
		  _v = _agent createInInventory "balaclavamask_green";
		  _v = _agent createInInventory "FirefighterAxe_green";
		  _v = _agent createInInventory "M_akm_drum";
		  _v = _agent createInInventory "M_akm_drum";		  
		  _v = _agent createInInventory "AKM";
		  _v = _agent createInInventory "Att_Suppressor_AK";
		  _v = _agent createInInventory "Att_Handguard_AK74_Camo";
		  _v = _agent createInInventory "Att_Buttstock_AK_Wood_Camo";
		  _v = _agent createInInventory "Att_Optic_Kashtan";
		  _vRange = _agent createInInventory "Optics_Rangefinder";
		  _v = _vRange createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Fruit_Cannabis";
		  _v = _agent createInInventory "Ammo_762x39";
		  _v = _agent createInInventory "Ammo_762x39";	
		  _v = _agent createInInventory "Ammo_762x39";
		  _v = _agent createInInventory "Ammo_762x39";	
		  _v = _agent createInInventory "Ammo_762x39";
		  _v = _agent createInInventory "Ammo_762x39";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_Morphine";
		  _v = _agent createInInventory "Medical_Morphine";	
	      _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6]; 	  
	
 		};		
		case 3: {

		  _v = _agent createInInventory "baghunting";
		  _v = _agent createInInventory "SmershVestBackpack";
		  _v = _agent createInInventory "ttsko_pants_Beige";
		  _v = _agent createInInventory "TTsKO_Jacket_Camo";		  
		  _v = _agent createInInventory "BandanaMask_camopattern";						  
		  _v = _agent createInInventory "Sneakers_Green";
		  _v = _agent createInInventory "WorkingGloves_Brown";
		  _v = _agent createInInventory "FirefighterAxe_Green";		  
		  _v = _agent createInInventory "M_svd_10Rnd";
		  _v = _agent createInInventory "M_svd_10Rnd";				  
		  _v = _agent createInInventory "M_svd_10Rnd";
		  _v = _agent createInInventory "M_svd_10Rnd";					  
		  _v = _agent createInInventory "SVD";
		  _vRange = _agent createInInventory "Optics_Rangefinder";
		  _v = _vRange createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Fruit_Cannabis";
		  _v = _agent createInInventory "Att_Optic_PSO1";		  
		  _v = _agent createInInventory "Ammo_762";
		  _v = _agent createInInventory "Ammo_762";
		  _v = _agent createInInventory "Ammo_762";
		  _v = _agent createInInventory "Ammo_762";
		  _v = _agent createInInventory "Ammo_762";
		  _v = _agent createInInventory "Ammo_762";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_Morphine";
		  _v = _agent createInInventory "Medical_Morphine";	
	      _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6]; 
 	
 		};	
		case 4: {
		  _v = _agent createInInventory "ghilliehoodmossy";		
		  _v = _agent createInInventory "GhillieSuitMossy";
		  _v = _agent createInInventory "SmershVestBackpack";		  
		  _v = _agent createInInventory "BandanaMask_camopattern";		  
		  _v = _agent createInInventory "USMC_Pants_Woodland";
		  _v = _agent createInInventory "USMC_Jacket_Woodland";					  
		  _v = _agent createInInventory "Sneakers_Green";
		  _v = _agent createInInventory "workinggloves_Black";
		  _v = _agent createInInventory "FirefighterAxe_Black";						  
		  _v = _agent createInInventory "Winchester70_Black";
		  _v = _agent createInInventory "Att_Ghillie_Woodland";
		  _v = _agent createInInventory "Att_Optic_Hunting";
		  _vRange = _agent createInInventory "Optics_Rangefinder";
		  _v = _vRange createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Fruit_Cannabis";
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";	
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";		  
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_Morphine";
		  _v = _agent createInInventory "Medical_Morphine";	
	      _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6];  
 		};
 		case 5: {
		  _v = _agent createInInventory "BagTortilla";
		  _v = _agent createInInventory "SmershVestBackpack";
		  _v = _agent createInInventory "GorkaHelmet_complete_Black";	
		  _v = _agent createInInventory "workinggloves_Black";
		  _v = _agent createInInventory "CargoPants_Black";
		  _v = _agent createInInventory "M65_Jacket_Black";
		  _v = _agent createInInventory "Sneakers_Red";		  
		  _v = _agent createInInventory "balaclavamask_blackskull";
		  _v = _agent createInInventory "FirefighterAxe_Black";
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";	
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";		  
		  _v = _agent createInInventory "M4A1_Black";
		  _v = _agent createInInventory "Att_Suppressor_M4";
		  _v = _agent createInInventory "Att_Optic_ACOG";
		  _v = _agent createInInventory "Att_Handguard_M4RIS_Black";
		  _v = _agent createInInventory "Att_Buttstock_M4MP_Black";
		  _v = _agent createInInventory "att_bipod_atlas";
		  _vRange = _agent createInInventory "Optics_Rangefinder";
		  _v = _vRange createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Fruit_Cannabis";
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Ammo_556";	
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Ammo_556";	
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Winchester70_Black";
		  _v = _agent createInInventory "Att_Ghillie_Woodland";
		  _v = _agent createInInventory "Att_Optic_Hunting";
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";	
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";		  
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_Morphine";
		  _v = _agent createInInventory "Medical_Morphine";	
	      _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6];
 		};
  		case 6: {
		  _v = _agent createInInventory "ghilliehoodmossy";		
		  _v = _agent createInInventory "GhillieSuitMossy";
		  _v = _agent createInInventory "SmershVestBackpack";		  
		  _v = _agent createInInventory "BandanaMask_camopattern";		  
		  _v = _agent createInInventory "USMC_Pants_Woodland";
		  _v = _agent createInInventory "USMC_Jacket_Woodland";					  
		  _v = _agent createInInventory "Sneakers_Green";
		  _v = _agent createInInventory "workinggloves_Black";
		  _v = _agent createInInventory "FirefighterAxe_Black";						  
		  _v = _agent createInInventory "b95";
		  _v = _agent createInInventory "Att_Ghillie_Woodland";
		  _v = _agent createInInventory "Att_Optic_Hunting";
		  _vRange = _agent createInInventory "Optics_Rangefinder";
		  _v = _vRange createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Fruit_Cannabis";
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";	
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";		  
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_Morphine";
		  _v = _agent createInInventory "Medical_Morphine";	
	      _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6]; 
 		};
   		case 7: {
		  _v = _agent createInInventory "BagTortilla";
		  _v = _agent createInInventory "SmershVestBackpack";
		  _v = _agent createInInventory "GorkaHelmet_complete_Black";	
		  _v = _agent createInInventory "workinggloves_Black";
		  _v = _agent createInInventory "CargoPants_Black";
		  _v = _agent createInInventory "M65_Jacket_Black";
		  _v = _agent createInInventory "Sneakers_Red";		  
		  _v = _agent createInInventory "balaclavamask_blackskull";
		  _v = _agent createInInventory "FirefighterAxe_Black";
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";	
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";		  
		  _v = _agent createInInventory "M4A1_Black";
		  _vRange = _agent createInInventory "Optics_Rangefinder";
		  _v = _vRange createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Fruit_Cannabis";
		  _v = _agent createInInventory "Att_Suppressor_M4";
		  _v = _agent createInInventory "Att_Optic_ACOG";
		  _v = _agent createInInventory "Att_Handguard_M4RIS_Black";
		  _v = _agent createInInventory "Att_Buttstock_M4MP_Black";
		  _v = _agent createInInventory "att_bipod_atlas";
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Ammo_556";	
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Ammo_556";	
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "B95";
		  _v = _agent createInInventory "Att_Ghillie_Woodland";
		  _v = _agent createInInventory "Att_Optic_Hunting";
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";	
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";		  
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_Morphine";
		  _v = _agent createInInventory "Medical_Morphine";	
	      _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6];
 		};
		case 8: { 
		  _v = _agent createInInventory "ghilliehoodmossy";		
		  _v = _agent createInInventory "GhillieSuitMossy";
		  _v = _agent createInInventory "SmershVestBackpack";		  
		  _v = _agent createInInventory "BandanaMask_camopattern";		  
		  _v = _agent createInInventory "USMC_Pants_Woodland";
		  _v = _agent createInInventory "USMC_Jacket_Woodland";					  
		  _v = _agent createInInventory "Sneakers_Green";
		  _v = _agent createInInventory "workinggloves_Black";
		  _v = _agent createInInventory "FirefighterAxe_Black";						  
		  _vgun = _agent createInInventory "ShotgunSaiga12K";
		  _v = _vgun createInInventory "M_SaigaDrum_20Rnd";
		  _vRange = _agent createInInventory "Optics_Rangefinder";
		  _v = _vRange createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Fruit_Cannabis";
		  _v = _agent createInInventory "M_Saiga_5Rnd";
		  _v = _agent createInInventory "M_Saiga_8Rnd";
		  _v = _agent createInInventory "M_Saiga_8Rnd";
		  _v = _agent createInInventory "M_SaigaDrum_20Rnd";
		  _v = _vgun createInInventory "Att_Buttstock_Saiga";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_Morphine";
		  _v = _agent createInInventory "Medical_Morphine";	
	      _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6]; 
		};
		case 9: {
		  _v = _agent createInInventory "ghilliehoodmossy";		
		  _v = _agent createInInventory "GhillieSuitMossy";
		  _v = _agent createInInventory "SmershVestBackpack";		  
		  _v = _agent createInInventory "BandanaMask_camopattern";		  
		  _v = _agent createInInventory "USMC_Pants_Woodland";
		  _v = _agent createInInventory "USMC_Jacket_Woodland";					  
		  _v = _agent createInInventory "Sneakers_Green";
		  _v = _agent createInInventory "workinggloves_Black";
		  _v = _agent createInInventory "FirefighterAxe_Black";
		  _vgun = _agent createInInventory "Mosin9130_Green_Black";
		  _v = _vgun createInInventory "CLIP_762_5Rnd";
		  _v = _agent createInInventory "CLIP_762_5Rnd";
		  _v = _agent createInInventory "M_Glock_15Rnd";
		  _v = _agent createInInventory "M_Glock_15Rnd";
		  _vPisa = _agent createInInventory "Glock19";
		  _vRange = _agent createInInventory "Optics_Rangefinder";
		  _v = _vRange createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Fruit_Cannabis";
		  _v = _vPisa createInInventory "Att_Suppressor_Pistol";
		  _v = _vPisa createInInventory "M_Glock_15Rnd";
		  _v = _agent createInInventory "AmmoBox_762_20Rnd";
		  _v = _agent createInInventory "AmmoBox_762_20Rnd";
		  _v = _agent createInInventory "AmmoBox_762_20Rnd";
		  _v = _agent createInInventory "AmmoBox_762_20Rnd";
		  _v = _vgun createInInventory "Att_Compensator_Mosin";
		  _v = _vgun createInInventory "Att_Optic_PUScope";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_Morphine";
		  _v = _agent createInInventory "Medical_Morphine";	
	      _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6]; 
		};
		case 10: {
		  _v = _agent createInInventory "Gorka_up_flat";		
		  _v = _agent createInInventory "Gorka_pants_flat";
		  _v = _agent createInInventory "BagAssaultGreen";		  
		  _v = _agent createInInventory "GorkaHelmet_complete_Black";		  
		  _v = _agent createInInventory "PlateCarrierComplete";
		  _v = _agent createInInventory "Sneakers_Green";
		  _v = _agent createInInventory "workinggloves_Black";
		  _v = _agent createInInventory "FirefighterAxe_Black";
		  _vgun = _agent createInInventory "FAL";
		  _v = _vgun createInInventory "M_Fal_20Rnd";
		  _v = _agent createInInventory "M_Fal_20Rnd";
		  _v = _agent createInInventory "M_Glock_15Rnd";
		  _v = _agent createInInventory "M_Glock_15Rnd";
		  _vPisa = _agent createInInventory "Glock19";
		  _v = _vPisa createInInventory "Att_Suppressor_Pistol";
		  _v = _vPisa createInInventory "M_Glock_15Rnd";
		  _v = _agent createInInventory "M_Fal_20Rnd";
		  _v = _agent createInInventory "Att_Optic_ACOG";
		  _vRange = _agent createInInventory "Optics_Rangefinder";
		  _v = _vRange createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Fruit_Cannabis";
		  _v = _agent createInInventory "Att_Optic_Reflex";
		  _v = _agent createInInventory "AmmoBox_308Win_20Rnd";
		  _v = _agent createInInventory "AmmoBox_308Win_20Rnd";
		  _v = _agent createInInventory "AmmoBox_308Win_20Rnd";
		  _v = _agent createInInventory "AmmoBox_308Win_20Rnd";
		  _v = _vgun createInInventory "Att_Optic_ACOG";
		  _v = _vgun createInInventory "Att_Buttstock_FalFolding";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_Morphine";
		  _v = _agent createInInventory "Medical_Morphine";	
	      _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6]; 
		};
		case 11: {
		  _v = _agent createInInventory "USMC_Jacket_Woodland";		
		  _v = _agent createInInventory "USMC_Pants_Woodland";
		  _v = _agent createInInventory "TacticalGloves_Beige";		  
		  _v = _agent createInInventory "PlateCarrierComplete";		  
		  _v = _agent createInInventory "BagHunting";
		  _v = _agent createInInventory "MilitaryBoots_Beige";
		  _v = _agent createInInventory "BalaclavaMask_Beige";
		  _v = _agent createInInventory "BallisticHelmet_Green";
		  _v = _agent createInInventory "FirefighterAxe_Black";
		  _vgun = _agent createInInventory "SKS";
		  _v = _vgun createInInventory "Clip_762x39_10Rnd";
		  _v = _agent createInInventory "Clip_762x39_10Rnd";
		  _vRange = _agent createInInventory "Optics_Rangefinder";
		  _v = _vRange createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Fruit_Cannabis";
		  _v = _agent createInInventory "AmmoBox_762x39_20Rnd";
		  _v = _agent createInInventory "AmmoBox_762x39_20Rnd";
		  _v = _agent createInInventory "AmmoBox_762x39_20Rnd";
		  _v = _agent createInInventory "AmmoBox_762x39_20Rnd";
		  _v = _agent createInInventory "AmmoBox_762x39_20Rnd";
		  _v = _agent createInInventory "AmmoBox_762x39_20Rnd";
		  _v = _vgun createInInventory "Att_Bayonet_SKS";
		  _v = _vgun createInInventory "Att_Optic_PUScope";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_Morphine";
		  _v = _agent createInInventory "Medical_Morphine";	
	      _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6]; 
		};
		case 12: {
		  _v = _agent createInInventory "ghilliehoodmossy";		
		  _v = _agent createInInventory "GhillieSuitMossy";
		  _v = _agent createInInventory "SmershVestBackpack";		  
		  _v = _agent createInInventory "BandanaMask_camopattern";		  
		  _v = _agent createInInventory "USMC_Pants_Woodland";
		  _v = _agent createInInventory "USMC_Jacket_Woodland";					  
		  _v = _agent createInInventory "Sneakers_Green";
		  _v = _agent createInInventory "workinggloves_Black";
		  _v = _agent createInInventory "FirefighterAxe_Black";
		  _vgun = _agent createInInventory "VSS";
		  _v = _vgun createInInventory "M_Vss_10Rnd";
		  _v = _agent createInInventory "M_Vss_10Rnd";
		  _v = _agent createInInventory "M_Glock_15Rnd";
		  _v = _agent createInInventory "M_Glock_15Rnd";
		  _vPisa = _agent createInInventory "Glock19";
		  _vRange = _agent createInInventory "Optics_Rangefinder";
		  _v = _vRange createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Fruit_Cannabis";
		  _v = _vPisa createInInventory "Att_Suppressor_Pistol";
		  _v = _vPisa createInInventory "M_Glock_15Rnd";
		  _v = _agent createInInventory "M_Vss_10Rnd";
		  _v = _agent createInInventory "AmmoBox_9x39_20Rnd";
		  _v = _agent createInInventory "AmmoBox_9x39_20Rnd";
		  _v = _agent createInInventory "AmmoBox_9x39_20Rnd";
		  _v = _agent createInInventory "AmmoBox_9x39_20Rnd";
		  _v = _vgun createInInventory "Att_Optic_PSO1";
		  _v = _vgun createInInventory "Att_Optic_Kashtan";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_Morphine";
		  _v = _agent createInInventory "Medical_Morphine";	
	      _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6]; 
		};
		case 13: {
		  _v = _agent createInInventory "JungleBoots_Olive";		
		  _v = _agent createInInventory "HunterPants_Spring";
		  _v = _agent createInInventory "Hunting_jacket_spring";		  
		  _v = _agent createInInventory "BandanaMask_greenpattern";		  
		  _v = _agent createInInventory "UKAssVest_Olive";
		  _v = _agent createInInventory "TacticalGloves_Green";					  
		  _v = _agent createInInventory "BallisticHelmet_Green";
		  _v = _agent createInInventory "BagAssaultGreen";
		  _v = _agent createInInventory "FirefighterAxe_Black";
		  _vgun = _agent createInInventory "AugSteyr";
		  _v = _vgun createInInventory "M_STANAG_30Rnd_Coupled";
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";
		  _v = _agent createInInventory "M_Glock_15Rnd";
		  _v = _agent createInInventory "M_Glock_15Rnd";
		  _vPisa = _agent createInInventory "Glock19";
		  _vRange = _agent createInInventory "Optics_Rangefinder";
		  _v = _vRange createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Fruit_Cannabis";
		  _v = _vPisa createInInventory "Att_Suppressor_Pistol";
		  _v = _vPisa createInInventory "M_Glock_15Rnd";
		  _v = _agent createInInventory "M_STANAG_30Rnd_Coupled";
		  _v = _agent createInInventory "ammobox_556_20rnd";
		  _v = _agent createInInventory "ammobox_556_20rnd";
		  _v = _agent createInInventory "ammobox_556_20rnd";
		  _v = _agent createInInventory "ammobox_556_20rnd";
		  _v = _vgun createInInventory "Att_Suppressor_M4";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_Morphine";
		  _v = _agent createInInventory "Medical_Morphine";	
	      _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6]; 
		};
		case 14: {
		  _v = _agent createInInventory "ghilliehoodmossy";		
		  _v = _agent createInInventory "GhillieSuitMossy";
		  _v = _agent createInInventory "SmershVestBackpack";		  
		  _v = _agent createInInventory "BandanaMask_camopattern";		  
		  _v = _agent createInInventory "USMC_Pants_Woodland";
		  _v = _agent createInInventory "USMC_Jacket_Woodland";					  
		  _v = _agent createInInventory "Sneakers_Green";
		  _v = _agent createInInventory "workinggloves_Black";
		  _v = _agent createInInventory "FirefighterAxe_Black";
		  _vgun = _agent createInInventory "Scout_Black";
		  _v = _vgun createInInventory "CLIP_762_5Rnd";
		  _v = _agent createInInventory "CLIP_762_5Rnd";
		  _v = _agent createInInventory "Att_Optic_Hunting";
		  _v = _agent createInInventory "M_Glock_15Rnd";
		  _v = _agent createInInventory "M_Glock_15Rnd";
		  _vPisa = _agent createInInventory "Glock19";
		  _vRange = _agent createInInventory "Optics_Rangefinder";
		  _v = _vRange createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Fruit_Cannabis";
		  _v = _vPisa createInInventory "Att_Suppressor_Pistol";
		  _v = _vPisa createInInventory "M_Glock_15Rnd";
		  _v = _agent createInInventory "M_Scout_5Rnd";
		  _v = _agent createInInventory "M_Scout_5Rnd";
		  _v = _vgun createInInventory "M_Scout_5Rnd";
		  _v = _agent createInInventory "AmmoBox_308Win_20Rnd";
		  _v = _agent createInInventory "AmmoBox_308Win_20Rnd";
		  _v = _agent createInInventory "AmmoBox_308Win_20Rnd";
		  _v = _agent createInInventory "AmmoBox_308Win_20Rnd";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_Morphine";
		  _v = _agent createInInventory "Medical_Morphine";	
	      _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6]; 
		};
		case 15: {
		  _v = _agent createInInventory "BagTortilla";
		  _v = _agent createInInventory "SmershVestBackpack";
		  _v = _agent createInInventory "GorkaHelmet_complete_Black";	
		  _v = _agent createInInventory "workinggloves_Black";
		  _v = _agent createInInventory "CargoPants_Black";
		  _v = _agent createInInventory "M65_Jacket_Black";
		  _v = _agent createInInventory "Sneakers_Red";		  
		  _v = _agent createInInventory "balaclavamask_blackskull";
		  _v = _agent createInInventory "FirefighterAxe_Black";
		  _v = _agent createInInventory "M_M249Box_200Rnd";
		  _v = _agent createInInventory "M_M249Box_200Rnd";	
		  _v = _agent createInInventory "M_M249Box_200Rnd";
		  _v = _agent createInInventory "M_M249Box_200Rnd";		  
		  _v = _agent createInInventory "M249";	
		  _v = _agent createInInventory "Att_Suppressor_M4";
		  _v = _agent createInInventory "Att_Handguard_M249";
		  _v = _agent createInInventory "Att_Optic_ACOG";
		  _vRange = _agent createInInventory "Optics_Rangefinder";
		  _v = _vRange createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Fruit_Cannabis";		  
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Ammo_556";	
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Ammo_556";	
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Ammo_556";
		  _v = _agent createInInventory "Scout_Black";
		  _v = _agent createInInventory "Att_Optic_Hunting";
		  _v = _agent createInInventory "Att_Ghillie_Woodland";
		  _v = _agent createInInventory "M_Scout_5Rnd";
		  _v = _agent createInInventory "M_Scout_5Rnd";
		  _v = _agent createInInventory "M_Scout_5Rnd";
		  _v = _agent createInInventory "Ammo_308Win";	
		  _v = _agent createInInventory "Ammo_308Win";
		  _v = _agent createInInventory "Ammo_308Win";		  
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_TransfusionKit";
		  _v = _agent createInInventory "Medical_Morphine";
		  _v = _agent createInInventory "Medical_Morphine";
	      _v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		  _v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity",6];
		};
		case "null": {
			{null = _agent createInInventory _x} forEach _arraySet;
			{null = _agent createInInventory _x} forEach _arrayTop;	
			{null = _agent createInInventory _x} forEach _arrayBot;
			_v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity", 6];
			_v = _agent createInInventory "Medical_Morphine";
			_v = _agent createInInventory "Medical_Morphine";
			_v = _agent createInInventory "Medical_TransfusionKit";
			_v = _agent createInInventory "Medical_TransfusionKit";
			_v = _agent createInInventory "FirefighterAxe";
			_v = _agent createInInventory "GrenadeRGD5";
			_v = _agent createInInventory "GrenadeRGD5";
			_v = _agent createInInventory "medical_bandage";_v setVariable ["quantity",2];
			_v = _agent createInInventory "Fruit_Cannabis";
			//_phppaper = _agent createInInventory "Consumable_Paper";
			//_phppaper setVariable ["message",_uid];
			//_v = _agent createInInventory "Pen_Red";
			_v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
		
		};
		case "UnActive": {
			_v = _agent createInInventory "M65_Jacket_Black";
			_v = _agent createInInventory "CargoPants_Black";
			_v = _agent createInInventory "Sneakers_Black";
			_v = _agent createInInventory "workinggloves_Black";
			//_phppaper = _agent createInInventory "Consumable_Paper";
			//_phppaper setVariable ["message",_uid];
			_v = _agent createInInventory "MakarovPB";
			_v = _agent createInInventory "Att_Suppressor_MakarovPB";
			_v = _agent createInInventory "M_MakarovPB_8Rnd";
			_v = _agent createInInventory "M_MakarovPB_8Rnd";
			_v = _agent createInInventory "M_MakarovPB_8Rnd";
			_v = _agent createInInventory "M_MakarovPB_8Rnd";
			_v = _agent createInInventory "Ammo_380";
			_vbag = _agent createInInventory "BagHunting";
			_vbag createInInventory "Fruit_Cannabis";
		};
        };
		 
	} else {
		
			{null = _agent createInInventory _x} forEach _arraySet;
			_v = _agent createInInventory "Consumable_Rags";_v setVariable ["quantity", 6];
			_v = _agent createInInventory "Medical_Morphine";
			_v = _agent createInInventory "Medical_Morphine";
			_v = _agent createInInventory "Medical_TransfusionKit";
			_v = _agent createInInventory "Medical_TransfusionKit";
			_v = _agent createInInventory "FirefighterAxe";
			_v = _agent createInInventory "GrenadeRGD5";
			_v = _agent createInInventory "GrenadeRGD5";
			_v = _agent createInInventory "medical_bandage";_v setVariable ["quantity",2];
			_v = _agent createInInventory "Fruit_Cannabis";
			_phppaper = _agent createInInventory "Consumable_Paper";
			_phppaper setVariable ["message",_uid];
			_v = _agent createInInventory "Pen_Red";
			_v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
			{null = _agent createInInventory _x} forEach _arrayTop;	
			{null = _agent createInInventory _x} forEach _arrayBot;
	};
	};
	
	_agent call init_newPlayer;
	call init_newBody;
	_agent setVariable ["GU_ID",_uid];
			
		_id spawnForClient {
			titleText ["Spawning... Please wait...","BLACK IN",10];
		};
      
	  if (_uid in _VIPArray) then {
	  _agent setVariable ["Is_VIP",1];
      _id spawnForClient {
		private ["_intro"];
		_intro = [
			["","colorFriendly",5],
		    ["Welcome to 420x Gaming DayZ!","colorFriendly",2],
			["TO Change your loadout, use the ganja to select a loadout!","colorFriendly",5],
			["There are 15 loadouts.","colorFriendly",5],
			["To Toggle off VIP Loadouts select Random option.","colorAction",6]
		];

		{
			statusChat [_x select 0,_x select 1];
			sleep (_x select 2);
		} forEach _intro;
	};
	} else {
		
		_id spawnForClient {
		_agent setVariable ["Is_VIP",0];
		private ["_intro"];
		_intro = [
		    ["","colorFriendly",5],
		    ["Welcome to 420x Gaming DayZ!","colorFriendly",4],
			["Purchase a VIP to gain options to change loadouts while in-game.","colorFriendly",3],
			["Read main Channel Description on TeamSpeak","colorFriendly",4],
			["Or Join our Discord on how to buy VIP","colorFriendly",4]
		];

		{
			statusChat [_x select 0,_x select 1];
			sleep (_x select 2);
		} forEach _intro;
	};
	
	};
	_agent setVariable ["Cli_Name",_name];
	_agent setVariable ["SpectateMode",0];
	_agent setVariable ["Respawn_mt",0];
	_freePos = connectedPlayers find 0;
	connectedPlayers set [_freePos,_id];

	[_agent] spawn {
	_agent = _this select 0;
	waitUntil {sleep 0.2; lifeState _agent == "DEAD";};
	[(owner _agent)] spawn DZ_clientRespawn;
	};

	_VIPArray = [];
  };
};