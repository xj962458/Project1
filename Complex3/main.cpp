#include <iostream>
using namespace std;
#include "Complex.h"
int main()
{
    Complex c1(1, 1), c2(2, 3), c3, c4;
    cout << c1;
    cout << c2;
    cout << "ÇëÊäÈë¸´Êýc4:" << endl;
    cin >> c4;
    c3 = c1 + c2;
    cout << "c3=" << c3;
    cout << "c4=" << c4;
    return 0;
}
