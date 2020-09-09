#include <iostream>

typedef struct {
	char name[7];
	int score;
}Person;

void printScoreStars(Person* persons, int len){
	int le = len / 5;
	std::cout << persons->name << " ";
	for(int i = 0; i < le; i++)
		std::cout << "*";
	std::cout << "\n";
}

int main() {
	Person p[3];
	for(int i = 0; i < 3; i++) {
		std::cin >> p[i].name;
		std::cin >> p[i].score;
	}
	for(int i = 0; i < 3; i++)
		printScoreStars(&p[i], p[i].score);
	return 0;
}
