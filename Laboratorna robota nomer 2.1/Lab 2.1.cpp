// Lab_02.cpp
// <���⳿� ���������>
// ����������� ������ � 2
// ˳��� ��������
// ������ 8

#include <iostream>

using namespace std;

int main()
{
	double x;    // ������� ��������
	double y;    // ������� ��������
	double z1;   // ��������� ���������� 1-�� ������
	double z2;   // ��������� ���������� 2-�� ������

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	z1 = (cos(x) * cos(x) * cos(x) * cos(x)) + (sin(x) * sin(x)) + 1. / 4 * (sin(x * x)) * (sin(x * x)) - 1;
	z2 = (sin(y) + sin(x)) * (sin(y) - sin(x));

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}