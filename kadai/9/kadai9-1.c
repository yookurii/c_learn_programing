#include <stdio.h>
int main(void) {
	int i;
	while (1) {
		printf("��������͂��Ă�������>");
		scanf("%d", &i);
		if (i < 0) {
			printf("%d�����͂���܂���\n", i);
			break;
		}
		else {
			printf("%d�͕����ł͂���܂���\n", i);
			continue;
		}
	}
	return 0;
}