#include <cstring>
#include <iostream>
using namespace std;
#include "teacher.h"
Teacher::Teacher(const char* str, int a,const char* sch, int y):Person(str, a)	//���û���Ĺ��캯��
{
    school = new char[strlen(sch) + 1];
    strcpy(school, sch);
    years = (y > 0) ? y : 0;
    cout<<"Teacher��Ĺ��캯��"<<endl;
}
Teacher::~Teacher()
{
    delete[]school;
    cout << "Teacher�����������" << endl;
}

void Teacher::show()
{
    Person::show();	//���û��౻�ض���ĺ���
    cout << "I am in " << school << " for " << years
        << " years." << endl;
}
