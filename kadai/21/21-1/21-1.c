#include <stdio.h>
#include "func.h"
int x = 0;
int a = 0;
void func01(void);
void func02(void);

int main(void)
{
	printf("�v���O�����J�n: x==%d\n", x);
	x = 16;
	printf("x==16; �����s: x==%d\n", x);
	func01();
	printf("�֐� func01 �����s: x==%d\n", x);
	func02();
	printf("�֐� func02 �����s: x==%d\n", x);
	x=func03(a);
	printf("�֐� func03 �����s: x==%d\n", x);
	return 0;
}

void func01(void) {
	x = 256;
}

void func02(void) {
	x = 4096;
}