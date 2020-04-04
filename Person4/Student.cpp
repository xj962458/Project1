#include <cstring>
#include <iostream>
using namespace std;
#include "Student.h"
Student::Student(const char* str, int a, const char* no, float s):Person(str,a)	//调用基类的构造函数
{
    stu_no = new char[strlen(no) + 1];
    strcpy(stu_no, no);
    score = s;
    cout << "Student类的构造函数" << endl;
}
Student::~Student()
{
    delete[]stu_no;
    cout << "Student类的析构函数" << endl;
}

void Student::show() 
{
    Person::show();	//调用基类被重定义的函数
    cout << "My student number is  " << stu_no << endl;
    cout<< "My score is  " <<score<< endl;
}
