#include <iostream>
#include <stdlib.h>
#include "magic_square.h"
using namespace std;

int main(int argc, char **argv) {
	int n = atoi(argv[1]);
	if (n < 3 || n % 2 == 0)
		return 0;
	int** mabang = new int*[n];
	for(int i = 0; i < n; i++)
		mabang[i] = new int[n];
	magic(mabang, n);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++)
			cout << mabang[i][j] << " ";
		cout << "\n";
	}
	return 0;
}
