
#include "stdafx.h"
#include "Complex.h"
//include <iostream>

using namespace std;



int main()
{
	cout << "Hello World";
	Complex A(1, 1), B, C(1);
	cout << A<<B<<C;
	C = A + B;
	cout << C;
	C = A + 10.5;
	cout << C;
	C = 10.5 + A;
	cout << C;
	C = A + B + C;
	cout << C;
	C = A = B = C;
	cout << A << B << C;
	cin>> A >> B >> C;
	cout << A << B << C;
	//cout << A;
	system("pause");
}