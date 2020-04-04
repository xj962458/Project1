#include <cstring>
#include <iostream>
using namespace std;
#include "teacher.h"
Teacher::Teacher(const char* str, char s, const char* sch, int y)
    :Person(str, s)	//���û���Ĺ��캯��
{
    school = new char[strlen(sch) + 1];
    strcpy(school, sch);
    years = (y > 0) ? y : 0;
}
Teacher::~Teacher()
{
    delete[]school;
}

void Teacher::show()
{
    Person::show();	//���û��౻�ض���ĺ���
    cout << "I am in " << school << " for " << years
        << " years." << endl;
}
