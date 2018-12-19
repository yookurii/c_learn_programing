#include <stdio.h>
int main(void) {
	char a, b, t;

	printf("a ‚Æ b ‚Ì’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ > ");

	scanf("%c", &a);
	scanf("%c", &b);

	printf("ŒðŠ·‘O\n");
	printf("a = %c, b = %c\n", a, b);

	t = a;
	a = b;
	b = t;

	printf("ŒðŠ·Œã\n");
	printf("a = %c, b = %c\n", a, b);

	return 0;
}