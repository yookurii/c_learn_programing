#include <stdio.h>
int main(void) {
	int d=0,x,i;
	do{
		printf("値を入力してください(終了 : -999) : ");
		scanf("%d", &i);
		if (i != -999) {
			d = d + i;
			printf("合計は %d です。\n", d);
		}
		else {
			printf("終わります\n");
		}
	} while (i != -999);
	return 0;
}