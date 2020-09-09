#include <stdio.h>

void square(double* var) {
	*var = *var * *var;
}

int main() {
	double dvar;
	scanf("%lf", &dvar);
	square(&dvar);
	printf("%lf", dvar);
	return 0;
}
