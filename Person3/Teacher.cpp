#include <iostream>
using namespace std;
#include "Teacher.h"
Teacher::Teacher(string str, int a, string sch, int y) : Person(str, a) //���û���Ĺ��캯��
{
    school = sch;
    years = (y > 0) ? y : 0;
}

void Teacher::show()
{
    Person::show(); //���û��౻�ض���ĺ���
    cout << "I am in " << school << " for " << years
         << " years." << endl;
}
