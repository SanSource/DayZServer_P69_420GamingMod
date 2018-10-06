
static string GetDate()
{
	int year, month, day, hour, minute, second;
	
	GetYearMonthDay(year, month, day);
	
	GetHourMinuteSecond(hour, minute, second);

	string date = month.ToStringLen(2) + "-" + day.ToStringLen(2) + "-" + hour.ToStringLen(2) + minute.ToStringLen(2);
	
	return date;
}

	/*--------------------------------------------------------------------*/
	/*----------------------------read system VIP------------------------------------*/
	string VIPConvertList()
    {	
		string outParam1 = "[";
		string outParam2 = "[";
		string outParam3 = "[";
		
		string line_content;
		string final_2;
		TStringArray List_1 = new TStringArray;
		TStringArray List_2 = new TStringArray;
		TStringArray List_3=  new TStringArray;
		
		FileHandle file_1 = OpenFile("$profile:" + "\\VIP\\" + "VIP_List1" + ".sqf", FileMode.READ);
		FileHandle file_2 = OpenFile("$profile:" + "\\VIP\\" + "VIP_List2" + ".sqf", FileMode.READ);
		FileHandle file_3 = OpenFile("$profile:" + "\\VIP\\" + "VIP_List3" + ".sqf", FileMode.READ);
		
		if (file_1 != 0 || file_2 != 0 || file_3 != 0)
		{
	
			// Extract from file
			while ( FGets( file_1, line_content ) > 0 )
			{
				List_1.Insert( line_content );
			}
			CloseFile(file_1);
			
			while ( FGets( file_2, line_content ) > 0 )
			{
				List_2.Insert( line_content );
			}
			CloseFile(file_2);
			
			while ( FGets( file_3, line_content ) > 0 )
			{
				List_3.Insert( line_content );
			}
			CloseFile(file_3);
			
			// Compile Array
			for (int i = 0; i < List_1.Count(); ++i )
			{
				string key_code_1 = List_1.Get(i);
				string strSub1 = key_code_1.Substring(0,17);
				string final_1A = "'"+strSub1+"'";
				string final_2A = final_1A+",";
				outParam1 += final_2A;
			}
			
			for (int ii = 0; ii < List_2.Count(); ++ii )
			{
				string key_code_2 = List_2.Get(ii);
				string strSub2 = key_code_2.Substring(0,17);
				string final_1B = "'"+strSub2+"'";
				string final_2B = final_1B+",";
				outParam2 += final_2B;
			}
			
			for (int iii = 0; iii < List_3.Count(); ++iii )
			{
				string key_code_3 = List_3.Get(iii);
				string strSub = key_code_3.Substring(0,17);
				string final_1C = "'"+strSub+"'";
				string final_2C = final_1C+",";
				outParam3 += final_2C;
			}
		}
		
		outParam1 += "'End-List1'],";
		outParam2 += "'End-List2'],";
		outParam3 += "'End-List3']";
		
		string outParamFinal = "[" + outParam1 + outParam2 + outParam3 + "];";
		
		//Print(outParamFinal);
		return outParamFinal;
    }
	/*--------------------------------------------------------------------*/
	/*--------------------------------------------------------------------*/
	
	//Bank System
	float EnfBankSystem(string playerUID, string Task, string UpdateAmnt)
    {
		string outParam;
		string line_content;  
		string strSub;
		float FoutParam;
		
		FileHandle Check_file = OpenFile("$profile:" + "\\420Bank\\" + "acc_" + playerUID + ".dsv", FileMode.READ);
		if (Check_file == 0)
		{
			FileHandle New_file = OpenFile("$profile:" + "\\420Bank\\" + "acc_" + playerUID + ".dsv", FileMode.WRITE);
			FPrintln(New_file,"Deposit_Amnt:0");
			CloseFile(New_file);
			Print("created new Bank Acc for "+playerUID);
		}
		CloseFile(Check_file);
		
		switch(Task)
		{
			case "Read":
			
			FileHandle Read_file = OpenFile("$profile:" + "\\420Bank\\" + "acc_" + playerUID + ".dsv", FileMode.READ);
			if (Read_file != 0)
			{
				while ( FGets( Read_file, line_content ) > 0 )
				{
					int count = line_content.Replace("Deposit_Amnt:","");
					outParam = line_content;
				}
				CloseFile(Read_file);
			}
			//Print("Trash: "+outParam+playerUID+Task);
			
			FoutParam = outParam.ToFloat();
			return FoutParam; // Final Return
			
			break;
			case "Edit":
			FileHandle Edit_file = OpenFile("$profile:" + "\\420Bank\\" + "acc_" + playerUID + ".dsv", FileMode.WRITE);
			if (Edit_file != 0)
			{
				string ToPrint = "Deposit_Amnt:" + UpdateAmnt;
				FPrintln(Edit_file,ToPrint);
				CloseFile(Edit_file);
			}
			break;
		}
			
		FoutParam = outParam.ToFloat();
		return FoutParam; // Final Return
    }
	
	/*--------------------------------------------------------------------*/
	/*----------------------------read system VIP Cooldown------------------------------------*/
	string VIPCooldownArr()
    {
		string outParam = "[";
		string line_content;
		string final_2;
		TStringArray New_codes = new TStringArray;
		FileHandle file = OpenFile("$profile:" + "\\VIP\\" + "VIP_Cooldown" + ".sqf", FileMode.READ);
		if (file != 0)
		{   
			while ( FGets( file, line_content ) > 0 )
			{
				New_codes.Insert( line_content );
			}
			CloseFile(file);
			for (int i = 0; i < New_codes.Count(); ++i )
			{
				string key_code = New_codes.Get(i);
				//string strSub = key_code.Substring(0,17);
				//string final_1 = "'"+strSub+"'";
				final_2 = key_code+",";
				outParam += final_2;
			}
		}
		
		outParam += "['0',0]];";
		//Print(outParam);
		return outParam;
    }
	/*--------------------------------------------------------------------*/
	/*--------------------------------------------------------------------*/
	
	void CLArrayUpdate(string UID, float SentText)
    {
		string line_content;
		TStringArray List_Info = new TStringArray;
		FileHandle file = OpenFile("$profile:" + "\\VIP\\" + "VIP_Cooldown" + ".sqf", FileMode.READ);
		if (file != 0)
		{
			while ( FGets( file, line_content ) > 0 )
			{
				List_Info.Insert( line_content );
			}
		}
		CloseFile(file);
	 
	 FileHandle VIPfile = OpenFile("$profile:" + "\\VIP\\" + "VIP_Cooldown" + ".sqf", FileMode.WRITE);
	 
		if (VIPfile != 0)
		{
			string New_sub = "['" + UID + "'," + SentText + "]";
			for (int i = 0; i < List_Info.Count(); ++i )
			{
			  string UID_sub = List_Info.Get(i);
			  string UID_subFnl = UID_sub;
			  FPrintln(VIPfile, UID_subFnl);
			}
			FPrintln(VIPfile, New_sub);
		}
		CloseFile(VIPfile);
		List_Info.Clear();
    }
	
	void UpdateVIPCLList( string UID, float ToRemove )
    {
		string line_content;
		string final;
		string strSub;
		TStringArray New_codes = new TStringArray;
		FileHandle file = OpenFile("$profile:" + "\\VIP\\" + "VIP_Cooldown" + ".sqf", FileMode.READ);
		if (file != 0)
		{
			while ( FGets( file, line_content ) > 0 )
			{
			  New_codes.Insert( line_content );
			}	
			CloseFile(file);

			for (int ij = 0; ij < New_codes.Count(); ++ij )
			{
				string nigger_code = New_codes.Get(ij);
				//final = "['" + UID + "'," + ToRemove + "]";
				strSub = nigger_code.Substring(2,17);
				//Print(strSub);
				//Print(nigger_code);
				//Print(final);
				if (strSub == UID)
				{
					New_codes.RemoveItem(nigger_code);
				}
			}
		}
		
		FileHandle VIPCodefile = OpenFile("$profile:" + "\\VIP\\" + "VIP_Cooldown" + ".sqf", FileMode.WRITE);
		if (VIPCodefile != 0)
		{
			for (int i = 0; i < New_codes.Count(); ++i )
			{
			  string key_code = New_codes.Get(i);
			  FPrintln(VIPCodefile, key_code);
			}
		}
		CloseFile(VIPCodefile);
    }

void ScriptedLock ( EntityAI player, string task )
{
    if ( task == "lock" )
		{
		    //player.LockInventory(LOCK_FROM_SCRIPT);
			if(CanLockInventoryWithKey(player))
			{			
				LockInventoryWithKey(player);
			}
		}else {
		    //player.UnlockInventory(LOCK_FROM_SCRIPT);
			if(CanUnlockInventoryWithKey(player))
			{			
				UnlockInventoryWithKey(player);
			}
	}
}
	
static void WallFill( EntityAI Obj )
{
	if ( Obj != NULL )
	{
		Obj.SetAnimationPhase ( "filled", 0 );
	}
}

static void DataBaseDelete(string in1, string in2)
{
	string player_alive, player_dead, file_name, date;
	
	MakeDirectory("$profile:db" + "\\dead\\" + in2);
	
	file_name = "$FILENAME$.sqf";
	
	file_name.Replace("$FILENAME$", in1);
	
	date = GetDate();
	
	player_alive = "$profile:db" + "\\alive\\" + in2 + "\\" + file_name;
	
	player_dead = "$profile:db" + "\\dead\\" + in2 + "\\" + file_name;
	
	FileHandle file = OpenFile(player_alive, FileMode.READ);
	
	if (file != 0)  {   
		
		CloseFile(file);

		CopyFile(player_alive, player_dead); 	
		
		DeleteFile(player_alive);
	} 
	//Print("DataBase: Delete Func DONE!");
}


static void DataBaseWrite(string in1, string in2, string in3)
{	
	string player_alive, file_name;

	file_name = "$FILENAME$.sqf";
	
	file_name.Replace("$FILENAME$", in1);
	
	player_alive = "$profile:db" + "\\alive\\" + in2 + "\\" + file_name;
			
	FileHandle file = OpenFile(player_alive, FileMode.WRITE);
	

	if (file != 0) {
		
		
		in3.Replace("<null>", "\'" + "\'");
		
		
		FPrintln(file, in3);
		
		CloseFile(file);

	}  else {
		
		MakeDirectory("$profile:db" + "\\alive\\" + in2 );
		
	}
	//Print("DataBase: Save Func DONE!");
}


static string DataBaseRead(string in1, string in2)
{
	string player_alive, file_content, file_name;
	
	file_content = "";
	
	file_name = "$FILENAME$.sqf";
	
	file_name.Replace("$FILENAME$", in1);
	
	player_alive = "$profile:db" + "\\alive\\" + in2 + "\\" + file_name;
		
	FileHandle file = OpenFile(player_alive, FileMode.READ);
	
	if (file != 0)  {  
	
		FGets(file, file_content);
		
		CloseFile(file);
	}
	
	return file_content;
	//Print("DataBase: READ system DONE!");
	//Print(file_content);
}

	//----------Loot Respawner function Balota base----------
	static void ObjSPAWNER( float SQF_Random, float SQF_RandomGUNS )
    {
		
		TStringArray GunsArray = new TStringArray;
		TStringArray GunAttArray = new TStringArray;
		TStringArray LootTypesArray = new TStringArray;
		TStringArray PosInfoArray = new TStringArray;
		TStringArray PosInfoArray2 = new TStringArray;


		//----POS-INFO-GUNS-----//
		PosInfoArray.Insert("4762.793457 6.099970 2316.068359");  // first 3 = POS, X Z Y
		PosInfoArray.Insert("4758.556641 6.200021 2308.567627");
		PosInfoArray.Insert("4802.966797 7.749805 2316.358398");
		PosInfoArray.Insert("4798.738770 6.712040 2315.999512");
		PosInfoArray.Insert("4784.833008 6.784499 2246.108643");
		PosInfoArray.Insert("4744.493164 6.104955 2273.625488");
		PosInfoArray.Insert("4804.373535 6.104955 2299.403564");
		PosInfoArray.Insert("4822.549805 6.104955 2308.516602");
		PosInfoArray.Insert("4817.850098 6.104955 2287.674561");
		PosInfoArray.Insert("4779.334473 6.104955 2249.357422");
		
		//----POS-INFO ITEMS------//
		PosInfoArray2.Insert("4800.355469 6.278176 2334.071289");  // first 3 = POS, X Z Y
		PosInfoArray2.Insert("4802.644531 6.327882 2337.799316");
		PosInfoArray2.Insert("4789.492188 7.495245 2343.456055");
		PosInfoArray2.Insert("4792.945801 8.846541 2343.040283");
		PosInfoArray2.Insert("4804.352539 6.948731 2319.307861");
		PosInfoArray2.Insert("4801.165527 7.209975 2319.144043");
		PosInfoArray2.Insert("4809.425293 6.000032 2313.088867");
		PosInfoArray2.Insert("4820.582031 6.000047 2308.849609");
		PosInfoArray2.Insert("4826.907715 6.000022 2302.472656");
		PosInfoArray2.Insert("4821.824707 6.000019 2287.667480");
		PosInfoArray2.Insert("4817.327148 5.999990 2287.731689");  // first 3 = POS, X Z Y
		PosInfoArray2.Insert("4812.862793 5.999990 2293.880859");
		PosInfoArray2.Insert("4804.345703 6.000010 2299.309082");
		PosInfoArray2.Insert("4808.794922 5.999992 2279.977051");
		PosInfoArray2.Insert("4807.247559 5.999982 2276.353271");
		PosInfoArray2.Insert("4812.742676 5.999934 2276.714844");
		PosInfoArray2.Insert("4807.881348 5.999994 2267.421631");
		PosInfoArray2.Insert("4809.761230 6.000013 2270.438965");
		PosInfoArray2.Insert("4805.098145 5.999961 2270.301025");
		PosInfoArray2.Insert("4800.354492 5.999944 2262.840576");
		PosInfoArray2.Insert("4799.298828 5.999967 2254.023682");  // first 3 = POS, X Z Y
		PosInfoArray2.Insert("4795.028320 5.999934 2257.242188");
		PosInfoArray2.Insert("4778.057129 6.000003 2251.091309");
		PosInfoArray2.Insert("4786.417969 5.999975 2262.324463");
		PosInfoArray2.Insert("4783.838379 6.000010 2266.322998");
		PosInfoArray2.Insert("4788.031738 6.000043 2275.195068");
		PosInfoArray2.Insert("4785.403320 5.999990 2271.974121");
		PosInfoArray2.Insert("4790.168457 6.000025 2271.014404");
		PosInfoArray2.Insert("4794.530762 5.999974 2275.638184");
		PosInfoArray2.Insert("4792.513672 5.999979 2279.250000");
		PosInfoArray2.Insert("4795.377930 6.000009 2287.896240");  // first 3 = POS, X Z Y
		PosInfoArray2.Insert("4793.218262 6.000007 2284.801025");
		PosInfoArray2.Insert("4797.827148 6.000076 2285.359619");
		PosInfoArray2.Insert("4774.482422 6.000036 2301.083984");
		PosInfoArray2.Insert("4774.999512 6.000021 2297.041504");
		PosInfoArray2.Insert("4767.992188 5.999993 2296.720215");
		PosInfoArray2.Insert("4769.837402 6.000005 2293.404053");
		PosInfoArray2.Insert("4766.720215 5.999986 2294.021973");
		PosInfoArray2.Insert("4763.961914 6.000021 2290.127686");
		PosInfoArray2.Insert("4761.955566 6.000004 2287.153564");
		PosInfoArray2.Insert("4765.123047 6.000072 2286.091553");
		PosInfoArray2.Insert("4759.996094 6.000016 2283.058350");
		PosInfoArray2.Insert("4761.303223 6.000005 2280.541992");
		PosInfoArray2.Insert("4753.386230 5.999958 2266.124268");
		PosInfoArray2.Insert("4752.881348 6.000028 2292.245361");
		PosInfoArray2.Insert("4759.089844 6.000000 2302.164551");
		PosInfoArray2.Insert("4757.989746 6.000000 2310.395752");
		PosInfoArray2.Insert("4764.637207 6.000047 2315.027344");
		
		//-----LootGuns--------//
		GunsArray.Insert("AKM");
		GunsArray.Insert("M4A1");
		GunsArray.Insert("AK101");
		GunsArray.Insert("B95");
		GunsArray.Insert("SKS");
		GunsArray.Insert("Winchester70_Black");
		GunsArray.Insert("FAL");
		GunsArray.Insert("SVD");
		//-----LootTypes--------//
		
		LootTypesArray.Insert("Ammo_556_20Rnd");
		LootTypesArray.Insert("Ammo_357_20Rnd");
		LootTypesArray.Insert("CLIP_762_5Rnd");
		LootTypesArray.Insert("M_CMAG_10Rnd");
		LootTypesArray.Insert("clip_762x39_10rnd");
		LootTypesArray.Insert("Optics_Binoculars");
		LootTypesArray.Insert("M_STANAG_30Rnd_COUPLED");
		LootTypesArray.Insert("CargoPants_Black");
		LootTypesArray.Insert("BagHunting");
		LootTypesArray.Insert("WorkingGloves_Black");
		LootTypesArray.Insert("BallisticHelmet_Black");
		LootTypesArray.Insert("rocketaviators");
		LootTypesArray.Insert("BalaclavaMask_Blackskull");
		LootTypesArray.Insert("HighCapacityVest_Black");
		LootTypesArray.Insert("m65_jacket_olive");
		LootTypesArray.Insert("m65_jacket_black");
		LootTypesArray.Insert("m65_jacket_kahki");
		LootTypesArray.Insert("cargopants_green");
		LootTypesArray.Insert("workinggloves_brown");
		LootTypesArray.Insert("BallisticHelmet_Green");
		LootTypesArray.Insert("BalaclavaMask_greenpattern");
		LootTypesArray.Insert("SmershVestBackpack");
		LootTypesArray.Insert("BagTortilla");
		LootTypesArray.Insert("GorkaHelmet_complete_Green");
		LootTypesArray.Insert("GorkaHelmet_complete_Black");
		LootTypesArray.Insert("PlateCarrierComplete");
		LootTypesArray.Insert("M_ak101_30Rnd");
		LootTypesArray.Insert("M_Saiga_5Rnd");
		LootTypesArray.Insert("M_ak74_30Rnd");
		LootTypesArray.Insert("M_Vss_10Rnd");
		LootTypesArray.Insert("M_svd_10Rnd");
		LootTypesArray.Insert("M_Fal_20Rnd");
		LootTypesArray.Insert("Att_Suppressor_AK");
		LootTypesArray.Insert("Att_Optic_PSO1");
		LootTypesArray.Insert("ammobox_556_20rnd");
		LootTypesArray.Insert("AmmoBox_9x39_20Rnd");
		LootTypesArray.Insert("AmmoBox_308Win_20Rnd");
		LootTypesArray.Insert("AmmoBox_762_20Rnd");
		LootTypesArray.Insert("fnx45");
		LootTypesArray.Insert("Att_Suppressor_Pistol");
		LootTypesArray.Insert("1911_engraved");
		LootTypesArray.Insert("Att_Optic_FNP45_MRD");
		LootTypesArray.Insert("m_fnx45_15rnd");
		LootTypesArray.Insert("Glock19");
		LootTypesArray.Insert("M_Glock_15Rnd");
		LootTypesArray.Insert("Att_Optic_Reflex");
		LootTypesArray.Insert("Att_Optic_ACOG");
		LootTypesArray.Insert("Att_Optic_M4T3NRDS");
		
		
		//--------Attachments-----//
		GunAttArray.Insert("M_ak101_30Rnd");
		GunAttArray.Insert("Att_Optic_PSO1");
		GunAttArray.Insert("Att_Handguard_AK74_Camo");
		GunAttArray.Insert("Att_Buttstock_AK_Wood_Camo");
		GunAttArray.Insert("M_Saiga_5Rnd");
		GunAttArray.Insert("M_Saiga_8Rnd");
		GunAttArray.Insert("M_SaigaDrum_20Rnd");
		GunAttArray.Insert("Att_Buttstock_Saiga");
		GunAttArray.Insert("M_ak74_30Rnd");
		GunAttArray.Insert("M_akm_drum");
		GunAttArray.Insert("M_STANAG_30Rnd_Coupled");
		GunAttArray.Insert("Att_Optic_Reflex");
		GunAttArray.Insert("Att_Handguard_M4RIS");
		GunAttArray.Insert("Att_Buttstock_M4MP");
		GunAttArray.Insert("Att_Optic_ACOG");
		GunAttArray.Insert("Att_Optic_M4T3NRDS");
		GunAttArray.Insert("Att_Suppressor_M4");
		GunAttArray.Insert("Att_Suppressor_AK");
		GunAttArray.Insert("M_Vss_10Rnd");
		GunAttArray.Insert("M_svd_10Rnd");
		GunAttArray.Insert("Att_Optic_Hunting");
		GunAttArray.Insert("M_Fal_20Rnd");
		GunAttArray.Insert("Att_Buttstock_FalFolding");
		GunAttArray.Insert("Clip_762x39_10Rnd");
		GunAttArray.Insert("Att_Bayonet_SKS");
		GunAttArray.Insert("Att_Optic_PUScope");
		GunAttArray.Insert("CLIP_308Win_Snaploader");
		GunAttArray.Insert("M_cz527_5rnd");
		GunAttArray.Insert("CLIP_762_5Rnd");
		GunAttArray.Insert("Att_Compensator_Mosin");

		for ( int ig = 0; ig < SQF_RandomGUNS; ig++ )
		{   
			float random_indexGUN = Math.RandomFloat(0,0.5);
			EntityAI Gun;
			string RandomPOS;
			RandomPOS = PosInfoArray.GetRandomElement();
			Gun = GetGame().CreateObject(GunsArray.Get(ig), RandomPOS.ToVector(), false);
			vector ObjOrienation = "-0.000003 86.498024 -2.499981";
			Gun.SetOrientation(ObjOrienation);
			Gun.SetDamage(random_indexGUN);
			for ( int att = 0; att < GunAttArray.Count(); att++ )
			{
				EntityAI GunAtts;
				float random_damage = Math.RandomFloat(0,0.8);
				GunAtts = GetGame().CreateObject(GunAttArray.Get(att), "0 0 0", false);
				GunAtts.SetDamage(random_damage);
				Gun.TakeEntityAsAttachment (GunAtts);
			}
		}
		
		for ( int ld = 0; ld < SQF_Random; ld++ )
		{
			float random_index = Math.RandomFloat(0,0.8);
			EntityAI Item;
			string RandomLootPOS;
			RandomLootPOS = PosInfoArray2.GetRandomElement();
			Item = GetGame().CreateObject(LootTypesArray.GetRandomElement(), RandomLootPOS.ToVector(), false);
			if ( Item != NULL )
			{
				Item.SetOrientation("121.303909 0.000000 -0.000000");
				Item.SetDamage(random_index);
			}
			else
			{
				
			}
		}
	}
