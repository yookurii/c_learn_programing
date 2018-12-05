#include <stdio.h>

int main(void) {
	int n = 0;
	char a[100], b[100], c[100], d[100], e[100], f[100], g[100];
	printf("•¶š—ñ > ");
	scanf("%s%s%s%s%s%s%s", a, b, c, d, e, f, g);
	n += strlen(a);
	n += strlen(b);
	n += strlen(c);
	n += strlen(d);
	n += strlen(e);
	n += strlen(f);
	n += strlen(g);
	printf("7ŒÂ‚Ì•¶š—ñ‚Ì’·‚³‚Ì‡Œv‚Í%d‚Å‚·B\n", n);
	return 0;
}