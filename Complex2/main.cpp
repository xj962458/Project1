#include <iostream>
#include"Complex.h"
using namespace std;
#include <cstdlib>
int main()
{
    Complex c1(1, 1), c2(2, 3), c3, c4, c5;
    c1.display();
    c2.display();
    c3 = add(c1,c2);
    cout << "ºÍc3=";
    c3.display();
    c4 = multiply(c1,c2);
    cout << "»ýc4=";
    c4.display();
    c5 = subtract(c1,c2);
    cout << "²îc5=";
    c5.display();
    system("pause");
    return 0;
}