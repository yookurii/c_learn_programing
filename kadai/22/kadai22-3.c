#include <stdio.h>
#include <math.h>
#define LAST 10
#define rand1 rand()%10
#define rand2 srand(a)
#define P printf
#define S scanf
int main(void) {
	int a,b=1,c;
	P("乱数の種を入力してください > ");
	S("%d", &a);
	rand2;
	for (int i = 1; i <= LAST; i++) {
		b *= rand1;
	}
	P("乱数を%d回かけた値は%dです。\n", LAST, b);
	return 0;
}
