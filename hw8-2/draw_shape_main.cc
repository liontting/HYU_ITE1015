#include <iostream>
#include "draw_shape.h"
#include <string>
using namespace std;

int main() {
	int c_wid, c_hei;
	cin >> c_wid >> c_hei;
	while(1) {
		int x, y;
		char brush;
		string s;
		cin >> s;
		if(s == "rect") {
			int hei, wid;
			cin >> x >> y >> hei >> wid >> brush;
			Rectangle r(x, y, hei, wid, brush);
			r.Draw(c_wid, c_hei);
			cout << "Area: " << r.GetArea() << "\n";
			cout << "Perimeter: " << r.GetPerimeter() << "\n";
			r.Drawthat();
		}
		else if(s == "square") {
			int wid;
			cin >> x >> y >> wid >> brush;
			Square s(x, y, wid, brush);
			s.Draw(c_wid, c_hei);
			cout << "Area: " << s.GetArea() << "\n";
			cout << "Perimeter: " << s.GetPerimeter() << "\n";
			s.Drawthat();
		}
		else if(s == "diamond") {
			int dis;
			cin >> x >> y >> dis >> brush;
			Diamond d(x, y, dis, brush);
			d.Draw(c_wid, c_hei);
			cout << "Area: " << d.GetArea() << "\n";
			cout << "Perimeter: " << d.GetPerimeter() << "\n";
			d.Drawthat();
		}
		else
			break;
	}
	return 0;
}
