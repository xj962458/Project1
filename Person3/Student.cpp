#include <iostream>
using namespace std;
#include "Student.h"
Student::Student(string str, int a, string no, float s) : Person(str, a) //调用基类的构造函数
{
    stu_no = no;
    score = s;
}

void Student::show()
{
    Person::show(); //调用基类被重定义的函数
    cout << "My student number is  " << stu_no << endl;
    cout << "My score is  " << score << endl;
}
