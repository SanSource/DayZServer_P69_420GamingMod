[] spawn {

while {true} do
{

{
_magicpenis = [];
{
if ((getplayeruid _x != "") && (alive _x)) then
{
	_magicpenis = _magicpenis + [_x];
};
}foreach players;
 _tits = count _magicpenis;
  _ch8 = format["PLAYERS ONLINE: %1",_tits];
  [_x,_ch8,"colorFriendly"] call fnc_playerMessage;
 }foreach players;

Sleep(120)
};
};