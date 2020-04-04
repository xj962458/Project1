#include <cstring>
#include <iostream>
using namespace std;
#include "teacher.h"
Teacher::Teacher(const char* str, char s, const char* sch, int y)
    :Person(str, s)	//调用基类的构造函数
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
    Person::show();	//调用基类被重定义的函数
    cout << "I am in " << school << " for " << years
        << " years." << endl;
}
