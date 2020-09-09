#include <stdio.h>

void getSumDiff(int a, int b, int* pSum, int* pDiff) {
	*pSum = a + b;
	*pDiff = a - b;
}

int main() {
	int a, b;
	int Sum, Diff;
	scanf("%d %d", &a, &b);
	getSumDiff(a,b,&Sum,&Diff);
	printf("Sum:%d\ndiff:%d\n", Sum, Diff);
	return 0;
}
