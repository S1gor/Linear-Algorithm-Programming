#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	//18.������ ���������� ������� ������ ��������������. ���������� ��� �������.

	system("chcp 1251");

	float X1, X2, X3, Y1, Y2, Y3, a, b, S;

	printf("���������� ����� �: \nX1 = "); scanf_s("%f", &X1); printf("Y1 = "); scanf_s("%f", &Y1);
	printf("���������� ����� B: \nX2 = "); scanf_s("%f", &X2); printf("Y2 = "); scanf_s("%f", &Y2);
	printf("���������� ����� C: \nX3 = "); scanf_s("%f", &X3); printf("Y3 = "); scanf_s("%f", &Y3);
	
	a = sqrt((Y1 - Y2) * (Y1 - Y2) + (X1 - X2) * (X1 - X2));
	b = sqrt((Y2 - Y3) * (Y2 - Y3) + (X3 - X2) * (X3 - X2));
	S = a * b;

	printf("������� �����: %.1f\n", S);

	return 0;
}