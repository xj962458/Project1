#include <iostream>
using namespace std;
#include "Complex.h"

Complex::Complex(int r, int i)
{
	real = r;
	imag = i;
}
void operator>>(istream &in, Complex &c) //运行符<<重载
{
	char c1, c2;
	in >> c.real >> c1 >> c.imag >> c2;
	c.imag = (c1 == '-') ? -c.imag : c.imag;
}

void operator<<(ostream &out, const Complex &c) //运行符<<重载
{
	out << c.real << (c.imag >= 0 ? "+" : "") << c.imag << "i" << endl;
}

Complex operator+(const Complex &c1, const Complex &c2)
{
	int r = c1.real + c2.real;
	int i = c1.imag + c2.imag;
	return Complex(r, i);
}
