#include <stdio.h>
int main(void) {
	int d=0,x,i;
	do{
		printf("�l����͂��Ă�������(�I�� : -999) : ");
		scanf("%d", &i);
		if (i != -999) {
			d = d + i;
			printf("���v�� %d �ł��B\n", d);
		}
		else {
			printf("�I���܂�\n");
		}
	} while (i != -999);
	return 0;
}