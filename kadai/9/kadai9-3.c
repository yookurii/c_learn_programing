#include <stdio.h>
int main(void) {
	int a = 0, i, x;
	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ > ");
	scanf("%d", &i);

	while (1) {
		for (x = i; x >= 1; x--) {
			a = a + x;
			if (a >= 100) {
				
				break;
			}
			else {
				continue;
			}
		}
		break;
	}
	printf("%d‚©‚ç1‚Ü‚Å‚Ì®”‚Ì˜a‚Í%d‚Å‚·B\n", i, a);
	
	return 0;
}