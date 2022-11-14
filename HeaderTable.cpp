#include "HeaderTable.h"

HeaderTable::~HeaderTable() {}

void HeaderTable::insertTable(string item, int frequency) {
	list<pair<int,string>>::iterator it;
	it = find_if(indexTable.begin(), indexTable.end(),
	 [&item](const pair<int, string>& idx){ return idx.second == item; }); //find item

	if (it != indexTable.end()) { // find(item is already exist)
		it->first++;
	}
	else { // new item
		pair<int, string> index(frequency, item);
		indexTable.push_back(index);
	}
}


int HeaderTable::find_frequency(string item){
	int frequency = 0;
	return frequency;
}
