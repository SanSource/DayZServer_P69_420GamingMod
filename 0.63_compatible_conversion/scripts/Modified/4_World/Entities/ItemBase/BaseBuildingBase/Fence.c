class Fence2 extends Fence // extends BaseBuildingBase
{
	protected ref map<string, ref ConstructionPart> m_ConstructionParts;    //string - part name; int - 0-not constructed, 1-constructed
	protected ref array<string> m_ConstructionTools;    //string - part name; int - 0-not constructed, 1-constructed
	protected ref array<string> m_DeconstructionTools;    //string - part name; int - 0-not constructed, 1-constructed
	
	//.P3D SELECTION NAMES
	static const string ANIMATION_BASE 						= "Base";
	static const string ANIMATION_BASE_DOWN 				= "BaseFence_Down";
	static const string ANIMATION_BASE_UP 					= "BaseFence_Up";
	static const string ANIMATION_WOODEN_PLANKS_DOWN 		= "WoodenPlanks_Down";
	static const string ANIMATION_WOODEN_PLANKS_UP 			= "WoodenPlanks_Up";
	static const string ANIMATION_METAL_PLATES_DOWN 		= "MetalPlates_Down";
	static const string ANIMATION_METAL_PLATES_UP 			= "MetalPlates_Up";
	
	//CONSTRUCTION PARTS - UID
	static const int PART_BASE_DOWN 						= 101;
	static const int PART_BASE_UP 							= 102;
	static const int PART_WOODEN_PLANKS_DOWN 				= 201;
	static const int PART_WOODEN_PLANKS_UP 					= 202;
	static const int PART_METAL_PLATES_DOWN 				= 301;
	static const int PART_METAL_PLATES_UP 					= 302;
	static const int PART_CAMONET					        = 401;
	
	//PLAYER STATUS MESSAGE
	static const string MESSAGE_BASE_FENCE_PLACED 			= "I have placed the base fence.";
	static const string MESSAGE_CONSTRUCT_BASE_DOWN 		= "I have built a low fence.";
	static const string MESSAGE_CONSTRUCT_BASE_UP 			= "I have built a high base fence.";
	static const string MESSAGE_DECONSTRUCT_BASE_DOWN 		= "I have destroyed the low base fence.";
	static const string MESSAGE_DECONSTRUCT_BASE_UP 		= "I have destroyed the high base fence.";
	static const string MESSAGE_CONSTRUCT_WOODEN_DOWN 		= "I have built a low wooden plank fence.";
	static const string MESSAGE_CONSTRUCT_WOODEN_UP 		= "I have built a high wooden plank fence.";
	static const string MESSAGE_DECONSTRUCT_WOODEN_DOWN 	= "I have destroyed the low wooden plank fence.";
	static const string MESSAGE_DECONSTRUCT_WOODEN_UP 		= "I have destroyed the high wooden plank fence.";
	static const string MESSAGE_CONSTRUCT_METAL_DOWN 		= "I have built a low metal plates fence.";
	static const string MESSAGE_CONSTRUCT_METAL_UP 			= "I have built a high metal plates fence.";
	static const string MESSAGE_DECONSTRUCT_METAL_DOWN 		= "I have destroyed the low metal plates fence.";
	static const string MESSAGE_DECONSTRUCT_METAL_UP 		= "I have destroyed the high metal plates fence.";
	
	//hologram
	Hologram m_Hologram = NULL;
	
	//get hologram
	Hologram GetHologram()
	{
		return m_Hologram;
	}
	
	void Fence()
	{
		m_ConstructionParts = new map<string, ref ConstructionPart>;
		ConstructionPart constr_part;
		
		//REQUIRED TOOLS FOR CONSTRUCTION/DECONSTRUCTION
		m_ConstructionTools 			= new array<string>;
		m_DeconstructionTools 			= new array<string>;
		
		m_ConstructionTools.Insert 		( "Tool_Hammer" );
		m_ConstructionTools.Insert 		( "SledgeHammer" );
		m_ConstructionTools.Insert 		( "Tool_Wrench" );
		
		m_DeconstructionTools.Insert 	( "Tool_Crowbar" );
		m_DeconstructionTools.Insert 	( "Tool_Wrench" );
		m_DeconstructionTools.Insert	( "Tool_Iceaxe" );
		m_DeconstructionTools.Insert	( "SledgeHammer" );
		
		m_DmgTrgLocalPos				= { "0 0 0" , "0.22 -0.75 0.55" }; // {"<right> <up> <forward>", "<right> <up> <forward>", "<right> <up> <forward>"} model coordinates. The first element must be "0 0 0" due to a bug in inventory screen which makes barbed wire icon invisible.
		
		//BASE
		//BASE DOWN

		// constr_part = new ConstructionPart;
		// constr_part.m_ConstructMaterials = new array<ConstructionMaterial>;					//materials to construct
		// constr_part.m_ConstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_Nails", 6 ) );
		// constr_part.m_ConstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_WoodenPlanks", 3 ) );
		// constr_part.m_DeconstructMaterials = new array<ConstructionMaterial>;				//materials to deconstruct
		// constr_part.m_DeconstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_Nails", 3 ) );
		// constr_part.m_DeconstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_WoodenPlanks", 2 ) );
		// m_ConstructionParts.Set ( PART_BASE_DOWN.ToString(), constr_part );
		// //BASE UP
		// constr_part = new ConstructionPart;
		// constr_part.m_ConstructMaterials = new array<ConstructionMaterial>;					//materials to construct
		// constr_part.m_ConstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_Nails", 6 ) );
		// constr_part.m_ConstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_WoodenPlanks", 3 ) );
		// constr_part.m_DeconstructMaterials = new array<ConstructionMaterial>;				//materials to deconstruct
		// constr_part.m_DeconstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_Nails", 3 ) );
		// constr_part.m_DeconstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_WoodenPlanks", 2 ) );
		// m_ConstructionParts.Set ( PART_BASE_UP.ToString(), constr_part );	
		
		// //WOODEN PLANKS
		// //WOODEN PLANKS DOWN
		// constr_part = new ConstructionPart;
		// constr_part.m_ConstructMaterials = new array<ConstructionMaterial>;					//materials to construct
		// constr_part.m_ConstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_Nails", 12 ) );
		// constr_part.m_ConstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_WoodenPlanks", 6 ) );
		// constr_part.m_DeconstructMaterials = new array<ConstructionMaterial>;				//materials to deconstruct
		// constr_part.m_DeconstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_Nails", 6 ) );
		// constr_part.m_DeconstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_WoodenPlanks", 3 ) );
		// m_ConstructionParts.Set ( PART_WOODEN_PLANKS_DOWN.ToString(), constr_part );
		// //WOODEN PLANKS UP
		// constr_part = new ConstructionPart;
		// constr_part.m_ConstructMaterials = new array<ConstructionMaterial>;					//materials to construct
		// constr_part.m_ConstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_Nails", 12 ) );
		// constr_part.m_ConstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_WoodenPlanks", 6 ) );
		// constr_part.m_DeconstructMaterials = new array<ConstructionMaterial>;				//materials to deconstruct
		// constr_part.m_DeconstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_Nails", 6 ) );
		// constr_part.m_DeconstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_WoodenPlanks", 3 ) );
		// m_ConstructionParts.Set ( PART_WOODEN_PLANKS_UP.ToString(), constr_part );
		
		// //METAL PLATES
		// //METAL PLATES DOWN
		// constr_part = new ConstructionPart;
		// constr_part.m_ConstructMaterials = new array<ConstructionMaterial>;					//materials to construct
		// constr_part.m_ConstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_Nails", 20 ) );
		// constr_part.m_ConstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_MetalPlates", 8 ) );
		// constr_part.m_DeconstructMaterials = new array<ConstructionMaterial>;				//materials to deconstruct
		// constr_part.m_DeconstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_Nails", 10 ) );
		// constr_part.m_DeconstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_MetalPlates", 4 ) );
		// m_ConstructionParts.Set ( PART_METAL_PLATES_DOWN.ToString(), constr_part );
		// //METAL PLATES UP
		// constr_part = new ConstructionPart;
		// constr_part.m_ConstructMaterials = new array<ConstructionMaterial>;					//materials to construct
		// constr_part.m_ConstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_Nails", 20 ) );
		// constr_part.m_ConstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_MetalPlates", 8 ) );
		// constr_part.m_DeconstructMaterials = new array<ConstructionMaterial>;				//materials to deconstruct
		// constr_part.m_DeconstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_Nails", 10 ) );
		// constr_part.m_DeconstructMaterials.Insert ( new ConstructionMaterial ( "Consumable_MetalPlates", 4 ) );
		// m_ConstructionParts.Set ( PART_METAL_PLATES_UP.ToString(), constr_part );
		// //CAMO NET
		// constr_part = new ConstructionPart;
		// constr_part.m_ConstructMaterials = new array<ConstructionMaterial>;					//materials to construct
		// constr_part.m_ConstructMaterials.Insert ( new ConstructionMaterial ( "Fence_CamoNet", 0 ) );
		// constr_part.m_DeconstructMaterials = new array<ConstructionMaterial>;				//materials to deconstruct
		// constr_part.m_DeconstructMaterials.Insert ( new ConstructionMaterial ( "Fence_CamoNet", 0 ) );
		// m_ConstructionParts.Set ( PART_CAMONET.ToString(), constr_part );
	}

	// --- ATTACHMENTS
	void OnItemAttached ( EntityAI item ) 
	{	
	}
	
	void OnItemDetached ( EntityAI item ) 
	{
	}
	
	// // --- CONSTRUCTION / DECONSTRUCTION
	// // --- BASE LOW/HIGH 
	// bool CanConstruct_Base_Down ( PlayerBase player )
	// {
		// bool has_materials = this.HasRequiredMaterials ( PART_BASE_DOWN );
		// bool already_built = this.HasAnimationState ( ANIMATION_BASE_DOWN, 0 );
		// EntityAI item_in_hands = player.GetEntityInHands();
		// bool has_tools = this.HasRequiredTool ( item_in_hands, this.m_ConstructionTools );
		
		// if ( has_materials && !already_built && has_tools )
		// {
			// return true;
		// }
		// else 
		// {
			// return false;
		// }
	// }
	
	// bool CanConstruct_Base_Up ( PlayerBase player )
	// {
		// bool has_materials = this.HasRequiredMaterials ( PART_BASE_UP );
		// bool already_built = this.HasAnimationState ( ANIMATION_BASE_UP, 0 );
		// EntityAI item_in_hands = player.GetEntityInHands();
		// bool has_tools = this.HasRequiredTool ( item_in_hands, this.m_ConstructionTools );
		
		// if ( has_materials && !already_built && has_tools )
		// {
			// return true;
		// }
		// else 
		// {
			// return false;
		// }
	// }
	
	bool ConditionIntoInventory(EntityAI player)
	{
		return false;
	}

	// bool ConditionIntoHands(EntityAI player)
	// {	
		// bool not_built0 = this.HasAnimationState ( ANIMATION_BASE_DOWN, 0 );
		// bool not_built1 = this.HasAnimationState ( ANIMATION_BASE_UP, 0 );
		// bool not_built2 = this.HasAnimationState ( ANIMATION_WOODEN_PLANKS_DOWN, 0 );
		// bool not_built3 = this.HasAnimationState ( ANIMATION_WOODEN_PLANKS_UP, 0 );
		// bool not_built4 = this.HasAnimationState ( ANIMATION_METAL_PLATES_DOWN, 0 );
		// bool not_built5 = this.HasAnimationState ( ANIMATION_METAL_PLATES_UP, 0 );

		// if ( !not_built0 && !not_built1 && !not_built2 && !not_built3 && !not_built4 && !not_built5)
		// {
			// return true;
		// }
		// else
		// {
			// return false;
		// }
	// }
	
	// bool ConditionDetachEntityAI(EntityAI player)
	// {
		// float isManipulatable;
		// this.GetVariable("isUsed",isManipulatable);
		// if ( isManipulatable != 1 )
		// {
			// return true;
		// }else{
			// return false;
		// }
	// }
	
	// void Construct_Base_Down ( PlayerBase player )
	// {
		
		// //take materials
		// this.TakeRequiredMaterials ( PART_BASE_DOWN );
		
		// //animate
		// this.SetAnimationPhase ( ANIMATION_BASE_DOWN, 0 );
		
		// //store var
		// this.SetVariable("BaseFence_Down",1);
		// string P_UID;
		// player.GetVariable("GU_ID",P_UID);
		
		// this.SetVariable("owner",P_UID);
		
		// //player message
		// player.MessageStatus ( MESSAGE_CONSTRUCT_BASE_DOWN );
	// }
	
	// void Construct_Base_Up( PlayerBase player )
	// {
		// //take materials
		// this.TakeRequiredMaterials ( PART_BASE_UP );
		
		// //animate
		// this.SetAnimationPhase ( ANIMATION_BASE_UP, 0 );
		
		// //store var
		// this.SetVariable("BaseFence_Up",1);
		// string P_UID;
		// player.GetVariable("GU_ID",P_UID);
		
		// this.SetVariable("owner",P_UID);
		
		// //player message
		// player.MessageStatus ( MESSAGE_CONSTRUCT_BASE_UP );
	// }
	
	// bool CanDeconstruct_Base_Down ( PlayerBase player )
	// {
		// bool already_built = this.HasAnimationState ( ANIMATION_BASE_DOWN, 0 );
		// bool metal_plates_already_built = this.HasAnimationState ( ANIMATION_METAL_PLATES_DOWN, 0 );
		// bool wooden_planks_already_built = this.HasAnimationState ( ANIMATION_WOODEN_PLANKS_DOWN, 0 );
		// EntityAI item_in_hands = player.GetEntityInHands();
		// bool has_tools = this.HasRequiredTool ( item_in_hands, m_DeconstructionTools );

		// if (already_built && !metal_plates_already_built && !wooden_planks_already_built && has_tools )
		// {
			// return true;
		// }
		// else 
		// {
			// return false;
		// }
	// }
	
	// bool CanDeconstruct_Base_Up ( PlayerBase player )
	// {
		// bool already_built = this.HasAnimationState ( ANIMATION_BASE_UP, 0 );
		// bool metal_plates_already_built = this.HasAnimationState ( ANIMATION_METAL_PLATES_UP, 0 );
		// bool wooden_planks_already_built = this.HasAnimationState ( ANIMATION_WOODEN_PLANKS_UP, 0 );
		// EntityAI item_in_hands = player.GetEntityInHands();
		// bool has_tools = this.HasRequiredTool ( item_in_hands, m_DeconstructionTools );
		
		// if ( already_built && !metal_plates_already_built && !wooden_planks_already_built && has_tools )
		// {
			// return true;
		// }
		// else 
		// {
			// return false;
		// }
	// }
	
	// void Deconstruct_Base_Down( PlayerBase player )
	// {
		// float isBusy;
		// player.GetVariable("isBusy",isBusy);
		// if ( isBusy == 0 )
		// {
			// //receive materials
			// this.ReceiveRemainingMaterials ( PART_BASE_DOWN, player );
			
			// //animate
			// this.SetAnimationPhase ( ANIMATION_BASE_DOWN, 1 );
			
			// //store var
			// this.SetVariable("BaseFence_Down",0);
			// string P_UID;
			// player.GetVariable("GU_ID",P_UID);
			
			// this.SetVariable("owner",P_UID);
			
			// //player message
			// player.MessageStatus ( MESSAGE_DECONSTRUCT_BASE_DOWN );
		// }
	// }
	
	// void Deconstruct_Base_Up( PlayerBase player )
	// {
		// float isBusy;
		// player.GetVariable("isBusy",isBusy);
		// if ( isBusy == 0 )
		// {
			// //receive materials
			// this.ReceiveRemainingMaterials ( PART_BASE_UP, player );
			
			// //animate
			// this.SetAnimationPhase ( ANIMATION_BASE_UP, 1 );
			
			// //store var
			// this.SetVariable("BaseFence_Up",0);
			// string P_UID;
			// player.GetVariable("GU_ID",P_UID);
			
			// this.SetVariable("owner",P_UID);
			
			// //player message
			// player.MessageStatus ( MESSAGE_DECONSTRUCT_BASE_UP );
		// }
	// }
	
	// // --- WOODEN PLANKS DOWN/UP
	// bool CanConstruct_WoodenPlanks_Down ( PlayerBase player )
	// {
		// bool has_materials = this.HasRequiredMaterials ( PART_WOODEN_PLANKS_DOWN );
		// bool already_built = this.HasAnimationState ( ANIMATION_WOODEN_PLANKS_DOWN, 0 );
		// bool base_already_built = this.HasAnimationState ( ANIMATION_BASE_DOWN, 0 );
		// bool metal_plates_already_built = this.HasAnimationState ( ANIMATION_METAL_PLATES_DOWN, 0 );
		// EntityAI item_in_hands = player.GetEntityInHands();
		// bool has_tools = this.HasRequiredTool ( item_in_hands, this.m_ConstructionTools );
		
		// if ( has_materials && !already_built && base_already_built && !metal_plates_already_built && has_tools )
		// {
			// return true;
		// }
		// else 
		// {
			// return false;
		// }
	// }
	
	// bool CanConstruct_WoodenPlanks_Up ( PlayerBase player )
	// {
		// bool has_materials = this.HasRequiredMaterials ( PART_WOODEN_PLANKS_UP );
		// bool already_built = this.HasAnimationState ( ANIMATION_WOODEN_PLANKS_UP, 0 );
		// bool base_already_built = this.HasAnimationState ( ANIMATION_BASE_UP, 0 );
		// bool metal_plates_already_built = this.HasAnimationState ( ANIMATION_METAL_PLATES_UP, 0 );
		// EntityAI item_in_hands = player.GetEntityInHands();
		// bool has_tools = this.HasRequiredTool ( item_in_hands, this.m_ConstructionTools );
		
		// if ( has_materials && !already_built && base_already_built && !metal_plates_already_built && has_tools )
		// {
			// return true;
		// }
		// else 
		// {
			// return false;
		// }
	// }

	// void Construct_WoodenPlanks_Down( PlayerBase player )
	// {
		// //take materials
		// this.TakeRequiredMaterials ( PART_WOODEN_PLANKS_DOWN );
		
		// //animate
		// this.SetAnimationPhase ( ANIMATION_WOODEN_PLANKS_DOWN, 0 );
		
	    // //store var
		// this.SetVariable("WoodenPlanks_Down",1);
		// string P_UID;
		// player.GetVariable("GU_ID",P_UID);
		
		// this.SetVariable("owner",P_UID);
		
		// //player message
		// player.MessageStatus ( MESSAGE_CONSTRUCT_WOODEN_DOWN );
	// }

	// void Construct_WoodenPlanks_Up( PlayerBase player )
	// {
		// //take materials
		// this.TakeRequiredMaterials ( PART_WOODEN_PLANKS_UP );
		
		// //animate
		// this.SetAnimationPhase ( ANIMATION_WOODEN_PLANKS_UP, 0 );
		
		// //store var
		// this.SetVariable("WoodenPlanks_Up",1);
		// string P_UID;
		// player.GetVariable("GU_ID",P_UID);
		
		// this.SetVariable("owner",P_UID);
		
		// //player message
		// player.MessageStatus ( MESSAGE_CONSTRUCT_WOODEN_UP );
	// }
	
	// bool CanDeconstruct_WoodenPlanks_Down ( PlayerBase player )
	// {
		// bool already_built = this.HasAnimationState ( ANIMATION_WOODEN_PLANKS_DOWN, 0 );
		// EntityAI item_in_hands = player.GetEntityInHands();
		// bool has_tools = this.HasRequiredTool ( item_in_hands, m_DeconstructionTools );
		
		// if ( already_built && has_tools )
		// {
			// return true;
		// }
		// else 
		// {
			// return false;
		// }
	// }

	// bool CanDeconstruct_WoodenPlanks_Up ( PlayerBase player )
	// {
		// bool already_built = this.HasAnimationState ( ANIMATION_WOODEN_PLANKS_UP, 0 );
		// EntityAI item_in_hands = player.GetEntityInHands();
		// bool has_tools = this.HasRequiredTool ( item_in_hands, m_DeconstructionTools );
		
		// if ( already_built && has_tools )
		// {
			// return true;
		// }
		// else 
		// {
			// return false;
		// }
	// }
	
	// void Deconstruct_WoodenPlanks_Down( PlayerBase player )
	// {
		// float isBusy;
		// player.GetVariable("isBusy",isBusy);
		// if ( isBusy == 0 )
		// {
			// //receive materials
			// this.ReceiveRemainingMaterials ( PART_WOODEN_PLANKS_DOWN, player );
			
			// //animate
			// this.SetAnimationPhase ( ANIMATION_WOODEN_PLANKS_DOWN, 1 );
			
			 // //store var
			// this.SetVariable("WoodenPlanks_Down",0);
			// string P_UID;
			// player.GetVariable("GU_ID",P_UID);
			
			// this.SetVariable("owner",P_UID);
			
			// //player message
			// player.MessageStatus ( MESSAGE_DECONSTRUCT_WOODEN_DOWN );
		// }
	// }
	
	// void Deconstruct_WoodenPlanks_Up( PlayerBase player )
	// {
		// float isBusy;
		// player.GetVariable("isBusy",isBusy);
		// if ( isBusy == 0 )
		// {
			// //receive materials
			// this.ReceiveRemainingMaterials ( PART_WOODEN_PLANKS_UP, player );
			
			// //animate
			// this.SetAnimationPhase ( ANIMATION_WOODEN_PLANKS_UP, 1 );
			
			// //store var
			// this.SetVariable("WoodenPlanks_Up",0);
			// string P_UID;
			// player.GetVariable("GU_ID",P_UID);
			
			// this.SetVariable("owner",P_UID);
			
			// //player message
			// player.MessageStatus ( MESSAGE_DECONSTRUCT_WOODEN_UP );
		// }
	// }
	
	// // --- METAL PLATES DOWN/UP 
	// bool CanConstruct_MetalPlates_Down ( PlayerBase player )
	// {
		// bool has_materials = this.HasRequiredMaterials ( PART_METAL_PLATES_DOWN );
		// bool already_built = this.HasAnimationState ( ANIMATION_METAL_PLATES_DOWN, 0 );
		// bool base_already_built = this.HasAnimationState ( ANIMATION_BASE_DOWN, 0 );
		// bool wooden_planks_already_built = this.HasAnimationState ( ANIMATION_WOODEN_PLANKS_DOWN, 0 );
		// EntityAI item_in_hands = player.GetEntityInHands();
		// bool has_tools = this.HasRequiredTool ( item_in_hands, this.m_ConstructionTools );
		
		// if ( has_materials && !already_built && base_already_built && !wooden_planks_already_built && has_tools )
		// {
			// return true;
		// }
		// else 
		// {
			// return false;
		// }
	// }
	
	// bool CanConstruct_MetalPlates_Up ( PlayerBase player )
	// {
		// bool has_materials = this.HasRequiredMaterials ( PART_METAL_PLATES_UP );
		// bool already_built = this.HasAnimationState ( ANIMATION_METAL_PLATES_UP, 0 );
		// bool base_already_built = this.HasAnimationState ( ANIMATION_BASE_UP, 0 );
		// bool wooden_planks_already_built = this.HasAnimationState ( ANIMATION_WOODEN_PLANKS_UP, 0 );
		// EntityAI item_in_hands = player.GetEntityInHands();
		// bool has_tools = this.HasRequiredTool ( item_in_hands, this.m_ConstructionTools );
		
		// if ( has_materials && !already_built && base_already_built && !wooden_planks_already_built && has_tools )
		// {
			// return true;
		// }
		// else 
		// {
			// return false;
		// }
	// }
	
	// void Construct_MetalPlates_Down( PlayerBase player )
	// {
		// //take materials
		// this.TakeRequiredMaterials ( PART_METAL_PLATES_DOWN );
		
		// //animate
		// this.SetAnimationPhase ( ANIMATION_METAL_PLATES_DOWN, 0 );
		
		// //store var
		// this.SetVariable("MetalPlates_Down",1);
		// string P_UID;
		// player.GetVariable("GU_ID",P_UID);
		
		// this.SetVariable("owner",P_UID);
		
		// //player message
		// player.MessageStatus ( MESSAGE_CONSTRUCT_METAL_DOWN );
	// }
	
	// void Construct_MetalPlates_Up( PlayerBase player )
	// {
		// //take materials
		// this.TakeRequiredMaterials ( PART_METAL_PLATES_UP );
		
		// //animate
		// this.SetAnimationPhase ( ANIMATION_METAL_PLATES_UP, 0 );
		
		// //store var
		// this.SetVariable("MetalPlates_Up",1);
		// string P_UID;
		// player.GetVariable("GU_ID",P_UID);
		
		// this.SetVariable("owner",P_UID);
		
		// //player message
		// player.MessageStatus ( MESSAGE_CONSTRUCT_METAL_UP );
	// }
	
	// bool CanDeconstruct_MetalPlates_Down ( PlayerBase player )
	// {
		// bool already_built = this.HasAnimationState ( ANIMATION_METAL_PLATES_DOWN, 0 );
		// EntityAI item_in_hands = player.GetEntityInHands();
		// bool has_tools = this.HasRequiredTool ( item_in_hands, m_DeconstructionTools );
		
		// if ( already_built && has_tools )
		// {
			// return true;
		// }
		// else 
		// {
			// return false;
		// }
	// }

	// bool CanDeconstruct_MetalPlates_Up ( PlayerBase player )
	// {
		// bool already_built = this.HasAnimationState ( ANIMATION_METAL_PLATES_UP, 0 );
		// EntityAI item_in_hands = player.GetEntityInHands();
		// bool has_tools = this.HasRequiredTool ( item_in_hands, m_DeconstructionTools );
		
		// if ( already_built && has_tools )
		// {
			// return true;
		// }
		// else 
		// {
			// return false;
		// }
	// }
	
	// void Deconstruct_MetalPlates_Down( PlayerBase player )
	// {
		// float isBusy;
		// player.GetVariable("isBusy",isBusy);
		// if ( isBusy == 0 )
		// {
			// //receive materials
			// this.ReceiveRemainingMaterials ( PART_METAL_PLATES_DOWN, player );
			
			// //animate
			// this.SetAnimationPhase ( ANIMATION_METAL_PLATES_DOWN, 1 );
			
			// //store var
			// this.SetVariable("MetalPlates_Down",0);
			// string P_UID;
			// player.GetVariable("GU_ID",P_UID);
			
			// this.SetVariable("owner",P_UID);
			
			// //player message
			// player.MessageStatus ( MESSAGE_DECONSTRUCT_METAL_DOWN );
		// }
	// }
	
	// void Deconstruct_MetalPlates_Up( PlayerBase player )
	// {
		// float isBusy;
		// player.GetVariable("isBusy",isBusy);
		// if ( isBusy == 0 )
		// {
			// //receive materials
			// this.ReceiveRemainingMaterials ( PART_METAL_PLATES_UP, player );
			
			// //animate
			// this.SetAnimationPhase ( ANIMATION_METAL_PLATES_UP, 1 );
			
			// //store var
			// this.SetVariable("MetalPlates_Up",0);
			// string P_UID;
			// player.GetVariable("GU_ID",P_UID);
			
			// this.SetVariable("owner",P_UID);
			
			// //player message
			// player.MessageStatus ( MESSAGE_DECONSTRUCT_METAL_UP );
		// }
	// }
	
	// //Not Used!
	// void PlaceFence( PlayerBase player )
	// {
		// vector 	pos_spawn	= player.GetPosition() + player.GetDirection();
		// pos_spawn[0]		= pos_spawn[0] + Math.RandomFloat(-0.2, 0.2);
		// pos_spawn[1]		= pos_spawn[1] + 1;
		// pos_spawn[2]		= pos_spawn[2] + Math.RandomFloat(-0.2, 0.2);
		// //pos_spawn		 	= GetGame().SnapToGround(pos_spawn);
		// player.DropEntity(this);
		// this.SetPosition(pos_spawn);
	// }
	
	//Not used!
	bool CanPlaceFence ( PlayerBase player ) 
	{
		/*bool can_be_placed = false;
		EntityAI item_in_hands = player.GetEntityInHands();
		
		if ( item_in_hands ) 
		{
			if (item_in_hands == this)
			{
				can_be_placed = true;
			}		
		}*/
		
		//return can_be_placed;
		return false;
	}
}
