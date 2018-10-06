class Hologram2: Hologram
{		
	
	string 	ITEM_TYPE;

	protected const float 	SMALL_OBJECT_RADIUS 	= 0.3;
	protected const float	DISTANCE_SMALL_OBJECT	= 5.5;
	
	void Hologram( string obj_name, PlayerBase player )
	{
		m_Player = player;
		m_Parent = GetParentObject();
		m_Projection = NULL;
		m_UpdatePosition = true;

		vector playerPOS = player.GetPosition();
		vector NewPosition;
		playerPOS[0] = NewPosition[0] + 5;
		playerPOS[1] = NewPosition[1];
		playerPOS[2] = NewPosition[2];
		ItemBase hologram_item = GetGame().CreateObject( obj_name, NewPosition, true ); //if True, object is not spawned on clients only on server 
		
		if ( obj_name == "Fence" )
		{
			ITEM_TYPE = "Fence";
		}
		
		SetProjectionObject( hologram_item );
		
		if ( GetGame().IsMultiplayer() && GetGame().IsServer() )
		{
			return;
		}
		
		hologram_item.SetAffectPathgraph( false, false );
		
		if ( m_Projection.HasAnimation( SELECTION_PLACING ) )
		{
			m_Projection.SetAnimationPhase( "filled", 0 );
		}
		else
		{
			UpdateSelections();
			m_Projection.SetAnimationPhase( "filled", 0 );
		}
			
		if ( m_Projection.HasAnimation( SELECTION_INVENTORY ) )
		{
			m_Projection.SetAnimationPhase( "filled", 0 );
		}
		
		RefreshVisual( SELECTION_PLACING );
		
		//m_UpdateTimer = new TimerUpdate(this, "Update", CALL_CATEGORY_SYSTEM);
	}

	ItemBase GetParentObject()
	{
		return m_Player.GetItemInHands();
	}
	
	void SetProjectionObject( ItemBase projection )
	{
		m_Projection = projection;
	}

	ItemBase GetProjectionObject()
	{
		return m_Projection;
	}

	void SetCollisionState( bool is_colliding )
	{
		m_IsColliding = is_colliding;
		
		RefreshVisual( SELECTION_PLACING );
	}

		
	// Updates selections on hologram object so they reflect the state of the parent object's selections.
	void UpdateSelections()
	{
		string cfg_access = "CfgVehicles " + m_Projection.GetType() + " AnimationSources ";
		
		if ( GetGame().ConfigIsExisting(cfg_access) )
		{
			int cfg_access_count = g_Game.ConfigGetChildrenCount(cfg_access);

			for ( int i = 0; i < cfg_access_count; ++i )
			{
				string found_anim;
				GetGame().ConfigGetChildName(cfg_access, i, found_anim);
				
				if ( found_anim != SELECTION_INVENTORY )
				{
					float anim_phase = m_Parent.GetAnimationPhase(found_anim);
					m_Projection.SetAnimationPhase( "filled", 0 );
				}
			}
		}
	}
	
		
	void PlaceEntity( EntityAI entity_for_placing, vector placing_position, vector placing_orientation )
	{	
		if( !GetProjectionEntity().IsKindOf( m_Parent.GetType() ))
		{
			Class.CastTo(entity_for_placing, GetGame().CreateObject( m_Projection.GetType(), m_Projection.GetPosition() ));
		}
			
		entity_for_placing.SetAffectPathgraph( true, false );
		
		if ( entity_for_placing.GetType() == "Fence" || m_Parent.GetType() == "Fence" )
		{
			ItemBase item = m_Parent;
			PlayerBase player = GetGame().GetPlayer();
			string Player_UID;
			Player_UID = player.GetID().ToString();
			//item.SetVariable("owner",Player_UID); //TODO: this doesn't work!!!
		}

		if( entity_for_placing.CanAffectPathgraph() )
		{
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, entity_for_placing);
		}
	}	

	private vector GetProjectionObjectPosition( PlayerBase player )
	{
		float min_projection_dist; 
		float max_projection_dist; 
		float camera_to_player_distance = vector.Distance( GetGame().GetCurrentCameraPosition(), player.GetPosition() );

		vector min_max[2];
		float projection_item_radius = m_Projection.ClippingInfo( min_max );
		
		if( projection_item_radius < SMALL_OBJECT_RADIUS )	// objects with radius smaller than 1.5m
		{
			min_projection_dist = camera_to_player_distance + ( DISTANCE_SMALL_OBJECT / 12 ); // min distance is 1/3 of the max distance
			max_projection_dist = camera_to_player_distance + DISTANCE_SMALL_OBJECT;
		}
		else
		{
			min_projection_dist = camera_to_player_distance + ( projection_item_radius / 12 ); // min distance is 1/3 of the max distance
			max_projection_dist = camera_to_player_distance + projection_item_radius;
		}
		
		vector from = GetGame().GetCurrentCameraPosition();
		vector to = from + ( GetGame().GetCurrentCameraDirection() * max_projection_dist );
		vector contact_pos;
		vector contact_dir;
		int contact_component;
		
		DayZPhysics.RaycastRV( from, to, contact_pos, contact_dir, contact_component, NULL, player, m_Projection, false, false );

		float camera_to_projection_distance = vector.Distance( GetGame().GetCurrentCameraPosition(), contact_pos );	
		
		if( camera_to_projection_distance < min_projection_dist || camera_to_projection_distance > max_projection_dist )
		{
			contact_pos = "0 0 0";
		}
 
		return contact_pos;
	}

	void SetHologramMatrix( vector position, vector orientation )
	{	
		if ( ITEM_TYPE == "Fence" )
		{
			position[1]		= position[1] + 1;
			m_Projection.SetPosition(position);
			m_Projection.SetOrientation( orientation );
		}
		else
		{
			m_Projection.SetPosition( position );
			m_Projection.SetOrientation( orientation );
		}
	}
	
	void RefreshVisual( string selection )
	{
		if ( m_Projection )
		{
			ItemBase projection_entity = (EntityAI) m_Projection;
			string config_material = "CfgVehicles" + " " + m_Projection.GetType() + " " + "hologramMaterial";
			string hologram_material = GetGame().ConfigGetTextOut( config_material );
			string config_model = "CfgVehicles" + " " + m_Projection.GetType() + " " + "hologramMaterialPath";
			string hologram_material_path = GetGame().ConfigGetTextOut( config_model );
			string SEL_CORD_PLUGGED = m_Parent.GetCompEM().SEL_CORD_PLUGGED;
			string SEL_CORD_FOLDED = m_Parent.GetCompEM().SEL_CORD_FOLDED;
			
			if ( !IsColliding() )
			{
				if ( m_Parent.HasEnergyManager() )
				{
					if ( m_Parent.GetCompEM().IsPlugged() )
					{
						if ( m_Parent.GetCompEM().IsEnergySourceAtReach( GetProjectionPosition() ) )
						{
							projection_entity.SetObjectTexture( GetHiddenSelection( selection ), "#(argb,8,8,3)color(0.5,0.5,0.5,0.75,ca)" );
							projection_entity.SetObjectMaterial( GetHiddenSelection( selection ), hologram_material_path + "\\" + hologram_material + "_powered.rvmat" );
							
		
							projection_entity.SetAnimationPhase( SEL_CORD_PLUGGED, 0);
							projection_entity.SetAnimationPhase( SEL_CORD_FOLDED, 1);	
							
 							return;
						}
						else
						{
							projection_entity.SetObjectTexture( GetHiddenSelection( selection ), "#(argb,8,8,3)color(0.5,0.5,0.5,0.75,ca)" );
							projection_entity.SetObjectMaterial( GetHiddenSelection( selection ), hologram_material_path + "\\" + hologram_material + "_deployable.rvmat" );
							

							projection_entity.SetAnimationPhase( "filled", 0 );
							
							return;
						}
					}
				}
			
				projection_entity.SetObjectTexture( GetHiddenSelection( selection ), "#(argb,8,8,3)color(0.5,0.5,0.5,0.75,ca)" );
				projection_entity.SetObjectMaterial( GetHiddenSelection( selection ), hologram_material_path + "\\" + hologram_material + "_deployable.rvmat" );
				
				
				projection_entity.SetAnimationPhase( SEL_CORD_PLUGGED, 1);
				projection_entity.SetAnimationPhase( SEL_CORD_FOLDED, 0);
				
				projection_entity.SetAnimationPhase( "BaseFence_Down", 0 );
				projection_entity.SetAnimationPhase( "BaseFence_Up", 0 );
				projection_entity.SetAnimationPhase( "WoodenPlanks_Down", 0 );
				projection_entity.SetAnimationPhase( "WoodenPlanks_Up", 0);
				projection_entity.SetAnimationPhase( "MetalPlates_Down", 0 );
				projection_entity.SetAnimationPhase( "MetalPlates_Up", 0 );
				
				return;
			}
			else
			{
				projection_entity.SetObjectTexture( GetHiddenSelection( selection ), "#(argb,8,8,3)color(0.5,0.5,0.5,0.75,ca)" );
				projection_entity.SetObjectMaterial( GetHiddenSelection( selection ), hologram_material_path + "\\" + hologram_material + "_undeployable.rvmat" );
				projection_entity.SetAnimationPhase( "filled", 0 );
				
			}
		}
	}
};