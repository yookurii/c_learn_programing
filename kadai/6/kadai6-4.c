#include <stdio.h>
int main(void) {
	int n,x;

	printf("整数を入力してね ＞ ");
	scanf("%d", &n);

	/* １～９かつ素数のチェック */
	switch (n) {
	case 1:
		printf("%d は 1 で、", n);
		break;
	case 2:
	case 3:
	case 5:
	case 7:
		printf("%d は10未満の素数で、", n);
		break;
	case 4:
	case 6:
	case 8:
	case 9:
		printf("%d は10未満の素数じゃなくて、", n);
		break;
	default:
		printf("%d は1～9の数じゃなくて、", n);
		break;
	}

	x = n % 2;

	/* 奇数・偶数のチェック */
	switch (x) {
	case 0:
		printf("しかも偶数だね。\n");
		break;
	default:
		printf("そして奇数だね。\n");
		break;
	}
	return 0;
}