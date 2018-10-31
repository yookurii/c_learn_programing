#include <stdio.h>
int main(void) {
	int i =1;
	while (i<=126) {
		if (i % 3 == 1 && i % 5 == 2) {
			printf("%d\n", i);
			i++;
		}
		else {
			i++;
		}
	}
	return 0;
}