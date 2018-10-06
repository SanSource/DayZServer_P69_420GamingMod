{
	_jews = ["Cal","[BOFA]MrChow","Modernkilla82","DaOne","Wolf","Jordanwee"];
	if (name _x in _jews) then {
	_id = owner _x;
	_id spawnForClient {
	addCamShake [2, 120, 5];
	
	"colorInversion" ppEffectEnable true;
	"colorInversion" ppEffectAdjust [0.3, 0.4, 0.2];
	"colorInversion" ppEffectCommit 0.1;

	"chromAberration" ppEffectEnable true;
	"chromAberration" ppEffectAdjust [0.01,0.01,true];
	"chromAberration" ppEffectCommit 0.1;
	
	"radialBlur" ppEffectEnable true;
	"radialBlur" ppEffectAdjust [500,500,500,500];
	"radialBlur" ppEffectCommit 0.1;

	"dynamicBlur" ppEffectEnable true;
	"dynamicBlur" ppEffectAdjust [75];
	"dynamicBlur" ppEffectCommit 0.1;
	
	"dynamicBlur" ppEffectAdjust [105];
	"dynamicBlur" ppEffectCommit 0.1;
	
	"chromAberration" ppEffectEnable true;
	"chromAberration" ppEffectAdjust [0.01,0.01,true];
	"chromAberration" ppEffectCommit 0.1;
	
	"colorCorrections" ppEffectEnable true;
	"colorCorrections" ppEffectAdjust [1, 1, 0, [69.8, 29.8, 49], [69.8, 29.8, 49], [69.8, 29.8, 49]];
	"colorCorrections" ppEffectCommit 0.1;
	};

	};
}forEach players;