#include "Person.h"
class Teacher : public Person
{
public:
    Teacher(string str, int a, string sch, int y);
    void show();
private:
    string school; //����ѧУ
    int years;   	//����
};