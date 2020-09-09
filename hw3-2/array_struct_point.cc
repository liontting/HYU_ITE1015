#include <iostream>

typedef struct {
	int xpos;
	int ypos;
} Point;

void scale2x(Point* pp) {
	pp->xpos *= 2;
	pp->ypos *= 2;
}

int main() {
	Point p[3];
	for(int i = 0; i < 3; i++)
		std::cin >> p[i].xpos >> p[i].ypos;
	for(int i = 0; i < 3; i++) {
		scale2x(&p[i]);
		std::cout << "[" << i << "] " << p[i].xpos << " " << p[i].ypos << "\n";
	}
	return 0;
}

