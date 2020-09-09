#include <stdio.h>

int main() {
	char alpha[10] = { 0, };
	scanf("%s", alpha);
	for(int i = 0; i < sizeof(alpha)/sizeof(char); i++) {
		if(alpha[i] < 90)
			alpha[i] += 32;
		else
			alpha[i] -= 32;
		printf("%c", alpha[i]);
	}
	printf("\n");
	return 0;
}
