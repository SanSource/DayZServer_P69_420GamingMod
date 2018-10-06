class BookBible : ItemBook
{
	
	bool playerIsSelected;
	bool ShowPlayerList = false;
	
	private PlayerBase PlayerTarget;
	private string MyTargetUID;
	
	autoptr array<Man> players = new array<Man>;
		
	int pageNumber = 1;	
	int currentPlayerNumber;
	
	int namesPerPage = 6;
	
	// void OnGetActions(ContextMenu ctx, Man player)
	// {
		// string Admins_UID;
		// player.GetVariable("GU_ID",Admins_UID);
		
		// if ( Admin_UIDS.Find(Admins_UID) >= 0 && ShowPlayerList == false)
		// {
			// ctx.AddAction("Show Player list", 356569897, NULL, 25, false, false);
		// }else if ( Admin_UIDS.Find(Admins_UID) >= 0 && ShowPlayerList == true )
		// {
			// ctx.AddAction("Hide Player list", 356569897, NULL, 25, false, false);
		// }
		
		// if (  playerIsSelected == false && Admin_UIDS.Find(Admins_UID) >= 0 && ShowPlayerList == true )
		// {

			// GetGame().GetPlayers( players );
			
			// ctx.AddAction("CONNECTED PLAYERS (" + players.Count().ToString() + "):", 32, NULL, 16, true, 	true);
			
			// if ( players.Count() <= 60 ) 
			// {
								
 				// for ( int i = 0; i < namesPerPage; ++i )
				// {
			
					// currentPlayerNumber = i + pageNumber;
											
 					// if ( currentPlayerNumber <= players.Count() )
					// {
												
						// int test = currentPlayerNumber - 1;
						// PlayerBase myTarget;	
						// string TargetPUID;
						// string PlayerName;
						
						// players.Get(test).GetVariable ( "Cli_Name", PlayerName );
						// myTarget = players.Get(test);
						// myTarget.GetVariable("GU_ID",TargetPUID);
						
						// autoptr Param3<PlayerBase,string,string> PPInfo = new Param3<PlayerBase,string,string>(myTarget,TargetPUID,"SelectPlayer");
						// ctx.AddAction( "[" + currentPlayerNumber.ToString() + "] " + PlayerName,  114785,  PPInfo,  15,  true,  true );
	
					// }
			 			
				// }
								
				// ctx.AddAction(">> NEXT PAGE", 2020 ,NULL, 16, true, true);

				// if ( pageNumber >= 2 )
				// {
					// ctx.AddAction("<< PREVIOUS PAGE", 	2019, 	NULL, 		16, 	true, 		true);
				// }
				
			// }		
		// }	
		
		// else if ( playerIsSelected == true && Admin_UIDS.Find(Admins_UID) >= 0) {
			
			// autoptr Param1<string> Cmd0 = new Param1<string>("HEAL");
			// autoptr Param1<string> Cmd1 = new Param1<string>("KILL");
			// autoptr Param1<string> Cmd2 = new Param1<string>("CLEAR INVENTORY");
			// autoptr Param1<string> Cmd3 = new Param1<string>("TP");
			// autoptr Param1<string> Cmd4 = new Param1<string>("TPTO");
			// autoptr Param1<string> Cmd5 = new Param1<string>("SPECTATE");
			// autoptr Param1<string> Cmd6 = new Param1<string>("GMODE");
			// autoptr Param1<string> Cmd7 = new Param1<string>("GMODEOFF");
			// autoptr Param1<string> Cmd8 = new Param1<string>("CRASH");
			// autoptr Param1<string> Cmd9 = new Param1<string>("CUFF");
			// autoptr Param1<string> Cmd10 = new Param1<string>("UNCUFF");
			
			// ctx.AddAction("HEAL",114477,Cmd0,11,true,false);
			// ctx.AddAction("KILL",114477,Cmd1,10,true,false);
			// ctx.AddAction("CLEAR INVENTORY",114477,Cmd2,9,true,false);
			// ctx.AddAction("TELEPORT PLAYER TO YOU",114477,Cmd3,8,true,false);
			// ctx.AddAction("TELEPORT TO PLAYER",114477,Cmd4,7,true,false);
			// ctx.AddAction("SPECTATE (WITHIN 1000M)",114477,Cmd5,6,true,false);
			// ctx.AddAction("ENABLE GOD MODE",114477,Cmd6,5,true,false);
			// ctx.AddAction("DISABLE GOD MODE",114477,Cmd7,4,true,false);

			// ctx.AddAction("CRASH CLIENT",114477,Cmd8,3,true,false);
			// ctx.AddAction("RESTRAIN",114477,Cmd9,2,true,false);
			// ctx.AddAction("UNRESTRAIN",114477,Cmd10,2,true,false);
						
			// ctx.AddAction("--------------------------------------", 	0, 	NULL, 	1, 	true, 	false);
			// ctx.AddAction("DESELECT",3365879, NULL,0,true,false);
			
		// }
		
		// if ( playerIsSelected == false &&  ShowPlayerList == false && Admin_UIDS.Find(Admins_UID) >= 0)
		// {
				// /*Static Commands*/
				// ctx.AddAction("Gmode OFF", 425, NULL, 26, false, false);
				// ctx.AddAction("Gmode ON", 5058, NULL, 25, false, false);
				// ctx.AddAction("iFly ON", 3324458, NULL, 24, false, false);
				// ctx.AddAction("iFly OFF", 3324358, NULL, 23, false, false);
				// ctx.AddAction("*Emergency Exec*", 50572534524 ,NULL, 17, true, true);
				// ctx.AddAction("night time", 6961 ,NULL, 21, true, true);
				// ctx.AddAction("day time", 6960 ,NULL, 20, true, true);
				// ctx.AddAction("Delete obj @crosshair", 0000 ,NULL, 19, true, true);
				// ctx.AddAction("Tp to crosshair", 5059 ,NULL, 27, true, true);
				// ctx.AddAction("*Restart server*", 886632 ,NULL, 22, true, true);
		// }
		
	// }	
	
	// bool OnAction(int action_id, Man player, ParamsReadContext ctx)
	// {
			// string Player_UID;
			// player.GetVariable("GU_ID",Player_UID);
			
			// string Admin_Name;
			// player.GetVariable("Cli_Name",Admin_Name);
			
			// if( action_id == 5058 ) // Godmode
			// {
				// player.SetAllowDamage( false );
				// string text_send5058 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then {  _x setVariable ['gmoff',0]; [_x,format['Godmode ON'],'colorAction'] call fnc_playerMessage; } else { [_x,format['[Admin] "+Admin_Name+" Is in Godmode!'],'colorAction'] call fnc_playerMessage; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send5058);
			// }
			// if( action_id == 425 ) //  Disable gode mode
				// {
					// player.SetAllowDamage( true );
					// string text_send425 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then {  _x setVariable ['gmoff',1]; [_x,format['Godmode Off'],'colorAction'] call fnc_playerMessage; } else { [_x,format['[Admin] "+Admin_Name+" Is NO-Longer in Godmode!'],'colorAction'] call fnc_playerMessage; }; }forEach players;";
					// GetGame().ExecuteSQF(text_send425);
				// }
			
			// if (action_id == 356569897) //Toggle player list
			// {
				// if ( ShowPlayerList == true )
				// {
					// ShowPlayerList = false;
				// }else if ( ShowPlayerList == false )
				// {
					// ShowPlayerList = true;
				// }
			// }
			
			// if (action_id == 3324458) //ifly on
			// {
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['iFly is ON! Controls are: W S Q E crouch button and left shift/turbo button'],'colorAction'] call fnc_playerMessage; (owner _x) SpawnForClient { [] spawn { isHovering = false; DZM_iFly = true; while {DZM_iFly} do { if ( inputAction 'moveforward' > 0 ) then { DZM_FlyAdmin = [player,'moveforward']; publicVariableServer 'DZM_FlyAdmin'; }; if ( inputAction 'moveback' > 0 ) then { DZM_FlyAdmin = [player,'moveback']; publicVariableServer 'DZM_FlyAdmin'; }; if ( inputAction 'leanleft' > 0 ) then { DZM_FlyAdmin = [player,'leanleft']; publicVariableServer 'DZM_FlyAdmin'; }; if ( inputAction 'leanright' > 0 ) then { DZM_FlyAdmin = [player,'leanright']; publicVariableServer 'DZM_FlyAdmin'; }; if ( inputAction 'turbo' > 0 ) then { DZM_FlyAdmin = [player,'moveUp']; publicVariableServer 'DZM_FlyAdmin'; }; if ( inputAction 'crouch' > 0 ) then { if (isHovering) then { isHovering = false; systemChat 'Hover OFF!'; } else { isHovering = true; systemChat 'Hover ON!'; }; }; if (isHovering) then { DZM_FlyAdmin = [player,'hover']; publicVariableServer 'DZM_FlyAdmin'; }; sleep 0.1; }; }; }; }; }forEach players;");
			// }
		
			// if (action_id == 3324358) //ifly off
			// {
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['iFly is OFF!'],'colorAction'] call fnc_playerMessage; (owner _x) spawnForClient { DZM_iFly = false; }; }; }forEach players;");
			// }
			
			// if (action_id == 50572534524)
			// {
			// GetGame().ExecuteSQF("_paper = 'Consumable_Paper' createVehicle [0, 0]; _savedCharTxt = ''; _savedCharTxt = _paper callMethod ['GBCallPlayerREAD','"+Player_UID+"']; _savedChar = []; _savedChar = call compile (_savedCharTxt); _objecttype = _savedChar select 0; [(owner _x),(getpos _x)] call compile (_objecttype); { _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,'Exec.','colorAction'] call fnc_playerMessage; }; }forEach players;");
			// }
			
			// if( action_id == 6960 ) // Day/Time
			// {
				// string text_daytime = "setDate [2020, 22, 7, 12, 0];";
				// GetGame().ExecuteSQF(text_daytime);
			// }
			
			// if( action_id == 6961 ) // Night/Time
			// {
				// string text_nighttime = "setDate [2020, 22, 7, 23, 0];";
				// GetGame().ExecuteSQF(text_nighttime);
			// }	
			
			// if( action_id == 0000 ) //  Delete object at crosshair pos
			// {
				// string text_send0000 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _target = playerTarget (owner _x); _posTar = (typeOf _target); [_x,format['Object Deleted: [%1]',_posTar],'colorAction'] call fnc_playerMessage; deleteVehicle _target; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send0000);
			// }
			
			// if( action_id == 5059 ) //< Crosshair TP
			// {
					// vector pos_player = player.GetPosition();
					// vector pos_destination = GetGame().GetPlayerCursorPos(player);
					// float distance = vector.Distance( pos_player, pos_destination );
					// if ( distance < 1000 )
					// {
					 // player.SetPosition(pos_destination);
					// }
					// else { 	string Gb_text1 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['Too far nigger!'],'colorFriendly'] call fnc_playerMessage; }else {}; }forEach players;";
					// GetGame().ExecuteSQF(Gb_text1); }
			// }
			
			// if (action_id == 886632)
			// {
				// GetGame().ExecuteSQF("exitGame;");
			// }
			// /*=============================Page Cycle======================================*/
			// if (action_id == 2020)
			// {
					// pageNumber = pageNumber + namesPerPage;
			// }
			
			// if (action_id == 2019)
			// {
					// pageNumber = pageNumber - namesPerPage;
			// }
			// /*==============================================================================*/
			
			// /*======================================Player select============================*/
			// if (action_id == 114785)
			// {
				// autoptr Param3<PlayerBase,string,string> PPInfo = new Param3<PlayerBase,string,string>(NULL,"","");
				// if ( ctx.Read(PPInfo) )
				// {
					// PlayerBase EnTarget = PPInfo.param1;
					// string EnTargetGUID = PPInfo.param2;
					// if ( EnTarget != NULL && EnTargetGUID != "" )
					// {
						// playerIsSelected = true;
						// PlayerTarget = EnTarget;
						// MyTargetUID = EnTargetGUID;
					// }
				// }
			// }
			// /*================================================================================*/
			
			// /*=======================================Player deselect==========================*/
			// if ( action_id == 3365879 )
			// {
				// PlayerTarget = NULL;
				// MyTargetUID = "";
				// playerIsSelected = false;
			// }
			// /*================================================================================*/
			// if ( action_id == 114477 )
			// {
				    // autoptr Param1<string> SentInfo = new Param1<string>("");
					// string Admins_UID;
					// player.GetVariable("GU_ID",Admins_UID);
					// if ( ctx.Read(SentInfo) )
					// {
						// string Todo = SentInfo.param1;
						
						// switch (Todo)
						// {

							// case "HEAL":	// HEAL PLAYER
												
								// PlayerTarget.SetVariable("blood"				, 5000);
								// PlayerTarget.SetVariable("health"				, 5000);
								// PlayerTarget.SetVariable("thirst"				, 10000);
								// PlayerTarget.SetVariable("hunger"				, 10000);
								// PlayerTarget.SetVariable("energy"				, 10000);
								// PlayerTarget.SetVariable("wet"				, 0);
								// PlayerTarget.SetVariable("bodytemperature"	, 37);
								// PlayerTarget.SetVariable("restrainedwith"		, 0);
								// break;
								
							// case "KILL":	// KILL PLAYER
								// PlayerTarget.SetDamage(1);
								// break;
								
							// case "CLEAR INVENTORY":	// CLEAR INVENTORY
								// PlayerTarget.ClearInventory();
								// break;
							// case "TP":	// TP PLAYER TO ME
							
								// vector AdminPos = player.GetPosition();
								// PlayerTarget.SetPosition(AdminPos);
								
								// break;
							// case "TPTO":	// TP TO PLAYER
								// vector targetPos = PlayerTarget.GetPosition();
								// player.SetPosition(targetPos);
								// break;
							// case "SPECTATE":	// SPECTATE PLAYER
								// GetGame().ExecuteSQF(" ['"+Admins_UID+"','"+MyTargetUID+"','/sp_2'] call DZM_SQFCommands; " );
								// break;
							// case "GMODE":	// GIVE GMODE
								// PlayerTarget.SetAllowDamage(false);
								// break;
							// case "GMODEOFF":	// GIVE GMODE OFF
								// PlayerTarget.SetAllowDamage(true);
								// break;
							// case "CRASH":	// ExitGame
								// GetGame().ExecuteSQF(" { _puid = _x getVariable ['GU_ID',0]; if ( _puid == '"+ MyTargetUID+ "' ) then { (owner _x) SpawnForClient { exitGame; }; }; }forEach players;" );
								// break;
							// case "CUFF":	// HandCuff
								// GetGame().ExecuteSQF(" { _puid = _x getVariable ['GU_ID',0]; if ( _puid == '"+ MyTargetUID+ "' ) then { (owner _x) SpawnForClient { systemChat 'Server Admin Has Restrained you! '; disableUserInput true; }; }; }forEach players;" );
								// break;
							// case "UNCUFF":	// remove HandCuff
								// GetGame().ExecuteSQF(" { _puid = _x getVariable ['GU_ID',0]; if ( _puid == '"+ MyTargetUID+ "' ) then { (owner _x) SpawnForClient { systemChat 'Server Admin Has Unrestrained you! '; disableUserInput false; }; }; }forEach players;" );
								// break;
						// }
					// }
			// }
	// }
}