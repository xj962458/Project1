#ifndef _DATE_H
#define _DATE_H
class Person
{
public:
    Person(string str, int age);
    void show();

private:
    string name; //存放字符串时须先申请内存空间
    int age;
};
#endif
