#include <stdio.h>
#include <math.h>
int main(void) {
	double a, b, a2 = 0.0, b2 = 0.0, c=0.0,c2 = 0.0;
	printf("’ê•ÓA‚‚³‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%lf%lf", &a, &b);
	a2 = pow(a, 2.0);
	b2 = pow(b, 2.0);
	c2 = a2 + b2;
	c = sqrt(c2);
	printf("Î•ÓF%f\n", c);
	return 0;
}
