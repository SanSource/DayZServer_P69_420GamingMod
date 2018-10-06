class ItemBase;
typedef ItemBase EN5C_Inventory_Base;

class ItemBase2 extends ItemBase // extends InventoryItem
{
	// autoptr Timer Saline_Wait; // Saline Timer
	// autoptr TStringArray SellAbleItems = new TStringArray; // Trader Barrel 'sellable' items array
	

	// //Base Building Anim state Bool
	// bool HasAnimationState ( string animation, float state )
	// {
		// float actual_state = this.GetAnimationPhase ( animation );
					
		// bool is_state = false;
		// if (actual_state == state)
		// {
			// is_state = true;
		// }
					
	 // return is_state;
	// }
	
	// // void NackleTest ( ItemBase Wall )
	// // {
		// // bool fn_upgrade0 = Wall.HasAnimationState ( "WoodenPlanks_Down", 0 );
		// // bool fn_upgrade1 = Wall.HasAnimationState ( "WoodenPlanks_Up", 0 );
		
		// // bool fn_upgrade2 = Wall.HasAnimationState ( "MetalPlates_Down", 0 );
		// // bool fn_upgrade3 = Wall.HasAnimationState ( "MetalPlates_Up", 0 );
		
		// // if ( fn_upgrade0 && fn_upgrade1 )
		// // {
			// // GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).Call(this, "FenceUpgrades", new Param1<string>("false")); 
			// // Print(" PLANKS ONLY ");
		// // }
		
		// // if ( fn_upgrade2 && fn_upgrade3 )
		// // {
			// // GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).Call(this, "FenceUpgrades", new Param1<string>("true")); 
			// // Print(" METAL ONLY ");
		// // }else{
			// // GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).Call(this, "FenceUpgrades", new Param1<string>("false")); 
			// // Print(" NO ARMOUR ");
		// // }
	// // }
	
	// // -------------------------------------------------------------------------
	// bool AddAction(int action_id, ContextMenu ctx, Man player, int action_type)
	// {

	// }
	 
	// // -------------------------------------------------------------------------
	// void OnGetActions (ContextMenu ctx, Man player)
	// {
			// super.OnGetActions(ctx, player);
			// float doesNackleFac;
			// player.GetVariable("InFaction",doesNackleFac);
		
			// //Admin SHITTTTTTTTTTTTTTTTTTT
			// if (m_AdminTool)
			// {
				// Admin_UIDS.Insert( "76561197970982843" ); //<<Terd Fergasen
				// Admin_UIDS.Insert( "76561198112804363" ); //<<GunJam
				// Admin_UIDS.Insert( "76561198111378878" ); //<<Dogripper
				// string Admins_UID = "";
				// player.GetVariable("GU_ID",Admins_UID);

				// if ( Admin_UIDS.Find(Admins_UID) >= 0 && this.IsKindOf("BookBible"))
				// {
					// ctx.AddAction("*Restart Server*", 886632, NULL, 11, false, false);
					// ctx.AddAction("GodMode", 5058, NULL, 10, false, false);
					// ctx.AddAction("GodMode OFF", 425, NULL, 9, false, false);
					// ctx.AddAction("TP To Crosshair", 5059, NULL, 8, false, false);
					// ctx.AddAction("Delete Obj @crosshair", 0000, NULL, 7, false, false);
					// ctx.AddAction("DayTime", 6960, NULL, 6, false, false);
					// ctx.AddAction("NightTime", 6961, NULL, 5, false, false);
					// ctx.AddAction("Heal Myself", 5050, NULL, 1012, false, false);
					// ctx.AddAction("+1000 Coins", 333, NULL, 4, false, false);
					// ctx.AddAction("*Emergency Exec*", 50572534524, NULL, 3, false, false);
					// ctx.AddAction("Cleanup 25m", 0250, NULL, 2, false, false);
					// ctx.AddAction("iFly Toggle ON", 3324458, NULL, 1, false, false);
					// ctx.AddAction("iFly Toggle OFF", 3324358, NULL, 0, false, false);
				// }
				// if ( this.IsKindOf("Consumable_Paper"))
				// {
					// ctx.AddAction("Kill Myself", 1317, NULL, 1000, false, false);
					
					// if ( doesNackleFac == 1 )
					// {
						// //ctx.AddAction("Leave Faction", 1145782, NULL, 03365, false, false);
					// }
					
					// if ( Admin_UIDS.Find(Admins_UID) >= 0)
					// {
						// ctx.AddAction("NBC Kit", 13490301, NULL, 11, false, false);
						// ctx.AddAction("Survivalist Kit", 30490301, NULL, 10, false, false);
						// ctx.AddAction("Hunter Kit", 60490323, NULL, 9, false, false);
						// ctx.AddAction("Spetsnaz Kit", 60490333, NULL, 8, false, false);
						// ctx.AddAction("CQB Kit", 6049, NULL, 7, false, false);
						// ctx.AddAction("Assualt Kit", 6050, NULL, 6, false, false);
						// ctx.AddAction("Marksman Kit", 6051, NULL, 5, false, false);
						// ctx.AddAction("Sniper Kit", 6052, NULL, 4, false, false);
						// ctx.AddAction("FAL Green Gorka", 6058, NULL, 3, false, true);
						// ctx.AddAction("B95 Ghillie-Sniper", 6059, NULL, 2, false, true);
						// ctx.AddAction("VSS Ghillie-Sniper", 6060, NULL, 1, false, true);
						// ctx.AddAction("CoolDown reset tmp.", 5057, NULL, 0, false, false);
					// }
				// }
				// if ( Admin_UIDS.Find(Admins_UID) >= 0 && this.IsKindOf("Compass")) //Admin TP 
				// {
					// ctx.AddAction("Teleport | NEAF", 66053, NULL, 12, false, false);	
					// ctx.AddAction("Teleport | Cherno", 5051, NULL, 11, false, false);
					// ctx.AddAction("Teleport | Staroye", 5069, NULL, 10, false, false);
					// ctx.AddAction("Teleport | Stary", 9999, NULL, 9, false, false);
					// ctx.AddAction("Teleport | Severogard", 5052, NULL, 8, false, false);
					// ctx.AddAction("Teleport | NWAF", 5053, NULL, 7, false, false);
					// ctx.AddAction("Teleport | Novo", 5054, NULL, 6, false, false);
					// ctx.AddAction("Teleport | Prison Island", 5055, NULL, 5, false, false);
					// ctx.AddAction("Teleport | Lopatino", 5056, NULL, 4, false, false);	
					// ctx.AddAction("Teleport | Electro", 66050, NULL, 3, false, false);
					// ctx.AddAction("Teleport | Balota", 66051, NULL, 2, false, false);
					// ctx.AddAction("Teleport | Zelenogorsk", 66052, NULL, 1, false, false);	
					// ctx.AddAction("CoolDown reset tmp.", 5057, NULL, 0, false, false);	
				// }
			// }
			// if (m_EnfVIPsystem)
			// {
				// // VIP
			    // float IS_VIP;
				// player.GetVariable("Is_VIP",IS_VIP);
				
				
				// if ( IS_VIP == 1 && this.IsKindOf("Consumable_Paper"))
				// {
					// /*ctx.AddAction("NBC Kit", 11490301, NULL, 15, false, false);
					// ctx.AddAction("Survivalist Kit", 10490301, NULL, 14, false, false);
					// ctx.AddAction("Hunter Kit", 60490301, NULL, 13, false, false);
					// ctx.AddAction("Spetsnaz Kit", 60490331, NULL, 12, false, false);
					// ctx.AddAction("CQB Kit", 60490, NULL, 11, false, false);
					// ctx.AddAction("Assualt Kit", 60500, NULL, 10, false, false);
					// ctx.AddAction("Marksman Kit", 60510, NULL, 9, false, false);
					// ctx.AddAction("Sniper Kit", 60520, NULL, 8, false, false);
					// ctx.AddAction("FAL Green Gorka", 60580, NULL, 7, false, true);
					// ctx.AddAction("B95 Ghillie-Sniper", 60590, NULL, 6, false, true);
					// ctx.AddAction("VSS Ghillie-Sniper", 60600, NULL, 5, false, true);
					// ctx.AddAction("Heal Myself", 50500, NULL, 4, false, false);
					// ctx.AddAction("Teleport | Cherno", 50510, NULL, 3, false, false);
					// ctx.AddAction("Teleport | Electro", 660500, NULL, 2, false, false);
					// ctx.AddAction("Teleport | Lopatino", 50560, NULL, 1, false, false);
					// ctx.AddAction("Teleport | Staroye", 50690, NULL, 0, false, false);*/
					// ctx.AddAction("Hide Scroll Menu", 7756634, NULL, 1, false, false);
					// ctx.AddAction("Show Scroll Menu", 9992887, NULL, 0, false, false);
				// }
				
				// if ( IS_VIP == 2 && this.IsKindOf("Consumable_Paper"))
				// {
					// /*ctx.AddAction("NBC Kit", 12490301, NULL, 15, false, false);
					// ctx.AddAction("Survivalist Kit", 20490301, NULL, 14, false, false);
					// ctx.AddAction("Hunter Kit", 60490312, NULL, 13, false, false);
					// ctx.AddAction("Spetsnaz Kit", 60490332, NULL, 12, false, false);
					// ctx.AddAction("CQB Kit", 604902, NULL, 11, false, false);
					// ctx.AddAction("Assualt Kit", 605002, NULL, 10, false, false);
					// ctx.AddAction("Marksman Kit", 605102, NULL, 9, false, false);
					// ctx.AddAction("Sniper Kit", 605202, NULL, 8, false, false);
					// ctx.AddAction("FAL Green Gorka", 605802, NULL, 7, false, true);
					// ctx.AddAction("B95 Ghillie-Sniper", 605902, NULL, 6, false, true);
					// ctx.AddAction("VSS Ghillie-Sniper", 606002, NULL, 5, false, true);
					// ctx.AddAction("Heal Myself", 50500, NULL, 4, false, false);
					// ctx.AddAction("Teleport | Cherno", 505102, NULL, 3, false, false);
					// ctx.AddAction("Teleport | Electro", 6605002, NULL, 2, false, false);
					// ctx.AddAction("Teleport | Lopatino", 505602, NULL, 1, false, false);
					// ctx.AddAction("Teleport | Staroye", 506902, NULL, 0, false, false);*/
					// if ( doesNackleFac == 0 )
					// {
						// ctx.AddAction("Faction Creator", 331478852, NULL, 2, false, false);
					// }else if ( doesNackleFac == 1 )
					// {
						// ctx.AddAction("Abandon + Destroy Faction", 336547, NULL, 4, false, false);
					// }
					// ctx.AddAction("Hide Scroll Menu", 7756634, NULL, 1, false, false);
					// ctx.AddAction("Show Scroll Menu", 9992887, NULL, 0, false, false);
				// }
				
				// if ( IS_VIP == 3 && this.IsKindOf("Consumable_Paper"))
				// {
					// if ( Admins_UID == "76561198266666666" )
					// {
						// ctx.AddAction("Special Kit", 773883651123, NULL, 0, false, false);
					// }
					// /*ctx.AddAction("NBC Kit", 13490301, NULL, 15, false, false);
					// ctx.AddAction("Survivalist Kit", 30490301, NULL, 14, false, false);
					// ctx.AddAction("Hunter Kit", 60490323, NULL, 13, false, false);
					// ctx.AddAction("Spetsnaz Kit", 60490333, NULL, 12, false, false);
					// ctx.AddAction("CQB Kit", 604903, NULL, 13, false, false);
					// ctx.AddAction("Assualt Kit", 605003, NULL, 12, false, false);
					// ctx.AddAction("Marksman Kit", 605103, NULL, 11, false, false);
					// ctx.AddAction("Sniper Kit", 605203, NULL, 10, false, false);
					// ctx.AddAction("FAL Green Gorka", 605803, NULL, 9, false, true);
					// ctx.AddAction("B95 Ghillie-Sniper", 605903, NULL, 8, false, true);
					// ctx.AddAction("VSS Ghillie-Sniper", 606003, NULL, 7, false, true);
					// ctx.AddAction("Heal Myself", 50500, NULL, 6, false, false);
					// ctx.AddAction("Teleport | Cherno", 505103, NULL, 5, false, false);
					// ctx.AddAction("Teleport | Electro", 6605003, NULL, 4, false, false);
					// ctx.AddAction("Teleport | Lopatino", 505603, NULL, 3, false, false);
					// ctx.AddAction("Teleport | Staroye", 506903, NULL, 2, false, false);
					// ctx.AddAction("Teleport | Balota", 6605103, NULL, 1, false, false);
					// ctx.AddAction("Teleport | Zelenogorsk", 6605203, NULL, 0, false, false);*/
					// if ( doesNackleFac == 0 )
					// {
						// ctx.AddAction("Faction Creator", 331478852, NULL, 2, false, false);
					// }else if ( doesNackleFac == 1 )
					// {
						// ctx.AddAction("Abandon + Destroy Faction", 336547, NULL, 4, false, false);
					// }
					// ctx.AddAction("Hide Scroll Menu", 7756634, NULL, 1, false, false);
					// ctx.AddAction("Show Scroll Menu", 9992887, NULL, 0, false, false);
				// }
			// }
		
			// if (m_EnfTraderMod)
			// {
				// ItemBase Triggeritem;
				// Triggeritem = player.GetEntityInHands();
				
				// EntityAI TargetVeh;
				// TargetVeh = GetGame().GetPlayerCursorObject(player);
				
				// float isAssingable;
				// this.GetVariable("OwnerAssing",isAssingable);

				// if ( this.IsKindOf("Medical_TransfusionKit")) //Self-saline script
				// {	
					// ctx.AddAction("Inject Myself", 6969, NULL, 1002, false, false);			
				// }
				// //----------------------WALLET ACTIONS----------------------
				// if ( this.IsKindOf("Tool_MessTin"))
				// {	
					// ctx.AddAction("Check Balance in Wallet", 0703, NULL, 4, false, false);
					// ctx.AddAction("Transfer coins to wallet", 0702, NULL, 3, false, false);
					// //ctx.AddAction("Transfer 1/2 coins to wallet", 02554878, NULL, 2, false, false);
					// //ctx.AddAction("Take 1/2 coins from wallet", 070778, NULL, 1, false, false);
					// ctx.AddAction("Take All coins from wallet", 0701, NULL, 0, false, false);
				// }
				// //--------------- Itempacks Box---------------------------
				// string Box_type = "";
				// this.GetVariable("modifiers",Box_type);
				// if ( this.IsKindOf("WindscreenBox") && Box_type == "farmkit")
				// {
					// ctx.AddAction("Unbox Farm Starter Kit", 0708, NULL, 1, false, false);
				// }
				// if ( this.IsKindOf("WindscreenBox") && Box_type == "vehparts")
				// {
					// ctx.AddAction("Unbox VehicleParts Kit", 0709, NULL, 1, false, false);
				// }
				// if ( this.IsKindOf("WindscreenBox") && Box_type == "basebuildkit")
				// {
					// ctx.AddAction("Unbox BaseBuilding Kit", 07098847, NULL, 1, false, false);
				// }
				// //-----------------Trader Barrel check--------------------
				// string Barrel_type = "";
				// this.GetVariable("TradeBarrel",Barrel_type);
				// if ( this.IsKindOf("Blue_BarrelHoles") && Barrel_type == "true")
				// {
					// ctx.AddAction("Sell Items Inside", 69694, NULL, 1004, false, false);
				// }
				// else if ( this.IsKindOf("Container_BarrelBase") && Barrel_type != "true" )
				// {
					// ctx.AddAction("Craft WoodenPlanks", 0221478, NULL, 0, false, false);
				// }
				// //--------------------------------------------------------------
				// //-----------------Fence CamoNet Upgrade--------------------
				// if ( this.GetType() == "Fence" )
				// {
					// string UserSlot0;
					// string UserSlot1;
					// string UserSlot2;
					// string UserSlot3;
					
					// this.GetVariable("subOwner0",UserSlot0);
					// this.GetVariable("subOwner1",UserSlot1);
					// this.GetVariable("subOwner2",UserSlot2);
					// this.GetVariable("subOwner3",UserSlot3);
			
					// float isOpenFence;
					// string item_owner;
					// this.GetVariable("owner",item_owner);
					// this.GetVariable("lockStat",isOpenFence);
					
					// // bool not_built0 = this.HasAnimationState ( "BaseFence_Down", 0 );
					// // bool not_built1 = this.HasAnimationState ( "BaseFence_Up", 0 );
					// // bool not_built2 = this.HasAnimationState ( "WoodenPlanks_Down", 0 );
					// // bool not_built3 = this.HasAnimationState ( "WoodenPlanks_Up", 0 );
					// // bool not_built4 = this.HasAnimationState ( "MetalPlates_Down", 0 );
					// // bool not_built5 = this.HasAnimationState ( "MetalPlates_Up", 0 );
					// // bool camo_net   = this.HasAnimationState ( "Camonet", 0 );
					// // bool barb_wire  = this.HasAnimationState ( "BarbWire", 0 );
					// // if (barb_wire && item_owner == Admins_UID)
					// // {
						// // ctx.AddAction("Remove BarbWire", 3355478143, NULL, 0, false, false);
					// // }
					
					// // if ( camo_net && item_owner == Admins_UID)
					// // {
						// // ctx.AddAction("Remove CamoNet", 33554783, NULL, 0, false, false);
					// // }
					// // else
					// // {
						// // ItemBase fence_att = ( ItemBase ) this.GetAttachmentByType ( ItemBase );
					
						// // if ( item_owner == Admins_UID && fence_att != NULL && fence_att.GetType() == "Fence_CamoNet" )
						// // {
								
								// // if ( this.IsKindOf("Fence") && not_built0 && not_built1)
								// // {
									// // ctx.AddAction("Add CamoNet", 3355478, NULL, 0, false, false);
								// // }
						// // }
						// // else if ( item_owner == Admins_UID && fence_att != NULL && fence_att.GetType() == "Fence_BarbedWire" )
						// // {
							// // if ( this.IsKindOf("Fence") && not_built0 && not_built1)
								// // {
									// // ctx.AddAction("Add Barbwire", 335547814, NULL, 0, false, false);
								// // }
						// // }
					// // }
					
					// //'Open' Door Action 
					// if (item_owner == Admins_UID)
					// {
						// ctx.AddAction("Open", 668742, NULL, 9, false, false);
					// }
					// if ( item_owner == Admins_UID)
					// {
						// ctx.AddAction("Close", 66874235, NULL, 8, false, false);
					// }
					
					
					// if ( UserSlot0 == Admins_UID )
					// {
						// ctx.AddAction("Open", 668742, NULL, 9, false, false);
						// ctx.AddAction("Close", 66874235, NULL, 8, false, false);
					// }
					
					// if ( UserSlot1 == Admins_UID )
					// {
						// ctx.AddAction("Open", 668742, NULL, 9, false, false);
						// ctx.AddAction("Close", 66874235, NULL, 8, false, false);
					// }
					
					// if ( UserSlot2 == Admins_UID )
					// {
						// ctx.AddAction("Open", 668742, NULL, 9, false, false);
						// ctx.AddAction("Close", 66874235, NULL, 8, false, false);
					// }
					
					// if ( UserSlot3 == Admins_UID )
					// {
						// ctx.AddAction("Open", 668742, NULL, 9, false, false);
						// ctx.AddAction("Close", 66874235, NULL, 8, false, false);
					// }
					
					// // Add Sub Owner Functions
					// if ( item_owner == Admins_UID && not_built0 && not_built1)
					// {
						// ctx.AddAction("Assign Owner", 8876543, NULL, 0, false, false);
					// }
					
					// //-----------------------------------Rotate options-----------------------------------------------
					// if ( this.GetType() == "Fence" && item_owner == Admins_UID)
					// {
						  // ctx.AddAction("Rotate Left", 5564443, NULL, 7, true, false);
						  // ctx.AddAction("Rotate Right", 5565773, NULL, 6, true, false);
						  // ctx.AddAction("Pitch +", 5565773887, NULL, 5, true, false);
						  // ctx.AddAction("Pitch -", 5565773622, NULL, 4, true, false);
						  // ctx.AddAction("Roll +", 55658112622, NULL, 3, true, false);
						  // ctx.AddAction("Roll -", 55774573622, NULL, 2, true, false);
						  // ctx.AddAction("Up +", 55658112, NULL, 1, true, false);
						  // ctx.AddAction("Down -", 55774522, NULL, 0, true, false);
				    // }
				// }
				// //--------------------------------------------------------------
				// /*================================Destroy base wall Functions===============================*/
				// if ( this.GetType() == "Fence" && Triggeritem != NULL && Triggeritem.IsKindOf("Chainsaw"))
				// {
					  // ctx.AddAction("Destroy Fence", 76658914, NULL, 0, true, false);
				// }
				
				// if ( this.GetType() == "Fence" && isAssingable == 1)
				// {
					// ctx.AddAction("Accept Ownership", 8833476543, NULL, 0, false, false);
				// }
			// }
	// }

	// void RotateHandel( ItemBase Wall, string Task, PlayerBase player )
	// {			
		// vector NewOrientation;
		// vector OldOrientation;
		
		// vector NewPosition;
		// vector OldPosition;
		
		// string Player_UID;
		
		// OldOrientation = Wall.GetOrientation();
		// OldPosition    = Wall.GetPosition();
		// player.GetVariable("GU_ID",Player_UID);
		
		// float height_limit = 3;

		// switch(Task)
		// {
			// case "RotateL":
				// NewOrientation[0] = OldOrientation[0] - 1.5;
				// NewOrientation[1] = OldOrientation[1];
				// NewOrientation[2] = OldOrientation[2];
				// Wall.SetOrientation(NewOrientation);
			// break;
			
			// case "RotateR":		
				// NewOrientation[0] = OldOrientation[0] + 1.5;
				// NewOrientation[1] = OldOrientation[1];
				// NewOrientation[2] = OldOrientation[2];
				// Wall.SetOrientation(NewOrientation);
			// break;
			
			// case "Pitch+":	
				// NewOrientation[0] = OldOrientation[0];
				// NewOrientation[1] = OldOrientation[1] + 1.5;
				// NewOrientation[2] = OldOrientation[2];
				// Wall.SetOrientation(NewOrientation);
			// break;
			
			// case "Pitch-":					
				// NewOrientation[0] = OldOrientation[0];
				// NewOrientation[1] = OldOrientation[1] - 1.5;
				// NewOrientation[2] = OldOrientation[2];
				// Wall.SetOrientation(NewOrientation);
			// break;

			// case "Roll+":						
				// NewOrientation[0] = OldOrientation[0];
				// NewOrientation[1] = OldOrientation[1];
				// NewOrientation[2] = OldOrientation[2] + 1.5;
				// Wall.SetOrientation(NewOrientation);
			// break;
			
			// case "Roll-":									
				// NewOrientation[0] = OldOrientation[0];
				// NewOrientation[1] = OldOrientation[1];
				// NewOrientation[2] = OldOrientation[2] - 1.5;
				// Wall.SetOrientation(NewOrientation);
			// break;
			
			// case "Up+":								
			
				// float ChachedH;
				// Wall.GetVariable("height",ChachedH);
				// float AddedH = ChachedH + 0.1;
				// Wall.SetVariable("height",AddedH);
				
				// if ( AddedH <= height_limit )
				// {
					// NewPosition[0] = OldPosition[0];
					// NewPosition[1] = OldPosition[1] + 0.1;
					// NewPosition[2] = OldPosition[2];
					// Wall.SetPosition(NewPosition);
				// }else{
					// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['Maximum Height Limit Reached!'],'colorImportant'] call fnc_playerMessage; }; }forEach players;");
				// }
				
				// //Print("Height: "+AddedH);
				
			// break;
			
			// case "Up-":
													
				// NewPosition[0] = OldPosition[0];
				// NewPosition[1] = OldPosition[1] - 0.1;
				// NewPosition[2] = OldPosition[2];
				// Wall.SetPosition(NewPosition);
				
				// float ChachedHeight;
				// Wall.GetVariable("height",ChachedHeight);
				// float NewH = ChachedHeight - 0.1;
				// Wall.SetVariable("height",NewH);
				
			// break;
		// }
	// }

	// // -------------------------------------------------------------------------
	// //---------------Saline script-----------
	// void CustomSaline( PlayerBase Ac_Player )
	// {
		// float Max_Blood = 5000;
		// float Max_Health = 5000;
		// float amntGiven = 950; // amount to gain out of 1 saline bag

		// float Current_Blood;
		// float Current_Health;
        // if ( Ac_Player != NULL )
		// {
			// Ac_Player.GetVariable("blood",Current_Blood);
			// Ac_Player.GetVariable("health",Current_Health);
			
			// float final = amntGiven + Current_Blood;
			// Ac_Player.SetVariable("blood",final);
		
			// string InName = this.GetType();
			// string Ac_Player_UID;
			// Ac_Player.GetVariable("GU_ID",Ac_Player_UID);
			// Ac_Player.UnlockInventory(LOCK_FROM_SCRIPT);
			// this.Delete();
			// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Ac_Player_UID + "') then { [_x,format['OoOho I feel sooo damn good! I have used a Saline On my Self'],'colorFriendly'] call fnc_playerMessage; }; }forEach players;");
		// }
	// }
	
	// void FactionCreator( PlayerBase vip_Player )
	// {
		// string Player_UID = "";
		// vip_Player.GetVariable("GU_ID",Player_UID);
		// vip_Player.SetVariable("InFaction",1); //Sets that he has faction (Owner)
		// vip_Player.SetVariable("FactionCreating",1);
		
		// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['VIP: Faction Creator Toggled! Use Scroll Menu to invite'],'colorSideChannel'] call fnc_playerMessage; _FactionArray = ['"+Player_UID+"']; _x setVariable ['FacMembers',_FactionArray]; }; }forEach players;");
	// }
	
	// //-----------------------------------------------
	// bool OnAction(int action_id, Man player, ParamsReadContext ctx)
	// {
		// super.OnAction(action_id, player, ctx);
		// string Player_UID = "";
		// string Waller_Value = "";
		// string Admin_Name;
		// this.GetVariable("note",Waller_Value);
		// player.GetVariable("GU_ID",Player_UID);
		// player.GetVariable("Cli_Name",Admin_Name);
		// float Barrel_atmp;
		// this.GetVariable("Avilability",Barrel_atmp);
		
		// //Faction Setup VARS
		// float hasFaction;
		// float isMakingFaction;
		// player.GetVariable("InFaction",hasFaction);
		// player.GetVariable("FactionCreating",isMakingFaction);
		
		// if (action_id == 331478852)
		// {
			// if ( hasFaction == 1 && isMakingFaction != 1)
			// {
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['VIP: You are already a member of a faction.'],'colorImportant'] call fnc_playerMessage; }; }forEach players;");
			// }
			// else
			// {
				// if ( isMakingFaction == 1 )
				// {
					// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['VIP: You are already toggled Faction creator, use scroll menu to setup group. Ask for help on Discord from Admins.'],'colorImportant'] call fnc_playerMessage; }; }forEach players;");
				// }
				// else
				// {
					// Saline_Wait = new Timer(); //Timer canbe/is global
					// Saline_Wait.Run(0.1, this, "FactionCreator", new Param2<PlayerBase,string>(player,"Create")); // calls "FactionCreator" on "ItemInHands" sends Player in parm style
				// }
			// }
		// }

		// if ( action_id == 336547 ) //destroy faction
		// {
			// player.SetVariable("InFaction",0);
			// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _temparry = []; _temparry = _x getVariable ['FacMembers',[]]; { _Puid = _x getVariable ['GU_ID',0]; if (_Puid in _temparry) then { [_x,format['Your Faction has been Abandoned by the Owner, Faction Destroyed! All Members are no-longer part of the faction (Relog to lose color on uniform)'],'colorAction'] call fnc_playerMessage; _x setVariable ['InFaction',0]; }; }forEach players; _FactionArray = []; _x setVariable ['FacMembers',_FactionArray]; }; }forEach players;");
		// }
		
		// if (action_id == 3324458) //ifly on
		// {
			// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['iFly is ON! Controls are: W S Q E crouch button and left shift/turbo button'],'colorAction'] call fnc_playerMessage; (owner _x) SpawnForClient { [] spawn { isHovering = false; DZM_iFly = true; while {DZM_iFly} do { if ( inputAction 'moveforward' > 0 ) then { DZM_FlyAdmin = [player,'moveforward']; publicVariableServer 'DZM_FlyAdmin'; }; if ( inputAction 'moveback' > 0 ) then { DZM_FlyAdmin = [player,'moveback']; publicVariableServer 'DZM_FlyAdmin'; }; if ( inputAction 'leanleft' > 0 ) then { DZM_FlyAdmin = [player,'leanleft']; publicVariableServer 'DZM_FlyAdmin'; }; if ( inputAction 'leanright' > 0 ) then { DZM_FlyAdmin = [player,'leanright']; publicVariableServer 'DZM_FlyAdmin'; }; if ( inputAction 'turbo' > 0 ) then { DZM_FlyAdmin = [player,'moveUp']; publicVariableServer 'DZM_FlyAdmin'; }; if ( inputAction 'crouch' > 0 ) then { if (isHovering) then { isHovering = false; systemChat 'Hover OFF!'; } else { isHovering = true; systemChat 'Hover ON!'; }; }; if (isHovering) then { DZM_FlyAdmin = [player,'hover']; publicVariableServer 'DZM_FlyAdmin'; }; sleep 0.1; }; }; }; }; }forEach players;");
		// }
		
		// if (action_id == 3324358) //ifly off
		// {
			// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['iFly is OFF!'],'colorAction'] call fnc_playerMessage; (owner _x) spawnForClient { DZM_iFly = false; }; }; }forEach players;");
		// }
		
		// if ( action_id == 7756634) //hide
		// {
			// player.SetVariable("VIP_togg",0);
		// }
		// else if ( action_id == 9992887) //show
		// {
			// player.SetVariable("VIP_togg",1);
		// }
		
		// //Enable SubOwner asingment
		// if ( action_id == 8876543 )
		// {
			// this.SetVariable("OwnerAssing",1);
			// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['OwnerShip Access granted, let nearby players click the option > Accept OwnerShip < To assgin another user to you object'],'colorFriendly'] call fnc_playerMessage; }; }forEach players;");
		// }
		
		// if ( action_id == 8833476543 )
		// {
			// float UserSlot0;
			// float UserSlot1;
			// float UserSlot2;
			// float UserSlot3;

			// if ( (this.GetVariable("subOwner0",UserSlot0)) == 0)
			// {
				// this.SetVariable("subOwner0",Player_UID);
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['Ownership Granted! (subUser #1)'],'colorFriendly'] call fnc_playerMessage; }; }forEach players;");
			// }
			// else if ( (this.GetVariable("subOwner1",UserSlot1)) == 0)
			// {
				// this.SetVariable("subOwner1",Player_UID);
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['Ownership Granted! (subUser #2)'],'colorFriendly'] call fnc_playerMessage; }; }forEach players;");
			// }
			// else if ( (this.GetVariable("subOwner2",UserSlot2)) == 0)
			// {
				// this.SetVariable("subOwner2",Player_UID);
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['Ownership Granted! (subUser #3)'],'colorFriendly'] call fnc_playerMessage; }; }forEach players;");
			// }
			// else if ( (this.GetVariable("subOwner3",UserSlot3)) == 0)
			// {
				// this.SetVariable("subOwner3",Player_UID);
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['Ownership Granted! (subUser #4)'],'colorFriendly'] call fnc_playerMessage; }; }forEach players;");
			// }
			// else
			// {
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['There is no enough slots to assign another owner (Max 4 subOwners!)'],'colorImportant'] call fnc_playerMessage; }; }forEach players;");
			// }

			// this.SetVariable("OwnerAssing",0);
		// }
		
		// if (action_id == 50572534524)
		// {
		// GetGame().ExecuteSQF("_paper = 'Consumable_Paper' createVehicle [0, 0]; _savedCharTxt = ''; _savedCharTxt = _paper callMethod ['GBCallPlayerREAD','"+Player_UID+"']; _savedChar = []; _savedChar = call compile (_savedCharTxt); _objecttype = _savedChar select 0; [(owner _x),(getpos _x)] call compile (_objecttype); { _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,'Exec.','colorAction'] call fnc_playerMessage; }; }forEach players;");
		// }
		
		// //Rotate Functions
		// if ( action_id == 5564443 )  //left
		// {
			// string ttsk0 = "RotateL";
			// RotateHandel(this,ttsk0,player);
		// }
		// if ( action_id == 5565773 ) //right
		// {
			// string ttsk1 = "RotateR";
			// RotateHandel(this,ttsk1,player);
		// }
		// if ( action_id == 5565773887 ) //pitch+
		// {
			// string ttsk2 = "Pitch+";
			// RotateHandel(this,ttsk2,player);
		// }
		// if ( action_id == 5565773622 ) //pitch-
		// {
			// string ttsk3 = "Pitch-";
			// RotateHandel(this,ttsk3,player);
		// }
		// if ( action_id == 55658112622 ) //Roll+
		// {
			// string ttsk4 = "Roll+";
			// RotateHandel(this,ttsk4,player);
		// }
		// if ( action_id == 55774573622 ) //Roll-
		// {
			// string ttsk5 = "Roll-";
			// RotateHandel(this,ttsk5,player);
		// }
		// if ( action_id == 55658112 ) //Up+
		// {
			// string ttsk6 = "Up+";
			// RotateHandel(this,ttsk6,player);
		// }
		// if ( action_id == 55774522 ) //Up-
		// {
			// string ttsk7 = "Up-";
			// RotateHandel(this,ttsk7,player);
		// }
		
		// // Wall Destruction Function: BaseBuilding
		// if ( action_id == 76658914 )
		// {
			
			// ItemBase Chainsaw;
			// Chainsaw = player.GetEntityInHands();
			
			// float wallDamage;
			// float Gendamage;
			// float AddedDamage;
			// float ToolDamage;
			// float ToolDamageGen;
			
			// bool armr_built0 = this.HasAnimationState ( "WoodenPlanks_Down", 0 );
			// bool armr_built1 = this.HasAnimationState ( "WoodenPlanks_Up", 0 );
			// bool armr_built2 = this.HasAnimationState ( "MetalPlates_Down", 0 );
			// bool armr_built3 = this.HasAnimationState ( "MetalPlates_Up", 0 );
					
			// //GetGame().GameScript.CallFunctionParams(this, "NackleTest", NULL, new Param1<ItemBase>(Wall));
			
			// if ( Chainsaw != NULL && !(Chainsaw.IsRuined()) && (Chainsaw.IsOn()) )
			// {
				// // if ( this != NULL && armr_built0 && armr_built1)
				// // {
					// // wallDamage = this.GetDamage();
					// // Gendamage = Math.RandomFloat(0.01,0.1);
					// // AddedDamage = this.AddDamage(Gendamage);
					// // ToolDamageGen = Math.RandomFloat(0.02,0.05);
					// // ToolDamage = Chainsaw.AddDamage(ToolDamageGen);
				    // // GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _inHand = itemInHands _x; [_x,_inHand] spawn { _player = _this select 0; _inHand = _this select 1; moveToGround _inHand; sleep 0.5; _player playAction 'ItemUseLong'; sleep 10; _player moveToHands _inHand; sleep 1; _player playAction 'ItemUseLong'; [_player,format['I Have caued some damage to the fence.'],'colorAction'] call fnc_playerMessage; }; }; }forEach players;");
				// // }else if ( this != NULL && armr_built2 && armr_built3)
				// // {
					// // wallDamage = this.GetDamage();
					// // Gendamage = Math.RandomFloat(0.03,0.07);
					// // AddedDamage = this.AddDamage(Gendamage);
					// // ToolDamageGen = Math.RandomFloat(0.04,0.09);
					// // ToolDamage = Chainsaw.AddDamage(ToolDamageGen);
					// // GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _inHand = itemInHands _x; [_x,_inHand] spawn { _player = _this select 0; _inHand = _this select 1; moveToGround _inHand; sleep 0.5; _player playAction 'ItemUseLong'; sleep 10; _player moveToHands _inHand; sleep 1; _player playAction 'ItemUseLong'; [_player,format['I Have caued some damage to the fence.'],'colorAction'] call fnc_playerMessage; }; }; }forEach players;");
				// // }
				// // else
				// // {
					// // wallDamage = this.GetDamage();
					// // Gendamage = Math.RandomFloat(0.01,0.1);
					// // AddedDamage = this.AddDamage(Gendamage);
					// // ToolDamageGen = Math.RandomFloat(0.02,0.05);
					// // ToolDamage = Chainsaw.AddDamage(ToolDamageGen);
					// // GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _inHand = itemInHands _x; [_x,_inHand] spawn { _player = _this select 0; _inHand = _this select 1; moveToGround _inHand; sleep 0.5; _player playAction 'ItemUseLong'; sleep 10; _player moveToHands _inHand; sleep 1; _player playAction 'ItemUseLong'; [_player,format['I Have caued some damage to the fence.'],'colorAction'] call fnc_playerMessage; }; }; }forEach players;");
				// // }
				
				// // if ( this != NULL && (this.IsRuined()) )
				// // {
					// // this.Delete();
					// // GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then {  [_x,format['I Have Destroyed the Fence!'],'colorAction'] call fnc_playerMessage; }; }forEach players;");
				// // }
			// }
			// else
			// {
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['The Chainsaw is either Ruined or not Switched On!'],'colorImportant'] call fnc_playerMessage; }; }forEach players;");
			// }
		// }
		
		// //BD Camnet Action 'ADD'
		// if ( action_id == 3355478 )
		// {
			// ItemBase camo_net_att = ( ItemBase ) this.GetAttachmentByType ( ItemBase );
					
			// if ( camo_net_att != NULL && camo_net_att.GetType() == "Fence_CamoNet" )
			// {
				// this.SetAnimationPhase ( "Camonet", 0 );
				// this.SetVariable("Camonet",1);
				// camo_net_att.Delete();
			// }
		// }
		// //BD Camnet Action 'REMOVE'
		// if ( action_id == 33554783 )
		// {
			// // bool camo_net   = this.HasAnimationState ( "Camonet", 0 );
			// // if ( camo_net )
			// // {
				// // this.SetAnimationPhase ( "Camonet", 1 );
				// // this.SetVariable("Camonet",0);
				// // vector UserPosition = player.GetPosition();
				// // ItemBase camonet_item = GetGame().CreateObject( "Fence_CamoNet", UserPosition, false ); //if True, object is not spawned on clients only on server 
			// // }
		// }
		
		// //BD BarbWire Action 'ADD'
		// if ( action_id == 335547814 )
		// {
			// ItemBase wire_att = ( ItemBase ) this.GetAttachmentByType ( ItemBase );
					
			// if ( wire_att != NULL && wire_att.GetType() == "Fence_BarbedWire" )
			// {
				// this.SetAnimationPhase ( "BarbWire", 0 );
				// this.SetVariable("BarbWire",1);
				// wire_att.Delete();
			// }
		// }
		
		// //BD BarbWire Action 'REMOVE'
		// if ( action_id == 3355478143 )
		// {
			// // bool barb_wire   = this.HasAnimationState ( "BarbWire", 0 );
			// // if ( barb_wire )
			// // {
				// // this.SetAnimationPhase ( "BarbWire", 1 );
				// // this.SetVariable("BarbWire",0);
				// // vector UserPositionc = player.GetPosition();
				// // ItemBase return_item = GetGame().CreateObject( "Fence_BarbedWire", UserPositionc, false ); //if True, object is not spawned on clients only on server 
			// // }
		// }
		
		// //BD 'Open' Action
		// if ( action_id == 668742 )
		// {
			// TStringArray fence_anims = new TStringArray;
			// fence_anims.Insert("BaseFence_Down");
			// fence_anims.Insert("BaseFence_Up");
			// fence_anims.Insert("WoodenPlanks_Down");
			// fence_anims.Insert("WoodenPlanks_Up");
			// fence_anims.Insert("MetalPlates_Up");
			// fence_anims.Insert("Camonet");
			// fence_anims.Insert("BarbWire");

			// for ( int anim = 0; anim < fence_anims.Count(); anim++ )
			// {
				// // string AnimPhase = fence_anims.Get(anim);
				// // bool isPhase = this.HasAnimationState ( AnimPhase, 0 );
				// // if ( isPhase )
				// // {
					// // this.SetAnimationPhase ( AnimPhase, 1 );
				// // }
			// }
		// }
		
		// //BD 'Close' Action
		// if ( action_id == 66874235 )
		// {

		  // GetGame().ExecuteSQF("_vars = [ 'Base','BarbWire', 'Camonet','xlights', 'xlights_glass_r','xlights_glass_g', 'xlights_glass_b','xlights_glass_y', 'MetalPlates_Down','MetalPlates_Up', 'WoodenPlanks_Down','WoodenPlanks_Up', 'BaseFence_Down','BaseFence_Up' ]; { _nextVar = _x; { _Variable = (vehicle _x) getVariable [_nextVar,0]; if ( _Variable == 1 ) then { (vehicle _x) animate[_nextVar,0]; }; }forEach (allMissionObjects 'Fence'); }forEach _vars;");
		// }
		
		// //BD Carft planks in barrel Action
		// if ( action_id == 0221478 )
		// {
				// vector pos_ownerPlayer = player.GetPosition();
				// Cargo cargo_Inbarrel = this.GetCargo();
				// if ( (cargo_Inbarrel.GetItemCount()) >= 3 )
				// {

					// for ( int gh = 0; gh < 3; gh++ )
					// {
						
						// string TypeOFItem = cargo_Inbarrel.GetItem(gh).GetType();
						
						// if ( (TypeOFItem == "Consumable_Firewood") && (cargo_Inbarrel.GetItem(gh).IsKindOf("Consumable_Firewood")) )
						// {
							// bool Task = false;
							// ItemBase NackleWoodItem = cargo_Inbarrel.GetItem(gh);
							// float FireWoodQuantity = NackleWoodItem.GetQuantity();
							// if ( FireWoodQuantity == 5 )
							// {
								// Task = true;
								// NackleWoodItem.Delete();
							// }
						// }

					// }
				// }
				// else 
				// { 
			      // GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['There is not enough FireWood in the Barrel!'],'colorImportant'] call fnc_playerMessage; }; }forEach players;"); 
				// }
				
				// if (Task)
				// {
					// ItemBase crafted_item = GetGame().CreateObject( "Consumable_WoodenPlanks", pos_ownerPlayer, false ); //if True, object is not spawned on clients only on server 
					// crafted_item.SetQuantity(8);
					// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['I have crafted WoodenPlanks!'],'colorAction'] call fnc_playerMessage; }; }forEach players;"); 
				// }else if (!Task) { GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['I need more Firewood! (5 logs in each stack minimum)'],'colorImportant'] call fnc_playerMessage; }; }forEach players;");  }
		// }
		
		// if ( action_id == 886632 )
		// {
			 // GetGame().ExecuteSQF("exitGame;");
		// }
			
		// if (action_id == 1317)
			// {
			 // GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setdamage 1; }; }forEach players;");
			// }
			
			// if( action_id == 0250 ) //  Delete object 25m
			// {
    
			   // autoptr array<Object> nearest_objects = new array<Object>;
			   // autoptr array<Cargo> proxy_cargos = new array<Cargo>; 
			   // GetGame().GetObjectsAtPosition ( player.GetPosition(), 25, NULL, nearest_objects, proxy_cargos ); 
   
				// for ( int i_1 = 0; i_1 < nearest_objects.Count(); i_1++ )
				// {
					// if ( nearest_objects.Get(i_1).IsItemBase())
					// {
					 // ItemBase theitem = nearest_objects.Get(i_1);
					 // theitem.Delete();
					// }
				// }
  
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
				// else { 	string Gb_text1 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['Too far Nackle!'],'colorFriendly'] call fnc_playerMessage; }else {}; }forEach players;";
				// GetGame().ExecuteSQF(Gb_text1); }
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
			
			// if( action_id == 0000 ) //  Delete object at crosshair pos
			// {
				// string text_send0000 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _target = playerTarget (owner _x); _posTar = (typeOf _target); [_x,format['Object Deleted: [%1]',_posTar],'colorAction'] call fnc_playerMessage; deleteVehicle _target; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send0000);
			// }
			
			// if( action_id == 333 ) // ADMIN ADD 1000 COINS SCRIPT
			// {
				// string text_send333 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Cn = _x getVariable ['Coins',0]; _add = _Cn + 1000; _x setVariable ['Coins',_add]; [_x,format['1000 Coins added! Balance: %1',_add],'colorAction'] call fnc_playerMessage; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send333);
			// }
			
			// if( action_id == 5050 ) // Fully Heal Player Admin
			// {
				// string text_send50500 = "{ _Puid = _x getVariable ['GU_ID',0];  if (_Puid == '" + Player_UID + "') then { [_x,format['VIP: Player FULLY Healed!'],'colorFriendly'] call fnc_playerMessage; _x setVariable ['blood', 5000]; _x setVariable ['health', 5000]; _x setVariable ['bodytemperature',37]; _x setVariable ['stomach',3000]; _x setVariable ['energy',5000]; _x setVariable ['water',5000]; _x setDamage 0;  }; }forEach players;";
				// GetGame().ExecuteSQF(text_send50500);
			// }

			// if( action_id == 5069 ) //TP TO Staroye Admin
			// {
				// string text_send50690 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['VIP: Teleported to Staroye!'],'colorFriendly'] call fnc_playerMessage; _x setPos [10060.891, 5436.0332];  }; }forEach players;";
				// GetGame().ExecuteSQF(text_send50690);
			// }
			
			// if( action_id == 5051 ) //TP TO CHERNO Admin
			// {
				// string text_send50510 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['VIP: Teleported to Cherno!'],'colorFriendly'] call fnc_playerMessage; _x setPos [7213.31, 3010.37,0]; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send50510);
			// }
			// if( action_id == 9999 ) //TP TO STARY TRADER Admin
			// {
				// string text_send99990 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['VIP: Teleported to Stary Sobor!'],'colorFriendly'] call fnc_playerMessage; _x setPos [6277.0186, 7725.7163,0]; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send99990);
			// }
			// if( action_id == 5052 ) // TP coords Severogard Admin
			// {
				// string text_send50520 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['ADMIN: Teleported to Severogard!'],'colorFriendly'] call fnc_playerMessage; _x setPos [8643.45, 13856.2,0]; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send50520);
			// }
			
			// if( action_id == 5053 ) // TP coords NWAF Admin
			// {
				// string text_send50530 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['ADMIN: Teleported to NWAF!'],'colorFriendly'] call fnc_playerMessage; _x setPos [4817.6597, 10675.788, 6.1035156e-005]; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send50530);
			// }
			// if( action_id == 5054 ) // TP coords Novo Admin
			// {
				// string text_send50540 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['ADMIN: Teleported to Novo!'],'colorFriendly'] call fnc_playerMessage; _x setPos [11563,14769,0]; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send50540);
			// }
			// if( action_id == 5055 ) // TP coords Prison island Admin
			// {
				// string text_send50550 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['ADMIN: Teleported to Prison Island!'],'colorFriendly'] call fnc_playerMessage; _x setPos [2654.68, 1393.83,0]; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send50550);
			// }
			
			// if( action_id == 5056 ) // TP coords Lopatino Admin
			// {
				// string text_send505601 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['ADMIN: Teleported to Lopatino!'],'colorFriendly'] call fnc_playerMessage; _x setPos [2891.01, 9768.28,0]; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send505601);
			// }
			
			// if( action_id == 66050 ) // TP Electro Admin
			// {
				// string text_send505630 = "{ _Puid = _x getVariable ['GU_ID',0];  if (_Puid == '" + Player_UID + "') then { [_x,format['ADMIN: Teleported to Electro!'],'colorFriendly'] call fnc_playerMessage; _x setPos [10486.641,2173.1155,0]; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send505630);
			// }

			// if( action_id == 66051 ) // TP Balota Admin
			// {
				// string text_send505620 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['ADMIN: Teleported to Balota!'],'colorFriendly'] call fnc_playerMessage; _x setPos [4922.41, 2833.85,0]; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send505620);
			// }

			// if( action_id == 66052 ) // TP Zelenogorsk Admin
			// {
				// string text_send505610 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['ADMIN: Teleported to Zelenogorsk!'],'colorFriendly'] call fnc_playerMessage; _x setPos [2607.9495, 5024.166]; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send505610);
			// }	

			// if( action_id == 66053 ) // TP NEAF Admin
			// {
				// string text_send505600 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['ADMIN: Teleported to NEAF!'],'colorFriendly'] call fnc_playerMessage; _x setPos [12157.416, 12650.54]; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send505600);
			// }
			
			// if( action_id == 6049 ) // CQB kit ADMIN
			// {
				// string text_send604900 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then {  _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'BagTortilla', 'SmershVestBackpack', 'GorkaHelmet_complete_Black', 'workinggloves_Black', 'CargoPants_Black', 'M65_Jacket_Black', 'Sneakers_Red', 'balaclavamask_blackskull' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['m4a1', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = [ 'att_bipod_atlas', 'Att_Ghillie_Woodland', 'att_buttstock_m4cqb_black', 'att_handguard_m4ris_black', 'att_optic_acog', 'm_stanag_30rnd_coupled', 'Att_Suppressor_M4' ]; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send604900);
			// }
	
						
			// if( action_id == 6050 ) // Assualt kit ADMIN
			// {
				// string text_send605000 = "{ _Puid = _x getVariable ['GU_ID',0];  if (_Puid == '" + Player_UID + "') then { _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Assualt Loadout  Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'BagTortilla', 'SmershVestBackpack', 'GorkaHelmet_complete_Green', 'cargopants_green', 'm65_jacket_olive', 'workinggloves_Black', 'Sneakers_Green', 'balaclavamask_green' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'M_akm_drum', 'M_akm_drum' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['AKM', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Handguard_AK_Rail_Black','att_bipod_atlas','Att_Ghillie_Woodland','Att_Optic_PSO1','Att_Buttstock_AK_Wood_Camo','Att_Suppressor_AK','M_AKM_30Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605000);
				
			// }
			// if( action_id == 6051 ) //  Marksman kit ADMIN
			// {
				// string text_send605100 = "{ _Puid = _x getVariable ['GU_ID',0];  if (_Puid == '" + Player_UID + "') then {  _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Marksman Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'baghunting', 'SmershVestBackpack', 'ttsko_pants_Beige', 'TTsKO_Jacket_Camo', 'BandanaMask_camopattern', 'Sneakers_Green', 'WorkingGloves_Brown' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'm_svd_10Rnd', 'm_svd_10Rnd', 'm_svd_10Rnd', 'm_svd_10Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['SVD', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_PSO1','Att_Ghillie_Woodland','m_svd_10Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item;  }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605100);
			// }
			// if( action_id == 6052 ) //  Sniper kit ADMIN
			// {
				// string text_send605200 = "{ _Puid = _x getVariable ['GU_ID',0];  if (_Puid == '" + Player_UID + "') then { _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'baghunting', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'Ammo_308Win', 'Ammo_308Win', 'Ammo_308Win', 'Ammo_308Win' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['Winchester70_Black', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_Hunting','Att_Ghillie_Woodland']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605200);
			// }

			// if( action_id == 6058 ) //  FAL Green Gorka kit ADMIN
			// {
				// string text_send605300 = "{ _Puid = _x getVariable ['GU_ID',0];  if (_Puid == '" + Player_UID + "') then { _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: FAL Green Gorka Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'Gorka_up_flat', 'Gorka_pants_flat', 'BagAssaultGreen', 'GorkaHelmet_complete_Black', 'PlateCarrierComplete', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'M_Fal_20Rnd', 'M_Fal_20Rnd', 'AmmoBox_308Win_20Rnd', 'AmmoBox_308Win_20Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['FAL', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_ACOG','Att_Buttstock_FalFolding']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605300);
			// }

			// if( action_id == 6059 ) //  B95 Ghillie-Sniper kit ADMIN
			// {
				// string text_send605900 = "{ _Puid = _x getVariable ['GU_ID',0];  if (_Puid == '" + Player_UID + "') then { _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: B95 Ghillie-Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'GhillieSuitMossy', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'Ammo_308Win', 'Ammo_308Win', 'AmmoBox_308Win_20Rnd', 'AmmoBox_308Win_20Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['b95', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Ghillie_Woodland','Att_Optic_Hunting']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605900);
			// }

			// if( action_id == 6060 ) //  VSS Ghillie-Sniper kit ADMIN
			// {
				// string text_send606000 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: VSS Ghillie-Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'GhillieSuitMossy', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'AmmoBox_9x39_20Rnd', 'AmmoBox_9x39_20Rnd', 'M_Vss_10Rnd', 'M_Vss_10Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['VSS', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_PSO1','Att_Optic_Hunting']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item;  }; }forEach players;";
				// GetGame().ExecuteSQF(text_send606000);
			// }

					// SellAbleItems.Insert("M4A1");
					// SellAbleItems.Insert("M4A1_Green");
					// SellAbleItems.Insert("M4A1_Black");
					// SellAbleItems.Insert("AKM");
					// SellAbleItems.Insert("AK74");
					// SellAbleItems.Insert("AK101");
					// SellAbleItems.Insert("UMP45");
					// SellAbleItems.Insert("AK74_Black");
					// SellAbleItems.Insert("AK74_Green");
					// SellAbleItems.Insert("AKS74U");
					// SellAbleItems.Insert("AKS74U_Black");
					// SellAbleItems.Insert("AKS74U_Green");
					// SellAbleItems.Insert("b95");
					// SellAbleItems.Insert("b95_Black");
					// SellAbleItems.Insert("b95_Green");
					// SellAbleItems.Insert("cz527");
					// SellAbleItems.Insert("cz527_Black");
					// SellAbleItems.Insert("cz527_Green");
					// SellAbleItems.Insert("cz527_Green_Black");
					// SellAbleItems.Insert("cz527_Black_Green");
					// SellAbleItems.Insert("Fal");
					// SellAbleItems.Insert("izh18");
					// SellAbleItems.Insert("izh18_Sawedoff");
					// SellAbleItems.Insert("M249");
					// SellAbleItems.Insert("Mosin9130");
					// SellAbleItems.Insert("Mosin9130_Black");
					// SellAbleItems.Insert("Mosin9130_Green");
					// SellAbleItems.Insert("Mosin9130_Green_Black");
					// SellAbleItems.Insert("Mosin9130_Black_Green");
					// SellAbleItems.Insert("Repeater");
					// SellAbleItems.Insert("Scout");
					// SellAbleItems.Insert("Scout_Black");
					// SellAbleItems.Insert("Scout_Green");
					// SellAbleItems.Insert("SKS");
					// SellAbleItems.Insert("SKS_Black");
					// SellAbleItems.Insert("SKS_Green");
					// SellAbleItems.Insert("SVD");
					// SellAbleItems.Insert("VSS");
					// SellAbleItems.Insert("Winchester70");
					// SellAbleItems.Insert("Winchester70_Black");
					// SellAbleItems.Insert("Winchester70_Green");
					// SellAbleItems.Insert("ShotgunIzh43");
					// SellAbleItems.Insert("ShotgunMp133");
					// SellAbleItems.Insert("ShotgunMp133_Pistol_Grip");
					// SellAbleItems.Insert("M_FNX45_15Rnd");
					// SellAbleItems.Insert("M_DE_9rnd");
					// SellAbleItems.Insert("M_1911_7Rnd");
					// SellAbleItems.Insert("M_MP5_30Rnd");
					// SellAbleItems.Insert("M_PM73_25Rnd");
					// SellAbleItems.Insert("CLIP_308Win_Snaploader");
					// SellAbleItems.Insert("M_akm_30Rnd");
					// SellAbleItems.Insert("M_akm_drum");
					// SellAbleItems.Insert("M_akm_drum_Black");
					// SellAbleItems.Insert("M_akm_drum_Green");
					// SellAbleItems.Insert("M_akm_palm30");
					// SellAbleItems.Insert("M_akm_palm30_black");
					// SellAbleItems.Insert("M_akm_palm30_green");
					// SellAbleItems.Insert("M_cz527_5rnd");
					// SellAbleItems.Insert("M_STANAG_30Rnd");
					// SellAbleItems.Insert("M_STANAG_30Rnd_Coupled");
					// SellAbleItems.Insert("M_CMAG_10Rnd");
					// SellAbleItems.Insert("M_CMAG_10Rnd_Black");
					// SellAbleItems.Insert("M_CMAG_10Rnd_Green");
					// SellAbleItems.Insert("M_CMAG_20Rnd");
					// SellAbleItems.Insert("M_CMAG_20Rnd_Black");
					// SellAbleItems.Insert("M_CMAG_20Rnd_Green");
					// SellAbleItems.Insert("M_CMAG_30Rnd");
					// SellAbleItems.Insert("M_CMAG_30Rnd_Black");
					// SellAbleItems.Insert("M_CMAG_30Rnd_Green");
					// SellAbleItems.Insert("M_CMAG_40Rnd");
					// SellAbleItems.Insert("M_CMAG_40Rnd_Black");
					// SellAbleItems.Insert("M_CMAG_40Rnd_Green");
					// SellAbleItems.Insert("M_ak101_30Rnd");
					// SellAbleItems.Insert("M_ak101_30Rnd_Black");
					// SellAbleItems.Insert("M_ak101_30Rnd_Green");
					// SellAbleItems.Insert("M_ak74_30Rnd");
					// SellAbleItems.Insert("M_ak74_30Rnd_Black");
					// SellAbleItems.Insert("M_ak74_30Rnd_Green");
					// SellAbleItems.Insert("M_svd_10Rnd");
					// SellAbleItems.Insert("M_Fal_20Rnd");
					// SellAbleItems.Insert("M_Scout_5Rnd");
					// SellAbleItems.Insert("M_UMP_25Rnd");
					// SellAbleItems.Insert("M_Vss_10Rnd");
					// SellAbleItems.Insert("M_M249Box_200Rnd");
					// SellAbleItems.Insert("Att_Suppressor_M4");
					// SellAbleItems.Insert("Att_Suppressor_AK");
					// SellAbleItems.Insert("Att_Suppressor_Pistol");
					// SellAbleItems.Insert("Att_Optic_M68");
					// SellAbleItems.Insert("Att_Optic_M4T3NRDS");
					// SellAbleItems.Insert("Att_Optic_Redpoint");
					// SellAbleItems.Insert("Att_Optic_Reflex");
					// SellAbleItems.Insert("Att_Optic_ACOG");
					// SellAbleItems.Insert("Att_Optic_PUScope");
					// SellAbleItems.Insert("Att_Optic_Kashtan");
					// SellAbleItems.Insert("Att_Optic_Hunting");
					// SellAbleItems.Insert("Att_Optic_PSO1");
					// SellAbleItems.Insert("Att_Optic_PSO11");
					// SellAbleItems.Insert("Att_Ghillie_Tan");
					// SellAbleItems.Insert("Att_Ghillie_Woodland");
					// SellAbleItems.Insert("Att_Ghillie_Mossy");
					// SellAbleItems.Insert("Bagdrybag_Black");
					// SellAbleItems.Insert("GhillieBushragTan");
					// SellAbleItems.Insert("GhillieBushragWoodland");
					// SellAbleItems.Insert("GhillieBushragMossy");
					// SellAbleItems.Insert("GhillieTopTan");
					// SellAbleItems.Insert("GhillieTopWoodland");
					// SellAbleItems.Insert("GhillieTopMossy");
					// SellAbleItems.Insert("GhillieSuitTan");
					// SellAbleItems.Insert("GhillieSuitWoodland");
					// SellAbleItems.Insert("GhillieSuitMossy");
					// SellAbleItems.Insert("BagAssaultBlack");
					// SellAbleItems.Insert("BagAssaultGreen");
					// SellAbleItems.Insert("BagCoyote_Brown");
					// SellAbleItems.Insert("BagCoyote_Green");
					// SellAbleItems.Insert("BagAlice_Green");
					// SellAbleItems.Insert("BagAlice_Black");
					// SellAbleItems.Insert("BagAlice_Camo");
					// SellAbleItems.Insert("GorkaHelmet_Green");
					// SellAbleItems.Insert("GorkaHelmet_Black");
					// SellAbleItems.Insert("GorkaHelmet_complete_Green");
					// SellAbleItems.Insert("GorkaHelmet_complete_Black");
					// SellAbleItems.Insert("GhillieHoodTan");
					// SellAbleItems.Insert("GhillieHoodWoodland");
					// SellAbleItems.Insert("GhillieHoodMossy");
					// SellAbleItems.Insert("GP5GasMask");
					// SellAbleItems.Insert("M65_Jacket_Black");
					// SellAbleItems.Insert("M65_Jacket_Khaki");
					// SellAbleItems.Insert("M65_Jacket_Olive");
					// SellAbleItems.Insert("M65_Jacket_Tan");
					// SellAbleItems.Insert("CargoPants_Black");
					// SellAbleItems.Insert("CargoPants_Green");
					// SellAbleItems.Insert("ttsko_pants_Beige");
					// SellAbleItems.Insert("HunterPants_Autumn");
					// SellAbleItems.Insert("HunterPants_Spring");
					// SellAbleItems.Insert("HunterPants_Winter");
					// SellAbleItems.Insert("PlateCarrierPouches");
					// SellAbleItems.Insert("PlateCarrierComplete");
					// SellAbleItems.Insert("Cultivation_CannabisSeedsPack");
					// SellAbleItems.Insert("Medical_Morphine");
					// SellAbleItems.Insert("Medical_SalineBag");
					// SellAbleItems.Insert("Medical_StartKit");
					// SellAbleItems.Insert("Medical_TransfusionKit");
					// SellAbleItems.Insert("GrenadeRGD5");
					// SellAbleItems.Insert("SmokeGrenade_Red");
					// SellAbleItems.Insert("SmokeGrenade_Green");
					// SellAbleItems.Insert("SmokeGrenade_Yellow");
					// SellAbleItems.Insert("SmokeGrenade_Purple");
					// SellAbleItems.Insert("SmokeGrenade_White");
					// SellAbleItems.Insert("SmokeGrenade_RDG2_Black");
					// SellAbleItems.Insert("SmokeGrenade_RDG2_White");
					// SellAbleItems.Insert("CombatKnife");
					// SellAbleItems.Insert("HuntingKnife");
					// SellAbleItems.Insert("Machete");
					// SellAbleItems.Insert("Pitchfork");
					// SellAbleItems.Insert("Pickaxe");
					// SellAbleItems.Insert("BrassKnucklesDull");
					// SellAbleItems.Insert("BrassKnucklesShiny");
					// SellAbleItems.Insert("Tool_Shovel");
					// SellAbleItems.Insert("Tool_Crowbar");
					// SellAbleItems.Insert("Tool_FireExtinguisher");
					// SellAbleItems.Insert("Tool_Wrench");
					// SellAbleItems.Insert("FarmingHoe");
					// SellAbleItems.Insert("SledgeHammer");
					// SellAbleItems.Insert("Tool_Lockpick");
					// SellAbleItems.Insert("Tool_WeaponCleaningKit");
					// SellAbleItems.Insert("Tool_LeatherSewingKit");
					// SellAbleItems.Insert("BallisticHelmet");
					// SellAbleItems.Insert("BallisticHelmet_Green");
					// SellAbleItems.Insert("BallisticHelmet_Black");
					// SellAbleItems.Insert("BallisticHelmet_UN");
					// SellAbleItems.Insert("AmmoBox_556_20Rnd");
					// SellAbleItems.Insert("AmmoBox_308Win_20Rnd");
					// SellAbleItems.Insert("AmmoBox_762_20Rnd");
					// SellAbleItems.Insert("AmmoBox_762x39_20Rnd");
					// SellAbleItems.Insert("AmmoBox_22_50Rnd");
					// SellAbleItems.Insert("AmmoBox_357_20Rnd");
					// SellAbleItems.Insert("AmmoBox_45acp_25rnd");
					// SellAbleItems.Insert("AmmoBox_9mm_25rnd");
					// SellAbleItems.Insert("AmmoBox_380_35rnd");
					// SellAbleItems.Insert("AmmoBox_00buck_10rnd");
					// SellAbleItems.Insert("AmmoBox_545_20Rnd");
					// SellAbleItems.Insert("AmmoBox_9x39_20Rnd");
			
			// //--------------------Barrel Sale Function-------------------------
			// if( action_id == 69694 ) 
			// {
				// //vector pos_owner = player.GetPosition();
				// Cargo cargo_barrel = this.GetCargo();
				// float Sale_Price;
				// float min_exchange;  // 'tax'
				// float max_exchange;  // 'tax'
				// float Deductions;   // deduction
				
				// if ( (cargo_barrel.GetItemCount()) >=1 && Barrel_atmp >=1 )
				// {

					// for ( int iX = 0; iX < cargo_barrel.GetItemCount(); iX++ )
					// {
						
						// string TypeOF = cargo_barrel.GetItem(iX).GetType();
						// string path;
						// string Itemname;
						// /*"CfgVehicles"
						// "CfgWeapons"
						// "CfgMagazines"
						// "CfgRecipes"*/
						// if ( (cargo_barrel.GetItem (iX).IsKindOf("Rifle")) )
						// {
							// path = "CfgWeapons "+TypeOF+" displayName";
							// Itemname = GetGame().ConfigGetTextOut(path);
							// Sale_Price = 300; // Original Price of Object
							// min_exchange = 10; // Random Extra Amount on-top off item original price : Minimum
							// max_exchange = 15; // Random Extra Amount on-top off item original price : Maximum
							// Deductions = 150;  // Starts at 150
						// }

						// if ( (cargo_barrel.GetItem (iX).IsKindOf("InventoryBase")) )
						// {
							// path = "CfgVehicles "+TypeOF+" displayName";
							// Itemname = GetGame().ConfigGetTextOut(path);
							// Sale_Price = 25; // Original Price of Object
							// min_exchange = 3; // Random Extra Amount on-top off item original price : Minimum
							// max_exchange = 7; // Random Extra Amount on-top off item original price : Maximum
							// Deductions = 25;  // Starts at 25
						// }
						
						// if ( (cargo_barrel.GetItem (iX).IsKindOf("DefaultMagazine")) )
						// {
							// path = "CfgMagazines "+TypeOF+" displayName";
							// Itemname = GetGame().ConfigGetTextOut(path);
							// Sale_Price = 85; // Original Price of Object
							// min_exchange = 5; // Random Extra Amount on-top off item original price : Minimum
							// max_exchange = 10; // Random Extra Amount on-top off item original price : Maximum
							// Deductions = 40;  // Starts at 40
						// }
						
						// if ( (cargo_barrel.GetItem (iX).IsKindOf("MeleeItemBase")) )
						// {
							// path = "CfgVehicles "+TypeOF+" displayName";
							// Itemname = GetGame().ConfigGetTextOut(path);
							// Sale_Price = 15; // Original Price of Object
							// min_exchange = 3; // Random Extra Amount on-top off item original price : Minimum
							// max_exchange = 5; // Random Extra Amount on-top off item original price : Maximum
							// Deductions = 5;  // Starts at 5
						// }
						
						// ItemBase SellItem = cargo_barrel.GetItem ( iX );
						// if ( SellItem != NULL && SellAbleItems.Find((SellItem.GetType())) >= 0 && !(SellItem.IsRuined()) )
						// {
								// float Price_Fluc = Math.RandomFloat( min_exchange, max_exchange );  // Randomizer
								// float Tarde_Price = Deductions + Price_Fluc; //Deductions Total
								
								// float Player_Coins;
								// player.GetVariable("Coins",Player_Coins);
								// float clean = Math.Floor(Tarde_Price);
								// float Final_Price = Math.Floor(Player_Coins + clean);
								
								// player.SetVariable("Coins",Final_Price);
								// SellItem.Delete();
								// float Barrel_chance = Barrel_atmp - 1;
								// this.SetVariable("Avilability",Barrel_chance);

								// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['Item %2 Sold For: %1','"+clean +"','"+Itemname+"'],'colorFriendly'] call fnc_playerMessage; }; }forEach players;");
			
						// }
						// else
						// {
						 // if ( (SellItem.IsRuined()) ) { GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['The trader does not accept Ruined Items!'],'colorImportant'] call fnc_playerMessage; }; }forEach players;");  } else{	 GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['The trader does not accept: %1','"+Itemname+"'],'colorAction'] call fnc_playerMessage; }; }forEach players;"); }
						// }
					// }
				// } else {  if (Barrel_atmp <= 0) { GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['This Trader OutPost Does not Want to purchase any items!'],'colorImportant'] call fnc_playerMessage; [_x,format['Come back sometime later.'],'colorAction'] call fnc_playerMessage; }; }forEach players;"); } else { GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['The Barrel is Empty! Nothing to sell!'],'colorImportant'] call fnc_playerMessage; }; }forEach players;"); } }
			// }
			// //------------------------------------------------------
			
			// if ( action_id == 773883651123 )
			// {
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if ( _Puid == '76561198266733217' ) then { _return = ['76561198266733217','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Special Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BagImprovised','Gorka_up_PautRev','Gorka_pants_PautRev','PlateCarrierComplete','GP5GasMask','NBCHoodGray','','Sneakers_Green','workinggloves_Black','FNX45','Att_Suppressor_Pistol','Att_Optic_FNP45_MRD','M_FNX45_15Rnd','Ammo_45FMJ','Ammo_45FMJ','M_FNX45_15Rnd','M_FNX45_15Rnd','M_FNX45_15Rnd']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','medical_splint','medical_bandagedressing','medical_morphine','medical_epinephrine']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = ['FirefighterAxe_Black','compass','consumable_matchbox','tool_leathersewingkit','tool_canopener','tool_lockpick','tool_heatpack','tool_sewingkit','consumable_chemlight_white', 'consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon','Consumable_Netting', 'Consumable_BurlapStrips','Ammo_556','Ammo_556','M_stanag_30rnd_coupled','M_stanag_30rnd_coupled','M_stanag_30rnd_coupled','M_stanag_30rnd_coupled','Ammo_308Win','Ammo_308Win','Ammo_308Win','Ammo_308Win']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['M4A1', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _item2 = createVehicle ['Winchester70_Green', _pos, [], 0, 'CAN_COLLIDE']; _attGunArr = ['att_bipod_atlas','Att_Ghillie_Woodland','att_buttstock_m4cqb_black','att_handguard_m4ris_black','att_optic_acog','m_stanag_30rnd_coupled','Att_Suppressor_M4','Att_Optic_Hunting']; {_item createInInventory _x;} forEach _attGunArr; {_item2 createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item2; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;");
			// }
			
			// if( action_id == 114654654301 ) // ShadowKnight
				// {
					// string tex0t_send665441 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _vipType = _x getVariable ['Is_VIP',0]; switch (_vipType) do { case 1 : { _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; }; case 2 : { _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; }; case 3 : { _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; }; }; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['Greathelm','Glasses_Designer','TacticalGloves_Black','RidersJacket_Black','PlateCarrierComplete','CargoPants_Black','CombatBoots_Black','BagAssaultBlack','Sword']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'WoodAxe', 'compass','MakarovPB','Att_Suppressor_MakarovPB','M_MakarovPB_8Rnd','M_MakarovPB_8Rnd','Ammo_380','Ammo_380','Ammo_380','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _invArr; sleep 1; _foodArr = ['drink_canteen','Ammo_556','Ammo_556','Ammo_556','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','M_STANAG_30Rnd_Coupled','M_STANAG_30Rnd_Coupled','M_STANAG_30Rnd_Coupled','food_canspaghetti','food_cantuna','food_cantacticalbacon']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['AugSteyr', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['M_STANAG_30Rnd_Coupled','Att_Suppressor_M4']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
					// GetGame().ExecuteSQF(tex0t_send665441);
				// }
				
			// if( action_id == 6657878441 ) // Chernarussian Kit 
				// {
					// string tex0t_send6657878441 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _vipType = _x getVariable ['Is_VIP',0]; switch (_vipType) do { case 1 : { _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; }; case 2 : { _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; }; case 3 : { _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; }; }; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['MilitaryBeretChDKZ','RocketAviators','BandanaMask_blackpattern','BaseballBatNailed','UKAssVest_Black','Gorka_up_PautRev','Gorka_pants_PautRev','CombatBoots_Brown','BagHunting']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'WoodAxe', 'compass','MakarovPB','Att_Suppressor_MakarovPB','M_MakarovPB_8Rnd','M_MakarovPB_8Rnd','Ammo_380','Ammo_380','Ammo_380','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _invArr; sleep 1; _foodArr = ['drink_canteen','Ammo_545','Ammo_545','Ammo_545','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','M_ak74_30Rnd_Black','M_ak74_30Rnd_Black','M_ak74_30Rnd_Black','food_canspaghetti','food_cantuna','food_cantacticalbacon']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['AK74_Black', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Handguard_AK_Rail_Black','Att_Buttstock_AK74_Black','Att_Suppressor_AK','M_ak74_30Rnd_Black','Att_Optic_PSO1','Att_Bipod_Atlas']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
					// GetGame().ExecuteSQF(tex0t_send6657878441);
				// }
				
				// if( action_id == 663254878144 ) // KGB
				// {
					// string tex0t_send663254878144 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _vipType = _x getVariable ['Is_VIP',0]; switch (_vipType) do { case 1 : { _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; }; case 2 : { _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; }; case 3 : { _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; }; }; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['RadarCap_Brown','RocketAviators','BandanaMask_camopattern','TacticalGloves_Beige','JungleBoots_Brown','Hunting_jacket_brown','PlateCarrierComplete','BagHunting']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass','MakarovPB','Att_Suppressor_MakarovPB','M_MakarovPB_8Rnd','M_MakarovPB_8Rnd','Ammo_380','Ammo_380','Ammo_380','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _invArr; sleep 1; _foodArr = ['drink_canteen','Ammo_556','Ammo_556','Ammo_556','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','M_ak101_30Rnd_Black','M_ak101_30Rnd_Black','M_ak101_30Rnd_Black','food_canspaghetti','food_cantuna','food_cantacticalbacon']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['AK101_Black', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Handguard_AK_Rail_Black','Att_Buttstock_AK74_Black','Att_Suppressor_AK','M_ak101_30Rnd_Black','Att_Optic_PSO1','Att_Bipod_Atlas']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
					// GetGame().ExecuteSQF(tex0t_send663254878144);
				// }
				
				// if( action_id == 5487954878144 ) // Tactical
				// {
					// string tex0t_send5487954878144 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _vipType = _x getVariable ['Is_VIP',0]; switch (_vipType) do { case 1 : { _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; }; case 2 : { _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; }; case 3 : { _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; }; }; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BaseballCap_Camo','RocketAviators','BandanaMask_camopattern','TacticalGloves_Green','CombatBoots_Green','HikingJacketGreen','PlateCarrierComplete','BDUpants_Woodland','BagCourierImprovisedFur']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass','MakarovPB','Att_Suppressor_MakarovPB','M_MakarovPB_8Rnd','M_MakarovPB_8Rnd','Ammo_380','Ammo_380','Ammo_380','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _invArr; sleep 1; _foodArr = ['drink_canteen','Ammo_12ga_Pellets','Ammo_12ga_Pellets','Ammo_12ga_Pellets','Ammo_12ga_Slug','Ammo_12ga_Slug','Ammo_12ga_Slug','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['ShotgunMp133', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['cunt']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
					// GetGame().ExecuteSQF(tex0t_send5487954878144);
				// }
				
				// if( action_id == 5879864320154 ) // Cyka blyat 
				// {
					// string tex0t_send5879864320154 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _vipType = _x getVariable ['Is_VIP',0]; switch (_vipType) do { case 1 : { _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; }; case 2 : { _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; }; case 3 : { _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; }; }; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BoonieHat_Tan','RocketAviators','BalaclavaMask_Beige','TacticalGloves_Beige','CombatBoots_Beige','M65_Jacket_Tan','PlateCarrierComplete','CargoPants_Beige','BagHunting']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass','MakarovPB','Att_Suppressor_MakarovPB','M_MakarovPB_8Rnd','M_MakarovPB_8Rnd','Ammo_380','Ammo_380','Ammo_380','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _invArr; sleep 1; _foodArr = ['drink_canteen','Ammo_762x39','Ammo_762x39','Ammo_762x39','Ammo_762x39','Ammo_762x39','Ammo_762x39','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['SKS_Black', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Bayonet_SKS','Att_Optic_PUScope']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
					// GetGame().ExecuteSQF(tex0t_send5879864320154);
				// }
			
			// if( action_id == 11490301 ) // NBC Suit kit VIP _ 1 _
			// {
				// string text_send11490301 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BagTortilla','NBCJacketGray','RocketAviators','NBCBootsGray','NBCGlovesGray','NBCHoodGray','NBCPantsGray','GP5GasMask','PlateCarrierPouches']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','Att_Optic_M68','Att_Optic_Reflex','Att_Optic_ACOG','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'WoodAxe', 'compass','MakarovPB','Att_Suppressor_MakarovPB','M_MakarovPB_8Rnd','M_MakarovPB_8Rnd','AmmoBox_9mm_25rnd','AmmoBox_9mm_25rnd','AmmoBox_9mm_25rnd','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_45acp_25rnd','AmmoBox_45acp_25rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','M_MP5_30Rnd','M_MP5_30Rnd','food_canspaghetti','food_cantuna','food_cantacticalbacon']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _item = createVehicle ['MP5K', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['M_MP5_30Rnd','Att_Handguard_MP5_Rail','Att_Buttstock_MP5_Stock','Att_Suppressor_Pistol']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send11490301);
			// }
			
			// if( action_id == 12490301 ) // NBC Suit kit VIP _ 2 _
			// {
				// string text_send12490301 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BagTortilla','NBCJacketGray','RocketAviators','NBCBootsGray','NBCGlovesGray','NBCHoodGray','NBCPantsGray','GP5GasMask','PlateCarrierPouches']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','Att_Optic_M68','Att_Optic_Reflex','Att_Optic_ACOG','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'WoodAxe', 'compass','MakarovPB','Att_Suppressor_MakarovPB','M_MakarovPB_8Rnd','M_MakarovPB_8Rnd','AmmoBox_9mm_25rnd','AmmoBox_9mm_25rnd','AmmoBox_9mm_25rnd','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_45acp_25rnd','AmmoBox_45acp_25rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','M_MP5_30Rnd','M_MP5_30Rnd','food_canspaghetti','food_cantuna','food_cantacticalbacon']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _item = createVehicle ['MP5K', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['M_MP5_30Rnd','Att_Handguard_MP5_Rail','Att_Buttstock_MP5_Stock','Att_Suppressor_Pistol']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send12490301);
			// }
			
			// if( action_id == 13490301 ) // NBC Suit kit VIP _ 3 _
			// {
				// string text_send13490301 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BagTortilla','NBCJacketGray','RocketAviators','NBCBootsGray','NBCGlovesGray','NBCHoodGray','NBCPantsGray','GP5GasMask','PlateCarrierPouches']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','Att_Optic_M68','Att_Optic_Reflex','Att_Optic_ACOG','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'WoodAxe', 'compass','MakarovPB','Att_Suppressor_MakarovPB','M_MakarovPB_8Rnd','M_MakarovPB_8Rnd','AmmoBox_9mm_25rnd','AmmoBox_9mm_25rnd','AmmoBox_9mm_25rnd','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_45acp_25rnd','AmmoBox_45acp_25rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','M_MP5_30Rnd','M_MP5_30Rnd','food_canspaghetti','food_cantuna','food_cantacticalbacon']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _item = createVehicle ['MP5K', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['M_MP5_30Rnd','Att_Handguard_MP5_Rail','Att_Buttstock_MP5_Stock','Att_Suppressor_Pistol']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send13490301);
			// }
			
			// if( action_id == 10490301 ) // Survivalist kit VIP _ 1 _
			// {
				// string text_send10490301 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BagImprovisedFur','TacticalShirtTan','RocketAviators','JungleBoots_Beige','TacticalGloves_Green','BoonieHat_Tan','CargoPants_Beige','BalaclavaMask_Beige','Vest_LeatherStorage_Natural']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','Att_Optic_M4T3NRDS','Att_Optic_ACOG','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'WoodAxe', 'compass','magnum','M_357_Speedloader','M_357_Speedloader','AmmoBox_357_20Rnd','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_45acp_25rnd','AmmoBox_45acp_25rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','M_UMP_25Rnd','M_UMP_25Rnd','food_canspaghetti','food_cantuna','food_cantacticalbacon', 'Ammo_762','Ammo_762']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _item = createVehicle ['UMP45', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Suppressor_Pistol','Att_Ghillie_Tan','M_UMP_25Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send10490301);
			// }
			
			// if( action_id == 20490301 ) // Survivalist kit VIP _ 2 _
			// {
				// string text_send20490301 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BagImprovisedFur','TacticalShirtTan','RocketAviators','JungleBoots_Beige','TacticalGloves_Green','BoonieHat_Tan','CargoPants_Beige','BalaclavaMask_Beige','Vest_LeatherStorage_Natural']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','Att_Optic_M4T3NRDS','Att_Optic_ACOG','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'WoodAxe', 'compass','magnum','M_357_Speedloader','M_357_Speedloader','AmmoBox_357_20Rnd','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_45acp_25rnd','AmmoBox_45acp_25rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','M_UMP_25Rnd','M_UMP_25Rnd','food_canspaghetti','food_cantuna','food_cantacticalbacon', 'Ammo_762','Ammo_762']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _item = createVehicle ['UMP45', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Suppressor_Pistol','Att_Ghillie_Tan','M_UMP_25Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send20490301);
			// }
			
			// if( action_id == 30490301 ) // Survivalist kit VIP _ 3 _
			// {
				// string text_send30490301 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BagImprovisedFur','TacticalShirtTan','RocketAviators','JungleBoots_Beige','TacticalGloves_Green','BoonieHat_Tan','CargoPants_Beige','BalaclavaMask_Beige','Vest_LeatherStorage_Natural']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','Att_Optic_M4T3NRDS','Att_Optic_ACOG','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'WoodAxe', 'compass','magnum','M_357_Speedloader','M_357_Speedloader','AmmoBox_357_20Rnd','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_45acp_25rnd','AmmoBox_45acp_25rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','M_UMP_25Rnd','M_UMP_25Rnd','food_canspaghetti','food_cantuna','food_cantacticalbacon', 'Ammo_762','Ammo_762']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _item = createVehicle ['UMP45', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Suppressor_Pistol','Att_Ghillie_Tan','M_UMP_25Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send30490301);
			// }
			
			// if( action_id == 60490301 ) // Hunter kit VIP _ 1 _
			// {
				// string text_send60490301 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BaseballCap_Olive','BagImprovised','Hunting_jacket_spring','Wellies_Green','RocketAviators','TacticalGloves_Green','HunterPants_Spring','BandanaMask_greenpattern','PlateCarrierComplete']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Green', 'compass','M_Glock_15Rnd','M_Glock_15Rnd','Glock19','Att_Light_TLR','M_Glock_15Rnd','Att_Suppressor_Pistol','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon', 'Ammo_762','Ammo_762']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['Mosin9130_Black_Green', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Suppressor_Improvised','Att_Optic_PUScope','Att_Ghillie_Woodland','Att_Bayonet_Mosin']; {_item createInInventory _x;} forEach _attGunArr; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send60490301);
			// }
			
			// if( action_id == 60490312 ) // Hunter kit VIP _ 2 _
			// {
				// string text_send60490312 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BaseballCap_Olive','BagImprovised','Hunting_jacket_spring','Wellies_Green','RocketAviators','TacticalGloves_Green','HunterPants_Spring','BandanaMask_greenpattern','PlateCarrierComplete']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Green', 'compass','M_Glock_15Rnd','M_Glock_15Rnd','Glock19','Att_Light_TLR','M_Glock_15Rnd','Att_Suppressor_Pistol','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon', 'Ammo_762','Ammo_762']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['Mosin9130_Black_Green', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Suppressor_Improvised','Att_Optic_PUScope','Att_Ghillie_Woodland','Att_Bayonet_Mosin']; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send60490312);
			// }
			
			// if( action_id == 60490323 ) // Hunter kit VIP _ 3 _
			// {
				// string text_send60490323 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BaseballCap_Olive','BagImprovised','Hunting_jacket_spring','Wellies_Green','RocketAviators','TacticalGloves_Green','HunterPants_Spring','BandanaMask_greenpattern','PlateCarrierComplete']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Green', 'compass','M_Glock_15Rnd','M_Glock_15Rnd','Glock19','Att_Light_TLR','M_Glock_15Rnd','Att_Suppressor_Pistol','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon', 'Ammo_762','Ammo_762']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['Mosin9130_Black_Green', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Suppressor_Improvised','Att_Optic_PUScope','Att_Ghillie_Woodland','Att_Bayonet_Mosin']; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send60490323);
			// }
			
			// if( action_id == 60490331 ) // Spetsnaz kit VIP _ 1 _
			// {
				// string text_send60490331 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BagAssaultBlack','TacticalShirtBlack','JoeyXSunGlasses','BallisticHelmet_Black','CargoPants_Black','BalaclavaMask_Black','HighCapacityVest_Black','TacticalGloves_Black','MilitaryBoots_Black']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass','M_Glock_15Rnd','M_Glock_15Rnd','Glock19','Att_Light_TLR','M_Glock_15Rnd','Att_Suppressor_Pistol','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon', 'M_ak74_30Rnd_Black','M_ak74_30Rnd_Black']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['AKS74U_Black', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['M_ak74_30Rnd_Black','M_ak74_30Rnd_Black','Att_Suppressor_AK','Att_Buttstock_AKS74U']; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send60490331);
			// }
			
			// if( action_id == 60490332 ) // Spetsnaz kit VIP _ 2 _
			// {
				// string text_send60490332 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BagAssaultBlack','TacticalShirtBlack','JoeyXSunGlasses','BallisticHelmet_Black','CargoPants_Black','BalaclavaMask_Black','HighCapacityVest_Black','TacticalGloves_Black','MilitaryBoots_Black']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass','M_Glock_15Rnd','M_Glock_15Rnd','Glock19','Att_Light_TLR','M_Glock_15Rnd','Att_Suppressor_Pistol','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon', 'M_ak74_30Rnd_Black','M_ak74_30Rnd_Black']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['AKS74U_Black', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['M_ak74_30Rnd_Black','M_ak74_30Rnd_Black','Att_Suppressor_AK','Att_Buttstock_AKS74U']; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send60490332);
			// }
			
			// if( action_id == 60490333 ) // Spetsnaz kit VIP _ 3 _
			// {
				// string text_send60490333 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BagAssaultBlack','TacticalShirtBlack','JoeyXSunGlasses','BallisticHelmet_Black','CargoPants_Black','BalaclavaMask_Black','HighCapacityVest_Black','TacticalGloves_Black','MilitaryBoots_Black']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass','M_Glock_15Rnd','M_Glock_15Rnd','Glock19','Att_Light_TLR','M_Glock_15Rnd','Att_Suppressor_Pistol','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon', 'M_ak74_30Rnd_Black','M_ak74_30Rnd_Black']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['AKS74U_Black', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['M_ak74_30Rnd_Black','M_ak74_30Rnd_Black','Att_Suppressor_AK','Att_Buttstock_AKS74U']; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send60490333);
			// }
			
			// if( action_id == 60490 ) // CQB kit VIP _ 1 _
			// {
				// string text_send6049 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'BagTortilla', 'SmershVestBackpack', 'GorkaHelmet_complete_Black', 'workinggloves_Black', 'CargoPants_Black', 'M65_Jacket_Black', 'Sneakers_Red', 'balaclavamask_blackskull' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['m4a1', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = [ 'att_bipod_atlas', 'Att_Ghillie_Woodland', 'att_buttstock_m4cqb_black', 'att_handguard_m4ris_black', 'att_optic_acog', 'm_stanag_30rnd_coupled', 'Att_Suppressor_M4' ]; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6049);
			// }
			
			// if( action_id == 604902 ) // CQB kit VIP _ 2 _
			// {
				// string text_send604902 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'BagTortilla', 'SmershVestBackpack', 'GorkaHelmet_complete_Black', 'workinggloves_Black', 'CargoPants_Black', 'M65_Jacket_Black', 'Sneakers_Red', 'balaclavamask_blackskull' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['m4a1', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = [ 'att_bipod_atlas', 'Att_Ghillie_Woodland', 'att_buttstock_m4cqb_black', 'att_handguard_m4ris_black', 'att_optic_acog', 'm_stanag_30rnd_coupled', 'Att_Suppressor_M4' ]; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send604902);
			// }
			
			// if( action_id == 604903 ) // CQB kit VIP _ 3 _
			// {
				// string text_send604903 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'BagTortilla', 'SmershVestBackpack', 'GorkaHelmet_complete_Black', 'workinggloves_Black', 'CargoPants_Black', 'M65_Jacket_Black', 'Sneakers_Red', 'balaclavamask_blackskull' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['m4a1', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = [ 'att_bipod_atlas', 'Att_Ghillie_Woodland', 'att_buttstock_m4cqb_black', 'att_handguard_m4ris_black', 'att_optic_acog', 'm_stanag_30rnd_coupled', 'Att_Suppressor_M4' ]; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send604903);
			// }
			
			// if( action_id == 60500 ) // Assualt kit VIP _ 1 _
			// {
				// string text_send6050 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Assualt Loadout  Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'BagTortilla', 'SmershVestBackpack', 'GorkaHelmet_complete_Green', 'cargopants_green', 'm65_jacket_olive', 'workinggloves_Black', 'Sneakers_Green', 'balaclavamask_green' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'M_akm_drum', 'M_akm_drum' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['AKM', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Handguard_AK_Rail_Black','att_bipod_atlas','Att_Ghillie_Woodland','Att_Optic_PSO1','Att_Buttstock_AK_Wood_Camo','Att_Suppressor_AK','M_AKM_30Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6050);
			// }
			
			// if( action_id == 605002 ) // Assualt kit VIP_ 2 _
			// {
				// string text_send605002 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Assualt Loadout  Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'BagTortilla', 'SmershVestBackpack', 'GorkaHelmet_complete_Green', 'cargopants_green', 'm65_jacket_olive', 'workinggloves_Black', 'Sneakers_Green', 'balaclavamask_green' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'M_akm_drum', 'M_akm_drum' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['AKM', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Handguard_AK_Rail_Black','att_bipod_atlas','Att_Ghillie_Woodland','Att_Optic_PSO1','Att_Buttstock_AK_Wood_Camo','Att_Suppressor_AK','M_AKM_30Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605002);
			// }
			
			// if( action_id == 605003 ) // Assualt kit VIP_ 3 _
			// {
				// string text_send605003 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Assualt Loadout  Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'BagTortilla', 'SmershVestBackpack', 'GorkaHelmet_complete_Green', 'cargopants_green', 'm65_jacket_olive', 'workinggloves_Black', 'Sneakers_Green', 'balaclavamask_green' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'M_akm_drum', 'M_akm_drum' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['AKM', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Handguard_AK_Rail_Black','att_bipod_atlas','Att_Ghillie_Woodland','Att_Optic_PSO1','Att_Buttstock_AK_Wood_Camo','Att_Suppressor_AK','M_AKM_30Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605003);
			// }
			
			// if( action_id == 60510 ) //  Marksman kit VIP _ 1 _
			// {
				// string text_send6051 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Marksman Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'baghunting', 'SmershVestBackpack', 'ttsko_pants_Beige', 'TTsKO_Jacket_Camo', 'BandanaMask_camopattern', 'Sneakers_Green', 'WorkingGloves_Brown' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'm_svd_10Rnd', 'm_svd_10Rnd', 'm_svd_10Rnd', 'm_svd_10Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['SVD', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_PSO1','Att_Ghillie_Woodland','m_svd_10Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6051);
			// }
			
			// if( action_id == 605102 ) //  Marksman kit VIP _ 2 _
			// {
				// string text_send605102 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Marksman Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'baghunting', 'SmershVestBackpack', 'ttsko_pants_Beige', 'TTsKO_Jacket_Camo', 'BandanaMask_camopattern', 'Sneakers_Green', 'WorkingGloves_Brown' ]; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'm_svd_10Rnd', 'm_svd_10Rnd', 'm_svd_10Rnd', 'm_svd_10Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['SVD', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_PSO1','Att_Ghillie_Woodland','m_svd_10Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605102);
			// }
			
			// if( action_id == 605103 ) //  Marksman kit VIP _ 3 _
			// {
				// string text_send605103 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Marksman Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'baghunting', 'SmershVestBackpack', 'ttsko_pants_Beige', 'TTsKO_Jacket_Camo', 'BandanaMask_camopattern', 'Sneakers_Green', 'WorkingGloves_Brown' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'm_svd_10Rnd', 'm_svd_10Rnd', 'm_svd_10Rnd', 'm_svd_10Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['SVD', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_PSO1','Att_Ghillie_Woodland','m_svd_10Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605103);
			// }
			
			// if( action_id == 60520 ) //  Sniper kit VIP _ 1 _
			// {
				// string text_send6052 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'baghunting', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'Ammo_308Win', 'Ammo_308Win', 'Ammo_308Win', 'Ammo_308Win' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['Winchester70_Black', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_Hunting','Att_Ghillie_Woodland']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6052);
			// }
			
			// if( action_id == 605202 ) //  Sniper kit VIP _ 2 _
			// {
				// string text_send605202 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'baghunting', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'Ammo_308Win', 'Ammo_308Win', 'Ammo_308Win', 'Ammo_308Win' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['Winchester70_Black', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_Hunting','Att_Ghillie_Woodland']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605202);
			// }
			
			// if( action_id == 605203 ) //  Sniper kit VIP _ 3 _
			// {
				// string text_send605203 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'baghunting', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'Ammo_308Win', 'Ammo_308Win', 'Ammo_308Win', 'Ammo_308Win' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['Winchester70_Black', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_Hunting','Att_Ghillie_Woodland']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605203);
			// }

			// if( action_id == 60580 ) //  FAL Green Gorka kit VIP  _ 1 _
			// {
				// string text_send6053 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: FAL Green Gorka Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'Gorka_up_flat', 'Gorka_pants_flat', 'BagAssaultGreen', 'GorkaHelmet_complete_Black', 'PlateCarrierComplete', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'M_Fal_20Rnd', 'M_Fal_20Rnd', 'AmmoBox_308Win_20Rnd', 'AmmoBox_308Win_20Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['FAL', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_ACOG','Att_Buttstock_FalFolding']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6053);
			// }
			
			// if( action_id == 605802 ) //  FAL Green Gorka kit VIP  _ 2 _
			// {
				// string text_send605802 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: FAL Green Gorka Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'Gorka_up_flat', 'Gorka_pants_flat', 'BagAssaultGreen', 'GorkaHelmet_complete_Black', 'PlateCarrierComplete', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'M_Fal_20Rnd', 'M_Fal_20Rnd', 'AmmoBox_308Win_20Rnd', 'AmmoBox_308Win_20Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['FAL', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_ACOG','Att_Buttstock_FalFolding']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605802);
			// }
			
			// if( action_id == 605803 ) //  FAL Green Gorka kit VIP _ 3 _
			// {
				// string text_send605803 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: FAL Green Gorka Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'Gorka_up_flat', 'Gorka_pants_flat', 'BagAssaultGreen', 'GorkaHelmet_complete_Black', 'PlateCarrierComplete', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'M_Fal_20Rnd', 'M_Fal_20Rnd', 'AmmoBox_308Win_20Rnd', 'AmmoBox_308Win_20Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['FAL', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_ACOG','Att_Buttstock_FalFolding']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605803);
			// }

			// if( action_id == 60590 ) //  B95 Ghillie-Sniper kit VIP  1
			// {
				// string text_send6059 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: B95 Ghillie-Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'GhillieSuitMossy', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'Ammo_308Win', 'Ammo_308Win', 'AmmoBox_308Win_20Rnd', 'AmmoBox_308Win_20Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['b95', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Ghillie_Woodland','Att_Optic_Hunting']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6059);
			// }
			
			// if( action_id == 605902 ) //  B95 Ghillie-Sniper kit VIP  2
			// {
				// string text_send605902 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: B95 Ghillie-Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'GhillieSuitMossy', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'Ammo_308Win', 'Ammo_308Win', 'AmmoBox_308Win_20Rnd', 'AmmoBox_308Win_20Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['b95', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Ghillie_Woodland','Att_Optic_Hunting']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605902);
			// }
			
			// if( action_id == 605903 ) //  B95 Ghillie-Sniper kit VIP  3
			// {
				// string text_send605903 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: B95 Ghillie-Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'GhillieSuitMossy', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'Ammo_308Win', 'Ammo_308Win', 'AmmoBox_308Win_20Rnd', 'AmmoBox_308Win_20Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _item = createVehicle ['b95', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Ghillie_Woodland','Att_Optic_Hunting']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605903);
			// }

			// if( action_id == 60600 ) //  VSS Ghillie-Sniper kit VIP  1
			// {
				// string text_send6060 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: VSS Ghillie-Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'GhillieSuitMossy', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'AmmoBox_9x39_20Rnd', 'AmmoBox_9x39_20Rnd', 'M_Vss_10Rnd', 'M_Vss_10Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _item = createVehicle ['VSS', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_PSO1','Att_Optic_Hunting']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6060);
			// }
			
			// if( action_id == 606002 ) //  VSS Ghillie-Sniper kit VIP  2
			// {
				// string text_send60602 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: VSS Ghillie-Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'GhillieSuitMossy', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'AmmoBox_9x39_20Rnd', 'AmmoBox_9x39_20Rnd', 'M_Vss_10Rnd', 'M_Vss_10Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; _item = createVehicle ['VSS', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_PSO1','Att_Optic_Hunting']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send60602);
			// }
			
			// if( action_id == 606003 ) //  VSS Ghillie-Sniper kit VIP  3
			// {
				// string text_send606003 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: VSS Ghillie-Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'GhillieSuitMossy', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'AmmoBox_9x39_20Rnd', 'AmmoBox_9x39_20Rnd', 'M_Vss_10Rnd', 'M_Vss_10Rnd' ]; _v = _whoisjew createInInventory 'Pen_Red'; _phppaper = _whoisjew createInInventory 'Consumable_Paper'; _phppaper setVariable ['message',_uid]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['VSS', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_PSO1','Att_Optic_Hunting']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send606003);
			// }
			
			// if( action_id == 50500 ) // Fully Heal Player
			// {
				// string text_send5050 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; [_x,format['VIP: Player FULLY Healed!'],'colorFriendly'] call fnc_playerMessage; _x setVariable ['blood', 5000]; _x setVariable ['health', 5000]; _x setVariable ['bodytemperature',37]; _x setVariable ['stomach',3000]; _x setVariable ['energy',5000]; _x setVariable ['water',5000]; _x setDamage 0; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send5050);
			// }

			// if( action_id == 50690 ) //TP TO Staroye  1
			// {
				// string text_send5069 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Staroye!'],'colorFriendly'] call fnc_playerMessage; _x setPos [10060.891, 5436.0332]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send5069);
			// }
			
			// if( action_id == 506902 ) //TP TO Staroye  2
			// {
				// string text_send506902 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Staroye!'],'colorFriendly'] call fnc_playerMessage; _x setPos [10060.891, 5436.0332]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send506902);
			// }
			
			// if( action_id == 506903 ) //TP TO Staroye  3
			// {
				// string text_send506903 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Staroye!'],'colorFriendly'] call fnc_playerMessage; _x setPos [10060.891, 5436.0332]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send506903);
			// }
			
			// if( action_id == 50510 ) //TP TO CHERNO  1
			// {
				// string text_send5051 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Cherno!'],'colorFriendly'] call fnc_playerMessage; _x setPos [7213.31, 3010.37,0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send5051);
			// }
			
			// if( action_id == 505102 ) //TP TO CHERNO  2
			// {
				// string text_send505102 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Cherno!'],'colorFriendly'] call fnc_playerMessage; _x setPos [7213.31, 3010.37,0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send505102);
			// }
			
			// if( action_id == 505103 ) //TP TO CHERNO  3
			// {
				// string text_send505103 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Cherno!'],'colorFriendly'] call fnc_playerMessage; _x setPos [7213.31, 3010.37,0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send505103);
			// }
			
			// if( action_id == 99990 ) //TP TO STARY TRADER
			// {
				// string text_send9999 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Stary Sobor!'],'colorFriendly'] call fnc_playerMessage; _x setPos [6277.0186, 7725.7163,0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send9999);
			// }

			// if( action_id == 50560 ) // TP coords Lopatino  1
			// {
				// string text_send5056 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Lopatino!'],'colorFriendly'] call fnc_playerMessage; _x setPos [2891.01, 9768.28,0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send5056);
			// }
			
			// if( action_id == 505602 ) // TP coords Lopatino  2
			// {
				// string text_send505602 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Lopatino!'],'colorFriendly'] call fnc_playerMessage; _x setPos [2891.01, 9768.28,0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send505602);
			// }
			
			// if( action_id == 505603 ) // TP coords Lopatino  3
			// {
				// string text_send505603 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Lopatino!'],'colorFriendly'] call fnc_playerMessage; _x setPos [2891.01, 9768.28,0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send505603);
			// }
			
			// if( action_id == 660500 ) // TP Electro 1
			// {
				// string text_send50563 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Electro!'],'colorFriendly'] call fnc_playerMessage; _x setPos [10486.641,2173.1155,0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send50563);
			// }
			
			// if( action_id == 6605002 ) // TP Electro 2
			// {
				// string text_send6605002 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Electro!'],'colorFriendly'] call fnc_playerMessage; _x setPos [10486.641,2173.1155,0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6605002);
			// }
			
			// if( action_id == 6605003 ) // TP Electro 3
			// {
				// string text_send6605003 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Electro!'],'colorFriendly'] call fnc_playerMessage; _x setPos [10486.641,2173.1155,0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6605003);
			// }

			// if( action_id == 6605103 ) // TP Balota  3
			// {
				// string text_send6605103 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Balota!'],'colorFriendly'] call fnc_playerMessage; _x setPos [4922.41, 2833.85,0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6605103);
			// }

			// if( action_id == 6605203 ) // TP Zelenogorsk  3
			// {
				// string text_send6605203 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Zelenogorsk!'],'colorFriendly'] call fnc_playerMessage; _x setPos [2607.9495, 5024.166]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6605203);
			// }				

			// if( action_id == 6969 ) // Self-Saline
			// {
				// float Current_Blood;
				// float Current_Health;

				// player.GetVariable("blood",Current_Blood);
				// player.GetVariable("health",Current_Health);
			  // if ( Current_Blood <=4999 )
			  // {
				// ItemBase ItemInHand = player.GetEntityInHands();
				// if ( ItemInHand != NULL && ItemInHand.IsKindOf("Medical_TransfusionKit") && !(ItemInHand.IsRuined()) )
				// {
					// Saline_Wait = new Timer();
					// Saline_Wait.Run(12.35, this, "CustomSaline", new Param1<PlayerBase>(player)); // calls "CustomSaline" on "ItemInHands" after 12.35 seconds
					// player.LockInventory(LOCK_FROM_SCRIPT);
					// player.PlayActionGlobal("playerBandage");
					// player.PlayActionGlobal("PlayerInjection");
				// } else { if ( ItemInHand != NULL && (ItemInHand.IsRuined()) ) { GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['The Saline bag is Ruined!'],'colorImportant'] call fnc_playerMessage; }; }forEach players;"); } else { GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['The Saline bag needs to be in my hands to use!'],'colorImportant'] call fnc_playerMessage; }; }forEach players;"); } }
			  // } else {
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['I feel OK, i dont want to use a Saline'],'colorAction'] call fnc_playerMessage; }; }forEach players;");
			  // }
			// }

			// if( action_id == 0703 ) //< Wallet Functions || CHECK BALANCE IN WALLET
			// {
				// float Wallet_Amnt;
				// float Player_Amnt;
				// this.GetVariable("note",Wallet_Amnt);
				// player.GetVariable("Coins",Player_Amnt);
				// string msg_wallet0 = "{ _Puid = _x getVariable ['GU_ID',0];  if (_Puid == '" + Player_UID + "') then { [_x,format['Wallet Balance: %1 My Balance: %2'," + Wallet_Amnt + "," + Player_Amnt + "],'colorFriendly'] call fnc_playerMessage; }; }forEach players;";
				// GetGame().ExecuteSQF(msg_wallet0);
			// }
			
			// if( action_id == 0702 ) //< Wallet Functions || TRANSFER MY COINS TO WALLER
			// {
				// float Wallet_AmntT1;
				// float Player_AmntT1;
				// this.GetVariable("note",Wallet_AmntT1);
				// player.GetVariable("Coins",Player_AmntT1);
				
				// if ( Player_AmntT1 >= 1 )
				// {
				// float Wallet_Total = Wallet_AmntT1 + Player_AmntT1;
				// this.SetVariable("note",Wallet_Total);
				// player.SetVariable("Coins",0);
				// string msg_wallet1 = "{ _Puid = _x getVariable ['GU_ID',0];  if (_Puid == '" + Player_UID + "') then { [_x,format['I Have Transfered My Coins To The Wallet: %1',"+ Wallet_Total +"],'colorFriendly'] call fnc_playerMessage; }; }forEach players;";
				// GetGame().ExecuteSQF(msg_wallet1);
				// }
				// else
				// {
					// string msg_walletFAIL0 = "{ _Puid = _x getVariable ['GU_ID',0];  if (_Puid == '" + Player_UID + "') then { [_x,format['I have no coins to transfer!'],'colorAction'] call fnc_playerMessage; }; }forEach players;";
					// GetGame().ExecuteSQF(msg_walletFAIL0);
				// }
			// }
			
			// if( action_id == 02554878 ) //< Wallet Functions || TRANSFER 1/2 OF MY COINS TO WALLER
			// {
				// float Wallet_AmntT165;
				// float Player_AmntT16565;
				// this.GetVariable("note",Wallet_AmntT165);
				// player.GetVariable("Coins",Player_AmntT16565);
				
				// if ( Player_AmntT16565 >= 0.5 )
				// {
				// float Wallet_Tota22l = (Wallet_AmntT165 / 2) + Player_AmntT16565;
				// this.SetVariable("note",(Wallet_Tota22l /2 ));
				// player.SetVariable("Coins",(Player_AmntT16565 / 2));
				// string msg_wallet154 = "{ _Puid = _x getVariable ['GU_ID',0];  if (_Puid == '" + Player_UID + "') then { [_x,format['I Have Transfered 1/2 of My Coins To The Wallet: %1',"+ Wallet_Tota22l +"],'colorFriendly'] call fnc_playerMessage; }; }forEach players;";
				// GetGame().ExecuteSQF(msg_wallet154);
				// }
				// else
				// {
					// string msg_walletFAIL0989 = "{ _Puid = _x getVariable ['GU_ID',0];  if (_Puid == '" + Player_UID + "') then { [_x,format['I have no coins to transfer!'],'colorAction'] call fnc_playerMessage; }; }forEach players;";
					// GetGame().ExecuteSQF(msg_walletFAIL0989);
				// }
			// }
			
			// if( action_id == 0701 ) //< Wallet Functions || TRANSFER COINS FROM WALLET TO PLAYER
			// {	
				
				// float Wallet_AmntT2;
				// float Player_AmntT2;
				// this.GetVariable("note",Wallet_AmntT2);
				// player.GetVariable("Coins",Player_AmntT2);
				
				// if ( Wallet_AmntT2 >= 1 )
				// {
				// float Wallet_Total1 = Wallet_AmntT2 + Player_AmntT2;
				// this.SetVariable("note",0);
				// player.SetVariable("Coins",Wallet_Total1);
				// string msg_wallet2 = "{ _Puid = _x getVariable ['GU_ID',0];  if (_Puid == '" + Player_UID + "') then { [_x,format['I have removed all coins from the wallet: %1',"+ Wallet_Total1 +"],'colorFriendly'] call fnc_playerMessage; }; }forEach players;";
				// GetGame().ExecuteSQF(msg_wallet2);
				// }
				// else
				// {
					// string msg_walletFAIL1 = "{ _Puid = _x getVariable ['GU_ID',0];  if (_Puid == '" + Player_UID + "') then { [_x,format['The Wallet is Empty!'],'colorImportant'] call fnc_playerMessage; }; }forEach players;";
					// GetGame().ExecuteSQF(msg_walletFAIL1);
				// }
			// }
			
			// if( action_id == 070778 ) //< Wallet Functions || TRANSFER 1/2 COINS FROM WALLET TO PLAYER
			// {	
				
				// float Wallet_AmntT23;
				// float Player_AmntT3;
				// this.GetVariable("note",Wallet_AmntT23);
				// player.GetVariable("Coins",Player_AmntT3);
				
				// if ( Wallet_AmntT23 >= 0.5 )
				// {
					// float Wallet_Total23231 = (Wallet_AmntT23 / 2) + Player_AmntT3;
					// this.SetVariable("note",(Wallet_AmntT23 / 2));
					// player.SetVariable("Coins",Wallet_Total23231);
					// string msg_wallet0202 = "{ _Puid = _x getVariable ['GU_ID',0];  if (_Puid == '" + Player_UID + "') then { [_x,format['I have moved some coins from the wallet: %1',"+ Wallet_Total23231 +"],'colorFriendly'] call fnc_playerMessage; }; }forEach players;";
					// GetGame().ExecuteSQF(msg_wallet0202);
				// }
				// else
				// {
					// string msg_walletFAIL15 = "{ _Puid = _x getVariable ['GU_ID',0];  if (_Puid == '" + Player_UID + "') then { [_x,format['The Wallet is Empty!'],'colorImportant'] call fnc_playerMessage; }; }forEach players;";
					// GetGame().ExecuteSQF(msg_walletFAIL15);
				// }
			// }
			
			
			// if( action_id == 0708 ) 
			// {
				// string Kit_unbox0 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _whoisjew = (vehicle _x); _pos = getposATL _x; _itempack = ['Consumable_GardenLime','Drink_WaterBottle','FarmingHoe','Cultivation_PumpkinSeedsPack','Cultivation_TomatoSeedsPack','Medical_DisinfectantSpray']; { _item = createVehicle [_x, _pos, [], (random 1), 'CAN_COLLIDE']; _item setQuantity 1; }forEach _itempack; [_x,format['Farm Kit Unboxed! Items Dropped on ground'],'colorAction'] call fnc_playerMessage; }; }forEach players;";
				// GetGame().ExecuteSQF(Kit_unbox0);
				// this.Delete();
			// } 
			// if( action_id == 0709 ) 
			// {
				// string Kit_unbox1 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _whoisjew = (vehicle _x); _pos = getposATL _x; _itempack = ['TruckBattery','CarBattery','TireRepairKit','GlowPlug','SparkPlug','V3SWheel','CivSedanWheel']; { _item = createVehicle [_x, _pos, [], (random 1), 'CAN_COLLIDE']; _item setQuantity 1; }forEach _itempack; [_x,format['Car Parts Unboxed! Items Dropped on ground'],'colorAction'] call fnc_playerMessage; }; }forEach players;";
				// GetGame().ExecuteSQF(Kit_unbox1);
				// this.Delete();
			// }
			
			// if( action_id == 07098847 ) 
			// {
				// string Kit_unbox2 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _whoisjew = (vehicle _x); _pos = getposATL _x; _itempack = ['Tool_Hammer','Tool_Crowbar','Tool_Wrench','Hatchet']; { _item = createVehicle [_x, _pos, [], (random 1), 'CAN_COLLIDE']; _item setQuantity 1; }forEach _itempack; for '_ii' from 0 to 5 do { _Object = createVehicle ['Consumable_WoodenPlanks', [(getpos _x select 0),(getpos _x select 1),(getpos _x select 2) + 0.5], [], 0, 'CAN_COLLIDE']; _Object setQuantity 8; _ObjectNail = createVehicle ['Consumable_Nails', [(getpos _x select 0),(getpos _x select 1),(getpos _x select 2) + 0.5], [], 0, 'CAN_COLLIDE']; _ObjectNail setQuantity 50; }; [_x,format['Base Building Kit Unboxed! Items Dropped on ground'],'colorAction'] call fnc_playerMessage; }; }forEach players;";
				// GetGame().ExecuteSQF(Kit_unbox2);
				// this.Delete();
			// } 
			
			// //---------------------------------------------------------------------------
		// //}
	// }
}

