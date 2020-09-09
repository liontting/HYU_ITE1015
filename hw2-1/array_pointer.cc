#include <stdio.h>

int main() {
	double num[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double * parr = num;
	for(int i = 0; i < 5; i++) {
		*(parr + i) = 2 * *(parr + i);
		printf("%0.6lf\n", *(parr + i));
	}
	return 0;
}

