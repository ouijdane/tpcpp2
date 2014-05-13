#include <iostream>
#include "circle.h"


using namespace std ;


Circle::Circle() : r(0) { }

Circle::~Circle()
{
    //dtor
}

Circle::Circle(point p ,float x) : Shape(p)
{
    r=x;
}

void Circle::display()
{
     Shape::display();
     cout << "to be more specific I am a circle with a radius equal to " << r << endl ;
}

void Circle::homothety(struct point p,float k)
{
     Shape::homothety(p, k);
     r=abs(k)*r;
}

float Circle::area()
{
     float a=PI*r*r;
     return a;
     //cout <<"Im a circle with an area equal to "<<A <<endl;
}

