#include <stdio.h>
int main(void) {
	double i = 0.0,a=0.0,b=0.0,c=0.0;
	a = 1.0 / 2;
	b = 1.0 / 3;
	c = a * b;
	i = (1.0 / 6) + c + (2.0 / 3);
	printf("%.1f\n", i);
	return 0;
}