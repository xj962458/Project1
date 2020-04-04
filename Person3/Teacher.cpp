#include <iostream>
using namespace std;
#include "Teacher.h"
Teacher::Teacher(string str, int a, string sch, int y) : Person(str, a) //调用基类的构造函数
{
    school = sch;
    years = (y > 0) ? y : 0;
}

void Teacher::show()
{
    Person::show(); //调用基类被重定义的函数
    cout << "I am in " << school << " for " << years
         << " years." << endl;
}
