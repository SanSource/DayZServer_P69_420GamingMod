[] spawn 
{
	while {true} do 
	{
		{	
			if ((_x getVariable ['blood',5000] < 2000) && (_x getVariable ['adminmenuran2',0] == 0)) then
			{
				_x setVariable ['adminmenuran2',1];
				_id = owner _x;
				_id spawnForClient {playeraction 'PlayerInjuredL';};
			}	
			else
			{
				if ((_x getVariable ['blood',5000] > 2000) && (_x getVariable ['adminmenuran2',0] == 1)) then 
				{
					_x setVariable ['adminmenuran2',0];
					_id = owner _x; 
					_id spawnForClient {playeraction 'playerhealthy';};
				};
			};
		}foreach players; 
		sleep 1;
	};
};
