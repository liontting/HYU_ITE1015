#include <stdio.h>

typedef struct {
	double sil;
	double heo;
} Complex;

void printComplex(Complex one) {
	printf("%.6lf + %.6lfi\n", one.sil, one.heo);
}

void printAddComp(Complex one, Complex two) {
	Complex dap;
	dap.sil = one.sil + two.sil;
	dap.heo = one.heo + two.heo;
	printf("Sum of two complex numbers:\n");
	printComplex(dap);
}

void printMulCom(Complex one, Complex two) {
	Complex dap;
	dap.sil = one.sil * two.sil - one.heo * two.heo;
	dap.heo = one.sil * two.heo + one.heo * two.sil;
	printf("Product of two complex numbers:\n");
	printComplex(dap);
}

int main() {
	Complex c[2];
	for(int i = 0; i < 2; i++)
		scanf("%lf %lf", &c[i].sil, &c[i].heo);
	printf("Complex number1:\n");
	printComplex(c[0]);
	printf("Complex number2:\n");
	printComplex(c[1]);
	printAddComp(c[0], c[1]);
	printMulCom(c[0], c[1]);
	return 0;
}
