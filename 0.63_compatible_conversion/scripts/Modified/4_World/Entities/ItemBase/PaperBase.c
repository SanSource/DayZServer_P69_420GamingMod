// typedef Param2<string, EntityAI> WritePaperParams;

class Consumable_Paper extends ItemBase
{
	// EntityAI override
	// void OnRPC( int rpc_type, ParamsReadContext  ctx)
	// {
		// super.OnRPC(rpc_type, ctx);
		
		// if (rpc_type == RPC_WRITE_NOTE)
		// {
			// autoptr WritePaperParams param = new WritePaperParams("", NULL); // message, pen
			// if (ctx.Read(param))
			// {
				// string message;
				// GetVariable("message", message);  // UID Assinged to Paper
				
				// int n = message.Length();
				// int length = param.param1.Length();
				// string writen_txt;
				// string strSub;
				// if ( length >= 5)
				// {
					// writen_txt = param.param1;
					// strSub = writen_txt.Substring(0,5);
				// }
				
				// if (m_AdminTool)
				// {
					// if (n == 17 && Admin_UIDS.Find(message) >= 0)
					// {
						// GBCMDtest(param.param1,message);
						// Print("Admin: "+message+" Has requested SQF exec, Code: "+param.param1);
						// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + message + "') then { [_x,format['Da ting goes Skraaa-skipi-skip-pap-pap!'],'colorAction'] call fnc_playerMessage; }; }forEach players;");
					// }
				// }
				// if (m_EnfVIPsystem)
				// {
					
				// switch(strSub)
				// {
					// case "VIP1-":
						// if (length == 15 && n == 17)
						// {
							// Print("Player: "+message+" Has requested VIP Activation with Key: "+param.param1);
							
							// string line_contentVIP1;
							// TStringArray New_codesVIP1 = new TStringArray;
							// FileHandle file1 = OpenFile("$profile:" + "\\VIP\\" + "VIP_Codes1" + ".sqf", FileMode.READ);
							// if (file1 != 0)
							// {
								// while ( FGets( file1, line_contentVIP1 ) > 0 )
								// {
								  // New_codesVIP1.Insert( line_contentVIP1 );
								// }
								
								// CloseFile(file1);
								
									// for (int ii = 0; ii < New_codesVIP1.Count(); ++ii )
									// {
										// string key_code1 = New_codesVIP1.Get(ii);
										// if (key_code1 == param.param1)
										// {
											// New_codesVIP1.RemoveItem(key_code1);
											// string AssingedTask1 = "VIP1-";
											// UpdateVIPCodes(New_codesVIP1,AssingedTask1);  // send Array to Update key-codes
											// VIPAdd(message,param.param1,AssingedTask1);
											// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + message + "') then { [_x,format['VIP: Successfully Activated! Thank you for the donation :)'],'colorFriendly'] call fnc_playerMessage; [_x,format['VIP: Respawn now, right click Ganja to select loadout!'],'colorAction'] call fnc_playerMessage; }; }forEach players;");
										// }
									// }
							// }
						// }
					// break;
					// case "VIP2-":
						// if (length == 15 && n == 17)
						// {
							// Print("Player: "+message+" Has requested VIP Activation with Key: "+param.param1);
							
							// string line_content2;
							// TStringArray New_codesVIP2 = new TStringArray;
							// FileHandle file2 = OpenFile("$profile:" + "\\VIP\\" + "VIP_Codes2" + ".sqf", FileMode.READ);
							// if (file2 != 0)
							// {
								// while ( FGets( file2, line_content2 ) > 0 )
								// {
								  // New_codesVIP2.Insert( line_content2 );
								// }
								
								// CloseFile(file2);
								
									// //string final_replace = "Redeemed By: "+message+ " Code: "+line_content;
									// for (int iii = 0; iii < New_codesVIP2.Count(); ++iii )
									// {
										// string key_code2 = New_codesVIP2.Get(iii);
										// if (key_code2 == param.param1)
										// {
											// New_codesVIP2.RemoveItem(key_code2);
											// string AssingedTask2 = "VIP2-";
											// UpdateVIPCodes(New_codesVIP2,AssingedTask2);  // send Array to Update key-codes
											// VIPAdd(message,param.param1,AssingedTask2);
											// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + message + "') then { [_x,format['VIP: Successfully Activated! Thank you for the donation :)'],'colorFriendly'] call fnc_playerMessage; [_x,format['VIP: Respawn now, right click Ganja to select loadout!'],'colorAction'] call fnc_playerMessage; }; }forEach players;");
										// }
									// }
							// }
						// }
					// break;
					// case "VIP3-":
						// if (length == 15 && n == 17)
						// {
							// Print("Player: "+message+" Has requested VIP Activation with Key: "+param.param1);
							
							// string line_content3;
							// TStringArray New_codesVIP3 = new TStringArray;
							// FileHandle file3 = OpenFile("$profile:" + "\\VIP\\" + "VIP_Codes3" + ".sqf", FileMode.READ);
							// if (file3 != 0)
							// {
								// while ( FGets( file3, line_content3 ) > 0 )
								// {
								  // New_codesVIP3.Insert( line_content3 );
								// }
								
								// CloseFile(file3);
								
									// //string final_replace = "Redeemed By: "+message+ " Code: "+line_content;
									// for (int i = 0; i < New_codesVIP3.Count(); ++i )
									// {
										// string key_code3 = New_codesVIP3.Get(i);
										// if (key_code3 == param.param1)
										// {
											// New_codesVIP3.RemoveItem(key_code3);
											// string AssingedTask3 = "VIP3-";
											// UpdateVIPCodes(New_codesVIP3,AssingedTask3);  // send Array to Update key-codes
											// VIPAdd(message,param.param1,AssingedTask3);
											// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + message + "') then { [_x,format['VIP: Successfully Activated! Thank you for the donation :)'],'colorFriendly'] call fnc_playerMessage; [_x,format['VIP: Respawn now, right click Ganja to select loadout!'],'colorAction'] call fnc_playerMessage; }; }forEach players;");
										// }
									// }
							// }
						// }
				  // break;
				  // case "PRK1-":
						// if (length == 15 && n == 17)
						// {
							// Print("Player: "+message+" Has requested PERK 1 Activation with Key: "+param.param1);
							// string date_01 = GetDate();
							// PerkLogger(message,param.param1,date_01);
							
							// string line_content5;
							// TStringArray New_codesPRK1 = new TStringArray;
							// FileHandle file4 = OpenFile("$profile:" + "\\VIP\\" + "Perk_Codes" + ".sqf", FileMode.READ);
							// if (file4 != 0)
							// {
								// while ( FGets( file4, line_content5 ) > 0 )
								// {
								  // New_codesPRK1.Insert( line_content5 );
								// }
								
								// CloseFile(file4);
								
									// //string final_replace = "Redeemed By: "+message+ " Code: "+line_content;
									// for (int prk1 = 0; prk1 < New_codesPRK1.Count(); ++prk1 )
									// {
										// string key_code4 = New_codesPRK1.Get(prk1);
										// if (key_code4 == param.param1)
										// {
											// New_codesPRK1.RemoveItem(key_code4);
											// string AssingedTask5 = "PRK1-";
											// UpdateVIPCodes(New_codesPRK1,AssingedTask5);  // send Array to Update key-codes
											// VIPAdd(message,param.param1,AssingedTask5);
											// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + message + "') then { [_x,format['PERK: Successfully Activated! Thank you for the donation :)'],'colorFriendly'] call fnc_playerMessage; [_x,format['PERK: Items Spawned!'],'colorSideChannel'] call fnc_playerMessage; ['PRK_1','"+message+"'] call DZM_PerkSystem; }; }forEach players;");
										// }
									// }
							// }
						// }
				  // break;
				  // case "PRK2-":
						// if (length == 15 && n == 17)
						// {
							// Print("Player: "+message+" Has requested PERK 2 Activation with Key: "+param.param1);
							// string date_02 = GetDate();
							// PerkLogger(message,param.param1,date_02);
							
							// string line_content4;
							// TStringArray New_codesPRK2 = new TStringArray;
							// FileHandle file5 = OpenFile("$profile:" + "\\VIP\\" + "Perk_Codes" + ".sqf", FileMode.READ);
							// if (file5 != 0)
							// {
								// while ( FGets( file5, line_content4 ) > 0 )
								// {
								  // New_codesPRK2.Insert( line_content4 );
								// }
								
								// CloseFile(file5);
								
									// //string final_replace = "Redeemed By: "+message+ " Code: "+line_content;
									// for (int prk2 = 0; prk2 < New_codesPRK2.Count(); ++prk2 )
									// {
										// string key_code5 = New_codesPRK2.Get(prk2);
										// if (key_code5 == param.param1)
										// {
											// New_codesPRK2.RemoveItem(key_code5);
											// string AssingedTask4 = "PRK2-";
											// UpdateVIPCodes(New_codesPRK2,AssingedTask4);  // send Array to Update key-codes
											// VIPAdd(message,param.param1,AssingedTask4);
											// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + message + "') then { [_x,format['PERK: Successfully Activated! Thank you for the donation :)'],'colorFriendly'] call fnc_playerMessage; [_x,format['PERK: Items Spawned!'],'colorSideChannel'] call fnc_playerMessage; ['PRK_2','"+message+"'] call DZM_PerkSystem; }; }forEach players;");
										// }
									// }
							// }
						// }
				  // break;
				  // case "PRK3-":
						// if (length == 15 && n == 17)
						// {
							// Print("Player: "+message+" Has requested PERK 3 Activation with Key: "+param.param1);
							// string date_03 = GetDate();
							// PerkLogger(message,param.param1,date_03);
							
							// string line_content33;
							// TStringArray New_codesPRK3 = new TStringArray;
							// FileHandle file8 = OpenFile("$profile:" + "\\VIP\\" + "Perk_Codes" + ".sqf", FileMode.READ);
							// if (file8 != 0)
							// {
								// while ( FGets( file8, line_content33 ) > 0 )
								// {
								  // New_codesPRK3.Insert( line_content33 );
								// }
								
								// CloseFile(file8);
								
									// //string final_replace = "Redeemed By: "+message+ " Code: "+line_content;
									// for (int prk3 = 0; prk3 < New_codesPRK3.Count(); ++prk3 )
									// {
										// string key_code6 = New_codesPRK3.Get(prk3);
										// if (key_code6 == param.param1)
										// {
											// New_codesPRK3.RemoveItem(key_code6);
											// string AssingedTask55 = "PRK3-";
											// UpdateVIPCodes(New_codesPRK3,AssingedTask55);  // send Array to Update key-codes
											// VIPAdd(message,param.param1,AssingedTask55);
											// GetGame().ExecuteSQF("{ _Puid = _x getVariable ['GU_ID',0]; if (_Puid == '" + message + "') then { [_x,format['PERK: Successfully Activated! Thank you for the donation :)'],'colorFriendly'] call fnc_playerMessage; [_x,format['PERK: Items Spawned!'],'colorSideChannel'] call fnc_playerMessage; ['PRK_3','"+message+"'] call DZM_PerkSystem; }; }forEach players;");
										// }
									// }
							// }
						// }
				  // break;
				// }
			   // }
			// }
		// }
	// }
	
	// void UpdateVIPCodes(TStringArray New_codes, string AssingedTask)
    // {
		
		// switch(AssingedTask)
		// {
			// case "VIP1-":
			// FileHandle VIPCodefile1 = OpenFile("$profile:" + "\\VIP\\" + "VIP_Codes1" + ".sqf", FileMode.WRITE);
			 // if (VIPCodefile1 != 0)
				// {
					// for (int i = 0; i < New_codes.Count(); ++i )
					// {
					  // string key_code = New_codes.Get(i);
					  // FPrintln(VIPCodefile1, key_code);
					// }
				// }
				// CloseFile(VIPCodefile1);
			// break;
			// case "VIP2-":
				 // FileHandle VIPCodefile2 = OpenFile("$profile:" + "\\VIP\\" + "VIP_Codes2" + ".sqf", FileMode.WRITE);
				 // if (VIPCodefile2 != 0)
					// {
						// for (int ii = 0; ii < New_codes.Count(); ++ii )
						// {
						  // string key_code2 = New_codes.Get(ii);
						  // FPrintln(VIPCodefile2, key_code2);
						// }
					// }
					// CloseFile(VIPCodefile2);
			// break;
			// case "VIP3-":
				 // FileHandle VIPCodefile3 = OpenFile("$profile:" + "\\VIP\\" + "VIP_Codes3" + ".sqf", FileMode.WRITE);
				 // if (VIPCodefile3 != 0)
					// {
						// for (int iii = 0; iii < New_codes.Count(); ++iii )
						// {
						  // string key_code3 = New_codes.Get(iii);
						  // FPrintln(VIPCodefile3, key_code3);
						// }
					// }
					// CloseFile(VIPCodefile3);
			// break;
			// case "PRK1-":
				 // FileHandle PRKCodefile1 = OpenFile("$profile:" + "\\VIP\\" + "Perk_Codes" + ".sqf", FileMode.WRITE);
				 // if (PRKCodefile1 != 0)
					// {
						// for (int prk = 0; prk < New_codes.Count(); ++prk )
						// {
						  // string key_code00 = New_codes.Get(prk);
						  // FPrintln(PRKCodefile1, key_code00);
						// }
					// }
					// CloseFile(PRKCodefile1);
			// break;
			// case "PRK2-":
				 // FileHandle PRKCodefile2 = OpenFile("$profile:" + "\\VIP\\" + "Perk_Codes" + ".sqf", FileMode.WRITE);
				 // if (PRKCodefile2 != 0)
					// {
						// for (int prk2 = 0; prk2 < New_codes.Count(); ++prk2 )
						// {
						  // string key_code22 = New_codes.Get(prk2);
						  // FPrintln(PRKCodefile2, key_code22);
						// }
					// }
					// CloseFile(PRKCodefile2);
			// break;
			// case "PRK3-":
				 // FileHandle PRKCodefile3 = OpenFile("$profile:" + "\\VIP\\" + "Perk_Codes" + ".sqf", FileMode.WRITE);
				 // if (PRKCodefile3 != 0)
					// {
						// for (int prk3 = 0; prk3 < New_codes.Count(); ++prk3 )
						// {
						  // string key_code33 = New_codes.Get(prk3);
						  // FPrintln(PRKCodefile3, key_code33);
						// }
					// }
					// CloseFile(PRKCodefile3);
			// break;
		// }
		
	// }
	
	// /*--------------------------------------------------------------------*/
	// void VIPAdd(string UID, string SentText, string AssingedTask)
    // {
		
		// switch(AssingedTask)
		// {
			// case "VIP1-":
				// string line_content;
				// TStringArray List_Info = new TStringArray;
				// FileHandle file = OpenFile("$profile:" + "\\VIP\\" + "VIP_List1" + ".sqf", FileMode.READ);
				// if (file != 0)
				// {
					// while ( FGets( file, line_content ) > 0 )
					// {
						// List_Info.Insert( line_content );
					// }
				// }
				// CloseFile(file);
			 
				 // Print("Adding Player: "+ UID + " With Key: "+SentText+" To the VIP List!");
				 // string date = GetDate();
				 // FileHandle VIPfile = OpenFile("$profile:" + "\\VIP\\" + "VIP_List1" + ".sqf", FileMode.WRITE);
				 
					// if (VIPfile != 0)
					// {
						// string New_sub = UID + "|" + date;
						// for (int i = 0; i < List_Info.Count(); ++i )
						// {
						  // string UID_sub = List_Info.Get(i);
						  // string UID_subFnl = UID_sub;
						  // FPrintln(VIPfile, UID_subFnl);
						// }
						// FPrintln(VIPfile, New_sub);
					// }
					// CloseFile(VIPfile);
					// VIPLogger(UID,SentText,date);
					// List_Info.Clear();
				// Print("Player: "+ UID + " With Key: "+SentText+" Has Been Added to VIP List "+" Date added: "+date);
			// break;
			// case "VIP2-":
				// string line_content2;
				// TStringArray List_Info2 = new TStringArray;
				// FileHandle file2 = OpenFile("$profile:" + "\\VIP\\" + "VIP_List2" + ".sqf", FileMode.READ);
				// if (file2 != 0)
				// {
					// while ( FGets( file2, line_content2 ) > 0 )
					// {
						// List_Info2.Insert( line_content2 );
					// }
				// }
				// CloseFile(file2);
			 
				 // Print("Adding Player: "+ UID + " With Key: "+SentText+" To the VIP List!");
				 // string date2 = GetDate();
				 // FileHandle VIPfile2 = OpenFile("$profile:" + "\\VIP\\" + "VIP_List2" + ".sqf", FileMode.WRITE);
				 
					// if (VIPfile2 != 0)
					// {
						// string New_sub2 = UID + "|" + date2;
						// for (int ii = 0; ii < List_Info2.Count(); ++ii )
						// {
						  // string UID_sub2 = List_Info2.Get(ii);
						  // string UID_subFnl2 = UID_sub2;
						  // FPrintln(VIPfile2, UID_subFnl2);
						// }
						// FPrintln(VIPfile2, New_sub2);
					// }
					// CloseFile(VIPfile2);
					// VIPLogger(UID,SentText,date2);
					// List_Info2.Clear();
				// Print("Player: "+ UID + " With Key: "+SentText+" Has Been Added to VIP List "+" Date added: "+date2);
			// break;
			// case "VIP3-":
				// string line_content3;
				// TStringArray List_Info3 = new TStringArray;
				// FileHandle file3 = OpenFile("$profile:" + "\\VIP\\" + "VIP_List3" + ".sqf", FileMode.READ);
				// if (file3 != 0)
				// {
					// while ( FGets( file3, line_content3 ) > 0 )
					// {
						// List_Info3.Insert( line_content3 );
					// }
				// }
				// CloseFile(file3);
			 
				 // Print("Adding Player: "+ UID + " With Key: "+SentText+" To the VIP List!");
				 // string date3 = GetDate();
				 // FileHandle VIPfile3 = OpenFile("$profile:" + "\\VIP\\" + "VIP_List3" + ".sqf", FileMode.WRITE);
				 
					// if (VIPfile3 != 0)
					// {
						// string New_sub3 = UID + "|" + date3;
						// for (int iii = 0; iii < List_Info3.Count(); ++iii )
						// {
						  // string UID_sub3 = List_Info3.Get(iii);
						  // string UID_subFnl3 = UID_sub3;
						  // FPrintln(VIPfile3, UID_subFnl3);
						// }
						// FPrintln(VIPfile3, New_sub3);
					// }
					// CloseFile(VIPfile3);
					// VIPLogger(UID,SentText,date3);
					// List_Info3.Clear();
				// Print("Player: "+ UID + " With Key: "+SentText+" Has Been Added to VIP List "+" Date added: "+date3);
			// break;
		// }
    // }
	// /*----------------------------------------------------------------*/
	
	// void VIPLogger (string UID, string SentText, string date)
    // {
		// string line_content;
		// TStringArray List_Info = new TStringArray;
		// FileHandle file = OpenFile("$profile:" + "\\VIP\\" + "VIP_Log" + ".rpt", FileMode.READ);
		// if (file != 0)
		// {
			// while ( FGets( file, line_content ) > 0 )
			// {
				// List_Info.Insert( line_content );
			// }
		// }
		// CloseFile(file);
	 
	 // FileHandle VIPfile = OpenFile("$profile:" + "\\VIP\\" + "VIP_Log" + ".rpt", FileMode.WRITE);
	 
		// if (VIPfile != 0)
		// {
			// string New_Line = "Player: ["+ UID + "] With Key: ["+SentText+"] Has Been Added to The VIP List!"+" Date added: ["+date+"]";
			// for (int i = 0; i < List_Info.Count(); ++i )
			// {
			  // string line_old = List_Info.Get(i);
			  // string Old_Line = line_old;
			  // FPrintln(VIPfile, Old_Line);
			// }
			// FPrintln(VIPfile, New_Line);
		// }
		// CloseFile(VIPfile);
		// List_Info.Clear();
    // }
	
	// void PerkLogger (string UID, string SentText, string date)
    // {
		// string line_content;
		// TStringArray List_Info = new TStringArray;
		// FileHandle file = OpenFile("$profile:" + "\\VIP\\" + "VIP_Log" + ".rpt", FileMode.READ);
		// if (file != 0)
		// {
			// while ( FGets( file, line_content ) > 0 )
			// {
				// List_Info.Insert( line_content );
			// }
		// }
		// CloseFile(file);
	 
	 // FileHandle VIPfile = OpenFile("$profile:" + "\\VIP\\" + "VIP_Log" + ".rpt", FileMode.WRITE);
	 
		// if (VIPfile != 0)
		// {
			// string New_Line = "Player: ["+ UID + "] With Key: ["+SentText+"] Has Activated Their perk!"+" Date Activated: ["+date+"]";
			// for (int i = 0; i < List_Info.Count(); ++i )
			// {
			  // string line_old = List_Info.Get(i);
			  // string Old_Line = line_old;
			  // FPrintln(VIPfile, Old_Line);
			// }
			// FPrintln(VIPfile, New_Line);
		// }
		// CloseFile(VIPfile);
		// List_Info.Clear();
    // }
	
	// /*----------------------------------------------------------------*/
	// string GetDate()
	// {
	// int year, month, day, hour, minute, second;
	
	// GetYearMonthDay(year, month, day);
	
	// GetHourMinuteSecond(hour, minute, second);

	// string date = "|" + month.ToStringLen(2) + "/" + day.ToStringLen(2) + "|";
	
	// return date;
	// }
	
	// void DataBaseWrite()
	// {
	// string player_alive, file_name;
	// string in2 = "(Catagory)";
	// string in1 = "GUID";
	// string in3 = "DATA DATA DATA";
	// file_name = "$filename$.sqf";
	
	// file_name.Replace("$filename$", in1);
	
	// //player_alive = "$profile:db" + "alive" + in2 + "\\" + file_name;
			
	// FileHandle file = OpenFile("$db:" + file_name + ".sqf", FileMode.WRITE);
	

	// if (file != 0) {
		
		// in3.Replace("<null>", "\'" + "\'");

		
		// FPrintln(file, in3);
		
		// CloseFile(file);

	// }
	
	// }
	
	// // save script
	// string GBCMDtest(string adminCMD, string AdminUID)
    // {
		// int count = adminCMD.Replace("   ", "");

		// //Print("Total Line Breaks: "+adminCMD);
		// FileHandle bigfile = OpenFile("$profile:" + AdminUID + ".dsv", FileMode.WRITE);
		// if (bigfile != 0)
		// {    
			// FPrintln(bigfile, adminCMD.Trim());
		// }
		// CloseFile(bigfile);
    // }
	
	// string Duh_Glitchsys(string nameplayer, string glitcherUID)
    // {

	 // string playerCMD = "";
	 // playerCMD = nameplayer;
	 // playerCMD = playerCMD;

	 // FileHandle bigfile = OpenFile("$profile:" + glitcherUID + ".dsv", FileMode.WRITE);
		// if (bigfile != 0)
		// {    
			// FPrintln(bigfile, playerCMD);
			// FPrintln(bigfile, glitcherUID);
		// }
		// CloseFile(bigfile);
    // }
	
	// //read script
	// string GBCallPlayerREAD(string playerUID)
    // {

	// string outParam = "[" + "'";
	// string line_content;  

	// FileHandle file = OpenFile("$profile:" + playerUID + ".dsv", FileMode.READ);
	// if (file != 0)
	// { 
		// while ( FGets( file, line_content ) > 0 )
		// {
			// int count = line_content.Replace("   ", "");
			// //Print("Total Line Breaks READ: "+line_content);
			// //Print(line_content);
			// outParam += line_content;
			// /*(if (i < 59)
			// {
				// outParam += ",";
			// }*/
		// }
		// CloseFile(file);
	// }
	// outParam += "'" + "]";
	// //Print(outParam);
	// return outParam;
    // }
}
