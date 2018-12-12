#include <stdio.h>
#include "func.h"
int x = 0;
int a = 0;
void func01(void);
void func02(void);

int main(void)
{
	printf("プログラム開始: x==%d\n", x);
	x = 16;
	printf("x==16; を実行: x==%d\n", x);
	func01();
	printf("関数 func01 を実行: x==%d\n", x);
	func02();
	printf("関数 func02 を実行: x==%d\n", x);
	x=func03(a);
	printf("関数 func03 を実行: x==%d\n", x);
	return 0;
}

void func01(void) {
	x = 256;
}

void func02(void) {
	x = 4096;
}