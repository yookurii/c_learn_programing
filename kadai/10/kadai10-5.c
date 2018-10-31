#include <stdio.h>
int main(void) {
	double a;
	int b=0,i;
	do {
		printf("実数は？ > ");
		scanf("%lf", &a);
		if (a >= 1.0) {
			b = a;
			for (i = 1; i <= b; i++) {
				printf("*");
			}
			printf("\n");
		}
		else {
			printf("1.0未満の数が入力されたので、終了します。\n");
			break;
		}
	} while (1);
	return 0;
}