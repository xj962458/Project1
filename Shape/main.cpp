#include <iostream>
using namespace std;
#include "Rectangle.h"
#include "Circle.h"
int main()
{
	Circle c(10);
	Rectangle r(60, 80);
	cout << "Բ��c���ܳ�Ϊ:" << c.GetPerimeter() << ","
		 << "���Ϊ:" << c.GetArea() << endl;
	cout << "����r���ܳ�Ϊ:" << r.GetPerimeter() << ","
		 << "���Ϊ:" << r.GetArea() << endl;
	return 0;
}