#include<iostream>
int main()
{
	system("chcp 1251");    //������� ����

	// 18.����� � ��������� �� ������ � �� ���������� S ��. ����� ���� �� ���������� S1 �� ������ � ��������� ����� �.
	//������������ ������ �� � � �. �� ����� ����� �� ������ ��������� � ������ �, ���� �� ������ � �� ���� �� ��������� V1 ��/�, �� � �� � �� ��������� V2 ��/�, � ����� �� ������ �������� t �����.


	// ���������� ����������
	float x, s1, s, v1, v2, t;


	// ���� ������
	printf("������� t = "); scanf_s("%f", &t);
	printf("������� s1 = "); scanf_s("%f", &s1);
	printf("������� s = "); scanf_s("%f", &s);
	printf("������� v1 = "); scanf_s("%f", &v1);
	printf("������� v2 = "); scanf_s("%f", &v2);

	// ���������� 
	x = t - ((s1 / v1) + ((s - s1) / v2));

	// ����� ���������� 
	printf("x = %.3f\n\n", x);
	return 0;
}