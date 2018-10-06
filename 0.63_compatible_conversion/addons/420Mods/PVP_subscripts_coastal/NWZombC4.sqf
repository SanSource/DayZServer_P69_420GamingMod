DZ_jewwaskilled = {
private["_agent","_uid"];
_agent = _this select 0;
_killer = _this select 1;

sleep 2;
deleteVehicle _agent;
};

DZ_gasforFollowNEWZZ = {
        {
        _id = owner _x;
        
        [_id,_planePOSfollow,_vehicle] spawnForClient {
			_follower = _this select 2;
			_posF = _this select 1;
			_pos = [(_posF select 0),(_posF select 1),0];
			private ["_source","_source2"];	
			_source = "#particlesource" createVehicleLocal _pos;
			_source setParticleParams
			/*Sprite*/			[["\dz\data\data\ParticleEffects\Universal\Universal", 16, 10, 32, 1],"",// File,Ntieth,Index,Count,Loop(Bool)
			/*Type*/			"Billboard",
			/*TimmerPer*/		3,
			/*Lifetime*/		0.5,
			/*Position*/		[0, 0, 0.3],
			/*MoveVelocity*/	[0, 0, 0.2],
			/*Simulation*/		0.2, 0.05, 0.04, 0.05, //rotationVel,weight,volume,rubbing //0, 0.05, 0.04, 0.05,
			/*Scale*/			[2, 1.5, 1.6],
			/*Color*/			[[0.8,1,0.3,0],[0.8,1,0.3,-1],[0.8,1,0.3,-3],[0.8,1,0.3,-3],[0.8,1,0.3,-1],[0.8,1,0.3,0]],
			/*AnimSpeed*/		[0.8,0.3,0.25], //[0.8,0.3,0.25],
			/*randDirPeriod*/	0.1,
			/*randDirIntesity*/	0.05,
			/*onTimerScript*/	"",
			/*DestroyScript*/	"",
			/*Follow*/			_follower];
			
			//[lifeTime, position, moveVelocity, rotationVelocity, size, color, randomDirectionPeriod, randomDirectionIntensity]
			_source setParticleRandom [0.2, [0, 0, 0], [0.1, 0.1, 0.4], 0.1, 0.1, [0, 0, 0, 0], 0, 0];
			_source setDropInterval (0.03);

			_source2 = "#particlesource" createVehicleLocal _pos;
			_source2 setParticleParams
			/*Sprite*/			[["\dz\data\data\ParticleEffects\Universal\Universal", 16, 7, 48, 1],"",// File,Ntieth,Index,Count,Loop(Bool)
			/*Type*/			"Billboard",
			/*TimmerPer*/		3,
			/*Lifetime*/		3,
			/*Position*/		_particle_position,	
			/*MoveVelocity*/	[0, 0, 0.15],
			/*Simulation*/		5, 0.05, 0.04, 0.05, //rotationVel,weight,volume,rubbing //0, 0.05, 0.04, 0.05,
			/*Scale*/			[1.8, 1.5, 1.6],
			/*Color*/			[[0.6,0.6,0.6,0],[0.7,0.7,0.7,0.2],[0.8,0.8,0.8,0.1],[1,1,1,0]],
			/*AnimSpeed*/		[1,0.4,0.1], //[0.8,0.3,0.25],
			/*randDirPeriod*/	0,
			/*randDirIntesity*/	0,
			/*onTimerScript*/	"",
			/*DestroyScript*/	"",
			/*Follow*/			_follower];
			
			//[lifeTime, position, moveVelocity, rotationVelocity, size, color, randomDirectionPeriod, randomDirectionIntensity]
			_source2 setParticleRandom [1.5, [0, 0, 0], [0.15, 0.15, 0.3], 30, 0.2, [0, 0, 0, 0], 0, 0];
			_source2 setDropInterval (0.1);
		
        };

        }forEach players;
        };

_infected = 12;
diag_log format ["Spawn infected arrays %1",_infected];

//spawn points array
_ZedPointsArray = [
[4545.01,10233.3,0],
[4545.01,10223.3,0]
];

_arrayZom= [
        ["ZmbM_PatrolNormal_PautRev"],
        ["ZmbM_PatrolNormal_Autumn"],
        ["ZmbM_PatrolNormal_Flat"],
        ["ZmbM_PatrolNormal_Summer"],
        ["ZmbM_SoldierNormal"],
        ["ZmbF_DoctorSkinny"],
        ["ZmbM_FishermanOld_Red"],
        ["ZmbM_HunterOld_Autumn"],
        ["ZmbM_HunterOld_Spring"],
        ["ZmbM_HunterOld_Summer"],
        ["ZmbM_HunterOld_Winter"],
        ["ZmbM_VillagerOld_Blue"],
        ["ZmbM_VillagerOld_Green"],
        ["ZmbM_HikerSkinny_Green"],
        ["ZmbM_HikerSkinny_Yellow"],
        ["ZmbF_HikerSkinny_Blue"],
        ["ZmbF_HikerSkinny_Grey"],
        ["ZmbF_HikerSkinny_Green"],
        ["ZmbF_HikerSkinny_Red"],
        ["ZmbF_ParamedicNormal_Red"],
        ["Animal_CanisLupus_Grey"],
        ["Animal_CanisLupus_White"]
];


fnc_spawnInfected = 
	{
		for "ii" from 1 to _infected do
		{
			_this = _ZedPointsArray select floor(random(count _ZedPointsArray));
            _radius = random 150;
			_vehicle = createAgent [(_arrayZom select floor(random(count _arrayZom))) select 0, _this, [], _radius, "CAN_COLLIDE"];	
			_vehicle setDir floor(random 360);
			_vehicle addeventhandler ["killed",{null = _this spawn DZ_jewwaskilled; } ];
			
			_planePOSfollow = getposASL _vehicle;
			_callsmkfl = [_planePOSfollow,_vehicle] call DZ_gasforFollowNEWZZ;
		};
	};
	


if (_infected > 0) then
{
	call fnc_spawnInfected;
};