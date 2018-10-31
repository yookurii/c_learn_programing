#include<stdio.h>
int main(void) {
	int n, a = 3, b = 3, c = 2, d = 1;
	int x = 0, y = 0, z = 0, w = 0;
	int max;
	do {
		printf("１．HUS定食(在庫数：%d)\n", a);
		printf("２．ラーメン(在庫数:%d)\n", b);
		printf("３．カツカレー(在庫数:%d)\n", c);
		printf("４．うどん(在庫数:%d)\n", d);
		printf("番号を入力してください(終了:9):");
		scanf("%d", &n);
		switch (n) {
		case 1:
			if (a > 0) {
				printf("HUS定食を出しました\n");
				a -= 1;
				x++;
			}
			else {
				printf("そのメニューは売り切れです。\n");
			}
			break;
		case 2:
			if (b > 0) {
				printf("ラーメンを出しました\n");
				b -= 1;
				y++;
			}
			else {
				printf("そのメニューは売り切れです。\n");
			}
			break;
		case 3:
			if (c > 0) {
				printf("カツカレーを出しました\n");
				c -= 1;
				z++;
			}
			else {
				printf("そのメニューは売り切れです。\n");
			}
			break;
		case 4:
			if (d > 0) {
				printf("うどんを出しました\n");
				d -= 1;
				w++;
			}
			else {
				printf("そのメニューは売り切れです。\n");
			}
			break;
		case 9:
			printf("本日の営業を終了します。\n");
			break;
		default:
			printf("もう一度入力してください\n");
		}
	} while (n != 9);
	if (x > y) {
		if (z > x) {
			if (w > z) {
				printf("本日の人気の高いメニューは「うどん」でした。\n");
			}
			else {
				printf("本日の人気の高いメニューは「カツカレー」でした。\n");
			}
		}
		else if (w > x) {
			printf("本日の人気の高いメニューは「うどん」でした。\n");
		}
		else {
			printf("本日の人気の高いメニューは「HUS定食」でした。\n");
		}
	}
	else if (z > y) {
		if (w > z) {
			printf("本日の人気の高いメニューは「うどん」でした。\n");
		}
		else {
			printf("本日の人気の高いメニューは「カツカレー」でした。\n");
		}
	}
	else if (w > y) {
		printf("本日の人気の高いメニューは「うどん」でした。\n");
	}
	else {
		printf("本日の人気の高いメニューは「ラーメン」でした。\n");
	}

}