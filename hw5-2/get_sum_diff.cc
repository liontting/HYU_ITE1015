#include <stdio.h>

void getSumDiff(int a, int b, int& sum, int& diff) {
	sum = a + b;
	diff = a - b;
}

int main() {
	int a, b, sum, diff;
	scanf("%d %d", &a, &b);
	getSumDiff(a, b, sum, diff);
	printf("Sum:%d\n", sum);
	printf("diff:%d\n", diff);
	return 0;
}
