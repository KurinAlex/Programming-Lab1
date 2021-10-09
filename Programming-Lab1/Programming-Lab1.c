#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

void EnterDouble(double* num, const char* number_name)
{
	printf("Enter %s:", number_name);
	scanf_s("%lf", num);
}

int main()
{
	double a;
	printf("a must be bigger than 0\n");
	do
	{
		EnterDouble(&a, "a");
	} while (a <= 0.0);

	double b;
	EnterDouble(&b, "b");

	double c;
	printf("c / a must not be divisible by pi\n");
	do
	{
		EnterDouble(&c, "c");
	} while (fmod(c / a, M_PI) == 0);

	double x = b * pow(tan(c), 2) - 1 / pow(sin(c / a), 2);
	double y = a * exp(-sqrt(a)) * cos(b * c / a);

	printf("a=%lf b=%lf c=%lf x=%lf y=%lf", a, b, c, x, y);

	getch();
	return 0;
}