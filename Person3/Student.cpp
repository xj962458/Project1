#include <iostream>
using namespace std;
#include "Student.h"
Student::Student(string str, int a, string no, float s) : Person(str, a) //���û���Ĺ��캯��
{
    stu_no = no;
    score = s;
}

void Student::show()
{
    Person::show(); //���û��౻�ض���ĺ���
    cout << "My student number is  " << stu_no << endl;
    cout << "My score is  " << score << endl;
}
