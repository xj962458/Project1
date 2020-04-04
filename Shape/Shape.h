#ifndef _SHAPE_H
#define _SHAPE_H
class Shape
{
public:
	virtual double GetArea()const=0;
	virtual double GetPerimeter()const=0;
};
#endif