#include "Person.h"
class Student : public Person
{
public:
    Student(const char* n, int a, const char* no, float s);
    ~Student();
    void show();
private:
    char *stu_no;   //Ñ§ºÅ
    float score;   	//³É¼¨
};