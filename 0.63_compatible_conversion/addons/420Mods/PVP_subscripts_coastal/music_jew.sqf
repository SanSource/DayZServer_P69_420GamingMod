[] spawn {
while {true} do
{
	_ArraySoundTrackZZ = ["z_suspense_0","z_suspense_1","z_suspense_2","z_suspense_3","z_suspense_4","z_suspense_5","z_suspense_6","z_suspense_7","z_suspense_8","z_suspense_9","z_suspense_10","z_suspense_11","z_suspense_12","z_suspense_13","z_suspense_14","z_suspense_15","z_suspense_16","z_suspense_17","z_suspense_18","z_suspense_19","z_suspense_20","z_suspense_21","z_suspense_22","z_suspense_23","z_suspense_24","z_suspense_25","z_suspense_26","z_suspense_27","z_suspense_28","z_suspense_29","z_suspense_30","z_suspense_31","z_suspense_32","z_suspense_33","z_suspense_34","z_suspense_35"];
	_rndSTZZ = _ArraySoundTrackZZ select floor random count _ArraySoundTrackZZ;
	_value = getNumber (configFile >> "cfgmusic" >> _rndSTZZ >> "duration");
	{
	_id = owner _x;
	_id spawnForClient {
	_ArraySoundTrack = ["z_suspense_0","z_suspense_1","z_suspense_2","z_suspense_3","z_suspense_4","z_suspense_5","z_suspense_6","z_suspense_7","z_suspense_8","z_suspense_9","z_suspense_10","z_suspense_11","z_suspense_12","z_suspense_13","z_suspense_14","z_suspense_15","z_suspense_16","z_suspense_17","z_suspense_18","z_suspense_19","z_suspense_20","z_suspense_21","z_suspense_22","z_suspense_23","z_suspense_24","z_suspense_25","z_suspense_26","z_suspense_27","z_suspense_28","z_suspense_29","z_suspense_30","z_suspense_31","z_suspense_32","z_suspense_33","z_suspense_34","z_suspense_35"];
	_rndST = _ArraySoundTrack select floor random count _ArraySoundTrack;
	playMusic _rndST;
	};
	}forEach players;
	Sleep (_value);
};
};