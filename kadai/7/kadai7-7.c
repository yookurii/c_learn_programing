#include <stdio.h>
int main(void) {
	int answer = 55, i;
	do{
	printf("値を入力してください： ");
	scanf("%d", &i);
	if (i == answer) {
		printf("正解！\n");
	}
	else if (i < answer) {
		printf("答えは %d より大きいです\n",i);
	}
	else if (i > answer) {
		printf("答えは %d より小さいです\n",i);
	}
	}while(i != 55);
	return 0;
}