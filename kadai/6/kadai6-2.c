#include <stdio.h>
int main(void) {
	int a,x;

	scanf("%d", &a);

	x = (a + 100) / 3;
	switch (x) {
	case 50:
		printf("������I\n");
		break;
	default:
		printf("(%d + 100) / 3 �� %d �ł��B\n", a, x);
	}

	return 0;
}