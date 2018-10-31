#include <stdio.h>
int main(void) {
	int n = 0, i =700;
	while (i <= 1400) {
		n = n + i;
		i = i + 7;
		
	}
	printf("700‚©‚ç1400‚Ü‚Å‚Ì®”‚Ì‚¤‚¿A7‚Ì”{”‚Ì˜a‚Í %d ‚Å‚·B\n", n);
	return 0;
}