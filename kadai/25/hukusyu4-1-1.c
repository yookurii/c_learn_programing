#include <stdio.h>
#include <math.h>
int main(void) {
	double x, y, a;
	printf("x‚Æy‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ > ");
	scanf("%lf%lf", &x, &y);
	a = sqrt(pow(sin(x), 2) + pow(cos(y), 2)) + pow(x, y)*exp(x)*log(y);
	printf("ŒvZŒ‹‰Ê‚Í%f‚Å‚·B\n", a);
	return 0;
}