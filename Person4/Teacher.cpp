#include <cstring>
#include <iostream>
using namespace std;
#include "teacher.h"
Teacher::Teacher(const char* str, int a,const char* sch, int y):Person(str, a)	//调用基类的构造函数
{
    school = new char[strlen(sch) + 1];
    strcpy(school, sch);
    years = (y > 0) ? y : 0;
    cout<<"Teacher类的构造函数"<<endl;
}
Teacher::~Teacher()
{
    delete[]school;
    cout << "Teacher类的析构函数" << endl;
}

void Teacher::show()
{
    Person::show();	//调用基类被重定义的函数
    cout << "I am in " << school << " for " << years
        << " years." << endl;
}
