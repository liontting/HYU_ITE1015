#include <iostream>
#include <string>

int add(int a, int b) {
	return a + b;
}

std::string add(std::string a, std::string b) {
	return a + "-" + b;
}

int main() {
	int a, b;
	std::string c, d;
	std::cin >> a >> b >> c >> d;
	std::cout << add(a, b) << std::endl;
	std::cout << add(c, d) << std::endl;
	return 0;
}	
