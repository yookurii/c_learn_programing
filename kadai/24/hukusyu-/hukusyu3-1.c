#include <stdio.h>

int main(void)
{
	
	int n;
	double ary[5];
	
	printf("�������R���͂��� > ");
	scanf("%lf %lf %lf %lf %lf", &ary[0], &ary[1], &ary[2], &ary[3], &ary[4]);

	printf("���Ԗڂ̗v�f��\������H > ");
	scanf("%d", &n);

	printf("%d �Ԗڂ̗v�f�� %f �ł��I\n", n, ary[n]);

	return 0;
}
