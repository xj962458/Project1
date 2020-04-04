#include "Person.h"
class Teacher : public Person
{
public:
    Teacher(string str, int a, string sch, int y);
    void show();
private:
    string school; //所在学校
    int years;   	//工龄
};