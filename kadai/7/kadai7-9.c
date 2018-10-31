#include <stdio.h>
int main(void) {
	int i, n, x = 0;
	do {
		printf("足し算：1, 引き算：2, 終了：9  : ");
		scanf("%d", &i);
		switch (i) {
		case 1:
			printf("値を入力してください： ");
			scanf("%d", &n);
			x = x + n;
			printf("足し算した結果は%dです\n\n", x);
			break;
		case 2:
			printf("値を入力してください： ");
			scanf("%d", &n);
			x = x - n;
			printf("引き算した結果は%dです\n\n", x);
			break;
		case 9:
			printf("終わります\n");
			break;
			return 0;
		default:
			printf("入力が誤っています。もう一度選んでください\n\n");
			break;
		}
	} while (i != 9);
	
	return 0;
}