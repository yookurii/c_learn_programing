#include <stdio.h>
#include <math.h>
int main(void) {
	double a, b, c = 0.0, c2 = 0.0;
	printf("����a,b����͂��Ă������� �� ");
	scanf("%lf%lf", &a, &b);
	c = sin(a+b);
	c2 = sin(a)*cos(b) + cos(a)*sin(b);
	printf("sin(a+b)��%f�ł��B\n", c);
	printf("sin(a)*cos(b) + cos(a)*sin(b)��%f�ł��B\n", c2);
	return 0;
}
