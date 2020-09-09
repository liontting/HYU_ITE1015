#include <iostream>
#include <stdlib.h>

struct Person {
	char name[10];
	int age;
};

int main() {
	struct Person *A[3];
	for(int i=0; i<3; i++) {
		A[i] = (struct Person*)malloc(sizeof(struct Person));
	}
	for(int i=0; i<3; i++) {
		std::cin >> A[i]->name;
		std::cin >> A[i]->age;
	}
	for(int i=0; i<3; i++) {
		std::cout << "Name:" << A[i]->name << ", Age:" << A[i]->age << "\n";
}
	return 0;
}
