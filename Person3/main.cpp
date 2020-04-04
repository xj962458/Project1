#include <iostream>
using namespace std;
#include "Teacher.h"
#include "Student.h"
int main()
{
    Person p("Zhang san", 25);
    Teacher teacher("Li si", 40, "AHPU", 4);
    Student student("Wang Er", 20, "3190707121", 99);
    p.show();
    cout << endl;
    teacher.show();
    cout << endl;
    student.show();
    return 0;
}


