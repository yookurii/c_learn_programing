#include <stdio.h>
int main(void) {
	double zen, kg, amari;
	int nin;

	printf("�S���ŉ�kg����܂��� ");
	scanf("%lf", &zen);
	printf("��l�����艽kg�z��܂��� ");
	scanf("%lf", &kg);
	amari = zen / kg;
	nin = amari;
	amari = amari - nin;
	printf("%d�l�ɕ��z�ł��܂��B\n", nin);
	printf("���z������̗]��� %f kg�ł��B\n", amari);

	return 0;
}