//SERVER WIDE ANNOUNCENTS\\

[] spawn {

while {true} do
{

 {
  _ch1 = format["Welcome to 420Gaming, The Dankest DayZ SA MOD available!"];
  [_x,_ch1,"colorFriendly"] call fnc_playerMessage;
  uiSleep 6;
  _ch2 = format["Report any bugs or problems by submitting a ticket at our website www.420Gaming.net/support/"];
  [_x,_ch2,"colorAction"] call fnc_playerMessage;
  uiSleep 6;
  _ch3 = format["Weve got big plans coming up as always!, stay tuned."];
  [_x,_ch3,"colorAction"] call fnc_playerMessage;
  uiSleep 7;
  _ch4 = format["Join our TeamSpeak at TS.420Gaming.net for support and to team up!"];
  [_x,_ch4,"colorFriendly"] call fnc_playerMessage;
  uiSleep 11;
  _ch5 = format["Check out our website at www.420Gaming.net"];
  [_x,_ch5,"colorFriendly"] call fnc_playerMessage;
  uiSleep 15;
  _ch6 = format["Admins are: MikeJones, TrE, DaOne, DeathSyb and Evan. Come to us with issues or problems. TrE is your GOD!"];
  [_x,_ch6,"colorFriendly"] call fnc_playerMessage;
  uiSleep 15;
  _ch7 = format["Your Donations are appreciated, & help keep the servers alive & developing. Thank You."];
  [_x,_ch7,"colorAction"] call fnc_playerMessage;
 }foreach players;

Sleep(360)
};
};