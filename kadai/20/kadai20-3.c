#include <stdio.h>

void print2018();

void main(void) {
	int a;
	printf("ŒJ‚è•Ô‚µ‰ñ”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ > ");
	scanf("%d", &a);
	print2018(a);
	return;
}

void print2018(int a) {
	for (int i = 0; i < a; i++) {
		printf("2018\n");
	}
	return a;
}
