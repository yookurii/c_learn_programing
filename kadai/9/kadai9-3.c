#include <stdio.h>
int main(void) {
	int a = 0, i, x;
	printf("��������͂��Ă������� > ");
	scanf("%d", &i);

	while (1) {
		for (x = i; x >= 1; x--) {
			a = a + x;
			if (a >= 100) {
				
				break;
			}
			else {
				continue;
			}
		}
		break;
	}
	printf("%d����1�܂ł̐����̘a��%d�ł��B\n", i, a);
	
	return 0;
}