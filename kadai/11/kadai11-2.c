#include <stdio.h>
int main(void) {
	double a, b, c, d, x = 0.0, n = 0.0, z = 0.0;

	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	scanf("%lf", &d);

	n = (a + b)*(c - d);
	z = (c - b - a)*(a - b)*c*d;
	x = n / z;

	printf("åvéZåãâ ÇÕ %f Ç≈Ç∑ÅB\n", x);
	return 0;
}