#include <stdio.h>
int main(void) {
	int i, n, x = 0;
	do {
		printf("�����Z�F1, �����Z�F2, �I���F9  : ");
		scanf("%d", &i);
		switch (i) {
		case 1:
			printf("�l����͂��Ă��������F ");
			scanf("%d", &n);
			x = x + n;
			printf("�����Z�������ʂ�%d�ł�\n\n", x);
			break;
		case 2:
			printf("�l����͂��Ă��������F ");
			scanf("%d", &n);
			x = x - n;
			printf("�����Z�������ʂ�%d�ł�\n\n", x);
			break;
		case 9:
			printf("�I���܂�\n");
			break;
			return 0;
		default:
			printf("���͂�����Ă��܂��B������x�I��ł�������\n\n");
			break;
		}
	} while (i != 9);
	
	return 0;
}