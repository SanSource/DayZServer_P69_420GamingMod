[] spawn {
_planeAC = createVehicle ["TransitBus", [4893.9,10029.1], [], 0, "CAN_COLLIDE"];
_vehATT = ["TruckBattery","CarBattery","TruckExhaust","EngineBelt","CarRadiator","TruckRadiator","TireRepairKit","HeadlightH7","GlowPlug","SparkPlug","V3SWheel","V3SWheel","V3SWheelDouble","V3SWheelDouble","V3SWheelDouble","V3SWheelDouble","V3SDoors_Driver","V3SDoors_CoDriver","V3SHood","TransitBusWheel","TransitBusWheel","TransitBusWheelDouble","TransitBusWheelDouble","CivSedanWheel","CivSedanWheel","CivSedanWheel","CivSedanWheel","CivSedanDoors_Driver","CivSedanDoors_CoDriver","CivSedanDoors_BackLeft","CivSedanDoors_BackRight","CivSedanHood","CivSedanTrunk","HatchbackWheel","HatchbackWheel","HatchbackWheel","HatchbackWheel","HatchbackDoors_Driver","HatchbackDoors_CoDriver","HatchbackHood","HatchbackTrunk"];
{
_itemAtt = _planeAC createInInventory _x;
} forEach _vehATT;
_planeAC setDir (random(360));

_color = format["#(argb,8,8,3)color(0,0.8,0,1,CO)"];
_planeAC setObjectTexture[0,_color];
_planeAC setObjectTexture[1,_color]; 
_planeAC setObjectTexture[2,_color];

DZ_gasforFollow = {
        {
        _id = owner _x;
        
        [_id,_planePOSfollow,_planeAC] spawnForClient {
			_follower = _this select 2;
			_posF = _this select 1;
			_pos = [(_posF select 0),(_posF select 1),0];
			private ["_source"];	
			_source = "#particlesource" createVehicleLocal _pos;
			_source setParticleParams
			[["\dz\data\data\ParticleEffects\Universal\Universal", 16, 4, 32, 1],
			"",
			"Billboard", 
			1, 8, [0, 0, 0], 
			[0, 0, 2.5], 
			0, 10, 7.9, 0.066, 
			[2, 6, 12], 
			[[0,0.2,0,1],[0,0.2,0,1],[0,0.2,0,1],[0,0.2,0,1]],
			[0.125],
			 1,
			 0, 
			 "",
			 "",
			 _follower];
			_source setParticleRandom [1.5, [0, 0, 0], [0.15, 0.15, 0.3], 30, 0.2, [0, 0, 0, 0], 0, 0];
			_source setDropInterval (0.15);
		
        };

        }forEach players;
        };
_planePOSfollow = getposASL _planeAC;
_callsmkfl = [_planePOSfollow,_planeAC] call DZ_gasforFollow;
};