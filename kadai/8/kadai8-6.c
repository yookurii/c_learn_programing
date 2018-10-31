#include <stdio.h>
int main(void) {
	double x=0.0, d;
	do {
		printf("À”‚ğ“ü—Í > ");
		scanf("%lf", &d);
		x = x + d;
	} while (x<100.0&&x>=-100.0);
	printf("À”‚Ì‡Œv‚Í %f ‚Å‚·B\n", x);
	return 0;
}