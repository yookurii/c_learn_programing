#include <stdio.h>
int main(void) {
	int n,x;

	printf("��������͂��Ă� �� ");
	scanf("%d", &n);

	/* �P�`�X���f���̃`�F�b�N */
	switch (n) {
	case 1:
		printf("%d �� 1 �ŁA", n);
		break;
	case 2:
	case 3:
	case 5:
	case 7:
		printf("%d ��10�����̑f���ŁA", n);
		break;
	case 4:
	case 6:
	case 8:
	case 9:
		printf("%d ��10�����̑f������Ȃ��āA", n);
		break;
	default:
		printf("%d ��1�`9�̐�����Ȃ��āA", n);
		break;
	}

	x = n % 2;

	/* ��E�����̃`�F�b�N */
	switch (x) {
	case 0:
		printf("�������������ˁB\n");
		break;
	default:
		printf("�����Ċ���ˁB\n");
		break;
	}
	return 0;
}