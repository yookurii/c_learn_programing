#include <stdio.h>
#define LAST 3
#define P printf
int main(void) {
	int a,b=0;
	printf("%d‰ñ®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n",LAST);
	for (int i = 1; i <= LAST; i++) {
		P(" > ");
		scanf("%d", &a);
		b += a;
	}
	P("‡Œv’l‚Í %d ‚Å‚·B\n",b);
}