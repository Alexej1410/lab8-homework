#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES 
#include <math.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	double x, s;
	s = 0;
	puts("введите число:");
	scanf("%lf", &x);
	for (double i = 1; i <= x; i += 0.1)
		s += sin(i);
	printf("s = %lf", s);
}