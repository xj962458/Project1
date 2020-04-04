#include <iostream>
using namespace std;
#include "teacher.h"
int main()
{
    Person p("Zhang san", 25);
    Teacher teacher("Li si", 40, "AHPU", 4);
    p.show();
    cout << endl;
    teacher.show();
    return 0;
}
