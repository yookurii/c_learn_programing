#include <stdio.h>
int main(void) {
	int ary[5][5]={
	{0,1,0,0,0},
	{0,1,0,1,1},
	{0,0,0,0,0},
	{1,1,0,1,0},
	{0,0,0,0,0}};
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", ary[i][j]);
		}
		printf("\n");
	}
	return 0;
}