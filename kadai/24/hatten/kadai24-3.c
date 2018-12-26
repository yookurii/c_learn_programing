#include <stdio.h>
int main(void) {
	int a,ri,n,b=0;
	int temp[20];
	srand(1);
	for (int j = 0; j <= 19; j++) {
		for (int i = 0; i <= 20000; i++) {
			n = rand();
			ri = n % 20;
			if (ri == j) {
				b += 1;
			}
			else {
			}
		}
		temp[j] = b;
		b = 0;
	}
	for (int i = 0; i <= 19; i++) {
		printf("%d : %d‰ñ\n", i, temp[i]);
	}
	return 0;
}