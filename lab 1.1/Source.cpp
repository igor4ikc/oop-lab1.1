#include "Line.h"
#include <iostream>
using namespace std;
Line makeLine(double A, double B, double y)
{
	Line x;
	if (x.Init(A, B, y))
		cout << "Function value:" << endl;
	return x;
}
int main()
{

	Line x;
	x.Read();
	x.Display();
	cout << " x = " << x.root() << endl << endl;
	double A, B, y;
	cout << "Function value:" << endl << endl;
	cout << " A = "; cin >> A;
	cout << " B = "; cin >> B;
	cout << " y = "; cin >> y;
	x = makeLine(A, B, y);
	x.Display();
	cout << " x = " << x.root() << endl;
	cin.get();
	return 0;
}