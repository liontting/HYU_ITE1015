#include <iostream>
#include <string>

typedef struct {
	std::string name;
	int age;
} Person;

int main() {
	int n;
	std::cin >> n;
	Person* p = new Person[n];
	for(int i = 0; i < n; i++)
		std::cin >> p[i].name >> p[i].age;
	for(int i = 0; i < n; i++)
		std::cout << "Name:" << p[i].name << ", Age:" << p[i].age << std::endl;
	delete[] p;
	return 0;
}
