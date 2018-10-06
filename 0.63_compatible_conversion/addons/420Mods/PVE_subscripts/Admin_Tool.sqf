DZ_SpectatorCam = {
_OwnerAdmin = _this select 0;
_agentSpec = _this select 1;
_agpos = _this select 2;
_Timer = _this select 3;
[_OwnerAdmin,_agentSpec,_agpos,_Timer] spawnForClient {
_OwnerAdmin = _this select 0; 
_agentSpec = _this select 1; 
_agpos = _this select 2; 
_Timer = _this select 3; 
_cam = "camera" camCreate [(_agpos select 0) - 6,(_agpos select 1),2]; 
_cam cameraEffect ["External", "Back"]; 
_cam camSetTarget _agentSpec; 
_cam camSetFOV 0.6; 
_cam camCommit 0;
Sleep (_Timer + 1);
_cam cameraEffect ["terminate","back"];
camDestroy _cam; 
}; 
};

"DZM_UpdatePOS" addPublicVariableEventHandler
{
	private["_agent","_newpos"];
	_array = _this select 1;
	_agent = _array select 0;
	_newpos = _array select 1;
	(vehicle _agent) setPos [(_newpos select 0),(_newpos select 1),(_newpos select 2)];
};

diag_log "all code is owned by 420 gaming and it's team";

DZ_LoadoutGiver = {
_targetID = _this select 0;  //selected client  owner
_cmdtype3 = _this select 1;  //type of Loadout

		if (_cmdtype3 == "m4a1") then
		{
						_jewpos = getposATL _targetID;
						_whoisjew = (vehicle _targetID);
						_inventorylist = itemsInInventory _targetID;
						 { moveToGround _x; }forEach _inventorylist;
						 [_targetID,format['Admin gave you a loadout.'],'colorFriendly'] call fnc_playerMessage;
						 sleep 1.3;
						 _clothArr = ['bagassaultblack','gorkahelmet_complete_black','balaclavamask_blackskull','policejacket_orel','workinggloves_black','police_pants_orel','combatboots_black','highcapacityvest_black','rocketaviators'];
						 { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _clothArr;
						 sleep 1;
						_medArr = ['medical_transfusionkit','medical_splint','medical_bandagedressing','medical_morphine','medical_epinephrine'];				
						 {
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						 } forEach _medArr;
						 sleep 1;
						_invArr = ['map_chernarus','compass','consumable_matchbox','tool_leathersewingkit','tool_canopener','tool_lockpick','tool_heatpack','tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white'];
						{
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _invArr;
						 sleep 1;
						_foodArr = ['drink_canteen','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon','m_stanag_30rnd_coupled','m_stanag_30rnd_coupled','m_stanag_30rnd_coupled','m_stanag_30rnd_coupled'];
						{
						  _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						  _whoisjew moveToInventory _Tomove;
						  _maxQuantity = maxQuantity _Tomove;
						  if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _foodArr;
						_pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1];
						_item = createVehicle ['m4a1', _pos, [], 0, 'CAN_COLLIDE'];
						sleep 2;
						_attGunArr = ['att_bipod_atlas','Att_Ghillie_Woodland','att_buttstock_m4cqb_black','att_handguard_m4ris_black','att_optic_acog','m_stanag_30rnd_coupled','Att_Suppressor_M4']; 
						{_item createInInventory _x;} forEach _attGunArr;
						sleep 1;
						_whoisjew moveToHands _item;
			
		};

		if (_cmdtype3 == "b95") then
		{
						_jewpos = getposATL _targetID;
						_whoisjew = (vehicle _targetID);
						_inventorylist = itemsInInventory _targetID;
						 { moveToGround _x; }forEach _inventorylist;
						 [_targetID,format['Admin gave you a loadout.'],'colorFriendly'] call fnc_playerMessage;
						 sleep 1.3;
						 _clothArr = ['bagassaultblack','gorkahelmet_complete_black','balaclavamask_blackskull','policejacket_orel','workinggloves_black','police_pants_orel','combatboots_black','highcapacityvest_black','rocketaviators'];
						 { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _clothArr;
						 sleep 1;
						_medArr = ['medical_transfusionkit','medical_splint','medical_bandagedressing','medical_morphine','medical_epinephrine'];				
						 {
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						 } forEach _medArr;
						 sleep 1;
						_invArr = ['tool_lockpick','medical_transfusionkit','medical_splint','medical_bandagedressing','medical_morphine','medical_epinephrine'];
						{
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _invArr;
						 sleep 1;
						_foodArr = ['AmmoBox_308Win_20Rnd','AmmoBox_308Win_20Rnd','AmmoBox_308Win_20Rnd','AmmoBox_308Win_20Rnd'];
						{
						  _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						  _whoisjew moveToInventory _Tomove;
						  _maxQuantity = maxQuantity _Tomove;
						  if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _foodArr;
						_pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1];
						_item = createVehicle ['b95', _pos, [], 0, 'CAN_COLLIDE'];
						sleep 2;
						_attGunArr = ['Att_Optic_Hunting','Att_Ghillie_Woodland']; 
						{_item createInInventory _x;} forEach _attGunArr;
						sleep 1;
						_whoisjew moveToHands _item;
		};
		
		if (_cmdtype3 == "akm") then
		{
						_jewpos = getposATL _targetID;
						_whoisjew = (vehicle _targetID);
						_inventorylist = itemsInInventory _targetID;
						 { moveToGround _x; }forEach _inventorylist;
						 [_targetID,format['Admin gave you a loadout.'],'colorFriendly'] call fnc_playerMessage;
						 sleep 1.3;
						 _clothArr = ['bagassaultblack','gorkahelmet_complete_black','balaclavamask_blackskull','policejacket_orel','workinggloves_black','police_pants_orel','combatboots_black','highcapacityvest_black','rocketaviators'];
						 { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _clothArr;
						 sleep 1;
						_medArr = ['medical_transfusionkit','medical_splint','medical_bandagedressing','medical_morphine','medical_epinephrine'];				
						 {
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						 } forEach _medArr;
						 sleep 1;
						_invArr = ['map_chernarus','compass','consumable_matchbox','tool_leathersewingkit','tool_canopener','tool_lockpick','tool_heatpack','tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white'];
						{
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _invArr;
						 sleep 1;
						_foodArr = ['drink_canteen','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon','AmmoBox_762x39_20Rnd','AmmoBox_762x39_20Rnd','M_akm_drum','M_akm_drum'];
						{
						  _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						  _whoisjew moveToInventory _Tomove;
						  _maxQuantity = maxQuantity _Tomove;
						  if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _foodArr;
						_pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1];
						_item = createVehicle ['AKM', _pos, [], 0, 'CAN_COLLIDE'];
						sleep 2;
						_attGunArr = ['Att_Handguard_AK_Rail_Black','att_bipod_atlas','Att_Ghillie_Woodland','Att_Optic_PSO1','Att_Buttstock_AK_Wood_Camo','Att_Suppressor_AK','M_AKM_30Rnd'];
						{_item createInInventory _x;} forEach _attGunArr;
						sleep 1;
						_whoisjew moveToHands _item;
		};

		if (_cmdtype3 == "svd") then
		{
						_jewpos = getposATL _targetID;
						_whoisjew = (vehicle _targetID);
						_inventorylist = itemsInInventory _targetID;
						 { moveToGround _x; }forEach _inventorylist;
						 [_targetID,format['Admin gave you a loadout.'],'colorFriendly'] call fnc_playerMessage;
						 sleep 1.3;
						 _clothArr = ['bagassaultblack','gorkahelmet_complete_black','balaclavamask_blackskull','policejacket_orel','workinggloves_black','police_pants_orel','combatboots_black','highcapacityvest_black','rocketaviators'];
						 { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _clothArr;
						 sleep 1;
						_medArr = ['medical_transfusionkit','medical_splint','medical_bandagedressing','medical_morphine','medical_epinephrine'];				
						 {
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						 } forEach _medArr;
						 sleep 1;
						_invArr = ['map_chernarus','compass','consumable_matchbox','tool_leathersewingkit','tool_canopener','tool_lockpick','tool_heatpack','tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white'];
						{
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _invArr;
						 sleep 1;
						_foodArr = ['drink_canteen','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','AmmoBox_762_20Rnd','AmmoBox_762_20Rnd','AmmoBox_762_20Rnd','m_svd_10Rnd','m_svd_10Rnd'];
						{
						  _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						  _whoisjew moveToInventory _Tomove;
						  _maxQuantity = maxQuantity _Tomove;
						  if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _foodArr;
						_pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1];
						_item = createVehicle ['SVD', _pos, [], 0, 'CAN_COLLIDE'];
						sleep 2;
						_attGunArr = ['Att_Optic_PSO1','Att_Ghillie_Woodland','m_svd_10Rnd']; 
						{_item createInInventory _x;} forEach _attGunArr;
						sleep 1;
						_whoisjew moveToHands _item;
		};

		if (_cmdtype3 == "fal") then
		{
						_jewpos = getposATL _targetID;
						_whoisjew = (vehicle _targetID);
						_inventorylist = itemsInInventory _targetID;
						 { moveToGround _x; }forEach _inventorylist;
						 [_targetID,format['Admin gave you a loadout.'],'colorFriendly'] call fnc_playerMessage;
						 sleep 1.3;
						 _clothArr = ['bagassaultblack','gorkahelmet_complete_black','balaclavamask_blackskull','policejacket_orel','workinggloves_black','police_pants_orel','combatboots_black','highcapacityvest_black','rocketaviators'];
						 { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _clothArr;
						 sleep 1;
						_medArr = ['medical_transfusionkit','medical_splint','medical_bandagedressing','medical_morphine','medical_epinephrine'];				
						 {
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						 } forEach _medArr;
						 sleep 1;
						_invArr = ['map_chernarus','compass','consumable_matchbox','tool_leathersewingkit','tool_canopener','tool_lockpick','tool_heatpack','tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white'];
						{
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _invArr;
						 sleep 1;
						_foodArr = ['drink_canteen','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','AmmoBox_308Win_20Rnd','AmmoBox_308Win_20Rnd','AmmoBox_308Win_20Rnd','M_Fal_20Rnd','M_Fal_20Rnd','M_Fal_20Rnd'];
						{
						  _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						  _whoisjew moveToInventory _Tomove;
						  _maxQuantity = maxQuantity _Tomove;
						  if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _foodArr;
						_pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1];
						_item = createVehicle ['FAL', _pos, [], 0, 'CAN_COLLIDE'];
						sleep 2;
						_attGunArr = ['Att_Ghillie_Woodland','att_optic_acog','M_Fal_20Rnd']; 
						{_item createInInventory _x;} forEach _attGunArr;
						sleep 1;
						_whoisjew moveToHands _item;
		};

		if (_cmdtype3 == "wini") then
		{
						_jewpos = getposATL _targetID;
						_whoisjew = (vehicle _targetID);
						_inventorylist = itemsInInventory _targetID;
						 { moveToGround _x; }forEach _inventorylist;
						 [_targetID,format['Admin gave you a loadout.'],'colorFriendly'] call fnc_playerMessage;
						 sleep 1.3;
						 _clothArr = ['bagassaultblack','gorkahelmet_complete_black','balaclavamask_blackskull','policejacket_orel','workinggloves_black','police_pants_orel','combatboots_black','highcapacityvest_black','rocketaviators'];
						 { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _clothArr;
						 sleep 1;
						_medArr = ['medical_transfusionkit','medical_splint','medical_bandagedressing','medical_morphine','medical_epinephrine'];				
						 {
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						 } forEach _medArr;
						 sleep 1;
						_invArr = ['map_chernarus','compass','consumable_matchbox','tool_leathersewingkit','tool_canopener','tool_lockpick','tool_heatpack','tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white'];
						{
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _invArr;
						 sleep 1;
						_foodArr = ['drink_canteen','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon','AmmoBox_308Win_20Rnd','AmmoBox_308Win_20Rnd','AmmoBox_308Win_20Rnd','AmmoBox_308Win_20Rnd'];
						{
						  _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						  _whoisjew moveToInventory _Tomove;
						  _maxQuantity = maxQuantity _Tomove;
						  if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _foodArr;
						_pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1];
						_item = createVehicle ['Winchester70_Black', _pos, [], 0, 'CAN_COLLIDE'];
						sleep 2;
						_attGunArr = ['att_bipod_atlas','Att_Ghillie_Woodland','Att_Optic_Hunting']; 
						{_item createInInventory _x;} forEach _attGunArr;
						sleep 1;
						_whoisjew moveToHands _item;
		};

		if (_cmdtype3 == "ak101") then
		{
						_jewpos = getposATL _targetID;
						_whoisjew = (vehicle _targetID);
						_inventorylist = itemsInInventory _targetID;
						 { moveToGround _x; }forEach _inventorylist;
						 [_targetID,format['Admin gave you a loadout.'],'colorFriendly'] call fnc_playerMessage;
						 sleep 1.3;
						 _clothArr = ['bagassaultblack','gorkahelmet_complete_black','balaclavamask_blackskull','policejacket_orel','workinggloves_black','police_pants_orel','combatboots_black','highcapacityvest_black','rocketaviators'];
						 { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _clothArr;
						 sleep 1;
						_medArr = ['medical_transfusionkit','medical_splint','medical_bandagedressing','medical_morphine','medical_epinephrine'];				
						 {
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						 } forEach _medArr;
						 sleep 1;
						_invArr = ['map_chernarus','compass','consumable_matchbox','tool_leathersewingkit','tool_canopener','tool_lockpick','tool_heatpack','tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white'];
						{
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _invArr;
						 sleep 1;
						_foodArr = ['drink_canteen','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon','M_ak101_30Rnd','M_ak101_30Rnd','M_ak101_30Rnd','M_ak101_30Rnd'];
						{
						  _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						  _whoisjew moveToInventory _Tomove;
						  _maxQuantity = maxQuantity _Tomove;
						  if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _foodArr;
						_pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1];
						_item = createVehicle ['ak101', _pos, [], 0, 'CAN_COLLIDE'];
						sleep 2;
						_attGunArr = ['Att_Handguard_AK_Rail_Black','att_bipod_atlas','Att_Ghillie_Woodland','Att_Optic_PSO1','Att_Buttstock_AK_Wood_Camo','Att_Suppressor_AK','M_ak101_30Rnd']; 
						{_item createInInventory _x;} forEach _attGunArr;
						sleep 1;
						_whoisjew moveToHands _item;
		};

		if (_cmdtype3 == "ak74") then
		{
						_jewpos = getposATL _targetID;
						_whoisjew = (vehicle _targetID);
						_inventorylist = itemsInInventory _targetID;
						 { moveToGround _x; }forEach _inventorylist;
						 [_targetID,format['Admin gave you a loadout.'],'colorFriendly'] call fnc_playerMessage;
						 sleep 1.3;
						 _clothArr = ['bagassaultblack','gorkahelmet_complete_black','balaclavamask_blackskull','policejacket_orel','workinggloves_black','police_pants_orel','combatboots_black','highcapacityvest_black','rocketaviators'];
						 { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _clothArr;
						 sleep 1;
						_medArr = ['medical_transfusionkit','medical_splint','medical_bandagedressing','medical_morphine','medical_epinephrine'];				
						 {
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						 } forEach _medArr;
						 sleep 1;
						_invArr = ['map_chernarus','compass','consumable_matchbox','tool_leathersewingkit','tool_canopener','tool_lockpick','tool_heatpack','tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white'];
						{
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _invArr;
						 sleep 1;
						_foodArr = ['drink_canteen','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon','M_ak74_30Rnd','M_ak74_30Rnd','M_ak74_30Rnd','M_ak74_30Rnd'];
						{
						  _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						  _whoisjew moveToInventory _Tomove;
						  _maxQuantity = maxQuantity _Tomove;
						  if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _foodArr;
						_pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1];
						_item = createVehicle ['m4a1', _pos, [], 0, 'CAN_COLLIDE'];
						sleep 2;
						_attGunArr = ['Att_Handguard_AK_Rail_Black','att_bipod_atlas','Att_Ghillie_Woodland','Att_Optic_PSO1','Att_Buttstock_AK_Wood_Camo','Att_Suppressor_AK','M_ak74_30Rnd']; 
						{_item createInInventory _x;} forEach _attGunArr;
						sleep 1;
						_whoisjew moveToHands _item;
		};
		if (_cmdtype3 == "mosin") then
		{
						_jewpos = getposATL _targetID;
						_whoisjew = (vehicle _targetID);
						_inventorylist = itemsInInventory _targetID;
						 { moveToGround _x; }forEach _inventorylist;
						 [_targetID,format['Admin gave you a loadout.'],'colorFriendly'] call fnc_playerMessage;
						 sleep 1.3;
						 _clothArr = ['bagassaultblack','gorkahelmet_complete_black','balaclavamask_blackskull','policejacket_orel','workinggloves_black','police_pants_orel','combatboots_black','highcapacityvest_black','rocketaviators'];
						 { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _clothArr;
						 sleep 1;
						_medArr = ['medical_transfusionkit','medical_splint','medical_bandagedressing','medical_morphine','medical_epinephrine'];				
						 {
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						 } forEach _medArr;
						 sleep 1;
						_invArr = ['map_chernarus','compass','consumable_matchbox','tool_leathersewingkit','tool_canopener','tool_lockpick','tool_heatpack','tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white'];
						{
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _invArr;
						 sleep 1;
						_foodArr = ['drink_canteen','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon','AmmoBox_762_20Rnd','AmmoBox_762_20Rnd','AmmoBox_762_20Rnd','AmmoBox_762_20Rnd'];
						{
						  _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						  _whoisjew moveToInventory _Tomove;
						  _maxQuantity = maxQuantity _Tomove;
						  if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _foodArr;
						_pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1];
						_item = createVehicle ['Mosin9130_Green_Black', _pos, [], 0, 'CAN_COLLIDE'];
						sleep 2;
						_attGunArr = ['Att_Optic_PUScope','Att_Ghillie_Woodland','Att_Compensator_Mosin']; 
						{_item createInInventory _x;} forEach _attGunArr;
						sleep 1;
						_whoisjew moveToHands _item;
		};

		if (_cmdtype3 == "aug") then
		{
						_jewpos = getposATL _targetID;
						_whoisjew = (vehicle _targetID);
						_inventorylist = itemsInInventory _targetID;
						 { moveToGround _x; }forEach _inventorylist;
						 [_targetID,format['Admin gave you a loadout.'],'colorFriendly'] call fnc_playerMessage;
						 sleep 1.3;
						 _clothArr = ['bagassaultblack','gorkahelmet_complete_black','balaclavamask_blackskull','policejacket_orel','workinggloves_black','police_pants_orel','combatboots_black','highcapacityvest_black','rocketaviators'];
						 { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _clothArr;
						 sleep 1;
						_medArr = ['medical_transfusionkit','medical_splint','medical_bandagedressing','medical_morphine','medical_epinephrine'];				
						 {
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						 } forEach _medArr;
						 sleep 1;
						_invArr = ['map_chernarus','compass','consumable_matchbox','tool_leathersewingkit','tool_canopener','tool_lockpick','tool_heatpack','tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white'];
						{
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _invArr;
						 sleep 1;
						_foodArr = ['drink_canteen','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon','M_STANAG_30Rnd_Coupled','M_STANAG_30Rnd_Coupled','M_STANAG_30Rnd_Coupled','M_STANAG_30Rnd_Coupled'];
						{
						  _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						  _whoisjew moveToInventory _Tomove;
						  _maxQuantity = maxQuantity _Tomove;
						  if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _foodArr;
						_pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1];
						_item = createVehicle ['AugSteyr', _pos, [], 0, 'CAN_COLLIDE'];
						sleep 2;
						_attGunArr = ['Att_Suppressor_M4','M_STANAG_30Rnd_Coupled']; 
						{_item createInInventory _x;} forEach _attGunArr;
						sleep 1;
						_whoisjew moveToHands _item;
		};

		if (_cmdtype3 == "saiga") then
		{
						_jewpos = getposATL _targetID;
						_whoisjew = (vehicle _targetID);
						_inventorylist = itemsInInventory _targetID;
						 { moveToGround _x; }forEach _inventorylist;
						 [_targetID,format['Admin gave you a loadout.'],'colorFriendly'] call fnc_playerMessage;
						 sleep 1.3;
						 _clothArr = ['bagassaultblack','gorkahelmet_complete_black','balaclavamask_blackskull','policejacket_orel','workinggloves_black','police_pants_orel','combatboots_black','highcapacityvest_black','rocketaviators'];
						 { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _clothArr;
						 sleep 1;
						_medArr = ['medical_transfusionkit','medical_splint','medical_bandagedressing','medical_morphine','medical_epinephrine'];				
						 {
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						 } forEach _medArr;
						 sleep 1;
						_invArr = ['map_chernarus','compass','consumable_matchbox','tool_leathersewingkit','tool_canopener','tool_lockpick','tool_heatpack','tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white'];
						{
						 _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						 _whoisjew moveToInventory _Tomove;
						 _maxQuantity = maxQuantity _Tomove;
						 if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _invArr;
						 sleep 1;
						_foodArr = ['drink_canteen','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon','M_SaigaDrum_20Rnd','M_SaigaDrum_20Rnd','M_SaigaDrum_20Rnd','M_SaigaDrum_20Rnd'];
						{
						  _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE'];
						  _whoisjew moveToInventory _Tomove;
						  _maxQuantity = maxQuantity _Tomove;
						  if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; 
						} forEach _foodArr;
						_pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1];
						_item = createVehicle ['ShotgunSaiga12K', _pos, [], 0, 'CAN_COLLIDE'];
						sleep 2;
						_attGunArr = ['Att_Buttstock_Saiga','M_SaigaDrum_20Rnd','Att_Optic_PSO1']; 
						{_item createInInventory _x;} forEach _attGunArr;
						sleep 1;
						_whoisjew moveToHands _item;
		};

};

DZ_tentWitLoot = {
_pos = _this select 0;
_cX = _pos select 0;
_cY = _pos select 1;

//["Grenade","Grenade","GrenadeRGD5","GrenadeRGD5","FlashGrenade","FlashGrenade","SmokeGrenade_Red","SmokeGrenade_Red","SmokeGrenade_Green","SmokeGrenade_Green","SmokeGrenade_Yellow","SmokeGrenade_Yellow","SmokeGrenade_Purple","SmokeGrenade_Purple","SmokeGrenade_White","SmokeGrenade_White","SmokeGrenade_RDG2_Black","SmokeGrenade_RDG2_Black","SmokeGrenade_RDG2_White","SmokeGrenade_RDG2_White","Trap_Bear","Trap_Bear"],

_arrayLoot = [
["M249","MP5K","PM73Rak","CZ61","UMP45","AK74","AKS74U","AK101","AKM","M4A1","AugSteyr","VSS"],
["SVD","FAL","SKS","Winchester70","b95","cz527","Mosin9130","Repeater","Ruger1022","Trumpet","M_FNX45_15Rnd","M_FNX45_15Rnd","M_357_Speedloader","M_357_Speedloader","M_DE_9rnd","M_DE_9rnd","M_1911_7Rnd","M_1911_7Rnd","M_CZ75_15Rnd","M_CZ75_15Rnd","M_Glock_15Rnd","M_Glock_15Rnd","M_P1_8Rnd","M_P1_8Rnd","M_IJ70_8Rnd","M_IJ70_8Rnd","M_MP5_15Rnd","M_MP5_30Rnd","M_PM73_15Rnd","M_PM73_25Rnd","M_CZ61_20Rnd","M_CZ61_20Rnd","M_22_Ruger_10Rnd","M_22_Ruger_30Rnd","M_22_mkii_10Rnd","M_22_mkii_10Rnd","CLIP_762_5Rnd","CLIP_762_5Rnd","CLIP_762_Snaploader","CLIP_762_Snaploader","CLIP_762x39_10Rnd","CLIP_762x39_10Rnd","CLIP_308Win_Snaploader","CLIP_762x39_10Rnd","CLIP_762x39_10Rnd","CLIP_9mm_10Rnd","CLIP_9mm_10Rnd","CLIP_308Win_Snaploader","M_cz527_5rnd","M_cz527_5rnd","M_akm_30Rnd","M_akm_drum","M_STANAG_30Rnd","M_STANAG_30Rnd_Coupled","M_svd_10Rnd","M_svd_10Rnd","M_Fal_20Rnd","M_Fal_20Rnd","M_UMP_25Rnd","M_UMP_25Rnd","M_Vss_10Rnd","M_Vss_10Rnd","M_ak101_30Rnd","M_ak101_30Rnd","M_ak74_30Rnd","M_ak74_30Rnd","M_12ga_Pellets_Snaploader","M_12ga_Pellets_Snaploader","M_Quiver_Arrows","M_Quiver_Arrows","M_Quiver_Bolts","M_Quiver_Bolts","M_SaigaDrum_20Rnd","M_SaigaDrum_20Rnd"],
["ShotgunIzh43","ShotgunMp133","ShotgunMp133_Pistol_Grip","izh18","izh18_Sawedoff","ShotgunIzh43_Sawedoff","ShotgunSaiga12K","Bow_Quickie","bow_pvc","Crossbow","1911","1911_Engraved","CZ75","DE_Gold","Derringer_Black","Derringer_Grey","Derringer_Pink","Flaregun","FNX45","Glock19","LongHorn","magnum","mkii","P1","ij70","Red9"],
["M_M249Box_200Rnd","M_M249Box_200Rnd","M_M249Box_200Rnd","AmmoBox_556_20Rnd","AmmoBox_556_20Rnd","AmmoBox_556_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd","AmmoBox_762_20Rnd","AmmoBox_762_20Rnd","AmmoBox_762_20Rnd","AmmoBox_762x39_20Rnd","AmmoBox_762x39_20Rnd","AmmoBox_762x39_20Rnd","AmmoBox_22_50Rnd","AmmoBox_22_50Rnd","AmmoBox_22_50Rnd","AmmoBox_357_20Rnd","AmmoBox_357_20Rnd","AmmoBox_357_20Rnd","AmmoBox_45acp_25rnd","AmmoBox_45acp_25rnd","AmmoBox_45acp_25rnd","AmmoBox_9mm_25rnd","AmmoBox_9mm_25rnd","AmmoBox_9mm_25rnd","AmmoBox_380_35rnd","AmmoBox_380_35rnd","AmmoBox_380_35rnd","AmmoBox_00buck_10rnd","AmmoBox_00buck_10rnd","AmmoBox_00buck_10rnd","AmmoBox_545_20Rnd","AmmoBox_545_20Rnd","AmmoBox_545_20Rnd","AmmoBox_9x39_20Rnd","AmmoBox_9x39_20Rnd","AmmoBox_9x39_20Rnd","AmmoBox_Flare","AmmoBox_Flare","AmmoBox_Flare","Arrows_Bolts","Arrows_Bolts","Arrows_Bolts","Arrows_Primitive","Arrows_Primitive","Arrows_Primitive","Arrows_Composite","Arrows_Composite","Arrows_Composite","M_FNX45_15Rnd","M_FNX45_15Rnd","M_357_Speedloader","M_357_Speedloader","M_DE_9rnd","M_DE_9rnd","M_1911_7Rnd","M_1911_7Rnd","M_CZ75_15Rnd","M_CZ75_15Rnd","M_Glock_15Rnd","M_Glock_15Rnd","M_P1_8Rnd","M_P1_8Rnd","M_IJ70_8Rnd","M_IJ70_8Rnd","M_MP5_15Rnd","M_MP5_30Rnd","M_PM73_15Rnd","M_PM73_25Rnd","M_CZ61_20Rnd","M_CZ61_20Rnd","M_22_Ruger_10Rnd","M_22_Ruger_30Rnd","M_22_mkii_10Rnd","M_22_mkii_10Rnd","CLIP_762_5Rnd","CLIP_762_5Rnd","CLIP_762_Snaploader","CLIP_762_Snaploader","CLIP_762x39_10Rnd","CLIP_762x39_10Rnd","CLIP_308Win_Snaploader","CLIP_762x39_10Rnd","CLIP_762x39_10Rnd","CLIP_9mm_10Rnd","CLIP_9mm_10Rnd","CLIP_308Win_Snaploader","M_cz527_5rnd","M_cz527_5rnd","M_akm_30Rnd","M_akm_drum","M_STANAG_30Rnd","M_STANAG_30Rnd_Coupled","M_svd_10Rnd","M_svd_10Rnd","M_Fal_20Rnd","M_Fal_20Rnd","M_UMP_25Rnd","M_UMP_25Rnd","M_Vss_10Rnd","M_Vss_10Rnd","M_ak101_30Rnd","M_ak101_30Rnd","M_ak74_30Rnd","M_ak74_30Rnd","M_12ga_Pellets_Snaploader","M_12ga_Pellets_Snaploader","M_Quiver_Arrows","M_Quiver_Arrows","M_Quiver_Bolts","M_Quiver_Bolts","M_SaigaDrum_20Rnd","M_SaigaDrum_20Rnd"]];
/*
["Att_Bayonet_M9A1","Att_Bayonet_Mosin","Att_Bayonet_SKS","Att_Compensator_Mosin","Att_Compensator_MP5","Att_Suppressor_M4","Att_Suppressor_AK","Att_Suppressor_AK","Att_Suppressor_AK","Att_Suppressor_Pistol","Att_Suppressor_Pistol","Att_Suppressor_Pistol","Att_Optic_M4CarryHandle","Att_Optic_BUIS","Att_Optic_M68","Att_Optic_M4T3NRDS","Att_Optic_FNP45_MRD","Att_Optic_Redpoint","Att_Optic_ACOG","Att_Optic_PUScope","Att_Optic_Longrange","Att_Optic_PSO1","Att_Optic_PSO1","Att_Optic_PSO1","Att_Buttstock_M4MP","Att_Buttstock_M4CQB","Att_Buttstock_AK_Folding_Black","Att_Handguard_M4RIS","Att_Handguard_M4MP","Att_Handguard_AK_Rail_Black","Att_Handguard_AK_Rail_Black","Att_Handguard_AK_Rail_Black","Att_Handguard_MP5_Rail","Att_Bipod_Atlas","Att_Bipod_Atlas","Att_Bipod_Atlas","Att_Bipod_Atlas","Att_Light_Universal","Att_Light_Universal","Att_Light_Universal","Att_Light_Universal","Att_Light_TLR","Att_Light_TLR","Att_Light_TLR","Att_Bayonet_AK","Att_Optic_Kashtan","Att_Optic_Kashtan","Att_Optic_Hunting","Att_Optic_Hunting","Att_Optic_Hunting","Att_Buttstock_Red9","Att_Buttstock_FalFolding","Att_Optic_Reflex","Att_Optic_Reflex"],
["Grenade","Grenade","GrenadeRGD5","GrenadeRGD5","FlashGrenade","FlashGrenade","SmokeGrenade_Red","SmokeGrenade_Red","SmokeGrenade_Green","SmokeGrenade_Green","SmokeGrenade_Yellow","SmokeGrenade_Yellow","SmokeGrenade_Purple","SmokeGrenade_Purple","SmokeGrenade_White","SmokeGrenade_White","SmokeGrenade_RDG2_Black","SmokeGrenade_RDG2_Black","SmokeGrenade_RDG2_White","SmokeGrenade_RDG2_White","Trap_Bear","Trap_Bear"],
["FirefighterAxe","CombatKnife","HuntingKnife","Machete","Pickaxe","Sword","BrassKnucklesShiny","TelescopicBaton","Chainsaw","CattleProd","StunBaton","Tool_Flashlight","Pen_Black","Pen_Red","Tool_CanOpener","Tool_Heatpack","Tool_MessTin","Tool_Lockpick","Tool_WeaponCleaningKit","Tool_SewingKit","Tool_LeatherSewingKit","Tool_Handcuffs","Tool_HandcuffKeys","Tool_Transmitter","Tool_Transmitter","Tool_Radio","Tool_Cassette","Tool_Shovel","Tool_Crowbar","Tool_FireExtinguisher","Tool_StoneKnife"],
["FarmingHoe","Tool_ImprovisedFishingRod","Tool_FishingRod","SledgeHammer","OrienteeringCompass","Optics_Binoculars","Optics_Rangefinder","Tool_FieldShovel","Tool_Hacksaw","Medical_DisinfectantSpray","Medical_DisinfectantAlcohol","Medical_CharcoalTablets","Medical_CharcoalTablets","Medical_CharcoalTablets","Medical_CharcoalTablets","Medical_TetracyclineAntibiotics","Medical_TetracyclineAntibiotics","Medical_TetracyclineAntibiotics","Medical_TetracyclineAntibiotics","Medical_TetracyclineAntibiotics","Medical_TetracyclineAntibiotics","Medical_Epinephrine","Medical_Epinephrine","Medical_Epinephrine","Medical_TransfusionKit","Medical_TransfusionKit","Medical_TransfusionKit","Meat_DeerSteak","Meat_DeerSteak","Meat_DeerSteak"],
["Consumable_DuctTape","Consumable_Bandana_redpattern","Consumable_Rags","Consumable_BurlapStrips","Consumable_Stone","Consumable_SmallStone","Consumable_Firewood","Consumable_Firewood","Consumable_Battery9V","Consumable_Battery9V","Consumable_Battery9V","Consumable_GasCanisterLarge","Consumable_ButaneCanister","Spraycan_Black","Spraycan_Black","Spraycan_Black","Spraycan_Green","Spraycan_Green","Spraycan_Green","Consumable_Matchbox","Consumable_Roadflare",	"Consumable_Chemlight_White","Consumable_Chemlight_Blue","Consumable_Flashbang","Consumable_Hook","Consumable_Bait","Consumable_GardenLime","Consumable_Netting","Consumable_Netting","Cooking_Tripod","Cooker_PortableStove","Cookware_Pot","Cookware_FryingPan","Light_PortableLamp","Light_Candle","Crafting_BurlapSack","Crafting_BurlapSack","Crafting_Rope","Crafting_Rope","Crafting_Torch","Crafting_SharpStick","Crafting_SharpStick","Crafting_ChickenFeather","Crafting_LongWoodenStick"],
["Cultivation_CannabisSeedsPack","Cultivation_PepperSeedsPack","Cultivation_PumpkinSeedsPack","Cultivation_ZucchiniSeedsPack","Drink_Canteen","Drink_WaterBottle","Drink_WaterBottle","Drink_SodaCanCola","Drink_SodaCanSpite","Food_CanBakedBeans","Food_CanPeaches","Food_CanTacticalBacon","Food_CanSpaghetti","Medical_Bandage","Medical_DisinfectantSpray","Medical_DisinfectantAlcohol","Medical_PurificationTablets","Medical_CharcoalTablets","Medical_PainkillerTablets","Medical_VitaminBottle","Medical_TetracyclineAntibiotics","Medical_Epinephrine","Medical_Morphine","Medical_Syringe","Medical_SalineBag","Medical_StartKit","Medical_TransfusionKit","Medical_BloodTest_Kit","Medical_Thermometer","Medical_Defibrillator"],
["BDUpants_Woodland","Sneakers_Black","Sneakers_Gray","Sneakers_Green","Sneakers_Red","Sneakers_White","Megaphone","Tool_ObsoleteFishingRod","EngineOil","M_ShockCartridge","M_Saiga_5Rnd","M_Saiga_8Rnd","M_SaigaDrum_20Rnd","M_dartgun_CO2","Att_Optic_Reflex","Ammo_762_tracer","Shockpistol","Shockpistol_Black","DartGun","D_Syringe_Single","M_dartgun_CO2","ShotgunSaiga12K","SparkPlug","EN5C_CamoNet","EN5C_FenceLight","CableReel"]];
*/
_fnc_spawn_in = {

	_lootIn = _this select 0;
	_spawnEventIn = _this select 1;
	{
		_spawnIn = _spawnEventIn createInCargo _x;	
		_cfgSpawns = configFile >> "CfgVehicles";
		_config = _cfgSpawns >> typeOf _spawnIn;
		_max = 0;
		_max = (getNumber (_config >> "stackedMax"));
		if (_max > 0) then
		{
			_spawnIn setQuantity _max;
		};
						
		_classRes = _config >> "Resources";
		if (isClass _classRes) then
		{
			_arreyRes = (getArray (_config >> "tooltipResources"));
			{
				_spawnIn setVariable [_x, (getNumber (_config >>"Resources" >>_x))];
			}forEach _arreyRes;
		};
		_baseAtta = getArray (configFile >> "cfgWeapons" >> (typeOf _spawnIn) >> "baseAttachments");
		{
			_itemAtt = _spawnIn createWeaponAttachment _x;				
		} forEach _baseAtta;
		
		_cusAtta = ["M_ak101_30Rnd","Att_Optic_PSO1","Att_Handguard_AK74_Camo","Att_Buttstock_AK_Wood_Camo","M_Saiga_5Rnd","M_Saiga_8Rnd","M_SaigaDrum_20Rnd","Att_Buttstock_Saiga","M_ak74_30Rnd","M_akm_drum","M_STANAG_30Rnd_Coupled","Att_Optic_Reflex","Att_Handguard_M4RIS","Att_Buttstock_M4MP","Att_Optic_ACOG","Att_Optic_M4T3NRDS","Att_Suppressor_M4","M_STANAG_30Rnd_Coupled","M_STANAG_30Rnd_Coupled","M_STANAG_30Rnd_Coupled","M_Vss_10Rnd","M_Vss_10Rnd","M_Vss_10Rnd","M_Vss_10Rnd","M_svd_10Rnd","M_svd_10Rnd","M_svd_10Rnd","M_svd_10Rnd","Att_Optic_Hunting","M_Fal_20Rnd","Att_Buttstock_FalFolding","Clip_762x39_10Rnd","Att_Bayonet_SKS","Att_Optic_PUScope","CLIP_308Win_Snaploader","M_cz527_5rnd","CLIP_762_5Rnd","Att_Suppressor_Improvised","Att_Compensator_Mosin"];
		{
		 _itemAtt = _spawnIn createWeaponAttachment _x;  //Custom att for guns
		} forEach _cusAtta;
		
		if (_x == "Part_CanisterGasoline") then
		{
			_spawnIn setVariable ["liquidType", "gasoline"];
		};
	}forEach _lootIn;
};


_ii =0;
diag_log format ["_ii: %1 , count: %2",_ii,(count _arrayLoot)];
{
	//_spawnEvent = createVehicle ["TentLarge_Pitched", [(_cX-3*_i),(_cY+5*_i)], [], 0, "CAN_COLLIDE"];
	_spawnEvent = createVehicle ["TentLarge_Pitched", [(_cX+2.5*_ii),(_cY+4.833*_ii)], [], 0, "CAN_COLLIDE"];
	_spawnEvent setDir 28.230024;
	_spawnEvent setpos [(_cX+2.5*_ii),(_cY+4.833*_ii)];
	
	_loot = _x;
	diag_log format ["_ii: %1 , %2, %3",_ii,_spawnEvent,_loot];
	[_loot,_spawnEvent] call _fnc_spawn_in; 
	_ii = _ii + 1;
}forEach _arrayLoot;
};

[] spawn {
_LDarray = ["akm","m4a1","b95","svd","fal","wini","ak101","ak74","mosin","aug","saiga"];
while {true} do {
		{
		  _id = owner _x;
		  _idZ = _x getVariable ["GU_ID",0];
		  _adminname = (name _x);
		  _adminVeh = (vehicle _x);
		if (_idZ in Owners) then
		{	_item = itemInHands _x;
		    if (_item isKindOf "BookBible") then {
				_pos = getposATL _x;
				_id spawnForClient {
		        [_x,"Exec..","colorAction"] call fnc_playerMessage;
		        };
				_paper = "Consumable_Paper" createVehicle [0, 0]; 
	            _savedCharTxt = "";
                _savedCharTxt = _paper callMethod ["GBCallPlayerREAD",_idZ];
                _savedChar = [];
                _savedChar = call compile (_savedCharTxt);
						_objecttype = _savedChar select 0;
						[_id,_pos] call compile (_objecttype);  //manual script execution.
						diag_log format ["Grabbed text: %1 ",_objecttype];
						_vehicle = createVehicle [_objecttype, _pos, [], 0, "CAN_COLLIDE"];

						//_vehicle setPos [(_pos select 0),(_pos select 1),(_pos select 2)];
                        _cuntarray = ["V3S_Chassis","V3S_Cargo","TransitBus","CivilianSedan","OffroadHatchback"];
						if (_objecttype in _cuntarray) then {
						_vehATT = ["TruckBattery","CarBattery","TruckExhaust","EngineBelt","CarRadiator","TruckRadiator","TireRepairKit","HeadlightH7","GlowPlug","SparkPlug","V3SWheel","V3SWheel","V3SWheelDouble","V3SWheelDouble","V3SWheelDouble","V3SWheelDouble","V3SDoors_Driver","V3SDoors_CoDriver","V3SHood","TransitBusWheel","TransitBusWheel","TransitBusWheelDouble","TransitBusWheelDouble","CivSedanWheel","CivSedanWheel","CivSedanWheel","CivSedanWheel","CivSedanDoors_Driver","CivSedanDoors_CoDriver","CivSedanDoors_BackLeft","CivSedanDoors_BackRight","CivSedanHood","CivSedanTrunk","HatchbackWheel","HatchbackWheel","HatchbackWheel","HatchbackWheel","HatchbackDoors_Driver","HatchbackDoors_CoDriver","HatchbackHood","HatchbackTrunk"];
						{
						  _itemAtt = _vehicle createInInventory _x;  //Att for each cars in array above.
						} forEach _vehATT;
                        } else {
						_baseAtta = getArray (configFile >> "cfgWeapons" >> (typeOf _vehicle) >> "baseAttachments");
						{
						  _itemAtt = _vehicle createWeaponAttachment _x;   //Base att for guns
						} forEach _baseAtta;
						_cusAtta = ["M_ak101_30Rnd","Att_Optic_PSO1","Att_Handguard_AK74_Camo","Att_Buttstock_AK_Wood_Camo","M_Saiga_5Rnd","M_Saiga_8Rnd","M_SaigaDrum_20Rnd","Att_Buttstock_Saiga","M_ak74_30Rnd","M_akm_drum","M_STANAG_30Rnd_Coupled","Att_Optic_Reflex","Att_Handguard_M4RIS","Att_Buttstock_M4MP","Att_Optic_ACOG","Att_Optic_M4T3NRDS","Att_Suppressor_M4","M_STANAG_30Rnd_Coupled","M_STANAG_30Rnd_Coupled","M_STANAG_30Rnd_Coupled","M_Vss_10Rnd","M_Vss_10Rnd","M_Vss_10Rnd","M_Vss_10Rnd","M_svd_10Rnd","M_svd_10Rnd","M_svd_10Rnd","M_svd_10Rnd","Att_Optic_Hunting","M_Fal_20Rnd","Att_Buttstock_FalFolding","Clip_762x39_10Rnd","Att_Bayonet_SKS","Att_Optic_PUScope","CLIP_308Win_Snaploader","M_cz527_5rnd","CLIP_762_5Rnd","Att_Suppressor_Improvised","Att_Compensator_Mosin"];
						{
							_itemAtt = _vehicle createWeaponAttachment _x;  //Custom att for guns
						} forEach _cusAtta;
						};
						_vehicleAI = createAgent [_objecttype, _pos, [], 0, "CAN_COLLIDE"];  //AI or Agent createvehicle.
						if (_objecttype == "/gm ON") then {
						_id spawnForClient {
				        [_x,"Exec..GOD mode ON!","colorAction"] call fnc_playerMessage;
				        };
						_x setVariable ["AdminGOD",_objecttype];
						_x removeAllEventHandlers "HandleDamage";
                        _x addEventHandler ["HandleDamage", {0}];
						};  _x getVariable ['isadmin',0];
						if (_objecttype == "/gm OFF") then { _id spawnForClient {[_x,"Exec..GOD mode OFF!","colorAction"] call fnc_playerMessage;}; _x setVariable ["AdminGOD",_objecttype]; _x addEventHandler ["HandleDamage",{_this call event_assessDamage} ]; };
						if (_objecttype == "/gm nearON") then {  _playerinArea = _pos nearEntities ["SurvivorPartsFemaleAfrican", 1]; {_x removeAllEventHandlers "HandleDamage"; _x addEventHandler ["HandleDamage", {0}]; [_x,"Admin Granted You GodMode!","colorAction"] call fnc_playerMessage; }forEach _playerinArea; }else{ if(_objecttype == "/gm allON") then { {_x removeAllEventHandlers "HandleDamage"; _x addEventHandler ["HandleDamage", {0}]; [_x,"Server: Admin Granted You GodMode!","colorAction"] call fnc_playerMessage; }forEach players; }; };
						if (_objecttype == "/gm nearOFF") then { _playerinArea = _pos nearEntities ["SurvivorPartsFemaleAfrican", 1]; {_x addEventHandler ["HandleDamage",{_this call event_assessDamage} ]; [_x,"You no longer have godmode!","colorFriednly"] call fnc_playerMessage; }forEach _playerinArea; }else{ if(_objecttype =="/gm allOFF") then { {_x addEventHandler ["HandleDamage",{_this call event_assessDamage} ]; [_x,"Server: You no longer have godmode!","colorFriednly"] call fnc_playerMessage; }forEach players; }; };
						if (_objecttype == "/sp tents") then { _calltents = [_pos] call DZ_tentWitLoot; };
						if (_objecttype == "/init off") then { _x setVariable ["ExecInit",20]; };
						if (_objecttype == "/init") then { _x setVariable ["ExecInit",420]; };
						if (_objecttype == "/fly on") then { DZ_adminfly = "true"; } else { if(_objecttype == "/fly off") then { DZ_adminfly = "false"; };  };
						if (_objecttype == "/dis") then { _vehicle = (vehicle _x); _vehicle setVariable ['isadmin',420]; };
						_initvalue = _x getVariable ["ExecInit","0"];
						if (_initvalue == 420) then {
						_cmd_arr = [];
                        _cmd_arr = call compile (_objecttype);
						_cmdtype = _cmd_arr select 0;  //type of command.
						_cmdtype2 = _cmd_arr select 1;   //name of player
						_cmdtype3 = _cmd_arr select 2;   //extra sector from array
						_cmdtype4 = _cmd_arr select 3;   //extra sector from array 2

						if(_cmdtype == "/tp") then { [_x,"Player was teleported to you.","colorFriendly"] call fnc_playerMessage; { if (name _x == _cmdtype2) then { _x setpos _pos; }; }foreach players; };
						if(_cmdtype == "/kill") then { [_x,"Player was rekt xD.","colorFriendly"] call fnc_playerMessage; { if (name _x == _cmdtype2) then { _x setDamage 1; }; }foreach players; };
						if(_cmdtype == "/gbp") then { [_x,"Selected Player's client now is fucked af xD.","colorFriendly"] call fnc_playerMessage; { if (name _x == _cmdtype2) then { deleteVehicle _x; }; }foreach players; };
						if(_cmdtype == "/strip") then { [_x,"Player is now butt naked xD.","colorFriendly"] call fnc_playerMessage; { if (name _x == _cmdtype2) then { {deleteVehicle _x;}forEach itemsInInventory _x; }; }foreach players; };
						if(_cmdtype == "/pgm") then { [_x,"Player now has godmode.","colorFriendly"] call fnc_playerMessage; { if (name _x == _cmdtype2) then { _x removeAllEventHandlers "HandleDamage"; _x addEventHandler ["HandleDamage", {0}]; }; }foreach players; };
						if(_cmdtype == "/m249") then { [_x,"Player now has an M249.","colorFriendly"] call fnc_playerMessage; { if (name _x == _cmdtype2) then { _item = itemInHands _x; deleteVehicle _item; _newitem = _x createInInventory "M249"; _newitem createInInventory "M_M249Box_200Rnd"; _newitem createInInventory "Att_Suppressor_M4"; _newitem createInInventory "Att_Optic_ACOG"; [_x,"ADMIN GAVE YOU AN M249!!!","colorFriendly"] call fnc_playerMessage; }; }foreach players; };
						if(_cmdtype == "/delpgm") then { [_x,"Player NO-LONGER has godmode.","colorFriendly"] call fnc_playerMessage; { if (name _x == _cmdtype2) then { _x addEventHandler ["HandleDamage",{_this call event_assessDamage} ]; }; }foreach players; };
						if(_cmdtype == "/ld") then { if (_cmdtype3 in _LDarray) then { [_x,format["Player %1 Was Granted The following Loadout: %2",_cmdtype2,_cmdtype3],"colorFriendly"] call fnc_playerMessage; { if (name _x == _cmdtype2) then { [_x,_cmdtype3] call DZ_LoadoutGiver; }; }forEach players; } else { [_x,"Error..Loadout does not exist.","colorImportant"] call fnc_playerMessage; }; };
						if(_cmdtype == "/tpto") then { _Tpdes = [0,0,0]; { if (name _x == _cmdtype2) then { _Tpdes = getpos _x; }; }foreach players; { if (name _x == _adminname) then {_x setPos _Tpdes; [_x,"Teleported to player","colorFriendly"] call fnc_playerMessage; }; }foreach players; };
						if(_cmdtype == "/sp_1") then { _adminVeh moveToInventory _item; _targPos = getPos _adminVeh; { if (name _x == _cmdtype2) then { if ( (vehicle _x) distance _targPos > 950) then { _specateGuy = getPos _x; _adminVeh setPos [(_specateGuy select 0),(_specateGuy select 1)+350]; }; }; }forEach players; sleep 1.5; [_x,format["Spectating: %1 For: %2 Seconds!",_cmdtype2,_cmdtype3],"colorFriendly"] call fnc_playerMessage; [_id,_cmdtype2,_cmdtype3] SpawnForClient { _cmdtype2 = _this select 1; _cmdtype3 = _this select 2; admin_spectate_1PP = [player,_cmdtype2,_cmdtype3]; publicVariableServer "admin_spectate_1PP"; }; };
						if(_cmdtype == "/sp_2") then { [_cmdtype2,_cmdtype3,_cmdtype4] spawn { _cmdtype2 = _this select 0; _cmdtype3 = _this select 1; _cmdtype4 = _this select 2; for [{_i=0}, {_i < _cmdtype4}, {_i=_i+1}] do { { if (name _x == _cmdtype3) then { if (lifeState _x == "ALIVE") then { targetPOS = getpos _x; SpecVeh = (vehicle _x); }; } else { if (name _x == _cmdtype2) then { if (lifeState SpecVeh == "ALIVE") then { (owner _x) publicVariableClient "targetPOS"; (owner _x) publicVariableClient "SpecVeh"; }; }; }; }forEach players; sleep 1; }; };  _targPos = [7500,7500,0]; { if (name _x == _cmdtype3) then { _targPos = getPos _x; }; }forEach players; { if (name _x == _cmdtype2) then { if ( (vehicle _x) distance _targPos > 850) then { (vehicle _x) setPos [(_targPos select 0),(_targPos select 1)+350]; }; }; }forEach players; sleep 2; [_cmdtype2,_cmdtype3,_cmdtype4] call DZ_camSPAWNER; };
						if (_cmdtype == "/cam") then { [_id,_cmdtype2,_cmdtype3] SpawnForClient { _time = _this select 1; _doTp = _this select 2; _cam = "camconstruct" camCreate [(getpos player select 0)+25,(getpos player select 1)+10,0]; _cam CameraEffect ["Internal", "TOP"]; _cam camSetPos [(getpos _cam select 0)+25,(getpos _cam select 1)+10,130]; _cam camConstuctionSetParams [[(getpos player select 0),(getpos player select 1),5000], 10000, 5000]; while {_time > 0} do { sleep 1; _time = _time - 1; _Camdistance = (getpos _cam) distance (getpos player); if ( _time <= 15 ) then { systemChat format["FreeCam:[%1 s]",_time]; }; if ( _Camdistance <= 5 ) then { _cam CameraEffect ["Terminate", "Back"]; camDestroy _cam; _time = 0; } else { if (_time <= 0) then { if ( _doTp ) then { DZM_UpdatePOS = [player,(getpos _cam)]; publicVariableServer "DZM_UpdatePOS"; systemChat "Teleported To Cam Position!"; }; _cam CameraEffect ["Terminate", "Back"]; camDestroy _cam; }; }; }; }; };
						};
        };
		};
		}forEach players;
		sleep 3;
};
};

//Fly
[] spawn {
while {true} do {
	{
		_id = owner _x;
		_idZ = _x getVariable ["GU_ID",0];
		if (_idZ in Owners) then {
			_item = itemInHands _x;
			if (_item isKindOf "Compass") then {
				_vehicle = (vehicle _x); 
				_vel = velocity _vehicle;
				_dir = direction _vehicle; 
				_speed = 2.4;
				_eyeDir = eyeDirection _x;
				_x setVectorDir [(_eyeDir select 0),(_eyeDir select 1),(_eyeDir select 2)];
				_vehicle setVelocity [(_vel select 0)+(sin _dir*_speed),(_vel select 1)+(cos _dir*_speed),4.4];
			};
		};
	}forEach players;
sleep 0.2;
};
};

[] spawn {
while {true} do {
	{
		_id = owner _x;
		_idZ = _x getVariable ["GU_ID",0];
		_stance = (animationState _x);
		_OnorOff = _x getVariable ["ExecInit",0];
		if (_idZ in Owners) then {
		if (_stance == "militarysalutepercwnonloop" && _OnorOff ==20) then {
		_x setVariable ["ExecInit",420];
		[_x,"Extra CMD ENABLED!","colorFriendly"] call fnc_playerMessage;
		};
		
		if (_stance == "militarysalutepercwnonloop" && _OnorOff ==420) then {
		_x setVariable ["ExecInit",20];
		[_x,"Extra CMD DISABLED!","colorFriendly"] call fnc_playerMessage;
		};
		};
	}forEach players;
sleep 1.5;
};
};
