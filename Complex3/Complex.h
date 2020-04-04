#include <iostream>
using namespace std;
class Complex
{
public:
    Complex(int r = 0, int i = 0);
    friend Complex operator+(const Complex &c1, const Complex &c2);
    friend void operator>>(istream &in, Complex &c);
    friend void operator<<(ostream &out, const Complex &c);

private:
    int real;
    int imag;
};
