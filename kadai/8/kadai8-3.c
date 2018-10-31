#include <stdio.h>
int main(void) {
	int i, x = 0;
	for (i = 123; i <= 456; i++) {
		if (i % 3 == 0) {
			x = x + i;
		}
		else {
		}
	}
	printf("123‚©‚ç456‚Ü‚Å‚Ì®”‚Ì‚¤‚¿A3‚Ì”{”‚Ì˜a‚Í%d‚Å‚·B\n", x);
	return 0;
}