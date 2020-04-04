#include "Shape.h"
class Circle : public Shape
{
public:
	Circle(float r);
	double GetArea()const;
	double GetPerimeter()const;

private:
	float radius;
};
