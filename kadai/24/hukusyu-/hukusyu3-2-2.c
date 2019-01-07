#include <stdio.h>

int main(void)
{
	int a,i=0;
	double ary[100];
	printf("”’l10ŒÂˆÈã > ");
	do {
		scanf("%lf", &ary[i]);
		if (ary[i] != \0) {
			i += 1;
			continue;
		}
		else {
			break;
		}
	} while (ary[i] != \0);
	for (int j = 0; j <= 100; j++) {
		printf("%d ", ary[j]);
	}
	return 0;
}
