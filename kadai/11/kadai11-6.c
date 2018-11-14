#include <stdio.h>
int main(void) {
	int x,d;
	double n = 0.0;
	printf("®” > ");
	scanf("%d", &x);
	if (x >= 5 && x < 15) {
		d = x * x;
		printf("%d\n", d);
	}
	else {
		n = 1.0 / x;
		printf("%f\n", n);
	}
	
	return 0;
}