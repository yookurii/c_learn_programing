#include <stdio.h>
int main(void) {
	int a, b, i=0, x=0;
	printf("a‚Æb‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ „ ");
	scanf("%d%d", &a, &b);
	if (a < b) {
		for (i = a; i <= b; i++) {
			x = x + i;
		}
	}
	else if (a > b) {
		for (i = a; i >= b; i--) {
			x = x + i;
		}
	}
	else if(a==b){
		x = a;
	}
	printf("%d‚©‚ç%d‚Ü‚Å‚Ì®”‚Ì˜a‚Í%d‚Å‚·B\n", a, b, x);
	return 0;
}