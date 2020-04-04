#include<iostream>
#include"Complex.h"
using namespace std;
Complex::Complex(int r, int i)
{
    real = r;
    imag = i;
}
void Complex::display()const
{
    cout << real << (imag >= 0 ? "+" : "") << imag << "i" << endl;

}
Complex  add(const Complex &c1,Complex &c2)      //两复数相加
{
    int r = c1.real + c2.real;
    int i = c1.imag + c2.imag;
    return Complex(r, i);
}
Complex  subtract(const Complex& c1,Complex &c2)  //两复数相减
{
    int r = c1.real - c2.real;
    int i = c1.imag - c2.imag;
    return Complex(r, i);

}
Complex  multiply(const Complex &c1,Complex &c2)  //两复数相乘
{
    int r = c1.real * c2.real - c1.imag * c2.imag;
    int i = c1.imag * c2.real + c1.real * c2.imag;
    return Complex(r, i);
}