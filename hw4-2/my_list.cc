#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;

string* split(const string& str, const string& delim) {
	string* string_list = new string[10];
	int idx = 0;
	char* token = strtok(const_cast<char*>(str.c_str()), delim.c_str());
	while (token != NULL) {
		string_list[idx] = token;
		token = strtok(NULL, delim.c_str());
		++idx;
	}
	return string_list;
}

struct Item {
	string name;
	string age;
	string id;
	string* subject = new string[10];
	struct Item *next = NULL;
};

struct Item* create_item() {
	struct Item* list = new struct Item;
	return list;
}

void insert_item(struct Item *prev_item, struct Item *item) {
	prev_item->next = item;
}

int main() {
	ifstream fin;
	fin.open("input.txt");
	string s;
	struct Item *item = create_item();
	struct Item *imsi = item;
	string* list = new string[10];
	fin >> s;
	list = split(s, ":");
	item->name = list[0];
	item->age = list[1];
	item->id = list[2];
	item->subject = split(list[3], ",");
	delete[] list;
	while (!fin.eof()) {
		string* list = new string[10];
		fin >> s;
		list = split(s, ":");
		insert_item(item, create_item());
		item = item->next;
		item->name = list[0];
		item->age = list[1];
		item->id = list[2];
		item->subject = split(list[3], ",");
		delete[] list;
	}
	while (imsi) {
		if (imsi->id.substr(0, 4) == "2013") {
			cout << imsi->name << "(" << imsi->id << ") : ";
			int i;
			cout << imsi->subject[0];
			for (i = 1; imsi->subject[i] != ""; i++)
				cout << " & " << imsi->subject[i];
			cout << "\n";
		}
		imsi = imsi->next;
	}
	fin.close();
	return 0;
}
