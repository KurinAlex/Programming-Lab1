#include <stdio.h>
#include <math.h>

#define a 2.8
#define b 16.4
#define c -5.4

int main()
{
	double x = b * pow(tan(c), 2) - 1 / pow(sin(c / a), 2);
	double y = a * exp(-sqrt(a)) * cos(b * c / a);

	printf("a=%f b=%f c=%f x=%f y=%f", a, b, c, x, y);

	getchar();
}