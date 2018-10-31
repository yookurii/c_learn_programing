#include <stdio.h>
int main(void) {
	int a,x;

	scanf("%d", &a);

	x = (a + 100) / 3;
	switch (x) {
	case 50:
		printf("“–‚½‚èI\n");
		break;
	default:
		printf("(%d + 100) / 3 ‚Í %d ‚Å‚·B\n", a, x);
	}

	return 0;
}