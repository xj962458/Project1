#include <string.h>
#include <iostream>
using namespace std;
#include "Person.h"
Person::Person(const char* str, int age)
{
    name = new char[strlen(str) + 1];
    strcpy(name, str);
    this->age = age;
    cout << "Person��Ĺ��캯��" << endl;
}
Person::~Person()
{
    delete[]name;
    cout << "Person�����������" << endl;
}
void Person::show()
{
    cout << "My name is " << name << ", I am ";
    cout << age << endl;
}
