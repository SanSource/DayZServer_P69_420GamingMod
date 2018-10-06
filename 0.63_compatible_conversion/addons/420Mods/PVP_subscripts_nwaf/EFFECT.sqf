{
	_id = owner _x;
	_id spawnForClient {
	private["_commit"];
	_commit = 60;
	enableCamShake true;
	addCamShake [150, 10, 5];
	
	"dynamicBlur" ppEffectAdjust [150];
	"dynamicBlur" ppEffectCommit 0.1;

	"colorInversion" ppEffectEnable true;
	"colorInversion" ppEffectAdjust [0.3, 0.4, 0.2];
	"colorInversion" ppEffectCommit 0.1;

	"chromAberration" ppEffectEnable true;
	"chromAberration" ppEffectAdjust [0.01,0.01,true];
	"chromAberration" ppEffectCommit 0.1;
	
	"radialBlur" ppEffectEnable true;
	"radialBlur" ppEffectAdjust [10,10,10,10];
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
}forEach players;