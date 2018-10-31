#include <stdio.h>
int main(void) {
	double zen, kg, amari;
	int nin;

	printf("全部で何kgありますか ");
	scanf("%lf", &zen);
	printf("一人当たり何kg配りますか ");
	scanf("%lf", &kg);
	amari = zen / kg;
	nin = amari;
	amari = amari - nin;
	printf("%d人に分配できます。\n", nin);
	printf("分配した後の余りは %f kgです。\n", amari);

	return 0;
}