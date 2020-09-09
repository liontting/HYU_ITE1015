#pragma once

class Account {
	public:
		int balance = 0;
		int id;		
};

class Manager {
	public:
		Account account[10];
		int num = -1;
		void ib(int id, int bal);
		void chul(int id, int bal);
		void yee(int idf, int ids, int bal);
		int hoack(int id);
};
