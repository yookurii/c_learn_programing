#include <stdio.h>
#include <math.h>
#define PI 3.141592
#define PI2 (a*a)*PI;
#define P printf
#define S scanf
int main(void) {
	int a;
	double d=0.0;
	while (1) {
		P("���a����͂��Ă������� > ");
		S("%d", &a);
		if (a != 0) {
			d = PI2;
			printf("���a��%f\n", d);
		}
		else {
			break;
		}
	}
	return 0;
}
