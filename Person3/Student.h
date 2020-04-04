#include "Person.h"
class Student : public Person
{
public:
    Student(string n, int a, string no, float s);
    void show();
private:
    string stu_no;   //Ñ§ºÅ
    float score;   	//³É¼¨
};