#include <iostream>

struct Person {
	char name[10];
	int age;
};

int main() {
	Person A;
	std::cin >> A.name;
	std::cin >> A.age;
	std::cout << "name: " << A.name << "\n";
	std::cout << "age: " << A.age << "\n";
	return 0;
}	
