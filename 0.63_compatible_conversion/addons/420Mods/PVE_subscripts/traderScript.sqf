DZ_TradersActive = true;

_pos0 = [10066.96,5442.76];
_inArea0 = nearestObjects [_pos0, ["Blue_BarrelHoles"], 5];
{
  deleteVehicle _x;
}forEach _inArea0;

_pos1 = [6355.11,7782.63];
_inArea1 = nearestObjects [_pos1, ["Blue_BarrelHoles"], 5];
{
  deleteVehicle _x;
}forEach _inArea1;


_pos2 = [2316.75,9613.99];
_inArea2 = nearestObjects [_pos2, ["Blue_BarrelHoles"], 5];
{
  deleteVehicle _x;
}forEach _inArea2;

_TT_Clothing = [
"Hat_Leather_Black",
"Top_LeatherJacket_Black",
"Pants_LeatherPants_Black",
"Shoes_LeatherMoccasins_Black",
"Glasses_ThickFrames"
];

_Medical_Clothing = [
"MedicalScrubs_Hat_Green",
"ParamedicJacketGreen",
"ParamedicPantsGreen",
"WorkingGloves_Yellow",
"LeatherShoes_Black"
];

_Banker_Clothing = [
"TrackSuit_Jacket_Green",
"TrackSuit_Pants_Green",
"Ushanka_Black",
"Sneakers_Green",
"RocketAviators"
];

_Vehicle_Clothing = [
"Slacks_Pants_Black",
"BomberJacket_Black",
"AthleticShoes_Black",
"JoeyXSunGlasses",
"TacticalGloves_Black"
];

_Weapons_Clothing = [
"USMC_Jacket_Woodland",
"USMC_Pants_Woodland",
"BaseballCap_CMMG_Black",
"RocketAviators",
"CombatBoots_Beige"
];

/*------------------------------------------------Staroye trader BOTS------------------------------------------------------------------------------*/
_BankerTrader = createAgent ["SurvivorPartsMaleAfrican", [10064.167, 5442.5361, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
_BankerTrader setDir 32.160389;
_BankerTrader removeAllEventHandlers "HandleDamage"; _BankerTrader addEventHandler ["HandleDamage", {0}]; //Asign no damage to trader
_typeofTrader = "Banker";
_BankerTrader setVariable ["TypeOfTrader",_typeofTrader];
{_BankerTrader createInInventory _x;} forEach _Banker_Clothing;

_WeaponTrader = createAgent ["SurvivorPartsMaleAfrican", [10070.089, 5442.8936, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
_WeaponTrader setDir 203.94446;
_WeaponTrader removeAllEventHandlers "HandleDamage"; _WeaponTrader addEventHandler ["HandleDamage", {0}]; //Asign no damage to trader
_typeofTrader = "Weapons";
_WeaponTrader setVariable ["TypeOfTrader",_typeofTrader];
{ _WeaponTrader createInInventory _x; } forEach _Weapons_Clothing;

_ClothingTrader = createAgent ["SurvivorPartsMaleAfrican", [10065.396, 5428.2783], [], 0, "CAN_COLLIDE"];
_ClothingTrader setDir 16.362812;
_ClothingTrader removeAllEventHandlers "HandleDamage"; _ClothingTrader addEventHandler ["HandleDamage", {0}]; //Asign no damage to trader
_typeofTrader = "Clothing";
_ClothingTrader setVariable ["TypeOfTrader",_typeofTrader];
{ _ClothingTrader createInInventory _x; } forEach _TT_Clothing;

_VehicleTrader = createAgent ["SurvivorPartsMaleAfrican", [10058.959, 5429.1689, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
_VehicleTrader setDir 30.573847;
_VehicleTrader removeAllEventHandlers "HandleDamage"; _VehicleTrader addEventHandler ["HandleDamage", {0}]; //Asign no damage to trader
_typeofTrader = "Vehicle";
_VehicleTrader setVariable ["TypeOfTrader",_typeofTrader];
_TraderLoc = "Staroye";
_VehicleTrader setVariable ["TraderLoc",_TraderLoc];
{_VehicleTrader createInInventory _x; } forEach _Vehicle_Clothing;

_MedicalTrader = createAgent ["SurvivorPartsMaleAfrican", [10053.038, 5433.2207, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
_MedicalTrader setDir 74.907661;
_MedicalTrader removeAllEventHandlers "HandleDamage"; _MedicalTrader addEventHandler ["HandleDamage", {0}]; //Asign no damage to trader
_typeofTrader = "Medical_Food";
_MedicalTrader setVariable ["TypeOfTrader",_typeofTrader];
{_MedicalTrader createInInventory _x;} forEach _Medical_Clothing;

//----------------------------------- LOPATINO TRADER BOTS--------------------------------------------------------------
_BankerTrader = createAgent ["SurvivorPartsMaleAfrican", [2314.9932, 9617.6377, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
_BankerTrader setDir 266.24066;
_BankerTrader removeAllEventHandlers "HandleDamage"; _BankerTrader addEventHandler ["HandleDamage", {0}]; //Asign no damage to trader
_typeofTrader = "Banker";
_BankerTrader setVariable ["TypeOfTrader",_typeofTrader];
{_BankerTrader createInInventory _x;} forEach _Banker_Clothing;

_WeaponTrader = createAgent ["SurvivorPartsMaleAfrican", [2314.6172, 9612.4854], [], 0, "CAN_COLLIDE"];
_WeaponTrader setDir 282.19681;
_WeaponTrader removeAllEventHandlers "HandleDamage"; _WeaponTrader addEventHandler ["HandleDamage", {0}]; //Asign no damage to trader
_typeofTrader = "Weapons";
_WeaponTrader setVariable ["TypeOfTrader",_typeofTrader];
{ _WeaponTrader createInInventory _x; } forEach _Weapons_Clothing;

_ClothingTrader = createAgent ["SurvivorPartsMaleAfrican", [2299.5654, 9619.9287], [], 0, "CAN_COLLIDE"];
_ClothingTrader setDir 131.52324;
_ClothingTrader removeAllEventHandlers "HandleDamage"; _ClothingTrader addEventHandler ["HandleDamage", {0}]; //Asign no damage to trader
_typeofTrader = "Clothing";
_ClothingTrader setVariable ["TypeOfTrader",_typeofTrader];
{ _ClothingTrader createInInventory _x; } forEach _TT_Clothing;

_VehicleTrader = createAgent ["SurvivorPartsMaleAfrican", [2303.8608, 9623.2305, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
_VehicleTrader setDir 152.76283;
_VehicleTrader removeAllEventHandlers "HandleDamage"; _VehicleTrader addEventHandler ["HandleDamage", {0}]; //Asign no damage to trader
_typeofTrader = "Vehicle";
_VehicleTrader setVariable ["TypeOfTrader",_typeofTrader];
_TraderLoc = "Lopatino";
_VehicleTrader setVariable ["TraderLoc",_TraderLoc];
{_VehicleTrader createInInventory _x;} forEach _Vehicle_Clothing;

_MedicalTrader = createAgent ["SurvivorPartsMaleAfrican", [2297.0066, 9616.9912, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
_MedicalTrader setDir 129.97606;
_MedicalTrader removeAllEventHandlers "HandleDamage"; _MedicalTrader addEventHandler ["HandleDamage", {0}]; //Asign no damage to trader
_typeofTrader = "Medical_Food";
_MedicalTrader setVariable ["TypeOfTrader",_typeofTrader];
{_MedicalTrader createInInventory _x;} forEach _Medical_Clothing;

//-------------------------------------------------------------------------------------------------
//                                   Stary Trader Bots

_BankerTrader = createAgent ["SurvivorPartsMaleAfrican", [6359.7725, 7760.9819, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
_BankerTrader setDir 162.48698;
_BankerTrader removeAllEventHandlers "HandleDamage"; _BankerTrader addEventHandler ["HandleDamage", {0}]; //Asign no damage to trader
_typeofTrader = "Banker";
_BankerTrader setVariable ["TypeOfTrader",_typeofTrader];
{_BankerTrader createInInventory _x;} forEach _Banker_Clothing;

_WeaponTrader = createAgent ["SurvivorPartsMaleAfrican", [6358.4341, 7780.7852, -9.1552734e-005], [], 0, "CAN_COLLIDE"];
_WeaponTrader setDir 189.86511;
_WeaponTrader removeAllEventHandlers "HandleDamage"; _WeaponTrader addEventHandler ["HandleDamage", {0}]; //Asign no damage to trader
_typeofTrader = "Weapons";
_WeaponTrader setVariable ["TypeOfTrader",_typeofTrader];
{ _WeaponTrader createInInventory _x; } forEach _Weapons_Clothing;

_ClothingTrader = createAgent ["SurvivorPartsMaleAfrican", [6361.4248, 7778.9634, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
_ClothingTrader setDir 194.95644;
_ClothingTrader removeAllEventHandlers "HandleDamage"; _ClothingTrader addEventHandler ["HandleDamage", {0}]; //Asign no damage to trader
_typeofTrader = "Clothing";
_ClothingTrader setVariable ["TypeOfTrader",_typeofTrader];
{ _ClothingTrader createInInventory _x; } forEach _TT_Clothing;

_VehicleTrader = createAgent ["SurvivorPartsMaleAfrican", [6352.1597, 7778.4829, 6.1035156e-005], [], 0, "CAN_COLLIDE"];
_VehicleTrader setDir 133.20857;
_VehicleTrader removeAllEventHandlers "HandleDamage"; _VehicleTrader addEventHandler ["HandleDamage", {0}]; //Asign no damage to trader
_typeofTrader = "Vehicle";
_VehicleTrader setVariable ["TypeOfTrader",_typeofTrader];
_TraderLoc = "Stary";
_VehicleTrader setVariable ["TraderLoc",_TraderLoc];
{_VehicleTrader createInInventory _x;} forEach _Vehicle_Clothing;

_MedicalTrader = createAgent ["SurvivorPartsMaleAfrican", [6349.6694, 7776.5112, -0.00015258789], [], 0, "CAN_COLLIDE"];
_MedicalTrader setDir 133.20857;
_MedicalTrader removeAllEventHandlers "HandleDamage"; _MedicalTrader addEventHandler ["HandleDamage", {0}]; //Asign no damage to trader
_typeofTrader = "Medical_Food";
_MedicalTrader setVariable ["TypeOfTrader",_typeofTrader];
{_MedicalTrader createInInventory _x;} forEach _Medical_Clothing;


//-------------- Staroye Barrel-----------------------
_Barrel = createVehicle ["Blue_BarrelHoles", [10066.96,5442.76], [], 0, "NONE"]; 
_Barrel animate ["Lid2",0]; _Barrel animate ["Lid",1]; 
_Barrel setVariable["lidopen",true]; 
_Barrel setVariable["busy",true];
_Barrel setVariable["TradeBarrel","true"];
_Barrel setVariable["Avilability",(round(random 220))];
_Barrel animate ["ashes",1];
_Barrel animate ["camoGround",1];
[_Barrel] spawn { _Barrel = _this select 0; while {true} do { _Barrel animate ['LidOff',0]; _Barrel animate ['LidOn',1];  sleep 0.2;};  };

//-------------- Stary Barrel-----------------------
_Barrel2 = createVehicle ["Blue_BarrelHoles", [6355.11,7782.63], [], 0, "NONE"]; 
_Barrel2 animate ["Lid2",0]; _Barrel2 animate ["Lid",1]; 
_Barrel2 setVariable["lidopen",true]; 
_Barrel2 setVariable["busy",true];
_Barrel2 setVariable["TradeBarrel","true"];
_Barrel2 setVariable["Avilability",(round(random 120))];
_Barrel2 animate ["ashes",1];
_Barrel2 animate ["camoGround",1];
[_Barrel2] spawn { _Barrel2 = _this select 0; while {true} do { _Barrel2 animate ['LidOff',0]; _Barrel2 animate ['LidOn',1]; sleep 0.2;};  };

//-------------- Lopatino Barrel-----------------------
_Barrel3 = createVehicle ["Blue_BarrelHoles", [2316.75,9613.99], [], 0, "NONE"]; 
_Barrel3 animate ["Lid2",0]; _Barrel3 animate ["Lid",1]; 
_Barrel3 setVariable["lidopen",true]; 
_Barrel3 setVariable["busy",true];
_Barrel3 setVariable["TradeBarrel","true"];
_Barrel3 setVariable["Avilability",(round(random 120))];
_Barrel3 animate ["ashes",1];
_Barrel3 animate ["camoGround",1];
[_Barrel3] spawn { _Barrel3 = _this select 0; while {true} do {  _Barrel3 animate ['LidOff',0]; _Barrel3 animate ['LidOn',1]; sleep 0.2;};  };

//------------------------------------------------------------------------------------------------


diag_log "all code is owned by 420 gaming and it's team";