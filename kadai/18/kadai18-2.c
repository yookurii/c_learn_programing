#include <stdio.h>
#include <math.h>
int main(void) {
	double a, b, c = 0.0, c2 = 0.0;
	printf("À”a,b‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ „ ");
	scanf("%lf%lf", &a, &b);
	c = sin(a+b);
	c2 = sin(a)*cos(b) + cos(a)*sin(b);
	printf("sin(a+b)‚Í%f‚Å‚·B\n", c);
	printf("sin(a)*cos(b) + cos(a)*sin(b)‚Í%f‚Å‚·B\n", c2);
	return 0;
}
