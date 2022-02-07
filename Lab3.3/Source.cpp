#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
int main()
{
	system("chcp 1251");   //русский €зык

	// объ€вление переменных
	float x, y, F;

	// ввод данных
	printf("¬ведите x = "); scanf_s("%f", &x);
	printf("¬ведите y = "); scanf_s("%f", &y);

	// вычислени€
	F = 3 * sqrt(x*x) - 5 * sqrt(x + sqrt(y));

	// вывод результата
	printf("F = %.3f", F);
	return 0;
}