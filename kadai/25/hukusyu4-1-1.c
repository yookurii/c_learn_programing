#include <stdio.h>
#include <math.h>
int main(void) {
	double x, y, a;
	printf("x��y����͂��Ă������� > ");
	scanf("%lf%lf", &x, &y);
	a = sqrt(pow(sin(x), 2) + pow(cos(y), 2)) + pow(x, y)*exp(x)*log(y);
	printf("�v�Z���ʂ�%f�ł��B\n", a);
	return 0;
}