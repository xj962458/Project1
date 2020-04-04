#include <cstring>
#include <iostream>
using namespace std;
#include "Student.h"
Student::Student(const char* str, int a, const char* no, float s):Person(str,a)	//���û���Ĺ��캯��
{
    stu_no = new char[strlen(no) + 1];
    strcpy(stu_no, no);
    score = s;
}
Student::~Student()
{
    delete[]stu_no;
}

void Student::show() 
{
    Person::show();	//���û��౻�ض���ĺ���
    cout << "My student number is  " << stu_no << endl;
    cout<< "My score is  " <<score<< endl;
}
