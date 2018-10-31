#include <stdio.h>
int main(void) {
	double n = 0.1,i=0.0;
	while (n <= 1.0) {
		printf("%f\n", n);
		n = n + 0.1;
	}
	return 0;
}