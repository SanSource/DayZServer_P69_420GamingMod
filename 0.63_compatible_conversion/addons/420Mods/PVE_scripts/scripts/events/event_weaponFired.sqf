private["_unit","_ammo","_audible","_distance","_listTalk","_weapon"];
//[unit, weapon, muzzle, mode, ammo, magazine, projectile]
_unit = 		_this select 0;
_weapon = 		_this select 1;
_ammo = 		_this select 4;
_magazine = 		_this select 5;
_projectile = 	_this select 6;

if ( (vehicle _unit) distance [10060.891, 5436.0332] < 550 ) then {
_Warn_LVL = (vehicle _unit) getVariable ["Warnings",0];
_GUID = (vehicle _unit) getVariable ["GU_ID",0];
if ( !(_GUID in Owners) ) then {
if ( _Warn_LVL == 0 ) then {

_veh = (vehicle _unit);
moveToGround (itemInHands _veh);
(owner _unit) SpawnForClient { titleText ["SHOOTING NEAR/IN A SAFE-ZONE IS NOT ALLOWED! 1st WARNING","PLAIN DOWN"]; systemChat "SHOOTING NEAR/IN A SAFE-ZONE IS NOT ALLOWED! 1st WARNING"; };
(vehicle _unit) setVariable ["Warnings",1];
} else {

	if ( _Warn_LVL == 1 ) then {

		_veh = (vehicle _unit);
		deleteVehicle (itemInHands _veh);
		(vehicle _unit) setVariable ["Warnings",1];
		(owner _unit) SpawnForClient { titleText ["SHOOTING NEAR/IN A SAFE-ZONE IS NOT ALLOWED! WEAPON DELETED","PLAIN DOWN"]; systemChat "SHOOTING NEAR/IN A SAFE-ZONE IS NOT ALLOWED! WEAPON DELETED"; };
	};
};

};

};

// DONE in engine
/*
//remove fake magazine
_destroy = getNumber (configFile >> "CfgMagazines" >> _magazine >> "destroyOnEmpty") == 1;
if (_destroy) then
{
	hint "destroy";
	_actual = ((itemInHands _unit) itemInSlot "magazine");
	if (magazineAmmo _actual == 0) then
	{
		_parent = itemParent _actual;
		_parent removeFromInventory _actual;
		deleteVehicle _actual
	};
};

_shot = getText (configFile >> "CfgWeapons" >> _weapon >> "shotAction");
if (_shot != "") then
{
	_qty = _unit ammo _weapon;
	if (_qty == 0 and !_destroy) exitWith {};
	_unit playAction _shot;
};
*/