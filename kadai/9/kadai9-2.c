#include <stdio.h>
int main(void) {
	int i, x;
	printf("��������͂��Ă������� > ");
	scanf("%d", &i);
	while (1) {
		for (x = 4; x <= i; x += 4) {
			if (x % 8 == 0) {
			}
			else{
				printf("%d ", x);
			}
		}
		printf("\n");
		break;
	}
	return 0;
}