#include "reply_admin.h"
#include <iostream>
#include <string>
using namespace std;

ReplyAdmin::ReplyAdmin() {
	chats = new string[NUM_OF_CHAT];
}

ReplyAdmin::~ReplyAdmin() {
	delete[] chats;
}

int ReplyAdmin::getChatCount() {
	int num;
	for (int i = 0; i < NUM_OF_CHAT; i++) {
		if (chats[i] == "") {
			num = i;
			break;
		}
	}
	return num;
}

bool ReplyAdmin::addChat(string _chat) {
	if (ReplyAdmin::getChatCount() < 200) {
		chats[ReplyAdmin::getChatCount()] = _chat;
		return true;
	}
	else
		return false;
}

bool ReplyAdmin::removeChat(int _index) {
	if(ReplyAdmin::getChatCount() > _index && _index >= 0) {
		for(int i = _index; i <= ReplyAdmin::getChatCount(); i++)
			chats[i] = chats[i + 1];
		return true;
	}
	else
		return false;
}

bool ReplyAdmin::removeChat(int _start, int _end) {
	if (ReplyAdmin::getChatCount() < _start && _end < 0)
		return false;
	else {
		if (_start < 0)
			_start = 0;
		else if (_end > ReplyAdmin::getChatCount())
			_end = ReplyAdmin::getChatCount();
		int n = _end - _start + 1;
		for (int i = _start; i <= 199 - n; i++)
			chats[i] = chats[i + n];
		return true;
	}
}

void ReplyAdmin::yeol() {
	for(int i = 0; i < ReplyAdmin::getChatCount(); i++)
		cout << i << " " << chats[i] << "\n";
}
