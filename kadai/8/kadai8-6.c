#include <stdio.h>
int main(void) {
	double x=0.0, d;
	do {
		printf("実数を入力 > ");
		scanf("%lf", &d);
		x = x + d;
	} while (x<100.0&&x>=-100.0);
	printf("実数の合計は %f です。\n", x);
	return 0;
}