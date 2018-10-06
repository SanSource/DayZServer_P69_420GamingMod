class AnimalBase;

class PlayerBase2 extends PlayerBase // extends ManBase
{	
	// //private int m_LastShavedSeconds;
	// private int m_CachedPlaytime;
	// private bool m_HasBloodyHands;

	// //ref PluginExperience	m_ModuleExperience;
	// //private PluginPlayerStatus	m_ModulePlayerStatus;
	// PluginObjectsInteractionManager m_ModuleObjectsInteractionManager;
	
	// //autoptr PlayerStats 		m_PlayerStats;
	// //PluginRecipesManager 		m_ModuleRecipesManager;
	// //autoptr ModifiersManager	m_ModifiersManager;
	// //autoptr NotifiersManager 	m_NotifiersManager = NULL;
	// //autoptr ActionManager	 	m_ActionManager;
	// //autoptr PlayerAgentPool		m_AgentPool;
	// //autoptr Environment			m_Environment;
	// //autoptr StateManager		m_StateManager;
	// //autoptr DisplayStatus 		m_DisplayStatus = NULL;
	// //autoptr StaminaHandler		m_StaminaHandler;
	// //autoptr StanceIndicator		m_StanceIndicator;
	// //const int 					BLEEDING_TRESHOLD = 100;
	// //const int 					SHOCK_TRESHOLD = 1000;
	// //const int 					OVERLOAD_LIMIT = 30000;
	// //float 						m_CargoLoad;
	// //autoptr Param2<int,int> 	m_UAParam;
	// //autoptr Param2<float,float>	m_StaminaParam;
	// //autoptr Param1<string> 		m_UAParamMessage;
	// //autoptr StoneGenerator 		m_StoneGenerator;
	// string targName;
	// string Admin_Name;
	// float acc_dis;
	// vector pos_Target;
	// vector pos_User;
	// string targUID;
	// private string PlacementStat = "false";
	
	// autoptr Timer Action_Wait; // Collectmetal action Timer
	
	// //hologram
	// Hologram m_Hologram = NULL;
	
	// private autoptr map<int, float> m_Skills;		// int - skill id, int - skill experience points

	// // Temporary functions
	// // NTF_COUNT
	// //Param3<string, int, bool> m_MyNotifiers[NTF_COUNT];
	
	// //Sheduler
	// //float m_LastTick;
	
	// //crafting
	// //int m_RecipeID = -1;
	// //EntityAI m_Item1;
	// //EntityAI m_Item2;
	// bool m_Crafting;
	// //vector m_CraftingInitialPos;
	
	// //autoptr map<int,string> m_Recipes;
	
	// //--------------------------------------------------------------------------
	// // PLAYER DAMAGE EVENT HANDLING
	// //--------------------------------------------------------------------------
	// void EEOnSetCaptive(bool captive)
	// {
		// if ( GetGame().IsMultiplayer() && GetGame().IsServer() && captive )
		// {
			// GetGame().RPCSingleParam(this, RPC_ON_SET_CAPTIVE, NULL, this);
		// }
	// }

	// void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, string component, string ammo, vector modelPos)
	// {
		// PrintString("PLayerBase -> EEHitBy");
		
		// DamagePlayer(damageResult, source);
		// PrintString(component);
		// PrintString(modelPos.ToString());
	// }

	// void DamagePlayer(TotalDamageResult damageResult, EntityAI source)
	// {
		// if ( damageResult.GetDamage("","Blood") > BLEEDING_TRESHOLD )
		// {
			// Print("server BLEEDING");
			// if ( m_ModifiersManager ) m_ModifiersManager.ActivateModifier(MDF_BLEEDING);
		// }
		
		// if ( source.IsMan() )
		// {
			// ManBase man = source;
			// ItemBase item = man.GetEntityInHands();
			
			// if ( item  &&  item.HasEnergyManager() )
			// {
				// // Prototyping of energy based weapons. 
				
				// bool energy_consumed = item.GetCompEM().ConsumeEnergy( item.GetCompEM().GetEnergyUsage() );
				
				// if (energy_consumed)
				// {
					// if ( item.KindOf("EN5C_CattleProd") )
					// {
						// DecreaseHealth("GlobalHealth","Shock",2000);
					// }
					// if ( item.KindOf("EN5C_StunBaton") )
					// {
						// DecreaseHealth("GlobalHealth","Shock",4000);
					// }
					// if ( item.KindOf("EN5C_Chainsaw") )
					// {
						// DecreaseHealth("GlobalHealth","Shock",1000);
						// DecreaseHealth("GlobalHealth","Blood",1000);
						// DecreaseHealth("GlobalHealth","Health",500);
					// }
				// }
			// }
		// }
	// }


	// EntityAI FindCargoByBaseType(string searched_item)
	// {
		// EntityAI attachment;
		// string item_name;
		// int attcount = this.AttachmentsCount();
		
		// for (int att = 0; att < attcount; att++)
		// {	
			// attachment = this.GetAttachmentFromIndex(att);
			// if ( attachment.IsItemBase() )
			// {
				// item_name = attachment.GetType();
				// if ( GetGame().IsKindOf(item_name, searched_item) )
				// {
					// return attachment;
				// }
			// }
		// }
		// return NULL;
	// }

	// //---------------------------------------------------------------------------------------------------------------------------
	// void OnPlayerLoaded()
	// {
		// if ( GetGame().IsDebug() )
		// {
			// if ( !GetGame().IsMultiplayer()  &&  GetGame().GetPlayer()  &&  GetGame().GetPlayer().GetID() == this.GetID() )
			// {
				// PluginSceneManager scene_editor = GetPlugin(PluginSceneManager);
				// scene_editor.InitLoad();
			// }
		// }
	// }
	
	// /*void GBSaveSystem(string playerUID,int teamtype)
    // {

	 // string TeamTPE = "";
	 // TeamTPE = teamtype;
	 // TeamTPE = "'" + TeamTPE + "'";
	 // playerUID  = playerUID;
	 // //string playerUIDPrint = "'" + playerUID + "'";
	 // string strType  = "'" + this.GetType() + "'";

	 // FileHandle bigfile = OpenFile(("saves\\" + playerUID + ".dsv"), FILEMODE_WRITE);
		// if (bigfile != 0)
		// {    
			// FPrintln(bigfile, strType);
			// FPrintln(bigfile, TeamTPE);
		// }
		// CloseFile(bigfile);
    // }*/

	// //Placing 
	
	// //get hologram
	// Hologram GetHologram()
	// {
		// return m_Hologram;
	// }

	// void PlacingStart( string obj_name )
	// {
		// // Server side
		// if ( GetGame().IsMultiplayer() && GetGame().IsServer())
		// {
			// RPCSingleParam(RPC_PLACING_START, NULL, this);
		// }

			// //GetItemInHands().GetType()
		// // Server/Client side set hologram
		// if( GetItemInHands() != NULL && GetItemInHands().GetType() == obj_name )
		// {
			// m_Hologram = new Hologram( GetItemInHands().GetType(), this);
			// m_Hologram.GetProjectionObject().OnHologramItemCreated();
		// }
		// else
		// {
			// m_Hologram = new Hologram( obj_name, this);
			// m_Hologram.GetProjectionObject().OnHologramItemCreated();
		// }
	// }
	
	// void PlacingStop()
	// {
		// // Server side
		// if ( GetGame().IsMultiplayer() && GetGame().IsServer())
		// {
			// RPCSingleParam(RPC_PLACING_STOP, NULL, this);
		// }
		
		// // Server/Client side
		// delete m_Hologram;
	// }
	
	// void PlacingFinish( ItemBase item )
	// {
		// // Server side
		// if ( GetGame().IsMultiplayer() && GetGame().IsServer())
		// {
			// if ( m_Hologram != NULL )
			// {
			 // m_Hologram.Update();
			 // m_Hologram.PlaceObject( item, this );
			 // RPCSingleParam( RPC_PLACING_FINISH, NULL, this );
			 // Print("Item Placed.");
			// }
		// }
		// // local debug version, no multiplayer
		// else if( !GetGame().IsMultiplayer() )
		// {
			// if ( m_Hologram.IsColliding() ) 
			// {
				// //PrintString("IsColliding: "+ m_Hologram.IsColliding().ToString());	
				// //Print("Placing of object failed because object is colliding with environment.");
				// //return;
				// m_Hologram.PlaceObject( item, this );
				// RPCSingleParam( RPC_PLACING_FINISH, NULL, this );
				// Print("Item Placed.");
			// }
			// else
			// {
				// m_Hologram.PlaceObject(item, this );
				// Print("Item Placed.");
			// }
		// }

		// // Server/Client side
			// delete m_Hologram;

		// item.OnPlacementFinished( this );
	// }

	// //Delete
	// void TogglePlacingFromPlayer()
	// {
		// if ( m_ActionManager ) 
		// {
			// ActionTogglePlaceObject toggle_action = (ActionTogglePlaceObject) m_ActionManager.GetAction ( AT_TOGGLE_PLACE_OBJECT );
			// toggle_action.TogglePlacing ( this, NULL, GetItemInHands() );
		// }
	// }

	// //hologram is being placed
	// bool IsPlacingObject()
	// {
		// if ( m_Hologram != NULL )
		// {
			// return true;
		// }
		// else
		// {
			// return false;			
		// }
	// }


	// void EEOnWaterEnter()
	// {
		// if ( GetDayZGame().IsNewPlayer() && GetGame().IsServer() )
		// {
			// m_Environment.ProcessItemsWetness();
		// }
	// }



	// // -------------------------------------------------------------------------

	
	// // -------------------------------------------------------------------------
	// // 		USER ACTIONS
	// // -------------------------------------------------------------------------
	
	// override bool OnInputUserDataProcess(int userDataType, ParamsReadContext ctx)
	// {
		// PlayerBase player = GetGame().GetPlayer();
		
		// /*=Kit Builder Vars=*/
		// float Category_0;    //Back-pack
		// float Category_1;    //Topwear
		// float Category_2;	 //BottomWear
		// float Category_3;    //Headgear
		// float Category_4;    //Primary Weapon
		// float Category_5;    //Secondary Weapon
		// float Category_6;    //Ration/food
		// float Category_7;    //Medical Equipment
		// float Category_8;    //Vest
		
		// player.GetVariable("Category_0",Category_0);
		// player.GetVariable("Category_1",Category_1);
		// player.GetVariable("Category_2",Category_2);
		// player.GetVariable("Category_3",Category_3);
		// player.GetVariable("Category_4",Category_4);
		// player.GetVariable("Category_5",Category_5);
		// player.GetVariable("Category_6",Category_6);
		// player.GetVariable("Category_7",Category_7);
		// player.GetVariable("Category_8",Category_8);
		
		// string Admins_UID;
		// string Player_UID;
		// string typeof_trader;
		// string trader_location;
		// string Spectate_State;
		// this.GetVariable("GU_ID",Player_UID);
		// player.GetVariable("GU_ID",Admins_UID);
		// this.GetVariable("TypeOfTrader",typeof_trader);
		// this.GetVariable("TraderLoc",trader_location);
		// player.GetVariable("SpectateMode",Spectate_State);
		
		// float VIP_toggleStat;
		// player.GetVariable("VIP_togg",VIP_toggleStat);
		// float IS_VIP;
		// player.GetVariable("Is_VIP",IS_VIP);
		// float isCreatFaction;
		// player.GetVariable("FactionCreating",isCreatFaction);

		// if ( IS_VIP == 1 && VIP_toggleStat == 1 )
		// {
			        // ctx.AddAction("-=Close Menu=-", 46574675, NULL, 21, true, true);
					// ctx.AddAction("ShadowKnight Kit", 114654654301, NULL, 20, true, true);
					// ctx.AddAction("Chernarussian Kit", 6657878441, NULL, 19, true, true);
					// ctx.AddAction("KGB Kit", 663254878144, NULL, 18, true, true);
					// ctx.AddAction("Tactical Kit", 5487954878144, NULL, 17, true, true);
					// ctx.AddAction("Cyka blyat Kit", 5879864320154, NULL, 16, true, true);
			        // ctx.AddAction("NBC Kit", 11490301, NULL, 15, true, true);
					// ctx.AddAction("Survivalist Kit", 10490301, NULL, 14, true, true);
					// ctx.AddAction("Hunter Kit", 60490301, NULL, 13, true, true);
					// ctx.AddAction("Spetsnaz Kit", 60490331, NULL, 12, true, true);
					// ctx.AddAction("CQB Kit", 60490, NULL, 11, true, true);
					// ctx.AddAction("Assualt Kit", 60500, NULL, 10, true, true);
					// ctx.AddAction("Marksman Kit", 60510, NULL, 9, true, true);
					// ctx.AddAction("Sniper Kit", 60520, NULL, 8, true, true);
					// ctx.AddAction("FAL Green Gorka", 60580, NULL, 7, true, true);
					// ctx.AddAction("B95 Ghillie-Sniper", 60590, NULL, 6, true, true);
					// ctx.AddAction("VSS Ghillie-Sniper", 60600, NULL, 5, true, true);
					// ctx.AddAction("Heal Myself", 50500, NULL, 4, true, true);
					// ctx.AddAction("Teleport | Cherno", 50510, NULL, 3, true, true);
					// ctx.AddAction("Teleport | Electro", 660500, NULL, 2, true, true);
					// ctx.AddAction("Teleport | Lopatino", 50560, NULL, 1, true, true);
					// ctx.AddAction("Teleport | Staroye", 50690, NULL, 0, true, true);
		// }
		// else if ( IS_VIP == 2 && VIP_toggleStat == 1 )
		// {
					// ctx.AddAction("-=Close Menu=-", 46574675, NULL, 16, true, true);
					// ctx.AddAction("ShadowKnight Kit", 114654654301, NULL, 20, true, true);
					// ctx.AddAction("Chernarussian Kit", 6657878441, NULL, 19, true, true);
					// ctx.AddAction("KGB Kit", 663254878144, NULL, 18, true, true);
					// ctx.AddAction("Tactical Kit", 5487954878144, NULL, 17, true, true);
					// ctx.AddAction("Cyka blyat Kit", 5879864320154, NULL, 16, true, true);
					// ctx.AddAction("NBC Kit", 12490301, NULL, 15, true, true);
					// ctx.AddAction("Survivalist Kit", 20490301, NULL, 14, true, true);
					// ctx.AddAction("Hunter Kit", 60490312, NULL, 13, true, true);
					// ctx.AddAction("Spetsnaz Kit", 60490332, NULL, 12, true, true);
					// ctx.AddAction("CQB Kit", 604902, NULL, 11, true, true);
					// ctx.AddAction("Assualt Kit", 605002, NULL, 10, true, true);
					// ctx.AddAction("Marksman Kit", 605102, NULL, 9, true, true);
					// ctx.AddAction("Sniper Kit", 605202, NULL, 8, true, true);
					// ctx.AddAction("FAL Green Gorka", 605802, NULL, 7, true, true);
					// ctx.AddAction("B95 Ghillie-Sniper", 605902, NULL, 6, true, true);
					// ctx.AddAction("VSS Ghillie-Sniper", 606002, NULL, 5, true, true);
					// ctx.AddAction("Heal Myself", 50500, NULL, 4, true, true);
					// ctx.AddAction("Teleport | Cherno", 505102, NULL, 3, true, true);
					// ctx.AddAction("Teleport | Electro", 6605002, NULL, 2, true, true);
					// ctx.AddAction("Teleport | Lopatino", 505602, NULL, 1, true, true);
					// ctx.AddAction("Teleport | Staroye", 506902, NULL, 0, true, true);
		// }
		// else if ( IS_VIP == 3 && VIP_toggleStat == 1 )
		// {
					// ctx.AddAction("-= Close Menu =-", 46574675, NULL, 22, true, true);
					// ctx.AddAction("-= Kit Builder =-", 665479, NULL, 21, true, true);
					// ctx.AddAction("ShadowKnight Kit", 114654654301, NULL, 20, true, true);
					// ctx.AddAction("Chernarussian Kit", 6657878441, NULL, 19, true, true);
					// ctx.AddAction("KGB Kit", 663254878144, NULL, 18, true, true);
					// ctx.AddAction("Tactical Kit", 5487954878144, NULL, 17, true, true);
					// ctx.AddAction("Cyka blyat Kit", 5879864320154, NULL, 16, true, true);
					// ctx.AddAction("NBC Kit", 13490301, NULL, 15, true, true);
					// ctx.AddAction("Survivalist Kit", 30490301, NULL, 14, true, true);
					// ctx.AddAction("Hunter Kit", 60490323, NULL, 13, true, true);
					// ctx.AddAction("Spetsnaz Kit", 60490333, NULL, 12, true, true);
					// ctx.AddAction("CQB Kit", 604903, NULL, 13, true, true);
					// ctx.AddAction("Assualt Kit", 605003, NULL, 12, true, true);
					// ctx.AddAction("Marksman Kit", 605103, NULL, 11, true, true);
					// ctx.AddAction("Sniper Kit", 605203, NULL, 10, true, true);
					// ctx.AddAction("FAL Green Gorka", 605803, NULL, 9, true, true);
					// ctx.AddAction("B95 Ghillie-Sniper", 605903, NULL, 8, true, true);
					// ctx.AddAction("VSS Ghillie-Sniper", 606003, NULL, 7, true, true);
					// ctx.AddAction("Heal Myself", 50500, NULL, 6, true, true);
					// ctx.AddAction("Teleport | Cherno", 505103, NULL, 5, true, true);
					// ctx.AddAction("Teleport | Electro", 6605003, NULL, 4, true, true);
					// ctx.AddAction("Teleport | Lopatino", 505603, NULL, 3, true, true);
					// ctx.AddAction("Teleport | Staroye", 506903, NULL, 2, true, true);
					// ctx.AddAction("Teleport | Balota", 6605103, NULL, 1, true, true);
					// ctx.AddAction("Teleport | Zelenogorsk", 6605203, NULL, 0, true, true);
		// }

		// /*==================Kit Builder Actions========================*/
		// if ( IS_VIP == 3 && Category_0 == 1 )
		// {
			// //Back Pack Selection
			// ctx.AddAction("-= Cancel/Exit =-", 1147852, NULL, 12, true, true);
			// ctx.AddAction("-= Next Category =-", 33254, NULL, 11, true, true);
			// ctx.AddAction("BagTaloonBlue", 0011681, NULL, 10, true, true);
			// ctx.AddAction("BagTaloonGreen", 0011682, NULL, 9, true, true);
			// ctx.AddAction("BagTortilla", 0011683, NULL, 8, true, true);
			// ctx.AddAction("BagImprovised", 0011684, NULL, 7, true, true);
			// ctx.AddAction("BagImprovisedFur", 0011685, NULL, 6, true, true);
			// ctx.AddAction("DrybagBlack", 0011686, NULL, 5, true, true);
			// ctx.AddAction("DrybagBlue", 0011687, NULL, 4, true, true);
			// ctx.AddAction("DrybagGreen", 0011688, NULL, 3, true, true);
			// ctx.AddAction("BagHunting", 0011689, NULL, 2, true, true);
			// ctx.AddAction("BagMountainBlue", 00116810, NULL, 1, true, true);
			// ctx.AddAction("BagMountainGreen", 00116811, NULL, 0, true, true);
		// }
		
		// if (IS_VIP == 3 && Category_1 == 1)
		// {
			// //Topwear
			// ctx.AddAction("-= Cancel/Exit =-", 1147852, NULL, 18, true, true);
			// ctx.AddAction("-= Next Category =-", 332545, NULL, 17, true, true);
			// ctx.AddAction("Tactical Shirt Grey", 0012681, NULL, 16, true, true);
			// ctx.AddAction("Tactical Shirt Black", 0012682, NULL, 15, true, true);
			// ctx.AddAction("Tactical Shirt Olive", 0012683, NULL, 14, true, true);
			// ctx.AddAction("Tactical Shirt Tan", 0012684, NULL, 13, true, true);
			// ctx.AddAction("M65 Jacket Black", 0012685, NULL, 12, true, true);
			// ctx.AddAction("M65 Jacket Khaki", 0012686, NULL, 11, true, true);
			// ctx.AddAction("M65 Jacket Olive", 0012687, NULL, 10, true, true);
			// ctx.AddAction("M65 Jacket Tan", 0012688, NULL, 9, true, true);
			// ctx.AddAction("Gorka Jacket summer", 0012689, NULL, 8, true, true);
			// ctx.AddAction("Gorka Jacket flat", 00126810, NULL, 7, true, true);
			// ctx.AddAction("Gorka Jacket autumn", 00126811, NULL, 6, true, true);
			// ctx.AddAction("Gorka Jacket PautRev", 00126812, NULL, 5, true, true);
			// ctx.AddAction("Hunting Jacket Autumn", 00126813, NULL, 4, true, true);
			// ctx.AddAction("Hunting Jacket Brown", 00126814, NULL, 3, true, true);
			// ctx.AddAction("Hunting Jacket Spring", 00126815, NULL, 2, true, true);
			// ctx.AddAction("USMC Jacket Desert", 00126816, NULL, 1, true, true);
			// ctx.AddAction("USMC Jacket Woodland", 00126817, NULL, 0, true, true);
		// }
		
		// if (IS_VIP == 3 && Category_2 == 1)
		// {
			// //BottomWear
			// ctx.AddAction("-= Cancel/Exit =-", 1147852, NULL, 18, true, true);
			// ctx.AddAction("-= Next Category =-", 3325451, NULL, 17, true, true);
			// ctx.AddAction("Cargo Pants Beige", 0013681, NULL, 16, true, true);
			// ctx.AddAction("Cargo Pants Black", 0013682, NULL, 15, true, true);
			// ctx.AddAction("Cargo Pants Blue", 0013683, NULL, 14, true, true);
			// ctx.AddAction("Cargo Pants Green", 0013684, NULL, 13, true, true);
			// ctx.AddAction("Cargo Pants Grey", 0013685, NULL, 12, true, true);
			// ctx.AddAction("ttsko pants Beige", 0013686, NULL, 11, true, true);
			// ctx.AddAction("Hunter Pants Autumn", 0013687, NULL, 10, true, true);
			// ctx.AddAction("Hunter Pants Brown", 0013688, NULL, 8, true, true);
			// ctx.AddAction("Hunter Pants Spring", 0013689, NULL, 7, true, true);
			// ctx.AddAction("Hunter Pants Summer", 00136810, NULL, 6, true, true);
			// ctx.AddAction("Gorka pants summer", 00136811, NULL, 5, true, true);
			// ctx.AddAction("Gorka pants autumn", 00136812, NULL, 4, true, true);
			// ctx.AddAction("Gorka pants flat", 00136813, NULL, 3, true, true);
			// ctx.AddAction("Gorka pants PautRev", 00136814, NULL, 2, true, true);
			// ctx.AddAction("USMC Pants Desert", 00136815, NULL, 1, true, true);
			// ctx.AddAction("USMC Pants Woodland", 00136816, NULL, 0, true, true);
		// }
		
		// if (IS_VIP == 3 && Category_3 == 1)
		// {
			// //Headgear
			// ctx.AddAction("-= Cancel/Exit =-", 1147852, NULL, 17, true, true);
			// ctx.AddAction("-= Next Category =-", 33254511, NULL, 16, true, true);
			// ctx.AddAction("BallisticHelmet Green", 0014681, NULL, 15, true, true);
			// ctx.AddAction("BallisticHelmet Black", 0014682, NULL, 14, true, true);
			// ctx.AddAction("BallisticHelmet UN", 0014683, NULL, 13, true, true);
			// ctx.AddAction("BeanieHat Black", 0014684, NULL, 12, true, true);
			// ctx.AddAction("BeanieHat Blue", 0014685, NULL, 13, true, true);
			// ctx.AddAction("BeanieHat Brown", 0014686, NULL, 12, true, true);
			// ctx.AddAction("BeanieHat Green", 0014687, NULL, 11, true, true);
			// ctx.AddAction("Military Beret", 0014688, NULL, 10, true, true);
			// ctx.AddAction("Military Beret UN", 0014689, NULL, 9, true, true);
			// ctx.AddAction("Military Beret NZ", 00146810, NULL, 8, true, true);
			// ctx.AddAction("Military Beret ChDKZ", 00146811, NULL, 7, true, true);
			// ctx.AddAction("Military Beret CDF", 00146812, NULL, 6, true, true);
			// ctx.AddAction("CowboyHat Brown", 00146813, NULL, 5, true, true);
			// ctx.AddAction("CowboyHat black", 00146814, NULL, 4, true, true);
			// ctx.AddAction("CowboyHat darkBrown", 00146815, NULL, 3, true, true);
			// ctx.AddAction("CowboyHat green", 00146816, NULL, 2, true, true);
			// ctx.AddAction("GorkaHelmet Green", 00146817, NULL, 1, true, true);
			// ctx.AddAction("GorkaHelmet Black", 00146818, NULL, 0, true, true);
		// }
		
		// if (IS_VIP == 3 && Category_4 == 1)
		// {
			// //PrimaryWeapon
			// ctx.AddAction("-= Cancel/Exit =-", 1147852, NULL, 15, true, true);
			// ctx.AddAction("-= Next Category =-", 332545112, NULL, 14, true, true);
			// ctx.AddAction("Steyr Aug", 0015681, NULL, 13, true, true);
			// ctx.AddAction("M4A1", 0015682, NULL, 12, true, true);
			// ctx.AddAction("AK101", 0015683, NULL, 11, true, true);
			// ctx.AddAction("AK74", 0015684, NULL, 10, true, true);
			// ctx.AddAction("AKM", 0015685, NULL, 9, true, true);
			// ctx.AddAction("B95", 0015686, NULL, 8, true, true);
			// ctx.AddAction("CZ527", 0015687, NULL, 7, true, true);
			// ctx.AddAction("FAL", 0015688, NULL, 6, true, true);
			// ctx.AddAction("Mosin9130", 0015689, NULL, 5, true, true);
			// ctx.AddAction("Scout Rifle", 00156810, NULL, 4, true, true);
			// ctx.AddAction("SKS", 00156811, NULL, 3, true, true);
			// ctx.AddAction("SVD", 00156812, NULL, 2, true, true);
			// ctx.AddAction("VSS", 00156813, NULL, 1, true, true);
			// ctx.AddAction("Winchester70", 00156814, NULL, 0, true, true);
		// }
		
		// if (IS_VIP == 3 && Category_5 == 1)
		// {
			// //SecondaryWeapon
			// ctx.AddAction("-= Cancel/Exit =-", 1147852, NULL, 11, true, true);
			// ctx.AddAction("-= Next Category =-", 33545112, NULL, 10, true, true);
			// ctx.AddAction("Engraved 1911", 0016681, NULL, 9, true, true);
			// ctx.AddAction("Golden Eagle", 0016682, NULL, 8, true, true);
			// ctx.AddAction("FNX45", 0016683, NULL, 7, true, true);
			// ctx.AddAction("Glock19", 0016684, NULL, 6, true, true);
			// ctx.AddAction("Magnum", 0016685, NULL, 5, true, true);
			// ctx.AddAction("Red9", 0016686, NULL, 4, true, true);
			// ctx.AddAction("CZ61", 0016687, NULL, 3, true, true);
			// ctx.AddAction("MP5K", 0016688, NULL, 2, true, true);
			// ctx.AddAction("UMP45", 0016689, NULL, 1, true, true);
			// ctx.AddAction("AKS74U", 00166810, NULL, 0, true, true);
		// }
		
		// if (IS_VIP == 3 && Category_6 == 1)
		// {
			// //Ration/food
			// ctx.AddAction("-= Cancel/Exit =-", 1147852, NULL, 6, true, true);
			// ctx.AddAction("-= Next Category =-", 633545112, NULL, 5, true, true);
			// ctx.AddAction("Phat Phuck", 0017681, NULL, 4, true, true);
			// ctx.AddAction("Vegan Pack", 0017682, NULL, 3, true, true);
			// ctx.AddAction("Fishy Female", 0017683, NULL, 2, true, true);
			// ctx.AddAction("Rice Picker", 0017684, NULL, 1, true, true);
			// ctx.AddAction("Apple Glitcher", 0017685, NULL, 0, true, true);
		// }
		
		// if (IS_VIP == 3 && Category_7 == 1)
		// {
			// //Medical
			// ctx.AddAction("-= Cancel/Exit =-", 1147852, NULL, 17, true, true);
			// ctx.AddAction("-= Next Category =-", 63235435112, NULL, 16, true, true);
			// ctx.AddAction("Basic Medical Tools", 0018681, NULL, 2, true, true);
			// ctx.AddAction("Noobie Medical Tools", 0018682, NULL, 1, true, true);
			// ctx.AddAction("Veteran Medical Tools", 0018683, NULL, 0, true, true);
		// }
		
		// if (IS_VIP == 3 && Category_8 == 1)
		// {
			// //Vest
			// ctx.AddAction("-= Cancel/Exit =-", 1147852, NULL, 10, true, true);
			// ctx.AddAction("Plate Carrier Vest", 0019681, NULL, 8, true, true);
			// ctx.AddAction("Smersh Vest", 0019682, NULL, 7, true, true);
			// ctx.AddAction("Assault Vest Black", 0019683, NULL, 6, true, true);
			// ctx.AddAction("Assault Vest Camo", 0019684, NULL, 5, true, true);
			// ctx.AddAction("Assault Vest Khaki", 0019685, NULL, 4, true, true);
			// ctx.AddAction("Assault Vest Olive", 0019686, NULL, 3, true, true);
			// ctx.AddAction("Press Vest LightBlue", 0019687, NULL, 2, true, true);
			// ctx.AddAction("High CapacityVest Black", 0019688, NULL, 1, true, true);
			// ctx.AddAction("High CapacityVest Olive", 0019689, NULL, 0, true, true);
		// }
		
		// //--------------------------------------------------------------
		// /*================================Faction Create Functions===============================*/
		// if ( isCreatFaction == 1 && player == player)
		// {
			// autoptr array<Man> Nearbyplayers = new array<Man>;
			// GetGame().GetPlayers( Nearbyplayers );
			// ctx.AddAction("Nearby players 5m:", 0, NULL, 5454545, true, true);
			// ctx.AddAction("-= Close Menu =-", 33664478, NULL, 0, true, true);
			
			// for ( int jk = 0; jk < Nearbyplayers.Count(); ++jk )
			// {
				// vector pos_playerG = player.GetPosition();
				// vector pos_target = Nearbyplayers.Get(jk).GetPosition();
				
				// float distance_Between = vector.Distance( pos_playerG, pos_target );
				// if ( distance_Between <= 5 && (Nearbyplayers.Get(jk)) != player )
				// {
					// string TargetPName;
					// string TargetPUID;
					
					// PlayerBase myTarget = Nearbyplayers.Get(jk);
					// myTarget.GetVariable("Cli_Name",TargetPName);
					// myTarget.GetVariable("GU_ID",TargetPUID);
					
					// autoptr Param2<PlayerBase,string> PPInfo = new Param2<PlayerBase,string>(myTarget,TargetPUID);
					// ctx.AddAction(TargetPName, 323147855, PPInfo, jk, true, true);
				// }
			// }
		// }
		
		// /*if (Admin_UIDS.Find(Admins_UID) >= 0 && Spectate_State == "ON")
		// {
			// autoptr array<Man> players = new array<Man>;
			// GetGame().GetPlayers( players );
			// for ( int jk = 0; jk < players.Count(); ++jk )
			// {
			// vector pos_playerG = player.GetPosition();
			// vector pos_target = players.Get(jk).GetPosition();
			// float distanceH = vector.Distance( pos_playerG, pos_target );
			// players.Get(jk).GetVariable("Cli_Name",targName);
			// ctx.AddAction(targName + " " + "[" + distanceH + "m]", 92, NULL, 1002, false, false);
			// }
			// ctx.AddAction("Exit Spectate Mode", 93, NULL, 1003, false, false);
		// }*/
		
		// if ( this.IsKindOf("SurvivorPartsMaleAfrican") && typeof_trader == "Weapons")
		// {
		 // ctx.AddAction("AmmoBox:750 Coins", 0715, NULL, 1009, true, false);   // TEXT || ACTION ID || PARAMS || PRIORTY FLOAT || SHOW WINDOW || HIDE ON USE
		 // ctx.AddAction("AKM:900 Coins", 0701, NULL, 1008, true, false);
		 // ctx.AddAction("M4A1:1000  Coins", 0702, NULL, 1007, true, false);
		 // ctx.AddAction("Ak101:850 Coins", 0703, NULL, 1006, true, false);
		 // ctx.AddAction("Aug:900 Coins", 0704, NULL, 1005, true, false);
		 // ctx.AddAction("Wini:800 Coins", 0705, NULL, 1004, true, false);
		 // ctx.AddAction("Check My Balance", 0707, NULL, 1002, true, false);
		// }
		
		// if ( this.IsKindOf("SurvivorPartsMaleAfrican") && typeof_trader == "Medical_Food")
		// {
			// ctx.AddAction("BaseBuilding Tools:1500 Coins", 663488, NULL, 6, true, false);
			// ctx.AddAction("Medkit:200 Coins", 0807, NULL, 5, true, false);
			// //ctx.AddAction("Morphine:25 Coins", 0809, NULL, 4, true, false);
			// ctx.AddAction("Splint:10 Coins", 0810, NULL, 3, true, false);
			// ctx.AddAction("FoodPack:250 Coins", 0806, NULL, 2, true, false);
			// ctx.AddAction("FarmingKit:250 Coins", 0713, NULL, 1, true, false);
			// ctx.AddAction("Check My Balance", 0707, NULL, 0, true, false);
		// }
		
		// if ( this.IsKindOf("SurvivorPartsMaleAfrican") && typeof_trader == "Banker")
		// {
			// ctx.AddAction("Green Barrel:500", 070888, NULL, 14, true, false);
			// ctx.AddAction("Yellow Barrel:500", 070899, NULL, 13, true, false);
			// ctx.AddAction("CarTent:1500", 0709, NULL, 12, true, false);
			// ctx.AddAction("SmallTent:1000", 0712, NULL, 11, true, false);
			// ctx.AddAction("MiliTent:2000", 0708, NULL, 10, true, false);
			// ctx.AddAction("Wallet:50", 0710, NULL, 9, true, true);
			
			// ctx.AddAction("Check My Bank Balance", 0211478, NULL, 8, true, true);
			// ctx.AddAction("Deposit All of My Balance", 0211475, NULL, 7, true, true);
			// ctx.AddAction("Deposit 25 Coins", 0211474, NULL, 6, true, true);
			// ctx.AddAction("Deposit 50 Coins", 0211473, NULL, 5, true, true);
			// ctx.AddAction("Deposit 100 Coins", 0211472, NULL, 4, true, true);
			
			// ctx.AddAction("Withdraw All of My Balance", 0411475, NULL, 3, true, true);
			// ctx.AddAction("Withdraw 25 Coins", 0411474, NULL, 2, true, true);
			// ctx.AddAction("Withdraw 50 Coins", 0411473, NULL, 1, true, true);
			// ctx.AddAction("Withdraw 100 Coins", 0411472, NULL, 0, true, true);
		// }
		
		// if ( this.IsKindOf("SurvivorPartsMaleAfrican") && typeof_trader == "Clothing")
		// {
			// ctx.AddAction("Hunter Outfit: 500", 9901, NULL, 7, true, false);
			// ctx.AddAction("Gorka Outfit: 550", 9902, NULL, 6, true, false);
			// ctx.AddAction("Police Outfit: 600", 9903, NULL, 5, true, false);
			// ctx.AddAction("M65 Black Outfit: 650", 9904, NULL, 4, true, false);
			// ctx.AddAction("M65 Olive Outfit: 700", 9905, NULL, 3, true, false);
			// ctx.AddAction("M65 Tan Outfit: 750", 9906, NULL, 2, true, false);
			// ctx.AddAction("WoodLand Ghillie Suit: 1000", 9907, NULL, 1, true, false);
		// }
		
		// if ( this.IsKindOf("SurvivorPartsMaleAfrican") && typeof_trader == "Vehicle")
		// {
			// if ( trader_location == "Staroye" )
			// {
				// ctx.AddAction("V3S:4500 Coins", 3204, NULL, 5, true, false);   // TEXT || ACTION ID || PARAMS || PRIORTY FLOAT || SHOW WINDOW || HIDE ON USE
				// ctx.AddAction("Sedan:3500 Coins", 3203, NULL, 4, true, false);
				// ctx.AddAction("Offroad:4000 Coins", 3202, NULL, 3, true, false);
				// ctx.AddAction("V3SCargo:5000 Coins", 3201, NULL, 2, true, false);
				// ctx.AddAction("CarParts:300 Coins", 0714, NULL, 1, true, false);
				// ctx.AddAction("Check My Balance", 0707, NULL, 0, true, false);
			// }
			
			// if ( trader_location == "Stary" )
			// {
				// ctx.AddAction("V3S:4500 Coins", 4204, NULL, 5, true, false);   // TEXT || ACTION ID || PARAMS || PRIORTY FLOAT || SHOW WINDOW || HIDE ON USE
				// ctx.AddAction("Sedan:3500 Coins", 4203, NULL, 4, true, false);
				// ctx.AddAction("Offroad:4000 Coins", 4202, NULL, 3, true, false);
				// ctx.AddAction("V3SCargo:5000 Coins", 4201, NULL, 2, true, false);
				// ctx.AddAction("CarParts:300 Coins", 0714, NULL, 1, true, false);
				// ctx.AddAction("Check My Balance", 0707, NULL, 0, true, false);
			// }
			
			// if ( trader_location == "Lopatino" )
			// {
				// ctx.AddAction("V3S:4500 Coins", 5204, NULL, 5, true, false);   // TEXT || ACTION ID || PARAMS || PRIORTY FLOAT || SHOW WINDOW || HIDE ON USE
				// ctx.AddAction("Sedan:3500 Coins", 5203, NULL, 4, true, false);
				// ctx.AddAction("Offroad:4000 Coins", 5202, NULL, 3, true, false);
				// ctx.AddAction("V3SCargo:5000 Coins", 5201, NULL, 2, true, false);
				// ctx.AddAction("CarParts:300 Coins", 0714, NULL, 1, true, false);
				// ctx.AddAction("Check My Balance", 0707, NULL, 0, true, false);
			// }
		// }
		
		// ItemBase Triggeritem;
		// Triggeritem = player.GetEntityInHands();
		
		// EntityAI TargetVeh;
		// TargetVeh = GetGame().GetPlayerCursorObject(player);
		// if ( Triggeritem != NULL && TargetVeh != NULL && Triggeritem.IsKindOf("Tool_HandcuffKeys") && TargetVeh.IsKindOf("Car_DZ"))
		// {
			// string note_UID;
			// string veh_OWNER;
			// Triggeritem.GetVariable("note",note_UID);
			// TargetVeh.GetVariable("ownerID",veh_OWNER);
		// }
		
		// // Gasoline/Pour execution
		// if ( Triggeritem != NULL && Triggeritem.IsKindOf("CanisterGasoline"))
		// {
			// if ( TargetVeh != NULL && TargetVeh.IsKindOf("SurvivorBase"))
			// {
				// TargetVeh.GetVariable("GU_ID",targUID);
				// pos_Target = TargetVeh.GetPosition();
				// pos_User = this.GetPosition();
			// }
			// if ( TargetVeh != NULL && TargetVeh.IsKindOf("SurvivorBase") && targUID != Player_UID)
			// {
				// string RRtype;
				// if ( TargetVeh.IsCaptive() && TargetVeh.IsAlive() )
				// {
					// float GasQuan;
					// string GasType;
					// Triggeritem.GetVariable("quantity",GasQuan);
					// Triggeritem.GetVariable("liquidType",GasType);
					// if ( GasQuan >= 10000 && GasType == "gasoline")
					// {
						// acc_dis = vector.Distance( pos_User, pos_Target );
						// if ( acc_dis <=1.5 )
						// {
							// ctx.AddAction("Pour Gasoline on victim!", 55789, NULL, 0, true, false);
						// }
					// }
					// else if (  GasQuan <= 9998 && GasType == "gasoline")
					// {
						// acc_dis = vector.Distance( pos_User, pos_Target );
						// if ( acc_dis <=1.5 )
						// {
							// ctx.AddAction("There is not enough gasoline!", 5578900, NULL, 0, true, false);
						// }
					// }
					// else if (  GasType != "gasoline" )
					// {
						// acc_dis = vector.Distance( pos_User, pos_Target );
						// if ( acc_dis <=1.5 )
						// {
							// ctx.AddAction("You can not burn someone with water!", 5578900, NULL, 0, true, false);
						// }
					// }
				// }
			// }
		// }
		// else if ( Triggeritem != NULL && Triggeritem.IsKindOf("Drink_WaterBottle") )
		// {
			// if ( TargetVeh != NULL && TargetVeh.IsKindOf("SurvivorBase"))
			// {
				// TargetVeh.GetVariable("GU_ID",targUID);
				// pos_Target = TargetVeh.GetPosition();
				// pos_User = this.GetPosition();
			// }
			// if ( TargetVeh != NULL && TargetVeh.IsKindOf("SurvivorBase") && targUID != Player_UID)
			// {
				// string RRtypeB;
				// if ( TargetVeh.IsCaptive() && TargetVeh.IsAlive())
				// {
					// float GasQuanJ;
					// string GasTypeJ;
					// Triggeritem.GetVariable("quantity",GasQuanJ);
					// Triggeritem.GetVariable("liquidType",GasTypeJ);
					// if ( GasQuanJ >= 1000 && GasTypeJ == "gasoline")
					// {
						// acc_dis = vector.Distance( pos_User, pos_Target );
						// if ( acc_dis <=1.5 )
						// {
							// ctx.AddAction("Pour Gasoline on victim!", 55789, NULL, 0, true, false);
						// }
					// }
					// else if (  GasQuanJ <= 9998 && GasTypeJ == "gasoline")
					// {
						// acc_dis = vector.Distance( pos_User, pos_Target );
						// if ( acc_dis <=1.5 )
						// {
							// ctx.AddAction("There is not enough gasoline!", 5578900, NULL, 0, true, false);
						// }
					// }
					// else if (  GasTypeJ != "gasoline" )
					// {
						// acc_dis = vector.Distance( pos_User, pos_Target );
						// if ( acc_dis <=1.5 )
						// {
							// ctx.AddAction("You can not burn someone with water!", 5578900, NULL, 0, true, false);
						// }
					// }
				// }
			// }
		// }
		
		// // Gasoline/burn execution
		// if ( Triggeritem != NULL && Triggeritem.IsKindOf("Consumable_Matchbox"))
		// {
			// if ( TargetVeh != NULL && TargetVeh.IsKindOf("SurvivorBase"))
			// {
				// TargetVeh.GetVariable("GU_ID",targUID);
				// pos_Target = TargetVeh.GetPosition();
				// pos_User = this.GetPosition();
			// }
			// if ( TargetVeh != NULL && TargetVeh.IsKindOf("SurvivorBase") && targUID != Player_UID)
			// {
				// string RRtype2;
				// if ( TargetVeh.IsCaptive() && TargetVeh.IsAlive())
				// {
					// float Canbrun;
					// this.GetVariable("InDanger",Canbrun);
					// if ( Canbrun > 1)
					// {
						// acc_dis = vector.Distance( pos_User, pos_Target );
						// if ( acc_dis <=1.5 )
						// {
							// ctx.AddAction("Light victim on fire!", 55789778, NULL, 0, true, false);
						// }
					// }
					// else
					// {
						// acc_dis = vector.Distance( pos_User, pos_Target );
						// if ( acc_dis <=1.5 )
						// {
							// ctx.AddAction("I need to pour gasoline over my victim", 5578900, NULL, 0, true, false);
						// }
					// }
				// }
			// }
		// }
		// else if ( Triggeritem != NULL && Triggeritem.IsKindOf("Machete") )
		// {
			// if ( TargetVeh != NULL && TargetVeh.IsKindOf("SurvivorBase"))
			// {
				// TargetVeh.GetVariable("GU_ID",targUID);
				// pos_Target = TargetVeh.GetPosition();
				// pos_User = this.GetPosition();
			// }
			// if ( TargetVeh != NULL && TargetVeh.IsKindOf("SurvivorBase") && targUID != Player_UID)
			// {
				// string RRtype4;
				// if ( TargetVeh.IsCaptive() && TargetVeh.IsAlive() )
				// {
					// acc_dis = vector.Distance( pos_User, pos_Target );
					// if ( acc_dis <=1.5 )
					// {
					 // ctx.AddAction("Cut Victims throat", 5578977889, NULL, 0, true, false);
					// }
				// }
			// }
		// }
		
		// /*================================================================================*/
		// //                           Vehicle LOCK System
		// if ( Triggeritem != NULL && Triggeritem.IsKindOf("Tool_HandcuffKeys"))
		// {
			// if ( TargetVeh != NULL && TargetVeh.IsKindOf("Car_DZ"))
			// {
				// if ( note_UID == veh_OWNER)
				// {
				// ctx.AddAction("Lock Vehicle", 00, NULL, 1001, true, true);
				// ctx.AddAction("Unlock Vehicle", 01, NULL, 1000, true, true);
				// }
			// }
		// }
		// /*==================================================================================*/
		// //                               Sell Weed Functions/Banker Functions
		// if ( Triggeritem != NULL && Triggeritem.IsKindOf("Fruit_Cannabis"))
		// {
			// if ( TargetVeh != NULL && TargetVeh.IsKindOf("SurvivorPartsMaleAfrican") && typeof_trader == "Banker")
			// {

				// ctx.AddAction("Sell Item", 070, NULL, 1004, true, true);
				// ctx.AddAction("Sell All", 071, NULL, 1003, true, true);
				// ctx.AddAction("Check My Balance", 0707, NULL, 1002, true, false);
			// }
		// }
		// /*=======================================================================================*/
		// //                      Barrel Advanced placement functions
		// if ( Triggeritem != NULL && Triggeritem.IsKindOf("Container_BarrelBase") && PlacementStat == "false")
		// {
			// ctx.AddAction("Start Placing", 16, NULL, 1003, true, true);
		// }
		
		// if ( Triggeritem != NULL && Triggeritem.IsKindOf("Container_BarrelBase") && PlacementStat == "true")
		// {
			// ctx.AddAction("Finish Placing", 17, NULL, 1002, true, false);
			// ctx.AddAction("Cancel Placement", 18, NULL, 1001, true, false);
		// }
		
		// /*=======================================================================================*/
		// //                      FENCE Advanced placement functions
		// if ( Triggeritem != NULL && Triggeritem.IsKindOf("Fence") && PlacementStat == "false")
		// {
			// ctx.AddAction("Start Placing", 16, NULL, 1003, true, true);
		// }
		
		// if ( Triggeritem != NULL && Triggeritem.IsKindOf("Fence") && PlacementStat == "true")
		// {
			// ctx.AddAction("Finish Placing", 17, NULL, 1002, true, false);
			// ctx.AddAction("Cancel Placement", 18, NULL, 1001, true, false);
		// }
		
		// /*=======================================================================================*/
		// //                      H-Barrier Advanced placement functions - DEBUG -
		// if ( Triggeritem != NULL && Triggeritem.IsKindOf("EN5C_HescoBox") && PlacementStat == "false")
		// {
			// ctx.AddAction("Start Placing", 16, NULL, 1003, true, true);
		// }
		
		// if ( Triggeritem != NULL && Triggeritem.IsKindOf("EN5C_HescoBox") && PlacementStat == "true")
		// {
			// ctx.AddAction("Finish Placing", 17, NULL, 1002, true, false);
			// ctx.AddAction("Cancel Placement", 18, NULL, 1001, true, false);
		// }
		// /*================================Collect scarps Functions===============================*/
		// if ( TargetVeh != NULL && TargetVeh.IsKindOf("Wreck_Base") && Triggeritem != NULL && Triggeritem.IsKindOf("SledgeHammer"))
		// {
			// vector pos_Person = player.GetPosition();
			// vector pos_targetVehicle = TargetVeh.GetPosition();
			// float distanceBetween = vector.Distance( pos_Person, pos_targetVehicle );
			// float isUseable;
			// TargetVeh.GetVariable("isUseable",isUseable);
			// if ( distanceBetween <= 5 && isUseable != 1)
			// {
				// ctx.AddAction("Collect Metal Scraps", 1738654, NULL, 0, true, false);
			// }
		// }
		// /*=======================================================================================*/
		// if ( GetDayZGame().IsNewPlayer() && GetGame().IsServer() && m_ActionManager ) m_ActionManager.OnGetActions(ctx); //DONT TOUCH NIG NOG!
	
		// // CLIP IN REGULAR FUNCTIONALITY
			
		// if( super.OnInputUserDataProcess(userDataType, ctx) )
			// return true;
		
		// if( m_QuickBarBase.OnInputUserDataProcess(userDataType, ctx) )
			// return true;
		
		// if( m_WeaponManager.OnInputUserDataProcess(userDataType, ctx) )
			// return true;

		// if( HandleRemoteItemManipulation(userDataType, ctx) )
			// return true;
		
		// if ( userDataType == INPUT_UDT_INVENTORY && GetHumanInventory().OnInputUserDataProcess(ctx) )
			// return true;
		
		// if ( TogglePlacingServer( userDataType, ctx ) )
			// return true;
		
		// string uid;
		// bool mute;
		// if( userDataType == INPUT_UDT_USER_MUTE_XBOX )
		// {
			// if( ctx.Read( uid ) && ctx.Read( mute ) )
			// {
				// GetGame().MutePlayer( uid, GetIdentity().GetPlainId(), mute );
				// // commented because plainID should not be present in logs
				// //Print( "Player: " + GetIdentity().GetId() + " set mute for " + uid + " to " + mute );
			// }
		// }
		
		// if( userDataType == INPUT_UDT_USER_SYNC_PERMISSIONS )
		// {
			// map<string, bool> mute_list;
			// if( ctx.Read( mute_list ) )
			// {
				// for( int i = 0; i < mute_list.Count(); i++ )
				// {
					// uid = mute_list.GetKey( i );
					// mute = mute_list.GetElement( i );
					// GetGame().MutePlayer( uid, GetIdentity().GetPlainId(), mute );
					// // commented because plainID should not be present in logs
					// // Print( "Player: " + GetIdentity().GetId() + " set mute for " + uid + " to " + mute );
				// }
			// }
		// }
		
		// if( m_EmoteManager && userDataType == INPUT_UDT_GESTURE )	 return m_EmoteManager.OnInputUserDataProcess(userDataType, ctx);
		
		// if( m_hac ) 	return EndMapAnim(userDataType, ctx);
		
		// if( m_ActionManager )
			// return m_ActionManager.OnInputUserDataProcess(userDataType, ctx);
		// return false;
	// }
	
	// void CollectMetal( PlayerBase Ac_Player )
	// {
		// string Ac_Player_UID;
		// Ac_Player.GetVariable("GU_ID",Ac_Player_UID);
		// vector UserPosition = Ac_Player.GetPosition();
		// ItemBase collected_item = GetGame().CreateObject( "Consumable_MetalPlates", UserPosition, false ); //if True, object is not spawned on clients only on server 
		// float gen_quan = Math.RandomFloat(1,8);
		// float random_quan = Math.Round(gen_quan);
		// collected_item.SetQuantity(random_quan);
		// Ac_Player.UnlockInventory(LOCK_FROM_SCRIPT);
		
		// Ac_Player.TakeEntityAsOwned(collected_item);
		
		// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Ac_Player_UID + "') then { [_x,format['I have collected some Metal Scraps'],'colorFriendly'] call fnc_playerMessage; }; }forEach players;");
	// }

	// bool OnAction(int action_id, Man player, ParamsReadContext ctx)
	// {
		// super.OnAction(action_id, player, ctx);
	
		// string Player_UID = "";
		
		// player.GetVariable("GU_ID",Player_UID);
		// ItemBase In_Hands;
		// In_Hands = player.GetEntityInHands();
		
		// if (action_id == 0211478) //Check Bank
		// {
			// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _ret = callFunction ['EnfBankSystem','" + Player_UID + "','Read','0']; [_x,format['My Bank Account Balance: %1',_ret],'colorAction'] call fnc_playerMessage; }; }forEach players;");
		// }
		// if (action_id == 0211475) //deposit all
		// {
			// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; _CurrentCoins = _x getVariable ['Coins',0]; if (_Puid == '" + Player_UID + "') then { if (_CurrentCoins >= 1) then { _retDB = callFunction ['EnfBankSystem','"+Player_UID+"','Read']; _newAmount = _CurrentCoins + _retDB; callFunction ['EnfBankSystem','"+Player_UID+"','Edit',(format['%1',_newAmount])]; _x setVariable ['Coins',0]; [_x,format['Successfully Transferd [%1] Coins To Your Bank Account! Total Amount: [%2]',_CurrentCoins,_newAmount],'colorFriendly'] call fnc_playerMessage; }else{ [_x,format['You Dont Have any coins to deposit!'],'colorimportant'] call fnc_playerMessage; }; }; }forEach players;");
		// } 
		// if (action_id == 0211474) //deposit 25
		// {
			// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; _CurrentCoins = _x getVariable ['Coins',0]; if (_Puid == '" + Player_UID + "') then { if (_CurrentCoins >= 25) then { _retDB = callFunction ['EnfBankSystem','"+Player_UID+"','Read']; _newAmount = 25 + _retDB; callFunction ['EnfBankSystem','"+Player_UID+"','Edit',(format['%1',_newAmount])]; _x setVariable ['Coins',(_CurrentCoins - 25)]; [_x,format['Successfully Transferd [25] Coins To Your Bank Account! Total Amount: [%1]',_newAmount],'colorFriendly'] call fnc_playerMessage; }else{ [_x,format['You Dont Have any coins to deposit!'],'colorimportant'] call fnc_playerMessage; }; }; }forEach players;");
		// } 
		// if (action_id == 0211473) //deposit 50
		// {
			// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; _CurrentCoins = _x getVariable ['Coins',0]; if (_Puid == '" + Player_UID + "') then { if (_CurrentCoins >= 50) then { _retDB = callFunction ['EnfBankSystem','"+Player_UID+"','Read']; _newAmount = 50 + _retDB; callFunction ['EnfBankSystem','"+Player_UID+"','Edit',(format['%1',_newAmount])]; _x setVariable ['Coins',(_CurrentCoins - 50)]; [_x,format['Successfully Transferd [50] Coins To Your Bank Account! Total Amount: [%1]',_newAmount],'colorFriendly'] call fnc_playerMessage; }else{ [_x,format['You Dont Have any coins to deposit!'],'colorimportant'] call fnc_playerMessage; }; }; }forEach players;");
		// }
		// if (action_id == 0211472) //deposit 100
		// {
			// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; _CurrentCoins = _x getVariable ['Coins',0]; if (_Puid == '" + Player_UID + "') then { if (_CurrentCoins >= 100) then { _retDB = callFunction ['EnfBankSystem','"+Player_UID+"','Read']; _newAmount = 100 + _retDB; callFunction ['EnfBankSystem','"+Player_UID+"','Edit',(format['%1',_newAmount])]; _x setVariable ['Coins',(_CurrentCoins - 100)]; [_x,format['Successfully Transferd [100] Coins To Your Bank Account! Total Amount: [%1]',_newAmount],'colorFriendly'] call fnc_playerMessage; }else{ [_x,format['You Dont Have any coins to deposit!'],'colorimportant'] call fnc_playerMessage; }; }; }forEach players;");
		// }
		
		// if (action_id == 0411475) //Withdraw all
		// {
			// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; _CurrentCoins = _x getVariable ['Coins',0]; _retDB = callFunction ['EnfBankSystem','"+Player_UID+"','Read']; if (_Puid == '" + Player_UID + "') then { if (_retDB >= 1) then { _newAmount = 0; callFunction ['EnfBankSystem','"+Player_UID+"','Edit',(format['%1',_newAmount])]; _x setVariable ['Coins',(_CurrentCoins + _retDB)]; [_x,format['Successfully Transferd [%1] Coins From Your Bank Account!',_retDB],'colorFriendly'] call fnc_playerMessage; }else{ [_x,format['You Dont Have any coins to withdraw!'],'colorimportant'] call fnc_playerMessage; }; }; }forEach players;");
		// } 
		// if (action_id == 0411474) //Withdraw 25
		// {
			// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; _CurrentCoins = _x getVariable ['Coins',0]; _retDB = callFunction ['EnfBankSystem','"+Player_UID+"','Read']; if (_Puid == '" + Player_UID + "') then { if (_retDB >= 25) then { _newAmount = _retDB - 25; callFunction ['EnfBankSystem','"+Player_UID+"','Edit',(format['%1',_newAmount])]; _x setVariable ['Coins',(_CurrentCoins + 25)]; [_x,format['Successfully Transferd [25] Coins From Your Bank Account!'],'colorFriendly'] call fnc_playerMessage; }else{ [_x,format['You Dont Have any coins to withdraw!'],'colorimportant'] call fnc_playerMessage; }; }; }forEach players;");
		// } 
		// if (action_id == 0411473) //Withdraw 50
		// {
			// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; _CurrentCoins = _x getVariable ['Coins',0]; _retDB = callFunction ['EnfBankSystem','"+Player_UID+"','Read']; if (_Puid == '" + Player_UID + "') then { if (_retDB >= 50) then { _newAmount = _retDB - 50; callFunction ['EnfBankSystem','"+Player_UID+"','Edit',(format['%1',_newAmount])]; _x setVariable ['Coins',(_CurrentCoins + 50)]; [_x,format['Successfully Transferd [50] Coins From Your Bank Account!'],'colorFriendly'] call fnc_playerMessage; }else{ [_x,format['You Dont Have any coins to withdraw!'],'colorimportant'] call fnc_playerMessage; }; }; }forEach players;");
		// }
		// if (action_id == 0411472) //Withdraw 100
		// {
			// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; _CurrentCoins = _x getVariable ['Coins',0]; _retDB = callFunction ['EnfBankSystem','"+Player_UID+"','Read']; if (_Puid == '" + Player_UID + "') then { if (_retDB >= 100) then { _newAmount = _retDB - 100; callFunction ['EnfBankSystem','"+Player_UID+"','Edit',(format['%1',_newAmount])]; _x setVariable ['Coins',(_CurrentCoins + 100)]; [_x,format['Successfully Transferd [100] Coins From Your Bank Account!'],'colorFriendly'] call fnc_playerMessage; }else{ [_x,format['You Dont Have any coins to withdraw!'],'colorimportant'] call fnc_playerMessage; }; }; }forEach players;");
		// } 
		
		// if (action_id == 323147855)
		// {
			// autoptr Param2<PlayerBase,string> PPInfo = new Param2<PlayerBase,string>(NULL,"");	
			// if (ctx.Read(PPInfo))
			// {
				// PlayerBase EnTarget = PPInfo.param1;
				// string EnTargetGUID = PPInfo.param2;
				// string EnTargName;
				// string OwnerName;
				// EnTarget.GetVariable("Cli_Name",EnTargName);
				// player.GetVariable("Cli_Name",OwnerName);
				
				// float TargInFaction;
				// EnTarget.GetVariable("InFaction",TargInFaction);
				
				// if ( TargInFaction != 1 )
				// {
					// //Creator
					// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['An Invite has been sent to player "+ EnTargName +"!'],'colorAction'] call fnc_playerMessage; }; }forEach players;");
					
					// //Target
					// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + EnTargetGUID + "') then { [_x,format['"+OwnerName+" Invited you to join their faction! You Have 30 seconds to Press F1 to Accept F2 To Decline!'],'colorAction'] call fnc_playerMessage; (owner _x) SpawnForClient { [] spawn { _ExpireTime = 30; _Response = false; while { _ExpireTime >= 1 && !(_Response) } do { if ( inputAction 'salute' > 0 ) then { DZM_Factionsys = [player,'accept','"+Player_UID+"','"+EnTargetGUID+"']; publicVariableServer 'DZM_Factionsys'; _Response = true; }; if ( inputAction 'surrender' > 0 ) then { DZM_Factionsys = [player,'decline']; publicVariableServer 'DZM_Factionsys'; _Response = true; }; sleep 0.1; _ExpireTime = _ExpireTime - 0.1; if ( _ExpireTime <= 1 && !(_Response)) then { DZM_Factionsys = [player,'decline']; publicVariableServer 'DZM_Factionsys'; _Response = true; }; }; }; }; }; }forEach players;");
					
				// }
				// else if ( TargInFaction == 1 )
				// {
					// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['Player "+ EnTargName +" is already a member of another faction!'],'colorImportant'] call fnc_playerMessage; }; }forEach players;");
				// }
			// }
		// }
		
		// if ( action_id == 33664478 )
		// {
			// player.SetVariable("FactionCreating",0);
			// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['Menu Closed.'],'colorSideChannel'] call fnc_playerMessage; }; }forEach players;");
		// }
		
		// switch(action_id)
		// {
			// /*===Backpacks===*/
			// case 0011681:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: BagTaloonBlue...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['BagTaloon_Blue']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_0",0);
				// player.SetVariable("Category_1",1);
				// break;
			// case 0011682:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: BagTaloonGreen...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['BagTaloon_Green']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_0",0);
				// player.SetVariable("Category_1",1);
				// break;
			// case 0011683:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: BagTortilla...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['BagTortilla']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_0",0);
				// player.SetVariable("Category_1",1);
				// break;
			// case 0011684:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: BagImprovised...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['BagImprovised']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_0",0);
				// player.SetVariable("Category_1",1);
				// break;
			// case 0011685:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: BagImprovisedFur...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['BagImprovisedFur']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_0",0);
				// player.SetVariable("Category_1",1);
				// break;
			// case 0011686:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: DrybagBlack...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Bagdrybag_Black']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_0",0);
				// player.SetVariable("Category_1",1);
				// break;
			// case 0011687:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: DrybagBlue...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['BagDrybag_Blue']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_0",0);
				// player.SetVariable("Category_1",1);
				// break;
			// case 0011688:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: DrybagGreen...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['BagDrybag_Green']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_0",0);
				// player.SetVariable("Category_1",1);
				// break;
			// case 0011689:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: BagHunting...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['BagHunting']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_0",0);
				// player.SetVariable("Category_1",1);
				// break;
			// case 00116810:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: BagMountainBlue...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['BagMountain_Blue']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_0",0);
				// player.SetVariable("Category_1",1);
				// break;
			// case 00116811:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: BagMountainGreen...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['BagMountain_Green']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_0",0);
				// player.SetVariable("Category_1",1);
				// break;
		  // /*=============================================================================TopWear================================================================*/
		  // /*====================================================================================================================================================*/
		  // case 0012681:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Tactical Shirt Grey...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['TacticalShirtGrey']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_1",0);
				// player.SetVariable("Category_2",1);
				// break;
			// case 0012682:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Tactical Shirt Black...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['TacticalShirtBlack']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_1",0);
				// player.SetVariable("Category_2",1);
				// break;
			// case 0012683:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Tactical Shirt Olive...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['TacticalShirtOlive']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_1",0);
				// player.SetVariable("Category_2",1);
				// break;
			// case 0012684:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Tactical Shirt Tan...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['TacticalShirtTan']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_1",0);
				// player.SetVariable("Category_2",1);
				// break;
			// case 0012685:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: M65 Jacket Black...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['M65_Jacket_Black']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_1",0);
				// player.SetVariable("Category_2",1);
				// break;
			// case 0012686:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: M65 Jacket Khaki...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['M65_Jacket_Khaki']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_1",0);
				// player.SetVariable("Category_2",1);
				// break;
			// case 0012687:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: M65 Jacket Olive...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['M65_Jacket_Olive']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_1",0);
				// player.SetVariable("Category_2",1);
				// break;
			// case 0012688:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: M65 Jacket Tan...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['M65_Jacket_Tan']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_1",0);
				// player.SetVariable("Category_2",1);
				// break;
			// case 0012689:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Gorka Jacket summer...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Gorka_up_summer']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_1",0);
				// player.SetVariable("Category_2",1);
				// break;
			// case 00126810:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Gorka Jacket flat...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Gorka_up_flat']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_1",0);
				// player.SetVariable("Category_2",1);
				// break;
			// case 00126811:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Gorka Jacket autumn...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Gorka_pants_autumn']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_1",0);
				// player.SetVariable("Category_2",1);
				// break;
			// case 00126812:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Gorka Jacket PautRev...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Gorka_pants_PautRev']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_1",0);
				// player.SetVariable("Category_2",1);
				// break;
			// case 00126813:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Hunting Jacket Autumn...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Hunting_jacket_autumn']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_1",0);
				// player.SetVariable("Category_2",1);
				// break;
			// case 00126814:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Hunting Jacket Brown...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Hunting_jacket_brown']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_1",0);
				// player.SetVariable("Category_2",1);
				// break;
			// case 00126815:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Hunting Jacket Spring...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Hunting_jacket_spring']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_1",0);
				// player.SetVariable("Category_2",1);
				// break;
			// case 00126816:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: USMC Jacket Desert...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['USMC_Jacket_Desert']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_1",0);
				// player.SetVariable("Category_2",1);
				// break;
			// case 00126817:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: USMC Jacket Woodland...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['USMC_Jacket_Woodland']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_1",0);
				// player.SetVariable("Category_2",1);
				// break;
		  // /*=============================================================================BottomWear================================================================*/
		  // /*====================================================================================================================================================*/
		  	// case 0013681:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Cargo Pants Beige...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['CargoPants_Beige']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_2",0);
				// player.SetVariable("Category_3",1);
				// break;
			// case 0013682:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Cargo Pants Black...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['CargoPants_Black']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_2",0);
				// player.SetVariable("Category_3",1);
				// break;
			// case 0013683:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Cargo Pants Blue...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['CargoPants_Blue']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_2",0);
				// player.SetVariable("Category_3",1);
				// break;
			// case 0013684:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Cargo Pants Green...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['CargoPants_Green']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_2",0);
				// player.SetVariable("Category_3",1);
				// break;
			// case 0013685:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Cargo Pants Grey...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['CargoPants_Grey']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_2",0);
				// player.SetVariable("Category_3",1);
				// break;
			// case 0013686:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: ttsko pants Beige...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['ttsko_pants_Beige']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_2",0);
				// player.SetVariable("Category_3",1);
				// break;
			// case 0013687:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Hunter Pants Autumn...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['HunterPants_Autumn']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_2",0);
				// player.SetVariable("Category_3",1);
				// break;
			// case 0013688:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Hunter Pants Brown...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['HunterPants_Brown']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_2",0);
				// player.SetVariable("Category_3",1);
				// break;
			// case 0013689:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Hunter Pants Spring...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['HunterPants_Spring']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_2",0);
				// player.SetVariable("Category_3",1);
				// break;
			// case 00136810:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Hunter Pants Summer...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['HunterPants_Summer']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_2",0);
				// player.SetVariable("Category_3",1);
				// break;
			// case 00136811:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Gorka Pants autumn...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Gorka_pants_summer']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_2",0);
				// player.SetVariable("Category_3",1);
				// break;
			// case 00136812:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Gorka Pants autumn...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Gorka_pants_autumn']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_2",0);
				// player.SetVariable("Category_3",1);
				// break;
			// case 00136813:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Gorka pants flat...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Gorka_pants_flat']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_2",0);
				// player.SetVariable("Category_3",1);
				// break;
			// case 00136814:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Gorka pants PautRev...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Gorka_pants_PautRev']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_2",0);
				// player.SetVariable("Category_3",1);
				// break;
			// case 00136815:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: USMC Pants Desert...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['USMC_Pants_Desert']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_2",0);
				// player.SetVariable("Category_3",1);
				// break;
			// case 00136816:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: USMC Pants Woodland...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['USMC_Pants_Woodland']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_2",0);
				// player.SetVariable("Category_3",1);
				// break;
			// /*=============================================================================Headgear================================================================*/
		  // /*====================================================================================================================================================*/
		  // case 0014681:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: BallisticHelmet Green...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['BallisticHelmet_Green']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_3",0);
				// player.SetVariable("Category_4",1);
				// break;
			// case 0014682:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: BallisticHelmet Black...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['BallisticHelmet_Black']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_3",0);
				// player.SetVariable("Category_4",1);
				// break;
			// case 0014683:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: BallisticHelmet UN...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['BallisticHelmet_UN']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_3",0);
				// player.SetVariable("Category_4",1);
				// break;
			// case 0014684:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: BeanieHat Black...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['BeanieHatBlack']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_3",0);
				// player.SetVariable("Category_4",1);
				// break;
			// case 0014685:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: BeanieHat Blue...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['BeanieHatBlue']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_3",0);
				// player.SetVariable("Category_4",1);
				// break;
			// case 0014686:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: BeanieHat Brown...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['BeanieHatBrown']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_3",0);
				// player.SetVariable("Category_4",1);
				// break;
			// case 0014687:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: BeanieHat Green...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['BeanieHatGreen']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_3",0);
				// player.SetVariable("Category_4",1);
				// break;
			// case 0014688:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Military Beret...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['MilitaryBeret']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_3",0);
				// player.SetVariable("Category_4",1);
				// break;
			// case 0014689:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Military Beret UN...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['MilitaryBeretUN']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_3",0);
				// player.SetVariable("Category_4",1);
				// break;
			// case 00146810:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Military Beret NZ...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['MilitaryBeretNZ']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_3",0);
				// player.SetVariable("Category_4",1);
				// break;
			// case 00146811:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Military Beret ChDKZ...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['MilitaryBeretChDKZ']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_3",0);
				// player.SetVariable("Category_4",1);
				// break;
			// case 00146812:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Military Beret CDF...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['MilitaryBeretCDF']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_3",0);
				// player.SetVariable("Category_4",1);
				// break;
			// case 00146813:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: CowboyHat Brown...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['CowboyHat_Brown']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_3",0);
				// player.SetVariable("Category_4",1);
				// break;
			// case 00146814:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: CowboyHat black...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['CowboyHat_black']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_3",0);
				// player.SetVariable("Category_4",1);
				// break;
			// case 00146815:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: CowboyHat darkBrown...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['CowboyHat_darkBrown']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_3",0);
				// player.SetVariable("Category_4",1);
				// break;
			// case 00146816:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: CowboyHat green...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['CowboyHat_green']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_3",0);
				// player.SetVariable("Category_4",1);
				// break;
			// case 00146817:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: GorkaHelmet Green...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['GorkaHelmet_complete_Green']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_3",0);
				// player.SetVariable("Category_4",1);
				// break;
			// case 00146818:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: GorkaHelmet Black...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['GorkaHelmet_complete_black']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_3",0);
				// player.SetVariable("Category_4",1);
				// break;
			// /*=============================================================================PrimaryWeapon================================================================*/
		  // /*====================================================================================================================================================*/
		  	// case 0015681:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Steyr Aug...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['AugSteyr']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_4",0);
				// player.SetVariable("Category_5",1);
				// break;
			// case 0015682:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: M4A1...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['M4A1']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_4",0);
				// player.SetVariable("Category_5",1);
				// break;
			// case 0015683:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: AK101...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['AK101']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_4",0);
				// player.SetVariable("Category_5",1);
				// break;
			// case 0015684:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: AK74...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['AK74']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_4",0);
				// player.SetVariable("Category_5",1);
				// break;
			// case 0015685:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: AKM...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['AKM']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_4",0);
				// player.SetVariable("Category_5",1);
				// break;
			// case 0015686:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: B95...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['B95']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_4",0);
				// player.SetVariable("Category_5",1);
				// break;
			// case 0015687:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: CZ527...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['CZ527']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_4",0);
				// player.SetVariable("Category_5",1);
				// break;
			// case 0015688:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: FAL...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['FAL']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_4",0);
				// player.SetVariable("Category_5",1);
				// break;
			// case 0015689:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Mosin9130...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Mosin9130']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_4",0);
				// player.SetVariable("Category_5",1);
				// break;
			// case 00156810:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Scout Rifle...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Scout']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_4",0);
				// player.SetVariable("Category_5",1);
				// break;
			// case 00156811:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: SKS...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['SKS']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_4",0);
				// player.SetVariable("Category_5",1);
				// break;
			// case 00156812:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: SVD...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['SVD']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_4",0);
				// player.SetVariable("Category_5",1);
				// break;
			// case 00156813:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: VSS...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['VSS']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_4",0);
				// player.SetVariable("Category_5",1);
				// break;
			// case 00156814:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Winchester70...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Winchester70']; _x setVariable ['vipArrayLD',VIP_KitArray]; }; }forEach players;");
				// player.SetVariable("Category_4",0);
				// player.SetVariable("Category_5",1);
				// break;
		 // /*=============================================================================SecondaryWeapon===============================================================*/
		  // /*====================================================================================================================================================*/
		  // case 0016681:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Engraved 1911...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['1911_Engraved']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_5",0);
				// player.SetVariable("Category_6",1);
				// break;
			// case 0016682:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Golden Eagle...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['DE_Gold']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_5",0);
				// player.SetVariable("Category_6",1);
				// break;
			// case 0016683:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: FNX45...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['FNX45']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_5",0);
				// player.SetVariable("Category_6",1);
				// break;
			// case 0016684:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Glock19...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Glock19']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_5",0);
				// player.SetVariable("Category_6",1);
				// break;
			// case 0016685:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Magnum...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Magnum']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_5",0);
				// player.SetVariable("Category_6",1);
				// break;
			// case 0016686:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Red9...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Red9']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_5",0);
				// player.SetVariable("Category_6",1);
				// break;
			// case 0016687:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: CZ61...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['CZ61']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_5",0);
				// player.SetVariable("Category_6",1);
				// break;
			// case 0016688:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: MP5K...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['MP5K']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_5",0);
				// player.SetVariable("Category_6",1);
				// break;
			// case 0016689:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: UMP45...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['UMP45']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_5",0);
				// player.SetVariable("Category_6",1);
				// break;
			// case 00166810:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: AKS74U...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['AKS74U']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_5",0);
				// player.SetVariable("Category_6",1);
				// break;
			// /*=============================================================================Food===============================================================*/
		    // /*====================================================================================================================================================*/
			// case 0017681:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Phat Phuck...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Phat_Phuck']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_6",0);
				// player.SetVariable("Category_7",1);
				// break;
			// case 0017682:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Vegan Pack...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Vegan_Pack']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_6",0);
				// player.SetVariable("Category_7",1);
				// break;
			// case 0017683:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Fishy Female...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Fishy_Female']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_6",0);
				// player.SetVariable("Category_7",1);
				// break;
			// case 0017684:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Rice Picker...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Rice_Picker']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_6",0);
				// player.SetVariable("Category_7",1);
				// break;
			// case 0017685:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Apple Glitcher...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Apple_Glitcher']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_6",0);
				// player.SetVariable("Category_7",1);
				// break;
		  
		    // /*=============================================================================Medical===============================================================*/
		    // /*====================================================================================================================================================*/
			 // case 0018681:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Basic Medical Tools...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Basic_Medical_Tools']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_7",0);
				// player.SetVariable("Category_8",1);
				// break;
			// case 0018682:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Noobie Medical Tools...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Noobie_Medical_Tools']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_7",0);
				// player.SetVariable("Category_8",1);
				// break;
			// case 0018683:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Veteran Medical Tools...Switching To Next Category!'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['Veteran_Medical_Tools']; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
				// player.SetVariable("Category_7",0);
				// player.SetVariable("Category_8",1);
				// break;
				
		    // /*=============================================================================Vest===============================================================*/
		    // /*====================================================================================================================================================*/
			
			// case 0019681:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Plate Carrier Vest......Spawing Loadout...'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['PlateCarrierComplete'];  _x setVariable ['vipArrayLD',VIP_KitArray]; { moveToGround _x; }forEach (itemsInInventory _x); (owner _x) SpawnForClient { DZM_AdvancedLoads = [player]; publicVariableServer 'DZM_AdvancedLoads'; }; }else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; _x setVariable ['vipArrayLD',[]]; }; }; }forEach players;");
				// player.SetVariable("Category_8",0);
				// break;
			// case 0019682:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Smersh Vest...Spawing Loadout...'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['SmershVestBackpack'];  _x setVariable ['vipArrayLD',VIP_KitArray]; { moveToGround _x; }forEach (itemsInInventory _x); (owner _x) SpawnForClient { DZM_AdvancedLoads = [player]; publicVariableServer 'DZM_AdvancedLoads'; }; }else{ [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; _x setVariable ['vipArrayLD',[]]; }; }; }forEach players;");
				// player.SetVariable("Category_8",0);
				// break;
			// case 0019683:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Assualt Vest Black...Spawing Loadout...'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['UKAssVest_Black'];  _x setVariable ['vipArrayLD',VIP_KitArray]; { moveToGround _x; }forEach (itemsInInventory _x); (owner _x) SpawnForClient { DZM_AdvancedLoads = [player]; publicVariableServer 'DZM_AdvancedLoads'; }; }else{ [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; _x setVariable ['vipArrayLD',[]]; }; }; }forEach players;");
				// player.SetVariable("Category_8",0);
				// break;
			// case 0019684:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Assualt Vest Camo...Spawing Loadout...'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['UKAssVest_Camo'];  _x setVariable ['vipArrayLD',VIP_KitArray]; { moveToGround _x; }forEach (itemsInInventory _x); (owner _x) SpawnForClient { DZM_AdvancedLoads = [player]; publicVariableServer 'DZM_AdvancedLoads'; }; }else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; _x setVariable ['vipArrayLD',[]]; }; }; }forEach players;");
				// player.SetVariable("Category_8",0);
				// break;
			// case 0019685:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Assualt Vest Khaki...Spawing Loadout...'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['UKAssVest_Khaki'];  _x setVariable ['vipArrayLD',VIP_KitArray]; { moveToGround _x; }forEach (itemsInInventory _x); (owner _x) SpawnForClient { DZM_AdvancedLoads = [player]; publicVariableServer 'DZM_AdvancedLoads'; }; }else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; _x setVariable ['vipArrayLD',[]]; }; }; }forEach players;");
				// player.SetVariable("Category_8",0);
				// break;
			// case 0019686:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Assualt Vest Olive...Spawing Loadout...'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['UKAssVest_Olive'];  _x setVariable ['vipArrayLD',VIP_KitArray]; { moveToGround _x; }forEach (itemsInInventory _x); (owner _x) SpawnForClient { DZM_AdvancedLoads = [player]; publicVariableServer 'DZM_AdvancedLoads'; }; }else{ [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; _x setVariable ['vipArrayLD',[]]; }; }; }forEach players;");
				// player.SetVariable("Category_8",0);
				// break;
			// case 0019687:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _x setDir ((getDir _x) + 4); [_x,format['Item Selected: Press Vest Blue...Spawing Loadout...'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['PressVest_LightBlue'];  _x setVariable ['vipArrayLD',VIP_KitArray]; { moveToGround _x; }forEach (itemsInInventory _x); (owner _x) SpawnForClient { DZM_AdvancedLoads = [player]; publicVariableServer 'DZM_AdvancedLoads'; }; }else{ [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; _x setVariable ['vipArrayLD',[]]; }; }; }forEach players;");
				// player.SetVariable("Category_8",0);
				// break;
			// case 0019688:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _x setDir ((getDir _x) + 4); [_x,format['Item Selected: High CapacityVest Black...Spawing Loadout...'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['HighCapacityVest_Black'];  _x setVariable ['vipArrayLD',VIP_KitArray]; { moveToGround _x; }forEach (itemsInInventory _x); (owner _x) SpawnForClient { DZM_AdvancedLoads = [player]; publicVariableServer 'DZM_AdvancedLoads'; }; }else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; _x setVariable ['vipArrayLD',[]]; }; }; }forEach players;");
				// player.SetVariable("Category_8",0);
				// break;
			// case 0019689:
				// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _x setDir ((getDir _x) + 4); [_x,format['Item Selected: High CapacityVest Black...Spawing Loadout...'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = VIP_KitArray + ['HighCapacityVest_Olive'];  _x setVariable ['vipArrayLD',VIP_KitArray]; { moveToGround _x; }forEach (itemsInInventory _x); (owner _x) SpawnForClient { DZM_AdvancedLoads = [player]; publicVariableServer 'DZM_AdvancedLoads'; }; }else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; _x setVariable ['vipArrayLD',[]]; }; }; }forEach players;");
				// player.SetVariable("Category_8",0);
				// break;
		// }

		// //Toggle Kit Builder Category 0
		// if (action_id == 665479)
		// {
	       // GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 8); [_x,format['Current Category: BackPacks'],'colorSideChannel'] call fnc_playerMessage; }; }forEach players;");
			// player.SetVariable("VIP_togg",0);
			// player.SetVariable("Category_0",1);
		// }
		// // Move from Category 0 to 1
		// if (action_id == 33254)
		// {
			 // GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 8); [_x,format['Current Category: Topwear'],'colorSideChannel'] call fnc_playerMessage; }; }forEach players;");
			// player.SetVariable("Category_0",0);
			// player.SetVariable("Category_1",1);
		// }
		// // Move from Category 1 to 2
		// if (action_id == 332545)
		// {
			 // GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 8); [_x,format['Current Category: BottomWear'],'colorSideChannel'] call fnc_playerMessage; }; }forEach players;");
			// player.SetVariable("Category_1",0);
			// player.SetVariable("Category_2",1);
		// }
		// // Move from Category 2 to 3
		// if (action_id == 3325451)
		// {
			 // GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 8); [_x,format['Current Category: Headgear'],'colorSideChannel'] call fnc_playerMessage; }; }forEach players;");
			// player.SetVariable("Category_2",0);
			// player.SetVariable("Category_3",1);
		// }
		// // Move from Category 3 to 4
		// if (action_id == 33254511)
		// {
			 // GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 8); [_x,format['Current Category: Primary Weapons'],'colorSideChannel'] call fnc_playerMessage; }; }forEach players;");
			// player.SetVariable("Category_3",0);
			// player.SetVariable("Category_4",1);
		// }
		// // Move from Category 4 to 5
		// if (action_id == 332545112)
		// {
			 // GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 8); [_x,format['Current Category: Secondary Weapons'],'colorSideChannel'] call fnc_playerMessage; }; }forEach players;");
			// player.SetVariable("Category_4",0);
			// player.SetVariable("Category_5",1);
		// }
		// // Move from Category 5 to 6
		// if (action_id == 33545112)
		// {
			 // GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 8); [_x,format['Current Category: Food'],'colorSideChannel'] call fnc_playerMessage; }; }forEach players;");
			// player.SetVariable("Category_5",0);
			// player.SetVariable("Category_6",1);
		// }
		// // Move from Category 6 to 7
		// if (action_id == 633545112)
		// {
			 // GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 8); [_x,format['Current Category: Medical'],'colorSideChannel'] call fnc_playerMessage; }; }forEach players;");
			// player.SetVariable("Category_6",0);
			// player.SetVariable("Category_7",1);
		// }
		// // Move from Category 7 to 8
		// if (action_id == 63235435112)
		// {
			 // GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 8); [_x,format['Current Category: Vest'],'colorSideChannel'] call fnc_playerMessage; }; }forEach players;");
			// player.SetVariable("Category_7",0);
			// player.SetVariable("Category_8",1);
		// }
		// //Exit Kit Builder
		// if (action_id == 1147852)
		// {
			// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setDir ((getDir _x) + 4); [_x,format['Action Canceled'],'colorSideChannel'] call fnc_playerMessage; VIP_KitArray = _x getVariable ['vipArrayLD',[]]; VIP_KitArray = []; _x setVariable ['vipArrayLD',VIP_KitArray];  }; }forEach players;");
			// player.SetVariable("Category_0",0);
			// player.SetVariable("Category_1",0);
			// player.SetVariable("Category_2",0);
			// player.SetVariable("Category_3",0);
			// player.SetVariable("Category_4",0);
			// player.SetVariable("Category_5",0);
			// player.SetVariable("Category_6",0);
			// player.SetVariable("Category_7",0);
			// player.SetVariable("Category_8",0);
		// }
		
		// //VIP Toggle OFF Kit menu
		// if (action_id == 46574675)
		// {
			// player.SetVariable("VIP_togg",0);
		// }
		
			// if( action_id == 114654654301 ) // ShadowKnight
				// {
					// string tex0t_send665441 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _vipType = _x getVariable ['Is_VIP',0]; switch (_vipType) do { case 1 : { _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; }; case 2 : { _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; }; case 3 : { _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; }; }; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['Greathelm','Glasses_Designer','TacticalGloves_Black','RidersJacket_Black','PlateCarrierComplete','CargoPants_Black','CombatBoots_Black','BagAssaultBlack','Sword']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'compass','MakarovPB','Att_Suppressor_MakarovPB','M_MakarovPB_8Rnd','M_MakarovPB_8Rnd','Ammo_380','Ammo_380','Ammo_380','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _invArr; sleep 1; _foodArr = ['drink_canteen','Ammo_556','Ammo_556','Ammo_556','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','M_STANAG_30Rnd_Coupled','M_STANAG_30Rnd_Coupled','M_STANAG_30Rnd_Coupled','food_canspaghetti','food_cantuna','food_cantacticalbacon']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['AugSteyr', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['M_STANAG_30Rnd_Coupled','Att_Suppressor_M4']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
					// GetGame().ExecuteSQF(tex0t_send665441);
				// }
				
			// if( action_id == 6657878441 ) // Chernarussian Kit 
				// {
					// string tex0t_send6657878441 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _vipType = _x getVariable ['Is_VIP',0]; switch (_vipType) do { case 1 : { _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; }; case 2 : { _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; }; case 3 : { _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; }; }; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['MilitaryBeretChDKZ','RocketAviators','BandanaMask_blackpattern','BaseballBatNailed','UKAssVest_Black','Gorka_up_PautRev','Gorka_pants_PautRev','CombatBoots_Brown','BagHunting']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'WoodAxe', 'compass','MakarovPB','Att_Suppressor_MakarovPB','M_MakarovPB_8Rnd','M_MakarovPB_8Rnd','Ammo_380','Ammo_380','Ammo_380','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _invArr; sleep 1; _foodArr = ['drink_canteen','Ammo_545','Ammo_545','Ammo_545','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','M_ak74_30Rnd_Black','M_ak74_30Rnd_Black','M_ak74_30Rnd_Black','food_canspaghetti','food_cantuna','food_cantacticalbacon']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['AK74_Black', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Handguard_AK_Rail_Black','Att_Buttstock_AK74_Black','Att_Suppressor_AK','M_ak74_30Rnd_Black','Att_Optic_PSO1','Att_Bipod_Atlas']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
					// GetGame().ExecuteSQF(tex0t_send6657878441);
				// }
				
				// if( action_id == 663254878144 ) // KGB
				// {
					// string tex0t_send663254878144 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _vipType = _x getVariable ['Is_VIP',0]; switch (_vipType) do { case 1 : { _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; }; case 2 : { _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; }; case 3 : { _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; }; }; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['RadarCap_Brown','RocketAviators','BandanaMask_camopattern','TacticalGloves_Beige','JungleBoots_Brown','Hunting_jacket_brown','HunterPants_Brown','PlateCarrierComplete','BagHunting']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass','MakarovPB','Att_Suppressor_MakarovPB','M_MakarovPB_8Rnd','M_MakarovPB_8Rnd','Ammo_380','Ammo_380','Ammo_380','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _invArr; sleep 1; _foodArr = ['drink_canteen','Ammo_556','Ammo_556','Ammo_556','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','M_ak101_30Rnd_Black','M_ak101_30Rnd_Black','M_ak101_30Rnd_Black','food_canspaghetti','food_cantuna','food_cantacticalbacon']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['AK101_Black', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Handguard_AK_Rail_Black','Att_Buttstock_AK74_Black','Att_Suppressor_AK','M_ak101_30Rnd_Black','Att_Optic_PSO1','Att_Bipod_Atlas']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
					// GetGame().ExecuteSQF(tex0t_send663254878144);
				// }
				
				// if( action_id == 5487954878144 ) // Tactical
				// {
					// string tex0t_send5487954878144 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _vipType = _x getVariable ['Is_VIP',0]; switch (_vipType) do { case 1 : { _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; }; case 2 : { _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; }; case 3 : { _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; }; }; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BaseballCap_Camo','RocketAviators','BandanaMask_camopattern','TacticalGloves_Green','CombatBoots_Green','TacticalShirtOlive','PlateCarrierComplete','BDUpants_Woodland','BagImprovisedFur']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass','MakarovPB','Att_Suppressor_MakarovPB','M_MakarovPB_8Rnd','M_MakarovPB_8Rnd','Ammo_380','Ammo_380','Ammo_380','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _invArr; sleep 1; _foodArr = ['drink_canteen','Ammo_12ga_Pellets','Ammo_12ga_Pellets','Ammo_12ga_Pellets','Ammo_12ga_Slug','Ammo_12ga_Slug','Ammo_12ga_Slug','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['ShotgunMp133', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['cunt']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
					// GetGame().ExecuteSQF(tex0t_send5487954878144);
				// }
				
				// if( action_id == 5879864320154 ) // Cyka blyat 
				// {
					// string tex0t_send5879864320154 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _vipType = _x getVariable ['Is_VIP',0]; switch (_vipType) do { case 1 : { _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; }; case 2 : { _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; }; case 3 : { _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; }; }; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BoonieHat_Tan','RocketAviators','BalaclavaMask_Beige','TacticalGloves_Beige','CombatBoots_Beige','M65_Jacket_Tan','PlateCarrierComplete','CargoPants_Beige','BagHunting']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass','MakarovPB','Att_Suppressor_MakarovPB','M_MakarovPB_8Rnd','M_MakarovPB_8Rnd','Ammo_380','Ammo_380','Ammo_380','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _invArr; sleep 1; _foodArr = ['drink_canteen','Ammo_762x39','Ammo_762x39','Ammo_762x39','Ammo_762x39','Ammo_762x39','Ammo_762x39','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; }forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['SKS_Black', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Bayonet_SKS','Att_Optic_PUScope']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
					// GetGame().ExecuteSQF(tex0t_send5879864320154);
				// }
		
		// if( action_id == 11490301 ) // NBC Suit kit VIP _ 1 _
			// {
				// string text_send11490301 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BagTortilla','NBCJacketGray','RocketAviators','NBCBootsGray','NBCGlovesGray','NBCHoodGray','NBCPantsGray','GP5GasMask','PlateCarrierPouches']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','Att_Optic_M68','Att_Optic_Reflex','Att_Optic_ACOG','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'WoodAxe', 'compass','MakarovPB','Att_Suppressor_MakarovPB','M_MakarovPB_8Rnd','M_MakarovPB_8Rnd','AmmoBox_9mm_25rnd','AmmoBox_9mm_25rnd','AmmoBox_9mm_25rnd','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_45acp_25rnd','AmmoBox_45acp_25rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','M_MP5_30Rnd','M_MP5_30Rnd','food_canspaghetti','food_cantuna','food_cantacticalbacon']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['MP5K', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['M_MP5_30Rnd','Att_Handguard_MP5_Rail','Att_Buttstock_MP5_Stock','Att_Suppressor_Pistol']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send11490301);
			// }
			
			// if( action_id == 12490301 ) // NBC Suit kit VIP _ 2 _
			// {
				// string text_send12490301 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BagTortilla','NBCJacketGray','RocketAviators','NBCBootsGray','NBCGlovesGray','NBCHoodGray','NBCPantsGray','GP5GasMask','PlateCarrierPouches']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','Att_Optic_M68','Att_Optic_Reflex','Att_Optic_ACOG','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'WoodAxe', 'compass','MakarovPB','Att_Suppressor_MakarovPB','M_MakarovPB_8Rnd','M_MakarovPB_8Rnd','AmmoBox_9mm_25rnd','AmmoBox_9mm_25rnd','AmmoBox_9mm_25rnd','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_45acp_25rnd','AmmoBox_45acp_25rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','M_MP5_30Rnd','M_MP5_30Rnd','food_canspaghetti','food_cantuna','food_cantacticalbacon']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['MP5K', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['M_MP5_30Rnd','Att_Handguard_MP5_Rail','Att_Buttstock_MP5_Stock','Att_Suppressor_Pistol']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send12490301);
			// }
			
			// if( action_id == 13490301 ) // NBC Suit kit VIP _ 3 _
			// {
				// string text_send13490301 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BagTortilla','NBCJacketGray','RocketAviators','NBCBootsGray','NBCGlovesGray','NBCHoodGray','NBCPantsGray','GP5GasMask','PlateCarrierPouches']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','Att_Optic_M68','Att_Optic_Reflex','Att_Optic_ACOG','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'WoodAxe', 'compass','MakarovPB','Att_Suppressor_MakarovPB','M_MakarovPB_8Rnd','M_MakarovPB_8Rnd','AmmoBox_9mm_25rnd','AmmoBox_9mm_25rnd','AmmoBox_9mm_25rnd','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_45acp_25rnd','AmmoBox_45acp_25rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','M_MP5_30Rnd','M_MP5_30Rnd','food_canspaghetti','food_cantuna','food_cantacticalbacon']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['MP5K', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['M_MP5_30Rnd','Att_Handguard_MP5_Rail','Att_Buttstock_MP5_Stock','Att_Suppressor_Pistol']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send13490301);
			// }
			
			// if( action_id == 10490301 ) // Survivalist kit VIP _ 1 _
			// {
				// string text_send10490301 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BagImprovisedFur','TacticalShirtTan','RocketAviators','JungleBoots_Beige','TacticalGloves_Green','BoonieHat_Tan','CargoPants_Beige','BalaclavaMask_Beige','Vest_LeatherStorage_Natural']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','Att_Optic_M4T3NRDS','Att_Optic_ACOG','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'WoodAxe', 'compass','magnum','M_357_Speedloader','M_357_Speedloader','AmmoBox_357_20Rnd','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_45acp_25rnd','AmmoBox_45acp_25rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','M_UMP_25Rnd','M_UMP_25Rnd','food_canspaghetti','food_cantuna','food_cantacticalbacon']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['UMP45', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Suppressor_Pistol','Att_Ghillie_Tan','M_UMP_25Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToInventory _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send10490301);
			// }
			
			// if( action_id == 20490301 ) // Survivalist kit VIP _ 2 _
			// {
				// string text_send20490301 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BagImprovisedFur','TacticalShirtTan','RocketAviators','JungleBoots_Beige','TacticalGloves_Green','BoonieHat_Tan','CargoPants_Beige','BalaclavaMask_Beige','Vest_LeatherStorage_Natural']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','Att_Optic_M4T3NRDS','Att_Optic_ACOG','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'WoodAxe', 'compass','magnum','M_357_Speedloader','M_357_Speedloader','AmmoBox_357_20Rnd','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_45acp_25rnd','AmmoBox_45acp_25rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','M_UMP_25Rnd','M_UMP_25Rnd','food_canspaghetti','food_cantuna','food_cantacticalbacon']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['UMP45', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Suppressor_Pistol','Att_Ghillie_Tan','M_UMP_25Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToInventory _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send20490301);
			// }
			
			// if( action_id == 30490301 ) // Survivalist kit VIP _ 3 _
			// {
				// string text_send30490301 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BagImprovisedFur','TacticalShirtTan','RocketAviators','JungleBoots_Beige','TacticalGloves_Green','BoonieHat_Tan','CargoPants_Beige','BalaclavaMask_Beige','Vest_LeatherStorage_Natural']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = ['medical_transfusionkit','Att_Optic_M4T3NRDS','Att_Optic_ACOG','medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'WoodAxe', 'compass','magnum','M_357_Speedloader','M_357_Speedloader','AmmoBox_357_20Rnd','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_45acp_25rnd','AmmoBox_45acp_25rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','M_UMP_25Rnd','M_UMP_25Rnd','food_canspaghetti','food_cantuna','food_cantacticalbacon']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['UMP45', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Suppressor_Pistol','Att_Ghillie_Tan','M_UMP_25Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToInventory _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send30490301);
			// }
			
			// if( action_id == 60490301 ) // Hunter kit VIP _ 1 _
			// {
				// string text_send60490301 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BaseballCap_Olive','BagImprovised','Hunting_jacket_spring','Wellies_Green','RocketAviators','TacticalGloves_Green','HunterPants_Spring','BandanaMask_greenpattern','PlateCarrierComplete']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Green', 'compass','M_Glock_15Rnd','M_Glock_15Rnd','Glock19','Att_Light_TLR','M_Glock_15Rnd','Att_Suppressor_Pistol','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon', 'Ammo_762','Ammo_762']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['Mosin9130_Black_Green', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Suppressor_Improvised','Att_Optic_PUScope','Att_Ghillie_Woodland','Att_Bayonet_Mosin']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send60490301);
			// }
			
			// if( action_id == 60490312 ) // Hunter kit VIP _ 2 _
			// {
				// string text_send60490312 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BaseballCap_Olive','BagImprovised','Hunting_jacket_spring','Wellies_Green','RocketAviators','TacticalGloves_Green','HunterPants_Spring','BandanaMask_greenpattern','PlateCarrierComplete']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Green', 'compass','M_Glock_15Rnd','M_Glock_15Rnd','Glock19','Att_Light_TLR','M_Glock_15Rnd','Att_Suppressor_Pistol','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon', 'Ammo_762','Ammo_762']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['Mosin9130_Black_Green', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Suppressor_Improvised','Att_Optic_PUScope','Att_Ghillie_Woodland','Att_Bayonet_Mosin']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send60490312);
			// }
			
			// if( action_id == 60490323 ) // Hunter kit VIP _ 3 _
			// {
				// string text_send60490323 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BaseballCap_Olive','BagImprovised','Hunting_jacket_spring','Wellies_Green','RocketAviators','TacticalGloves_Green','HunterPants_Spring','BandanaMask_greenpattern','PlateCarrierComplete']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Green', 'compass','M_Glock_15Rnd','M_Glock_15Rnd','Glock19','Att_Light_TLR','M_Glock_15Rnd','Att_Suppressor_Pistol','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit','consumable_chemlight_white','consumable_chemlight_white']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon', 'Ammo_762','Ammo_762']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['Mosin9130_Black_Green', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Suppressor_Improvised','Att_Optic_PUScope','Att_Ghillie_Woodland','Att_Bayonet_Mosin']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send60490323);
			// }
			
			// if( action_id == 60490331 ) // Spetsnaz kit VIP _ 1 _
			// {
				// string text_send60490331 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BagAssaultBlack','TacticalShirtBlack','JoeyXSunGlasses','BallisticHelmet_Black','CargoPants_Black','BalaclavaMask_Black','HighCapacityVest_Black','TacticalGloves_Black','MilitaryBoots_Black']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass','M_Glock_15Rnd','M_Glock_15Rnd','Glock19','Att_Light_TLR','M_Glock_15Rnd','Att_Suppressor_Pistol','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon', 'M_ak74_30Rnd_Black','M_ak74_30Rnd_Black']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['AKS74U_Black', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['M_ak74_30Rnd_Black','M_ak74_30Rnd_Black','Att_Suppressor_AK','Att_Buttstock_AKS74U']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send60490331);
			// }
			
			// if( action_id == 60490332 ) // Spetsnaz kit VIP _ 2 _
			// {
				// string text_send60490332 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BagAssaultBlack','TacticalShirtBlack','JoeyXSunGlasses','BallisticHelmet_Black','CargoPants_Black','BalaclavaMask_Black','HighCapacityVest_Black','TacticalGloves_Black','MilitaryBoots_Black']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass','M_Glock_15Rnd','M_Glock_15Rnd','Glock19','Att_Light_TLR','M_Glock_15Rnd','Att_Suppressor_Pistol','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon', 'M_ak74_30Rnd_Black','M_ak74_30Rnd_Black']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['AKS74U_Black', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['M_ak74_30Rnd_Black','M_ak74_30Rnd_Black','Att_Suppressor_AK','Att_Buttstock_AKS74U']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send60490332);
			// }
			
			// if( action_id == 60490333 ) // Spetsnaz kit VIP _ 3 _
			// {
				// string text_send60490333 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = ['BagAssaultBlack','TacticalShirtBlack','JoeyXSunGlasses','BallisticHelmet_Black','CargoPants_Black','BalaclavaMask_Black','HighCapacityVest_Black','TacticalGloves_Black','MilitaryBoots_Black']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass','M_Glock_15Rnd','M_Glock_15Rnd','Glock19','Att_Light_TLR','M_Glock_15Rnd','Att_Suppressor_Pistol','consumable_matchbox', 'tool_leathersewingkit','CombatKnife','tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = ['drink_canteen','AmmoBox_545_20Rnd','AmmoBox_545_20Rnd','drink_canteen','food_canpeaches','food_canbakedbeans','food_cansardines','food_canspaghetti','food_cantuna','food_cantacticalbacon', 'M_ak74_30Rnd_Black','M_ak74_30Rnd_Black']; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['AKS74U_Black', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['M_ak74_30Rnd_Black','M_ak74_30Rnd_Black','Att_Suppressor_AK','Att_Buttstock_AKS74U']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send60490333);
			// }
			
			// if( action_id == 60490 ) // CQB kit VIP _ 1 _
			// {
				// string text_send6049 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'BagTortilla', 'SmershVestBackpack', 'GorkaHelmet_complete_Black', 'workinggloves_Black', 'CargoPants_Black', 'M65_Jacket_Black', 'Sneakers_Red', 'balaclavamask_blackskull' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['m4a1', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = [ 'att_bipod_atlas', 'Att_Ghillie_Woodland', 'att_buttstock_m4cqb_black', 'att_handguard_m4ris_black', 'att_optic_acog', 'm_stanag_30rnd_coupled', 'Att_Suppressor_M4' ]; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6049);
			// }
			
			// if( action_id == 604902 ) // CQB kit VIP _ 2 _
			// {
				// string text_send604902 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'BagTortilla', 'SmershVestBackpack', 'GorkaHelmet_complete_Black', 'workinggloves_Black', 'CargoPants_Black', 'M65_Jacket_Black', 'Sneakers_Red', 'balaclavamask_blackskull' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['m4a1', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = [ 'att_bipod_atlas', 'Att_Ghillie_Woodland', 'att_buttstock_m4cqb_black', 'att_handguard_m4ris_black', 'att_optic_acog', 'm_stanag_30rnd_coupled', 'Att_Suppressor_M4' ]; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send604902);
			// }
			
			// if( action_id == 604903 ) // CQB kit VIP _ 3 _
			// {
				// string text_send604903 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1];  _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: CQB Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'BagTortilla', 'SmershVestBackpack', 'GorkaHelmet_complete_Black', 'workinggloves_Black', 'CargoPants_Black', 'M65_Jacket_Black', 'Sneakers_Red', 'balaclavamask_blackskull' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled', 'm_stanag_30rnd_coupled' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['m4a1', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = [ 'att_bipod_atlas', 'Att_Ghillie_Woodland', 'att_buttstock_m4cqb_black', 'att_handguard_m4ris_black', 'att_optic_acog', 'm_stanag_30rnd_coupled', 'Att_Suppressor_M4' ]; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send604903);
			// }
			
			// if( action_id == 60500 ) // Assualt kit VIP _ 1 _
			// {
				// string text_send6050 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Assualt Loadout  Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'BagTortilla', 'SmershVestBackpack', 'GorkaHelmet_complete_Green', 'cargopants_green', 'm65_jacket_olive', 'workinggloves_Black', 'Sneakers_Green', 'balaclavamask_green' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'M_akm_drum', 'M_akm_drum' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['AKM', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Handguard_AK_Rail_Black','att_bipod_atlas','Att_Ghillie_Woodland','Att_Optic_PSO1','Att_Buttstock_AK_Wood_Camo','Att_Suppressor_AK','M_AKM_30Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6050);
			// }
			
			// if( action_id == 605002 ) // Assualt kit VIP_ 2 _
			// {
				// string text_send605002 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Assualt Loadout  Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'BagTortilla', 'SmershVestBackpack', 'GorkaHelmet_complete_Green', 'cargopants_green', 'm65_jacket_olive', 'workinggloves_Black', 'Sneakers_Green', 'balaclavamask_green' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'M_akm_drum', 'M_akm_drum' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['AKM', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Handguard_AK_Rail_Black','att_bipod_atlas','Att_Ghillie_Woodland','Att_Optic_PSO1','Att_Buttstock_AK_Wood_Camo','Att_Suppressor_AK','M_AKM_30Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605002);
			// }
			
			// if( action_id == 605003 ) // Assualt kit VIP_ 3 _
			// {
				// string text_send605003 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Assualt Loadout  Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'BagTortilla', 'SmershVestBackpack', 'GorkaHelmet_complete_Green', 'cargopants_green', 'm65_jacket_olive', 'workinggloves_Black', 'Sneakers_Green', 'balaclavamask_green' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'M_akm_drum', 'M_akm_drum' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['AKM', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Handguard_AK_Rail_Black','att_bipod_atlas','Att_Ghillie_Woodland','Att_Optic_PSO1','Att_Buttstock_AK_Wood_Camo','Att_Suppressor_AK','M_AKM_30Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605003);
			// }
			
			// if( action_id == 60510 ) //  Marksman kit VIP _ 1 _
			// {
				// string text_send6051 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Marksman Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'baghunting', 'SmershVestBackpack', 'ttsko_pants_Beige', 'TTsKO_Jacket_Camo', 'BandanaMask_camopattern', 'Sneakers_Green', 'WorkingGloves_Brown' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'm_svd_10Rnd', 'm_svd_10Rnd', 'm_svd_10Rnd', 'm_svd_10Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['SVD', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_PSO1','Att_Ghillie_Woodland','m_svd_10Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6051);
			// }
			
			// if( action_id == 605102 ) //  Marksman kit VIP _ 2 _
			// {
				// string text_send605102 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Marksman Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'baghunting', 'SmershVestBackpack', 'ttsko_pants_Beige', 'TTsKO_Jacket_Camo', 'BandanaMask_camopattern', 'Sneakers_Green', 'WorkingGloves_Brown' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'm_svd_10Rnd', 'm_svd_10Rnd', 'm_svd_10Rnd', 'm_svd_10Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['SVD', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_PSO1','Att_Ghillie_Woodland','m_svd_10Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605102);
			// }
			
			// if( action_id == 605103 ) //  Marksman kit VIP _ 3 _
			// {
				// string text_send605103 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Marksman Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'baghunting', 'SmershVestBackpack', 'ttsko_pants_Beige', 'TTsKO_Jacket_Camo', 'BandanaMask_camopattern', 'Sneakers_Green', 'WorkingGloves_Brown' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'm_svd_10Rnd', 'm_svd_10Rnd', 'm_svd_10Rnd', 'm_svd_10Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['SVD', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_PSO1','Att_Ghillie_Woodland','m_svd_10Rnd']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605103);
			// }
			
			// if( action_id == 60520 ) //  Sniper kit VIP _ 1 _
			// {
				// string text_send6052 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'baghunting', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'Ammo_308Win', 'Ammo_308Win', 'Ammo_308Win', 'Ammo_308Win' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['Winchester70_Black', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_Hunting','Att_Ghillie_Woodland']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6052);
			// }
			
			// if( action_id == 605202 ) //  Sniper kit VIP _ 2 _
			// {
				// string text_send605202 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'baghunting', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'Ammo_308Win', 'Ammo_308Win', 'Ammo_308Win', 'Ammo_308Win' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['Winchester70_Black', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_Hunting','Att_Ghillie_Woodland']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605202);
			// }
			
			// if( action_id == 605203 ) //  Sniper kit VIP _ 3 _
			// {
				// string text_send605203 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'baghunting', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'map_chernarus', 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'Ammo_308Win', 'Ammo_308Win', 'Ammo_308Win', 'Ammo_308Win' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['Winchester70_Black', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_Hunting','Att_Ghillie_Woodland']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605203);
			// }

			// if( action_id == 60580 ) //  FAL Green Gorka kit VIP  _ 1 _
			// {
				// string text_send6053 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: FAL Green Gorka Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'Gorka_up_flat', 'Gorka_pants_flat', 'BagAssaultGreen', 'GorkaHelmet_complete_Black', 'PlateCarrierComplete', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'M_Fal_20Rnd', 'M_Fal_20Rnd', 'AmmoBox_308Win_20Rnd', 'AmmoBox_308Win_20Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['FAL', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_ACOG','Att_Buttstock_FalFolding']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6053);
			// }
			
			// if( action_id == 605802 ) //  FAL Green Gorka kit VIP  _ 2 _
			// {
				// string text_send605802 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: FAL Green Gorka Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'Gorka_up_flat', 'Gorka_pants_flat', 'BagAssaultGreen', 'GorkaHelmet_complete_Black', 'PlateCarrierComplete', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'M_Fal_20Rnd', 'M_Fal_20Rnd', 'AmmoBox_308Win_20Rnd', 'AmmoBox_308Win_20Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['FAL', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_ACOG','Att_Buttstock_FalFolding']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605802);
			// }
			
			// if( action_id == 605803 ) //  FAL Green Gorka kit VIP _ 3 _
			// {
				// string text_send605803 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: FAL Green Gorka Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'Gorka_up_flat', 'Gorka_pants_flat', 'BagAssaultGreen', 'GorkaHelmet_complete_Black', 'PlateCarrierComplete', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'M_Fal_20Rnd', 'M_Fal_20Rnd', 'AmmoBox_308Win_20Rnd', 'AmmoBox_308Win_20Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['FAL', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_ACOG','Att_Buttstock_FalFolding']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605803);
			// }

			// if( action_id == 60590 ) //  B95 Ghillie-Sniper kit VIP  1
			// {
				// string text_send6059 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: B95 Ghillie-Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'GhillieSuitMossy', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'Ammo_308Win', 'Ammo_308Win', 'AmmoBox_308Win_20Rnd', 'AmmoBox_308Win_20Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['b95', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Ghillie_Woodland','Att_Optic_Hunting']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6059);
			// }
			
			// if( action_id == 605902 ) //  B95 Ghillie-Sniper kit VIP  2
			// {
				// string text_send605902 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: B95 Ghillie-Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'GhillieSuitMossy', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'Ammo_308Win', 'Ammo_308Win', 'AmmoBox_308Win_20Rnd', 'AmmoBox_308Win_20Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['b95', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Ghillie_Woodland','Att_Optic_Hunting']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605902);
			// }
			
			// if( action_id == 605903 ) //  B95 Ghillie-Sniper kit VIP  3
			// {
				// string text_send605903 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: B95 Ghillie-Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'GhillieSuitMossy', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'Ammo_308Win', 'Ammo_308Win', 'AmmoBox_308Win_20Rnd', 'AmmoBox_308Win_20Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['b95', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Ghillie_Woodland','Att_Optic_Hunting']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send605903);
			// }

			// if( action_id == 60600 ) //  VSS Ghillie-Sniper kit VIP  1
			// {
				// string text_send6060 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: VSS Ghillie-Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'GhillieSuitMossy', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'AmmoBox_9x39_20Rnd', 'AmmoBox_9x39_20Rnd', 'M_Vss_10Rnd', 'M_Vss_10Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['VSS', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_PSO1','Att_Optic_Hunting']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6060);
			// }
			
			// if( action_id == 606002 ) //  VSS Ghillie-Sniper kit VIP  2
			// {
				// string text_send60602 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: VSS Ghillie-Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'GhillieSuitMossy', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'AmmoBox_9x39_20Rnd', 'AmmoBox_9x39_20Rnd', 'M_Vss_10Rnd', 'M_Vss_10Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['VSS', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_PSO1','Att_Optic_Hunting']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send60602);
			// }
			
			// if( action_id == 606003 ) //  VSS Ghillie-Sniper kit VIP  3
			// {
				// string text_send606003 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; _jewpos = getposATL _x; _whoisjew = (vehicle _x); _inventorylist = itemsInInventory _x; { moveToGround _x; }forEach _inventorylist; [_x,format['VIP: VSS Ghillie-Sniper Loadout Spawned!'],'colorFriendly'] call fnc_playerMessage; sleep 1.3; _clothArr = [ 'ghilliehoodmossy', 'GhillieSuitMossy', 'SmershVestBackpack', 'BandanaMask_camopattern', 'USMC_Pants_Woodland', 'USMC_Jacket_Woodland', 'Sneakers_Green', 'workinggloves_Black' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _clothArr; sleep 1; _medArr = [ 'medical_transfusionkit', 'medical_splint', 'medical_bandagedressing', 'medical_morphine', 'medical_epinephrine' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _medArr; sleep 1; _invArr = [ 'FirefighterAxe_Black', 'compass', 'consumable_matchbox', 'tool_leathersewingkit', 'tool_canopener', 'tool_lockpick', 'tool_heatpack', 'tool_sewingkit', 'consumable_chemlight_white', 'consumable_chemlight_white' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _invArr; sleep 1; _foodArr = [ 'drink_canteen', 'drink_canteen', 'food_canpeaches', 'food_canbakedbeans', 'food_cansardines', 'food_canspaghetti', 'food_cantuna', 'food_cantacticalbacon', 'Consumable_Netting', 'Consumable_BurlapStrips', 'AmmoBox_9x39_20Rnd', 'AmmoBox_9x39_20Rnd', 'M_Vss_10Rnd', 'M_Vss_10Rnd' ]; { _Tomove = createVehicle [_x, [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1], [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _Tomove; _maxQuantity = maxQuantity _Tomove; if (_maxQuantity > 0) then { _Tomove setvariable ['quantity',_maxQuantity]; }; } forEach _foodArr; _pos = [_jewpos select 0,_jewpos select 1,(_jewpos select 2) + 1]; _item = createVehicle ['VSS', _pos, [], 0, 'CAN_COLLIDE']; sleep 2; _attGunArr = ['Att_Optic_PSO1','Att_Optic_Hunting']; {_item createInInventory _x;} forEach _attGunArr; sleep 1; _whoisjew moveToHands _item; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send606003);
			// }
			
			// if( action_id == 50500 ) // Fully Heal Player
			// {
				// string text_send5050 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; [_x,format['VIP: Player FULLY Healed!'],'colorFriendly'] call fnc_playerMessage; _x setVariable ['blood', 5000]; _x setVariable ['health', 5000]; _x setVariable ['bodytemperature',37]; _x setVariable ['stomach',3000]; _x setVariable ['energy',5000]; _x setVariable ['water',5000]; _x setDamage 0; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send5050);
			// }

			// if( action_id == 50690 ) //TP TO Staroye  1
			// {
				// string text_send5069 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Staroye!'],'colorFriendly'] call fnc_playerMessage; _x setPos [(10060.891)+ random(100),(5436.0332)+ random(100)]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send5069);
			// }
			
			// if( action_id == 506902 ) //TP TO Staroye  2
			// {
				// string text_send506902 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Staroye!'],'colorFriendly'] call fnc_playerMessage; _x setPos [(10060.891) + random(100), (5436.0332) + random(100)]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send506902);
			// }
			
			// if( action_id == 506903 ) //TP TO Staroye  3
			// {
				// string text_send506903 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Staroye!'],'colorFriendly'] call fnc_playerMessage; _x setPos [(10060.891)+ random(100), (5436.0332)+ random(100)]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send506903);
			// }
			
			// if( action_id == 50510 ) //TP TO CHERNO  1
			// {
				// string text_send5051 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Cherno!'],'colorFriendly'] call fnc_playerMessage; _x setPos [(7213.31)+ random(100), (3010.37)+ random(100),0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send5051);
			// }
			
			// if( action_id == 505102 ) //TP TO CHERNO  2
			// {
				// string text_send505102 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Cherno!'],'colorFriendly'] call fnc_playerMessage; _x setPos [(7213.31)+ random(100), (3010.37)+ random(100),0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send505102);
			// }
			
			// if( action_id == 505103 ) //TP TO CHERNO  3
			// {
				// string text_send505103 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Cherno!'],'colorFriendly'] call fnc_playerMessage; _x setPos [(7213.31)+ random(100), (3010.37)+ random(100),0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send505103);
			// }
			
			// if( action_id == 99990 ) //TP TO STARY TRADER
			// {
				// string text_send9999 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Stary Sobor!'],'colorFriendly'] call fnc_playerMessage; _x setPos [6277.0186, 7725.7163,0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send9999);
			// }

			// if( action_id == 50560 ) // TP coords Lopatino  1
			// {
				// string text_send5056 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Lopatino!'],'colorFriendly'] call fnc_playerMessage; _x setPos [(2891.01)+ random(100), (9768.28)+ random(100),0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send5056);
			// }
			
			// if( action_id == 505602 ) // TP coords Lopatino  2
			// {
				// string text_send505602 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Lopatino!'],'colorFriendly'] call fnc_playerMessage; _x setPos [(2891.01)+ random(100), (9768.28)+ random(100),0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send505602);
			// }
			
			// if( action_id == 505603 ) // TP coords Lopatino  3
			// {
				// string text_send505603 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Lopatino!'],'colorFriendly'] call fnc_playerMessage; _x setPos [(2891.01)+ random(100), (9768.28)+ random(100),0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send505603);
			// }
			
			// if( action_id == 660500 ) // TP Electro 1
			// {
				// string text_send50563 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,1200] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Electro!'],'colorFriendly'] call fnc_playerMessage; _x setPos [(10486.641)+ random(100),(2173.1155)+ random(100),0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send50563);
			// }
			
			// if( action_id == 6605002 ) // TP Electro 2
			// {
				// string text_send6605002 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,600] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Electro!'],'colorFriendly'] call fnc_playerMessage; _x setPos [(10486.641)+ random(100),(2173.1155)+ random(100),0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6605002);
			// }
			
			// if( action_id == 6605003 ) // TP Electro 3
			// {
				// string text_send6605003 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Electro!'],'colorFriendly'] call fnc_playerMessage; _x setPos [(10486.641)+ random(100),(2173.1155)+ random(100),0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6605003);
			// }

			// if( action_id == 6605103 ) // TP Balota  3
			// {
				// string text_send6605103 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Balota!'],'colorFriendly'] call fnc_playerMessage; _x setPos [(4922.41)+ random(100), (2833.85)+ random(100),0]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6605103);
			// }

			// if( action_id == 6605203 ) // TP Zelenogorsk  3
			// {
				// string text_send6605203 = "{ _Puid = _x getVariable ['GU_ID',0]; _ActStat = _x getVariable ['VIP_act',0]; if (_Puid == '" + Player_UID + "') then { _return = ['" + Player_UID + "','RET'] call DZ_CheckCoolDown; if (_return == 0) then { _x setVariable ['VIP_act',1]; _id = (owner _x); _uid = getClientUID _id; _type = 'ADD'; _return = [_type,_uid,_id,300] call DZ_VIP_Cool_Down; [_x,format['VIP: Teleported to Zelenogorsk!'],'colorFriendly'] call fnc_playerMessage; _x setPos [(2607.9495)+ random(100), (5024.166)+ random(100)]; } else { [_x,format['VIP: Privilege Already Granted, Available in: %1 secs',_return],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send6605203);
			// }				
		
		// if ( action_id == 663488 )
		// {
			// string buy_scipt663488 = "{ _itemprice = 1500; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _typeofbox = 'basebuildkit'; _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['WindscreenBox', _pos, [], 0, 'CAN_COLLIDE']; _item setVariable ['modifiers',_typeofbox]; _whoisjew moveToHands _item; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
		    // GetGame().ExecuteSQF(buy_scipt663488);
		// }
		
		// if ( action_id == 5578900 )
		// {

		// }
			
		// if ( action_id == 55789 )
		// {
			// In_Hands.SetVariable("quantity",0);
			// player.SetVariable("InDanger",5);
			// string player_ActionPour = " { _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x playAction 'PlayerEmptyJerryCan'; (itemInHands _x) setQuantity 0; [_x,format['I am Pouring all the gasoline on victim!'],'colorAction'] call fnc_playerMessage; }; }forEach players; ";
			// GetGame().ExecuteSQF(player_ActionPour);
		// }
			
		// if ( action_id == 55789778 )
		// {
			// player.SetVariable("InDanger",0);
			// string player_ActionLight = " ['BURN','" + Player_UID + "','" + targUID + "'] call DZ_BurnPlayerScript; ";
			// GetGame().ExecuteSQF(player_ActionLight);
		// }
			
		// if ( action_id == 5578977889 )
		// {
			// string player_ActionCut = " ['CUT','" + Player_UID + "','" + targUID + "'] call DZ_BurnPlayerScript; ";
			// GetGame().ExecuteSQF(player_ActionCut);
		// }
		
		// //Collect Scaps Script
		// if ( action_id == 1738654 )
		// {
			// EntityAI TargetVeh;
			// TargetVeh = GetGame().GetPlayerCursorObject(player);
			// if ( TargetVeh != NULL && TargetVeh.IsKindOf("Wreck_Base") )
			// {
				// TargetVeh.SetVariable("isUseable",1);
				
				// Action_Wait = new Timer();
				// Action_Wait.Run(6.35, this, "CollectMetal", new Param1<PlayerBase>(player));
				// player.LockInventory(LOCK_FROM_SCRIPT);
				// player.PlayActionGlobal("digHoe");
			// }
		// }
		
		// if ( action_id == 070888 )
		// {
			// string buy_scipt070888 = "{ _itemprice = 500; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['Container_BarrelGreen', _pos, [], 0, 'CAN_COLLIDE']; _whoisjew moveToHands _item; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			// GetGame().ExecuteSQF(buy_scipt070888);
		// }
		
	    // if ( action_id == 070899 )
		// {
			// string buy_scipt070899 = "{ _itemprice = 500; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['Container_BarrelYellow', _pos, [], 0, 'CAN_COLLIDE']; _whoisjew moveToHands _item; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			// GetGame().ExecuteSQF(buy_scipt070899);
		// }
		
		   // /*===============================Vehicle Scripts Staroye==========================================*/
		
			// if( action_id == 3203 ) // CIVI SEDAN BUY SCRIPT COST: 3500
			// {
			  // string buy_scipt3203 = "{ _itemprice = 3500; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['CivilianSedan', [10139.9,5464.23,0.00138855], [], 0, 'CAN_COLLIDE']; _attGunArr = ['CarBattery','EngineBelt','CarRadiator','TireRepairKit','HeadlightH7','SparkPlug','CivSedanWheel','CivSedanWheel','CivSedanWheel','CivSedanWheel','CivSedanDoors_Driver','CivSedanDoors_CoDriver','CivSedanDoors_BackLeft','CivSedanDoors_BackRight','CivSedanHood','CivSedanTrunk']; {_item createInInventory _x;} forEach _attGunArr; _x setpos (getpos _item); _item setVehicleLock 'LOCKED'; _item setVariable ['ownerID',_Puid]; _item setVariable ['lockstat',1]; _carKey = _x createInInventory 'Tool_HandcuffKeys'; _carKey setVariable ['note',_Puid]; [_x,format['Item Purchased! Key Added to Inventory! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			  // GetGame().ExecuteSQF(buy_scipt3203);
			// }
			
			// if( action_id == 3202 ) // Offroad hatchback BUY SCRIPT COST: 2500
			// {
			  // string buy_scipt3202 = "{ _itemprice = 4000; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['OffroadHatchback', [10139.9,5464.23,0.00138855], [], (random 7), 'CAN_COLLIDE']; _vehATT = ['CarBattery','EngineBelt','CarRadiator','TireRepairKit','HeadlightH7','SparkPlug','HatchbackWheel','HatchbackWheel','HatchbackWheel','HatchbackWheel','HatchbackDoors_Driver','HatchbackDoors_CoDriver','HatchbackHood','HatchbackTrunk']; {_item createInInventory _x;} forEach _vehATT; _x setpos (getpos _item); _item setVehicleLock 'LOCKED'; _item setVariable ['ownerID',_Puid]; _item setVariable ['lockstat',1]; _carKey = _x createInInventory 'Tool_HandcuffKeys'; _carKey setVariable ['note',_Puid]; [_x,format['Item Purchased! Key Added to Inventory! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			  // GetGame().ExecuteSQF(buy_scipt3202);
			// }
			
			// if( action_id == 3204 ) // BUY V3S
			// {
			  // string buy_scipt3204 = "{ _itemprice = 4500; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['V3S_Chassis', [10139.9,5464.23,0.00138855], [], 0, 'CAN_COLLIDE']; _attGunArr = ['TruckBattery','CarBattery','TruckExhaust','EngineBelt','CarRadiator','TruckRadiator','TireRepairKit','HeadlightH7','GlowPlug','SparkPlug','V3SWheel','V3SWheel','V3SWheelDouble','V3SWheelDouble','V3SWheelDouble','V3SWheelDouble','V3SDoors_Driver','V3SDoors_CoDriver','V3SHood']; {_item createInInventory _x;} forEach _attGunArr; _x setpos (getpos _item); _item setVariable ['ownerID',_Puid];  _item setVehicleLock 'LOCKED'; _item setVariable ['lockstat',1]; _carKey = _x createInInventory 'Tool_HandcuffKeys'; _carKey setVariable ['note',_Puid]; [_x,format['Item Purchased! Key Added to Inventory! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			  // GetGame().ExecuteSQF(buy_scipt3204);
			// }
			
			// if( action_id == 3201 ) // BUY V3S CARGO
			// {
			  // string buy_scipt3201 = "{ _itemprice = 5000; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['V3S_Cargo', [10139.9,5464.23,0.00138855], [], 0, 'CAN_COLLIDE']; _attGunArr = ['TruckBattery','TruckExhaust','EngineBelt','TruckRadiator','TireRepairKit','HeadlightH7','GlowPlug','V3SWheel','V3SWheel','V3SWheelDouble','V3SWheelDouble','V3SWheelDouble','V3SWheelDouble','V3SDoors_Driver','V3SDoors_CoDriver','V3SHood']; {_item createInInventory _x;} forEach _attGunArr; _x setpos (getpos _item); _item setVehicleLock 'LOCKED'; _item setVariable ['ownerID',_Puid]; _item setVariable ['lockstat',1]; _carKey = _x createInInventory 'Tool_HandcuffKeys'; _carKey setVariable ['note',_Puid]; [_x,format['Item Purchased! Key Added to Inventory! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			  // GetGame().ExecuteSQF(buy_scipt3201);
			// }
		   // /*=========================================================================================*/
		   // /*===============================Vehicle Scripts Stary==========================================*/
			// if( action_id == 4203 ) // CIVI SEDAN BUY SCRIPT COST: 3500
			// {
			  // string buy_scipt4203 = "{ _itemprice = 3500; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['CivilianSedan', [6283.55,7720.17,0.00146484], [], 0, 'CAN_COLLIDE']; _attGunArr = ['CarBattery','EngineBelt','CarRadiator','TireRepairKit','HeadlightH7','SparkPlug','CivSedanWheel','CivSedanWheel','CivSedanWheel','CivSedanWheel','CivSedanDoors_Driver','CivSedanDoors_CoDriver','CivSedanDoors_BackLeft','CivSedanDoors_BackRight','CivSedanHood','CivSedanTrunk']; {_item createInInventory _x;} forEach _attGunArr; _x setpos (getpos _item); _item setVehicleLock 'LOCKED'; _item setVariable ['ownerID',_Puid]; _item setVariable ['lockstat',1]; _carKey = _x createInInventory 'Tool_HandcuffKeys'; _carKey setVariable ['note',_Puid]; [_x,format['Item Purchased! Key Added to Inventory! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			  // GetGame().ExecuteSQF(buy_scipt4203);
			// }
			
			// if( action_id == 4202 ) // Offroad hatchback BUY SCRIPT COST: 2500
			// {
			  // string buy_scipt4202 = "{ _itemprice = 4000; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['OffroadHatchback', [6283.55,7720.17,0.00146484], [], (random 7), 'CAN_COLLIDE']; _vehATT = ['CarBattery','EngineBelt','CarRadiator','TireRepairKit','HeadlightH7','SparkPlug','HatchbackWheel','HatchbackWheel','HatchbackWheel','HatchbackWheel','HatchbackDoors_Driver','HatchbackDoors_CoDriver','HatchbackHood','HatchbackTrunk']; {_item createInInventory _x;} forEach _vehATT; _x setpos (getpos _item); _item setVehicleLock 'LOCKED'; _item setVariable ['ownerID',_Puid]; _item setVariable ['lockstat',1]; _carKey = _x createInInventory 'Tool_HandcuffKeys'; _carKey setVariable ['note',_Puid]; [_x,format['Item Purchased! Key Added to Inventory! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			  // GetGame().ExecuteSQF(buy_scipt4202);
			// }
			
			// if( action_id == 4204 ) // BUY V3S
			// {
			  // string buy_scipt4204 = "{ _itemprice = 4500; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['V3S_Chassis', [6283.55,7720.17,0.00146484], [], 0, 'CAN_COLLIDE']; _attGunArr = ['TruckBattery','CarBattery','TruckExhaust','EngineBelt','CarRadiator','TruckRadiator','TireRepairKit','HeadlightH7','GlowPlug','SparkPlug','V3SWheel','V3SWheel','V3SWheelDouble','V3SWheelDouble','V3SWheelDouble','V3SWheelDouble','V3SDoors_Driver','V3SDoors_CoDriver','V3SHood']; {_item createInInventory _x;} forEach _attGunArr; _x setpos (getpos _item); _item setVariable ['ownerID',_Puid];  _item setVehicleLock 'LOCKED'; _item setVariable ['lockstat',1]; _carKey = _x createInInventory 'Tool_HandcuffKeys'; _carKey setVariable ['note',_Puid]; [_x,format['Item Purchased! Key Added to Inventory! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			  // GetGame().ExecuteSQF(buy_scipt4204);
			// }
			
			// if( action_id == 4201 ) // BUY V3S CARGO
			// {
			  // string buy_scipt16 = "{ _itemprice = 5000; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['V3S_Cargo', [6283.55,7720.17,0.00146484], [], 0, 'CAN_COLLIDE']; _attGunArr = ['TruckBattery','TruckExhaust','EngineBelt','TruckRadiator','TireRepairKit','HeadlightH7','GlowPlug','V3SWheel','V3SWheel','V3SWheelDouble','V3SWheelDouble','V3SWheelDouble','V3SWheelDouble','V3SDoors_Driver','V3SDoors_CoDriver','V3SHood']; {_item createInInventory _x;} forEach _attGunArr; _x setpos (getpos _item); _item setVehicleLock 'LOCKED'; _item setVariable ['ownerID',_Puid]; _item setVariable ['lockstat',1]; _carKey = _x createInInventory 'Tool_HandcuffKeys'; _carKey setVariable ['note',_Puid]; [_x,format['Item Purchased! Key Added to Inventory! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			  // GetGame().ExecuteSQF(buy_scipt16);
			// }
		    // /*=========================================================================================*/
		
		    // /*===============================Vehicle Scripts Lopatino==========================================*/
			// if( action_id == 5203 ) // CIVI SEDAN BUY SCRIPT COST: 3500
			// {
			  // string buy_scipt5203 = "{ _itemprice = 3500; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['CivilianSedan', [2184.83,9644.13,0.00143433], [], 0, 'CAN_COLLIDE']; _attGunArr = ['CarBattery','EngineBelt','CarRadiator','TireRepairKit','HeadlightH7','SparkPlug','CivSedanWheel','CivSedanWheel','CivSedanWheel','CivSedanWheel','CivSedanDoors_Driver','CivSedanDoors_CoDriver','CivSedanDoors_BackLeft','CivSedanDoors_BackRight','CivSedanHood','CivSedanTrunk']; {_item createInInventory _x;} forEach _attGunArr; _x setpos (getpos _item); _item setVehicleLock 'LOCKED'; _item setVariable ['ownerID',_Puid]; _item setVariable ['lockstat',1]; _carKey = _x createInInventory 'Tool_HandcuffKeys'; _carKey setVariable ['note',_Puid]; [_x,format['Item Purchased! Key Added to Inventory! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			  // GetGame().ExecuteSQF(buy_scipt5203);
			// }
			
			// if( action_id == 5202 ) // Offroad hatchback BUY SCRIPT COST: 4000
			// {
			  // string buy_scipt5202 = "{ _itemprice = 4000; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['OffroadHatchback', [2184.83,9644.13,0.00143433], [], 0, 'CAN_COLLIDE']; _vehATT = ['CarBattery','EngineBelt','CarRadiator','TireRepairKit','HeadlightH7','SparkPlug','HatchbackWheel','HatchbackWheel','HatchbackWheel','HatchbackWheel','HatchbackDoors_Driver','HatchbackDoors_CoDriver','HatchbackHood','HatchbackTrunk']; {_item createInInventory _x;} forEach _vehATT; _x setpos (getpos _item); _item setVehicleLock 'LOCKED'; _item setVariable ['ownerID',_Puid]; _item setVariable ['lockstat',1]; _carKey = _x createInInventory 'Tool_HandcuffKeys'; _carKey setVariable ['note',_Puid]; [_x,format['Item Purchased! Key Added to Inventory! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			  // GetGame().ExecuteSQF(buy_scipt5202);
			// }
			
			// if( action_id == 5204 ) // BUY V3S
			// {
			  // string buy_scipt5204 = "{ _itemprice = 4500; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['V3S_Chassis', [2184.83,9644.13,0.00143433], [], 0, 'CAN_COLLIDE']; _attGunArr = ['TruckBattery','CarBattery','TruckExhaust','EngineBelt','CarRadiator','TruckRadiator','TireRepairKit','HeadlightH7','GlowPlug','SparkPlug','V3SWheel','V3SWheel','V3SWheelDouble','V3SWheelDouble','V3SWheelDouble','V3SWheelDouble','V3SDoors_Driver','V3SDoors_CoDriver','V3SHood']; {_item createInInventory _x;} forEach _attGunArr; _x setpos (getpos _item); _item setVariable ['ownerID',_Puid];  _item setVehicleLock 'LOCKED'; _item setVariable ['lockstat',1]; _carKey = _x createInInventory 'Tool_HandcuffKeys'; _carKey setVariable ['note',_Puid]; [_x,format['Item Purchased! Key Added to Inventory! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			  // GetGame().ExecuteSQF(buy_scipt5204);
			// }
			
			// if( action_id == 5201 ) // BUY V3S CARGO
			// {
			  // string buy_scipt5201 = "{ _itemprice = 5000; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['V3S_Cargo', [2184.83,9644.13,0.00143433], [], 0, 'CAN_COLLIDE']; _attGunArr = ['TruckBattery','TruckExhaust','EngineBelt','TruckRadiator','TireRepairKit','HeadlightH7','GlowPlug','V3SWheel','V3SWheel','V3SWheelDouble','V3SWheelDouble','V3SWheelDouble','V3SWheelDouble','V3SDoors_Driver','V3SDoors_CoDriver','V3SHood']; {_item createInInventory _x;} forEach _attGunArr; _x setpos (getpos _item); _item setVehicleLock 'LOCKED'; _item setVariable ['ownerID',_Puid]; _item setVariable ['lockstat',1]; _carKey = _x createInInventory 'Tool_HandcuffKeys'; _carKey setVariable ['note',_Puid]; [_x,format['Item Purchased! Key Added to Inventory! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			  // GetGame().ExecuteSQF(buy_scipt5201);
			// }
		    // /*=========================================================================================*/
			// /*=====================================Trader Clothing Scripts=======================================*/
			
			// if( action_id == 9901 ) //  KIT 1
			// {
				// string buy_scipt9901 = " { _itemprice = 500; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _itempack = ['Hunting_jacket_autumn','HunterPants_Autumn','BoonieHat_dubok','HikingBoots_Brown','RocketAviators','PlateCarrierComplete']; _itemBox = createVehicle ['BagHunting', _pos, [], (random 1), 'CAN_COLLIDE']; {null = _itemBox createInInventory _x} forEach _itempack; _whoisjew moveToHands _itemBox; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(buy_scipt9901);
			// }
			// if( action_id == 9902 ) //  KIT 2
			// {
				// string buy_scipt9902 = "{ _itemprice = 550; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _itempack = ['Gorka_up_summer','Gorka_pants_summer','BoonieHat_flecktran','JungleBoots_Black','RocketAviators','UKAssVest_Khaki']; _itemBox = createVehicle ['BagHunting', _pos, [], (random 1), 'CAN_COLLIDE']; {null = _itemBox createInInventory _x} forEach _itempack; _whoisjew moveToHands _itemBox; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(buy_scipt9902);
			// }
			// if( action_id == 9903 ) //  KIT 3
			// {
				// string buy_scipt9903 = "{ _itemprice = 600; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _itempack = ['PoliceJacket_orel','Police_pants_orel','BallisticHelmet_UN','CombatBoots_Brown','PressVest_LightBlue','RocketAviators']; _itemBox = createVehicle ['BagHunting', _pos, [], (random 1), 'CAN_COLLIDE']; {null = _itemBox createInInventory _x} forEach _itempack; _whoisjew moveToHands _itemBox; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(buy_scipt9903);
			// }
			// if( action_id == 9904 ) //  KIT 4
			// {
				// string buy_scipt9904 = "{ _itemprice = 650; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _itempack = ['M65_Jacket_Black','CargoPants_Black','BallisticHelmet_Black','CombatBoots_Black','HighCapacityVest_Black','RocketAviators']; _itemBox = createVehicle ['BagHunting', _pos, [], (random 1), 'CAN_COLLIDE']; {null = _itemBox createInInventory _x} forEach _itempack; _whoisjew moveToHands _itemBox; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(buy_scipt9904);
			// }
			// if( action_id == 9905 ) //  KIT  5
			// {
				// string buy_scipt9905 = "{ _itemprice = 700; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _itempack = ['M65_Jacket_Olive','CargoPants_Green','BallisticHelmet_Green','CombatBoots_Green','HighCapacityVest_Olive','RocketAviators']; _itemBox = createVehicle ['BagHunting', _pos, [], (random 1), 'CAN_COLLIDE']; {null = _itemBox createInInventory _x} forEach _itempack; _whoisjew moveToHands _itemBox; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(buy_scipt9905);
			// }
			// if( action_id == 9906 ) //  KIT 6
			// {
				// string buy_scipt9906 = "{ _itemprice = 750; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _itempack = ['M65_Jacket_Tan','CargoPants_Beige','BallisticHelmet_Green','CombatBoots_Beige','UKAssVest_Khaki','RocketAviators']; _itemBox = createVehicle ['BagHunting', _pos, [], (random 1), 'CAN_COLLIDE']; {null = _itemBox createInInventory _x} forEach _itempack; _whoisjew moveToHands _itemBox; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(buy_scipt9906);
			// }
			// if( action_id == 9907 ) //  KIT 7
			// {
				// string buy_scipt9907 = "{ _itemprice = 1000; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _itempack = ['M65_Jacket_Tan','CargoPants_Beige','CombatBoots_Beige','HighCapacityVest_Olive','GhillieHoodWoodland']; _Ghillie = createVehicle ['GhillieSuitWoodland', _pos, [], 0, 'CAN_COLLIDE']; _itemBox = createVehicle ['BagMountain_Green', _pos, [], 0, 'CAN_COLLIDE']; {null = _itemBox createInInventory _x} forEach _itempack; _bagP = (vehicle _x) itemInSlot 'Back'; moveToGround _bagP; _x moveToInventory _Ghillie; _whoisjew moveToHands _itemBox; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(buy_scipt9907);
			// }
			// if( action_id == 9908 ) //  KIT 8
			// {
				// string buy_scipt9908 = "";
				// GetGame().ExecuteSQF(buy_scipt9908);
			// }
			// if( action_id == 9909 ) //  KIT 9
			// {
				// string buy_scipt9909 = "";
				// GetGame().ExecuteSQF(buy_scipt9909);
			// }
			// if( action_id == 9910 ) //  KIT 10
			// {
				// string buy_scipt9910 = "";
				// GetGame().ExecuteSQF(buy_scipt9910);
			// }

			// /*=========================================================================================*/
			// if ( action_id == 00)  // Vehicle Lock Script
			// {
				// EntityAI PPTarVeh;
				// PPTarVeh = GetGame().GetPlayerCursorObject(player);
				// if ( PPTarVeh != NULL && PPTarVeh.IsKindOf("Car_DZ"))
				// {
					
					// string veh_lock = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['Vehicle Locked!'],'colorAction'] call fnc_playerMessage; _target = playerTarget (owner _x); _target setVehicleLock 'LOCKED'; _target setVariable ['lockstat',1]; _target say3D ['dog_callBack', 50, 111450]; }; }forEach players;";
					// GetGame().ExecuteSQF(veh_lock);
					// PPTarVeh.LockInventory(LOCK_FROM_SCRIPT);
					
				// }
			// }
			
			// if ( action_id == 01) //Vehicle Unlock Script
			// {
				// EntityAI PPTarVehUnlock;
				// PPTarVehUnlock = GetGame().GetPlayerCursorObject(player);
				// if ( PPTarVehUnlock != NULL && PPTarVehUnlock.IsKindOf("Car_DZ"))
				// {
				 // string veh_unlock = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { [_x,format['Vehicle Unlocked!'],'colorFriendly'] call fnc_playerMessage; _target = playerTarget (owner _x); _target setVehicleLock 'UNLOCKED'; _target setVariable ['lockstat',0];  _target say3D ['dog_slowDown', 50, 111450]; }; }forEach players;";
				 // GetGame().ExecuteSQF(veh_unlock);
				 // PPTarVehUnlock.UnlockInventory(LOCK_FROM_SCRIPT);
				// }
			// }
			
			// if( action_id == 070 ) // Sell Item for 25 Coins function
			// {
				// if ( In_Hands != NULL )
				// {
				// string msg_tarde0 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; _addcoins = _Pmoney + 25; _x setVariable ['Coins',_addcoins]; [_x,format['Item Sold for 25 Coins!'],'colorFriendly'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_addcoins],'colorAction'] call fnc_playerMessage; }; }forEach players;";
				// GetGame().ExecuteSQF(msg_tarde0);
				// In_Hands.Delete();
				// }
			// }
			
			// if( action_id == 071 ) // SELL ALL FUNCTION
			// {
				// if ( In_Hands != NULL )
				// {
				// string msg_tarde1 = "{ _Puid = _x getVariable ['GU_ID',0]; _player = (vehicle _x); if (_Puid == '" + Player_UID + "') then { _totalearned = 0; _amountofitem = 0; _ganja = itemsInInventory _player; { if ((typeOf _x) == 'Fruit_Cannabis') then { _Pmoney = _player getVariable ['Coins',0]; _addcoins = _Pmoney + 25; _player setVariable ['Coins',_addcoins]; _totalearned = _totalearned + 25; _amountofitem = _amountofitem + 1; deleteVehicle _x; }; }forEach _ganja; _newbalance = _x getVariable ['Coins',0]; [_x,format['All %1 Items Sold for %2 Coins',_amountofitem,_totalearned],'colorAction'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_newbalance],'colorFriendly'] call fnc_playerMessage; }; }forEach players;";
				// GetGame().ExecuteSQF(msg_tarde1);
				// }
			// }
			
			// if ( action_id == 15)
			// {
			 // string buy_scipt15 = "{ _itemprice = 50; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _typeofbox = 'basebuild'; _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['WindscreenBox', _pos, [], 0, 'CAN_COLLIDE']; _item setVariable ['modifiers',_typeofbox]; _whoisjew moveToHands _item; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			 // GetGame().ExecuteSQF(buy_scipt15);
			// // player.LockInventory(LOCK_FROM_SCRIPT);
			// }
			
			// if ( action_id == 16)
			// {
				// ItemBase Holo_tool;
				// Holo_tool = player.GetEntityInHands();
				// if ( Holo_tool != NULL )
				// {
					// string obj_JEW = Holo_tool.GetType();
					// PlacingStart(obj_JEW);
					// PlacementStat = "true";
					// player.LockInventory(LOCK_FROM_SCRIPT);
					// GetGame().ExecuteSQF("{_Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setSlotLock ['Hands',true];  }; }forEach players;");
				// }
			// }

			// if ( action_id == 17)
			// {
				// if ( In_Hands != NULL )
				// {
					// if ( In_Hands.IsKindOf("EN5C_HescoBox") )
					// {
						// ItemBase TargetObjHolo1;
						// TargetObjHolo1 = g_Game.CreateObject(In_Hands.GetType(), player.GetPosition());
						// PlacingFinish(TargetObjHolo1);
						// In_Hands.Delete();
						// PlacementStat = "false";
						// player.UnlockInventory(LOCK_FROM_SCRIPT);
						// TargetObjHolo1.SetAnimationPhase ( "filled", 0 );
					// }else {
						// ItemBase TargetObjHolo;
						// TargetObjHolo = g_Game.CreateObject(In_Hands.GetType(), player.GetPosition());
					// if ( In_Hands != NULL && TargetObjHolo != NULL)
					// {
						// PlacingFinish(TargetObjHolo);
						// In_Hands.Delete();
						// PlacementStat = "false";
						// player.UnlockInventory(LOCK_FROM_SCRIPT);
						// GetGame().ExecuteSQF("{_Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setSlotLock ['Hands',false];  }; }forEach players;");
						
					// }
				// }
					

				// }
			// }
		
			// if ( action_id == 18)
			// {
				// ItemBase In_Handsitt;
		        // In_Handsitt = player.GetEntityInHands();
				// if ( In_Handsitt != NULL )
				// {
					// // Server side
					// if ( GetGame().IsMultiplayer() && GetGame().IsServer())
					// {
						// RPCSingleParam(RPC_PLACING_STOP, NULL, player);
					// }
					// player.RemoveItemFromHands(In_Handsitt);
					// delete m_Hologram;
					// PlacementStat = "false";
					// GetGame().ExecuteSQF("{_Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _x setSlotLock ['Hands',false];  }; }forEach players;");
					// player.UnlockInventory(LOCK_FROM_SCRIPT);
				// }
			// }
			
			// if( action_id == 93 ) //  Disable Spectate mode
			// {
				// string text_send93 = " DZ_IsSpectate = 'false'; { _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _on = 'OFF'; _x setVariable ['SpectateMode',_on]; [_x,format['Spectate Mode stopped.'],'colorAction'] call fnc_playerMessage; }; }forEach players;";
				// GetGame().ExecuteSQF(text_send93);
			// }
			
			// if( action_id == 92 ) // Spectate function
			// {
			   // player.GetVariable("Cli_Name",Admin_Name);
			   // string spectate_UPDATER = "_AdminName = '"+Admin_Name+"'; _targetName = '"+targName+"'; { if (name _x == '"+targName+"') then { [_AdminName,_targetName] call DZ_camUPDATE; };  }forEach players;";
			   // GetGame().ExecuteSQF(spectate_UPDATER);
			   
			   // string spectate_CAM = " _AdminName = '"+Admin_Name+"'; _targetName = '"+targName+"'; { if (name _x == '"+targName+"') then { [_AdminName,_targetName] call DZ_camSPAWNER; }; }forEach players;";
			   // GetGame().ExecuteSQF(spectate_CAM);
			// }
			
			// if( action_id == 0701 ) // AKM BUY SCRIPT COST: 900 coins
			// {
			  // string buy_scipt0 = "{ _itemprice = 900; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['AKM', _pos, [], 0, 'CAN_COLLIDE']; _attGunArr = ['Att_Handguard_AK_Rail_Black','att_bipod_atlas','Att_Ghillie_Woodland','Att_Optic_PSO1','Att_Buttstock_AK_Wood_Camo','Att_Suppressor_AK','M_AKM_30Rnd']; {_item createInInventory _x;} forEach _attGunArr; _whoisjew moveToHands _item; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			  // GetGame().ExecuteSQF(buy_scipt0);
			// }
			// if( action_id == 0702 ) // M4A1 BUY SCRIPT COST: 1000
			// {
			  // string buy_scipt1 = "{ _itemprice = 1000; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['M4A1', _pos, [], 0, 'CAN_COLLIDE']; _attGunArr = ['att_bipod_atlas','Att_Ghillie_Woodland','att_buttstock_m4cqb_black','att_handguard_m4ris_black','att_optic_acog','m_stanag_30rnd','Att_Suppressor_M4']; {_item createInInventory _x;} forEach _attGunArr; _whoisjew moveToHands _item; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			  // GetGame().ExecuteSQF(buy_scipt1);
			// }
			// if( action_id == 0703 ) // AK101 BUY SCRIPT COST: 850
			// {
			  // string buy_scipt2 = "{ _itemprice = 850; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['AK101', _pos, [], 0, 'CAN_COLLIDE']; _attGunArr = ['Att_Handguard_AK_Rail_Black','att_bipod_atlas','Att_Ghillie_Woodland','Att_Optic_PSO1','Att_Buttstock_AK_Wood_Camo','Att_Suppressor_AK','M_ak101_30Rnd']; {_item createInInventory _x;} forEach _attGunArr; _whoisjew moveToHands _item; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			  // GetGame().ExecuteSQF(buy_scipt2);
			// }
			// if( action_id == 0704 ) // AUG BUY SCRIPT COST: 900
			// {
			  // string buy_scipt3 = "{ _itemprice = 900; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['AugSteyr', _pos, [], 0, 'CAN_COLLIDE']; _attGunArr = ['Att_Suppressor_M4','M_STANAG_30Rnd_Coupled']; {_item createInInventory _x;} forEach _attGunArr; _whoisjew moveToHands _item; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			  // GetGame().ExecuteSQF(buy_scipt3);
			// }
			// if( action_id == 0705 ) // WINCHESTER BUY SCRIPT COST: 800
			// {
			  // string buy_scipt4 = "{ _itemprice = 800; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['Winchester70_Black', _pos, [], 0, 'CAN_COLLIDE']; _attGunArr = ['att_bipod_atlas','Att_Ghillie_Woodland','Att_Optic_Hunting']; {_item createInInventory _x;} forEach _attGunArr; _whoisjew moveToHands _item; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; _x createInInventory 'AmmoBox_308Win_20Rnd'; _x createInInventory 'AmmoBox_308Win_20Rnd'; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			  // GetGame().ExecuteSQF(buy_scipt4);
			// }
			// if( action_id == 0706 ) // CIVI SEDAN BUY SCRIPT COST: 3500
			// {
			  // string buy_scipt5 = "{ _itemprice = 3500; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['CivilianSedan', [2835.6514, 9879.8057, 6.1035156e-005], [], 0, 'CAN_COLLIDE']; _attGunArr = ['CarBattery','EngineBelt','CarRadiator','TireRepairKit','HeadlightH7','SparkPlug','CivSedanWheel','CivSedanWheel','CivSedanWheel','CivSedanWheel','CivSedanDoors_Driver','CivSedanDoors_CoDriver','CivSedanDoors_BackLeft','CivSedanDoors_BackRight','CivSedanHood','CivSedanTrunk']; {_item createInInventory _x;} forEach _attGunArr; _item setVehicleLock 'LOCKED'; _item setVariable ['ownerID',_Puid]; _item setVariable ['lockstat',1]; _carKey = _x createInInventory 'Tool_HandcuffKeys'; _carKey setVariable ['note',_Puid]; [_x,format['Item Purchased! Key Add to Inventory! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			  // GetGame().ExecuteSQF(buy_scipt5);
			// }
			
			// if( action_id == 0803 ) // Offroad hatchback BUY SCRIPT COST: 4000
			// {
			  // string buy_scipt0803 = "{ _itemprice = 4000; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['OffroadHatchback', [2835.6514, 9879.8057, 6.1035156e-005], [], (random 7), 'CAN_COLLIDE']; _vehATT = ['CarBattery','EngineBelt','CarRadiator','TireRepairKit','HeadlightH7','SparkPlug','HatchbackWheel','HatchbackWheel','HatchbackWheel','HatchbackWheel','HatchbackDoors_Driver','HatchbackDoors_CoDriver','HatchbackHood','HatchbackTrunk']; {_item createInInventory _x;} forEach _vehATT; _item setVehicleLock 'LOCKED'; _item setVariable ['ownerID',_Puid]; _item setVariable ['lockstat',1]; _carKey = _x createInInventory 'Tool_HandcuffKeys'; _carKey setVariable ['note',_Puid]; [_x,format['Item Purchased! Key Add to Inventory! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
			  // GetGame().ExecuteSQF(buy_scipt0803);
			// }
		
			// if( action_id == 0707 ) // CHECK BALANCE
			// {
			// Print(Player_UID);
			// string text_send333 = "{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Cn = _x getVariable ['Coins',0]; [_x,format['MyBalance: %1',_Cn],'colorAction'] call fnc_playerMessage; _idx = owner _x; [_idx,_Cn] spawnForClient { _Cn = _this select 1; titleText [format['My Balance: %1',_Cn],'PLAIN',10];}; }; }forEach players;";
			// GetGame().ExecuteSQF(text_send333);
			// }
			
			// if( action_id == 0708 ) //  BUY MILITARY TENT
			// {
				// string buy_scipt6 = "{ _itemprice = 2000; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['TentLarge_Backpack', _pos, [], 0, 'CAN_COLLIDE']; _whoisjew moveToHands _item; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(buy_scipt6);
			// }
			// if( action_id == 0709 ) //  BUY CAR TENT
			// {
				
				// string buy_scipt7 = "{ _itemprice = 1500; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['TentCar_Packed', _pos, [], 0, 'CAN_COLLIDE']; _whoisjew moveToHands _item; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(buy_scipt7);
			
			// }
			// if( action_id == 0710 ) // BUY WALLET
			// {
				// string buy_scipt8 = "{ _itemprice = 50; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['Tool_MessTin', _pos, [], 0, 'CAN_COLLIDE']; _whoisjew moveToHands _item; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(buy_scipt8);
			// }
			// if( action_id == 0712 ) //  BUY SMALL TENT
			// {
				// string buy_scipt10 = "{ _itemprice = 1000; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['TentMedium_Packed', _pos, [], 0, 'CAN_COLLIDE']; _whoisjew moveToHands _item; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(buy_scipt10);
			// }
			// if( action_id == 0713 ) //  BUY FARMING KIT
			// {
				// string buy_scipt11 = "{ _itemprice = 250; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _typeofbox = 'farmkit'; _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['WindscreenBox', _pos, [], 0, 'CAN_COLLIDE']; _item setVariable ['modifiers',_typeofbox]; _whoisjew moveToHands _item; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(buy_scipt11);
			// }
			// if( action_id == 0714 ) //  BUY vehicle parts kit
			// {
				// string buy_scipt12 = "{ _itemprice = 300; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _typeofbox = 'vehparts'; _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['WindscreenBox', _pos, [], 0, 'CAN_COLLIDE']; _item setVariable ['modifiers',_typeofbox]; _whoisjew moveToHands _item; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(buy_scipt12);
			// }
			// if( action_id == 0715 ) //  BUY AmmoBox
			// {
				// string buy_scipt13 = "{ _itemprice = 750; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _typeofbox = 'vehparts'; _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _itempack = ['AmmoBox_308Win_20Rnd','AmmoBox_308Win_20Rnd','AmmoBox_556_20Rnd','AmmoBox_556_20Rnd','AmmoBox_556_20Rnd','AmmoBox_762_20Rnd','AmmoBox_762_20Rnd','AmmoBox_762x39_20Rnd','AmmoBox_762x39_20Rnd','AmmoBox_9mm_25rnd','AmmoBox_9mm_25rnd','AmmoBox_00buck_10rnd','AmmoBox_00buck_10rnd','AmmoBox_45acp_25rnd','AmmoBox_45acp_25rnd','AmmoBox_9x39_20Rnd','AmmoBox_9x39_20Rnd','AmmoBox_380_35rnd','AmmoBox_380_35rnd','AmmoBox_308Win_20Rnd','AmmoBox_556_20Rnd','AmmoBox_357_20Rnd','AmmoBox_357_20Rnd','AmmoBox_762x39_20Rnd']; _itemBox = createVehicle ['EN5C_AmmoBox', _pos, [], (random 1), 'CAN_COLLIDE']; {null = _itemBox createInInventory _x} forEach _itempack; _whoisjew moveToHands _itemBox; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(buy_scipt13);
			// }
			// if( action_id == 0806 ) //  BUY FOOD PACK SCRIPT 20 coins
			// {
				// string buy_scipt0806 = "{ _itemprice = 250; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _itempack = ['Food_CanTuna','Food_CanSardines','Food_CanSpaghetti','Food_CanTacticalBacon','Food_CanPeaches','Food_CanBakedBeans','Tool_CanOpener','Drink_SodaCanPipsi','Drink_SodaCanPipsi','Drink_SodaCanPipsi']; _itemBox = createVehicle ['Container_WaterproofBagGreen', _pos, [], (random 1), 'CAN_COLLIDE']; _rice = _itemBox createInInventory 'Food_Rice'; _rice setQuantity 1; {null = _itemBox createInInventory _x} forEach _itempack; _whoisjew moveToHands _itemBox; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(buy_scipt0806);
			// }
			
			// if( action_id == 0807 ) //  BUY MEDKIT SCRIPT 200 coins
			// {
				// string buy_scipt0807 = "{ _itemprice = 200; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _itempack = ['Medical_BloodTest_Kit','Medical_BloodBag_IV','Medical_BloodBag_Empty','Medical_TransfusionKit','Medical_TransfusionKit','Medical_StartKit','Medical_Morphine','Medical_Morphine','Medical_Epinephrine','Medical_CharcoalTablets','Medical_PurificationTablets','Medical_PainkillerTablets']; _itemBox = createVehicle ['EN5C_FirstAidKit', _pos, [], (random 1), 'CAN_COLLIDE']; {null = _itemBox createInInventory _x; null setQuantity 5;} forEach _itempack; _whoisjew moveToHands _itemBox; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(buy_scipt0807);
			// }
			// if( action_id == 0809 ) //  BUY MORPHINE SCRIPT 25 coins
			// {
				// string buy_scipt0809 = "{ _itemprice = 25; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _typeofbox = 'vehparts'; _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['Medical_Morphine', _pos, [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _item; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(buy_scipt0809);
			// }
			// if( action_id == 0810 ) //  BUY SPLINT SCRIPT 2 coins
			// {
				// string buy_scipt0810 = "{ _itemprice = 10; _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + Player_UID + "') then { _Pmoney = _x getVariable ['Coins',0]; if (_Pmoney >= _itemprice) then { _typeofbox = 'vehparts'; _cutcoins = _Pmoney - _itemprice; _x setVariable ['Coins',_cutcoins]; _whoisjew = (vehicle _x); _pos = getposATL _x; _item = createVehicle ['Medical_Splint', _pos, [], 0, 'CAN_COLLIDE']; _whoisjew moveToInventory _item; [_x,format['Item Purchased! My New Balance: %1 Coins',_cutcoins],'colorAction'] call fnc_playerMessage; } else { [_x,format['Insufficient Funds!'],'colorImportant'] call fnc_playerMessage; [_x,format['My Balance: %1 Coins',_Pmoney],'colorImportant'] call fnc_playerMessage; }; }; }forEach players;";
				// GetGame().ExecuteSQF(buy_scipt0810);
			// }
		
		// if( GetDayZGame().IsNewPlayer() && action_id == 109 && GetGame().IsServer() &&  m_ActionManager) m_ActionManager.OnAction();
	// }
	
	// void OnContinuousStart() 
	// {
		// Print("PlayerBase.c OnContinuousStart");
		// if( GetDayZGame().IsNewPlayer() && GetGame().IsServer() && m_ActionManager ) m_ActionManager.OnContinuousStart();
	// }

	// void OnContinuousCancel()
	// {
			// if( GetDayZGame().IsNewPlayer() && GetGame().IsServer() && m_ActionManager ) m_ActionManager.OnContinuousCancel();
	// }

	// void OnSingleUse()
	// {
		// Print("PSOVIS: OnSingleUse");

		// if( GetDayZGame().IsNewPlayer() && GetGame().IsServer() && m_ActionManager ) m_ActionManager.OnSingleUse();
	// }



	// void ShowHintForUserActions(Param2<int,int> uaparam)
	// {
		// //tahle cast bude client side sahat na promenne akci setu
		// if ( GetDayZGame().IsNewPlayer() && m_ActionManager )
		// {
			// string actiontext;
			// if ( uaparam.param1 > 0 )
			// {
				// actiontext = "HOLD RIGHT mouse button to " + m_ActionManager.GetAction(uaparam.param1).GetText();
				// MessageAction(actiontext);
			// }
			// if ( uaparam.param2 > 0 )
			// {			
				 // actiontext = "PRESS RIGHT mouse button to " + m_ActionManager.GetAction(uaparam.param2).GetText();	
				// MessageAction(actiontext);
			// }
			// /*
			// if ( uaparam.param3 > 0 )
			// {
				// m_CurrentTertiaryActionText = GetAction(uaparam.param3).GetText();
			// }
			// else
			// {
				// m_CurrentTertiaryActionText = "Interact";
			// }*/
		// }
	// }


	// //-----------------------



	// bool IsFacingTarget( Object target )
	// {
		// vector pdir = GetDirection();
		// vector ptv = target.GetPosition() - GetPosition();
		// pdir.Normalize();
		// ptv.Normalize();
		// //MessageAction(ToString(pdir)+"  "+ToString(ptv)+"  ");
		// if (Math.AbsFloat(pdir[0]-ptv[0]) < 0.5 && Math.AbsFloat(pdir[2]-ptv[2]) < 0.5 )
		// {
			// return true;
		// }
		// return false;
	// }

	// //---------------------------------------------------------

	// float GetPlayerLoad()
	// {
		// return m_CargoLoad;
	// }
	
	// bool IsOverloaded()
	// {
		// if ( GetPlayerLoad() >= OVERLOAD_LIMIT ) return true;
		// return false;
	// }

	// void SetPlayerLoad(float load)
	// {
		// m_CargoLoad = load;
		
		// //Log(ToString(this) + "'s load weight is " + ftoa(m_CargoLoad) + " g.", LogTemplates.TEMPLATE_PLAYER_WEIGHT);
	// }

	// void AddPlayerLoad(float addedload)
	// {
		// float newload = GetPlayerLoad() + addedload;
		// SetPlayerLoad(newload);
		
		// // Do not need -> Log is in SetPlayerLoad
		// //PrintString(ToString(this) + "'s load weight is " + ToString(m_CargoLoad) + " g.");
	// }

	// bool IsItemInInventory(EntityAI entity)
	// {
		
		// EntityAI attachment;
		// EntityAI in_item;
		// int attcount = this.AttachmentsCount();
		
		// for (int i = 0; i < attcount; i++)
		// {	
			// attachment = this.GetAttachmentFromIndex(i);
			// if( attachment.HasEntityInCargo(entity) ) return true;
		// }
		// return false;
	// }


	// void CalculatePlayerLoad()
	// {
		// EntityAI attachment;
		// EntityAI in_item;
		// string item_name;
		// int attcount = this.AttachmentsCount();
		// float total_load = 0;
		
		// for (int att = 0; att < attcount; att++)
		// {	
			// attachment = this.GetAttachmentFromIndex(att);
			// if ( attachment.IsItemBase() )
			// {
				// item_name = attachment.GetType();
				// total_load += g_Game.ConfigGetInt("cfgVehicles " + item_name + " weight");	
				// if (  this.GetAttachmentFromIndex(att).GetCargo() )
				// {
					// int icount = this.GetAttachmentFromIndex(att).GetCargo().GetItemCount();
					// for (int i = 0; i < icount; i++)
					// {
						// in_item = attachment.GetCargo().GetItem(i);
						// if ( in_item.IsItemBase() )
						// {
							// item_name = in_item.GetType();
							// total_load += g_Game.ConfigGetInt("cfgVehicles " + item_name + " weight");	
						// }
					// }
				// }
			// }
		// }
		// SetPlayerLoad(total_load);
	// }


	// void ChangePlayerLoad(EntityAI attachment, bool decrease)
	// {
		// EntityAI in_item;
		// string item_name;
		// float total_load = 0;
		// if ( attachment.IsItemBase() )
		// {
			// item_name = attachment.GetType();
			// total_load += g_Game.ConfigGetInt("cfgVehicles " + item_name + " weight");	
			// if (attachment.GetCargo() != NULL)
			// {
				// int icount = attachment.GetCargo().GetItemCount();
				// if ( icount > 0 )
				// {
					// for (int i = 0; i < icount; i++)
					// {
						// in_item = attachment.GetCargo().GetItem(i);
						// if ( in_item.IsItemBase() )
						// {
							// item_name = in_item.GetType();
							// total_load += g_Game.ConfigGetInt("cfgVehicles " + item_name + " weight");	
						// }
					// }
				// }
			// }
			// if ( decrease )
			// {
				// AddPlayerLoad(-total_load);
			// } 
			// else
			// {
				// AddPlayerLoad(total_load);
			// }
		// }
	// }
	
	// float GetImmunity()
	// {
		// if(	m_PlayerStats ) 
		// {
			// float max_health = GetMaxHealth("GlobalHealth", "Health") + 0.01;//addition to prevent divisioin by zero in case of some messup
			// float max_blood = GetMaxHealth("GlobalHealth", "Blood") + 0.01;//addition to prevent divisioin by zero in case of some messup
			// return ( m_PlayerStats.m_Diet.GetNormalized() + m_PlayerStats.m_Energy.GetNormalized() + (this.GetHealth("GlobalHealth", "Health") / max_health) + (this.GetHealth("GlobalHealth", "Blood") / max_blood) ) / 4;
		// }
		// return 0;
	// }
	
	// // -------------------------------------------------------------------------
	// void RPC(int rpc_type, array<Param> params, Man recipient = NULL)
	// {
		// super.RPC(rpc_type, params, recipient);
	// }

	// // -------------------------------------------------------------------------
	// void OnRPC(int rpc_type, ParamsReadContext ctx)
	// {
		// super.OnRPC(rpc_type, ctx);
		
		// if ( GetDayZGame().IsNewPlayer() )
		// {
			// if( rpc_type == RPC_SYNC_DISPLAY_STATUS )
			// {
				// if( GetDisplayStatus() ) 
				// {
					// GetDisplayStatus().OnRPC(ctx);
				// }
			// }
			
			// else if( rpc_type == RPC_PLAYER_STATES_ON )
			// {
				// if( GetStateManager() ) 
				// {
					// GetStateManager().OnRPC(RPC_PLAYER_STATES_ON, ctx);
				// }
			// }
			
			// else if( rpc_type == RPC_PLAYER_STATES_OFF )
			// {
				// if( GetStateManager() ) 
				// {
					// GetStateManager().OnRPC(RPC_PLAYER_STATES_OFF, ctx);
				// }
			// }
		
			// else if ( GetGame().IsClient() )
			// {
				// if( rpc_type == RPC_USER_ACTION_SYNCH )
				// {	
					// if ( ctx.Read(m_UAParam) )
					// {
						// ShowHintForUserActions(m_UAParam);
					// }
				// }	
				
				// else if( rpc_type == RPC_USER_ACTION_MESSAGE )
				// {	
					// if ( ctx.Read(m_UAParamMessage) )
					// {
						// string actiontext = m_UAParamMessage.param1;
						// MessageAction(actiontext);
					// }
				// }
				
				// else if( rpc_type == RPC_USER_ACTION_MESSAGES )
				// {	
					// if ( ctx.Read(m_UAParam) && m_ActionManager )
					// {
						// string actiontext2 = m_ActionManager.GetAction(m_UAParam.param1).GetMessageText(m_UAParam.param2);
						// MessageAction(actiontext2);
					// }
				// }		

				// if( rpc_type == RPC_STAMINA )
				// {	
					// if ( ctx.Read(m_StaminaParam) && m_StaminaHandler )
					// {
						// m_StaminaHandler.SyncStamina(m_StaminaParam.param1,m_StaminaParam.param2);
					// }
				// }	
	
			// }
			
		// }
		// else
		// {
			// if( rpc_type == RPC_SQF_PLAYER_NOTIFI_SYNCH )
			// {
				// //Log("OnRPC => RPC_SQF_PLAYER_NOTIFI_SYNCH");
				
				// autoptr array<Param> params = new array<Param>;
				// autoptr Param1<int> p_count = new Param1<int>(0);
				
				// if ( ctx.Read( p_count ) )
				// {
					// //Log( "OnRPC Reding Count: " + p_count.param1.ToString() );
					
					// for ( int i = 0; i < p_count.param1; ++i )
					// {
						// Param3<int, string, int> p = new Param3<int, string, int>(0, "", 0);
						
						// if ( ctx.Read( p ) )
						// {
							// //Log( "OnRPC Reding: " + p.param2 );
							// params.Insert(p);
						// }
					// }			
				// }
				
				// if ( params.Count() > 0 )
				// {
					// UpdatePlayerNotifier(params);
				// }
			// }
		// }
		
		// if( rpc_type == RPC_PLACING_START)
		// {
			// PlacingStart( GetItemInHands().GetType() );
		// }

		// if( rpc_type == RPC_PLACING_STOP)
		// {
			// PlacingStop();
		// }

		// if( rpc_type == RPC_PLACING_FINISH)
		// {
			// PlacingFinish( GetItemInHands() );
		// }
		
		// if( rpc_type == RPC_RECIPE_SEND)
		// {
			// if ( m_ModuleRecipesManager )
			// {
				// m_ModuleRecipesManager.OnRPC(ctx,this);
			// }
		// }

		// if( rpc_type == RPC_ON_SET_CAPTIVE)
		// {
			// CallMethod( CALL_ID_HIDE_INVENTORY, NULL );
		// }

		
		// if ( GetDayZGame().IsDebug() )
		// {
			// PluginDeveloper module_rc = GetPlugin(PluginDeveloper);
			// module_rc.OnRPC(this, rpc_type, ctx);
			
			// PluginDeveloperSync module_rcs = GetPlugin(PluginDeveloperSync);
			// module_rcs.OnRPC(this, rpc_type, ctx);
			
			// // TODO: remove after UA work
			// PluginHologramDebug.GetInstance().OnRPC(rpc_type, ctx, this);
		// }
	// }
	
	// // -------------------------------------------------------------------------
	// void OnSynchronize(ParamsWriteContext ctx)
	// {
		// super.OnSynchronize(ctx);

		// autoptr Param1<int> last_shaved_param = new Param1<int>( m_LastShavedSeconds );
		// ctx.Write( last_shaved_param );
		
		// autoptr Param1<int> cached_playtime_param = new Param1<int>( m_CachedPlaytime );
		// ctx.Write( cached_playtime_param );
	// }

	// // -------------------------------------------------------------------------
	// void OnSynchronized(ParamsReadContext ctx)
	// {
		// super.OnSynchronized(ctx);

		// autoptr Param1<int> last_shaved_param = new Param1<int>( 0 );
		// if ( ctx.Read(last_shaved_param) )
		// {
			// m_LastShavedSeconds = last_shaved_param.param1;
		// }
		
		// autoptr Param1<int> cached_playtime_param = new Param1<int>( 0 );
		// if ( ctx.Read(cached_playtime_param) )
		// {
			// m_CachedPlaytime = cached_playtime_param.param1;
		// }
	// }

	// // -------------------------------------------------------------------------
	// ItemBase GetItemInHands()
	// {
		// ItemBase item = GetEntityInHands();
		// return item;
	// }

	// //--------------------------------------------------------------------------
	// /**
	// \brief Spawn item on server side
		// \param object_name \p string Name of item class
		// \param spawn_type \int(const) Type of spawning const: SPAWNTYPE_GROUND, SPAWNTYPE_HANDS, SPAWNTYPE_INVENTORY
		// \param full_quantity \bool Spawn with full quantity of item
		// \param distance \float Distance of spawn position from player (Only if spawn_type = SPAWNTYPE_GROUND)
		// \returns \p ItemBase Spawned item
		// @code
			// PlayerBase player = GetGame().GetPlayer();
			
			// player.SpawnItem("Fruit_Apple", SPAWNTYPE_GROUND, true, 5);
		// @endcode
	// */
	// EntityAI SpawnItem(string object_name, int spawn_type, bool full_quantity, float distance = 0, bool usePosition = false, vector pos = "0 0 0", EntityAI attachmentObject = NULL)
	// {
		// EntityAI entity = NULL;

		// // Creat Object
		// bool is_ai = GetGame().IsKindOf( object_name, "DZ_LightAI");
		// vector item_position;
		// if( usePosition )
		// {
			// item_position = pos;
		// }
		// else
		// {
			// item_position = GetPosition() + ( GetDirection() * distance );
		// }
		// entity = GetGame().CreateObject(object_name, item_position, false, is_ai);

		// if ( !entity )
		// {
			// string s = "Cannot spawn entity: "+object_name;
			// Print(s);
			// //g_Game.GetUIManager().ShowDialog("Spawn error", "Cannot spawn item: "+object_name, 0, DBT_OK, DBB_YES, DMT_EXCLAMATION, this);
			// return NULL;
		// }

		// if ( entity.IsInherited( ItemBase ) )
		// {
			// ItemBase item = entity;

			// // Set full quantity
			// if ( full_quantity )
			// {
				// item.SetQuantity(item.GetQuantityMax());
			// }

			// // Spawn In Inventory
			// if ( spawn_type == SPAWNTYPE_INVENTORY )
			// {
				// TakeItemToInventory(item);
			// }
			// // Spawn In Hands
			// if ( spawn_type == SPAWNTYPE_HANDS )
			// {
				// TakeItemToHands(item);
			// }
			// // Spawn As Attachment
			// if ( spawn_type == SPAWNTYPE_ATTACHMENT )
			// {
				// Object cursor_obj = GetCursorObject();
				// if ( cursor_obj != NULL && cursor_obj.IsInherited(EntityAI) )
				// {
					// EntityAI eai = (EntityAI)cursor_obj;
					// eai.TakeEntityAsAttachment(item);
				// }
				// else if ( attachmentObject != NULL)
				// {
					// attachmentObject.TakeEntityAsAttachment(item);
				// }
			// }
		// }

		// return entity;
	// }

	// //--------------------------------------------------------------------------
	// bool DropItem(ItemBase item)
	// {
		// bool is_dropped = DropEntity(item);

		// vector 	pos_spawn	= GetPosition() + GetDirection();
		// pos_spawn[0]		= pos_spawn[0] + Math.RandomFloat(-0.2, 0.2);
		// pos_spawn[2]		= pos_spawn[2] + Math.RandomFloat(-0.2, 0.2);
		// pos_spawn		 	= GetGame().SnapToGround(pos_spawn);
		// item.SetPosition(pos_spawn);

		// return is_dropped;
	// }

	// bool TakeItemToInventory(ItemBase item)
	// {
		// if ( GetItemInHands() == item )
		// {
			// MoveItemFromHandsToInventory(item);
			// return true;
		// }

		// if ( CanTakeEntityAsOwned(item) )
		// {
			// TakeEntityAsOwned(item);
			// return true;
		// }

		// //g_Game.GetUIManager().ShowDialog("Spawn error", "Cannot take item into inventory! ("+object_name+")", 0, DBT_OK, DBB_YES, DMT_EXCLAMATION, this);
		// return false;
	// }

	// bool TakeItemToHands(ItemBase item)
	// {
		// if ( GetItemInHands() )
		// {
			// RemoveItemFromHands(item);
		// }

		// return TakeEntityToHands(item);
	// }

	// // -------------------------------------------------------------------------
	// /**
	// /brief Creates \p ItemBase in players inventory. If player dont have enough slots for new item, item will be created on the ground under player.
		// \param item_name \p string Class name of ItemBase in configs
		// \returns \p ItemBase Created item
		// @code
			// ItemBase item = g_Game.GetPlayer().CreateInInventory("Consumable_GardenLime", "cargo_weapon");
		// @endcode
	// */
	// ItemBase CreateInInventory( string item_name, string cargo_type = "", bool full_quantity = false  ) // TODO: Create item in cargo
	// {
		// return SpawnItem(item_name, SPAWNTYPE_INVENTORY, true);
	// }

	// // -------------------------------------------------------------------------
	// /**
	// /brief Creates copy of \p ItemBase in players inventory. If player dont have enough slots for new item, item will be created on the ground under player.
		// \param item_name \p string Class name of ItemBase in configs
		// \returns \p ItemBase Created item
		// @code
			// ItemBase item = g_Game.GetPlayer().CreateInInventory("Consumable_GardenLime", "cargo_weapon");
		// @endcode
	// */
	// ItemBase CopyInventoryItem( ItemBase orig_item )
	// {
		// ItemBase item = CreateInInventory( orig_item.GetType() );
		// if ( item == NULL )
		// {
			// return NULL;
		// }

		// // Copy of quantity
		// item.SetQuantity( orig_item.GetQuantity() );

		// // Copy of damage
		// item.SetDamage( orig_item.GetDamage() );

		// return item;
	// }

	// // -------------------------------------------------------------------------
	// /**
	// colorStatusChannel
	// colorAction
	// colorFriendly
	// colorImportant
	// */
	// void Message( string text, string style )
	// {
		// if (GetGame().IsMultiplayer() && GetGame().IsServer())
		// {
			// GetGame().ChatMP(this, text, style );
		// }
		// else
		// {
			// GetGame().Chat( text, style );
		// }
	// }

	// // -------------------------------------------------------------------------
	// void MessageStatus( string text )
	// {
		// Message( text, "colorStatusChannel" );
	// }

	// // -------------------------------------------------------------------------
	// void MessageAction( string text )
	// {
		// Message( text, "colorAction" );
	// }

	// // -------------------------------------------------------------------------
	// void MessageFriendly( string text )
	// {
		// Message( text, "colorFriendly" );
	// }

	// // -------------------------------------------------------------------------
	// void MessageImportant( string text )
	// {
		// Message( text, "colorImportant" );
	// }

	// // -------------------------------------------------------------------------
	// /**
	// /brief Delete all items in inventory
		// \returns \p void
		// @code
			// PlayerBase player = GetGame().GetPlayer();
			// player.ClearInventory();
		// @endcode
	// */
	// void ClearInventory( )
	// {
		// if ( GetGame().IsServer() )
		// {
			// ItemBase item;
			// for ( int i = 0; i < GetSlotsCount(); ++i )
			// {
				// item = FindAttachment(i);
				// if ( item )
				// {
					// GetGame().ObjectDelete(item);
				// }
			// }

			// ItemBase item_in_hands = GetEntityInHands();

			// if ( item_in_hands )
			// {
				// GetGame().ObjectDelete(item_in_hands);
			// }
		// }
	// }

	// string GetPlayerClass()
	// {
		// string type;
		// GetGame().ObjectGetType( this, type );
		// return type;
	// }

	// void ShavePlayer()
	// {
		
		// // NEW STATS API
		// //m_LastShavedSeconds = StatGet("playtime");
		
		// PluginLifespan module_lifespan = (PluginLifespan)GetPlugin( PluginLifespan );
		// module_lifespan.UpdateLifespanLevelAuto( this, true );
		
		// SetSynchDirty();
	// }

	// int GetLastShavedSeconds()
	// {
		// return m_LastShavedSeconds;
	// }

	// void SetLastShavedSeconds( int last_shaved_seconds )
	// {
		// m_LastShavedSeconds = last_shaved_seconds;
	// }

	// int GetCachedPlaytime()
	// {
		// return m_CachedPlaytime;
	// }

	// void SetCachedPlaytime( int playtime )
	// {
		// m_CachedPlaytime = playtime;
	// }

	// bool GetHasBloodyHands()
	// {
		// return m_HasBloodyHands;
	// }

	// void SetHasBloodyHands( bool has_bloody_hands )
	// {
		// m_HasBloodyHands = has_bloody_hands;
	// }

	// void WashHands()
	// {
		// PluginLifespan module_lifespan = (PluginLifespan)GetPlugin( PluginLifespan );
		// module_lifespan.UnSetBloodyHands( this );
	// }

	// void SetSkill( int exp_id, float exp_value )
	// {
		// m_Skills.Set( exp_id, exp_value );
	// }

	// float GetSkill( int exp_id )
	// {
		// return m_Skills.Get( exp_id );
	// }

	// float GetTimeToCompleteEfficiency( int exp_id )
	// {
		// return m_ModuleExperience.GetTimeToCompleteEfficiency(this, exp_id);
	// }

	// float GetQuantityEfficiency( int exp_id )
	// {
		// return m_ModuleExperience.GetQuantityEfficiency(this, exp_id);
	// }

	// void IncreaseSkill( int exp_id, float increase_value /*= 1*/ )
	// {
		// m_ModuleExperience.Increase(this, exp_id, increase_value);
	// }

	// void OnStoreSave( ParamsWriteContext ctx )
	// {
		// super.OnStoreSave( ctx );
		
		// OnStoreSaveLifespan( ctx );

		// if ( GetDayZGame().IsDebug() && GetDayZGame().IsServer() )
		// {
			// if( GetDayZGame().IsNewPlayer() )
			// {
				// if( m_PlayerStats ) m_PlayerStats.SaveStats(ctx);// save stats
				// if( m_ModifiersManager ) m_ModifiersManager.OnStoreSave(ctx);// save modifiers
				// if( m_AgentPool ) m_AgentPool.OnStoreSave(ctx);//save agents
			// }
		// }
	// }

	// void OnStoreLoad( ParamsReadContext ctx )
	// {
		// super.OnStoreLoad( ctx );
		
		// OnStoreLoadLifespan( ctx );
		
		// if ( GetDayZGame().IsDebug() && GetDayZGame().IsServer() && GetDayZGame().IsMultiplayer() )
		// {
			// if( GetDayZGame().IsNewPlayer() )
			// {
				// if( m_PlayerStats ) m_PlayerStats.LoadStats(ctx); // load stats
				// if( m_ModifiersManager ) m_ModifiersManager.OnStoreLoad(ctx);// load modifiers
				// if( m_AgentPool ) m_AgentPool.OnStoreLoad(ctx);//load agents
			// }
		// }
		
		// SetSynchDirty();
	// }

	// void OnStoreSaveLifespan( ParamsWriteContext ctx )
	// {
		// autoptr Param1<int> skills_count = new Param1<int>( m_Skills.Count() );
		// ctx.Write( skills_count );
		
		// autoptr Param2<int, float> params = new Param2<int, float>( 0, 0.0 );
		
		// for ( int i = 0; i < skills_count.param1; i++ )
		// {
			// params.param1 = m_Skills.GetKey( i );
			// params.param2 = m_Skills.GetElement( i );
			// ctx.Write( params );
		// }

		// autoptr Param1<int> param_int = new Param1<int>( m_LastShavedSeconds );
		// ctx.Write( param_int );
		
		// param_int.param1 = m_CachedPlaytime;
		// ctx.Write( param_int );
		
		// autoptr Param1<bool> param_bool = new Param1<bool>( m_HasBloodyHands );
		// ctx.Write( param_bool );
	// }

	// void OnStoreLoadLifespan( ParamsReadContext ctx )
	// {
		// autoptr Param1<int> skills_count = new Param1<int>( 0 );
		// ctx.Read( skills_count );
		
		// autoptr Param2<int, float> params = new Param2<int, float>( 0, 0.0 );

		// for ( int i = 0; i < skills_count.param1; i++ )
		// {
			// ctx.Read( params );
			// SetSkill( params.param1, params.param2 );
		// }
		
		// autoptr Param1<int> param_int = new Param1<int>( 0 );
		// ctx.Read( param_int );
		// if ( param_int.param1 > 0 )
		// {
			// m_LastShavedSeconds = param_int.param1;
		// }
		
		// param_int.param1 = 0;
		// ctx.Read( param_int );
		// if ( param_int.param1 > 0 )
		// {
			// m_CachedPlaytime = param_int.param1;
		// }
		
		// autoptr Param1<bool> param_bool = new Param1<bool>( false );
		// ctx.Read( param_bool );
		// m_HasBloodyHands = param_bool.param1;
	// }

	// void OnSqfPlayerInit()
	// {
		// PluginLifespan module_lifespan = (PluginLifespan)GetPlugin( PluginLifespan );
		// module_lifespan.UpdateLifespanLevelAuto( this, true );
		
		// if ( m_HasBloodyHands )
		// {
			// module_lifespan.SetBloodyHands( this );
		// }
		// else 
		// {
			// module_lifespan.UnSetBloodyHands( this );
		// }
	// }

	// void OnConnect()
	// {
		// Debug.Log("Player connected:"+this.ToString(),"Connect");

		// // NEW STATS API
		// StatRegister("playtime");
		// StatRegister("dist");
	// }

	// void OnDisconnect()
	// {
		// Debug.Log("Player disconnected:"+this.ToString(),"Connect");
	// }


	// // agent transfer

	// bool IsInfected()
	// {
		// if( m_AgentPool && m_AgentPool.GetAgents().Count() != 0) 
		// {
			// return true;			
		// }
		// else
		// {
			// return false;
		// }
	// }
	 
	// //--------------------------------------------------------------------------------------------
	// int GetAgents()
	// {
		// return PluginTransmissionAgents.MakeMaskFromArray( m_AgentPool.GetAgents() );
	// }

	// //--------------------------------------------------------------------------------------------
	// void RemoveAgent(int agent_id) //removes a single agent type to the player agent pool
	// {
		// m_AgentPool.RemoveAgent(agent_id);
	// }

	// //--------------------------------------------------------------------------------------------
	// void RemoveAllAgents()
	// {
		// m_AgentPool.RemoveAllAgents();
	// }


	// //--------------------------------------------------------------------------------------------
	// void InsertAgent(int agent, int count) //adds a single agent type to the player agent pool
	// {
		// m_AgentPool.AddAgent(agent,count);
	// }

	// //--------------------------------------------------------------------------------------------
	// int GetSingleAgentCount(int agent_id)
	// {
		// return m_AgentPool.GetSingleAgentCount(agent_id);
	// }

	// int GetTotalAgentCount()
	// {
		// return m_AgentPool.GetTotalAgentCount();
	// }

	// void PrintAgents()
	// {
		// m_AgentPool.PrintAgents();
	// }

	// void ImmuneSystemTick(float value)
	// {
		// m_AgentPool.ImmuneSystemTick(value);
	// }


	// //--------------------------------------------------------------------------------------------
	// // TEMP for stable 0.60 (februar 2016) old player inventory notifiers
	// // Server Side
	// // calling from SQF server/scripts/init.sqf
	// // collecting datas from SQF
	// void SQF_PlayerNotifierAdd(string notifi_name, int notifi_id, float r, float g, float b, float a)
	// {
		// if ( GetGame().IsNewPlayer() )
		// {
			// return;
		// }
		
		// int color = ARGBF(a,r,g,b);
		
		// Param3<string, int, bool> my_notifier = m_MyNotifiers[notifi_id];
		
		// //Log("SQF_PlayerNotifierAdd: "+notifi_name);
		
		// if ( my_notifier.param2 != color || my_notifier.param3 == true )
		// {
			// my_notifier.param1 = notifi_name;
			// my_notifier.param2 = color;
			// my_notifier.param3 = true; // tag for sychnronizing
			
			// //Log("SQF_PlayerNotifierAdd: "+notifi_name+" => Synch");
		// }
		
		// m_MyNotifiers[notifi_id] = my_notifier;
	// }

	// //--------------------------------------------------------------------------------------------
	// // TEMP for stable 0.60 (februar 2016) old player inventory notifiers
	// // Server Side
	// // calling from SQF server/scripts/init.sqf
	// // Send on Client collected datas from SQF
	// void SQF_PlayerNotifierSend()
	// {
		// if ( GetGame().IsNewPlayer() )
		// {
			// return;
		// }
		
		// autoptr array<Param> params = new array<Param>;
		
		// int count = 0;
		
		// for ( int i = 0; i < NTF_COUNT; ++i )
		// {
			// Param3<string, int, bool> my_notifier = m_MyNotifiers[i];
			
			// if ( my_notifier != NULL && my_notifier.param3 )
			// {
				// count++;
				// Param3<int, string, int> p = new Param3<int, string, int>(i, my_notifier.param1, my_notifier.param2);
				// params.Insert( p );
				// my_notifier.param3 = false;
			// }
		// }
			
		// //Log("SQF_PlayerNotifierSend: Synch ("+itoa(params.Count())+")...");
		
		// if ( count > 0 )
		// {
			// if ( GetGame().IsServer() && GetGame().IsMultiplayer() )
			// {
				// autoptr Param1<int> p_count = new Param1<int>(count);
				// params.InsertAt (p_count, 0);
				
				// //Log("SQF_PlayerNotifierSend => RPC sending data ("+itoa(params.Count())+")...");
				// RPC(RPC_SQF_PLAYER_NOTIFI_SYNCH, params, this);
			// }
			// else
			// {
				// //Log("SQF_PlayerNotifierSend => local update data ("+itoa(params.Count())+")...");
				// UpdatePlayerNotifier(params);
			// }
		// }
	// }

	// //--------------------------------------------------------------------------------------------
	// // TEMP for stable 0.60 (februar 2016) old player inventory notifiers
	// // Client Side from OnRPC
	// //void	UpdatePlayerNotifier(array<Param3<int, string, int>> params);
	// void UpdatePlayerNotifier(array<Param> params)
	// {
		// if ( !GetGame().IsNewUI() || GetGame().IsNewPlayer() )
		// {
			// return;
		// }
		
		// //Log("UpdatePlayerNotifier");
		
		// if ( m_ModulePlayerStatus )
		// {		
			// for ( int i = 0; i < params.Count(); ++i )
			// {
				// Param3<int, string, int> p = params.Get(i);
				// //Log("UpdatePlayerNotifier => ["+itoa(i)+"] = "+p.param2);
				// m_ModulePlayerStatus.SetNotifier( p.param1, 9, p.param2, p.param3 );
				// delete p;
			// }
		// }
	// }

	// //--------------------------------------------------------------------------------------------
	// // TEMP for stable 0.60 (februar 2016) old player inventory notifiers
	// // Client Side from UpdatePlayerNotifier
	// void PlayerNotifierClear()
	// {
		// for ( int i = 0; i < NTF_COUNT; ++i )
		// {
			// if ( m_ModulePlayerStatus )
			// {
				// m_ModulePlayerStatus.SetNotifier( i, 9, "", 0x000000 );
			// }
		// }
	// }

	// void PlayerNotifiersInit()
	// {
		// PlayerNotifiersDelete();

		// for ( int i = 0; i < NTF_COUNT; ++i )
		// {
			// m_MyNotifiers[i] = new Param3<string, int, bool>("", 0, true);
		// }	
	// }

	// void PlayerNotifiersDelete()
	// {
		// for ( int i = 0; i < NTF_COUNT; ++i )
		// {
			// delete m_MyNotifiers[i];
		// }
	// }
	// array<PlayerStatBase> GetStatsArray()
	// {
		// return m_PlayerStats.Get();
	// }

	// //Get aim (player crosshair) position
	// vector GetAimPosition()
	// {
		// float min_distance = 0.5;		//min distance, default = 5m
		
		// vector from = GetCameraPosition();
		// vector to = from + (GetCameraDirection() * min_distance);
		// vector contactPos;
		// vector contactDir;
		// int contactComponent;
		
		// GetGame().Raycast ( from, to, contactPos, contactDir, contactComponent, NULL, NULL, NULL, false, true );
		
		// return contactPos;
	// }

	// //get modifier manager
	// ModifiersManager GetModifiersManager()
	// {
		// return m_ModifiersManager;
	// }

	// PlayerStat<float> GetStatStomach()
	// {
		// if( m_PlayerStats ) return m_PlayerStats.m_Stomach;
	// }

	// PlayerStat<float> GetStatWater()
	// {
		// if( m_PlayerStats ) return m_PlayerStats.m_Water;
	// }

	// PlayerStat<float> GetStatStomachWater()
	// {
		// if( m_PlayerStats ) return m_PlayerStats.m_StomachWater;
	// }

	// PlayerStat<float> GetStatEnergy()
	// {
		// if( m_PlayerStats ) return m_PlayerStats.m_Energy;
	// }
	
	// PlayerStat<float> GetStatShock()
	// {
		// if( m_PlayerStats ) return m_PlayerStats.m_Shock;
	// }
	
	// PlayerStat<float> GetStatUnconscious()
	// {
		// if( m_PlayerStats ) return m_PlayerStats.m_Unconscious;
	// }
	
	// PlayerStat<float> GetStatTemperature()
	// {
		// if( m_PlayerStats ) return m_PlayerStats.m_Temperature;
	// }
	
	// PlayerStat<float> GetStatHeatComfort()
	// {
		// if( m_PlayerStats ) return m_PlayerStats.m_HeatComfort;
	// }
	
	// PlayerStat<float> GetStatHeatIsolation()
	// {
		// if( m_PlayerStats ) return m_PlayerStats.m_HeatIsolation;
	// }
	
	// PlayerStat<float> GetStatTremor()
	// {
		// if( m_PlayerStats ) return m_PlayerStats.m_Tremor;
	// }
	
	// PlayerStat<float> GetStatWet()
	// {
		// if( m_PlayerStats ) return m_PlayerStats.m_Wet;
	// }
	
	// PlayerStat<float> GetStatStomachEnergy()
	// {
		// if( m_PlayerStats ) return m_PlayerStats.m_StomachEnergy;
	// }
	
	// PlayerStat<float> GetStatDiet()
	// {
		// if( m_PlayerStats ) return m_PlayerStats.m_Diet;
	// }
	
	// PlayerStat<float> GetStatStamina()
	// {
		// if( m_PlayerStats ) return m_PlayerStats.m_Stamina;
	// }
	
	// PlayerStat<int> GetStatBloodType()
	// {
		// if( m_PlayerStats ) return m_PlayerStats.m_BloodType;
	// }
}