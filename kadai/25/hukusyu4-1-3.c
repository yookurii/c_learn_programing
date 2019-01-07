#include <stdio.h>
#include <math.h>
int main(void) {
	double x, y, a;
	printf("x‚Æy‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ > ");
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
	printf("ŒvZŒ‹‰Ê‚Í%f‚Å‚·B\n", a);
	return 0;
}