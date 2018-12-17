#include <stdio.h>
#define LAST 3
#define KOTAE1 "‡Œv’l‚Í"
#define KOTAE2 "‚Å‚·B\n"
#define P printf
int main(void) {
	int a,b=0;
	printf("%d‰ñ®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n",LAST);
	for (int i = 1; i <= LAST; i++) {
		P(" > ");
		scanf("%d", &a);
		b += a;
	}
	P("%s%d%s",KOTAE1,b,KOTAE2);
}