#include "Circle.h"
#define PI 3.14159
Circle::Circle(float r)
{
	radius = r;
}
double Circle::GetArea()const
{
	return PI * radius * radius;
}
double Circle::GetPerimeter()const
{
	return 2 * PI * radius;
}