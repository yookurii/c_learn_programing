#include <stdio.h>
#include <math.h>
int main(void) {
	double x, y, a;
	printf("xとyを入力してください > ");
	scanf("%lf%lf", &x, &y);
	a = sqrt(pow(sin(x), 2) + pow(cos(y), 2)) + pow(x, y)*exp(x)*log(y);
	printf("計算結果は%fです。\n", a);
	return 0;
}