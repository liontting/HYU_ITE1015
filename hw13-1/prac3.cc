#include <iostream>
#include <string>
using namespace std;

class A {

};

class B : public A {

};

class C : public B {

};

int main() {
	int n;
	cout << "input num(0~2):";
	cin >> n;

	try {
		if(n==0)
			throw new A;
		else if(n==1)
			throw new B;
		else if(n==2)
			throw new C;
		else
			throw string("invalid input");
	}
	catch(string s) {
		cout << s << endl;
	}
	catch(C* c) {
		cout << "throw new C has been called\n";
		delete c;
	}
	catch(B* b) {
		cout << "throw new B has been called\n";
		delete b;
	}
	catch(A* a) {
		cout << "throw new A has been called\n";
		delete a;
	}
	return 0;
}
