#include <stdio.h>
int main(void) {
	int i,x=-4;
	for (i = 0; i <9; i++) {
		printf("%d\n", x);
		x = x + 1;
	}
	return 0;
}