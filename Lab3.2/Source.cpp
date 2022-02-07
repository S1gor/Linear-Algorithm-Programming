#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
int main()
{
	//18.Заданы координаты четырех вершин прямоугольника. Определить его площадь.

	system("chcp 1251"); // русский язык

	// объявление переменных
	float X1, X2, Y1, Y2, A, B, C, D, S;


	// ввод данных
	printf("Координаты точки A:\n X1="); scanf_s("%f", &X1);
	printf(" Y1="); scanf_s("%f", &Y1);
	printf("Координаты точки B:\n X1-дан ранее\n");
	printf(" Y2="); scanf_s("%f", &Y2);
	printf("Координаты точки C:\n X2="); scanf_s("%f", &X2);
	printf(" Y2-дан ранее\n");
	printf("Координаты точки D:\n X2-дан ранее\n");
	printf(" Y1-дан ранее\n");

	// вычисления
	S = sqrt((X2 - X1) * (X2 - X1) * (Y2 - Y1) * (Y2 - Y1));

	// вывод результата
	printf("Площадь равна:\n %.3f", S);
	return 0;
}