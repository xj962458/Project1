#include <string.h>
#include <iostream>
using namespace std;
#include "Person.h"
Person::Person(const char* str, int age)
{
    name = new char[strlen(str) + 1];
    strcpy(name, str);
    this->age = age;
}
Person::~Person()
{
    delete[]name;
}
void Person::show()
{
    cout << "My name is " << name << ", I am ";
    cout << age << endl;
}
