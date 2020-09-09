#include <iostream>

typedef struct {
	int xpos;
	int ypos;
}Point;

Point getScale2xPoint(const Point* p) {
	Point pp;
	pp.xpos = 2 * p->xpos;
	pp.ypos = 2 * p->ypos;
	return pp;
}

void swapPoint(Point& p1, Point& p2) {
	Point temp = p1;
	p1 = p2;
	p2 = temp;
}

int main() {
	Point p1, p2;
	std::cin >> p1.xpos >> p1.ypos;
	p2 = getScale2xPoint(&p1);
	std::cout << "Calling getScale2xPoint()\np1 : " << p1.xpos << " " << p1.ypos << "\np2 : " << p2.xpos << " " << p2.ypos << "\n";
	swapPoint(p1, p2);
	std::cout << "Calling swapPoint()\np1 : " << p1.xpos << " " << p1.ypos << "\np2 : " << p2.xpos << " " << p2.ypos << "\n";
	return 0;
}
