#include <stdio.h>
int main(void) {
	int a = 0, i, x;
	printf("整数を入力してください > ");
	scanf("%d", &i);

	while (1) {
		for (x = i; x >= 1; x--) {
			a = a + x;
			if (a >= 100) {
				
				break;
			}
			else {
				continue;
			}
		}
		break;
	}
	printf("%dから1までの整数の和は%dです。\n", i, a);
	
	return 0;
}