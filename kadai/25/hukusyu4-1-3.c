#include <stdio.h>
#include <math.h>
int main(void) {
	double x, y, a;
	printf("x��y����͂��Ă������� > ");
	scanf("%lf%lf", &x, &y);
	if (x > 0 && y > 0) {
		a = pow(x, y);
	}
	else if (x > 0 && y < 0) {
		a = log(x) + exp(y);
	}
	else if (x < 0 && y>0) {
		a = x + sqrt(y);
	}
	else {
		a = sin(x) - cos(y);
	}
	printf("�v�Z���ʂ�%f�ł��B\n", a);
	return 0;
}