#include <stdio.h>
int main(void) {
	int hus = 3, udon = 2, curry = 2, ramen = 3, i;
	do {
		printf("1. HUS定食(在庫数：%d）\n", hus);
		printf("2. かき揚げうどん(在庫数：%d）\n", udon);
		printf("3. カツカレー(在庫数：%d）\n", curry);
		printf("4. ラーメン(在庫数：%d）\n", ramen);
		printf("番号を入力してください（終了：9）：　");
		scanf("%d", &i);
		switch (i) {
		case 1:
			if (hus >= 1) {
				printf("HUS定食を出しました\n\n");
				hus = hus - 1;
				break;
			}
			else if (hus == 0) {
				printf("そのメニューは売り切れです。\n\n");
				break;
			}
		case 2:
			if (udon >= 1) {
				printf("かき揚げうどんを出しました\n\n");
				udon = udon - 1;
				break;
			}
			else if (udon == 0) {
				printf("そのメニューは売り切れです。\n\n");
				break;
			}
		case 3:
			if (curry >= 1) {
				printf("カツカレーを出しました\n\n");
				curry = curry - 1;
				break;
			}
			else if (curry == 0) {
				printf("そのメニューは売り切れです。\n\n");
				break;
			}
		case 4:
			if (ramen >= 1) {
				printf("ラーメンを出しました\n\n");
				ramen = ramen - 1;
				break;
			}
			else if (ramen == 0) {
				printf("そのメニューは売り切れです。\n\n");
				break;
			}
		case 9:
			printf("本日の営業を終了します。\n");
			
			break;
		default:
			printf("正しい値を入力してください。\n\n");
			break;
		}
	} while (i != 9);

	if (hus < udon) {
		if (hus < curry) {
			if (hus < ramen) {
				printf("本日の人気の高いメニューは「HUS定食」です。\n");
			}
			else {
				printf("本日の人気の高いメニューは「ラーメン」です。\n");
			}
		}
		else {
			printf("本日の人気の高いメニューは「カレーです」\n");
		}
	}
	else {
		if (udon < curry) {
			if (udon < ramen) {
				printf("本日の人気の高いメニューは「うどん」です。\n");
			}
			else {
				printf("本日の人気の高いメニューは「ラーメン」です。\n");
			}
		}
		else {
			printf("本日の人気の高いメニューは「カツカレー」です。\n");
		}
	}
	return 0;

}

	