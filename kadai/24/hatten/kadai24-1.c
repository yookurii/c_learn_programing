#include <stdio.h>
int main(void) {
	int a,b=0,c;
	for (int i = 1; i <= 5; i++) {
		printf("�l����͂��Ă�������(%d���) : ",i);
		scanf("%d", &a);
		if (a >= b) {
			b = a;
			c = i;
		}
		else {
		}
	}
	printf("�ő�l��%d��ڂ�%d�ł��B\n", c, b);
	return 0;
}