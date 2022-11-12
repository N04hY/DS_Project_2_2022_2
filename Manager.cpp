#include "Manager.h"

void Manager::run(const char* cmd_txt)
{
	fin.open(cmd_txt);
	if(!fin)
	{
		flog << "File Open Error" << endl;
		return;
	}
	while (!fin.eof())
	{
		getline(fin, cmd);
		if (cmd == "LOAD")
			LOAD();
		else if (cmd == "BTLOAD")
			BTLOAD();
		else if (cmd == "PRINT_ITEMLIST")
			PRINT_ITEMLIST();
		else if (cmd == "PRINT_FPTREE")
			PRINT_FPTREE();
		else if (cmd.find("PRINT_BPTREE") != string::npos)
			PRINT_BPTREE(cmd);
		else if (cmd.find("PRINT_CONFIDENCE") != string::npos)
			PRINT_CONFIDENCE(cmd);
		else if (cmd.find("PRINT_RANGE") != string::npos)
			PRINT_RANGE(cmd);
		else if (cmd == "EXIT")
			~Manager();
			// acording to cmd, execute cmd
		/* You must fill here */
	}
	
	fin.close();
	return;
}

bool Manager::LOAD()
{
	return true;
}
// read "market.txt"
// error when textfile don't exist, data already exist "ERROR 100" / Success
// only lower alphabet, '\t' to separate each item, '\n' to separate each itemset



bool Manager::BTLOAD()
{
	
	return true;
}

bool Manager::PRINT_ITEMLIST() {
	
}

bool Manager::PRINT_FPTREE() {
	
}

bool Manager::PRINT_BPTREE(char* item, int min_frequency) {
	
}

bool Manager::PRINT_CONFIDENCE(char* item, double rate) {
	
}

bool Manager::PRINT_RANGE(char* item, int start, int end) {
	
}

void Manager::printErrorCode(int n) {				//ERROR CODE PRINT
	flog << ERROR " << n << " << endl;
	flog << "=======================" << endl << endl;
}

void Manager::printSuccessCode() {//SUCCESS CODE PRINT 
	flog << "Success" << endl;
	flog << "=======================" << endl << endl;
}

