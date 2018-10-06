class Temperature2: Temperature
{
	private const float	NONAFFECTING_HEAT_COMFORT_MIN_TRESHOLD2 = -6;
	private const float	NONAFFECTING_HEAT_COMFORT_MAX_TRESHOLD2 = 300; //! overheating is disabled through this
	private const float	HEALTHY_TEMPERATURE2 = 36.8;
	private const float	TEMPERATURE_INCREMENT_PER_SEC2 = 0.008;
	private float		m_LastTemperatureLevel2;
	
	override void OnTick(PlayerBase player, float deltaT)
	{
		float heat_comfort = player.GetStatHeatComfort().Get();
		float temperature = player.GetStatTemperature().Get();

		float temperaturedelta  = Math.AbsInt(temperature - m_LastTemperatureLevel2);
		if (temperature <  m_LastTemperatureLevel2) temperaturedelta = -temperaturedelta;

		m_LastTemperatureLevel2 = temperature;
		
		if ( heat_comfort > NONAFFECTING_HEAT_COMFORT_MAX_TRESHOLD2 || heat_comfort < NONAFFECTING_HEAT_COMFORT_MIN_TRESHOLD2 )
		{
			// temp decresase rate calculation
			float temperature_increment = 0.0001 * heat_comfort * deltaT; //extremer the heatcomfort value, the bigger effect on temperature growth/decrease ,
			
			player.GetStatTemperature().Add( temperature_increment, this.GetName() ); 
		}
		else
		{
			if ( temperature < HEALTHY_TEMPERATURE2 )
			{
				player.GetStatTemperature().Add( (TEMPERATURE_INCREMENT_PER_SEC2*deltaT),this.GetName() );
			}
		}	
	}
};

