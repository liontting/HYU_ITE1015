#include <iostream>
#include "magic_square.h"

void magic(int** arr, int n) {
	int i = 0, j = n / 2, num = 1;
	arr[i][j] = num;
	while (num < n * n) {
		if (num % n == 0) {
			i++;
			arr[i][j] = ++num;
		}
		else {
			if (i == 0)
				i = n - 1, j++;
			else if (j == n - 1)
				i--, j = 0;
			else
				i--, j++;
			arr[i][j] = ++num;
		}
	}
}
