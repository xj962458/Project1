#ifndef _DATE_H
#define _DATE_H
class Person
{
public:
    Person(const char* str, int age);
    ~Person();
    void show();
private:
    char* name; //存放字符串时须先申请内存空间
    int age;
};
#endif 
