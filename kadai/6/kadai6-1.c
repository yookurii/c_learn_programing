#include <stdio.h>
int main(void) {
	int n;

	printf("\t1 : アクアマリン\n");
	printf("\t2 : アメシスト\n");
	printf("\t3 : ガーネット\n");
	printf("\t4 : ダイヤモンド\n");
	printf("1月の誕生石は？ ＞ ");

	scanf("%d", &n);

	switch (n) {
		case 3:
			printf("正解です！\n");
			break;
		case 1:
		case 2:
		case 4:
			printf("間違いです。。。\n");
			break;
		default:
		printf("1～4を入力してください。\n");
	}
	return 0;
}