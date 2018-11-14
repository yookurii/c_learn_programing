#include <stdio.h>
int main(void) {
	int x[100], i, n = 0, m = 0, l = 0;

	for (i = 0; i <= 99; i++) {
		x[i] = i;
	}

	n = x[0];
	m = x[49];
	l = x[99];

	printf("Å‰‚Ì—v‘f : %d\n", n);
	printf("50ŒÂ–Ú‚Ì—v‘f : %d\n", m);
	printf("ÅŒã‚Ì—v‘f : %d\n", l);

	return 0;
}