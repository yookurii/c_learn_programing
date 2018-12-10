#include <stdio.h>

int judgeRank(int v);

void main(void) {
	int a;
	char b;
	while (1) {
		printf("“_”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ > ");
		scanf("%d", &a);
		b = judgeRank(a);
		if (b != 'Z') {
			printf("¬Ñ‚Í%c‚Å‚·B\n", b);
		}
		else {
			return;
		}
	}
}

int judgeRank(int v) {
	char i;
	if (v >= 0 && v <= 59) i = 'X';
	else if (v >= 60 && v <= 69) i = 'C';
	else if (v >= 70 && v <= 79) i = 'B';
	else if (v >= 80 && v <= 89) i = 'A';
	else if (v >= 90 && v <= 100) i = 'S';
	else i = 'Z';
	return i;
}