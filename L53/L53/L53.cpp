// L53.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

float func(float x, int n)
{
	if (n == 1) return 1;
	return (x*x) / (n * func(x, n - 1));
}
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_CTYPE, "Russian");
	float x; int n;
	cout << "������� x: ";
	cin >> x;
	cout << "������� n: ";
	cin >> n;
	cout << func(x, n) << endl;
	
	return 0;
	
}

