#include <stdio.h>
int main(void) {
	int x = 3, y = 3, x1 = 1, y1 = 3, x2 = 2, y2 = 4, a;
	while (x >= 1 && x <= 5 && y >= 1 && y <= 5) {
		for (int i = 1; i <= 5; i++) {
			for (int j = 1; j <= 5; j++) {
				if (y == i && x == j) {
					printf("��");
				}
				else {
					printf("��");
				}
			}
			printf("\n");
		}
		printf("\n");
		printf("�ړ���������͂��Ă�������(4,6,8,2) > ");
		scanf("%d", &a);
		if (a == 4) {
			x = x - 1;
		}
		else if (a == 6) {
			x = x + 1;
		}
		else if (a == 2) {
			y = y + 1;
		}
		else if (a == 8) {
			y = y - 1;
		}
		if (x == x1 && y == y1) {
			printf("�Q�[���I���ł��I ���_��10�_�ł��I\n");
			break;
		}
		else if (x == x2 && y == y2) {
			printf("�Q�[���I���ł��I ���_��-10�_�ł��I\n");
			break;
		}

	}
	return 0;
}