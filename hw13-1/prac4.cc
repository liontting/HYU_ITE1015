#include <iostream>
using namespace std;

class A {
public:
	A() {
		cout << "constructed\n";
	}
	A(A const& a) {
		cout << "copied\n";
	}
	~A() {
		cout << "destructed\n";
	}
};

int main() {
	try {
		try {
			A a;
			throw a;
		}
		catch(A &a) {
			#if 1
				cout << "rethrow" << endl;
				throw;
			#else
				cout << "throw twice" << endl;
				throw a;
			#endif
		}
	}
	catch(A &a) {
		cout << "exception handled" << endl;
	}
	return 0;
}
