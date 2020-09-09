#pragma once
#include <iostream>
#include <string>
#define NUM_OF_CHAT 200

class ReplyAdmin {
	private:
		std::string* chats;
	public:
		ReplyAdmin();
		~ReplyAdmin();
		int getChatCount();
		bool addChat(std::string _chat);
		bool removeChat(int _index);
		bool removeChat(int _start, int _end);
		void yeol();
};
