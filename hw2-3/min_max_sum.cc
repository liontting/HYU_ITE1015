#include <stdio.h>

int main() {
	int num[5], max, min, sum = 0;
	for(int i = 0; i < 5; i++){
		scanf("%d", &num[i]);
		sum += num[i];
	}
	for(int i = 0; i < 5; i++) {
		for(int j = i; j < 5; j++) {
			if(num[j]<num[i]) {
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	printf("min: %d\nmax: %d\nsum: %d\n", num[0], num[4], sum);
	return 0;
}
