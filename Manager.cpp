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
		else if (cmd.find("PRINT_BPTREE") != string::npos) {
			option.clear();
			stringstream ss(cmd);
			while (getline(ss, cmd, ' ')) {
				option.push_back(cmd);
			}
			PRINT_BPTREE(option[1], stoi(option[2]));
		}
		else if (cmd.find("PRINT_CONFIDENCE") != string::npos) {
			option.clear();
			stringstream ss2(cmd);
			while (getline(ss2, cmd, ' ')) {
				option.push_back(cmd);
			}
			PRINT_CONFIDENCE(option[1], stof(option[2]));
		}
		else if (cmd.find("PRINT_RANGE") != string::npos) {
			option.clear();
			stringstream ss3(cmd);
			while (getline(ss3, cmd, ' ')) {
				option.push_back(cmd);
			}
			PRINT_RANGE(option[1], stoi(option[2]), stoi(option[3]));
		}
	//	else if (cmd == "EXIT")
	//		~Manager();
			// acording to cmd, execute cmd
		/* You must fill here */
	}
	
	fin.close();
	return;
}

bool Manager::LOAD()
{
	cout << "LOAD\n";
	return true;
}
// read "market.txt" -> fp-growth
// error when textfile don't exist, data already exist "ERROR 100" / Success
// only lower alphabet, '\t' to separate each item, '\n' to separate each itemset



bool Manager::BTLOAD()
{
	cout << "BTLOAD\n";

	return true;
}

bool Manager::PRINT_ITEMLIST() {
	cout << "PRINT_ITEMLIST\n";
}

bool Manager::PRINT_FPTREE() {
	cout << "PRINT_FPTREE\n";
}

bool Manager::PRINT_BPTREE(string item, int min_frequency) {
	
	cout << "PRINT_BPTREE " << item << " " << min_frequency << endl;
}

bool Manager::PRINT_CONFIDENCE(string item, double rate) {
	
	cout << "PRINT_CONFIDENCE " << item << " " << rate << endl;
}

bool Manager::PRINT_RANGE(string item, int start, int end) {
	
	cout << "PRINT_RANGE " << start << " " << end << endl;
}

void Manager::printErrorCode(int n) {				//ERROR CODE PRINT
	flog << "ERROR " << n << endl;
	flog << "=======================\n\n";
}

void Manager::printSuccessCode() {//SUCCESS CODE PRINT 
	flog << "Success\n";
	flog << "=======================\n\n";
}

