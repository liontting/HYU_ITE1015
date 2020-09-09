#include <iostream>
#include <stdlib.h>
#include <string>
#include "minimal_fighter.h"
using namespace std;

int main() {
	int hp1, power1, hp2, power2;
	char order;
	string temp;
	while(1) {
		cin >> temp;
		if(atoi(temp.c_str()) != 0 || temp == "0") {
			hp1 = atoi(temp.c_str());
			cin >> power1 >> order >> hp2 >> power2;
			MinimalFighter p1(hp1, power1);
			MinimalFighter p2(hp2, power2);
			if (order == 'H'){
				p1.hit(&p2);
				p2.hit(&p1);
				if(p1.status() != Dead)
					cout << "H" << p1.hp() << ", P" << p1.power() << " / ";
				else
					cout << "DEAD / ";
				if(p2.status() != Dead)
					cout << "H" << p2.hp() << ", P" << p2.power() << "\n";
				else
					cout << "DEAD\n";
			}
			else if (order == 'A') {
				p1.attack(&p2);
				if(p1.status() != Dead)
					cout << "H" << p1.hp() << ", P" << p1.power() << " / ";
				else
					cout << "DEAD / ";
				if(p2.status() != Dead)
					cout << "H" << p2.hp() << ", P" << p2.power() << "\n";
				else
					cout << "DEAD\n";
			}
			else if (order == 'F') {
				p1.fight(&p2);
				if(p1.status() != Dead)
					cout << "H" << p1.hp() << ", P" << p1.power() << " / ";
				else
					cout << "DEAD / ";
				if(p2.status() != Dead)
					cout << "H" << p2.hp() << ", P" << p2.power() << "\n";
				else
					cout << "DEAD\n";
			}
			else
				break;
		}
		else
			break;
	}
	return 0;
}
