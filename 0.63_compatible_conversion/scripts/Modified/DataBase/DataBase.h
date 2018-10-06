class DataBase
{	
	static const string BASE_DIR = "$profile:db";
	
	static const string ALIVE_DIR = "\\alive\\";
	
	static const string DEAD_DIR =  "\\dead\\";
	
	static string GetDate();
	
	static void CreateDir();
};

static string DataBaseRead(string in1,string in2);

static void ObjSPAWNER( float SQF_Random, float SQF_RandomGUNS );

static string VIPConvertList();

static string VIPCooldownArr();

static void CLArrayUpdate(string UID, float SentText);

static void UpdateVIPCLList( string UID, float ToRemove );

static void WallFill();

static void DataBaseWrite(string in1,string in2,string in3);

static void DataBaseDelete(string in1,string in2);
