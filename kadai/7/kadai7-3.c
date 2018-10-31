#include <stdio.h>
int main(void) {
	int n = 1, i = 0;
	while (n <= 100) {
		i = i + n;
		n++;	
	}
	printf("1‚©‚ç100‚Ì®”‚Ì˜a‚Í %d ‚Å‚·B\n", i);
	return 0;
}