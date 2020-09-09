#include <iostream>
#include <string>
#include <vector>
#include "draw_shape.h"
using namespace std;

int main() {
	vector<Shape*> shapes;
	int row, col;
	cin >> row >> col;
	Canvas canvas(row, col);
	canvas.Print();
	while (true) {
		string tok;
		cin >> tok;
		if (tok == "add") {
			string type;
			cin >> type;
			if(type == "rect") {
				int x, y, h, w;
				char b;
				cin >> x >> y >> h >> w >> b;
				Rectangle* r = new Rectangle(x, y, h, w, b);
				shapes.push_back(r);
			}
			else if(type == "tri_up") {
				int x, y, h;
				char b;
				cin >> x >> y >> h >> b;
				UpTriangle* u = new UpTriangle(x, y, h, b);
				shapes.push_back(u);
			}
			else if(type == "tri_down") {
				int x, y, h;
				char b;
				cin >> x >> y >> h >> b;
				DownTriangle* d = new DownTriangle(x, y, h, b);
				shapes.push_back(d);
			}
			else if(type == "diamond") {
				int x, y, h;
				char b;
				cin >> x >> y >> h >> b;
				Diamond* dd = new Diamond(x, y, h, b);
				shapes.push_back(dd);
			}
			else
				continue;
		}
		else if (tok == "draw") {
			canvas.Clear();
			for (int i = 0; i < shapes.size(); ++i)
				shapes[i]->Draw(&canvas);
			canvas.Print();
		}
		else if (tok == "delete") {
			int n;
			cin >> n;
			if(n < shapes.size()) {
				vector<Shape*>::iterator it = shapes.begin();
				while(n--)
					it++;
				shapes.erase(it);
			}
		}
		else if (tok == "dump") {
			vector<Shape*>::iterator it;
			int num = 0;
			for(it = shapes.begin(); it != shapes.end(); it++) {
				cout << num << " ";
				(*it)->Dump();
				num++;
			}
		}
		else if (tok == "resize") {
			int row, col;
			cin >> row >> col;
			canvas.Resize(row,col);
		}
		else
			break;
	}
	for (int i = 0; i < shapes.size(); ++i)
		delete shapes[i];
	shapes.clear();
	return 0;
}
