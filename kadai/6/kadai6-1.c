#include <stdio.h>
int main(void) {
	int n;

	printf("\t1 : �A�N�A�}����\n");
	printf("\t2 : �A���V�X�g\n");
	printf("\t3 : �K�[�l�b�g\n");
	printf("\t4 : �_�C�������h\n");
	printf("1���̒a���΂́H �� ");

	scanf("%d", &n);

	switch (n) {
		case 3:
			printf("�����ł��I\n");
			break;
		case 1:
		case 2:
		case 4:
			printf("�ԈႢ�ł��B�B�B\n");
			break;
		default:
		printf("1�`4����͂��Ă��������B\n");
	}
	return 0;
}