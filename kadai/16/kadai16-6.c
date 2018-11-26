#include <stdio.h>
int main(void) {
	int x = 3, y = 3,a;
	while (x >= 1 && x <= 5 && y >= 1 && y <= 5) {
		for (int i = 1; i <= 5; i++) {
			for (int j = 1; j <= 5; j++) {
				if (y == i && x == j) {
					printf("＊");
				}
				else {
					printf("□");
				}
			}
			printf("\n");
		}
		printf("\n");
		printf("移動方向を入力してください(4,6,8,2) > ");
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
		if (x <= 0 || x > 5 || y <= 0 || y > 5) {
			printf("範囲外に出ました。終了します。\n");
		}
		else {
		}

	}
	return 0;
}