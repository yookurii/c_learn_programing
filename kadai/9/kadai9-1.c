#include <stdio.h>
int main(void) {
	int i;
	while (1) {
		printf("負数を入力してください>");
		scanf("%d", &i);
		if (i < 0) {
			printf("%dが入力されました\n", i);
			break;
		}
		else {
			printf("%dは負数ではありません\n", i);
			continue;
		}
	}
	return 0;
}