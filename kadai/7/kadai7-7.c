#include <stdio.h>
int main(void) {
	int answer = 55, i;
	do{
	printf("�l����͂��Ă��������F ");
	scanf("%d", &i);
	if (i == answer) {
		printf("�����I\n");
	}
	else if (i < answer) {
		printf("������ %d ���傫���ł�\n",i);
	}
	else if (i > answer) {
		printf("������ %d ��菬�����ł�\n",i);
	}
	}while(i != 55);
	return 0;
}