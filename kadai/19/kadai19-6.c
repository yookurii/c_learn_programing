#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char a[100], b[100]=" ", c[100]=" ", d[100]=" ",z;
	int n = 0;
	printf("������ > ");
	gets(a);
	
	n = strlen(a);

	for (int i = 0; i < n; i++) {
			z = a[i];
			if (islower(z)) {
				strcat(b, z);
			}
			else if (isupper(z)) {
				strcat(c, z);
			}
			else if (isdigit(z)) {
				strcat(d, z);
			}
			else {
			}
	}

	printf("�������F%s�A�啶���F%s�A�����F%s�ł��B\n", b, c, d);
	return 0;
}