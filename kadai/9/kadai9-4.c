#include <stdio.h>
int main(void) {
	int i, x, a, b, c, d;
	printf("サイズは？ > ");
	scanf("%d", &i);
	for (x = i; x >= 1; x--) {
		if (x < i) {
			b = i - x;
			for (a = 0; a < b; a++) {
				printf(" ");
			}
		}
		for (a = 1; a <= x; a++) {
				printf("*");
			}
		printf("\n");
	}
	return 0;
}