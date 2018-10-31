#include <stdio.h>
#include <math.h>
int main(void) {
	double a, b, c = 0.0, d = 1.0, x;
	do {
		x = d - 1.0;
		a = pow(2.0,x);
		b = 1.0 / a;
		c = c + b;
		d = d + 1.0;
	} while (d <= 2000.0);
	printf("‹‚ß‚é–³ŒÀ‹‰”‚Ì˜a‚ÍA%.30f‚Å‚·B\n", c);
	return 0;
}