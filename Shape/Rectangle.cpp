#include "Rectangle.h"

Rectangle::Rectangle(float l, float w)
{
	length = l;
	width = w;
}
double Rectangle::GetArea()const
{
	return double(2 * (length + width));
}
double Rectangle::GetPerimeter()const
{
	return double(length * width);
}