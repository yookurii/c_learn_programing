#include <stdio.h>
int main(void) {
	int a,x;

	scanf("%d", &a);

	x = (a + 100) / 3;
	switch (x) {
	case 50:
		printf("当たり！\n");
		break;
	default:
		printf("(%d + 100) / 3 は %d です。\n", a, x);
	}

	return 0;
}