#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
int main()
{
	system("chcp 1251");   //������� ����

	// ���������� ����������
	float x, y, F;

	// ���� ������
	printf("������� x = "); scanf_s("%f", &x);
	printf("������� y = "); scanf_s("%f", &y);

	// ����������
	F = 3 * sqrt(x*x) - 5 * sqrt(x + sqrt(y));

	// ����� ����������
	printf("F = %.3f", F);
	return 0;
}