#include "Shape.h"
class Rectangle : public Shape
{
public:
	Rectangle(float l, float w);
	double GetArea()const;
	double GetPerimeter()const;

private:
	float length;
	float width;
};