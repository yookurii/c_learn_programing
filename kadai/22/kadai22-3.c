#include <stdio.h>
#include <math.h>
#define LAST 10
#define rand1 rand()%10
#define rand2 srand(a)
#define P printf
#define S scanf
int main(void) {
	int a,b=1,c;
	P("—”‚ÌŽí‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ > ");
	S("%d", &a);
	rand2;
	for (int i = 1; i <= LAST; i++) {
		b *= rand1;
	}
	P("—”‚ð%d‰ñ‚©‚¯‚½’l‚Í%d‚Å‚·B\n", LAST, b);
	return 0;
}
