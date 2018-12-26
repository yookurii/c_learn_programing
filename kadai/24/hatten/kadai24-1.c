#include <stdio.h>
int main(void) {
	int a,b=0,c;
	for (int i = 1; i <= 5; i++) {
		printf("’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(%d‰ñ–Ú) : ",i);
		scanf("%d", &a);
		if (a >= b) {
			b = a;
			c = i;
		}
		else {
		}
	}
	printf("Å‘å’l‚Í%d‰ñ–Ú‚Ì%d‚Å‚·B\n", c, b);
	return 0;
}