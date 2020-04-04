#include <string>
#include <iostream>
using namespace std;
#include "Person.h"
Person::Person(string str, int age)
{
    name = str;
    this->age = age;
}
void Person::show()
{
    cout << "My name is " << name << ", I am ";
    cout << age << endl;
}
