#include "Person.h"
class Teacher : public Person
{
public:
    Teacher(const char* str, char s, const char* sch, int y);
    ~Teacher();
    void show();
private:
    char* school; //所在学校
    int years;   	//工龄
};
