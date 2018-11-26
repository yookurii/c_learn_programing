#include <stdio.h>
int main(void) {
	int x[10][10];
	int d, a, b;
	for (int n = 0; n < 10; n++) {
		for (int m = 0; m < 10; m++) {
			x[n][m] = 0;
		}
	}
	do {
		printf("®” > ");
		scanf("%d", &d);
		if (d >= 0 && d <= 99) {
			a = (d / 10) % 10;
			b = d % 10;
			x[a][b] = 1;
		}
		else {
			break;
		}
	} while (d >= 0 || d <= 99);

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
	return 0;
}