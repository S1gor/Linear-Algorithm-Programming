#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
int main()
{
	//18.������ ���������� ������� ������ ��������������. ���������� ��� �������.

	system("chcp 1251"); // ������� ����

	// ���������� ����������
	float X1, X2, Y1, Y2, A, B, C, D, S;


	// ���� ������
	printf("���������� ����� A:\n X1="); scanf_s("%f", &X1);
	printf(" Y1="); scanf_s("%f", &Y1);
	printf("���������� ����� B:\n X1-��� �����\n");
	printf(" Y2="); scanf_s("%f", &Y2);
	printf("���������� ����� C:\n X2="); scanf_s("%f", &X2);
	printf(" Y2-��� �����\n");
	printf("���������� ����� D:\n X2-��� �����\n");
	printf(" Y1-��� �����\n");

	// ����������
	S = sqrt((X2 - X1) * (X2 - X1) * (Y2 - Y1) * (Y2 - Y1));

	// ����� ����������
	printf("������� �����:\n %.3f", S);
	return 0;
}