#include <iostream>

typedef struct {
	double x;
	double y;
} Point;

typedef struct {
	char name[7];
	Point points[3];
} Person;

int main() {
	Person p1, p2, p3;
	std::cin >> p1.name;
	for(int i = 0; i < 3; i++)
		std::cin >> p1.points[i].x >> p1.points[i].y; 
	std::cin >> p2.name;
	for(int i = 0; i < 3; i++) 
		std::cin >> p2.points[i].x >> p2.points[i].y;
	std::cin >> p3.name;
	for(int i = 0; i < 3; i++) 
		std::cin >> p3.points[i].x >> p3.points[i].y;
	int max = 0, dap, bigyo;
	for(int i = 0; i < 3; i++) {
		bigyo = p1.points[i].x * p1.points[i].x + p1.points[i].y * p1.points[i].y;
		if (max < bigyo) {
			max = bigyo;
			dap = i;
		}
	}
	std::cout << p1.name << " (" << p1.points[dap].x << ", " << p1.points[dap].y << ")\n";
	max = 0;
	for(int i = 0; i < 3; i++) {
		bigyo = p2.points[i].x * p2.points[i].x + p2.points[i].y * p2.points[i].y;
		if (max < bigyo) {
			max = bigyo;
			dap = i;
		}
	}
	std::cout << p2.name << " (" << p2.points[dap].x << ", " << p2.points[dap].y << ")\n";
	max = 0;
	for(int i = 0; i < 3; i++) {
		bigyo = p3.points[i].x * p3.points[i].x + p3.points[i].y * p3.points[i].y;
		if (max < bigyo) {
			max = bigyo;
			dap = i;
		}
	}
	std::cout << p3.name << " (" << p3.points[dap].x << ", " << p3.points[dap].y << ")\n";
	return 0;
}
