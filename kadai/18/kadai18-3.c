#include <stdio.h>
#include <math.h>
int main(void) {
	double b=0.0, c = 0.0;
	while (b <= 1.00) {
		c = pow(2, b);
		printf("%f\n",c);
		b = b + 0.1;
	}
	return 0;
}
