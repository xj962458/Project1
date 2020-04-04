#include<iostream>
#include"Complex.h"
using namespace std;
Complex::Complex(int r , int i )
{
    real = r;
    imag = i;
}
void Complex::display()const
{
    if(imag>=0)
        cout << real << "+" << imag << "i"<< endl;
    else
        cout << real << imag << "i" << endl;

}
Complex  Complex::add(const Complex& c)const      //两复数相加
{
    int r = real + c.real;
    int i = imag + c.imag;
    return Complex(r, i);
}
Complex  Complex::subtract(const Complex& c)const  //两复数相减
{
    int r = real - c.real;
    int i = imag - c.imag;
    return Complex(r, i);

}
Complex  Complex::multiply(const Complex&c)const  //两复数相乘
{
    int r = real * c.real - imag * c.imag;
    int i = imag * c.real + real * c.imag;
    return Complex(r, i);
}