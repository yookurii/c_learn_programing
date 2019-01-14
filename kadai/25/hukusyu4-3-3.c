#include <stdio.h>
double Multiply(double a, double b);
double Absolute(double a);
int main(void)
{
	double a, b, result;

	printf("‚Q‚Â‚ÌÀ” > ");
	scanf("%lf %lf", &a, &b);

	result = Multiply(a, b);
	result = Absolute(result);

	printf("%f ~ %f ‚Ìâ‘Î’l‚Í %f ‚Å‚·B\n", a, b, result);

	return 0;
}

double Multiply(double a, double b)
{
	a *= b;
	return a;
}

double Absolute(double a)
{
	if (a < 0.0)
		a = -a;

	return a;
}
