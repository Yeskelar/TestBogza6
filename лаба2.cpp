

#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	int x = 2;
	double rad, s, p, pi = 3.14;
	cout << "Enter rad: ";
	cin >> rad;
	s = pi * rad * rad;
	p = x * pi * rad;
	cout << pi << " * " << rad << " * " << rad << " = " << s <<endl;
	cout << x << " * " << pi << " * " << rad << " = " << p << endl;
}
