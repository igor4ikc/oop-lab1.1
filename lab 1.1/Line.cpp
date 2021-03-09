#include "Line.h"
#include <iostream>
#include <cmath>
using namespace std;
bool Line::Init(double A, double B, double y)
{
	if (A != 0)
	{
		first = A;
		second = B;
		y1 = y;
		return true;
	}
	else
	{
		return false;
	}
}
void Line::Read()
{

	double A, B, y;

	do
	{
		cout << "Function value:" << endl;
		cout << " A = "; cin >> A;
		cout << " B = "; cin >> B;
		cout << " y = "; cin >> y;
	} while (!Init(A, B, y));
}
void Line::Display()
{

	cout << endl;
	cout << " A = " << first << endl;
	cout << " B = " << second << endl;
	cout << " y = " << y1 << endl;
}
double Line::root()
{
	return (y1 - second) / first ;
}
