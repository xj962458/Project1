#include <iostream>
using namespace std;
#include "Rectangle.h"
#include "Circle.h"
int main()
{
	Circle c(10);
	Rectangle r(60, 80);
	cout << "圆形c的周长为:" << c.GetPerimeter() << ","
		 << "面积为:" << c.GetArea() << endl;
	cout << "矩形r的周长为:" << r.GetPerimeter() << ","
		 << "面积为:" << r.GetArea() << endl;
	return 0;
}